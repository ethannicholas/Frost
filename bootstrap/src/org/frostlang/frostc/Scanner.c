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
org$frostlang$frostc$Scanner$class_type org$frostlang$frostc$Scanner$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Scanner$cleanup, org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type, org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64, org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations, org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode, org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64, org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit, org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q, org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode, org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q, org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT, org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT, org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String, org$frostlang$frostc$Scanner$scan$frost$io$File$org$frostlang$frostc$ASTNode$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT} };

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
typedef frost$collections$Iterator* (*$fn1436)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1440)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1445)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1473)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1477)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1482)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1496)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1500)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1505)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1537)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1541)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1546)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1596)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1600)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1605)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1660)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1698)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1702)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1707)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn1762)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn1776)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1780)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1785)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1831)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1867)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2179)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2183)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2188)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2201)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2217)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2266)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2270)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2275)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2325)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2343)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2354)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2358)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2363)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2394)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2441)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2445)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2450)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2484)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2511)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2515)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2520)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2532)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2547)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2560)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2574)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2584)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2618)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2627)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2638)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2671)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2680)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2693)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2697)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2702)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2710)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2756)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2760)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2765)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2777)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn2812)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2934)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2938)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2943)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3083)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3115)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3119)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3124)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn3378)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3403)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3444)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3498)(org$frostlang$frostc$ASTNode*);

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
static frost$core$String $s1564 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static frost$core$String $s1566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1567 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6d\x70\x6c\x65\x78\x69\x74\x79\x28\x6e\x6f\x64\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 125, -4969590453849429027, NULL };
static frost$core$String $s1633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1651 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1694 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s1743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1757 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 135, -5799500546547409163, NULL };
static frost$core$String $s1812 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1819 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1820 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1839 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1847 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, -4207800433812468905, NULL };
static frost$core$String $s1882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static frost$core$String $s1971 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1972 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 97, -8085247999762319848, NULL };
static frost$core$String $s1979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1980 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, -3290155743948325893, NULL };
static frost$core$String $s2037 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2038 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2049 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2050 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2055 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2056 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2062 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2066 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2074 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2075 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2093 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2094 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static frost$core$String $s2143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s2169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s2214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s2252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s2311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s2320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static frost$core$String $s2350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s2407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s2427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s2495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static frost$core$String $s2500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static frost$core$String $s2540 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2563 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static frost$core$String $s2581 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2598 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2724 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static frost$core$String $s2774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2782 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static frost$core$String $s2784 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2786 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2808 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2809 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2819 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2820 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2830 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2847 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2848 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2859 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2879 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2889 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2901 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s2911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2912 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s2926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s2928 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s2970 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2980 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s3038 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3039 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3087 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static frost$core$String $s3101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s3103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s3105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s3156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static frost$core$String $s3185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s3197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s3215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, -3290155743948325893, NULL };
static frost$core$String $s3272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 97, -8085247999762319848, NULL };
static frost$core$String $s3276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, -3290155743948325893, NULL };
static frost$core$String $s3304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3324 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, -3290155743948325893, NULL };
static frost$core$String $s3331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 97, -8085247999762319848, NULL };
static frost$core$String $s3372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3456 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3486 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static frost$core$String $s3488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s3495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static frost$core$String $s3503 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3521 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3522 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x73\x63\x61\x6e\x28\x73\x6f\x75\x72\x63\x65\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x66\x69\x6c\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 181, -4455204424448464455, NULL };

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
frost$core$Int64 $tmp139 = (frost$core$Int64) {94};
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
frost$core$Int64 $tmp144 = (frost$core$Int64) {95};
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
frost$core$Int64 $tmp149 = (frost$core$Int64) {96};
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
frost$core$Int64 $tmp154 = (frost$core$Int64) {97};
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
frost$core$Int64 $tmp662 = (frost$core$Int64) {51};
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
frost$core$Int64 $tmp745 = (frost$core$Int64) {48};
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
frost$core$Int64 $tmp1406 = (frost$core$Int64) {43};
frost$core$Bit $tmp1407 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1406);
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block111; else goto block112;
block111:;
// line 441
frost$core$Int64 $tmp1409 = (frost$core$Int64) {10};
return $tmp1409;
block112:;
frost$core$Int64 $tmp1410 = (frost$core$Int64) {46};
frost$core$Bit $tmp1411 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1410);
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block113; else goto block114;
block113:;
// line 444
frost$core$Int64 $tmp1413 = (frost$core$Int64) {0};
return $tmp1413;
block114:;
frost$core$Int64 $tmp1414 = (frost$core$Int64) {47};
frost$core$Bit $tmp1415 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1414);
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block115; else goto block116;
block115:;
// line 447
frost$core$Int64 $tmp1417 = (frost$core$Int64) {10};
return $tmp1417;
block116:;
frost$core$Int64 $tmp1418 = (frost$core$Int64) {49};
frost$core$Bit $tmp1419 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1418);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block117; else goto block118;
block117:;
// line 450
frost$core$Int64 $tmp1421 = (frost$core$Int64) {10};
return $tmp1421;
block118:;
frost$core$Int64 $tmp1422 = (frost$core$Int64) {51};
frost$core$Bit $tmp1423 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1422);
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block119; else goto block120;
block119:;
org$frostlang$frostc$Position* $tmp1425 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1426 = *$tmp1425;
org$frostlang$frostc$Variable$Kind* $tmp1427 = (org$frostlang$frostc$Variable$Kind*) (param1->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp1428 = *$tmp1427;
org$frostlang$frostc$FixedArray** $tmp1429 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1430 = *$tmp1429;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
org$frostlang$frostc$FixedArray* $tmp1431 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
*(&local41) = $tmp1430;
// line 453
frost$core$Int64 $tmp1432 = (frost$core$Int64) {0};
*(&local42) = $tmp1432;
// line 454
org$frostlang$frostc$FixedArray* $tmp1433 = *(&local41);
ITable* $tmp1434 = ((frost$collections$Iterable*) $tmp1433)->$class->itable;
while ($tmp1434->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1434 = $tmp1434->next;
}
$fn1436 $tmp1435 = $tmp1434->methods[0];
frost$collections$Iterator* $tmp1437 = $tmp1435(((frost$collections$Iterable*) $tmp1433));
goto block121;
block121:;
ITable* $tmp1438 = $tmp1437->$class->itable;
while ($tmp1438->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1438 = $tmp1438->next;
}
$fn1440 $tmp1439 = $tmp1438->methods[0];
frost$core$Bit $tmp1441 = $tmp1439($tmp1437);
bool $tmp1442 = $tmp1441.value;
if ($tmp1442) goto block123; else goto block122;
block122:;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1443 = $tmp1437->$class->itable;
while ($tmp1443->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1443 = $tmp1443->next;
}
$fn1445 $tmp1444 = $tmp1443->methods[1];
frost$core$Object* $tmp1446 = $tmp1444($tmp1437);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1446)));
org$frostlang$frostc$ASTNode* $tmp1447 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
*(&local43) = ((org$frostlang$frostc$ASTNode*) $tmp1446);
// line 455
frost$core$Int64 $tmp1448 = *(&local42);
org$frostlang$frostc$ASTNode* $tmp1449 = *(&local43);
frost$core$Int64 $tmp1450 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1449);
int64_t $tmp1451 = $tmp1448.value;
int64_t $tmp1452 = $tmp1450.value;
int64_t $tmp1453 = $tmp1451 + $tmp1452;
frost$core$Int64 $tmp1454 = (frost$core$Int64) {$tmp1453};
*(&local42) = $tmp1454;
frost$core$Frost$unref$frost$core$Object$Q($tmp1446);
// unreffing REF($1232:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1455 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
// unreffing decl
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block121;
block123:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
// unreffing REF($1221:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 457
frost$core$Int64 $tmp1456 = *(&local42);
org$frostlang$frostc$FixedArray* $tmp1457 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
// unreffing decls
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1456;
block120:;
frost$core$Int64 $tmp1458 = (frost$core$Int64) {52};
frost$core$Bit $tmp1459 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1458);
bool $tmp1460 = $tmp1459.value;
if ($tmp1460) goto block124; else goto block125;
block124:;
org$frostlang$frostc$Position* $tmp1461 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1462 = *$tmp1461;
org$frostlang$frostc$FixedArray** $tmp1463 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1464 = *$tmp1463;
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
org$frostlang$frostc$FixedArray* $tmp1465 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
*(&local44) = $tmp1464;
org$frostlang$frostc$FixedArray** $tmp1466 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1467 = *$tmp1466;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
org$frostlang$frostc$FixedArray* $tmp1468 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local45) = $tmp1467;
// line 460
frost$core$Int64 $tmp1469 = (frost$core$Int64) {0};
*(&local46) = $tmp1469;
// line 461
org$frostlang$frostc$FixedArray* $tmp1470 = *(&local44);
ITable* $tmp1471 = ((frost$collections$Iterable*) $tmp1470)->$class->itable;
while ($tmp1471->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1471 = $tmp1471->next;
}
$fn1473 $tmp1472 = $tmp1471->methods[0];
frost$collections$Iterator* $tmp1474 = $tmp1472(((frost$collections$Iterable*) $tmp1470));
goto block126;
block126:;
ITable* $tmp1475 = $tmp1474->$class->itable;
while ($tmp1475->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1475 = $tmp1475->next;
}
$fn1477 $tmp1476 = $tmp1475->methods[0];
frost$core$Bit $tmp1478 = $tmp1476($tmp1474);
bool $tmp1479 = $tmp1478.value;
if ($tmp1479) goto block128; else goto block127;
block127:;
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1480 = $tmp1474->$class->itable;
while ($tmp1480->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1480 = $tmp1480->next;
}
$fn1482 $tmp1481 = $tmp1480->methods[1];
frost$core$Object* $tmp1483 = $tmp1481($tmp1474);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1483)));
org$frostlang$frostc$ASTNode* $tmp1484 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
*(&local47) = ((org$frostlang$frostc$ASTNode*) $tmp1483);
// line 462
frost$core$Int64 $tmp1485 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1486 = *(&local47);
frost$core$Int64 $tmp1487 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1486);
int64_t $tmp1488 = $tmp1485.value;
int64_t $tmp1489 = $tmp1487.value;
int64_t $tmp1490 = $tmp1488 + $tmp1489;
frost$core$Int64 $tmp1491 = (frost$core$Int64) {$tmp1490};
*(&local46) = $tmp1491;
frost$core$Frost$unref$frost$core$Object$Q($tmp1483);
// unreffing REF($1312:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1492 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
// unreffing test
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block126;
block128:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
// unreffing REF($1301:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 464
org$frostlang$frostc$FixedArray* $tmp1493 = *(&local45);
ITable* $tmp1494 = ((frost$collections$Iterable*) $tmp1493)->$class->itable;
while ($tmp1494->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1494 = $tmp1494->next;
}
$fn1496 $tmp1495 = $tmp1494->methods[0];
frost$collections$Iterator* $tmp1497 = $tmp1495(((frost$collections$Iterable*) $tmp1493));
goto block129;
block129:;
ITable* $tmp1498 = $tmp1497->$class->itable;
while ($tmp1498->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1498 = $tmp1498->next;
}
$fn1500 $tmp1499 = $tmp1498->methods[0];
frost$core$Bit $tmp1501 = $tmp1499($tmp1497);
bool $tmp1502 = $tmp1501.value;
if ($tmp1502) goto block131; else goto block130;
block130:;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1503 = $tmp1497->$class->itable;
while ($tmp1503->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1503 = $tmp1503->next;
}
$fn1505 $tmp1504 = $tmp1503->methods[1];
frost$core$Object* $tmp1506 = $tmp1504($tmp1497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1506)));
org$frostlang$frostc$ASTNode* $tmp1507 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
*(&local48) = ((org$frostlang$frostc$ASTNode*) $tmp1506);
// line 465
frost$core$Int64 $tmp1508 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1509 = *(&local48);
frost$core$Int64 $tmp1510 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1509);
int64_t $tmp1511 = $tmp1508.value;
int64_t $tmp1512 = $tmp1510.value;
int64_t $tmp1513 = $tmp1511 + $tmp1512;
frost$core$Int64 $tmp1514 = (frost$core$Int64) {$tmp1513};
*(&local46) = $tmp1514;
frost$core$Frost$unref$frost$core$Object$Q($tmp1506);
// unreffing REF($1357:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1515 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
// unreffing s
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block129;
block131:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
// unreffing REF($1346:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 467
frost$core$Int64 $tmp1516 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp1517 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
// unreffing statements
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1518 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
// unreffing tests
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1516;
block125:;
frost$core$Int64 $tmp1519 = (frost$core$Int64) {53};
frost$core$Bit $tmp1520 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1519);
bool $tmp1521 = $tmp1520.value;
if ($tmp1521) goto block132; else goto block133;
block132:;
org$frostlang$frostc$Position* $tmp1522 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1523 = *$tmp1522;
frost$core$String** $tmp1524 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1525 = *$tmp1524;
org$frostlang$frostc$ASTNode** $tmp1526 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1527 = *$tmp1526;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
org$frostlang$frostc$ASTNode* $tmp1528 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1528));
*(&local49) = $tmp1527;
org$frostlang$frostc$FixedArray** $tmp1529 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1530 = *$tmp1529;
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
org$frostlang$frostc$FixedArray* $tmp1531 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
*(&local50) = $tmp1530;
// line 470
org$frostlang$frostc$ASTNode* $tmp1532 = *(&local49);
frost$core$Int64 $tmp1533 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1532);
*(&local51) = $tmp1533;
// line 471
org$frostlang$frostc$FixedArray* $tmp1534 = *(&local50);
ITable* $tmp1535 = ((frost$collections$Iterable*) $tmp1534)->$class->itable;
while ($tmp1535->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1535 = $tmp1535->next;
}
$fn1537 $tmp1536 = $tmp1535->methods[0];
frost$collections$Iterator* $tmp1538 = $tmp1536(((frost$collections$Iterable*) $tmp1534));
goto block134;
block134:;
ITable* $tmp1539 = $tmp1538->$class->itable;
while ($tmp1539->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1539 = $tmp1539->next;
}
$fn1541 $tmp1540 = $tmp1539->methods[0];
frost$core$Bit $tmp1542 = $tmp1540($tmp1538);
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block136; else goto block135;
block135:;
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1544 = $tmp1538->$class->itable;
while ($tmp1544->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1544 = $tmp1544->next;
}
$fn1546 $tmp1545 = $tmp1544->methods[1];
frost$core$Object* $tmp1547 = $tmp1545($tmp1538);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1547)));
org$frostlang$frostc$ASTNode* $tmp1548 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
*(&local52) = ((org$frostlang$frostc$ASTNode*) $tmp1547);
// line 472
frost$core$Int64 $tmp1549 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp1550 = *(&local52);
frost$core$Int64 $tmp1551 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1550);
int64_t $tmp1552 = $tmp1549.value;
int64_t $tmp1553 = $tmp1551.value;
int64_t $tmp1554 = $tmp1552 + $tmp1553;
frost$core$Int64 $tmp1555 = (frost$core$Int64) {$tmp1554};
*(&local51) = $tmp1555;
frost$core$Frost$unref$frost$core$Object$Q($tmp1547);
// unreffing REF($1445:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1556 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
// unreffing s
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block134;
block136:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
// unreffing REF($1434:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 474
frost$core$Int64 $tmp1557 = *(&local51);
org$frostlang$frostc$FixedArray* $tmp1558 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
// unreffing statements
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1559 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
// unreffing test
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1557;
block133:;
// line 477
frost$core$Bit $tmp1560 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1561 = $tmp1560.value;
if ($tmp1561) goto block137; else goto block138;
block138:;
frost$core$Int64 $tmp1562 = (frost$core$Int64) {477};
frost$core$String* $tmp1563 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1564, ((frost$core$Object*) param1));
frost$core$String* $tmp1565 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1563, &$s1566);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1567, $tmp1562, $tmp1565);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
// unreffing REF($1494:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
// unreffing REF($1493:frost.core.String)
abort(); // unreachable
block137:;
goto block1;
block1:;
frost$core$Bit $tmp1568 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1569 = $tmp1568.value;
if ($tmp1569) goto block139; else goto block140;
block140:;
frost$core$Int64 $tmp1570 = (frost$core$Int64) {292};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1571, $tmp1570, &$s1572);
abort(); // unreachable
block139:;
abort(); // unreachable

}
frost$core$Bit org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Annotations* param1, frost$collections$ListView* param2) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Int64 local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 483
frost$core$Weak** $tmp1573 = &param0->compiler;
frost$core$Weak* $tmp1574 = *$tmp1573;
frost$core$Object* $tmp1575 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1574);
org$frostlang$frostc$Compiler$Settings** $tmp1576 = &((org$frostlang$frostc$Compiler*) $tmp1575)->settings;
org$frostlang$frostc$Compiler$Settings* $tmp1577 = *$tmp1576;
frost$core$Int64* $tmp1578 = &$tmp1577->optimizationLevel;
frost$core$Int64 $tmp1579 = *$tmp1578;
frost$core$Int64 $tmp1580 = (frost$core$Int64) {0};
int64_t $tmp1581 = $tmp1579.value;
int64_t $tmp1582 = $tmp1580.value;
bool $tmp1583 = $tmp1581 > $tmp1582;
frost$core$Bit $tmp1584 = (frost$core$Bit) {$tmp1583};
bool $tmp1585 = $tmp1584.value;
if ($tmp1585) goto block3; else goto block4;
block3:;
frost$core$Bit $tmp1586 = org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(param1);
frost$core$Bit $tmp1587 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1586);
*(&local1) = $tmp1587;
goto block5;
block4:;
*(&local1) = $tmp1584;
goto block5;
block5:;
frost$core$Bit $tmp1588 = *(&local1);
bool $tmp1589 = $tmp1588.value;
if ($tmp1589) goto block6; else goto block7;
block6:;
frost$core$Bit $tmp1590 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(param1);
*(&local0) = $tmp1590;
goto block8;
block7:;
*(&local0) = $tmp1588;
goto block8;
block8:;
frost$core$Bit $tmp1591 = *(&local0);
bool $tmp1592 = $tmp1591.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1575);
// unreffing REF($4:frost.core.Weak.T)
if ($tmp1592) goto block1; else goto block2;
block1:;
// line 485
frost$core$Int64 $tmp1593 = (frost$core$Int64) {0};
*(&local2) = $tmp1593;
// line 486
ITable* $tmp1594 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp1594->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1594 = $tmp1594->next;
}
$fn1596 $tmp1595 = $tmp1594->methods[0];
frost$collections$Iterator* $tmp1597 = $tmp1595(((frost$collections$Iterable*) param2));
goto block9;
block9:;
ITable* $tmp1598 = $tmp1597->$class->itable;
while ($tmp1598->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1598 = $tmp1598->next;
}
$fn1600 $tmp1599 = $tmp1598->methods[0];
frost$core$Bit $tmp1601 = $tmp1599($tmp1597);
bool $tmp1602 = $tmp1601.value;
if ($tmp1602) goto block11; else goto block10;
block10:;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1603 = $tmp1597->$class->itable;
while ($tmp1603->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1603 = $tmp1603->next;
}
$fn1605 $tmp1604 = $tmp1603->methods[1];
frost$core$Object* $tmp1606 = $tmp1604($tmp1597);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1606)));
org$frostlang$frostc$ASTNode* $tmp1607 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp1606);
// line 487
frost$core$Int64 $tmp1608 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp1609 = *(&local3);
frost$core$Int64 $tmp1610 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1609);
int64_t $tmp1611 = $tmp1608.value;
int64_t $tmp1612 = $tmp1610.value;
int64_t $tmp1613 = $tmp1611 + $tmp1612;
frost$core$Int64 $tmp1614 = (frost$core$Int64) {$tmp1613};
*(&local2) = $tmp1614;
// line 488
frost$core$Int64 $tmp1615 = *(&local2);
frost$core$Int64 $tmp1616 = (frost$core$Int64) {10};
int64_t $tmp1617 = $tmp1615.value;
int64_t $tmp1618 = $tmp1616.value;
bool $tmp1619 = $tmp1617 > $tmp1618;
frost$core$Bit $tmp1620 = (frost$core$Bit) {$tmp1619};
bool $tmp1621 = $tmp1620.value;
if ($tmp1621) goto block12; else goto block13;
block12:;
// line 489
frost$core$Bit $tmp1622 = frost$core$Bit$init$builtin_bit(false);
frost$core$Frost$unref$frost$core$Object$Q($tmp1606);
// unreffing REF($55:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1623 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
// unreffing s
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
// unreffing REF($44:frost.collections.Iterator<frost.collections.Iterable.T>)
return $tmp1622;
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1606);
// unreffing REF($55:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1624 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
// unreffing s
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
// unreffing REF($44:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 492
frost$core$Bit $tmp1625 = frost$core$Bit$init$builtin_bit(true);
return $tmp1625;
block2:;
// line 494
frost$core$Bit $tmp1626 = frost$core$Bit$init$builtin_bit(false);
return $tmp1626;

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
// line 501
*(&local0) = ((frost$core$String*) NULL);
// line 503
frost$core$Bit $tmp1627 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1628 = $tmp1627.value;
if ($tmp1628) goto block1; else goto block3;
block1:;
// line 504
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp1629 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 507
frost$core$Bit $tmp1630 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp1631 = $tmp1630.value;
if ($tmp1631) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1632 = (frost$core$Int64) {507};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1633, $tmp1632, &$s1634);
abort(); // unreachable
block4:;
frost$core$Int64* $tmp1635 = &param3->$rawValue;
frost$core$Int64 $tmp1636 = *$tmp1635;
frost$core$Int64 $tmp1637 = (frost$core$Int64) {41};
frost$core$Bit $tmp1638 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1636, $tmp1637);
bool $tmp1639 = $tmp1638.value;
if ($tmp1639) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp1640 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp1641 = *$tmp1640;
*(&local1) = $tmp1641;
frost$core$String** $tmp1642 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1643 = *$tmp1642;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
frost$core$String* $tmp1644 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1644));
*(&local2) = $tmp1643;
// line 509
frost$core$String* $tmp1645 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
frost$core$String* $tmp1646 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
*(&local0) = $tmp1645;
frost$core$String* $tmp1647 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
goto block6;
block8:;
// line 512
frost$core$Bit $tmp1648 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1649 = $tmp1648.value;
if ($tmp1649) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1650 = (frost$core$Int64) {512};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1651, $tmp1650);
abort(); // unreachable
block9:;
goto block6;
block6:;
goto block2;
block2:;
// line 516
org$frostlang$frostc$Annotations* $tmp1652 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
org$frostlang$frostc$Annotations* $tmp1653 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local3) = $tmp1652;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
// unreffing REF($68:org.frostlang.frostc.Annotations)
// line 517
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1654;
$tmp1654 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1654->value = param5;
frost$core$Int64 $tmp1655 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1656 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1655);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1657;
$tmp1657 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1657->value = $tmp1656;
ITable* $tmp1658 = ((frost$core$Equatable*) $tmp1654)->$class->itable;
while ($tmp1658->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1658 = $tmp1658->next;
}
$fn1660 $tmp1659 = $tmp1658->methods[1];
frost$core$Bit $tmp1661 = $tmp1659(((frost$core$Equatable*) $tmp1654), ((frost$core$Equatable*) $tmp1657));
bool $tmp1662 = $tmp1661.value;
if ($tmp1662) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Annotations** $tmp1663 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1664 = *$tmp1663;
frost$core$Bit $tmp1665 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1664);
*(&local5) = $tmp1665;
goto block15;
block14:;
*(&local5) = $tmp1661;
goto block15;
block15:;
frost$core$Bit $tmp1666 = *(&local5);
bool $tmp1667 = $tmp1666.value;
if ($tmp1667) goto block16; else goto block17;
block16:;
*(&local4) = $tmp1666;
goto block18;
block17:;
org$frostlang$frostc$Annotations* $tmp1668 = *(&local3);
frost$core$Bit $tmp1669 = org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit($tmp1668);
*(&local4) = $tmp1669;
goto block18;
block18:;
frost$core$Bit $tmp1670 = *(&local4);
bool $tmp1671 = $tmp1670.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1657)));
// unreffing REF($84:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1654)));
// unreffing REF($80:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1671) goto block11; else goto block12;
block11:;
// line 518
org$frostlang$frostc$Annotations* $tmp1672 = *(&local3);
frost$core$Int64* $tmp1673 = &$tmp1672->flags;
frost$core$Int64 $tmp1674 = *$tmp1673;
frost$core$Int64 $tmp1675 = (frost$core$Int64) {256};
frost$core$Int64 $tmp1676 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1674, $tmp1675);
frost$core$Int64* $tmp1677 = &$tmp1672->flags;
*$tmp1677 = $tmp1676;
goto block12;
block12:;
// line 520
*(&local6) = ((frost$collections$Array*) NULL);
// line 521
frost$core$Bit $tmp1678 = frost$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1679 = $tmp1678.value;
if ($tmp1679) goto block19; else goto block21;
block19:;
// line 522
frost$collections$Array* $tmp1680 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1680);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
frost$collections$Array* $tmp1681 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
*(&local6) = $tmp1680;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
// unreffing REF($131:frost.collections.Array<org.frostlang.frostc.MethodDecl.GenericParameter>)
// line 523
frost$core$String** $tmp1682 = &param1->name;
frost$core$String* $tmp1683 = *$tmp1682;
frost$core$String* $tmp1684 = frost$core$String$get_asString$R$frost$core$String($tmp1683);
frost$core$String* $tmp1685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1684, &$s1686);
frost$core$String* $tmp1687 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1685, param6);
frost$core$String* $tmp1688 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1687, &$s1689);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
frost$core$String* $tmp1690 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
*(&local7) = $tmp1688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
// unreffing REF($150:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
// unreffing REF($149:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
// unreffing REF($148:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
// unreffing REF($147:frost.core.String)
// line 524
frost$core$Bit $tmp1691 = frost$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1692 = $tmp1691.value;
if ($tmp1692) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp1693 = (frost$core$Int64) {524};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1694, $tmp1693, &$s1695);
abort(); // unreachable
block22:;
ITable* $tmp1696 = ((frost$collections$Iterable*) param7)->$class->itable;
while ($tmp1696->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1696 = $tmp1696->next;
}
$fn1698 $tmp1697 = $tmp1696->methods[0];
frost$collections$Iterator* $tmp1699 = $tmp1697(((frost$collections$Iterable*) param7));
goto block24;
block24:;
ITable* $tmp1700 = $tmp1699->$class->itable;
while ($tmp1700->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1700 = $tmp1700->next;
}
$fn1702 $tmp1701 = $tmp1700->methods[0];
frost$core$Bit $tmp1703 = $tmp1701($tmp1699);
bool $tmp1704 = $tmp1703.value;
if ($tmp1704) goto block26; else goto block25;
block25:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1705 = $tmp1699->$class->itable;
while ($tmp1705->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1705 = $tmp1705->next;
}
$fn1707 $tmp1706 = $tmp1705->methods[1];
frost$core$Object* $tmp1708 = $tmp1706($tmp1699);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1708)));
org$frostlang$frostc$ASTNode* $tmp1709 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp1708);
// line 525
*(&local9) = ((frost$core$String*) NULL);
// line 526
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// line 527
org$frostlang$frostc$ASTNode* $tmp1710 = *(&local8);
frost$core$Int64* $tmp1711 = &$tmp1710->$rawValue;
frost$core$Int64 $tmp1712 = *$tmp1711;
frost$core$Int64 $tmp1713 = (frost$core$Int64) {22};
frost$core$Bit $tmp1714 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1712, $tmp1713);
bool $tmp1715 = $tmp1714.value;
if ($tmp1715) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp1716 = (org$frostlang$frostc$Position*) ($tmp1710->$data + 0);
org$frostlang$frostc$Position $tmp1717 = *$tmp1716;
frost$core$String** $tmp1718 = (frost$core$String**) ($tmp1710->$data + 16);
frost$core$String* $tmp1719 = *$tmp1718;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
frost$core$String* $tmp1720 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
*(&local11) = $tmp1719;
// line 529
frost$core$String* $tmp1721 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
frost$core$String* $tmp1722 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
*(&local9) = $tmp1721;
// line 530
org$frostlang$frostc$Type* $tmp1723 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
org$frostlang$frostc$Type* $tmp1724 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
*(&local10) = $tmp1723;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
// unreffing REF($232:org.frostlang.frostc.Type)
frost$core$String* $tmp1725 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
// unreffing id
*(&local11) = ((frost$core$String*) NULL);
goto block27;
block29:;
frost$core$Int64 $tmp1726 = (frost$core$Int64) {48};
frost$core$Bit $tmp1727 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1712, $tmp1726);
bool $tmp1728 = $tmp1727.value;
if ($tmp1728) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp1729 = (org$frostlang$frostc$Position*) ($tmp1710->$data + 0);
org$frostlang$frostc$Position $tmp1730 = *$tmp1729;
frost$core$String** $tmp1731 = (frost$core$String**) ($tmp1710->$data + 16);
frost$core$String* $tmp1732 = *$tmp1731;
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
frost$core$String* $tmp1733 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
*(&local12) = $tmp1732;
org$frostlang$frostc$ASTNode** $tmp1734 = (org$frostlang$frostc$ASTNode**) ($tmp1710->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1735 = *$tmp1734;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
org$frostlang$frostc$ASTNode* $tmp1736 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
*(&local13) = $tmp1735;
// line 533
frost$core$String* $tmp1737 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
frost$core$String* $tmp1738 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
*(&local9) = $tmp1737;
// line 534
org$frostlang$frostc$ASTNode* $tmp1739 = *(&local13);
frost$core$Bit $tmp1740 = frost$core$Bit$init$builtin_bit($tmp1739 != NULL);
bool $tmp1741 = $tmp1740.value;
if ($tmp1741) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp1742 = (frost$core$Int64) {534};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1743, $tmp1742, &$s1744);
abort(); // unreachable
block32:;
org$frostlang$frostc$Type* $tmp1745 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1739);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
org$frostlang$frostc$Type* $tmp1746 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1746));
*(&local10) = $tmp1745;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
// unreffing REF($290:org.frostlang.frostc.Type)
org$frostlang$frostc$ASTNode* $tmp1747 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
// unreffing type
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1748 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
// unreffing id
*(&local12) = ((frost$core$String*) NULL);
goto block27;
block31:;
// line 537
frost$core$Bit $tmp1749 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1750 = $tmp1749.value;
if ($tmp1750) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp1751 = (frost$core$Int64) {537};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1752, $tmp1751);
abort(); // unreachable
block34:;
goto block27;
block27:;
// line 540
frost$collections$Array* $tmp1753 = *(&local6);
frost$core$Bit $tmp1754 = frost$core$Bit$init$builtin_bit($tmp1753 != NULL);
bool $tmp1755 = $tmp1754.value;
if ($tmp1755) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp1756 = (frost$core$Int64) {540};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1757, $tmp1756, &$s1758);
abort(); // unreachable
block36:;
org$frostlang$frostc$MethodDecl$GenericParameter* $tmp1759 = (org$frostlang$frostc$MethodDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp1760 = *(&local8);
$fn1762 $tmp1761 = ($fn1762) $tmp1760->$class->vtable[2];
org$frostlang$frostc$Position $tmp1763 = $tmp1761($tmp1760);
frost$core$String* $tmp1764 = *(&local7);
frost$core$String* $tmp1765 = *(&local9);
org$frostlang$frostc$Type* $tmp1766 = *(&local10);
org$frostlang$frostc$MethodDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp1759, $tmp1763, $tmp1764, $tmp1765, $tmp1766);
frost$collections$Array$add$frost$collections$Array$T($tmp1753, ((frost$core$Object*) $tmp1759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
// unreffing REF($329:org.frostlang.frostc.MethodDecl.GenericParameter)
org$frostlang$frostc$Type* $tmp1767 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
// unreffing bound
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1768 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
// unreffing parameterName
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1708);
// unreffing REF($192:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1769 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
// unreffing p
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block24;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
// unreffing REF($181:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$String* $tmp1770 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
// unreffing fullName
*(&local7) = ((frost$core$String*) NULL);
goto block20;
block21:;
// line 1
// line 545
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp1771 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
*(&local6) = ((frost$collections$Array*) NULL);
goto block20;
block20:;
// line 547
frost$collections$Array* $tmp1772 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1772);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
frost$collections$Array* $tmp1773 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
*(&local14) = $tmp1772;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
// unreffing REF($380:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
// line 548
ITable* $tmp1774 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp1774->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1774 = $tmp1774->next;
}
$fn1776 $tmp1775 = $tmp1774->methods[0];
frost$collections$Iterator* $tmp1777 = $tmp1775(((frost$collections$Iterable*) param8));
goto block38;
block38:;
ITable* $tmp1778 = $tmp1777->$class->itable;
while ($tmp1778->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1778 = $tmp1778->next;
}
$fn1780 $tmp1779 = $tmp1778->methods[0];
frost$core$Bit $tmp1781 = $tmp1779($tmp1777);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block40; else goto block39;
block39:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1783 = $tmp1777->$class->itable;
while ($tmp1783->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1783 = $tmp1783->next;
}
$fn1785 $tmp1784 = $tmp1783->methods[1];
frost$core$Object* $tmp1786 = $tmp1784($tmp1777);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1786)));
org$frostlang$frostc$ASTNode* $tmp1787 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp1786);
// line 549
org$frostlang$frostc$ASTNode* $tmp1788 = *(&local15);
frost$core$Int64* $tmp1789 = &$tmp1788->$rawValue;
frost$core$Int64 $tmp1790 = *$tmp1789;
frost$core$Int64 $tmp1791 = (frost$core$Int64) {34};
frost$core$Bit $tmp1792 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1790, $tmp1791);
bool $tmp1793 = $tmp1792.value;
if ($tmp1793) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp1794 = (org$frostlang$frostc$Position*) ($tmp1788->$data + 0);
org$frostlang$frostc$Position $tmp1795 = *$tmp1794;
frost$core$String** $tmp1796 = (frost$core$String**) ($tmp1788->$data + 16);
frost$core$String* $tmp1797 = *$tmp1796;
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
frost$core$String* $tmp1798 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
*(&local16) = $tmp1797;
org$frostlang$frostc$ASTNode** $tmp1799 = (org$frostlang$frostc$ASTNode**) ($tmp1788->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1800 = *$tmp1799;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
org$frostlang$frostc$ASTNode* $tmp1801 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
*(&local17) = $tmp1800;
// line 551
frost$collections$Array* $tmp1802 = *(&local14);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1803 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1804 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1805 = *(&local17);
org$frostlang$frostc$Type* $tmp1806 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1805);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp1803, $tmp1804, $tmp1806);
frost$collections$Array$add$frost$collections$Array$T($tmp1802, ((frost$core$Object*) $tmp1803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
// unreffing REF($450:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
// unreffing REF($447:org.frostlang.frostc.MethodDecl.Parameter)
org$frostlang$frostc$ASTNode* $tmp1807 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
// unreffing type
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1808 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
// unreffing name
*(&local16) = ((frost$core$String*) NULL);
goto block41;
block43:;
// line 554
frost$core$Bit $tmp1809 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1810 = $tmp1809.value;
if ($tmp1810) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp1811 = (frost$core$Int64) {554};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1812, $tmp1811);
abort(); // unreachable
block44:;
goto block41;
block41:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1786);
// unreffing REF($408:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1813 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
// unreffing p
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block38;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
// unreffing REF($397:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 558
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
// line 559
frost$core$Bit $tmp1814 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1815 = $tmp1814.value;
if ($tmp1815) goto block46; else goto block48;
block46:;
// line 560
frost$core$Bit $tmp1816 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1817 = $tmp1816.value;
if ($tmp1817) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1818 = (frost$core$Int64) {560};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1819, $tmp1818, &$s1820);
abort(); // unreachable
block49:;
org$frostlang$frostc$Type* $tmp1821 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, param9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
org$frostlang$frostc$Type* $tmp1822 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
*(&local18) = $tmp1821;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
// unreffing REF($507:org.frostlang.frostc.Type)
goto block47;
block48:;
// line 1
// line 563
org$frostlang$frostc$Type* $tmp1823 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
org$frostlang$frostc$Type* $tmp1824 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
*(&local18) = $tmp1823;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
// unreffing REF($520:org.frostlang.frostc.Type)
goto block47;
block47:;
// line 565
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1825;
$tmp1825 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1825->value = param5;
frost$core$Int64 $tmp1826 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp1827 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1826);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1828;
$tmp1828 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1828->value = $tmp1827;
ITable* $tmp1829 = ((frost$core$Equatable*) $tmp1825)->$class->itable;
while ($tmp1829->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1829 = $tmp1829->next;
}
$fn1831 $tmp1830 = $tmp1829->methods[0];
frost$core$Bit $tmp1832 = $tmp1830(((frost$core$Equatable*) $tmp1825), ((frost$core$Equatable*) $tmp1828));
bool $tmp1833 = $tmp1832.value;
if ($tmp1833) goto block53; else goto block54;
block53:;
org$frostlang$frostc$Type* $tmp1834 = *(&local18);
org$frostlang$frostc$Type* $tmp1835 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1836 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1834, $tmp1835);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
// unreffing REF($542:org.frostlang.frostc.Type)
*(&local19) = $tmp1836;
goto block55;
block54:;
*(&local19) = $tmp1832;
goto block55;
block55:;
frost$core$Bit $tmp1837 = *(&local19);
bool $tmp1838 = $tmp1837.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1828)));
// unreffing REF($536:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1825)));
// unreffing REF($532:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1838) goto block51; else goto block52;
block51:;
// line 566
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param2, &$s1839);
goto block52;
block52:;
// line 568
frost$core$Bit $tmp1840 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1841 = $tmp1840.value;
if ($tmp1841) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Annotations* $tmp1842 = *(&local3);
frost$core$Bit $tmp1843 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1844 = $tmp1843.value;
if ($tmp1844) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp1845 = (frost$core$Int64) {568};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1846, $tmp1845, &$s1847);
abort(); // unreachable
block61:;
frost$core$Bit $tmp1848 = org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(param0, $tmp1842, ((frost$collections$ListView*) param10));
*(&local20) = $tmp1848;
goto block60;
block59:;
*(&local20) = $tmp1840;
goto block60;
block60:;
frost$core$Bit $tmp1849 = *(&local20);
bool $tmp1850 = $tmp1849.value;
if ($tmp1850) goto block56; else goto block57;
block56:;
// line 569
org$frostlang$frostc$Annotations* $tmp1851 = *(&local3);
frost$core$Int64* $tmp1852 = &$tmp1851->flags;
frost$core$Int64 $tmp1853 = *$tmp1852;
frost$core$Int64 $tmp1854 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp1855 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1853, $tmp1854);
frost$core$Int64* $tmp1856 = &$tmp1851->flags;
*$tmp1856 = $tmp1855;
goto block57;
block57:;
// line 571
frost$core$Bit $tmp1857 = frost$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp1858 = $tmp1857.value;
if ($tmp1858) goto block65; else goto block66;
block65:;
org$frostlang$frostc$ClassDecl$Kind* $tmp1859 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1860 = *$tmp1859;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1861;
$tmp1861 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1861->value = $tmp1860;
frost$core$Int64 $tmp1862 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp1863 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp1862);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1864;
$tmp1864 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1864->value = $tmp1863;
ITable* $tmp1865 = ((frost$core$Equatable*) $tmp1861)->$class->itable;
while ($tmp1865->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1865 = $tmp1865->next;
}
$fn1867 $tmp1866 = $tmp1865->methods[0];
frost$core$Bit $tmp1868 = $tmp1866(((frost$core$Equatable*) $tmp1861), ((frost$core$Equatable*) $tmp1864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1864)));
// unreffing REF($605:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1861)));
// unreffing REF($601:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
*(&local21) = $tmp1868;
goto block67;
block66:;
*(&local21) = $tmp1857;
goto block67;
block67:;
frost$core$Bit $tmp1869 = *(&local21);
bool $tmp1870 = $tmp1869.value;
if ($tmp1870) goto block63; else goto block64;
block63:;
// line 572
org$frostlang$frostc$Annotations* $tmp1871 = *(&local3);
frost$core$Int64* $tmp1872 = &$tmp1871->flags;
frost$core$Int64 $tmp1873 = *$tmp1872;
frost$core$Int64 $tmp1874 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1875 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp1873, $tmp1874);
frost$core$Int64 $tmp1876 = (frost$core$Int64) {0};
int64_t $tmp1877 = $tmp1875.value;
int64_t $tmp1878 = $tmp1876.value;
bool $tmp1879 = $tmp1877 != $tmp1878;
frost$core$Bit $tmp1880 = (frost$core$Bit) {$tmp1879};
bool $tmp1881 = $tmp1880.value;
if ($tmp1881) goto block68; else goto block69;
block68:;
// line 573
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param2, &$s1882);
goto block69;
block69:;
// line 576
org$frostlang$frostc$Annotations* $tmp1883 = *(&local3);
frost$core$Int64* $tmp1884 = &$tmp1883->flags;
frost$core$Int64 $tmp1885 = *$tmp1884;
frost$core$Int64 $tmp1886 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1887 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1885, $tmp1886);
frost$core$Int64* $tmp1888 = &$tmp1883->flags;
*$tmp1888 = $tmp1887;
goto block64;
block64:;
// line 578
org$frostlang$frostc$MethodDecl* $tmp1889 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$core$String* $tmp1890 = *(&local0);
org$frostlang$frostc$Annotations* $tmp1891 = *(&local3);
frost$collections$Array* $tmp1892 = *(&local6);
frost$collections$Array* $tmp1893 = *(&local14);
org$frostlang$frostc$Type* $tmp1894 = *(&local18);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp1889, param1, param2, $tmp1890, $tmp1891, param5, param6, $tmp1892, $tmp1893, $tmp1894, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
// unreffing REF($647:org.frostlang.frostc.MethodDecl)
org$frostlang$frostc$Type* $tmp1895 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
// unreffing returnType
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1896 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
// unreffing parameters
*(&local14) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1897 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
// unreffing generics
*(&local6) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp1898 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
// unreffing annotations
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp1899 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
// unreffing doccomment
*(&local0) = ((frost$core$String*) NULL);
return $tmp1889;

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
// line 583
frost$core$Int64* $tmp1900 = &param2->$rawValue;
frost$core$Int64 $tmp1901 = *$tmp1900;
frost$core$Int64 $tmp1902 = (frost$core$Int64) {18};
frost$core$Bit $tmp1903 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1901, $tmp1902);
bool $tmp1904 = $tmp1903.value;
if ($tmp1904) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1905 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1906 = *$tmp1905;
*(&local0) = $tmp1906;
org$frostlang$frostc$ASTNode** $tmp1907 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1908 = *$tmp1907;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
org$frostlang$frostc$ASTNode* $tmp1909 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
*(&local1) = $tmp1908;
org$frostlang$frostc$FixedArray** $tmp1910 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1911 = *$tmp1910;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
org$frostlang$frostc$FixedArray* $tmp1912 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local2) = $tmp1911;
org$frostlang$frostc$ASTNode** $tmp1913 = (org$frostlang$frostc$ASTNode**) (param2->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1914 = *$tmp1913;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
org$frostlang$frostc$ASTNode* $tmp1915 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
*(&local3) = $tmp1914;
// line 585
org$frostlang$frostc$Position $tmp1916 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp1917 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1918 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp1919 = *(&local3);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, param1, $tmp1916, $tmp1917, $tmp1918, $tmp1919);
org$frostlang$frostc$ASTNode* $tmp1920 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
// unreffing varDecl
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1921 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
// unreffing annotations
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1922 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
// unreffing dc
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp1923 = (frost$core$Int64) {29};
frost$core$Bit $tmp1924 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1901, $tmp1923);
bool $tmp1925 = $tmp1924.value;
if ($tmp1925) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp1926 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1927 = *$tmp1926;
*(&local4) = $tmp1927;
org$frostlang$frostc$ASTNode** $tmp1928 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1929 = *$tmp1928;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
org$frostlang$frostc$ASTNode* $tmp1930 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
*(&local5) = $tmp1929;
org$frostlang$frostc$FixedArray** $tmp1931 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1932 = *$tmp1931;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
org$frostlang$frostc$FixedArray* $tmp1933 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
*(&local6) = $tmp1932;
org$frostlang$frostc$MethodDecl$Kind* $tmp1934 = (org$frostlang$frostc$MethodDecl$Kind*) (param2->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp1935 = *$tmp1934;
*(&local7) = $tmp1935;
frost$core$String** $tmp1936 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp1937 = *$tmp1936;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
frost$core$String* $tmp1938 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
*(&local8) = $tmp1937;
org$frostlang$frostc$FixedArray** $tmp1939 = (org$frostlang$frostc$FixedArray**) (param2->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1940 = *$tmp1939;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
org$frostlang$frostc$FixedArray* $tmp1941 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
*(&local9) = $tmp1940;
org$frostlang$frostc$FixedArray** $tmp1942 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1943 = *$tmp1942;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
org$frostlang$frostc$FixedArray* $tmp1944 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
*(&local10) = $tmp1943;
org$frostlang$frostc$ASTNode** $tmp1945 = (org$frostlang$frostc$ASTNode**) (param2->$data + 64);
org$frostlang$frostc$ASTNode* $tmp1946 = *$tmp1945;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
org$frostlang$frostc$ASTNode* $tmp1947 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
*(&local11) = $tmp1946;
org$frostlang$frostc$FixedArray** $tmp1948 = (org$frostlang$frostc$FixedArray**) (param2->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1949 = *$tmp1948;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
org$frostlang$frostc$FixedArray* $tmp1950 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
*(&local12) = $tmp1949;
// line 589
org$frostlang$frostc$Position $tmp1951 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp1952 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp1953 = *(&local6);
org$frostlang$frostc$MethodDecl$Kind $tmp1954 = *(&local7);
frost$core$String* $tmp1955 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp1956 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp1957 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp1958 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp1959 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp1960 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, param1, $tmp1951, $tmp1952, $tmp1953, $tmp1954, $tmp1955, $tmp1956, $tmp1957, $tmp1958, $tmp1959);
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
org$frostlang$frostc$MethodDecl* $tmp1961 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
*(&local13) = $tmp1960;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
// unreffing REF($142:org.frostlang.frostc.MethodDecl?)
// line 591
org$frostlang$frostc$MethodDecl* $tmp1962 = *(&local13);
frost$core$Bit $tmp1963 = frost$core$Bit$init$builtin_bit($tmp1962 != NULL);
bool $tmp1964 = $tmp1963.value;
if ($tmp1964) goto block6; else goto block7;
block6:;
// line 592
org$frostlang$frostc$SymbolTable** $tmp1965 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1966 = *$tmp1965;
org$frostlang$frostc$MethodDecl* $tmp1967 = *(&local13);
frost$core$Bit $tmp1968 = frost$core$Bit$init$builtin_bit($tmp1967 != NULL);
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp1970 = (frost$core$Int64) {592};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1971, $tmp1970, &$s1972);
abort(); // unreachable
block8:;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp1966, ((org$frostlang$frostc$Symbol*) $tmp1967));
// line 593
frost$collections$Array** $tmp1973 = &param1->methods;
frost$collections$Array* $tmp1974 = *$tmp1973;
org$frostlang$frostc$MethodDecl* $tmp1975 = *(&local13);
frost$core$Bit $tmp1976 = frost$core$Bit$init$builtin_bit($tmp1975 != NULL);
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1978 = (frost$core$Int64) {593};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1979, $tmp1978, &$s1980);
abort(); // unreachable
block10:;
frost$collections$Array$add$frost$collections$Array$T($tmp1974, ((frost$core$Object*) $tmp1975));
goto block7;
block7:;
org$frostlang$frostc$MethodDecl* $tmp1981 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
// unreffing m
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp1982 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
// unreffing statements
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1983 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
// unreffing returnType
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1984 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
// unreffing parameters
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1985 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
// unreffing generics
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1986 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
// unreffing name
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1987 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
// unreffing annotations
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1988 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
// unreffing dc
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp1989 = (frost$core$Int64) {12};
frost$core$Bit $tmp1990 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1901, $tmp1989);
bool $tmp1991 = $tmp1990.value;
if ($tmp1991) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp1992 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1993 = *$tmp1992;
*(&local14) = $tmp1993;
org$frostlang$frostc$ASTNode** $tmp1994 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1995 = *$tmp1994;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
org$frostlang$frostc$ASTNode* $tmp1996 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
*(&local15) = $tmp1995;
org$frostlang$frostc$FixedArray** $tmp1997 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1998 = *$tmp1997;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
org$frostlang$frostc$FixedArray* $tmp1999 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
*(&local16) = $tmp1998;
org$frostlang$frostc$ClassDecl$Kind* $tmp2000 = (org$frostlang$frostc$ClassDecl$Kind*) (param2->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp2001 = *$tmp2000;
*(&local17) = $tmp2001;
frost$core$String** $tmp2002 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp2003 = *$tmp2002;
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
frost$core$String* $tmp2004 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
*(&local18) = $tmp2003;
org$frostlang$frostc$FixedArray** $tmp2005 = (org$frostlang$frostc$FixedArray**) (param2->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2006 = *$tmp2005;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
org$frostlang$frostc$FixedArray* $tmp2007 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
*(&local19) = $tmp2006;
org$frostlang$frostc$FixedArray** $tmp2008 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2009 = *$tmp2008;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
org$frostlang$frostc$FixedArray* $tmp2010 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
*(&local20) = $tmp2009;
org$frostlang$frostc$FixedArray** $tmp2011 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2012 = *$tmp2011;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
org$frostlang$frostc$FixedArray* $tmp2013 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
*(&local21) = $tmp2012;
// line 598
frost$io$File** $tmp2014 = &param1->source;
frost$io$File* $tmp2015 = *$tmp2014;
frost$collections$MapView** $tmp2016 = &param1->aliases;
frost$collections$MapView* $tmp2017 = *$tmp2016;
frost$core$String** $tmp2018 = &param1->name;
frost$core$String* $tmp2019 = *$tmp2018;
org$frostlang$frostc$Position $tmp2020 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2021 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp2022 = *(&local16);
org$frostlang$frostc$ClassDecl$Kind $tmp2023 = *(&local17);
frost$core$String* $tmp2024 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2025 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp2026 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp2027 = *(&local21);
org$frostlang$frostc$ClassDecl* $tmp2028 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2015, $tmp2017, $tmp2019, $tmp2020, $tmp2021, $tmp2022, $tmp2023, $tmp2024, $tmp2025, $tmp2026, $tmp2027);
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
org$frostlang$frostc$ClassDecl* $tmp2029 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
*(&local22) = $tmp2028;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
// unreffing REF($308:org.frostlang.frostc.ClassDecl?)
// line 600
org$frostlang$frostc$ClassDecl* $tmp2030 = *(&local22);
frost$core$Bit $tmp2031 = frost$core$Bit$init$builtin_bit($tmp2030 != NULL);
bool $tmp2032 = $tmp2031.value;
if ($tmp2032) goto block14; else goto block15;
block14:;
// line 601
org$frostlang$frostc$ClassDecl* $tmp2033 = *(&local22);
frost$core$Bit $tmp2034 = frost$core$Bit$init$builtin_bit($tmp2033 != NULL);
bool $tmp2035 = $tmp2034.value;
if ($tmp2035) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2036 = (frost$core$Int64) {601};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2037, $tmp2036, &$s2038);
abort(); // unreachable
block16:;
frost$core$Weak* $tmp2039 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp2039, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
frost$core$Weak** $tmp2040 = &$tmp2033->owner;
frost$core$Weak* $tmp2041 = *$tmp2040;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
frost$core$Weak** $tmp2042 = &$tmp2033->owner;
*$tmp2042 = $tmp2039;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
// unreffing REF($336:frost.core.Weak<org.frostlang.frostc.ClassDecl?>)
// line 602
frost$collections$Array** $tmp2043 = &param1->classes;
frost$collections$Array* $tmp2044 = *$tmp2043;
org$frostlang$frostc$ClassDecl* $tmp2045 = *(&local22);
frost$core$Bit $tmp2046 = frost$core$Bit$init$builtin_bit($tmp2045 != NULL);
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp2048 = (frost$core$Int64) {602};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2049, $tmp2048, &$s2050);
abort(); // unreachable
block18:;
frost$collections$Array$add$frost$collections$Array$T($tmp2044, ((frost$core$Object*) $tmp2045));
// line 603
org$frostlang$frostc$ClassDecl* $tmp2051 = *(&local22);
frost$core$Bit $tmp2052 = frost$core$Bit$init$builtin_bit($tmp2051 != NULL);
bool $tmp2053 = $tmp2052.value;
if ($tmp2053) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp2054 = (frost$core$Int64) {603};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2055, $tmp2054, &$s2056);
abort(); // unreachable
block20:;
frost$core$String** $tmp2057 = &$tmp2051->name;
frost$core$String* $tmp2058 = *$tmp2057;
frost$core$String** $tmp2059 = &param1->name;
frost$core$String* $tmp2060 = *$tmp2059;
frost$core$String* $tmp2061 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2060, &$s2062);
frost$core$Bit $tmp2063 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2058, $tmp2061);
bool $tmp2064 = $tmp2063.value;
if ($tmp2064) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2065 = (frost$core$Int64) {603};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2066, $tmp2065);
abort(); // unreachable
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
// unreffing REF($380:frost.core.String)
// line 604
org$frostlang$frostc$SymbolTable** $tmp2067 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2068 = *$tmp2067;
org$frostlang$frostc$Alias* $tmp2069 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
org$frostlang$frostc$ClassDecl* $tmp2070 = *(&local22);
frost$core$Bit $tmp2071 = frost$core$Bit$init$builtin_bit($tmp2070 != NULL);
bool $tmp2072 = $tmp2071.value;
if ($tmp2072) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp2073 = (frost$core$Int64) {604};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2074, $tmp2073, &$s2075);
abort(); // unreachable
block24:;
frost$core$String** $tmp2076 = &$tmp2070->name;
frost$core$String* $tmp2077 = *$tmp2076;
frost$core$String** $tmp2078 = &param1->name;
frost$core$String* $tmp2079 = *$tmp2078;
frost$core$Int64 $tmp2080 = frost$core$String$get_length$R$frost$core$Int64($tmp2079);
frost$core$Int64 $tmp2081 = (frost$core$Int64) {1};
int64_t $tmp2082 = $tmp2080.value;
int64_t $tmp2083 = $tmp2081.value;
int64_t $tmp2084 = $tmp2082 + $tmp2083;
frost$core$Int64 $tmp2085 = (frost$core$Int64) {$tmp2084};
frost$core$Bit $tmp2086 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2087 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2085, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2086);
frost$core$String* $tmp2088 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2077, $tmp2087);
org$frostlang$frostc$ClassDecl* $tmp2089 = *(&local22);
frost$core$Bit $tmp2090 = frost$core$Bit$init$builtin_bit($tmp2089 != NULL);
bool $tmp2091 = $tmp2090.value;
if ($tmp2091) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp2092 = (frost$core$Int64) {604};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2093, $tmp2092, &$s2094);
abort(); // unreachable
block26:;
org$frostlang$frostc$Type** $tmp2095 = &$tmp2089->type;
org$frostlang$frostc$Type* $tmp2096 = *$tmp2095;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2069, $tmp2088, $tmp2096);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2068, ((org$frostlang$frostc$Symbol*) $tmp2069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
// unreffing REF($416:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
// unreffing REF($393:org.frostlang.frostc.Alias)
// line 605
org$frostlang$frostc$ClassDecl* $tmp2097 = *(&local22);
frost$core$Bit $tmp2098 = frost$core$Bit$init$builtin_bit($tmp2097 != NULL);
bool $tmp2099 = $tmp2098.value;
if ($tmp2099) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp2100 = (frost$core$Int64) {605};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2101, $tmp2100, &$s2102);
abort(); // unreachable
block28:;
org$frostlang$frostc$SymbolTable** $tmp2103 = &$tmp2097->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2104 = *$tmp2103;
org$frostlang$frostc$Alias* $tmp2105 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
frost$core$String* $tmp2106 = org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String(param1);
org$frostlang$frostc$Type** $tmp2107 = &param1->type;
org$frostlang$frostc$Type* $tmp2108 = *$tmp2107;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2105, $tmp2106, $tmp2108);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2104, ((org$frostlang$frostc$Symbol*) $tmp2105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
// unreffing REF($450:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
// unreffing REF($449:org.frostlang.frostc.Alias)
goto block15;
block15:;
org$frostlang$frostc$ClassDecl* $tmp2109 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
// unreffing inner
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2110 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
// unreffing members
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2111 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
// unreffing supertypes
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2112 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
// unreffing generics
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2113 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
// unreffing name
*(&local18) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2114 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
// unreffing annotations
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2115 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
// unreffing dc
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp2116 = (frost$core$Int64) {10};
frost$core$Bit $tmp2117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1901, $tmp2116);
bool $tmp2118 = $tmp2117.value;
if ($tmp2118) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp2119 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2120 = *$tmp2119;
*(&local23) = $tmp2120;
org$frostlang$frostc$ASTNode** $tmp2121 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2122 = *$tmp2121;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
org$frostlang$frostc$ASTNode* $tmp2123 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
*(&local24) = $tmp2122;
frost$core$String** $tmp2124 = (frost$core$String**) (param2->$data + 24);
frost$core$String* $tmp2125 = *$tmp2124;
*(&local25) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
frost$core$String* $tmp2126 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
*(&local25) = $tmp2125;
org$frostlang$frostc$FixedArray** $tmp2127 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2128 = *$tmp2127;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
org$frostlang$frostc$FixedArray* $tmp2129 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
*(&local26) = $tmp2128;
// line 609
org$frostlang$frostc$Position $tmp2130 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp2131 = *(&local24);
frost$core$String* $tmp2132 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp2133 = *(&local26);
org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp2130, $tmp2131, $tmp2132, $tmp2133);
org$frostlang$frostc$FixedArray* $tmp2134 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
// unreffing fields
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2135 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
// unreffing name
*(&local25) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2136 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
// unreffing dc
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block31:;
// line 612
frost$core$Bit $tmp2137 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2138 = $tmp2137.value;
if ($tmp2138) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp2139 = (frost$core$Int64) {612};
frost$core$String* $tmp2140 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2141, ((frost$core$Object*) param2));
frost$core$String* $tmp2142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2140, &$s2143);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2144, $tmp2139, $tmp2142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
// unreffing REF($562:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
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
// line 619
*(&local0) = ((frost$core$String*) NULL);
// line 621
frost$core$Bit $tmp2145 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp2146 = $tmp2145.value;
if ($tmp2146) goto block1; else goto block3;
block1:;
// line 622
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2147 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 625
frost$core$Bit $tmp2148 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp2149 = $tmp2148.value;
if ($tmp2149) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2150 = (frost$core$Int64) {625};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2151, $tmp2150, &$s2152);
abort(); // unreachable
block4:;
frost$core$Int64* $tmp2153 = &param3->$rawValue;
frost$core$Int64 $tmp2154 = *$tmp2153;
frost$core$Int64 $tmp2155 = (frost$core$Int64) {41};
frost$core$Bit $tmp2156 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2154, $tmp2155);
bool $tmp2157 = $tmp2156.value;
if ($tmp2157) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp2158 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2159 = *$tmp2158;
*(&local1) = $tmp2159;
frost$core$String** $tmp2160 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp2161 = *$tmp2160;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
frost$core$String* $tmp2162 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
*(&local2) = $tmp2161;
// line 627
frost$core$String* $tmp2163 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
frost$core$String* $tmp2164 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
*(&local0) = $tmp2163;
frost$core$String* $tmp2165 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
goto block6;
block8:;
// line 630
frost$core$Bit $tmp2166 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp2168 = (frost$core$Int64) {630};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2169, $tmp2168);
abort(); // unreachable
block9:;
goto block6;
block6:;
goto block2;
block2:;
// line 634
frost$collections$Array* $tmp2170 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2170);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
frost$collections$Array* $tmp2171 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
*(&local3) = $tmp2170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
// unreffing REF($68:frost.collections.Array<org.frostlang.frostc.Type>)
// line 635
frost$core$Bit $tmp2172 = frost$core$Bit$init$builtin_bit(param5 != NULL);
bool $tmp2173 = $tmp2172.value;
if ($tmp2173) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2174 = (frost$core$Int64) {635};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2175, $tmp2174, &$s2176);
abort(); // unreachable
block11:;
ITable* $tmp2177 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2177->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2177 = $tmp2177->next;
}
$fn2179 $tmp2178 = $tmp2177->methods[0];
frost$collections$Iterator* $tmp2180 = $tmp2178(((frost$collections$Iterable*) param5));
goto block13;
block13:;
ITable* $tmp2181 = $tmp2180->$class->itable;
while ($tmp2181->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2181 = $tmp2181->next;
}
$fn2183 $tmp2182 = $tmp2181->methods[0];
frost$core$Bit $tmp2184 = $tmp2182($tmp2180);
bool $tmp2185 = $tmp2184.value;
if ($tmp2185) goto block15; else goto block14;
block14:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2186 = $tmp2180->$class->itable;
while ($tmp2186->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2186 = $tmp2186->next;
}
$fn2188 $tmp2187 = $tmp2186->methods[1];
frost$core$Object* $tmp2189 = $tmp2187($tmp2180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2189)));
org$frostlang$frostc$ASTNode* $tmp2190 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2189);
// line 636
frost$collections$Array* $tmp2191 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp2192 = *(&local4);
org$frostlang$frostc$Type* $tmp2193 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2192);
frost$collections$Array$add$frost$collections$Array$T($tmp2191, ((frost$core$Object*) $tmp2193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
// unreffing REF($115:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2189);
// unreffing REF($103:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2194 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
// unreffing t
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
// unreffing REF($92:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 638
org$frostlang$frostc$ChoiceCase* $tmp2195 = (org$frostlang$frostc$ChoiceCase*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ChoiceCase$class);
frost$core$String* $tmp2196 = *(&local0);
frost$collections$Array** $tmp2197 = &param1->choiceCases;
frost$collections$Array* $tmp2198 = *$tmp2197;
ITable* $tmp2199 = ((frost$collections$CollectionView*) $tmp2198)->$class->itable;
while ($tmp2199->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2199 = $tmp2199->next;
}
$fn2201 $tmp2200 = $tmp2199->methods[0];
frost$core$Int64 $tmp2202 = $tmp2200(((frost$collections$CollectionView*) $tmp2198));
frost$collections$Array* $tmp2203 = *(&local3);
org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT($tmp2195, param1, param2, param4, $tmp2196, $tmp2202, ((frost$collections$ListView*) $tmp2203));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
org$frostlang$frostc$ChoiceCase* $tmp2204 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
*(&local5) = $tmp2195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
// unreffing REF($134:org.frostlang.frostc.ChoiceCase)
// line 640
frost$collections$Array** $tmp2205 = &param1->choiceCases;
frost$collections$Array* $tmp2206 = *$tmp2205;
org$frostlang$frostc$ChoiceCase* $tmp2207 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2206, ((frost$core$Object*) $tmp2207));
// line 641
org$frostlang$frostc$SymbolTable** $tmp2208 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2209 = *$tmp2208;
org$frostlang$frostc$ChoiceCase* $tmp2210 = *(&local5);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2209, ((org$frostlang$frostc$Symbol*) $tmp2210));
org$frostlang$frostc$ChoiceCase* $tmp2211 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
// unreffing entry
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$collections$Array* $tmp2212 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
// unreffing fields
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2213 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
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
// line 648
*(&local0) = ((frost$core$String*) NULL);
// line 649
ITable* $tmp2215 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2215->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2215 = $tmp2215->next;
}
$fn2217 $tmp2216 = $tmp2215->methods[1];
frost$core$Bit $tmp2218 = $tmp2216(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2214));
bool $tmp2219 = $tmp2218.value;
if ($tmp2219) goto block1; else goto block3;
block1:;
// line 650
frost$core$String* $tmp2220 = frost$core$String$get_asString$R$frost$core$String(param3);
frost$core$String* $tmp2221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2220, &$s2222);
frost$core$String* $tmp2223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2221, param8);
frost$core$String* $tmp2224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2223, &$s2225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
frost$core$String* $tmp2226 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
*(&local0) = $tmp2224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
// unreffing REF($11:frost.core.String)
goto block2;
block3:;
// line 1
// line 653
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$core$String* $tmp2227 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
*(&local0) = param8;
goto block2;
block2:;
// line 655
*(&local1) = ((frost$core$String*) NULL);
// line 657
frost$core$Bit $tmp2228 = frost$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp2229 = $tmp2228.value;
if ($tmp2229) goto block4; else goto block6;
block4:;
// line 658
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2230 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block6:;
// line 1
// line 661
frost$core$Bit $tmp2231 = frost$core$Bit$init$builtin_bit(param5 != NULL);
bool $tmp2232 = $tmp2231.value;
if ($tmp2232) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp2233 = (frost$core$Int64) {661};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2234, $tmp2233, &$s2235);
abort(); // unreachable
block7:;
frost$core$Int64* $tmp2236 = &param5->$rawValue;
frost$core$Int64 $tmp2237 = *$tmp2236;
frost$core$Int64 $tmp2238 = (frost$core$Int64) {41};
frost$core$Bit $tmp2239 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2237, $tmp2238);
bool $tmp2240 = $tmp2239.value;
if ($tmp2240) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2241 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp2242 = *$tmp2241;
*(&local2) = $tmp2242;
frost$core$String** $tmp2243 = (frost$core$String**) (param5->$data + 16);
frost$core$String* $tmp2244 = *$tmp2243;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
frost$core$String* $tmp2245 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
*(&local3) = $tmp2244;
// line 663
frost$core$String* $tmp2246 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
frost$core$String* $tmp2247 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
*(&local1) = $tmp2246;
frost$core$String* $tmp2248 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
// unreffing text
*(&local3) = ((frost$core$String*) NULL);
goto block9;
block11:;
// line 666
frost$core$Bit $tmp2249 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2250 = $tmp2249.value;
if ($tmp2250) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp2251 = (frost$core$Int64) {666};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2252, $tmp2251);
abort(); // unreachable
block12:;
goto block9;
block9:;
goto block5;
block5:;
// line 670
org$frostlang$frostc$Annotations* $tmp2253 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param6);
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
org$frostlang$frostc$Annotations* $tmp2254 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
*(&local4) = $tmp2253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
// unreffing REF($111:org.frostlang.frostc.Annotations)
// line 671
frost$collections$Array* $tmp2255 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2255);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
frost$collections$Array* $tmp2256 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
*(&local5) = $tmp2255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
// unreffing REF($123:frost.collections.Array<org.frostlang.frostc.ClassDecl.GenericParameter>)
// line 672
frost$core$Bit $tmp2257 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2258 = $tmp2257.value;
if ($tmp2258) goto block14; else goto block15;
block14:;
// line 673
frost$core$Bit $tmp2259 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2260 = $tmp2259.value;
if ($tmp2260) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2261 = (frost$core$Int64) {673};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2262, $tmp2261, &$s2263);
abort(); // unreachable
block16:;
ITable* $tmp2264 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp2264->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2264 = $tmp2264->next;
}
$fn2266 $tmp2265 = $tmp2264->methods[0];
frost$collections$Iterator* $tmp2267 = $tmp2265(((frost$collections$Iterable*) param9));
goto block18;
block18:;
ITable* $tmp2268 = $tmp2267->$class->itable;
while ($tmp2268->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2268 = $tmp2268->next;
}
$fn2270 $tmp2269 = $tmp2268->methods[0];
frost$core$Bit $tmp2271 = $tmp2269($tmp2267);
bool $tmp2272 = $tmp2271.value;
if ($tmp2272) goto block20; else goto block19;
block19:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2273 = $tmp2267->$class->itable;
while ($tmp2273->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2273 = $tmp2273->next;
}
$fn2275 $tmp2274 = $tmp2273->methods[1];
frost$core$Object* $tmp2276 = $tmp2274($tmp2267);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2276)));
org$frostlang$frostc$ASTNode* $tmp2277 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2276);
// line 674
*(&local7) = ((frost$core$String*) NULL);
// line 675
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 676
org$frostlang$frostc$ASTNode* $tmp2278 = *(&local6);
frost$core$Int64* $tmp2279 = &$tmp2278->$rawValue;
frost$core$Int64 $tmp2280 = *$tmp2279;
frost$core$Int64 $tmp2281 = (frost$core$Int64) {22};
frost$core$Bit $tmp2282 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2280, $tmp2281);
bool $tmp2283 = $tmp2282.value;
if ($tmp2283) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp2284 = (org$frostlang$frostc$Position*) ($tmp2278->$data + 0);
org$frostlang$frostc$Position $tmp2285 = *$tmp2284;
frost$core$String** $tmp2286 = (frost$core$String**) ($tmp2278->$data + 16);
frost$core$String* $tmp2287 = *$tmp2286;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
frost$core$String* $tmp2288 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2288));
*(&local9) = $tmp2287;
// line 678
frost$core$String* $tmp2289 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
frost$core$String* $tmp2290 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
*(&local7) = $tmp2289;
// line 679
org$frostlang$frostc$Type* $tmp2291 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
org$frostlang$frostc$Type* $tmp2292 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
*(&local8) = $tmp2291;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
// unreffing REF($203:org.frostlang.frostc.Type)
frost$core$String* $tmp2293 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
// unreffing id
*(&local9) = ((frost$core$String*) NULL);
goto block21;
block23:;
frost$core$Int64 $tmp2294 = (frost$core$Int64) {48};
frost$core$Bit $tmp2295 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2280, $tmp2294);
bool $tmp2296 = $tmp2295.value;
if ($tmp2296) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp2297 = (org$frostlang$frostc$Position*) ($tmp2278->$data + 0);
org$frostlang$frostc$Position $tmp2298 = *$tmp2297;
frost$core$String** $tmp2299 = (frost$core$String**) ($tmp2278->$data + 16);
frost$core$String* $tmp2300 = *$tmp2299;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
frost$core$String* $tmp2301 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
*(&local10) = $tmp2300;
org$frostlang$frostc$ASTNode** $tmp2302 = (org$frostlang$frostc$ASTNode**) ($tmp2278->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2303 = *$tmp2302;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
org$frostlang$frostc$ASTNode* $tmp2304 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
*(&local11) = $tmp2303;
// line 682
frost$core$String* $tmp2305 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
frost$core$String* $tmp2306 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
*(&local7) = $tmp2305;
// line 683
org$frostlang$frostc$ASTNode* $tmp2307 = *(&local11);
frost$core$Bit $tmp2308 = frost$core$Bit$init$builtin_bit($tmp2307 != NULL);
bool $tmp2309 = $tmp2308.value;
if ($tmp2309) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp2310 = (frost$core$Int64) {683};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2311, $tmp2310, &$s2312);
abort(); // unreachable
block26:;
org$frostlang$frostc$Type* $tmp2313 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2307);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
org$frostlang$frostc$Type* $tmp2314 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
*(&local8) = $tmp2313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
// unreffing REF($261:org.frostlang.frostc.Type)
org$frostlang$frostc$ASTNode* $tmp2315 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
// unreffing type
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2316 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
// unreffing id
*(&local10) = ((frost$core$String*) NULL);
goto block21;
block25:;
// line 686
frost$core$Bit $tmp2317 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2318 = $tmp2317.value;
if ($tmp2318) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp2319 = (frost$core$Int64) {686};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2320, $tmp2319);
abort(); // unreachable
block28:;
goto block21;
block21:;
// line 689
frost$collections$Array* $tmp2321 = *(&local5);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp2322 = (org$frostlang$frostc$ClassDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2323 = *(&local6);
$fn2325 $tmp2324 = ($fn2325) $tmp2323->$class->vtable[2];
org$frostlang$frostc$Position $tmp2326 = $tmp2324($tmp2323);
frost$core$String* $tmp2327 = *(&local0);
frost$core$String* $tmp2328 = *(&local7);
org$frostlang$frostc$Type* $tmp2329 = *(&local8);
org$frostlang$frostc$ClassDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2322, $tmp2326, $tmp2327, $tmp2328, $tmp2329);
frost$collections$Array$add$frost$collections$Array$T($tmp2321, ((frost$core$Object*) $tmp2322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
// unreffing REF($293:org.frostlang.frostc.ClassDecl.GenericParameter)
org$frostlang$frostc$Type* $tmp2330 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
// unreffing bound
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2331 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
// unreffing name
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2276);
// unreffing REF($163:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2332 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
// unreffing p
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
// unreffing REF($152:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block15;
block15:;
// line 692
frost$collections$Array* $tmp2333 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2333);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
frost$collections$Array* $tmp2334 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
*(&local12) = $tmp2333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
// unreffing REF($330:frost.collections.Array<org.frostlang.frostc.Type>)
// line 693
frost$core$Bit $tmp2335 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2336 = $tmp2335.value;
if ($tmp2336) goto block30; else goto block31;
block30:;
// line 694
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2337;
$tmp2337 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2337->value = param7;
frost$core$Int64 $tmp2338 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2339 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2338);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2340;
$tmp2340 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2340->value = $tmp2339;
ITable* $tmp2341 = ((frost$core$Equatable*) $tmp2337)->$class->itable;
while ($tmp2341->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2341 = $tmp2341->next;
}
$fn2343 $tmp2342 = $tmp2341->methods[0];
frost$core$Bit $tmp2344 = $tmp2342(((frost$core$Equatable*) $tmp2337), ((frost$core$Equatable*) $tmp2340));
bool $tmp2345 = $tmp2344.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2340)));
// unreffing REF($353:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2337)));
// unreffing REF($349:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp2345) goto block32; else goto block33;
block32:;
// line 695
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param4, &$s2346);
goto block33;
block33:;
// line 697
frost$core$Bit $tmp2347 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2348 = $tmp2347.value;
if ($tmp2348) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp2349 = (frost$core$Int64) {697};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2350, $tmp2349, &$s2351);
abort(); // unreachable
block34:;
ITable* $tmp2352 = ((frost$collections$Iterable*) param10)->$class->itable;
while ($tmp2352->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2352 = $tmp2352->next;
}
$fn2354 $tmp2353 = $tmp2352->methods[0];
frost$collections$Iterator* $tmp2355 = $tmp2353(((frost$collections$Iterable*) param10));
goto block36;
block36:;
ITable* $tmp2356 = $tmp2355->$class->itable;
while ($tmp2356->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2356 = $tmp2356->next;
}
$fn2358 $tmp2357 = $tmp2356->methods[0];
frost$core$Bit $tmp2359 = $tmp2357($tmp2355);
bool $tmp2360 = $tmp2359.value;
if ($tmp2360) goto block38; else goto block37;
block37:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2361 = $tmp2355->$class->itable;
while ($tmp2361->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2361 = $tmp2361->next;
}
$fn2363 $tmp2362 = $tmp2361->methods[1];
frost$core$Object* $tmp2364 = $tmp2362($tmp2355);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2364)));
org$frostlang$frostc$ASTNode* $tmp2365 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2365));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp2364);
// line 698
frost$collections$Array* $tmp2366 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp2367 = *(&local13);
org$frostlang$frostc$Type* $tmp2368 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2367);
frost$collections$Array$add$frost$collections$Array$T($tmp2366, ((frost$core$Object*) $tmp2368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
// unreffing REF($401:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2364);
// unreffing REF($389:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2369 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2369));
// unreffing s
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
// unreffing REF($378:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block31;
block31:;
// line 701
org$frostlang$frostc$ClassDecl* $tmp2370 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$core$String* $tmp2371 = *(&local1);
org$frostlang$frostc$Annotations* $tmp2372 = *(&local4);
frost$core$String* $tmp2373 = *(&local0);
frost$collections$Array* $tmp2374 = *(&local12);
frost$collections$Array* $tmp2375 = *(&local5);
frost$core$Weak** $tmp2376 = &param0->compiler;
frost$core$Weak* $tmp2377 = *$tmp2376;
frost$core$Object* $tmp2378 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2377);
org$frostlang$frostc$SymbolTable** $tmp2379 = &((org$frostlang$frostc$Compiler*) $tmp2378)->root;
org$frostlang$frostc$SymbolTable* $tmp2380 = *$tmp2379;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2370, param1, param4, param2, $tmp2371, $tmp2372, param7, $tmp2373, ((frost$collections$ListView*) $tmp2374), $tmp2375, $tmp2380);
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
org$frostlang$frostc$ClassDecl* $tmp2381 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2381));
*(&local14) = $tmp2370;
frost$core$Frost$unref$frost$core$Object$Q($tmp2378);
// unreffing REF($431:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
// unreffing REF($421:org.frostlang.frostc.ClassDecl)
// line 703
frost$core$Weak** $tmp2382 = &param0->compiler;
frost$core$Weak* $tmp2383 = *$tmp2382;
frost$core$Object* $tmp2384 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2383);
frost$collections$Stack** $tmp2385 = &((org$frostlang$frostc$Compiler*) $tmp2384)->currentClass;
frost$collections$Stack* $tmp2386 = *$tmp2385;
org$frostlang$frostc$ClassDecl* $tmp2387 = *(&local14);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2386, ((frost$core$Object*) $tmp2387));
frost$core$Frost$unref$frost$core$Object$Q($tmp2384);
// unreffing REF($453:frost.core.Weak.T)
// line 704
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2388;
$tmp2388 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2388->value = param7;
frost$core$Int64 $tmp2389 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2390 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2389);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2391;
$tmp2391 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2391->value = $tmp2390;
ITable* $tmp2392 = ((frost$core$Equatable*) $tmp2388)->$class->itable;
while ($tmp2392->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2392 = $tmp2392->next;
}
$fn2394 $tmp2393 = $tmp2392->methods[0];
frost$core$Bit $tmp2395 = $tmp2393(((frost$core$Equatable*) $tmp2388), ((frost$core$Equatable*) $tmp2391));
bool $tmp2396 = $tmp2395.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2391)));
// unreffing REF($469:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2388)));
// unreffing REF($465:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp2396) goto block39; else goto block40;
block39:;
// line 705
org$frostlang$frostc$FieldDecl* $tmp2397 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2398 = *(&local14);
org$frostlang$frostc$ClassDecl* $tmp2399 = *(&local14);
org$frostlang$frostc$Position* $tmp2400 = &$tmp2399->position;
org$frostlang$frostc$Position $tmp2401 = *$tmp2400;
org$frostlang$frostc$Annotations* $tmp2402 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2403 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2402, $tmp2403);
frost$core$Int64 $tmp2404 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp2405 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2404);
org$frostlang$frostc$Type* $tmp2406 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2397, $tmp2398, $tmp2401, ((frost$core$String*) NULL), $tmp2402, $tmp2405, &$s2407, $tmp2406, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
org$frostlang$frostc$FieldDecl* $tmp2408 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
*(&local15) = $tmp2397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
// unreffing REF($491:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
// unreffing REF($486:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
// unreffing REF($481:org.frostlang.frostc.FieldDecl)
// line 708
org$frostlang$frostc$ClassDecl* $tmp2409 = *(&local14);
frost$collections$Array** $tmp2410 = &$tmp2409->fields;
frost$collections$Array* $tmp2411 = *$tmp2410;
org$frostlang$frostc$FieldDecl* $tmp2412 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp2411, ((frost$core$Object*) $tmp2412));
// line 709
org$frostlang$frostc$ClassDecl* $tmp2413 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2414 = &$tmp2413->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2415 = *$tmp2414;
org$frostlang$frostc$FieldDecl* $tmp2416 = *(&local15);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2415, ((org$frostlang$frostc$Symbol*) $tmp2416));
// line 710
org$frostlang$frostc$FieldDecl* $tmp2417 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2418 = *(&local14);
org$frostlang$frostc$ClassDecl* $tmp2419 = *(&local14);
org$frostlang$frostc$Position* $tmp2420 = &$tmp2419->position;
org$frostlang$frostc$Position $tmp2421 = *$tmp2420;
org$frostlang$frostc$Annotations* $tmp2422 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2423 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2422, $tmp2423);
frost$core$Int64 $tmp2424 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp2425 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2424);
org$frostlang$frostc$Type* $tmp2426 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2417, $tmp2418, $tmp2421, ((frost$core$String*) NULL), $tmp2422, $tmp2425, &$s2427, $tmp2426, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
org$frostlang$frostc$FieldDecl* $tmp2428 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
*(&local16) = $tmp2417;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
// unreffing REF($535:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
// unreffing REF($530:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
// unreffing REF($525:org.frostlang.frostc.FieldDecl)
// line 713
org$frostlang$frostc$ClassDecl* $tmp2429 = *(&local14);
frost$collections$Array** $tmp2430 = &$tmp2429->fields;
frost$collections$Array* $tmp2431 = *$tmp2430;
org$frostlang$frostc$FieldDecl* $tmp2432 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp2431, ((frost$core$Object*) $tmp2432));
// line 714
org$frostlang$frostc$ClassDecl* $tmp2433 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2434 = &$tmp2433->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2435 = *$tmp2434;
org$frostlang$frostc$FieldDecl* $tmp2436 = *(&local16);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2435, ((org$frostlang$frostc$Symbol*) $tmp2436));
org$frostlang$frostc$FieldDecl* $tmp2437 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
// unreffing data
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2438 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
// unreffing rawValue
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block40;
block40:;
// line 716
ITable* $tmp2439 = ((frost$collections$Iterable*) param11)->$class->itable;
while ($tmp2439->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2439 = $tmp2439->next;
}
$fn2441 $tmp2440 = $tmp2439->methods[0];
frost$collections$Iterator* $tmp2442 = $tmp2440(((frost$collections$Iterable*) param11));
goto block41;
block41:;
ITable* $tmp2443 = $tmp2442->$class->itable;
while ($tmp2443->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2443 = $tmp2443->next;
}
$fn2445 $tmp2444 = $tmp2443->methods[0];
frost$core$Bit $tmp2446 = $tmp2444($tmp2442);
bool $tmp2447 = $tmp2446.value;
if ($tmp2447) goto block43; else goto block42;
block42:;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2448 = $tmp2442->$class->itable;
while ($tmp2448->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2448 = $tmp2448->next;
}
$fn2450 $tmp2449 = $tmp2448->methods[1];
frost$core$Object* $tmp2451 = $tmp2449($tmp2442);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2451)));
org$frostlang$frostc$ASTNode* $tmp2452 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
*(&local17) = ((org$frostlang$frostc$ASTNode*) $tmp2451);
// line 717
org$frostlang$frostc$ASTNode* $tmp2453 = *(&local17);
frost$core$Int64* $tmp2454 = &$tmp2453->$rawValue;
frost$core$Int64 $tmp2455 = *$tmp2454;
frost$core$Int64 $tmp2456 = (frost$core$Int64) {29};
frost$core$Bit $tmp2457 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2455, $tmp2456);
bool $tmp2458 = $tmp2457.value;
if ($tmp2458) goto block45; else goto block46;
block45:;
org$frostlang$frostc$Position* $tmp2459 = (org$frostlang$frostc$Position*) ($tmp2453->$data + 0);
org$frostlang$frostc$Position $tmp2460 = *$tmp2459;
*(&local18) = $tmp2460;
org$frostlang$frostc$ASTNode** $tmp2461 = (org$frostlang$frostc$ASTNode**) ($tmp2453->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2462 = *$tmp2461;
org$frostlang$frostc$FixedArray** $tmp2463 = (org$frostlang$frostc$FixedArray**) ($tmp2453->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2464 = *$tmp2463;
org$frostlang$frostc$MethodDecl$Kind* $tmp2465 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp2453->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2466 = *$tmp2465;
*(&local19) = $tmp2466;
frost$core$String** $tmp2467 = (frost$core$String**) ($tmp2453->$data + 40);
frost$core$String* $tmp2468 = *$tmp2467;
org$frostlang$frostc$FixedArray** $tmp2469 = (org$frostlang$frostc$FixedArray**) ($tmp2453->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2470 = *$tmp2469;
org$frostlang$frostc$FixedArray** $tmp2471 = (org$frostlang$frostc$FixedArray**) ($tmp2453->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2472 = *$tmp2471;
org$frostlang$frostc$ASTNode** $tmp2473 = (org$frostlang$frostc$ASTNode**) ($tmp2453->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2474 = *$tmp2473;
org$frostlang$frostc$FixedArray** $tmp2475 = (org$frostlang$frostc$FixedArray**) ($tmp2453->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2476 = *$tmp2475;
// line 719
org$frostlang$frostc$MethodDecl$Kind $tmp2477 = *(&local19);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2478;
$tmp2478 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2478->value = $tmp2477;
frost$core$Int64 $tmp2479 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2480 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2479);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2481;
$tmp2481 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2481->value = $tmp2480;
ITable* $tmp2482 = ((frost$core$Equatable*) $tmp2478)->$class->itable;
while ($tmp2482->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2482 = $tmp2482->next;
}
$fn2484 $tmp2483 = $tmp2482->methods[0];
frost$core$Bit $tmp2485 = $tmp2483(((frost$core$Equatable*) $tmp2478), ((frost$core$Equatable*) $tmp2481));
bool $tmp2486 = $tmp2485.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2481)));
// unreffing REF($636:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2478)));
// unreffing REF($632:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp2486) goto block47; else goto block48;
block47:;
// line 720
frost$core$Int64 $tmp2487 = param7.$rawValue;
frost$core$Int64 $tmp2488 = (frost$core$Int64) {0};
frost$core$Bit $tmp2489 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2487, $tmp2488);
bool $tmp2490 = $tmp2489.value;
if ($tmp2490) goto block50; else goto block51;
block50:;
goto block49;
block51:;
frost$core$Int64 $tmp2491 = (frost$core$Int64) {1};
frost$core$Bit $tmp2492 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2487, $tmp2491);
bool $tmp2493 = $tmp2492.value;
if ($tmp2493) goto block52; else goto block53;
block52:;
// line 725
org$frostlang$frostc$Position $tmp2494 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2494, &$s2495);
goto block49;
block53:;
frost$core$Int64 $tmp2496 = (frost$core$Int64) {2};
frost$core$Bit $tmp2497 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2487, $tmp2496);
bool $tmp2498 = $tmp2497.value;
if ($tmp2498) goto block54; else goto block49;
block54:;
// line 728
org$frostlang$frostc$Position $tmp2499 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2499, &$s2500);
goto block49;
block49:;
goto block48;
block48:;
goto block44;
block46:;
goto block44;
block44:;
// line 737
org$frostlang$frostc$ClassDecl* $tmp2501 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2502 = *(&local17);
org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode(param0, $tmp2501, $tmp2502);
frost$core$Frost$unref$frost$core$Object$Q($tmp2451);
// unreffing REF($594:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2503 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
// unreffing m
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block41;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2442));
// unreffing REF($583:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 739
frost$core$Bit $tmp2504 = frost$core$Bit$init$builtin_bit(false);
*(&local20) = $tmp2504;
// line 740
frost$core$Bit $tmp2505 = frost$core$Bit$init$builtin_bit(false);
*(&local21) = $tmp2505;
// line 741
org$frostlang$frostc$ClassDecl* $tmp2506 = *(&local14);
frost$collections$Array** $tmp2507 = &$tmp2506->methods;
frost$collections$Array* $tmp2508 = *$tmp2507;
ITable* $tmp2509 = ((frost$collections$Iterable*) $tmp2508)->$class->itable;
while ($tmp2509->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2509 = $tmp2509->next;
}
$fn2511 $tmp2510 = $tmp2509->methods[0];
frost$collections$Iterator* $tmp2512 = $tmp2510(((frost$collections$Iterable*) $tmp2508));
goto block55;
block55:;
ITable* $tmp2513 = $tmp2512->$class->itable;
while ($tmp2513->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2513 = $tmp2513->next;
}
$fn2515 $tmp2514 = $tmp2513->methods[0];
frost$core$Bit $tmp2516 = $tmp2514($tmp2512);
bool $tmp2517 = $tmp2516.value;
if ($tmp2517) goto block57; else goto block56;
block56:;
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp2518 = $tmp2512->$class->itable;
while ($tmp2518->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2518 = $tmp2518->next;
}
$fn2520 $tmp2519 = $tmp2518->methods[1];
frost$core$Object* $tmp2521 = $tmp2519($tmp2512);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2521)));
org$frostlang$frostc$MethodDecl* $tmp2522 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) $tmp2521);
// line 742
org$frostlang$frostc$MethodDecl* $tmp2523 = *(&local22);
org$frostlang$frostc$MethodDecl$Kind* $tmp2524 = &$tmp2523->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2525 = *$tmp2524;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2526;
$tmp2526 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2526->value = $tmp2525;
frost$core$Int64 $tmp2527 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2528 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2527);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2529;
$tmp2529 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2529->value = $tmp2528;
ITable* $tmp2530 = ((frost$core$Equatable*) $tmp2526)->$class->itable;
while ($tmp2530->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2530 = $tmp2530->next;
}
$fn2532 $tmp2531 = $tmp2530->methods[0];
frost$core$Bit $tmp2533 = $tmp2531(((frost$core$Equatable*) $tmp2526), ((frost$core$Equatable*) $tmp2529));
bool $tmp2534 = $tmp2533.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2529)));
// unreffing REF($729:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2526)));
// unreffing REF($725:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp2534) goto block58; else goto block59;
block58:;
// line 743
frost$core$Bit $tmp2535 = frost$core$Bit$init$builtin_bit(true);
*(&local20) = $tmp2535;
goto block59;
block59:;
// line 745
org$frostlang$frostc$MethodDecl* $tmp2536 = *(&local22);
frost$core$String** $tmp2537 = &((org$frostlang$frostc$Symbol*) $tmp2536)->name;
frost$core$String* $tmp2538 = *$tmp2537;
frost$core$Bit $tmp2539 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2538, &$s2540);
bool $tmp2541 = $tmp2539.value;
if ($tmp2541) goto block62; else goto block63;
block62:;
org$frostlang$frostc$MethodDecl* $tmp2542 = *(&local22);
frost$collections$Array** $tmp2543 = &$tmp2542->parameters;
frost$collections$Array* $tmp2544 = *$tmp2543;
ITable* $tmp2545 = ((frost$collections$CollectionView*) $tmp2544)->$class->itable;
while ($tmp2545->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2545 = $tmp2545->next;
}
$fn2547 $tmp2546 = $tmp2545->methods[0];
frost$core$Int64 $tmp2548 = $tmp2546(((frost$collections$CollectionView*) $tmp2544));
frost$core$Int64 $tmp2549 = (frost$core$Int64) {0};
frost$core$Bit $tmp2550 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2548, $tmp2549);
*(&local23) = $tmp2550;
goto block64;
block63:;
*(&local23) = $tmp2539;
goto block64;
block64:;
frost$core$Bit $tmp2551 = *(&local23);
bool $tmp2552 = $tmp2551.value;
if ($tmp2552) goto block60; else goto block61;
block60:;
// line 746
frost$core$Bit $tmp2553 = frost$core$Bit$init$builtin_bit(true);
*(&local21) = $tmp2553;
// line 747
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2554;
$tmp2554 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2554->value = param7;
frost$core$Int64 $tmp2555 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2556 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2555);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2557;
$tmp2557 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2557->value = $tmp2556;
ITable* $tmp2558 = ((frost$core$Equatable*) $tmp2554)->$class->itable;
while ($tmp2558->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2558 = $tmp2558->next;
}
$fn2560 $tmp2559 = $tmp2558->methods[0];
frost$core$Bit $tmp2561 = $tmp2559(((frost$core$Equatable*) $tmp2554), ((frost$core$Equatable*) $tmp2557));
bool $tmp2562 = $tmp2561.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2557)));
// unreffing REF($775:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2554)));
// unreffing REF($771:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp2562) goto block65; else goto block66;
block65:;
// line 748
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param4, &$s2563);
goto block66;
block66:;
goto block61;
block61:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2521);
// unreffing REF($713:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp2564 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
// unreffing m
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block55;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
// unreffing REF($702:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 752
frost$core$Bit $tmp2565 = *(&local20);
frost$core$Bit $tmp2566 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2565);
bool $tmp2567 = $tmp2566.value;
if ($tmp2567) goto block69; else goto block70;
block69:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2568;
$tmp2568 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2568->value = param7;
frost$core$Int64 $tmp2569 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2570 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2569);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2571;
$tmp2571 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2571->value = $tmp2570;
ITable* $tmp2572 = ((frost$core$Equatable*) $tmp2568)->$class->itable;
while ($tmp2572->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2572 = $tmp2572->next;
}
$fn2574 $tmp2573 = $tmp2572->methods[0];
frost$core$Bit $tmp2575 = $tmp2573(((frost$core$Equatable*) $tmp2568), ((frost$core$Equatable*) $tmp2571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2571)));
// unreffing REF($811:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2568)));
// unreffing REF($807:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
*(&local25) = $tmp2575;
goto block71;
block70:;
*(&local25) = $tmp2566;
goto block71;
block71:;
frost$core$Bit $tmp2576 = *(&local25);
bool $tmp2577 = $tmp2576.value;
if ($tmp2577) goto block72; else goto block73;
block72:;
org$frostlang$frostc$ClassDecl* $tmp2578 = *(&local14);
frost$core$String** $tmp2579 = &$tmp2578->name;
frost$core$String* $tmp2580 = *$tmp2579;
ITable* $tmp2582 = ((frost$core$Equatable*) $tmp2580)->$class->itable;
while ($tmp2582->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2582 = $tmp2582->next;
}
$fn2584 $tmp2583 = $tmp2582->methods[1];
frost$core$Bit $tmp2585 = $tmp2583(((frost$core$Equatable*) $tmp2580), ((frost$core$Equatable*) &$s2581));
*(&local24) = $tmp2585;
goto block74;
block73:;
*(&local24) = $tmp2576;
goto block74;
block74:;
frost$core$Bit $tmp2586 = *(&local24);
bool $tmp2587 = $tmp2586.value;
if ($tmp2587) goto block67; else goto block68;
block67:;
// line 753
org$frostlang$frostc$MethodDecl* $tmp2588 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2589 = *(&local14);
org$frostlang$frostc$Annotations* $tmp2590 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2591 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2590, $tmp2591);
frost$core$Int64 $tmp2592 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2593 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2592);
frost$collections$Array* $tmp2594 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2595 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2594, $tmp2595);
org$frostlang$frostc$Type* $tmp2596 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2597 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2597);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2588, $tmp2589, param4, ((frost$core$String*) NULL), $tmp2590, $tmp2593, &$s2598, ((frost$collections$Array*) NULL), $tmp2594, $tmp2596, $tmp2597);
*(&local26) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
org$frostlang$frostc$MethodDecl* $tmp2599 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2599));
*(&local26) = $tmp2588;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
// unreffing REF($855:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
// unreffing REF($854:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
// unreffing REF($850:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
// unreffing REF($845:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
// unreffing REF($843:org.frostlang.frostc.MethodDecl)
// line 756
org$frostlang$frostc$ClassDecl* $tmp2600 = *(&local14);
frost$collections$Array** $tmp2601 = &$tmp2600->methods;
frost$collections$Array* $tmp2602 = *$tmp2601;
org$frostlang$frostc$MethodDecl* $tmp2603 = *(&local26);
frost$collections$Array$add$frost$collections$Array$T($tmp2602, ((frost$core$Object*) $tmp2603));
// line 757
org$frostlang$frostc$ClassDecl* $tmp2604 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2605 = &$tmp2604->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2606 = *$tmp2605;
org$frostlang$frostc$MethodDecl* $tmp2607 = *(&local26);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2606, ((org$frostlang$frostc$Symbol*) $tmp2607));
org$frostlang$frostc$MethodDecl* $tmp2608 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
// unreffing defaultInit
*(&local26) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block68;
block68:;
// line 759
frost$core$Bit $tmp2609 = *(&local21);
frost$core$Bit $tmp2610 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2609);
bool $tmp2611 = $tmp2610.value;
if ($tmp2611) goto block77; else goto block78;
block77:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2612;
$tmp2612 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2612->value = param7;
frost$core$Int64 $tmp2613 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2614 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2613);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2615;
$tmp2615 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2615->value = $tmp2614;
ITable* $tmp2616 = ((frost$core$Equatable*) $tmp2612)->$class->itable;
while ($tmp2616->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2616 = $tmp2616->next;
}
$fn2618 $tmp2617 = $tmp2616->methods[0];
frost$core$Bit $tmp2619 = $tmp2617(((frost$core$Equatable*) $tmp2612), ((frost$core$Equatable*) $tmp2615));
bool $tmp2620 = $tmp2619.value;
if ($tmp2620) goto block80; else goto block81;
block80:;
*(&local29) = $tmp2619;
goto block82;
block81:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2621;
$tmp2621 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2621->value = param7;
frost$core$Int64 $tmp2622 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2623 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2622);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2624;
$tmp2624 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2624->value = $tmp2623;
ITable* $tmp2625 = ((frost$core$Equatable*) $tmp2621)->$class->itable;
while ($tmp2625->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2625 = $tmp2625->next;
}
$fn2627 $tmp2626 = $tmp2625->methods[0];
frost$core$Bit $tmp2628 = $tmp2626(((frost$core$Equatable*) $tmp2621), ((frost$core$Equatable*) $tmp2624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2624)));
// unreffing REF($923:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2621)));
// unreffing REF($919:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
*(&local29) = $tmp2628;
goto block82;
block82:;
frost$core$Bit $tmp2629 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2615)));
// unreffing REF($912:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2612)));
// unreffing REF($908:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
*(&local28) = $tmp2629;
goto block79;
block78:;
*(&local28) = $tmp2610;
goto block79;
block79:;
frost$core$Bit $tmp2630 = *(&local28);
bool $tmp2631 = $tmp2630.value;
if ($tmp2631) goto block83; else goto block84;
block83:;
org$frostlang$frostc$ClassDecl* $tmp2632 = *(&local14);
frost$core$String** $tmp2633 = &$tmp2632->name;
frost$core$String* $tmp2634 = *$tmp2633;
ITable* $tmp2636 = ((frost$core$Equatable*) $tmp2634)->$class->itable;
while ($tmp2636->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2636 = $tmp2636->next;
}
$fn2638 $tmp2637 = $tmp2636->methods[1];
frost$core$Bit $tmp2639 = $tmp2637(((frost$core$Equatable*) $tmp2634), ((frost$core$Equatable*) &$s2635));
*(&local27) = $tmp2639;
goto block85;
block84:;
*(&local27) = $tmp2630;
goto block85;
block85:;
frost$core$Bit $tmp2640 = *(&local27);
bool $tmp2641 = $tmp2640.value;
if ($tmp2641) goto block75; else goto block76;
block75:;
// line 761
org$frostlang$frostc$MethodDecl* $tmp2642 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2643 = *(&local14);
org$frostlang$frostc$Annotations* $tmp2644 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2645 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2646 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2647 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2645, $tmp2646);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2644, $tmp2647);
frost$core$Int64 $tmp2648 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2649 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2648);
frost$collections$Array* $tmp2650 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2651 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2650, $tmp2651);
org$frostlang$frostc$Type* $tmp2652 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2653 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2653);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2642, $tmp2643, param4, ((frost$core$String*) NULL), $tmp2644, $tmp2649, &$s2654, ((frost$collections$Array*) NULL), $tmp2650, $tmp2652, $tmp2653);
*(&local30) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
org$frostlang$frostc$MethodDecl* $tmp2655 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
*(&local30) = $tmp2642;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
// unreffing REF($978:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
// unreffing REF($977:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
// unreffing REF($973:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
// unreffing REF($966:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
// unreffing REF($964:org.frostlang.frostc.MethodDecl)
// line 764
org$frostlang$frostc$ClassDecl* $tmp2656 = *(&local14);
frost$collections$Array** $tmp2657 = &$tmp2656->methods;
frost$collections$Array* $tmp2658 = *$tmp2657;
org$frostlang$frostc$MethodDecl* $tmp2659 = *(&local30);
frost$collections$Array$add$frost$collections$Array$T($tmp2658, ((frost$core$Object*) $tmp2659));
// line 765
org$frostlang$frostc$ClassDecl* $tmp2660 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2661 = &$tmp2660->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2662 = *$tmp2661;
org$frostlang$frostc$MethodDecl* $tmp2663 = *(&local30);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2662, ((org$frostlang$frostc$Symbol*) $tmp2663));
org$frostlang$frostc$MethodDecl* $tmp2664 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
// unreffing defaultCleanup
*(&local30) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block76;
block76:;
// line 767
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2665;
$tmp2665 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2665->value = param7;
frost$core$Int64 $tmp2666 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2667 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2666);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2668;
$tmp2668 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2668->value = $tmp2667;
ITable* $tmp2669 = ((frost$core$Equatable*) $tmp2665)->$class->itable;
while ($tmp2669->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2669 = $tmp2669->next;
}
$fn2671 $tmp2670 = $tmp2669->methods[0];
frost$core$Bit $tmp2672 = $tmp2670(((frost$core$Equatable*) $tmp2665), ((frost$core$Equatable*) $tmp2668));
bool $tmp2673 = $tmp2672.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2668)));
// unreffing REF($1031:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2665)));
// unreffing REF($1027:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp2673) goto block86; else goto block87;
block86:;
// line 768
frost$core$Bit $tmp2674 = frost$core$Bit$init$builtin_bit(false);
*(&local31) = $tmp2674;
// line 769
org$frostlang$frostc$ClassDecl* $tmp2675 = *(&local14);
frost$collections$Array** $tmp2676 = &$tmp2675->choiceCases;
frost$collections$Array* $tmp2677 = *$tmp2676;
ITable* $tmp2678 = ((frost$collections$CollectionView*) $tmp2677)->$class->itable;
while ($tmp2678->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2678 = $tmp2678->next;
}
$fn2680 $tmp2679 = $tmp2678->methods[0];
frost$core$Int64 $tmp2681 = $tmp2679(((frost$collections$CollectionView*) $tmp2677));
frost$core$Int64 $tmp2682 = (frost$core$Int64) {0};
int64_t $tmp2683 = $tmp2681.value;
int64_t $tmp2684 = $tmp2682.value;
bool $tmp2685 = $tmp2683 > $tmp2684;
frost$core$Bit $tmp2686 = (frost$core$Bit) {$tmp2685};
bool $tmp2687 = $tmp2686.value;
if ($tmp2687) goto block88; else goto block90;
block88:;
// line 770
org$frostlang$frostc$ClassDecl* $tmp2688 = *(&local14);
frost$collections$Array** $tmp2689 = &$tmp2688->choiceCases;
frost$collections$Array* $tmp2690 = *$tmp2689;
ITable* $tmp2691 = ((frost$collections$Iterable*) $tmp2690)->$class->itable;
while ($tmp2691->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2691 = $tmp2691->next;
}
$fn2693 $tmp2692 = $tmp2691->methods[0];
frost$collections$Iterator* $tmp2694 = $tmp2692(((frost$collections$Iterable*) $tmp2690));
goto block91;
block91:;
ITable* $tmp2695 = $tmp2694->$class->itable;
while ($tmp2695->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2695 = $tmp2695->next;
}
$fn2697 $tmp2696 = $tmp2695->methods[0];
frost$core$Bit $tmp2698 = $tmp2696($tmp2694);
bool $tmp2699 = $tmp2698.value;
if ($tmp2699) goto block93; else goto block92;
block92:;
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp2700 = $tmp2694->$class->itable;
while ($tmp2700->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2700 = $tmp2700->next;
}
$fn2702 $tmp2701 = $tmp2700->methods[1];
frost$core$Object* $tmp2703 = $tmp2701($tmp2694);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp2703)));
org$frostlang$frostc$ChoiceCase* $tmp2704 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) $tmp2703);
// line 771
org$frostlang$frostc$ChoiceCase* $tmp2705 = *(&local32);
frost$collections$Array** $tmp2706 = &$tmp2705->fields;
frost$collections$Array* $tmp2707 = *$tmp2706;
ITable* $tmp2708 = ((frost$collections$CollectionView*) $tmp2707)->$class->itable;
while ($tmp2708->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2708 = $tmp2708->next;
}
$fn2710 $tmp2709 = $tmp2708->methods[0];
frost$core$Int64 $tmp2711 = $tmp2709(((frost$collections$CollectionView*) $tmp2707));
frost$core$Int64 $tmp2712 = (frost$core$Int64) {0};
int64_t $tmp2713 = $tmp2711.value;
int64_t $tmp2714 = $tmp2712.value;
bool $tmp2715 = $tmp2713 > $tmp2714;
frost$core$Bit $tmp2716 = (frost$core$Bit) {$tmp2715};
bool $tmp2717 = $tmp2716.value;
if ($tmp2717) goto block94; else goto block95;
block94:;
// line 772
frost$core$Bit $tmp2718 = frost$core$Bit$init$builtin_bit(true);
*(&local31) = $tmp2718;
// line 773
frost$core$Frost$unref$frost$core$Object$Q($tmp2703);
// unreffing REF($1077:frost.collections.Iterator.T)
org$frostlang$frostc$ChoiceCase* $tmp2719 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
// unreffing e
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block93;
block95:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2703);
// unreffing REF($1077:frost.collections.Iterator.T)
org$frostlang$frostc$ChoiceCase* $tmp2720 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
// unreffing e
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block91;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
// unreffing REF($1066:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block89;
block90:;
// line 1
// line 778
org$frostlang$frostc$ClassDecl* $tmp2721 = *(&local14);
org$frostlang$frostc$Position* $tmp2722 = &$tmp2721->position;
org$frostlang$frostc$Position $tmp2723 = *$tmp2722;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2723, &$s2724);
// line 779
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2725 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
// unreffing result
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2726 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
// unreffing supertypes
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2727 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
// unreffing parameters
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2728 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
// unreffing annotations
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2729 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
// unreffing doccomment
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2730 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
// unreffing fullName
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ClassDecl*) NULL);
block89:;
// line 781
frost$core$Bit $tmp2731 = *(&local31);
frost$core$Bit $tmp2732 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2731);
bool $tmp2733 = $tmp2732.value;
if ($tmp2733) goto block96; else goto block97;
block96:;
// line 782
org$frostlang$frostc$ClassDecl* $tmp2734 = *(&local14);
org$frostlang$frostc$Type* $tmp2735 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
org$frostlang$frostc$Type** $tmp2736 = &$tmp2734->rawSuper;
org$frostlang$frostc$Type* $tmp2737 = *$tmp2736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
org$frostlang$frostc$Type** $tmp2738 = &$tmp2734->rawSuper;
*$tmp2738 = $tmp2735;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
// unreffing REF($1172:org.frostlang.frostc.Type)
goto block97;
block97:;
goto block87;
block87:;
// line 785
frost$core$Weak** $tmp2739 = &param0->compiler;
frost$core$Weak* $tmp2740 = *$tmp2739;
frost$core$Object* $tmp2741 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2740);
frost$collections$Stack** $tmp2742 = &((org$frostlang$frostc$Compiler*) $tmp2741)->currentClass;
frost$collections$Stack* $tmp2743 = *$tmp2742;
frost$core$Object* $tmp2744 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2743);
frost$core$Frost$unref$frost$core$Object$Q($tmp2744);
// unreffing REF($1196:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp2741);
// unreffing REF($1191:frost.core.Weak.T)
// line 786
org$frostlang$frostc$ClassDecl* $tmp2745 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
org$frostlang$frostc$ClassDecl* $tmp2746 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
// unreffing result
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2747 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
// unreffing supertypes
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2748 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
// unreffing parameters
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2749 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
// unreffing annotations
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2750 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2750));
// unreffing doccomment
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2751 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
// unreffing fullName
*(&local0) = ((frost$core$String*) NULL);
return $tmp2745;

}
void org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, frost$collections$Array* param2) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 790
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) param1));
// line 791
frost$collections$Array** $tmp2752 = &param1->classes;
frost$collections$Array* $tmp2753 = *$tmp2752;
ITable* $tmp2754 = ((frost$collections$Iterable*) $tmp2753)->$class->itable;
while ($tmp2754->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2754 = $tmp2754->next;
}
$fn2756 $tmp2755 = $tmp2754->methods[0];
frost$collections$Iterator* $tmp2757 = $tmp2755(((frost$collections$Iterable*) $tmp2753));
goto block1;
block1:;
ITable* $tmp2758 = $tmp2757->$class->itable;
while ($tmp2758->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2758 = $tmp2758->next;
}
$fn2760 $tmp2759 = $tmp2758->methods[0];
frost$core$Bit $tmp2761 = $tmp2759($tmp2757);
bool $tmp2762 = $tmp2761.value;
if ($tmp2762) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp2763 = $tmp2757->$class->itable;
while ($tmp2763->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2763 = $tmp2763->next;
}
$fn2765 $tmp2764 = $tmp2763->methods[1];
frost$core$Object* $tmp2766 = $tmp2764($tmp2757);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp2766)));
org$frostlang$frostc$ClassDecl* $tmp2767 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2767));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp2766);
// line 792
org$frostlang$frostc$ClassDecl* $tmp2768 = *(&local0);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp2768, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2766);
// unreffing REF($21:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl* $tmp2769 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
// unreffing inner
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
// unreffing REF($10:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, frost$io$File* param1, frost$collections$MapView* param2, frost$core$String* param3, frost$collections$List* param4) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
// line 798
org$frostlang$frostc$ClassDecl** $tmp2770 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2771 = *$tmp2770;
frost$core$Bit $tmp2772 = frost$core$Bit$init$builtin_bit($tmp2771 == NULL);
bool $tmp2773 = $tmp2772.value;
if ($tmp2773) goto block1; else goto block2;
block1:;
// line 799
*(&local0) = ((frost$core$String*) NULL);
// line 800
ITable* $tmp2775 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2775->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2775 = $tmp2775->next;
}
$fn2777 $tmp2776 = $tmp2775->methods[1];
frost$core$Bit $tmp2778 = $tmp2776(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2774));
bool $tmp2779 = $tmp2778.value;
if ($tmp2779) goto block3; else goto block5;
block3:;
// line 801
frost$core$String* $tmp2780 = frost$core$String$get_asString$R$frost$core$String(param3);
frost$core$String* $tmp2781 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2780, &$s2782);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
frost$core$String* $tmp2783 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
*(&local0) = $tmp2781;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
// unreffing REF($18:frost.core.String)
goto block4;
block5:;
// line 1
// line 804
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2784));
frost$core$String* $tmp2785 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
*(&local0) = &$s2786;
goto block4;
block4:;
// line 806
org$frostlang$frostc$ClassDecl* $tmp2787 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
org$frostlang$frostc$Position $tmp2788 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2789 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
org$frostlang$frostc$Annotations$init($tmp2789);
frost$core$Int64 $tmp2790 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2791 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2790);
frost$core$String* $tmp2792 = *(&local0);
frost$collections$Array* $tmp2793 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2793);
frost$collections$Array* $tmp2794 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2794);
frost$core$Weak** $tmp2795 = &param0->compiler;
frost$core$Weak* $tmp2796 = *$tmp2795;
frost$core$Object* $tmp2797 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2796);
org$frostlang$frostc$SymbolTable** $tmp2798 = &((org$frostlang$frostc$Compiler*) $tmp2797)->root;
org$frostlang$frostc$SymbolTable* $tmp2799 = *$tmp2798;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2787, param1, $tmp2788, param2, ((frost$core$String*) NULL), $tmp2789, $tmp2791, $tmp2792, ((frost$collections$ListView*) $tmp2793), $tmp2794, $tmp2799);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
org$frostlang$frostc$ClassDecl** $tmp2800 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2801 = *$tmp2800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
org$frostlang$frostc$ClassDecl** $tmp2802 = &param0->bareCodeClass;
*$tmp2802 = $tmp2787;
frost$core$Frost$unref$frost$core$Object$Q($tmp2797);
// unreffing REF($60:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
// unreffing REF($54:frost.collections.Array<org.frostlang.frostc.ClassDecl.GenericParameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
// unreffing REF($50:frost.collections.Array<org.frostlang.frostc.Type>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
// unreffing REF($45:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
// unreffing REF($43:org.frostlang.frostc.ClassDecl)
// line 809
org$frostlang$frostc$ClassDecl** $tmp2803 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2804 = *$tmp2803;
frost$core$Bit $tmp2805 = frost$core$Bit$init$builtin_bit($tmp2804 != NULL);
bool $tmp2806 = $tmp2805.value;
if ($tmp2806) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2807 = (frost$core$Int64) {809};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2808, $tmp2807, &$s2809);
abort(); // unreachable
block6:;
ITable* $tmp2810 = ((frost$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp2810->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp2810 = $tmp2810->next;
}
$fn2812 $tmp2811 = $tmp2810->methods[0];
$tmp2811(((frost$collections$CollectionWriter*) param4), ((frost$core$Object*) $tmp2804));
// line 810
org$frostlang$frostc$MethodDecl* $tmp2813 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2814 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2815 = *$tmp2814;
frost$core$Bit $tmp2816 = frost$core$Bit$init$builtin_bit($tmp2815 != NULL);
bool $tmp2817 = $tmp2816.value;
if ($tmp2817) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp2818 = (frost$core$Int64) {810};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2819, $tmp2818, &$s2820);
abort(); // unreachable
block8:;
org$frostlang$frostc$Position $tmp2821 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2822 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2823 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2822, $tmp2823);
frost$core$Int64 $tmp2824 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2825 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2824);
frost$collections$Array* $tmp2826 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2827 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2826, $tmp2827);
org$frostlang$frostc$Type* $tmp2828 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2829 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2829);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2813, $tmp2815, $tmp2821, ((frost$core$String*) NULL), $tmp2822, $tmp2825, &$s2830, ((frost$collections$Array*) NULL), $tmp2826, $tmp2828, $tmp2829);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
org$frostlang$frostc$MethodDecl* $tmp2831 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
*(&local1) = $tmp2813;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
// unreffing REF($127:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
// unreffing REF($126:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
// unreffing REF($122:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
// unreffing REF($117:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
// unreffing REF($105:org.frostlang.frostc.MethodDecl)
// line 813
org$frostlang$frostc$ClassDecl** $tmp2832 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2833 = *$tmp2832;
frost$core$Bit $tmp2834 = frost$core$Bit$init$builtin_bit($tmp2833 != NULL);
bool $tmp2835 = $tmp2834.value;
if ($tmp2835) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2836 = (frost$core$Int64) {813};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2837, $tmp2836, &$s2838);
abort(); // unreachable
block10:;
frost$collections$Array** $tmp2839 = &$tmp2833->methods;
frost$collections$Array* $tmp2840 = *$tmp2839;
org$frostlang$frostc$MethodDecl* $tmp2841 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp2840, ((frost$core$Object*) $tmp2841));
// line 814
org$frostlang$frostc$ClassDecl** $tmp2842 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2843 = *$tmp2842;
frost$core$Bit $tmp2844 = frost$core$Bit$init$builtin_bit($tmp2843 != NULL);
bool $tmp2845 = $tmp2844.value;
if ($tmp2845) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp2846 = (frost$core$Int64) {814};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2847, $tmp2846, &$s2848);
abort(); // unreachable
block12:;
org$frostlang$frostc$SymbolTable** $tmp2849 = &$tmp2843->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2850 = *$tmp2849;
org$frostlang$frostc$MethodDecl* $tmp2851 = *(&local1);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2850, ((org$frostlang$frostc$Symbol*) $tmp2851));
// line 815
org$frostlang$frostc$MethodDecl* $tmp2852 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2853 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2854 = *$tmp2853;
frost$core$Bit $tmp2855 = frost$core$Bit$init$builtin_bit($tmp2854 != NULL);
bool $tmp2856 = $tmp2855.value;
if ($tmp2856) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp2857 = (frost$core$Int64) {815};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2858, $tmp2857, &$s2859);
abort(); // unreachable
block14:;
org$frostlang$frostc$Position $tmp2860 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2861 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2862 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2863 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2864 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2862, $tmp2863);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2861, $tmp2864);
frost$core$Int64 $tmp2865 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2866 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2865);
frost$collections$Array* $tmp2867 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2868 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2867, $tmp2868);
org$frostlang$frostc$Type* $tmp2869 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2870 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2870);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2852, $tmp2854, $tmp2860, ((frost$core$String*) NULL), $tmp2861, $tmp2866, &$s2871, ((frost$collections$Array*) NULL), $tmp2867, $tmp2869, $tmp2870);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
org$frostlang$frostc$MethodDecl* $tmp2872 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
*(&local2) = $tmp2852;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
// unreffing REF($212:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
// unreffing REF($211:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
// unreffing REF($207:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
// unreffing REF($200:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
// unreffing REF($188:org.frostlang.frostc.MethodDecl)
// line 818
org$frostlang$frostc$ClassDecl** $tmp2873 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2874 = *$tmp2873;
frost$core$Bit $tmp2875 = frost$core$Bit$init$builtin_bit($tmp2874 != NULL);
bool $tmp2876 = $tmp2875.value;
if ($tmp2876) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2877 = (frost$core$Int64) {818};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2878, $tmp2877, &$s2879);
abort(); // unreachable
block16:;
frost$collections$Array** $tmp2880 = &$tmp2874->methods;
frost$collections$Array* $tmp2881 = *$tmp2880;
org$frostlang$frostc$MethodDecl* $tmp2882 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2881, ((frost$core$Object*) $tmp2882));
// line 819
org$frostlang$frostc$ClassDecl** $tmp2883 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2884 = *$tmp2883;
frost$core$Bit $tmp2885 = frost$core$Bit$init$builtin_bit($tmp2884 != NULL);
bool $tmp2886 = $tmp2885.value;
if ($tmp2886) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp2887 = (frost$core$Int64) {819};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2888, $tmp2887, &$s2889);
abort(); // unreachable
block18:;
org$frostlang$frostc$SymbolTable** $tmp2890 = &$tmp2884->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2891 = *$tmp2890;
org$frostlang$frostc$MethodDecl* $tmp2892 = *(&local2);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2891, ((org$frostlang$frostc$Symbol*) $tmp2892));
org$frostlang$frostc$MethodDecl* $tmp2893 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
// unreffing defaultCleanup
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2894 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
// unreffing defaultInit
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp2895 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
// unreffing fullName
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

frost$io$File** $tmp2896 = &param0->source;
frost$io$File* $tmp2897 = *$tmp2896;
frost$core$Bit $tmp2898 = frost$core$Bit$init$builtin_bit($tmp2897 != NULL);
bool $tmp2899 = $tmp2898.value;
if ($tmp2899) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2900 = (frost$core$Int64) {824};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2901, $tmp2900, &$s2902);
abort(); // unreachable
block1:;
// line 825
frost$core$Weak** $tmp2903 = &param0->compiler;
frost$core$Weak* $tmp2904 = *$tmp2903;
frost$core$Object* $tmp2905 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2904);
frost$io$File** $tmp2906 = &param0->source;
frost$io$File* $tmp2907 = *$tmp2906;
frost$core$Bit $tmp2908 = frost$core$Bit$init$builtin_bit($tmp2907 != NULL);
bool $tmp2909 = $tmp2908.value;
if ($tmp2909) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp2910 = (frost$core$Int64) {825};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2911, $tmp2910, &$s2912);
abort(); // unreachable
block3:;
org$frostlang$frostc$Compiler$error$frost$io$File$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2905), $tmp2907, param1, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2905);
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
// line 829
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp2913 = &param0->source;
frost$io$File* $tmp2914 = *$tmp2913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
frost$io$File** $tmp2915 = &param0->source;
*$tmp2915 = param1;
// line 830
frost$core$Int64* $tmp2916 = &param2->$rawValue;
frost$core$Int64 $tmp2917 = *$tmp2916;
frost$core$Int64 $tmp2918 = (frost$core$Int64) {19};
frost$core$Bit $tmp2919 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2917, $tmp2918);
bool $tmp2920 = $tmp2919.value;
if ($tmp2920) goto block2; else goto block3;
block2:;
org$frostlang$frostc$FixedArray** $tmp2921 = (org$frostlang$frostc$FixedArray**) (param2->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2922 = *$tmp2921;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
org$frostlang$frostc$FixedArray* $tmp2923 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
*(&local0) = $tmp2922;
// line 832
frost$collections$Array* $tmp2924 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2924);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
frost$collections$Array* $tmp2925 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
*(&local1) = $tmp2924;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
// unreffing REF($27:frost.collections.Array<org.frostlang.frostc.ClassDecl>)
// line 833
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2926));
frost$core$String* $tmp2927 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2927));
*(&local2) = &$s2928;
// line 834
frost$collections$HashMap* $tmp2929 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2929);
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
frost$collections$HashMap* $tmp2930 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
*(&local3) = $tmp2929;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
// unreffing REF($49:frost.collections.HashMap<frost.core.String, frost.core.String>)
// line 835
org$frostlang$frostc$FixedArray* $tmp2931 = *(&local0);
ITable* $tmp2932 = ((frost$collections$Iterable*) $tmp2931)->$class->itable;
while ($tmp2932->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2932 = $tmp2932->next;
}
$fn2934 $tmp2933 = $tmp2932->methods[0];
frost$collections$Iterator* $tmp2935 = $tmp2933(((frost$collections$Iterable*) $tmp2931));
goto block4;
block4:;
ITable* $tmp2936 = $tmp2935->$class->itable;
while ($tmp2936->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2936 = $tmp2936->next;
}
$fn2938 $tmp2937 = $tmp2936->methods[0];
frost$core$Bit $tmp2939 = $tmp2937($tmp2935);
bool $tmp2940 = $tmp2939.value;
if ($tmp2940) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2941 = $tmp2935->$class->itable;
while ($tmp2941->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2941 = $tmp2941->next;
}
$fn2943 $tmp2942 = $tmp2941->methods[1];
frost$core$Object* $tmp2944 = $tmp2942($tmp2935);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2944)));
org$frostlang$frostc$ASTNode* $tmp2945 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2944);
// line 836
org$frostlang$frostc$ASTNode* $tmp2946 = *(&local4);
frost$core$Int64* $tmp2947 = &$tmp2946->$rawValue;
frost$core$Int64 $tmp2948 = *$tmp2947;
frost$core$Int64 $tmp2949 = (frost$core$Int64) {33};
frost$core$Bit $tmp2950 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2948, $tmp2949);
bool $tmp2951 = $tmp2950.value;
if ($tmp2951) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2952 = (org$frostlang$frostc$Position*) ($tmp2946->$data + 0);
org$frostlang$frostc$Position $tmp2953 = *$tmp2952;
frost$core$String** $tmp2954 = (frost$core$String**) ($tmp2946->$data + 16);
frost$core$String* $tmp2955 = *$tmp2954;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
frost$core$String* $tmp2956 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
*(&local5) = $tmp2955;
// line 838
frost$core$String* $tmp2957 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
frost$core$String* $tmp2958 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
*(&local2) = $tmp2957;
frost$core$String* $tmp2959 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2959));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block7;
block9:;
frost$core$Int64 $tmp2960 = (frost$core$Int64) {50};
frost$core$Bit $tmp2961 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2948, $tmp2960);
bool $tmp2962 = $tmp2961.value;
if ($tmp2962) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2963 = (org$frostlang$frostc$Position*) ($tmp2946->$data + 0);
org$frostlang$frostc$Position $tmp2964 = *$tmp2963;
frost$core$String** $tmp2965 = (frost$core$String**) ($tmp2946->$data + 16);
frost$core$String* $tmp2966 = *$tmp2965;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
frost$core$String* $tmp2967 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
*(&local6) = $tmp2966;
// line 841
frost$core$String* $tmp2968 = *(&local6);
frost$core$String$Index$nullable $tmp2969 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp2968, &$s2970);
*(&local7) = $tmp2969;
// line 842
*(&local8) = ((frost$core$String*) NULL);
// line 843
frost$core$String$Index$nullable $tmp2971 = *(&local7);
frost$core$Bit $tmp2972 = frost$core$Bit$init$builtin_bit($tmp2971.nonnull);
bool $tmp2973 = $tmp2972.value;
if ($tmp2973) goto block12; else goto block14;
block12:;
// line 844
frost$core$String* $tmp2974 = *(&local6);
frost$core$String* $tmp2975 = *(&local6);
frost$core$String$Index$nullable $tmp2976 = *(&local7);
frost$core$Bit $tmp2977 = frost$core$Bit$init$builtin_bit($tmp2976.nonnull);
bool $tmp2978 = $tmp2977.value;
if ($tmp2978) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp2979 = (frost$core$Int64) {844};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2980, $tmp2979, &$s2981);
abort(); // unreachable
block15:;
frost$core$String$Index $tmp2982 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp2975, ((frost$core$String$Index) $tmp2976.value));
frost$core$Bit $tmp2983 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2984 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2982, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2983);
frost$core$String* $tmp2985 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2974, $tmp2984);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2985));
frost$core$String* $tmp2986 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
*(&local8) = $tmp2985;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2985));
// unreffing REF($162:frost.core.String)
goto block13;
block14:;
// line 1
// line 847
frost$core$String* $tmp2987 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
frost$core$String* $tmp2988 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
*(&local8) = $tmp2987;
goto block13;
block13:;
// line 849
frost$collections$HashMap* $tmp2989 = *(&local3);
frost$core$String* $tmp2990 = *(&local8);
frost$core$String* $tmp2991 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2989, ((frost$collections$Key*) $tmp2990), ((frost$core$Object*) $tmp2991));
frost$core$String* $tmp2992 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
// unreffing alias
*(&local8) = ((frost$core$String*) NULL);
frost$core$String* $tmp2993 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
// unreffing fullName
*(&local6) = ((frost$core$String*) NULL);
goto block7;
block11:;
frost$core$Int64 $tmp2994 = (frost$core$Int64) {12};
frost$core$Bit $tmp2995 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2948, $tmp2994);
bool $tmp2996 = $tmp2995.value;
if ($tmp2996) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp2997 = (org$frostlang$frostc$Position*) ($tmp2946->$data + 0);
org$frostlang$frostc$Position $tmp2998 = *$tmp2997;
*(&local9) = $tmp2998;
org$frostlang$frostc$ASTNode** $tmp2999 = (org$frostlang$frostc$ASTNode**) ($tmp2946->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3000 = *$tmp2999;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
org$frostlang$frostc$ASTNode* $tmp3001 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
*(&local10) = $tmp3000;
org$frostlang$frostc$FixedArray** $tmp3002 = (org$frostlang$frostc$FixedArray**) ($tmp2946->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3003 = *$tmp3002;
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3003));
org$frostlang$frostc$FixedArray* $tmp3004 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
*(&local11) = $tmp3003;
org$frostlang$frostc$ClassDecl$Kind* $tmp3005 = (org$frostlang$frostc$ClassDecl$Kind*) ($tmp2946->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp3006 = *$tmp3005;
*(&local12) = $tmp3006;
frost$core$String** $tmp3007 = (frost$core$String**) ($tmp2946->$data + 40);
frost$core$String* $tmp3008 = *$tmp3007;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
frost$core$String* $tmp3009 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
*(&local13) = $tmp3008;
org$frostlang$frostc$FixedArray** $tmp3010 = (org$frostlang$frostc$FixedArray**) ($tmp2946->$data + 48);
org$frostlang$frostc$FixedArray* $tmp3011 = *$tmp3010;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
org$frostlang$frostc$FixedArray* $tmp3012 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
*(&local14) = $tmp3011;
org$frostlang$frostc$FixedArray** $tmp3013 = (org$frostlang$frostc$FixedArray**) ($tmp2946->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3014 = *$tmp3013;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
org$frostlang$frostc$FixedArray* $tmp3015 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
*(&local15) = $tmp3014;
org$frostlang$frostc$FixedArray** $tmp3016 = (org$frostlang$frostc$FixedArray**) ($tmp2946->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3017 = *$tmp3016;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
org$frostlang$frostc$FixedArray* $tmp3018 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
*(&local16) = $tmp3017;
// line 853
frost$collections$HashMap* $tmp3019 = *(&local3);
frost$core$String* $tmp3020 = *(&local2);
org$frostlang$frostc$Position $tmp3021 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp3022 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp3023 = *(&local11);
org$frostlang$frostc$ClassDecl$Kind $tmp3024 = *(&local12);
frost$core$String* $tmp3025 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp3026 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp3027 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp3028 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3029 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, param1, ((frost$collections$MapView*) $tmp3019), $tmp3020, $tmp3021, $tmp3022, $tmp3023, $tmp3024, $tmp3025, $tmp3026, $tmp3027, $tmp3028);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
org$frostlang$frostc$ClassDecl* $tmp3030 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3030));
*(&local17) = $tmp3029;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
// unreffing REF($278:org.frostlang.frostc.ClassDecl?)
// line 855
org$frostlang$frostc$ClassDecl* $tmp3031 = *(&local17);
frost$core$Bit $tmp3032 = frost$core$Bit$init$builtin_bit($tmp3031 != NULL);
bool $tmp3033 = $tmp3032.value;
if ($tmp3033) goto block19; else goto block20;
block19:;
// line 856
org$frostlang$frostc$ClassDecl* $tmp3034 = *(&local17);
frost$core$Bit $tmp3035 = frost$core$Bit$init$builtin_bit($tmp3034 != NULL);
bool $tmp3036 = $tmp3035.value;
if ($tmp3036) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp3037 = (frost$core$Int64) {856};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3038, $tmp3037, &$s3039);
abort(); // unreachable
block21:;
frost$collections$Array* $tmp3040 = *(&local1);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp3034, $tmp3040);
goto block20;
block20:;
org$frostlang$frostc$ClassDecl* $tmp3041 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
// unreffing cl
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp3042 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
// unreffing members
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3043 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
// unreffing supertypes
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3044 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
// unreffing generics
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3045 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3045));
// unreffing name
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3046 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
// unreffing annotations
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3047 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3047));
// unreffing dc
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block18:;
frost$core$Int64 $tmp3048 = (frost$core$Int64) {29};
frost$core$Bit $tmp3049 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2948, $tmp3048);
bool $tmp3050 = $tmp3049.value;
if ($tmp3050) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp3051 = (org$frostlang$frostc$Position*) ($tmp2946->$data + 0);
org$frostlang$frostc$Position $tmp3052 = *$tmp3051;
*(&local18) = $tmp3052;
org$frostlang$frostc$ASTNode** $tmp3053 = (org$frostlang$frostc$ASTNode**) ($tmp2946->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3054 = *$tmp3053;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
org$frostlang$frostc$ASTNode* $tmp3055 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
*(&local19) = $tmp3054;
org$frostlang$frostc$FixedArray** $tmp3056 = (org$frostlang$frostc$FixedArray**) ($tmp2946->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3057 = *$tmp3056;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3057));
org$frostlang$frostc$FixedArray* $tmp3058 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
*(&local20) = $tmp3057;
org$frostlang$frostc$MethodDecl$Kind* $tmp3059 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp2946->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp3060 = *$tmp3059;
*(&local21) = $tmp3060;
frost$core$String** $tmp3061 = (frost$core$String**) ($tmp2946->$data + 40);
frost$core$String* $tmp3062 = *$tmp3061;
*(&local22) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
frost$core$String* $tmp3063 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
*(&local22) = $tmp3062;
org$frostlang$frostc$FixedArray** $tmp3064 = (org$frostlang$frostc$FixedArray**) ($tmp2946->$data + 48);
org$frostlang$frostc$FixedArray* $tmp3065 = *$tmp3064;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3065));
org$frostlang$frostc$FixedArray* $tmp3066 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3066));
*(&local23) = $tmp3065;
org$frostlang$frostc$FixedArray** $tmp3067 = (org$frostlang$frostc$FixedArray**) ($tmp2946->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3068 = *$tmp3067;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
org$frostlang$frostc$FixedArray* $tmp3069 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
*(&local24) = $tmp3068;
org$frostlang$frostc$ASTNode** $tmp3070 = (org$frostlang$frostc$ASTNode**) ($tmp2946->$data + 64);
org$frostlang$frostc$ASTNode* $tmp3071 = *$tmp3070;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
org$frostlang$frostc$ASTNode* $tmp3072 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
*(&local25) = $tmp3071;
org$frostlang$frostc$FixedArray** $tmp3073 = (org$frostlang$frostc$FixedArray**) ($tmp2946->$data + 72);
org$frostlang$frostc$FixedArray* $tmp3074 = *$tmp3073;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
org$frostlang$frostc$FixedArray* $tmp3075 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
*(&local26) = $tmp3074;
// line 861
org$frostlang$frostc$MethodDecl$Kind $tmp3076 = *(&local21);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3077;
$tmp3077 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3077->value = $tmp3076;
frost$core$Int64 $tmp3078 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3079 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3078);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3080;
$tmp3080 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3080->value = $tmp3079;
ITable* $tmp3081 = ((frost$core$Equatable*) $tmp3077)->$class->itable;
while ($tmp3081->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3081 = $tmp3081->next;
}
$fn3083 $tmp3082 = $tmp3081->methods[0];
frost$core$Bit $tmp3084 = $tmp3082(((frost$core$Equatable*) $tmp3077), ((frost$core$Equatable*) $tmp3080));
bool $tmp3085 = $tmp3084.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3080)));
// unreffing REF($423:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3077)));
// unreffing REF($419:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp3085) goto block25; else goto block26;
block25:;
// line 862
org$frostlang$frostc$Position $tmp3086 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3086, &$s3087);
// line 863
org$frostlang$frostc$FixedArray* $tmp3088 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
// unreffing statements
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3089 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
// unreffing rawReturnType
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3090 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
// unreffing parameters
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3091 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
// unreffing generics
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3092 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
// unreffing rawName
*(&local22) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3093 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
// unreffing annotations
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3094 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
// unreffing dc
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2944);
// unreffing REF($78:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp3095 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
// unreffing e
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block26:;
// line 865
frost$collections$HashMap* $tmp3096 = *(&local3);
frost$core$String* $tmp3097 = *(&local2);
frost$collections$Array* $tmp3098 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3096), $tmp3097, ((frost$collections$List*) $tmp3098));
// line 866
*(&local27) = ((frost$core$String*) NULL);
// line 867
frost$core$String* $tmp3099 = *(&local22);
frost$core$Bit $tmp3100 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3099, &$s3101);
bool $tmp3102 = $tmp3100.value;
if ($tmp3102) goto block27; else goto block29;
block27:;
// line 868
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3103));
frost$core$String* $tmp3104 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
*(&local27) = &$s3105;
// line 869
frost$collections$Array* $tmp3106 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3106);
*(&local28) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
frost$collections$Array* $tmp3107 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
*(&local28) = $tmp3106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
// unreffing REF($504:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
// line 870
frost$collections$Array* $tmp3108 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3108);
*(&local29) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
frost$collections$Array* $tmp3109 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
*(&local29) = $tmp3108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
// unreffing REF($518:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 871
frost$collections$Array* $tmp3110 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3110);
*(&local30) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
frost$collections$Array* $tmp3111 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3111));
*(&local30) = $tmp3110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
// unreffing REF($532:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 872
org$frostlang$frostc$FixedArray* $tmp3112 = *(&local24);
ITable* $tmp3113 = ((frost$collections$Iterable*) $tmp3112)->$class->itable;
while ($tmp3113->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3113 = $tmp3113->next;
}
$fn3115 $tmp3114 = $tmp3113->methods[0];
frost$collections$Iterator* $tmp3116 = $tmp3114(((frost$collections$Iterable*) $tmp3112));
goto block30;
block30:;
ITable* $tmp3117 = $tmp3116->$class->itable;
while ($tmp3117->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3117 = $tmp3117->next;
}
$fn3119 $tmp3118 = $tmp3117->methods[0];
frost$core$Bit $tmp3120 = $tmp3118($tmp3116);
bool $tmp3121 = $tmp3120.value;
if ($tmp3121) goto block32; else goto block31;
block31:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3122 = $tmp3116->$class->itable;
while ($tmp3122->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3122 = $tmp3122->next;
}
$fn3124 $tmp3123 = $tmp3122->methods[1];
frost$core$Object* $tmp3125 = $tmp3123($tmp3116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3125)));
org$frostlang$frostc$ASTNode* $tmp3126 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3126));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp3125);
// line 873
org$frostlang$frostc$ASTNode* $tmp3127 = *(&local31);
frost$core$Int64* $tmp3128 = &$tmp3127->$rawValue;
frost$core$Int64 $tmp3129 = *$tmp3128;
frost$core$Int64 $tmp3130 = (frost$core$Int64) {34};
frost$core$Bit $tmp3131 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3129, $tmp3130);
bool $tmp3132 = $tmp3131.value;
if ($tmp3132) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp3133 = (org$frostlang$frostc$Position*) ($tmp3127->$data + 0);
org$frostlang$frostc$Position $tmp3134 = *$tmp3133;
*(&local32) = $tmp3134;
frost$core$String** $tmp3135 = (frost$core$String**) ($tmp3127->$data + 16);
frost$core$String* $tmp3136 = *$tmp3135;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3136));
frost$core$String* $tmp3137 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
*(&local33) = $tmp3136;
org$frostlang$frostc$ASTNode** $tmp3138 = (org$frostlang$frostc$ASTNode**) ($tmp3127->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3139 = *$tmp3138;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3139));
org$frostlang$frostc$ASTNode* $tmp3140 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3140));
*(&local34) = $tmp3139;
// line 875
frost$collections$Array* $tmp3141 = *(&local28);
org$frostlang$frostc$MethodDecl$Parameter* $tmp3142 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp3143 = *(&local33);
org$frostlang$frostc$ASTNode* $tmp3144 = *(&local34);
org$frostlang$frostc$Type* $tmp3145 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp3144);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp3142, $tmp3143, $tmp3145);
frost$collections$Array$add$frost$collections$Array$T($tmp3141, ((frost$core$Object*) $tmp3142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3145));
// unreffing REF($604:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
// unreffing REF($601:org.frostlang.frostc.MethodDecl.Parameter)
// line 877
frost$collections$Array* $tmp3146 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp3147 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3148 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp3149 = *(&local32);
frost$core$String* $tmp3150 = *(&local33);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3147, $tmp3148, $tmp3149, $tmp3150);
frost$collections$Array$add$frost$collections$Array$T($tmp3146, ((frost$core$Object*) $tmp3147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
// unreffing REF($617:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$ASTNode* $tmp3151 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3151));
// unreffing type
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3152 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3152));
// unreffing name
*(&local33) = ((frost$core$String*) NULL);
goto block33;
block35:;
// line 880
frost$core$Bit $tmp3153 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3154 = $tmp3153.value;
if ($tmp3154) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp3155 = (frost$core$Int64) {880};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3156, $tmp3155);
abort(); // unreachable
block36:;
goto block33;
block33:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3125);
// unreffing REF($561:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp3157 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
// unreffing p
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block30;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
// unreffing REF($550:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 884
org$frostlang$frostc$ASTNode* $tmp3158 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3159 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp3160 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3161 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3162 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp3163 = *(&local18);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3161, $tmp3162, $tmp3163, &$s3164);
org$frostlang$frostc$FixedArray* $tmp3165 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3165);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3158, $tmp3159, $tmp3160, $tmp3161, $tmp3165);
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
org$frostlang$frostc$ASTNode* $tmp3166 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3166));
*(&local35) = $tmp3158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
// unreffing REF($666:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3161));
// unreffing REF($662:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
// unreffing REF($659:org.frostlang.frostc.ASTNode)
// line 887
frost$collections$Array* $tmp3167 = *(&local29);
org$frostlang$frostc$ASTNode* $tmp3168 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3169 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp3170 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3171 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3172 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp3173 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3174 = *(&local35);
frost$core$String* $tmp3175 = *(&local27);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp3171, $tmp3172, $tmp3173, $tmp3174, $tmp3175);
frost$collections$Array* $tmp3176 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp3177 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3176);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3168, $tmp3169, $tmp3170, $tmp3171, $tmp3177);
frost$collections$Array$add$frost$collections$Array$T($tmp3167, ((frost$core$Object*) $tmp3168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
// unreffing REF($700:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3171));
// unreffing REF($692:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
// unreffing REF($689:org.frostlang.frostc.ASTNode)
// line 890
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
// line 891
org$frostlang$frostc$ASTNode* $tmp3178 = *(&local25);
frost$core$Bit $tmp3179 = frost$core$Bit$init$builtin_bit($tmp3178 != NULL);
bool $tmp3180 = $tmp3179.value;
if ($tmp3180) goto block38; else goto block40;
block38:;
// line 892
org$frostlang$frostc$ASTNode* $tmp3181 = *(&local25);
frost$core$Bit $tmp3182 = frost$core$Bit$init$builtin_bit($tmp3181 != NULL);
bool $tmp3183 = $tmp3182.value;
if ($tmp3183) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp3184 = (frost$core$Int64) {892};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3185, $tmp3184, &$s3186);
abort(); // unreachable
block41:;
org$frostlang$frostc$Type* $tmp3187 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp3181);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
org$frostlang$frostc$Type* $tmp3188 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3188));
*(&local36) = $tmp3187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
// unreffing REF($732:org.frostlang.frostc.Type)
goto block39;
block40:;
// line 1
// line 895
org$frostlang$frostc$Type* $tmp3189 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
org$frostlang$frostc$Type* $tmp3190 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
*(&local36) = $tmp3189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
// unreffing REF($745:org.frostlang.frostc.Type)
goto block39;
block39:;
// line 897
org$frostlang$frostc$MethodDecl* $tmp3191 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3192 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3193 = *$tmp3192;
frost$core$Bit $tmp3194 = frost$core$Bit$init$builtin_bit($tmp3193 != NULL);
bool $tmp3195 = $tmp3194.value;
if ($tmp3195) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp3196 = (frost$core$Int64) {897};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3197, $tmp3196, &$s3198);
abort(); // unreachable
block43:;
org$frostlang$frostc$Position $tmp3199 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp3200 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3201 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3200, $tmp3201);
frost$core$Int64 $tmp3202 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp3203 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3202);
frost$collections$Array* $tmp3204 = *(&local28);
org$frostlang$frostc$Type* $tmp3205 = *(&local36);
frost$collections$Array* $tmp3206 = *(&local29);
org$frostlang$frostc$FixedArray* $tmp3207 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3206);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3191, $tmp3193, $tmp3199, ((frost$core$String*) NULL), $tmp3200, $tmp3203, &$s3208, ((frost$collections$Array*) NULL), $tmp3204, $tmp3205, $tmp3207);
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
org$frostlang$frostc$MethodDecl* $tmp3209 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
*(&local37) = $tmp3191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3207));
// unreffing REF($778:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
// unreffing REF($769:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
// unreffing REF($757:org.frostlang.frostc.MethodDecl)
// line 901
org$frostlang$frostc$ClassDecl** $tmp3210 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3211 = *$tmp3210;
frost$core$Bit $tmp3212 = frost$core$Bit$init$builtin_bit($tmp3211 != NULL);
bool $tmp3213 = $tmp3212.value;
if ($tmp3213) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp3214 = (frost$core$Int64) {901};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3215, $tmp3214, &$s3216);
abort(); // unreachable
block45:;
frost$collections$Array** $tmp3217 = &$tmp3211->methods;
frost$collections$Array* $tmp3218 = *$tmp3217;
org$frostlang$frostc$MethodDecl* $tmp3219 = *(&local37);
frost$collections$Array$add$frost$collections$Array$T($tmp3218, ((frost$core$Object*) $tmp3219));
org$frostlang$frostc$MethodDecl* $tmp3220 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
// unreffing bareMain
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Type* $tmp3221 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
// unreffing returnType
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3222 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
// unreffing bareConstruct
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3223 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
// unreffing mainArguments
*(&local30) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3224 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
// unreffing mainStatements
*(&local29) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3225 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
// unreffing mainParameters
*(&local28) = ((frost$collections$Array*) NULL);
goto block28;
block29:;
// line 1
// line 904
frost$core$String* $tmp3226 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3226));
frost$core$String* $tmp3227 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
*(&local27) = $tmp3226;
goto block28;
block28:;
// line 906
frost$core$Weak** $tmp3228 = &param0->compiler;
frost$core$Weak* $tmp3229 = *$tmp3228;
frost$core$Object* $tmp3230 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3229);
frost$collections$Stack** $tmp3231 = &((org$frostlang$frostc$Compiler*) $tmp3230)->currentClass;
frost$collections$Stack* $tmp3232 = *$tmp3231;
org$frostlang$frostc$ClassDecl** $tmp3233 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3234 = *$tmp3233;
frost$core$Bit $tmp3235 = frost$core$Bit$init$builtin_bit($tmp3234 != NULL);
bool $tmp3236 = $tmp3235.value;
if ($tmp3236) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp3237 = (frost$core$Int64) {906};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3238, $tmp3237, &$s3239);
abort(); // unreachable
block47:;
frost$collections$Stack$push$frost$collections$Stack$T($tmp3232, ((frost$core$Object*) $tmp3234));
frost$core$Frost$unref$frost$core$Object$Q($tmp3230);
// unreffing REF($860:frost.core.Weak.T)
// line 907
org$frostlang$frostc$ClassDecl** $tmp3240 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3241 = *$tmp3240;
frost$core$Bit $tmp3242 = frost$core$Bit$init$builtin_bit($tmp3241 != NULL);
bool $tmp3243 = $tmp3242.value;
if ($tmp3243) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp3244 = (frost$core$Int64) {907};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3245, $tmp3244, &$s3246);
abort(); // unreachable
block49:;
org$frostlang$frostc$Position $tmp3247 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3248 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp3249 = *(&local20);
org$frostlang$frostc$MethodDecl$Kind $tmp3250 = *(&local21);
frost$core$String* $tmp3251 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp3252 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp3253 = *(&local24);
org$frostlang$frostc$ASTNode* $tmp3254 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp3255 = *(&local26);
org$frostlang$frostc$MethodDecl* $tmp3256 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, $tmp3241, $tmp3247, $tmp3248, $tmp3249, $tmp3250, $tmp3251, $tmp3252, $tmp3253, $tmp3254, $tmp3255);
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
org$frostlang$frostc$MethodDecl* $tmp3257 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3257));
*(&local38) = $tmp3256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
// unreffing REF($900:org.frostlang.frostc.MethodDecl?)
// line 909
org$frostlang$frostc$MethodDecl* $tmp3258 = *(&local38);
frost$core$Bit $tmp3259 = frost$core$Bit$init$builtin_bit($tmp3258 != NULL);
bool $tmp3260 = $tmp3259.value;
if ($tmp3260) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp3261 = (frost$core$Int64) {909};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3262, $tmp3261, &$s3263);
abort(); // unreachable
block53:;
org$frostlang$frostc$Annotations** $tmp3264 = &$tmp3258->annotations;
org$frostlang$frostc$Annotations* $tmp3265 = *$tmp3264;
frost$core$Bit $tmp3266 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3265);
bool $tmp3267 = $tmp3266.value;
if ($tmp3267) goto block51; else goto block52;
block51:;
// line 910
org$frostlang$frostc$MethodDecl* $tmp3268 = *(&local38);
frost$core$Bit $tmp3269 = frost$core$Bit$init$builtin_bit($tmp3268 != NULL);
bool $tmp3270 = $tmp3269.value;
if ($tmp3270) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp3271 = (frost$core$Int64) {910};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3272, $tmp3271, &$s3273);
abort(); // unreachable
block55:;
org$frostlang$frostc$Position* $tmp3274 = &((org$frostlang$frostc$Symbol*) $tmp3268)->position;
org$frostlang$frostc$Position $tmp3275 = *$tmp3274;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3275, &$s3276);
// line 912
org$frostlang$frostc$MethodDecl* $tmp3277 = *(&local38);
frost$core$Bit $tmp3278 = frost$core$Bit$init$builtin_bit($tmp3277 != NULL);
bool $tmp3279 = $tmp3278.value;
if ($tmp3279) goto block57; else goto block58;
block58:;
frost$core$Int64 $tmp3280 = (frost$core$Int64) {912};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3281, $tmp3280, &$s3282);
abort(); // unreachable
block57:;
org$frostlang$frostc$Annotations** $tmp3283 = &$tmp3277->annotations;
org$frostlang$frostc$Annotations* $tmp3284 = *$tmp3283;
frost$core$Int64* $tmp3285 = &$tmp3284->flags;
frost$core$Int64 $tmp3286 = *$tmp3285;
frost$core$Int64 $tmp3287 = (frost$core$Int64) {16};
frost$core$Int64 $tmp3288 = frost$core$Int64$$BNOT$R$frost$core$Int64($tmp3287);
frost$core$Int64 $tmp3289 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp3286, $tmp3288);
frost$core$Int64* $tmp3290 = &$tmp3284->flags;
*$tmp3290 = $tmp3289;
goto block52;
block52:;
// line 914
frost$core$Weak** $tmp3291 = &param0->compiler;
frost$core$Weak* $tmp3292 = *$tmp3291;
frost$core$Object* $tmp3293 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3292);
frost$collections$Stack** $tmp3294 = &((org$frostlang$frostc$Compiler*) $tmp3293)->currentClass;
frost$collections$Stack* $tmp3295 = *$tmp3294;
frost$core$Int64 $tmp3296 = (frost$core$Int64) {0};
frost$core$Object* $tmp3297 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3295, $tmp3296);
org$frostlang$frostc$ClassDecl** $tmp3298 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3299 = *$tmp3298;
bool $tmp3300 = ((org$frostlang$frostc$ClassDecl*) $tmp3297) == $tmp3299;
frost$core$Bit $tmp3301 = frost$core$Bit$init$builtin_bit($tmp3300);
bool $tmp3302 = $tmp3301.value;
if ($tmp3302) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp3303 = (frost$core$Int64) {914};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3304, $tmp3303);
abort(); // unreachable
block59:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3297);
// unreffing REF($969:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp3293);
// unreffing REF($963:frost.core.Weak.T)
// line 915
frost$core$Weak** $tmp3305 = &param0->compiler;
frost$core$Weak* $tmp3306 = *$tmp3305;
frost$core$Object* $tmp3307 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3306);
frost$collections$Stack** $tmp3308 = &((org$frostlang$frostc$Compiler*) $tmp3307)->currentClass;
frost$collections$Stack* $tmp3309 = *$tmp3308;
frost$core$Object* $tmp3310 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3309);
frost$core$Frost$unref$frost$core$Object$Q($tmp3310);
// unreffing REF($995:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp3307);
// unreffing REF($990:frost.core.Weak.T)
// line 916
org$frostlang$frostc$ClassDecl** $tmp3311 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3312 = *$tmp3311;
frost$core$Bit $tmp3313 = frost$core$Bit$init$builtin_bit($tmp3312 != NULL);
bool $tmp3314 = $tmp3313.value;
if ($tmp3314) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp3315 = (frost$core$Int64) {916};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3316, $tmp3315, &$s3317);
abort(); // unreachable
block61:;
frost$collections$Array** $tmp3318 = &$tmp3312->methods;
frost$collections$Array* $tmp3319 = *$tmp3318;
org$frostlang$frostc$MethodDecl* $tmp3320 = *(&local38);
frost$core$Bit $tmp3321 = frost$core$Bit$init$builtin_bit($tmp3320 != NULL);
bool $tmp3322 = $tmp3321.value;
if ($tmp3322) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp3323 = (frost$core$Int64) {916};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3324, $tmp3323, &$s3325);
abort(); // unreachable
block63:;
frost$collections$Array$add$frost$collections$Array$T($tmp3319, ((frost$core$Object*) $tmp3320));
// line 917
org$frostlang$frostc$ClassDecl** $tmp3326 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3327 = *$tmp3326;
frost$core$Bit $tmp3328 = frost$core$Bit$init$builtin_bit($tmp3327 != NULL);
bool $tmp3329 = $tmp3328.value;
if ($tmp3329) goto block65; else goto block66;
block66:;
frost$core$Int64 $tmp3330 = (frost$core$Int64) {917};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3331, $tmp3330, &$s3332);
abort(); // unreachable
block65:;
org$frostlang$frostc$SymbolTable** $tmp3333 = &$tmp3327->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3334 = *$tmp3333;
org$frostlang$frostc$MethodDecl* $tmp3335 = *(&local38);
frost$core$Bit $tmp3336 = frost$core$Bit$init$builtin_bit($tmp3335 != NULL);
bool $tmp3337 = $tmp3336.value;
if ($tmp3337) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp3338 = (frost$core$Int64) {917};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3339, $tmp3338, &$s3340);
abort(); // unreachable
block67:;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp3334, ((org$frostlang$frostc$Symbol*) $tmp3335));
org$frostlang$frostc$MethodDecl* $tmp3341 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
// unreffing m
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp3342 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3342));
// unreffing name
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3343 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3343));
// unreffing statements
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3344 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
// unreffing rawReturnType
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3345 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3345));
// unreffing parameters
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3346 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3346));
// unreffing generics
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3347 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3347));
// unreffing rawName
*(&local22) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3348 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3348));
// unreffing annotations
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3349 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3349));
// unreffing dc
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block24:;
frost$core$Int64 $tmp3350 = (frost$core$Int64) {18};
frost$core$Bit $tmp3351 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2948, $tmp3350);
bool $tmp3352 = $tmp3351.value;
if ($tmp3352) goto block69; else goto block70;
block69:;
org$frostlang$frostc$Position* $tmp3353 = (org$frostlang$frostc$Position*) ($tmp2946->$data + 0);
org$frostlang$frostc$Position $tmp3354 = *$tmp3353;
*(&local39) = $tmp3354;
org$frostlang$frostc$ASTNode** $tmp3355 = (org$frostlang$frostc$ASTNode**) ($tmp2946->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3356 = *$tmp3355;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
org$frostlang$frostc$ASTNode* $tmp3357 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
*(&local40) = $tmp3356;
org$frostlang$frostc$FixedArray** $tmp3358 = (org$frostlang$frostc$FixedArray**) ($tmp2946->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3359 = *$tmp3358;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3359));
org$frostlang$frostc$FixedArray* $tmp3360 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3360));
*(&local41) = $tmp3359;
org$frostlang$frostc$ASTNode** $tmp3361 = (org$frostlang$frostc$ASTNode**) ($tmp2946->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3362 = *$tmp3361;
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3362));
org$frostlang$frostc$ASTNode* $tmp3363 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3363));
*(&local42) = $tmp3362;
// line 920
frost$collections$HashMap* $tmp3364 = *(&local3);
frost$core$String* $tmp3365 = *(&local2);
frost$collections$Array* $tmp3366 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3364), $tmp3365, ((frost$collections$List*) $tmp3366));
// line 921
org$frostlang$frostc$ClassDecl** $tmp3367 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3368 = *$tmp3367;
frost$core$Bit $tmp3369 = frost$core$Bit$init$builtin_bit($tmp3368 != NULL);
bool $tmp3370 = $tmp3369.value;
if ($tmp3370) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp3371 = (frost$core$Int64) {921};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3372, $tmp3371, &$s3373);
abort(); // unreachable
block71:;
frost$collections$Array** $tmp3374 = &$tmp3368->fields;
frost$collections$Array* $tmp3375 = *$tmp3374;
ITable* $tmp3376 = ((frost$collections$CollectionView*) $tmp3375)->$class->itable;
while ($tmp3376->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3376 = $tmp3376->next;
}
$fn3378 $tmp3377 = $tmp3376->methods[0];
frost$core$Int64 $tmp3379 = $tmp3377(((frost$collections$CollectionView*) $tmp3375));
*(&local43) = $tmp3379;
// line 922
org$frostlang$frostc$ClassDecl** $tmp3380 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3381 = *$tmp3380;
frost$core$Bit $tmp3382 = frost$core$Bit$init$builtin_bit($tmp3381 != NULL);
bool $tmp3383 = $tmp3382.value;
if ($tmp3383) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp3384 = (frost$core$Int64) {922};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3385, $tmp3384, &$s3386);
abort(); // unreachable
block73:;
org$frostlang$frostc$Position $tmp3387 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp3388 = *(&local40);
org$frostlang$frostc$FixedArray* $tmp3389 = *(&local41);
org$frostlang$frostc$ASTNode* $tmp3390 = *(&local42);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, $tmp3381, $tmp3387, $tmp3388, $tmp3389, $tmp3390);
// line 923
frost$core$Int64 $tmp3391 = *(&local43);
org$frostlang$frostc$ClassDecl** $tmp3392 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3393 = *$tmp3392;
frost$core$Bit $tmp3394 = frost$core$Bit$init$builtin_bit($tmp3393 != NULL);
bool $tmp3395 = $tmp3394.value;
if ($tmp3395) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp3396 = (frost$core$Int64) {923};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3397, $tmp3396, &$s3398);
abort(); // unreachable
block75:;
frost$collections$Array** $tmp3399 = &$tmp3393->fields;
frost$collections$Array* $tmp3400 = *$tmp3399;
ITable* $tmp3401 = ((frost$collections$CollectionView*) $tmp3400)->$class->itable;
while ($tmp3401->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3401 = $tmp3401->next;
}
$fn3403 $tmp3402 = $tmp3401->methods[0];
frost$core$Int64 $tmp3404 = $tmp3402(((frost$collections$CollectionView*) $tmp3400));
frost$core$Bit $tmp3405 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3406 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3391, $tmp3404, $tmp3405);
frost$core$Int64 $tmp3407 = $tmp3406.min;
*(&local44) = $tmp3407;
frost$core$Int64 $tmp3408 = $tmp3406.max;
frost$core$Bit $tmp3409 = $tmp3406.inclusive;
bool $tmp3410 = $tmp3409.value;
frost$core$Int64 $tmp3411 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3412 = frost$core$Int64$convert$R$frost$core$UInt64($tmp3411);
if ($tmp3410) goto block80; else goto block81;
block80:;
int64_t $tmp3413 = $tmp3407.value;
int64_t $tmp3414 = $tmp3408.value;
bool $tmp3415 = $tmp3413 <= $tmp3414;
frost$core$Bit $tmp3416 = (frost$core$Bit) {$tmp3415};
bool $tmp3417 = $tmp3416.value;
if ($tmp3417) goto block77; else goto block78;
block81:;
int64_t $tmp3418 = $tmp3407.value;
int64_t $tmp3419 = $tmp3408.value;
bool $tmp3420 = $tmp3418 < $tmp3419;
frost$core$Bit $tmp3421 = (frost$core$Bit) {$tmp3420};
bool $tmp3422 = $tmp3421.value;
if ($tmp3422) goto block77; else goto block78;
block77:;
// line 924
org$frostlang$frostc$ClassDecl** $tmp3423 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3424 = *$tmp3423;
frost$core$Bit $tmp3425 = frost$core$Bit$init$builtin_bit($tmp3424 != NULL);
bool $tmp3426 = $tmp3425.value;
if ($tmp3426) goto block82; else goto block83;
block83:;
frost$core$Int64 $tmp3427 = (frost$core$Int64) {924};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3428, $tmp3427, &$s3429);
abort(); // unreachable
block82:;
frost$collections$Array** $tmp3430 = &$tmp3424->fields;
frost$collections$Array* $tmp3431 = *$tmp3430;
frost$core$Int64 $tmp3432 = *(&local44);
frost$core$Object* $tmp3433 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3431, $tmp3432);
*(&local45) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp3433)));
org$frostlang$frostc$FieldDecl* $tmp3434 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3434));
*(&local45) = ((org$frostlang$frostc$FieldDecl*) $tmp3433);
frost$core$Frost$unref$frost$core$Object$Q($tmp3433);
// unreffing REF($1225:frost.collections.Array.T)
// line 925
org$frostlang$frostc$FieldDecl* $tmp3435 = *(&local45);
org$frostlang$frostc$FieldDecl$Kind* $tmp3436 = &$tmp3435->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp3437 = *$tmp3436;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp3438;
$tmp3438 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp3438->value = $tmp3437;
frost$core$Int64 $tmp3439 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp3440 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp3439);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp3441;
$tmp3441 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp3441->value = $tmp3440;
ITable* $tmp3442 = ((frost$core$Equatable*) $tmp3438)->$class->itable;
while ($tmp3442->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3442 = $tmp3442->next;
}
$fn3444 $tmp3443 = $tmp3442->methods[1];
frost$core$Bit $tmp3445 = $tmp3443(((frost$core$Equatable*) $tmp3438), ((frost$core$Equatable*) $tmp3441));
bool $tmp3446 = $tmp3445.value;
if ($tmp3446) goto block86; else goto block87;
block86:;
org$frostlang$frostc$FieldDecl* $tmp3447 = *(&local45);
org$frostlang$frostc$Annotations** $tmp3448 = &$tmp3447->annotations;
org$frostlang$frostc$Annotations* $tmp3449 = *$tmp3448;
frost$core$Bit $tmp3450 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3449);
*(&local46) = $tmp3450;
goto block88;
block87:;
*(&local46) = $tmp3445;
goto block88;
block88:;
frost$core$Bit $tmp3451 = *(&local46);
bool $tmp3452 = $tmp3451.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3441)));
// unreffing REF($1245:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3438)));
// unreffing REF($1241:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
if ($tmp3452) goto block84; else goto block85;
block84:;
// line 927
org$frostlang$frostc$FieldDecl* $tmp3453 = *(&local45);
org$frostlang$frostc$Position* $tmp3454 = &((org$frostlang$frostc$Symbol*) $tmp3453)->position;
org$frostlang$frostc$Position $tmp3455 = *$tmp3454;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3455, &$s3456);
goto block85;
block85:;
org$frostlang$frostc$FieldDecl* $tmp3457 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
// unreffing f
*(&local45) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block79;
block79:;
frost$core$Int64 $tmp3458 = *(&local44);
int64_t $tmp3459 = $tmp3408.value;
int64_t $tmp3460 = $tmp3458.value;
int64_t $tmp3461 = $tmp3459 - $tmp3460;
frost$core$Int64 $tmp3462 = (frost$core$Int64) {$tmp3461};
frost$core$UInt64 $tmp3463 = frost$core$Int64$convert$R$frost$core$UInt64($tmp3462);
if ($tmp3410) goto block90; else goto block91;
block90:;
uint64_t $tmp3464 = $tmp3463.value;
uint64_t $tmp3465 = $tmp3412.value;
bool $tmp3466 = $tmp3464 >= $tmp3465;
frost$core$Bit $tmp3467 = (frost$core$Bit) {$tmp3466};
bool $tmp3468 = $tmp3467.value;
if ($tmp3468) goto block89; else goto block78;
block91:;
uint64_t $tmp3469 = $tmp3463.value;
uint64_t $tmp3470 = $tmp3412.value;
bool $tmp3471 = $tmp3469 > $tmp3470;
frost$core$Bit $tmp3472 = (frost$core$Bit) {$tmp3471};
bool $tmp3473 = $tmp3472.value;
if ($tmp3473) goto block89; else goto block78;
block89:;
int64_t $tmp3474 = $tmp3458.value;
int64_t $tmp3475 = $tmp3411.value;
int64_t $tmp3476 = $tmp3474 + $tmp3475;
frost$core$Int64 $tmp3477 = (frost$core$Int64) {$tmp3476};
*(&local44) = $tmp3477;
goto block77;
block78:;
org$frostlang$frostc$ASTNode* $tmp3478 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3478));
// unreffing varDecl
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3479 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3479));
// unreffing annotations
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3480 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3480));
// unreffing dc
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block70:;
// line 933
frost$core$Bit $tmp3481 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3482 = $tmp3481.value;
if ($tmp3482) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp3483 = (frost$core$Int64) {933};
org$frostlang$frostc$ASTNode* $tmp3484 = *(&local4);
frost$core$String* $tmp3485 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3486, ((frost$core$Object*) $tmp3484));
frost$core$String* $tmp3487 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3485, &$s3488);
org$frostlang$frostc$ASTNode* $tmp3489 = *(&local4);
frost$core$Int64* $tmp3490 = &$tmp3489->$rawValue;
frost$core$Int64 $tmp3491 = *$tmp3490;
frost$core$Int64$wrapper* $tmp3492;
$tmp3492 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3492->value = $tmp3491;
frost$core$String* $tmp3493 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3487, ((frost$core$Object*) $tmp3492));
frost$core$String* $tmp3494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3493, &$s3495);
org$frostlang$frostc$ASTNode* $tmp3496 = *(&local4);
$fn3498 $tmp3497 = ($fn3498) $tmp3496->$class->vtable[2];
org$frostlang$frostc$Position $tmp3499 = $tmp3497($tmp3496);
org$frostlang$frostc$Position$wrapper* $tmp3500;
$tmp3500 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp3500->value = $tmp3499;
frost$core$String* $tmp3501 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3494, ((frost$core$Object*) $tmp3500));
frost$core$String* $tmp3502 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3501, &$s3503);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3504, $tmp3483, $tmp3502);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
// unreffing REF($1341:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3501));
// unreffing REF($1340:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3500));
// unreffing REF($1339:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3494));
// unreffing REF($1335:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3493));
// unreffing REF($1334:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3492));
// unreffing REF($1333:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3487));
// unreffing REF($1329:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3485));
// unreffing REF($1328:frost.core.String)
abort(); // unreachable
block92:;
goto block7;
block7:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2944);
// unreffing REF($78:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp3505 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3505));
// unreffing e
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
// unreffing REF($67:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 937
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File** $tmp3506 = &param0->source;
frost$io$File* $tmp3507 = *$tmp3506;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3507));
frost$io$File** $tmp3508 = &param0->source;
*$tmp3508 = ((frost$io$File*) NULL);
// line 938
frost$collections$Array* $tmp3509 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp3509)));
frost$collections$HashMap* $tmp3510 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
// unreffing aliases
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp3511 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
// unreffing currentPackage
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp3512 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3512));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp3513 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3513));
// unreffing entries
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((frost$collections$ListView*) $tmp3509);
block3:;
// line 941
frost$core$Bit $tmp3514 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3515 = $tmp3514.value;
if ($tmp3515) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp3516 = (frost$core$Int64) {941};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3517, $tmp3516);
abort(); // unreachable
block94:;
goto block1;
block1:;
frost$core$Bit $tmp3518 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3519 = $tmp3518.value;
if ($tmp3519) goto block96; else goto block97;
block97:;
frost$core$Int64 $tmp3520 = (frost$core$Int64) {828};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3521, $tmp3520, &$s3522);
abort(); // unreachable
block96:;
abort(); // unreachable

}
void org$frostlang$frostc$Scanner$cleanup(org$frostlang$frostc$Scanner* param0) {

// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp3523 = &param0->compiler;
frost$core$Weak* $tmp3524 = *$tmp3523;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
org$frostlang$frostc$ClassDecl** $tmp3525 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3526 = *$tmp3525;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3526));
frost$io$File** $tmp3527 = &param0->source;
frost$io$File* $tmp3528 = *$tmp3527;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3528));
return;

}

