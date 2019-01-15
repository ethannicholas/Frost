#include "org/frostlanguage/frostc/Scanner.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "frost/core/Weak.h"
#include "frost/core/Frost.h"
#include "org/frostlanguage/frostc/Type.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/Position.h"
#include "frost/collections/Array.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/parser/Token/Kind.h"
#include "org/frostlanguage/frostc/Type/Kind.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlanguage/frostc/Annotations.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "org/frostlanguage/frostc/Annotations/Expression.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "org/frostlanguage/frostc/FieldDecl/Kind.h"
#include "org/frostlanguage/frostc/Variable/Kind.h"
#include "org/frostlanguage/frostc/FieldDecl.h"
#include "frost/core/Equatable.h"
#include "org/frostlanguage/frostc/SymbolTable.h"
#include "org/frostlanguage/frostc/ChoiceCase.h"
#include "org/frostlanguage/frostc/Compiler/Settings.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "org/frostlanguage/frostc/MethodDecl/Kind.h"
#include "org/frostlanguage/frostc/MethodDecl/GenericParameter.h"
#include "org/frostlanguage/frostc/MethodDecl/Parameter.h"
#include "org/frostlanguage/frostc/ClassDecl/Kind.h"
#include "frost/io/File.h"
#include "frost/collections/MapView.h"
#include "org/frostlanguage/frostc/Alias.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlanguage/frostc/ClassDecl/GenericParameter.h"
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
org$frostlanguage$frostc$Scanner$class_type org$frostlanguage$frostc$Scanner$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$Scanner$cleanup, org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type, org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64, org$frostlanguage$frostc$Scanner$convertAnnotations$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$Annotations, org$frostlanguage$frostc$Scanner$scanFields$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode, org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64, org$frostlanguage$frostc$Scanner$shouldInline$org$frostlanguage$frostc$Annotations$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$R$frost$core$Bit, org$frostlanguage$frostc$Scanner$scanMethod$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$R$org$frostlanguage$frostc$MethodDecl$Q, org$frostlanguage$frostc$Scanner$scanClassChild$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$ASTNode, org$frostlanguage$frostc$Scanner$scanChoiceCase$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q, org$frostlanguage$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ClassDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ClassDecl$Q, org$frostlanguage$frostc$Scanner$addClass$org$frostlanguage$frostc$ClassDecl$frost$collections$Array$LTorg$frostlanguage$frostc$ClassDecl$GT, org$frostlanguage$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlanguage$frostc$ClassDecl$GT, org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String, org$frostlanguage$frostc$Scanner$scan$frost$io$File$org$frostlanguage$frostc$ASTNode$R$frost$collections$ListView$LTorg$frostlanguage$frostc$ClassDecl$GT} };

typedef frost$collections$Iterator* (*$fn66)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn70)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn75)(frost$collections$Iterator*);
typedef org$frostlanguage$frostc$Position (*$fn87)(org$frostlanguage$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn169)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn173)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn178)(frost$collections$Iterator*);
typedef org$frostlanguage$frostc$Position (*$fn194)(org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn244)(org$frostlanguage$frostc$Scanner*, org$frostlanguage$frostc$Position, frost$core$String*, org$frostlanguage$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn249)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn253)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn258)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn396)(org$frostlanguage$frostc$Scanner*, org$frostlanguage$frostc$Position, frost$core$String*, org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn398)(frost$core$Immutable*, org$frostlanguage$frostc$Scanner*, org$frostlanguage$frostc$Position, frost$core$String*, org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn425)(org$frostlanguage$frostc$Scanner*, org$frostlanguage$frostc$Position, frost$core$String*, org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn427)(frost$core$Immutable*, org$frostlanguage$frostc$Scanner*, org$frostlanguage$frostc$Position, frost$core$String*, org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn454)(org$frostlanguage$frostc$Scanner*, org$frostlanguage$frostc$Position, frost$core$String*, org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn456)(frost$core$Immutable*, org$frostlanguage$frostc$Scanner*, org$frostlanguage$frostc$Position, frost$core$String*, org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn483)(org$frostlanguage$frostc$Scanner*, org$frostlanguage$frostc$Position, frost$core$String*, org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn485)(frost$core$Immutable*, org$frostlanguage$frostc$Scanner*, org$frostlanguage$frostc$Position, frost$core$String*, org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn512)(org$frostlanguage$frostc$Scanner*, org$frostlanguage$frostc$Position, frost$core$String*, org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn514)(frost$core$Immutable*, org$frostlanguage$frostc$Scanner*, org$frostlanguage$frostc$Position, frost$core$String*, org$frostlanguage$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn618)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn622)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn627)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn698)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn755)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn759)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn764)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn842)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn846)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn851)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn884)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn888)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn893)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn962)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn966)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn971)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1033)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1037)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1042)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1083)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1087)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1092)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1135)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1139)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1144)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1176)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1180)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1185)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1202)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1206)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1211)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1322)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1326)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1331)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1359)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1363)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1368)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1382)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1386)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1391)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1423)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1427)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1432)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1482)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1486)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1491)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1541)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1574)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1578)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1583)(frost$collections$Iterator*);
typedef org$frostlanguage$frostc$Position (*$fn1628)(org$frostlanguage$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn1642)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1646)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1651)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1692)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1723)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1987)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1991)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1996)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2009)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2025)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2064)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2068)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2073)(frost$collections$Iterator*);
typedef org$frostlanguage$frostc$Position (*$fn2118)(org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2136)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2142)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2146)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2151)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2182)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2229)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2233)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2238)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2272)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2299)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2303)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2308)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2320)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2335)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2348)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2362)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2372)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2406)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2415)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2426)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2459)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2468)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2481)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2485)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2490)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2498)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2544)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2548)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2553)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2565)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn2595)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2682)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2686)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2691)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2821)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2853)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2857)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2862)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn3051)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3066)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3102)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlanguage$frostc$Position (*$fn3156)(org$frostlanguage$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, 1894413516914498016, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x3a\x20", 18, -3453142829537486574, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6e\x76\x65\x72\x74\x54\x79\x70\x65\x28\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 145, 6124649195923415592, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 1798843608756893563, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static frost$core$String $s1452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6d\x70\x6c\x65\x78\x69\x74\x79\x28\x6e\x6f\x64\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 133, 1690399514755219737, NULL };
static frost$core$String $s1532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1567 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1623 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1678 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1700 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static frost$core$String $s1893 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1897 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1959 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static frost$core$String $s1961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1982 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2022 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2030 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2033 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2055 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static frost$core$String $s2195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s2215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s2283 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static frost$core$String $s2288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static frost$core$String $s2328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static frost$core$String $s2369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static frost$core$String $s2562 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static frost$core$String $s2572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2574 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, 4610821764298608519, NULL };
static frost$core$String $s2674 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s2676 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s2718 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2825 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static frost$core$String $s2839 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s2841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s2843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s2894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static frost$core$String $s2936 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s2979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3002 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static frost$core$String $s3146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s3153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static frost$core$String $s3161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x73\x63\x61\x6e\x28\x73\x6f\x75\x72\x63\x65\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x66\x69\x6c\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 193, -1612810831888208609, NULL };

void org$frostlanguage$frostc$Scanner$init$org$frostlanguage$frostc$Compiler(org$frostlanguage$frostc$Scanner* param0, org$frostlanguage$frostc$Compiler* param1) {

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
// unreffing REF($1:frost.core.Weak<org.frostlanguage.frostc.Compiler>)
return;

}
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Scanner* param0, org$frostlanguage$frostc$ASTNode* param1) {

org$frostlanguage$frostc$Position local0;
frost$core$String* local1 = NULL;
org$frostlanguage$frostc$Position local2;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlanguage$frostc$Position local5;
frost$core$String* local6 = NULL;
org$frostlanguage$frostc$FixedArray* local7 = NULL;
frost$collections$Array* local8 = NULL;
org$frostlanguage$frostc$ASTNode* local9 = NULL;
org$frostlanguage$frostc$IR$Value* local10 = NULL;
org$frostlanguage$frostc$Type* local11 = NULL;
org$frostlanguage$frostc$Position local12;
org$frostlanguage$frostc$parser$Token$Kind local13;
org$frostlanguage$frostc$FixedArray* local14 = NULL;
org$frostlanguage$frostc$ASTNode* local15 = NULL;
org$frostlanguage$frostc$Type$Kind local16;
frost$collections$Array* local17 = NULL;
org$frostlanguage$frostc$ASTNode* local18 = NULL;
org$frostlanguage$frostc$Type* local19 = NULL;
// line 25
frost$core$Int64* $tmp6 = &param1->$rawValue;
frost$core$Int64 $tmp7 = *$tmp6;
frost$core$Int64 $tmp8 = (frost$core$Int64) {45};
frost$core$Bit $tmp9 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp8);
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block2; else goto block3;
block2:;
org$frostlanguage$frostc$Position* $tmp11 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp12 = *$tmp11;
*(&local0) = $tmp12;
frost$core$String** $tmp13 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp14 = *$tmp13;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$String* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = $tmp14;
// line 27
org$frostlanguage$frostc$Type* $tmp16 = (org$frostlanguage$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlanguage$frostc$Type$class);
frost$core$String* $tmp17 = *(&local1);
frost$core$Int64 $tmp18 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Type$Kind $tmp19 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp18);
org$frostlanguage$frostc$Position $tmp20 = *(&local0);
org$frostlanguage$frostc$Type$init$frost$core$String$org$frostlanguage$frostc$Type$Kind$org$frostlanguage$frostc$Position($tmp16, $tmp17, $tmp19, $tmp20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// unreffing REF($20:org.frostlanguage.frostc.Type)
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
org$frostlanguage$frostc$Position* $tmp25 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp26 = *$tmp25;
*(&local2) = $tmp26;
org$frostlanguage$frostc$ASTNode** $tmp27 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp28 = *$tmp27;
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlanguage$frostc$ASTNode* $tmp29 = *(&local3);
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
// unreffing REF($54:frost.collections.Array<org.frostlanguage.frostc.Type>)
// line 31
frost$collections$Array* $tmp32 = *(&local4);
org$frostlanguage$frostc$ASTNode* $tmp33 = *(&local3);
org$frostlanguage$frostc$Type* $tmp34 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(param0, $tmp33);
frost$collections$Array$add$frost$collections$Array$T($tmp32, ((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing REF($71:org.frostlanguage.frostc.Type)
// line 32
org$frostlanguage$frostc$Type* $tmp35 = (org$frostlanguage$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlanguage$frostc$Type$class);
frost$collections$Array* $tmp36 = *(&local4);
frost$core$Int64 $tmp37 = (frost$core$Int64) {0};
frost$core$Object* $tmp38 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp36, $tmp37);
frost$core$String** $tmp39 = &((org$frostlanguage$frostc$Symbol*) ((org$frostlanguage$frostc$Type*) $tmp38))->name;
frost$core$String* $tmp40 = *$tmp39;
frost$core$String* $tmp41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp40, &$s42);
frost$core$Int64 $tmp43 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Type$Kind $tmp44 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp43);
org$frostlanguage$frostc$Position $tmp45 = *(&local2);
frost$collections$Array* $tmp46 = *(&local4);
frost$core$Bit $tmp47 = frost$core$Bit$init$builtin_bit(false);
org$frostlanguage$frostc$Type$init$frost$core$String$org$frostlanguage$frostc$Type$Kind$org$frostlanguage$frostc$Position$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$frost$core$Bit($tmp35, $tmp41, $tmp44, $tmp45, ((frost$collections$ListView*) $tmp46), $tmp47);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing REF($87:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
// unreffing REF($82:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($78:org.frostlanguage.frostc.Type)
frost$collections$Array* $tmp48 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// unreffing subtypes
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp49 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing base
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp35;
block5:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {21};
frost$core$Bit $tmp51 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block6; else goto block7;
block6:;
org$frostlanguage$frostc$Position* $tmp53 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp54 = *$tmp53;
*(&local5) = $tmp54;
frost$core$String** $tmp55 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp56 = *$tmp55;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$String* $tmp57 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local6) = $tmp56;
org$frostlanguage$frostc$FixedArray** $tmp58 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp59 = *$tmp58;
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
org$frostlanguage$frostc$FixedArray* $tmp60 = *(&local7);
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
// unreffing REF($143:frost.collections.Array<org.frostlanguage.frostc.Type>)
// line 36
org$frostlanguage$frostc$FixedArray* $tmp63 = *(&local7);
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
*(&local9) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp73 = $tmp67->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[1];
frost$core$Object* $tmp76 = $tmp74($tmp67);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp76)));
org$frostlanguage$frostc$ASTNode* $tmp77 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local9) = ((org$frostlanguage$frostc$ASTNode*) $tmp76);
// line 37
frost$collections$Array* $tmp78 = *(&local8);
org$frostlanguage$frostc$ASTNode* $tmp79 = *(&local9);
org$frostlanguage$frostc$Type* $tmp80 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(param0, $tmp79);
frost$collections$Array$add$frost$collections$Array$T($tmp78, ((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// unreffing REF($184:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp76);
// unreffing REF($172:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp81 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing arg
*(&local9) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block8;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($161:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 39
org$frostlanguage$frostc$Type* $tmp82 = (org$frostlanguage$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlanguage$frostc$Type$class);
frost$core$String* $tmp83 = *(&local6);
frost$core$Int64 $tmp84 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Type$Kind $tmp85 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp84);
$fn87 $tmp86 = ($fn87) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp88 = $tmp86(param1);
org$frostlanguage$frostc$Type$init$frost$core$String$org$frostlanguage$frostc$Type$Kind$org$frostlanguage$frostc$Position($tmp82, $tmp83, $tmp85, $tmp88);
frost$collections$Array* $tmp89 = *(&local8);
org$frostlanguage$frostc$Type* $tmp90 = org$frostlanguage$frostc$Type$generic$org$frostlanguage$frostc$Type$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$R$org$frostlanguage$frostc$Type($tmp82, ((frost$collections$ListView*) $tmp89));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($212:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($203:org.frostlanguage.frostc.Type)
frost$collections$Array* $tmp91 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing finalArgs
*(&local8) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp92 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing args
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
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
org$frostlanguage$frostc$Position* $tmp97 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp98 = *$tmp97;
org$frostlanguage$frostc$IR$Value** $tmp99 = (org$frostlanguage$frostc$IR$Value**) (param1->$data + 16);
org$frostlanguage$frostc$IR$Value* $tmp100 = *$tmp99;
*(&local10) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
org$frostlanguage$frostc$IR$Value* $tmp101 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local10) = $tmp100;
// line 42
org$frostlanguage$frostc$IR$Value* $tmp102 = *(&local10);
frost$core$Int64* $tmp103 = &$tmp102->$rawValue;
frost$core$Int64 $tmp104 = *$tmp103;
frost$core$Int64 $tmp105 = (frost$core$Int64) {14};
frost$core$Bit $tmp106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp104, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block14; else goto block13;
block14:;
org$frostlanguage$frostc$Type** $tmp108 = (org$frostlanguage$frostc$Type**) ($tmp102->$data + 0);
org$frostlanguage$frostc$Type* $tmp109 = *$tmp108;
*(&local11) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
org$frostlanguage$frostc$Type* $tmp110 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local11) = $tmp109;
// line 44
org$frostlanguage$frostc$Type* $tmp111 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
org$frostlanguage$frostc$Type* $tmp112 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing t
*(&local11) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp113 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing type
*(&local10) = ((org$frostlanguage$frostc$IR$Value*) NULL);
return $tmp111;
block13:;
// line 47
frost$core$Bit $tmp114 = frost$core$Bit$init$builtin_bit(false);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {47};
org$frostlanguage$frostc$IR$Value* $tmp117 = *(&local10);
frost$core$String* $tmp118 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s119, ((frost$core$Object*) $tmp117));
frost$core$String* $tmp120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp118, &$s121);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s122, $tmp116, $tmp120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($292:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing REF($291:frost.core.String)
abort(); // unreachable
block15:;
org$frostlanguage$frostc$IR$Value* $tmp123 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// unreffing type
*(&local10) = ((org$frostlanguage$frostc$IR$Value*) NULL);
goto block1;
block12:;
frost$core$Int64 $tmp124 = (frost$core$Int64) {30};
frost$core$Bit $tmp125 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp124);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block17; else goto block18;
block17:;
org$frostlanguage$frostc$Position* $tmp127 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp128 = *$tmp127;
*(&local12) = $tmp128;
org$frostlanguage$frostc$parser$Token$Kind* $tmp129 = (org$frostlanguage$frostc$parser$Token$Kind*) (param1->$data + 16);
org$frostlanguage$frostc$parser$Token$Kind $tmp130 = *$tmp129;
*(&local13) = $tmp130;
org$frostlanguage$frostc$FixedArray** $tmp131 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp132 = *$tmp131;
*(&local14) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
org$frostlanguage$frostc$FixedArray* $tmp133 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local14) = $tmp132;
org$frostlanguage$frostc$ASTNode** $tmp134 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 32);
org$frostlanguage$frostc$ASTNode* $tmp135 = *$tmp134;
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
org$frostlanguage$frostc$ASTNode* $tmp136 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local15) = $tmp135;
// line 50
// line 51
org$frostlanguage$frostc$parser$Token$Kind $tmp137 = *(&local13);
frost$core$Int64 $tmp138 = $tmp137.$rawValue;
frost$core$Int64 $tmp139 = (frost$core$Int64) {91};
frost$core$Bit $tmp140 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp138, $tmp139);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block20; else goto block21;
block20:;
// line 53
frost$core$Int64 $tmp142 = (frost$core$Int64) {15};
org$frostlanguage$frostc$Type$Kind $tmp143 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp142);
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
org$frostlanguage$frostc$Type$Kind $tmp148 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp147);
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
org$frostlanguage$frostc$Type$Kind $tmp153 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp152);
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
org$frostlanguage$frostc$Type$Kind $tmp158 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp157);
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
// unreffing REF($384:frost.collections.Array<org.frostlanguage.frostc.Type>)
// line 69
org$frostlanguage$frostc$FixedArray* $tmp166 = *(&local14);
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
*(&local18) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp176 = $tmp170->$class->itable;
while ($tmp176->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp176 = $tmp176->next;
}
$fn178 $tmp177 = $tmp176->methods[1];
frost$core$Object* $tmp179 = $tmp177($tmp170);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp179)));
org$frostlanguage$frostc$ASTNode* $tmp180 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local18) = ((org$frostlanguage$frostc$ASTNode*) $tmp179);
// line 70
frost$collections$Array* $tmp181 = *(&local17);
org$frostlanguage$frostc$ASTNode* $tmp182 = *(&local18);
org$frostlanguage$frostc$Type* $tmp183 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(param0, $tmp182);
frost$collections$Array$add$frost$collections$Array$T($tmp181, ((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// unreffing REF($425:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp179);
// unreffing REF($413:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp184 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing p
*(&local18) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block30;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// unreffing REF($402:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 72
*(&local19) = ((org$frostlanguage$frostc$Type*) NULL);
// line 73
org$frostlanguage$frostc$ASTNode* $tmp185 = *(&local15);
frost$core$Bit $tmp186 = frost$core$Bit$init$builtin_bit($tmp185 != NULL);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block33; else goto block35;
block33:;
// line 74
org$frostlanguage$frostc$ASTNode* $tmp188 = *(&local15);
org$frostlanguage$frostc$Type* $tmp189 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(param0, $tmp188);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
org$frostlanguage$frostc$Type* $tmp190 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local19) = $tmp189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
// unreffing REF($454:org.frostlanguage.frostc.Type)
goto block34;
block35:;
// line 1
// line 77
org$frostlanguage$frostc$Type* $tmp191 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
org$frostlanguage$frostc$Type* $tmp192 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local19) = $tmp191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// unreffing REF($467:org.frostlanguage.frostc.Type)
goto block34;
block34:;
// line 79
$fn194 $tmp193 = ($fn194) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp195 = $tmp193(param1);
org$frostlanguage$frostc$Type$Kind $tmp196 = *(&local16);
frost$collections$Array* $tmp197 = *(&local17);
org$frostlanguage$frostc$FixedArray* $tmp198 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp197);
org$frostlanguage$frostc$Type* $tmp199 = *(&local19);
frost$core$Int64 $tmp200 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Type* $tmp201 = org$frostlanguage$frostc$Type$methodType$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$org$frostlanguage$frostc$Type$frost$core$Int64$R$org$frostlanguage$frostc$Type($tmp195, $tmp196, ((frost$collections$ListView*) $tmp198), $tmp199, $tmp200);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing REF($489:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing REF($484:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
org$frostlanguage$frostc$Type* $tmp202 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// unreffing returnType
*(&local19) = ((org$frostlanguage$frostc$Type*) NULL);
frost$collections$Array* $tmp203 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// unreffing parameters
*(&local17) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp204 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing rawReturnType
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp205 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing rawParameters
*(&local14) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp201;
block18:;
// line 83
frost$core$Bit $tmp206 = frost$core$Bit$init$builtin_bit(false);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp208 = (frost$core$Int64) {83};
frost$core$String* $tmp209 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s210, ((frost$core$Object*) param1));
frost$core$String* $tmp211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp209, &$s212);
frost$core$Int64* $tmp213 = &param1->$rawValue;
frost$core$Int64 $tmp214 = *$tmp213;
frost$core$Int64$wrapper* $tmp215;
$tmp215 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp215->value = $tmp214;
frost$core$String* $tmp216 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp211, ((frost$core$Object*) $tmp215));
frost$core$String* $tmp217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp216, &$s218);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s219, $tmp208, $tmp217);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($531:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// unreffing REF($530:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing REF($529:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing REF($526:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// unreffing REF($525:frost.core.String)
abort(); // unreachable
block36:;
goto block1;
block1:;
frost$core$Bit $tmp220 = frost$core$Bit$init$builtin_bit(false);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp222 = (frost$core$Int64) {24};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s223, $tmp222, &$s224);
abort(); // unreachable
block38:;
abort(); // unreachable

}
frost$core$Int64 org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(org$frostlanguage$frostc$Scanner* param0, org$frostlanguage$frostc$Position param1, frost$core$Int64 param2, frost$core$Int64 param3) {

// line 89
frost$core$Int64 $tmp225 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(param2, param3);
frost$core$Int64 $tmp226 = (frost$core$Int64) {0};
int64_t $tmp227 = $tmp225.value;
int64_t $tmp228 = $tmp226.value;
bool $tmp229 = $tmp227 != $tmp228;
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block1; else goto block2;
block1:;
// line 90
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, &$s232);
goto block2;
block2:;
// line 92
frost$core$Int64 $tmp233 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64(param2, param3);
return $tmp233;

}
frost$core$Bit org$frostlanguage$frostc$Scanner$$anonymous1$org$frostlanguage$frostc$Scanner$org$frostlanguage$frostc$Position$frost$core$String$org$frostlanguage$frostc$ASTNode$Q$R$frost$core$Bit(org$frostlanguage$frostc$Scanner* param0, org$frostlanguage$frostc$Position param1, frost$core$String* param2, org$frostlanguage$frostc$ASTNode* param3) {

// line 99
frost$core$Bit $tmp234 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block1; else goto block2;
block1:;
// line 100
frost$core$Bit $tmp236 = frost$core$Bit$init$builtin_bit(true);
return $tmp236;
block2:;
// line 102
frost$core$String* $tmp237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s238, param2);
frost$core$String* $tmp239 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp237, &$s240);
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, $tmp239);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing REF($10:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing REF($9:frost.core.String)
// line 103
frost$core$Bit $tmp241 = frost$core$Bit$init$builtin_bit(false);
return $tmp241;

}
org$frostlanguage$frostc$Annotations* org$frostlanguage$frostc$Scanner$convertAnnotations$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$Annotations(org$frostlanguage$frostc$Scanner* param0, org$frostlanguage$frostc$FixedArray* param1) {

frost$core$Int64 local0;
frost$collections$Array* local1 = NULL;
frost$core$Method* local2 = NULL;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
org$frostlanguage$frostc$Position local4;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
org$frostlanguage$frostc$ASTNode* local7 = NULL;
org$frostlanguage$frostc$ASTNode* local8 = NULL;
frost$core$Bit local9;
frost$core$Bit local10;
frost$core$Bit local11;
frost$core$Bit local12;
frost$core$Bit local13;
// line 96
frost$core$Int64 $tmp242 = (frost$core$Int64) {0};
*(&local0) = $tmp242;
// line 97
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp243 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local1) = ((frost$collections$Array*) NULL);
// line 98
frost$core$Method* $tmp245 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp245, ((frost$core$Int8*) org$frostlanguage$frostc$Scanner$$anonymous1$org$frostlanguage$frostc$Scanner$org$frostlanguage$frostc$Position$frost$core$String$org$frostlanguage$frostc$ASTNode$Q$R$frost$core$Bit), ((frost$core$Immutable*) NULL));
// line 98
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Method* $tmp246 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local2) = $tmp245;
// line 105
ITable* $tmp247 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
frost$collections$Iterator* $tmp250 = $tmp248(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp251 = $tmp250->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
frost$core$Bit $tmp254 = $tmp252($tmp250);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp256 = $tmp250->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[1];
frost$core$Object* $tmp259 = $tmp257($tmp250);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp259)));
org$frostlanguage$frostc$ASTNode* $tmp260 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) $tmp259);
// line 106
org$frostlanguage$frostc$ASTNode* $tmp261 = *(&local3);
frost$core$Int64* $tmp262 = &$tmp261->$rawValue;
frost$core$Int64 $tmp263 = *$tmp262;
frost$core$Int64 $tmp264 = (frost$core$Int64) {0};
frost$core$Bit $tmp265 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp263, $tmp264);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block5; else goto block6;
block5:;
org$frostlanguage$frostc$Position* $tmp267 = (org$frostlanguage$frostc$Position*) ($tmp261->$data + 0);
org$frostlanguage$frostc$Position $tmp268 = *$tmp267;
*(&local4) = $tmp268;
frost$core$String** $tmp269 = (frost$core$String**) ($tmp261->$data + 16);
frost$core$String* $tmp270 = *$tmp269;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$String* $tmp271 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local5) = $tmp270;
frost$core$String** $tmp272 = (frost$core$String**) ($tmp261->$data + 24);
frost$core$String* $tmp273 = *$tmp272;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$String* $tmp274 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local6) = $tmp273;
org$frostlanguage$frostc$ASTNode** $tmp275 = (org$frostlanguage$frostc$ASTNode**) ($tmp261->$data + 32);
org$frostlanguage$frostc$ASTNode* $tmp276 = *$tmp275;
*(&local7) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
org$frostlanguage$frostc$ASTNode* $tmp277 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local7) = $tmp276;
// line 108
org$frostlanguage$frostc$ASTNode* $tmp278 = *(&local7);
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
org$frostlanguage$frostc$ASTNode* $tmp279 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local8) = $tmp278;
// line 109
frost$core$String* $tmp280 = *(&local5);
frost$core$Bit $tmp281 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s282);
bool $tmp283 = $tmp281.value;
if ($tmp283) goto block8; else goto block9;
block8:;
// line 111
org$frostlanguage$frostc$Position $tmp284 = *(&local4);
frost$core$Int64 $tmp285 = *(&local0);
frost$core$Int64 $tmp286 = (frost$core$Int64) {2};
frost$core$Int64 $tmp287 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp284, $tmp285, $tmp286);
*(&local0) = $tmp287;
goto block7;
block9:;
frost$core$Bit $tmp288 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s289);
bool $tmp290 = $tmp288.value;
if ($tmp290) goto block10; else goto block11;
block10:;
// line 114
org$frostlanguage$frostc$Position $tmp291 = *(&local4);
frost$core$Int64 $tmp292 = *(&local0);
frost$core$Int64 $tmp293 = (frost$core$Int64) {4};
frost$core$Int64 $tmp294 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp291, $tmp292, $tmp293);
*(&local0) = $tmp294;
goto block7;
block11:;
frost$core$Bit $tmp295 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s296);
bool $tmp297 = $tmp295.value;
if ($tmp297) goto block12; else goto block13;
block12:;
// line 117
org$frostlanguage$frostc$Position $tmp298 = *(&local4);
frost$core$Int64 $tmp299 = *(&local0);
frost$core$Int64 $tmp300 = (frost$core$Int64) {8};
frost$core$Int64 $tmp301 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp298, $tmp299, $tmp300);
*(&local0) = $tmp301;
goto block7;
block13:;
frost$core$Bit $tmp302 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s303);
bool $tmp304 = $tmp302.value;
if ($tmp304) goto block14; else goto block15;
block14:;
// line 120
org$frostlanguage$frostc$Position $tmp305 = *(&local4);
frost$core$Int64 $tmp306 = *(&local0);
frost$core$Int64 $tmp307 = (frost$core$Int64) {16};
frost$core$Int64 $tmp308 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp305, $tmp306, $tmp307);
*(&local0) = $tmp308;
goto block7;
block15:;
frost$core$Bit $tmp309 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s310);
bool $tmp311 = $tmp309.value;
if ($tmp311) goto block16; else goto block17;
block16:;
// line 123
org$frostlanguage$frostc$Position $tmp312 = *(&local4);
frost$core$Int64 $tmp313 = *(&local0);
frost$core$Int64 $tmp314 = (frost$core$Int64) {32};
frost$core$Int64 $tmp315 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp312, $tmp313, $tmp314);
*(&local0) = $tmp315;
goto block7;
block17:;
frost$core$Bit $tmp316 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s317);
bool $tmp318 = $tmp316.value;
if ($tmp318) goto block18; else goto block19;
block18:;
// line 126
org$frostlanguage$frostc$Position $tmp319 = *(&local4);
frost$core$Int64 $tmp320 = *(&local0);
frost$core$Int64 $tmp321 = (frost$core$Int64) {64};
frost$core$Int64 $tmp322 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp319, $tmp320, $tmp321);
*(&local0) = $tmp322;
goto block7;
block19:;
frost$core$Bit $tmp323 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s324);
bool $tmp325 = $tmp323.value;
if ($tmp325) goto block20; else goto block21;
block20:;
// line 129
org$frostlanguage$frostc$Position $tmp326 = *(&local4);
frost$core$Int64 $tmp327 = *(&local0);
frost$core$Int64 $tmp328 = (frost$core$Int64) {128};
frost$core$Int64 $tmp329 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp326, $tmp327, $tmp328);
*(&local0) = $tmp329;
goto block7;
block21:;
frost$core$Bit $tmp330 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s331);
bool $tmp332 = $tmp330.value;
if ($tmp332) goto block22; else goto block23;
block22:;
// line 132
org$frostlanguage$frostc$Position $tmp333 = *(&local4);
frost$core$Int64 $tmp334 = *(&local0);
frost$core$Int64 $tmp335 = (frost$core$Int64) {256};
frost$core$Int64 $tmp336 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp333, $tmp334, $tmp335);
*(&local0) = $tmp336;
goto block7;
block23:;
frost$core$Bit $tmp337 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s338);
bool $tmp339 = $tmp337.value;
if ($tmp339) goto block24; else goto block25;
block24:;
// line 135
org$frostlanguage$frostc$Position $tmp340 = *(&local4);
frost$core$Int64 $tmp341 = *(&local0);
frost$core$Int64 $tmp342 = (frost$core$Int64) {512};
frost$core$Int64 $tmp343 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp340, $tmp341, $tmp342);
*(&local0) = $tmp343;
goto block7;
block25:;
frost$core$Bit $tmp344 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s345);
bool $tmp346 = $tmp344.value;
if ($tmp346) goto block26; else goto block27;
block26:;
// line 138
org$frostlanguage$frostc$Position $tmp347 = *(&local4);
frost$core$Int64 $tmp348 = *(&local0);
frost$core$Int64 $tmp349 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp350 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp347, $tmp348, $tmp349);
*(&local0) = $tmp350;
goto block7;
block27:;
frost$core$Bit $tmp351 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s352);
bool $tmp353 = $tmp351.value;
if ($tmp353) goto block28; else goto block29;
block28:;
// line 141
org$frostlanguage$frostc$Position $tmp354 = *(&local4);
frost$core$Int64 $tmp355 = *(&local0);
frost$core$Int64 $tmp356 = (frost$core$Int64) {2048};
frost$core$Int64 $tmp357 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp354, $tmp355, $tmp356);
*(&local0) = $tmp357;
goto block7;
block29:;
frost$core$Bit $tmp358 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s359);
bool $tmp360 = $tmp358.value;
if ($tmp360) goto block30; else goto block31;
block30:;
// line 144
org$frostlanguage$frostc$Position $tmp361 = *(&local4);
frost$core$Int64 $tmp362 = *(&local0);
frost$core$Int64 $tmp363 = (frost$core$Int64) {4096};
frost$core$Int64 $tmp364 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp361, $tmp362, $tmp363);
*(&local0) = $tmp364;
goto block7;
block31:;
frost$core$Bit $tmp365 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s366);
bool $tmp367 = $tmp365.value;
if ($tmp367) goto block32; else goto block33;
block32:;
// line 147
org$frostlanguage$frostc$Position $tmp368 = *(&local4);
frost$core$Int64 $tmp369 = *(&local0);
frost$core$Int64 $tmp370 = (frost$core$Int64) {16384};
frost$core$Int64 $tmp371 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp368, $tmp369, $tmp370);
*(&local0) = $tmp371;
goto block7;
block33:;
frost$core$Bit $tmp372 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s373);
bool $tmp374 = $tmp372.value;
if ($tmp374) goto block34; else goto block35;
block34:;
// line 150
org$frostlanguage$frostc$Position $tmp375 = *(&local4);
frost$core$Int64 $tmp376 = *(&local0);
frost$core$Int64 $tmp377 = (frost$core$Int64) {32768};
frost$core$Int64 $tmp378 = org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp375, $tmp376, $tmp377);
*(&local0) = $tmp378;
goto block7;
block35:;
frost$core$Bit $tmp379 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s380);
bool $tmp381 = $tmp379.value;
if ($tmp381) goto block36; else goto block37;
block36:;
// line 153
frost$collections$Array* $tmp382 = *(&local1);
frost$core$Bit $tmp383 = frost$core$Bit$init$builtin_bit($tmp382 == NULL);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block38; else goto block39;
block38:;
// line 154
frost$collections$Array* $tmp385 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp385);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$collections$Array* $tmp386 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local1) = $tmp385;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
// unreffing REF($246:frost.collections.Array<org.frostlanguage.frostc.Annotations.Expression>)
goto block39;
block39:;
// line 156
frost$core$Method* $tmp387 = *(&local2);
org$frostlanguage$frostc$Position $tmp388 = *(&local4);
frost$core$String* $tmp389 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp390 = *(&local8);
frost$core$Int8** $tmp391 = &$tmp387->pointer;
frost$core$Int8* $tmp392 = *$tmp391;
frost$core$Immutable** $tmp393 = &$tmp387->target;
frost$core$Immutable* $tmp394 = *$tmp393;
bool $tmp395 = $tmp394 != ((frost$core$Immutable*) NULL);
if ($tmp395) goto block42; else goto block43;
block43:;
frost$core$Bit $tmp397 = (($fn396) $tmp392)(param0, $tmp388, $tmp389, $tmp390);
*(&local9) = $tmp397;
goto block44;
block42:;
frost$core$Bit $tmp399 = (($fn398) $tmp392)($tmp394, param0, $tmp388, $tmp389, $tmp390);
*(&local9) = $tmp399;
goto block44;
block44:;
frost$core$Bit $tmp400 = *(&local9);
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block40; else goto block41;
block40:;
// line 157
frost$collections$Array* $tmp402 = *(&local1);
org$frostlanguage$frostc$Annotations$Expression* $tmp403 = (org$frostlanguage$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp404 = (frost$core$Int64) {0};
frost$core$String* $tmp405 = *(&local6);
org$frostlanguage$frostc$ASTNode* $tmp406 = *(&local8);
org$frostlanguage$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlanguage$frostc$ASTNode($tmp403, $tmp404, $tmp405, $tmp406);
frost$collections$Array$add$frost$collections$Array$T($tmp402, ((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing REF($286:org.frostlanguage.frostc.Annotations.Expression)
// line 158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp407 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block41;
block41:;
goto block7;
block37:;
frost$core$Bit $tmp408 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s409);
bool $tmp410 = $tmp408.value;
if ($tmp410) goto block45; else goto block46;
block45:;
// line 162
frost$collections$Array* $tmp411 = *(&local1);
frost$core$Bit $tmp412 = frost$core$Bit$init$builtin_bit($tmp411 == NULL);
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block47; else goto block48;
block47:;
// line 163
frost$collections$Array* $tmp414 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp414);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$collections$Array* $tmp415 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local1) = $tmp414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
// unreffing REF($317:frost.collections.Array<org.frostlanguage.frostc.Annotations.Expression>)
goto block48;
block48:;
// line 165
frost$core$Method* $tmp416 = *(&local2);
org$frostlanguage$frostc$Position $tmp417 = *(&local4);
frost$core$String* $tmp418 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp419 = *(&local8);
frost$core$Int8** $tmp420 = &$tmp416->pointer;
frost$core$Int8* $tmp421 = *$tmp420;
frost$core$Immutable** $tmp422 = &$tmp416->target;
frost$core$Immutable* $tmp423 = *$tmp422;
bool $tmp424 = $tmp423 != ((frost$core$Immutable*) NULL);
if ($tmp424) goto block51; else goto block52;
block52:;
frost$core$Bit $tmp426 = (($fn425) $tmp421)(param0, $tmp417, $tmp418, $tmp419);
*(&local10) = $tmp426;
goto block53;
block51:;
frost$core$Bit $tmp428 = (($fn427) $tmp421)($tmp423, param0, $tmp417, $tmp418, $tmp419);
*(&local10) = $tmp428;
goto block53;
block53:;
frost$core$Bit $tmp429 = *(&local10);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block49; else goto block50;
block49:;
// line 166
frost$collections$Array* $tmp431 = *(&local1);
org$frostlanguage$frostc$Annotations$Expression* $tmp432 = (org$frostlanguage$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp433 = (frost$core$Int64) {1};
frost$core$String* $tmp434 = *(&local6);
org$frostlanguage$frostc$ASTNode* $tmp435 = *(&local8);
org$frostlanguage$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlanguage$frostc$ASTNode($tmp432, $tmp433, $tmp434, $tmp435);
frost$collections$Array$add$frost$collections$Array$T($tmp431, ((frost$core$Object*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// unreffing REF($357:org.frostlanguage.frostc.Annotations.Expression)
// line 167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp436 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block50;
block50:;
goto block7;
block46:;
frost$core$Bit $tmp437 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s438);
bool $tmp439 = $tmp437.value;
if ($tmp439) goto block54; else goto block55;
block54:;
// line 171
frost$collections$Array* $tmp440 = *(&local1);
frost$core$Bit $tmp441 = frost$core$Bit$init$builtin_bit($tmp440 == NULL);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block56; else goto block57;
block56:;
// line 172
frost$collections$Array* $tmp443 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp443);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$collections$Array* $tmp444 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local1) = $tmp443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// unreffing REF($388:frost.collections.Array<org.frostlanguage.frostc.Annotations.Expression>)
goto block57;
block57:;
// line 174
frost$core$Method* $tmp445 = *(&local2);
org$frostlanguage$frostc$Position $tmp446 = *(&local4);
frost$core$String* $tmp447 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp448 = *(&local8);
frost$core$Int8** $tmp449 = &$tmp445->pointer;
frost$core$Int8* $tmp450 = *$tmp449;
frost$core$Immutable** $tmp451 = &$tmp445->target;
frost$core$Immutable* $tmp452 = *$tmp451;
bool $tmp453 = $tmp452 != ((frost$core$Immutable*) NULL);
if ($tmp453) goto block60; else goto block61;
block61:;
frost$core$Bit $tmp455 = (($fn454) $tmp450)(param0, $tmp446, $tmp447, $tmp448);
*(&local11) = $tmp455;
goto block62;
block60:;
frost$core$Bit $tmp457 = (($fn456) $tmp450)($tmp452, param0, $tmp446, $tmp447, $tmp448);
*(&local11) = $tmp457;
goto block62;
block62:;
frost$core$Bit $tmp458 = *(&local11);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block58; else goto block59;
block58:;
// line 175
frost$collections$Array* $tmp460 = *(&local1);
org$frostlanguage$frostc$Annotations$Expression* $tmp461 = (org$frostlanguage$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp462 = (frost$core$Int64) {2};
frost$core$String* $tmp463 = *(&local6);
org$frostlanguage$frostc$ASTNode* $tmp464 = *(&local8);
org$frostlanguage$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlanguage$frostc$ASTNode($tmp461, $tmp462, $tmp463, $tmp464);
frost$collections$Array$add$frost$collections$Array$T($tmp460, ((frost$core$Object*) $tmp461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
// unreffing REF($428:org.frostlanguage.frostc.Annotations.Expression)
// line 176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp465 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block59;
block59:;
goto block7;
block55:;
frost$core$Bit $tmp466 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s467);
bool $tmp468 = $tmp466.value;
if ($tmp468) goto block63; else goto block64;
block63:;
// line 180
frost$collections$Array* $tmp469 = *(&local1);
frost$core$Bit $tmp470 = frost$core$Bit$init$builtin_bit($tmp469 == NULL);
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block65; else goto block66;
block65:;
// line 181
frost$collections$Array* $tmp472 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp472);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$collections$Array* $tmp473 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local1) = $tmp472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
// unreffing REF($459:frost.collections.Array<org.frostlanguage.frostc.Annotations.Expression>)
goto block66;
block66:;
// line 183
frost$core$Method* $tmp474 = *(&local2);
org$frostlanguage$frostc$Position $tmp475 = *(&local4);
frost$core$String* $tmp476 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp477 = *(&local8);
frost$core$Int8** $tmp478 = &$tmp474->pointer;
frost$core$Int8* $tmp479 = *$tmp478;
frost$core$Immutable** $tmp480 = &$tmp474->target;
frost$core$Immutable* $tmp481 = *$tmp480;
bool $tmp482 = $tmp481 != ((frost$core$Immutable*) NULL);
if ($tmp482) goto block69; else goto block70;
block70:;
frost$core$Bit $tmp484 = (($fn483) $tmp479)(param0, $tmp475, $tmp476, $tmp477);
*(&local12) = $tmp484;
goto block71;
block69:;
frost$core$Bit $tmp486 = (($fn485) $tmp479)($tmp481, param0, $tmp475, $tmp476, $tmp477);
*(&local12) = $tmp486;
goto block71;
block71:;
frost$core$Bit $tmp487 = *(&local12);
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block67; else goto block68;
block67:;
// line 184
frost$collections$Array* $tmp489 = *(&local1);
org$frostlanguage$frostc$Annotations$Expression* $tmp490 = (org$frostlanguage$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp491 = (frost$core$Int64) {3};
frost$core$String* $tmp492 = *(&local6);
org$frostlanguage$frostc$ASTNode* $tmp493 = *(&local8);
org$frostlanguage$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlanguage$frostc$ASTNode($tmp490, $tmp491, $tmp492, $tmp493);
frost$collections$Array$add$frost$collections$Array$T($tmp489, ((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
// unreffing REF($499:org.frostlanguage.frostc.Annotations.Expression)
// line 185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp494 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block68;
block68:;
goto block7;
block64:;
frost$core$Bit $tmp495 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp280, &$s496);
bool $tmp497 = $tmp495.value;
if ($tmp497) goto block72; else goto block73;
block72:;
// line 189
frost$collections$Array* $tmp498 = *(&local1);
frost$core$Bit $tmp499 = frost$core$Bit$init$builtin_bit($tmp498 == NULL);
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block74; else goto block75;
block74:;
// line 190
frost$collections$Array* $tmp501 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp501);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$collections$Array* $tmp502 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local1) = $tmp501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// unreffing REF($530:frost.collections.Array<org.frostlanguage.frostc.Annotations.Expression>)
goto block75;
block75:;
// line 192
frost$core$Method* $tmp503 = *(&local2);
org$frostlanguage$frostc$Position $tmp504 = *(&local4);
frost$core$String* $tmp505 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp506 = *(&local8);
frost$core$Int8** $tmp507 = &$tmp503->pointer;
frost$core$Int8* $tmp508 = *$tmp507;
frost$core$Immutable** $tmp509 = &$tmp503->target;
frost$core$Immutable* $tmp510 = *$tmp509;
bool $tmp511 = $tmp510 != ((frost$core$Immutable*) NULL);
if ($tmp511) goto block78; else goto block79;
block79:;
frost$core$Bit $tmp513 = (($fn512) $tmp508)(param0, $tmp504, $tmp505, $tmp506);
*(&local13) = $tmp513;
goto block80;
block78:;
frost$core$Bit $tmp515 = (($fn514) $tmp508)($tmp510, param0, $tmp504, $tmp505, $tmp506);
*(&local13) = $tmp515;
goto block80;
block80:;
frost$core$Bit $tmp516 = *(&local13);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block76; else goto block77;
block76:;
// line 193
frost$collections$Array* $tmp518 = *(&local1);
org$frostlanguage$frostc$Annotations$Expression* $tmp519 = (org$frostlanguage$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp520 = (frost$core$Int64) {4};
frost$core$String* $tmp521 = *(&local6);
org$frostlanguage$frostc$ASTNode* $tmp522 = *(&local8);
org$frostlanguage$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlanguage$frostc$ASTNode($tmp519, $tmp520, $tmp521, $tmp522);
frost$collections$Array$add$frost$collections$Array$T($tmp518, ((frost$core$Object*) $tmp519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// unreffing REF($570:org.frostlanguage.frostc.Annotations.Expression)
// line 194
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp523 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block77;
block77:;
goto block7;
block73:;
// line 198
org$frostlanguage$frostc$Position $tmp524 = *(&local4);
frost$core$String* $tmp525 = *(&local5);
frost$core$String* $tmp526 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s527, $tmp525);
frost$core$String* $tmp528 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp526, &$s529);
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp524, $tmp528);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// unreffing REF($595:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// unreffing REF($594:frost.core.String)
goto block7;
block7:;
// line 201
org$frostlanguage$frostc$ASTNode* $tmp530 = *(&local8);
frost$core$Bit $tmp531 = frost$core$Bit$init$builtin_bit($tmp530 != NULL);
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block81; else goto block82;
block81:;
// line 202
org$frostlanguage$frostc$Position $tmp533 = *(&local4);
frost$core$String* $tmp534 = *(&local5);
frost$core$String* $tmp535 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s536, $tmp534);
frost$core$String* $tmp537 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp535, &$s538);
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp533, $tmp537);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// unreffing REF($614:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
// unreffing REF($613:frost.core.String)
goto block82;
block82:;
org$frostlanguage$frostc$ASTNode* $tmp539 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
// unreffing expr
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp540 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
// unreffing rawExpr
*(&local7) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp541 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
// unreffing exprText
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp542 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
// unreffing text
*(&local5) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 206
frost$core$Bit $tmp543 = frost$core$Bit$init$builtin_bit(false);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block83; else goto block84;
block84:;
frost$core$Int64 $tmp545 = (frost$core$Int64) {206};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s546, $tmp545);
abort(); // unreachable
block83:;
goto block4;
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp259);
// unreffing REF($39:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp547 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// unreffing c
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// unreffing REF($28:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 210
org$frostlanguage$frostc$Annotations* $tmp548 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp549 = *(&local0);
frost$collections$Array* $tmp550 = *(&local1);
org$frostlanguage$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlanguage$frostc$Annotations$Expression$GT$Q($tmp548, $tmp549, ((frost$collections$ListView*) $tmp550));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// unreffing REF($665:org.frostlanguage.frostc.Annotations)
frost$core$Method* $tmp551 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
// unreffing checkExpression
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing REF($13:frost.core.Method)
frost$collections$Array* $tmp552 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
// unreffing expressions
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp548;

}
void org$frostlanguage$frostc$Scanner$scanFields$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$Scanner* param0, org$frostlanguage$frostc$ClassDecl* param1, org$frostlanguage$frostc$Position param2, org$frostlanguage$frostc$ASTNode* param3, org$frostlanguage$frostc$FixedArray* param4, org$frostlanguage$frostc$ASTNode* param5) {

frost$core$String* local0 = NULL;
org$frostlanguage$frostc$Position local1;
frost$core$String* local2 = NULL;
org$frostlanguage$frostc$Annotations* local3 = NULL;
org$frostlanguage$frostc$FieldDecl$Kind local4;
org$frostlanguage$frostc$Variable$Kind local5;
org$frostlanguage$frostc$FixedArray* local6 = NULL;
org$frostlanguage$frostc$ASTNode* local7 = NULL;
org$frostlanguage$frostc$Position local8;
org$frostlanguage$frostc$ASTNode* local9 = NULL;
org$frostlanguage$frostc$ASTNode* local10 = NULL;
frost$core$String* local11 = NULL;
org$frostlanguage$frostc$Type* local12 = NULL;
frost$core$String* local13 = NULL;
frost$core$String* local14 = NULL;
org$frostlanguage$frostc$ASTNode* local15 = NULL;
org$frostlanguage$frostc$ASTNode* local16 = NULL;
frost$core$Bit local17;
frost$core$Bit local18;
org$frostlanguage$frostc$FieldDecl* local19 = NULL;
// line 215
*(&local0) = ((frost$core$String*) NULL);
// line 217
frost$core$Bit $tmp553 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block1; else goto block3;
block1:;
// line 218
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp555 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 221
frost$core$Int64* $tmp556 = &param3->$rawValue;
frost$core$Int64 $tmp557 = *$tmp556;
frost$core$Int64 $tmp558 = (frost$core$Int64) {41};
frost$core$Bit $tmp559 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp557, $tmp558);
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block5; else goto block6;
block5:;
org$frostlanguage$frostc$Position* $tmp561 = (org$frostlanguage$frostc$Position*) (param3->$data + 0);
org$frostlanguage$frostc$Position $tmp562 = *$tmp561;
*(&local1) = $tmp562;
frost$core$String** $tmp563 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp564 = *$tmp563;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
frost$core$String* $tmp565 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local2) = $tmp564;
// line 223
frost$core$String* $tmp566 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$core$String* $tmp567 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local0) = $tmp566;
frost$core$String* $tmp568 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 226
frost$core$Bit $tmp569 = frost$core$Bit$init$builtin_bit(false);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp571 = (frost$core$Int64) {226};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s572, $tmp571);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 230
org$frostlanguage$frostc$Annotations* $tmp573 = org$frostlanguage$frostc$Scanner$convertAnnotations$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlanguage$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
org$frostlanguage$frostc$Annotations* $tmp574 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local3) = $tmp573;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// unreffing REF($61:org.frostlanguage.frostc.Annotations)
// line 231
// line 232
frost$core$Int64* $tmp575 = &param5->$rawValue;
frost$core$Int64 $tmp576 = *$tmp575;
frost$core$Int64 $tmp577 = (frost$core$Int64) {50};
frost$core$Bit $tmp578 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp576, $tmp577);
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block10; else goto block11;
block10:;
org$frostlanguage$frostc$Position* $tmp580 = (org$frostlanguage$frostc$Position*) (param5->$data + 0);
org$frostlanguage$frostc$Position $tmp581 = *$tmp580;
org$frostlanguage$frostc$Variable$Kind* $tmp582 = (org$frostlanguage$frostc$Variable$Kind*) (param5->$data + 16);
org$frostlanguage$frostc$Variable$Kind $tmp583 = *$tmp582;
*(&local5) = $tmp583;
org$frostlanguage$frostc$FixedArray** $tmp584 = (org$frostlanguage$frostc$FixedArray**) (param5->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp585 = *$tmp584;
*(&local6) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
org$frostlanguage$frostc$FixedArray* $tmp586 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
*(&local6) = $tmp585;
// line 234
org$frostlanguage$frostc$Variable$Kind $tmp587 = *(&local5);
frost$core$Int64 $tmp588 = $tmp587.$rawValue;
frost$core$Int64 $tmp589 = (frost$core$Int64) {0};
frost$core$Bit $tmp590 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp588, $tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block13; else goto block14;
block13:;
// line 236
frost$core$Int64 $tmp592 = (frost$core$Int64) {0};
org$frostlanguage$frostc$FieldDecl$Kind $tmp593 = org$frostlanguage$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp592);
*(&local4) = $tmp593;
goto block12;
block14:;
frost$core$Int64 $tmp594 = (frost$core$Int64) {1};
frost$core$Bit $tmp595 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp588, $tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block15; else goto block16;
block15:;
// line 239
frost$core$Int64 $tmp597 = (frost$core$Int64) {1};
org$frostlanguage$frostc$FieldDecl$Kind $tmp598 = org$frostlanguage$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp597);
*(&local4) = $tmp598;
goto block12;
block16:;
frost$core$Int64 $tmp599 = (frost$core$Int64) {2};
frost$core$Bit $tmp600 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp588, $tmp599);
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block17; else goto block18;
block17:;
// line 242
frost$core$Int64 $tmp602 = (frost$core$Int64) {2};
org$frostlanguage$frostc$FieldDecl$Kind $tmp603 = org$frostlanguage$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp602);
*(&local4) = $tmp603;
// line 243
org$frostlanguage$frostc$Annotations* $tmp604 = *(&local3);
frost$core$Int64* $tmp605 = &$tmp604->flags;
frost$core$Int64 $tmp606 = *$tmp605;
frost$core$Int64 $tmp607 = (frost$core$Int64) {16};
frost$core$Int64 $tmp608 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp606, $tmp607);
frost$core$Int64* $tmp609 = &$tmp604->flags;
*$tmp609 = $tmp608;
goto block12;
block18:;
frost$core$Int64 $tmp610 = (frost$core$Int64) {3};
frost$core$Bit $tmp611 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp588, $tmp610);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block19; else goto block12;
block19:;
// line 246
frost$core$Int64 $tmp613 = (frost$core$Int64) {3};
org$frostlanguage$frostc$FieldDecl$Kind $tmp614 = org$frostlanguage$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp613);
*(&local4) = $tmp614;
goto block12;
block12:;
// line 249
org$frostlanguage$frostc$FixedArray* $tmp615 = *(&local6);
ITable* $tmp616 = ((frost$collections$Iterable*) $tmp615)->$class->itable;
while ($tmp616->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp616 = $tmp616->next;
}
$fn618 $tmp617 = $tmp616->methods[0];
frost$collections$Iterator* $tmp619 = $tmp617(((frost$collections$Iterable*) $tmp615));
goto block20;
block20:;
ITable* $tmp620 = $tmp619->$class->itable;
while ($tmp620->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp620 = $tmp620->next;
}
$fn622 $tmp621 = $tmp620->methods[0];
frost$core$Bit $tmp623 = $tmp621($tmp619);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block22; else goto block21;
block21:;
*(&local7) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp625 = $tmp619->$class->itable;
while ($tmp625->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp625 = $tmp625->next;
}
$fn627 $tmp626 = $tmp625->methods[1];
frost$core$Object* $tmp628 = $tmp626($tmp619);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp628)));
org$frostlanguage$frostc$ASTNode* $tmp629 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local7) = ((org$frostlanguage$frostc$ASTNode*) $tmp628);
// line 250
org$frostlanguage$frostc$ASTNode* $tmp630 = *(&local7);
frost$core$Int64* $tmp631 = &$tmp630->$rawValue;
frost$core$Int64 $tmp632 = *$tmp631;
frost$core$Int64 $tmp633 = (frost$core$Int64) {14};
frost$core$Bit $tmp634 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp632, $tmp633);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block24; else goto block25;
block24:;
org$frostlanguage$frostc$Position* $tmp636 = (org$frostlanguage$frostc$Position*) ($tmp630->$data + 0);
org$frostlanguage$frostc$Position $tmp637 = *$tmp636;
*(&local8) = $tmp637;
org$frostlanguage$frostc$ASTNode** $tmp638 = (org$frostlanguage$frostc$ASTNode**) ($tmp630->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp639 = *$tmp638;
*(&local9) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
org$frostlanguage$frostc$ASTNode* $tmp640 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
*(&local9) = $tmp639;
org$frostlanguage$frostc$ASTNode** $tmp641 = (org$frostlanguage$frostc$ASTNode**) ($tmp630->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp642 = *$tmp641;
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
org$frostlanguage$frostc$ASTNode* $tmp643 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local10) = $tmp642;
// line 252
*(&local11) = ((frost$core$String*) NULL);
// line 253
*(&local12) = ((org$frostlanguage$frostc$Type*) NULL);
// line 254
org$frostlanguage$frostc$ASTNode* $tmp644 = *(&local9);
frost$core$Int64* $tmp645 = &$tmp644->$rawValue;
frost$core$Int64 $tmp646 = *$tmp645;
frost$core$Int64 $tmp647 = (frost$core$Int64) {22};
frost$core$Bit $tmp648 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp646, $tmp647);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block27; else goto block28;
block27:;
org$frostlanguage$frostc$Position* $tmp650 = (org$frostlanguage$frostc$Position*) ($tmp644->$data + 0);
org$frostlanguage$frostc$Position $tmp651 = *$tmp650;
frost$core$String** $tmp652 = (frost$core$String**) ($tmp644->$data + 16);
frost$core$String* $tmp653 = *$tmp652;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$String* $tmp654 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local13) = $tmp653;
// line 256
frost$core$String* $tmp655 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$String* $tmp656 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local11) = $tmp655;
// line 257
org$frostlanguage$frostc$Type* $tmp657 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
org$frostlanguage$frostc$Type* $tmp658 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local12) = $tmp657;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
// unreffing REF($226:org.frostlanguage.frostc.Type)
frost$core$String* $tmp659 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
// unreffing id
*(&local13) = ((frost$core$String*) NULL);
goto block26;
block28:;
frost$core$Int64 $tmp660 = (frost$core$Int64) {47};
frost$core$Bit $tmp661 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp646, $tmp660);
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block29; else goto block30;
block29:;
org$frostlanguage$frostc$Position* $tmp663 = (org$frostlanguage$frostc$Position*) ($tmp644->$data + 0);
org$frostlanguage$frostc$Position $tmp664 = *$tmp663;
frost$core$String** $tmp665 = (frost$core$String**) ($tmp644->$data + 16);
frost$core$String* $tmp666 = *$tmp665;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$String* $tmp667 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local14) = $tmp666;
org$frostlanguage$frostc$ASTNode** $tmp668 = (org$frostlanguage$frostc$ASTNode**) ($tmp644->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp669 = *$tmp668;
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
org$frostlanguage$frostc$ASTNode* $tmp670 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
*(&local15) = $tmp669;
// line 260
frost$core$String* $tmp671 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$String* $tmp672 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
*(&local11) = $tmp671;
// line 261
org$frostlanguage$frostc$ASTNode* $tmp673 = *(&local15);
org$frostlanguage$frostc$Type* $tmp674 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(param0, $tmp673);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
org$frostlanguage$frostc$Type* $tmp675 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local12) = $tmp674;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
// unreffing REF($277:org.frostlanguage.frostc.Type)
org$frostlanguage$frostc$ASTNode* $tmp676 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// unreffing idType
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp677 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// unreffing id
*(&local14) = ((frost$core$String*) NULL);
goto block26;
block30:;
// line 264
frost$core$Bit $tmp678 = frost$core$Bit$init$builtin_bit(false);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp680 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s681, $tmp680);
abort(); // unreachable
block31:;
goto block26;
block26:;
// line 267
*(&local16) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 268
org$frostlanguage$frostc$ASTNode* $tmp682 = *(&local10);
frost$core$Bit $tmp683 = frost$core$Bit$init$builtin_bit($tmp682 == NULL);
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block35; else goto block36;
block35:;
org$frostlanguage$frostc$Annotations* $tmp685 = *(&local3);
frost$core$Bit $tmp686 = org$frostlanguage$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp685);
*(&local18) = $tmp686;
goto block37;
block36:;
*(&local18) = $tmp683;
goto block37;
block37:;
frost$core$Bit $tmp687 = *(&local18);
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block38; else goto block39;
block38:;
org$frostlanguage$frostc$Type* $tmp689 = *(&local12);
org$frostlanguage$frostc$Type$Kind* $tmp690 = &$tmp689->typeKind;
org$frostlanguage$frostc$Type$Kind $tmp691 = *$tmp690;
org$frostlanguage$frostc$Type$Kind$wrapper* $tmp692;
$tmp692 = (org$frostlanguage$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$Type$Kind$wrapperclass);
$tmp692->value = $tmp691;
frost$core$Int64 $tmp693 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Type$Kind $tmp694 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp693);
org$frostlanguage$frostc$Type$Kind$wrapper* $tmp695;
$tmp695 = (org$frostlanguage$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$Type$Kind$wrapperclass);
$tmp695->value = $tmp694;
ITable* $tmp696 = ((frost$core$Equatable*) $tmp692)->$class->itable;
while ($tmp696->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp696 = $tmp696->next;
}
$fn698 $tmp697 = $tmp696->methods[0];
frost$core$Bit $tmp699 = $tmp697(((frost$core$Equatable*) $tmp692), ((frost$core$Equatable*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp695)));
// unreffing REF($330:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp692)));
// unreffing REF($326:frost.core.Equatable<org.frostlanguage.frostc.Type.Kind>)
*(&local17) = $tmp699;
goto block40;
block39:;
*(&local17) = $tmp687;
goto block40;
block40:;
frost$core$Bit $tmp700 = *(&local17);
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block33; else goto block41;
block33:;
// line 270
org$frostlanguage$frostc$ASTNode* $tmp702 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp703 = (frost$core$Int64) {31};
org$frostlanguage$frostc$Position $tmp704 = *(&local8);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position($tmp702, $tmp703, $tmp704);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
org$frostlanguage$frostc$ASTNode* $tmp705 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local16) = $tmp702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing REF($347:org.frostlanguage.frostc.ASTNode)
goto block34;
block41:;
// line 1
// line 273
org$frostlanguage$frostc$ASTNode* $tmp706 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
org$frostlanguage$frostc$ASTNode* $tmp707 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local16) = $tmp706;
goto block34;
block34:;
// line 275
org$frostlanguage$frostc$FieldDecl* $tmp708 = (org$frostlanguage$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlanguage$frostc$FieldDecl$class);
org$frostlanguage$frostc$Position $tmp709 = *(&local8);
frost$core$String* $tmp710 = *(&local0);
org$frostlanguage$frostc$Annotations* $tmp711 = *(&local3);
org$frostlanguage$frostc$FieldDecl$Kind $tmp712 = *(&local4);
frost$core$String* $tmp713 = *(&local11);
org$frostlanguage$frostc$Type* $tmp714 = *(&local12);
org$frostlanguage$frostc$ASTNode* $tmp715 = *(&local16);
org$frostlanguage$frostc$FieldDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$FieldDecl$Kind$frost$core$String$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$ASTNode$Q($tmp708, param1, $tmp709, $tmp710, $tmp711, $tmp712, $tmp713, $tmp714, $tmp715);
*(&local19) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
org$frostlanguage$frostc$FieldDecl* $tmp716 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local19) = $tmp708;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
// unreffing REF($373:org.frostlanguage.frostc.FieldDecl)
// line 277
org$frostlanguage$frostc$SymbolTable** $tmp717 = &param1->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp718 = *$tmp717;
org$frostlanguage$frostc$FieldDecl* $tmp719 = *(&local19);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp718, ((org$frostlanguage$frostc$Symbol*) $tmp719));
// line 278
frost$collections$Array** $tmp720 = &param1->fields;
frost$collections$Array* $tmp721 = *$tmp720;
org$frostlanguage$frostc$FieldDecl* $tmp722 = *(&local19);
frost$collections$Array$add$frost$collections$Array$T($tmp721, ((frost$core$Object*) $tmp722));
org$frostlanguage$frostc$FieldDecl* $tmp723 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing field
*(&local19) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp724 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
// unreffing value
*(&local16) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$Type* $tmp725 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// unreffing type
*(&local12) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$String* $tmp726 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp727 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// unreffing rawValue
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp728 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// unreffing target
*(&local9) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block23;
block25:;
// line 281
frost$core$Bit $tmp729 = frost$core$Bit$init$builtin_bit(false);
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp731 = (frost$core$Int64) {281};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s732, $tmp731);
abort(); // unreachable
block42:;
goto block23;
block23:;
frost$core$Frost$unref$frost$core$Object$Q($tmp628);
// unreffing REF($157:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp733 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
// unreffing decl
*(&local7) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
// unreffing REF($146:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlanguage$frostc$FixedArray* $tmp734 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// unreffing decls
*(&local6) = ((org$frostlanguage$frostc$FixedArray*) NULL);
goto block9;
block11:;
// line 287
frost$core$Bit $tmp735 = frost$core$Bit$init$builtin_bit(false);
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp737 = (frost$core$Int64) {287};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s738, $tmp737);
abort(); // unreachable
block44:;
goto block9;
block9:;
org$frostlanguage$frostc$Annotations* $tmp739 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
// unreffing annotations
*(&local3) = ((org$frostlanguage$frostc$Annotations*) NULL);
frost$core$String* $tmp740 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// unreffing doccomment
*(&local0) = ((frost$core$String*) NULL);
return;

}
frost$core$Int64 org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(org$frostlanguage$frostc$Scanner* param0, org$frostlanguage$frostc$ASTNode* param1) {

org$frostlanguage$frostc$FixedArray* local0 = NULL;
frost$core$Int64 local1;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
org$frostlanguage$frostc$ASTNode* local4 = NULL;
org$frostlanguage$frostc$ASTNode* local5 = NULL;
org$frostlanguage$frostc$FixedArray* local6 = NULL;
frost$core$Int64 local7;
org$frostlanguage$frostc$ASTNode* local8 = NULL;
org$frostlanguage$frostc$ASTNode* local9 = NULL;
org$frostlanguage$frostc$FixedArray* local10 = NULL;
frost$core$Int64 local11;
org$frostlanguage$frostc$ASTNode* local12 = NULL;
org$frostlanguage$frostc$ASTNode* local13 = NULL;
org$frostlanguage$frostc$ASTNode* local14 = NULL;
org$frostlanguage$frostc$FixedArray* local15 = NULL;
org$frostlanguage$frostc$ASTNode* local16 = NULL;
frost$core$Int64 local17;
org$frostlanguage$frostc$ASTNode* local18 = NULL;
org$frostlanguage$frostc$ASTNode* local19 = NULL;
org$frostlanguage$frostc$ASTNode* local20 = NULL;
org$frostlanguage$frostc$ASTNode* local21 = NULL;
org$frostlanguage$frostc$FixedArray* local22 = NULL;
frost$core$Int64 local23;
org$frostlanguage$frostc$ASTNode* local24 = NULL;
org$frostlanguage$frostc$ASTNode* local25 = NULL;
org$frostlanguage$frostc$FixedArray* local26 = NULL;
org$frostlanguage$frostc$ASTNode* local27 = NULL;
frost$core$Int64 local28;
org$frostlanguage$frostc$ASTNode* local29 = NULL;
org$frostlanguage$frostc$FixedArray* local30 = NULL;
frost$core$Int64 local31;
org$frostlanguage$frostc$ASTNode* local32 = NULL;
org$frostlanguage$frostc$ASTNode* local33 = NULL;
org$frostlanguage$frostc$FixedArray* local34 = NULL;
org$frostlanguage$frostc$FixedArray* local35 = NULL;
frost$core$Int64 local36;
org$frostlanguage$frostc$ASTNode* local37 = NULL;
org$frostlanguage$frostc$ASTNode* local38 = NULL;
org$frostlanguage$frostc$ASTNode* local39 = NULL;
org$frostlanguage$frostc$ASTNode* local40 = NULL;
org$frostlanguage$frostc$FixedArray* local41 = NULL;
frost$core$Int64 local42;
org$frostlanguage$frostc$ASTNode* local43 = NULL;
org$frostlanguage$frostc$FixedArray* local44 = NULL;
org$frostlanguage$frostc$FixedArray* local45 = NULL;
frost$core$Int64 local46;
org$frostlanguage$frostc$ASTNode* local47 = NULL;
org$frostlanguage$frostc$ASTNode* local48 = NULL;
org$frostlanguage$frostc$ASTNode* local49 = NULL;
org$frostlanguage$frostc$FixedArray* local50 = NULL;
frost$core$Int64 local51;
org$frostlanguage$frostc$ASTNode* local52 = NULL;
// line 294
frost$core$Int64* $tmp741 = &param1->$rawValue;
frost$core$Int64 $tmp742 = *$tmp741;
frost$core$Int64 $tmp743 = (frost$core$Int64) {1};
frost$core$Bit $tmp744 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp743);
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block2; else goto block3;
block2:;
org$frostlanguage$frostc$Position* $tmp746 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp747 = *$tmp746;
org$frostlanguage$frostc$FixedArray** $tmp748 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 16);
org$frostlanguage$frostc$FixedArray* $tmp749 = *$tmp748;
*(&local0) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
org$frostlanguage$frostc$FixedArray* $tmp750 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local0) = $tmp749;
// line 296
frost$core$Int64 $tmp751 = (frost$core$Int64) {0};
*(&local1) = $tmp751;
// line 297
org$frostlanguage$frostc$FixedArray* $tmp752 = *(&local0);
ITable* $tmp753 = ((frost$collections$Iterable*) $tmp752)->$class->itable;
while ($tmp753->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp753 = $tmp753->next;
}
$fn755 $tmp754 = $tmp753->methods[0];
frost$collections$Iterator* $tmp756 = $tmp754(((frost$collections$Iterable*) $tmp752));
goto block4;
block4:;
ITable* $tmp757 = $tmp756->$class->itable;
while ($tmp757->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp757 = $tmp757->next;
}
$fn759 $tmp758 = $tmp757->methods[0];
frost$core$Bit $tmp760 = $tmp758($tmp756);
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block6; else goto block5;
block5:;
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp762 = $tmp756->$class->itable;
while ($tmp762->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp762 = $tmp762->next;
}
$fn764 $tmp763 = $tmp762->methods[1];
frost$core$Object* $tmp765 = $tmp763($tmp756);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp765)));
org$frostlanguage$frostc$ASTNode* $tmp766 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) $tmp765);
// line 298
frost$core$Int64 $tmp767 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp768 = *(&local2);
frost$core$Int64 $tmp769 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp768);
int64_t $tmp770 = $tmp767.value;
int64_t $tmp771 = $tmp769.value;
int64_t $tmp772 = $tmp770 + $tmp771;
frost$core$Int64 $tmp773 = (frost$core$Int64) {$tmp772};
*(&local1) = $tmp773;
frost$core$Frost$unref$frost$core$Object$Q($tmp765);
// unreffing REF($37:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp774 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// unreffing e
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
// unreffing REF($26:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 300
frost$core$Int64 $tmp775 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp776 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
// unreffing elements
*(&local0) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp775;
block3:;
frost$core$Int64 $tmp777 = (frost$core$Int64) {2};
frost$core$Bit $tmp778 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp777);
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block7; else goto block8;
block7:;
org$frostlanguage$frostc$Position* $tmp780 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp781 = *$tmp780;
org$frostlanguage$frostc$ASTNode** $tmp782 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp783 = *$tmp782;
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
org$frostlanguage$frostc$ASTNode* $tmp784 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local3) = $tmp783;
org$frostlanguage$frostc$ASTNode** $tmp785 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp786 = *$tmp785;
// line 303
org$frostlanguage$frostc$ASTNode* $tmp787 = *(&local3);
frost$core$Int64 $tmp788 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp787);
org$frostlanguage$frostc$ASTNode* $tmp789 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
// unreffing test
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp788;
block8:;
frost$core$Int64 $tmp790 = (frost$core$Int64) {3};
frost$core$Bit $tmp791 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp790);
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block9; else goto block10;
block9:;
// line 306
frost$core$Int64 $tmp793 = (frost$core$Int64) {0};
return $tmp793;
block10:;
frost$core$Int64 $tmp794 = (frost$core$Int64) {4};
frost$core$Bit $tmp795 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block11; else goto block12;
block11:;
// line 309
frost$core$Int64 $tmp797 = (frost$core$Int64) {0};
return $tmp797;
block12:;
frost$core$Int64 $tmp798 = (frost$core$Int64) {5};
frost$core$Bit $tmp799 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp798);
bool $tmp800 = $tmp799.value;
if ($tmp800) goto block13; else goto block14;
block13:;
org$frostlanguage$frostc$Position* $tmp801 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp802 = *$tmp801;
org$frostlanguage$frostc$ASTNode** $tmp803 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp804 = *$tmp803;
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
org$frostlanguage$frostc$ASTNode* $tmp805 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
*(&local4) = $tmp804;
org$frostlanguage$frostc$parser$Token$Kind* $tmp806 = (org$frostlanguage$frostc$parser$Token$Kind*) (param1->$data + 24);
org$frostlanguage$frostc$parser$Token$Kind $tmp807 = *$tmp806;
org$frostlanguage$frostc$ASTNode** $tmp808 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 32);
org$frostlanguage$frostc$ASTNode* $tmp809 = *$tmp808;
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
org$frostlanguage$frostc$ASTNode* $tmp810 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local5) = $tmp809;
// line 312
frost$core$Int64 $tmp811 = (frost$core$Int64) {1};
org$frostlanguage$frostc$ASTNode* $tmp812 = *(&local4);
frost$core$Int64 $tmp813 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp812);
int64_t $tmp814 = $tmp811.value;
int64_t $tmp815 = $tmp813.value;
int64_t $tmp816 = $tmp814 + $tmp815;
frost$core$Int64 $tmp817 = (frost$core$Int64) {$tmp816};
org$frostlanguage$frostc$ASTNode* $tmp818 = *(&local5);
frost$core$Int64 $tmp819 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp818);
int64_t $tmp820 = $tmp817.value;
int64_t $tmp821 = $tmp819.value;
int64_t $tmp822 = $tmp820 + $tmp821;
frost$core$Int64 $tmp823 = (frost$core$Int64) {$tmp822};
org$frostlanguage$frostc$ASTNode* $tmp824 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
// unreffing right
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp825 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
// unreffing left
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp823;
block14:;
frost$core$Int64 $tmp826 = (frost$core$Int64) {6};
frost$core$Bit $tmp827 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp826);
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block15; else goto block16;
block15:;
// line 315
frost$core$Int64 $tmp829 = (frost$core$Int64) {1};
return $tmp829;
block16:;
frost$core$Int64 $tmp830 = (frost$core$Int64) {7};
frost$core$Bit $tmp831 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp830);
bool $tmp832 = $tmp831.value;
if ($tmp832) goto block17; else goto block18;
block17:;
org$frostlanguage$frostc$Position* $tmp833 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp834 = *$tmp833;
org$frostlanguage$frostc$FixedArray** $tmp835 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 16);
org$frostlanguage$frostc$FixedArray* $tmp836 = *$tmp835;
*(&local6) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
org$frostlanguage$frostc$FixedArray* $tmp837 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local6) = $tmp836;
// line 318
frost$core$Int64 $tmp838 = (frost$core$Int64) {0};
*(&local7) = $tmp838;
// line 319
org$frostlanguage$frostc$FixedArray* $tmp839 = *(&local6);
ITable* $tmp840 = ((frost$collections$Iterable*) $tmp839)->$class->itable;
while ($tmp840->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp840 = $tmp840->next;
}
$fn842 $tmp841 = $tmp840->methods[0];
frost$collections$Iterator* $tmp843 = $tmp841(((frost$collections$Iterable*) $tmp839));
goto block19;
block19:;
ITable* $tmp844 = $tmp843->$class->itable;
while ($tmp844->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp844 = $tmp844->next;
}
$fn846 $tmp845 = $tmp844->methods[0];
frost$core$Bit $tmp847 = $tmp845($tmp843);
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block21; else goto block20;
block20:;
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp849 = $tmp843->$class->itable;
while ($tmp849->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp849 = $tmp849->next;
}
$fn851 $tmp850 = $tmp849->methods[1];
frost$core$Object* $tmp852 = $tmp850($tmp843);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp852)));
org$frostlanguage$frostc$ASTNode* $tmp853 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) $tmp852);
// line 320
frost$core$Int64 $tmp854 = *(&local7);
org$frostlanguage$frostc$ASTNode* $tmp855 = *(&local8);
frost$core$Int64 $tmp856 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp855);
int64_t $tmp857 = $tmp854.value;
int64_t $tmp858 = $tmp856.value;
int64_t $tmp859 = $tmp857 + $tmp858;
frost$core$Int64 $tmp860 = (frost$core$Int64) {$tmp859};
*(&local7) = $tmp860;
frost$core$Frost$unref$frost$core$Object$Q($tmp852);
// unreffing REF($206:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp861 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// unreffing s
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// unreffing REF($195:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 322
frost$core$Int64 $tmp862 = *(&local7);
org$frostlanguage$frostc$FixedArray* $tmp863 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
// unreffing statements
*(&local6) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp862;
block18:;
frost$core$Int64 $tmp864 = (frost$core$Int64) {8};
frost$core$Bit $tmp865 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp864);
bool $tmp866 = $tmp865.value;
if ($tmp866) goto block22; else goto block23;
block22:;
// line 325
frost$core$Int64 $tmp867 = (frost$core$Int64) {1};
return $tmp867;
block23:;
frost$core$Int64 $tmp868 = (frost$core$Int64) {9};
frost$core$Bit $tmp869 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp868);
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block24; else goto block25;
block24:;
org$frostlanguage$frostc$Position* $tmp871 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp872 = *$tmp871;
org$frostlanguage$frostc$ASTNode** $tmp873 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp874 = *$tmp873;
*(&local9) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
org$frostlanguage$frostc$ASTNode* $tmp875 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
*(&local9) = $tmp874;
org$frostlanguage$frostc$FixedArray** $tmp876 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp877 = *$tmp876;
*(&local10) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
org$frostlanguage$frostc$FixedArray* $tmp878 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local10) = $tmp877;
// line 328
org$frostlanguage$frostc$ASTNode* $tmp879 = *(&local9);
frost$core$Int64 $tmp880 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp879);
*(&local11) = $tmp880;
// line 329
org$frostlanguage$frostc$FixedArray* $tmp881 = *(&local10);
ITable* $tmp882 = ((frost$collections$Iterable*) $tmp881)->$class->itable;
while ($tmp882->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp882 = $tmp882->next;
}
$fn884 $tmp883 = $tmp882->methods[0];
frost$collections$Iterator* $tmp885 = $tmp883(((frost$collections$Iterable*) $tmp881));
goto block26;
block26:;
ITable* $tmp886 = $tmp885->$class->itable;
while ($tmp886->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp886 = $tmp886->next;
}
$fn888 $tmp887 = $tmp886->methods[0];
frost$core$Bit $tmp889 = $tmp887($tmp885);
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block28; else goto block27;
block27:;
*(&local12) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp891 = $tmp885->$class->itable;
while ($tmp891->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp891 = $tmp891->next;
}
$fn893 $tmp892 = $tmp891->methods[1];
frost$core$Object* $tmp894 = $tmp892($tmp885);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp894)));
org$frostlanguage$frostc$ASTNode* $tmp895 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local12) = ((org$frostlanguage$frostc$ASTNode*) $tmp894);
// line 330
frost$core$Int64 $tmp896 = *(&local11);
org$frostlanguage$frostc$ASTNode* $tmp897 = *(&local12);
frost$core$Int64 $tmp898 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp897);
int64_t $tmp899 = $tmp896.value;
int64_t $tmp900 = $tmp898.value;
int64_t $tmp901 = $tmp899 + $tmp900;
frost$core$Int64 $tmp902 = (frost$core$Int64) {$tmp901};
*(&local11) = $tmp902;
frost$core$Frost$unref$frost$core$Object$Q($tmp894);
// unreffing REF($294:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp903 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
// unreffing a
*(&local12) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
// unreffing REF($283:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 332
frost$core$Int64 $tmp904 = *(&local11);
org$frostlanguage$frostc$FixedArray* $tmp905 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// unreffing args
*(&local10) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp906 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
// unreffing target
*(&local9) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp904;
block25:;
frost$core$Int64 $tmp907 = (frost$core$Int64) {11};
frost$core$Bit $tmp908 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp907);
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block29; else goto block30;
block29:;
org$frostlanguage$frostc$Position* $tmp910 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp911 = *$tmp910;
org$frostlanguage$frostc$ASTNode** $tmp912 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp913 = *$tmp912;
*(&local13) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
org$frostlanguage$frostc$ASTNode* $tmp914 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local13) = $tmp913;
org$frostlanguage$frostc$ChoiceCase** $tmp915 = (org$frostlanguage$frostc$ChoiceCase**) (param1->$data + 24);
org$frostlanguage$frostc$ChoiceCase* $tmp916 = *$tmp915;
frost$core$Int64* $tmp917 = (frost$core$Int64*) (param1->$data + 32);
frost$core$Int64 $tmp918 = *$tmp917;
// line 335
org$frostlanguage$frostc$ASTNode* $tmp919 = *(&local13);
frost$core$Int64 $tmp920 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp919);
org$frostlanguage$frostc$ASTNode* $tmp921 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
// unreffing base
*(&local13) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp920;
block30:;
frost$core$Int64 $tmp922 = (frost$core$Int64) {13};
frost$core$Bit $tmp923 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp922);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block31; else goto block32;
block31:;
// line 338
frost$core$Int64 $tmp925 = (frost$core$Int64) {1};
return $tmp925;
block32:;
frost$core$Int64 $tmp926 = (frost$core$Int64) {14};
frost$core$Bit $tmp927 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp926);
bool $tmp928 = $tmp927.value;
if ($tmp928) goto block33; else goto block34;
block33:;
org$frostlanguage$frostc$Position* $tmp929 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp930 = *$tmp929;
org$frostlanguage$frostc$ASTNode** $tmp931 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp932 = *$tmp931;
org$frostlanguage$frostc$ASTNode** $tmp933 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp934 = *$tmp933;
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
org$frostlanguage$frostc$ASTNode* $tmp935 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local14) = $tmp934;
// line 341
org$frostlanguage$frostc$ASTNode* $tmp936 = *(&local14);
frost$core$Bit $tmp937 = frost$core$Bit$init$builtin_bit($tmp936 == NULL);
bool $tmp938 = $tmp937.value;
if ($tmp938) goto block35; else goto block36;
block35:;
// line 342
frost$core$Int64 $tmp939 = (frost$core$Int64) {0};
org$frostlanguage$frostc$ASTNode* $tmp940 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// unreffing value
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp939;
block36:;
// line 344
org$frostlanguage$frostc$ASTNode* $tmp941 = *(&local14);
frost$core$Int64 $tmp942 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp941);
org$frostlanguage$frostc$ASTNode* $tmp943 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
// unreffing value
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp942;
block34:;
frost$core$Int64 $tmp944 = (frost$core$Int64) {15};
frost$core$Bit $tmp945 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp944);
bool $tmp946 = $tmp945.value;
if ($tmp946) goto block37; else goto block38;
block37:;
org$frostlanguage$frostc$Position* $tmp947 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp948 = *$tmp947;
frost$core$String** $tmp949 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp950 = *$tmp949;
org$frostlanguage$frostc$FixedArray** $tmp951 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp952 = *$tmp951;
*(&local15) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
org$frostlanguage$frostc$FixedArray* $tmp953 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
*(&local15) = $tmp952;
org$frostlanguage$frostc$ASTNode** $tmp954 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 32);
org$frostlanguage$frostc$ASTNode* $tmp955 = *$tmp954;
*(&local16) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
org$frostlanguage$frostc$ASTNode* $tmp956 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local16) = $tmp955;
// line 347
org$frostlanguage$frostc$ASTNode* $tmp957 = *(&local16);
frost$core$Int64 $tmp958 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp957);
*(&local17) = $tmp958;
// line 348
org$frostlanguage$frostc$FixedArray* $tmp959 = *(&local15);
ITable* $tmp960 = ((frost$collections$Iterable*) $tmp959)->$class->itable;
while ($tmp960->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp960 = $tmp960->next;
}
$fn962 $tmp961 = $tmp960->methods[0];
frost$collections$Iterator* $tmp963 = $tmp961(((frost$collections$Iterable*) $tmp959));
goto block39;
block39:;
ITable* $tmp964 = $tmp963->$class->itable;
while ($tmp964->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp964 = $tmp964->next;
}
$fn966 $tmp965 = $tmp964->methods[0];
frost$core$Bit $tmp967 = $tmp965($tmp963);
bool $tmp968 = $tmp967.value;
if ($tmp968) goto block41; else goto block40;
block40:;
*(&local18) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp969 = $tmp963->$class->itable;
while ($tmp969->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp969 = $tmp969->next;
}
$fn971 $tmp970 = $tmp969->methods[1];
frost$core$Object* $tmp972 = $tmp970($tmp963);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp972)));
org$frostlanguage$frostc$ASTNode* $tmp973 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
*(&local18) = ((org$frostlanguage$frostc$ASTNode*) $tmp972);
// line 349
frost$core$Int64 $tmp974 = *(&local17);
org$frostlanguage$frostc$ASTNode* $tmp975 = *(&local18);
frost$core$Int64 $tmp976 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp975);
int64_t $tmp977 = $tmp974.value;
int64_t $tmp978 = $tmp976.value;
int64_t $tmp979 = $tmp977 + $tmp978;
frost$core$Int64 $tmp980 = (frost$core$Int64) {$tmp979};
*(&local17) = $tmp980;
frost$core$Frost$unref$frost$core$Object$Q($tmp972);
// unreffing REF($458:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp981 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
// unreffing s
*(&local18) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
// unreffing REF($447:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 351
frost$core$Int64 $tmp982 = *(&local17);
org$frostlanguage$frostc$ASTNode* $tmp983 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// unreffing test
*(&local16) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp984 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
// unreffing statements
*(&local15) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp982;
block38:;
frost$core$Int64 $tmp985 = (frost$core$Int64) {16};
frost$core$Bit $tmp986 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp985);
bool $tmp987 = $tmp986.value;
if ($tmp987) goto block42; else goto block43;
block42:;
org$frostlanguage$frostc$Position* $tmp988 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp989 = *$tmp988;
org$frostlanguage$frostc$ASTNode** $tmp990 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp991 = *$tmp990;
*(&local19) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
org$frostlanguage$frostc$ASTNode* $tmp992 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
*(&local19) = $tmp991;
frost$core$String** $tmp993 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp994 = *$tmp993;
// line 354
org$frostlanguage$frostc$ASTNode* $tmp995 = *(&local19);
frost$core$Int64 $tmp996 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp995);
org$frostlanguage$frostc$ASTNode* $tmp997 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
// unreffing base
*(&local19) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp996;
block43:;
frost$core$Int64 $tmp998 = (frost$core$Int64) {17};
frost$core$Bit $tmp999 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp998);
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block44; else goto block45;
block44:;
org$frostlanguage$frostc$Position* $tmp1001 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp1002 = *$tmp1001;
org$frostlanguage$frostc$ASTNode** $tmp1003 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp1004 = *$tmp1003;
*(&local20) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
org$frostlanguage$frostc$ASTNode* $tmp1005 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
*(&local20) = $tmp1004;
frost$core$String** $tmp1006 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1007 = *$tmp1006;
org$frostlanguage$frostc$FixedArray** $tmp1008 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 32);
org$frostlanguage$frostc$FixedArray* $tmp1009 = *$tmp1008;
// line 357
org$frostlanguage$frostc$ASTNode* $tmp1010 = *(&local20);
frost$core$Int64 $tmp1011 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1010);
org$frostlanguage$frostc$ASTNode* $tmp1012 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
// unreffing base
*(&local20) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1011;
block45:;
frost$core$Int64 $tmp1013 = (frost$core$Int64) {20};
frost$core$Bit $tmp1014 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1013);
bool $tmp1015 = $tmp1014.value;
if ($tmp1015) goto block46; else goto block47;
block46:;
org$frostlanguage$frostc$Position* $tmp1016 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp1017 = *$tmp1016;
frost$core$String** $tmp1018 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1019 = *$tmp1018;
org$frostlanguage$frostc$ASTNode** $tmp1020 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp1021 = *$tmp1020;
org$frostlanguage$frostc$ASTNode** $tmp1022 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 32);
org$frostlanguage$frostc$ASTNode* $tmp1023 = *$tmp1022;
*(&local21) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
org$frostlanguage$frostc$ASTNode* $tmp1024 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local21) = $tmp1023;
org$frostlanguage$frostc$FixedArray** $tmp1025 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 40);
org$frostlanguage$frostc$FixedArray* $tmp1026 = *$tmp1025;
*(&local22) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
org$frostlanguage$frostc$FixedArray* $tmp1027 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
*(&local22) = $tmp1026;
// line 360
org$frostlanguage$frostc$ASTNode* $tmp1028 = *(&local21);
frost$core$Int64 $tmp1029 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1028);
*(&local23) = $tmp1029;
// line 361
org$frostlanguage$frostc$FixedArray* $tmp1030 = *(&local22);
ITable* $tmp1031 = ((frost$collections$Iterable*) $tmp1030)->$class->itable;
while ($tmp1031->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1031 = $tmp1031->next;
}
$fn1033 $tmp1032 = $tmp1031->methods[0];
frost$collections$Iterator* $tmp1034 = $tmp1032(((frost$collections$Iterable*) $tmp1030));
goto block48;
block48:;
ITable* $tmp1035 = $tmp1034->$class->itable;
while ($tmp1035->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1035 = $tmp1035->next;
}
$fn1037 $tmp1036 = $tmp1035->methods[0];
frost$core$Bit $tmp1038 = $tmp1036($tmp1034);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block50; else goto block49;
block49:;
*(&local24) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp1040 = $tmp1034->$class->itable;
while ($tmp1040->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1040 = $tmp1040->next;
}
$fn1042 $tmp1041 = $tmp1040->methods[1];
frost$core$Object* $tmp1043 = $tmp1041($tmp1034);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp1043)));
org$frostlanguage$frostc$ASTNode* $tmp1044 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local24) = ((org$frostlanguage$frostc$ASTNode*) $tmp1043);
// line 362
frost$core$Int64 $tmp1045 = *(&local23);
org$frostlanguage$frostc$ASTNode* $tmp1046 = *(&local24);
frost$core$Int64 $tmp1047 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1046);
int64_t $tmp1048 = $tmp1045.value;
int64_t $tmp1049 = $tmp1047.value;
int64_t $tmp1050 = $tmp1048 + $tmp1049;
frost$core$Int64 $tmp1051 = (frost$core$Int64) {$tmp1050};
*(&local23) = $tmp1051;
frost$core$Frost$unref$frost$core$Object$Q($tmp1043);
// unreffing REF($602:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp1052 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
// unreffing s
*(&local24) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block48;
block50:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
// unreffing REF($591:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 364
frost$core$Int64 $tmp1053 = *(&local23);
org$frostlanguage$frostc$FixedArray* $tmp1054 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
// unreffing statements
*(&local22) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1055 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
// unreffing list
*(&local21) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1053;
block47:;
frost$core$Int64 $tmp1056 = (frost$core$Int64) {21};
frost$core$Bit $tmp1057 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1056);
bool $tmp1058 = $tmp1057.value;
if ($tmp1058) goto block51; else goto block52;
block51:;
// line 367
frost$core$Int64 $tmp1059 = (frost$core$Int64) {0};
return $tmp1059;
block52:;
frost$core$Int64 $tmp1060 = (frost$core$Int64) {22};
frost$core$Bit $tmp1061 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1060);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block53; else goto block54;
block53:;
// line 370
frost$core$Int64 $tmp1063 = (frost$core$Int64) {1};
return $tmp1063;
block54:;
frost$core$Int64 $tmp1064 = (frost$core$Int64) {24};
frost$core$Bit $tmp1065 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1064);
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block55; else goto block56;
block55:;
org$frostlanguage$frostc$Position* $tmp1067 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp1068 = *$tmp1067;
org$frostlanguage$frostc$ASTNode** $tmp1069 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp1070 = *$tmp1069;
*(&local25) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
org$frostlanguage$frostc$ASTNode* $tmp1071 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local25) = $tmp1070;
org$frostlanguage$frostc$FixedArray** $tmp1072 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp1073 = *$tmp1072;
*(&local26) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
org$frostlanguage$frostc$FixedArray* $tmp1074 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local26) = $tmp1073;
org$frostlanguage$frostc$ASTNode** $tmp1075 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 32);
org$frostlanguage$frostc$ASTNode* $tmp1076 = *$tmp1075;
*(&local27) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
org$frostlanguage$frostc$ASTNode* $tmp1077 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local27) = $tmp1076;
// line 373
org$frostlanguage$frostc$ASTNode* $tmp1078 = *(&local25);
frost$core$Int64 $tmp1079 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1078);
*(&local28) = $tmp1079;
// line 374
org$frostlanguage$frostc$FixedArray* $tmp1080 = *(&local26);
ITable* $tmp1081 = ((frost$collections$Iterable*) $tmp1080)->$class->itable;
while ($tmp1081->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1081 = $tmp1081->next;
}
$fn1083 $tmp1082 = $tmp1081->methods[0];
frost$collections$Iterator* $tmp1084 = $tmp1082(((frost$collections$Iterable*) $tmp1080));
goto block57;
block57:;
ITable* $tmp1085 = $tmp1084->$class->itable;
while ($tmp1085->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1085 = $tmp1085->next;
}
$fn1087 $tmp1086 = $tmp1085->methods[0];
frost$core$Bit $tmp1088 = $tmp1086($tmp1084);
bool $tmp1089 = $tmp1088.value;
if ($tmp1089) goto block59; else goto block58;
block58:;
*(&local29) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp1090 = $tmp1084->$class->itable;
while ($tmp1090->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1090 = $tmp1090->next;
}
$fn1092 $tmp1091 = $tmp1090->methods[1];
frost$core$Object* $tmp1093 = $tmp1091($tmp1084);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp1093)));
org$frostlanguage$frostc$ASTNode* $tmp1094 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local29) = ((org$frostlanguage$frostc$ASTNode*) $tmp1093);
// line 375
frost$core$Int64 $tmp1095 = *(&local28);
org$frostlanguage$frostc$ASTNode* $tmp1096 = *(&local29);
frost$core$Int64 $tmp1097 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1096);
int64_t $tmp1098 = $tmp1095.value;
int64_t $tmp1099 = $tmp1097.value;
int64_t $tmp1100 = $tmp1098 + $tmp1099;
frost$core$Int64 $tmp1101 = (frost$core$Int64) {$tmp1100};
*(&local28) = $tmp1101;
frost$core$Frost$unref$frost$core$Object$Q($tmp1093);
// unreffing REF($711:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp1102 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
// unreffing s
*(&local29) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block57;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
// unreffing REF($700:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 377
org$frostlanguage$frostc$ASTNode* $tmp1103 = *(&local27);
frost$core$Bit $tmp1104 = frost$core$Bit$init$builtin_bit($tmp1103 != NULL);
bool $tmp1105 = $tmp1104.value;
if ($tmp1105) goto block60; else goto block61;
block60:;
// line 378
frost$core$Int64 $tmp1106 = *(&local28);
org$frostlanguage$frostc$ASTNode* $tmp1107 = *(&local27);
frost$core$Int64 $tmp1108 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1107);
int64_t $tmp1109 = $tmp1106.value;
int64_t $tmp1110 = $tmp1108.value;
int64_t $tmp1111 = $tmp1109 + $tmp1110;
frost$core$Int64 $tmp1112 = (frost$core$Int64) {$tmp1111};
*(&local28) = $tmp1112;
goto block61;
block61:;
// line 380
frost$core$Int64 $tmp1113 = *(&local28);
org$frostlanguage$frostc$ASTNode* $tmp1114 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
// unreffing ifFalse
*(&local27) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp1115 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
// unreffing ifTrue
*(&local26) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1116 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
// unreffing test
*(&local25) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1113;
block56:;
frost$core$Int64 $tmp1117 = (frost$core$Int64) {25};
frost$core$Bit $tmp1118 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1117);
bool $tmp1119 = $tmp1118.value;
if ($tmp1119) goto block62; else goto block63;
block62:;
// line 383
frost$core$Int64 $tmp1120 = (frost$core$Int64) {1};
return $tmp1120;
block63:;
frost$core$Int64 $tmp1121 = (frost$core$Int64) {27};
frost$core$Bit $tmp1122 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1121);
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block64; else goto block65;
block64:;
org$frostlanguage$frostc$Position* $tmp1124 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp1125 = *$tmp1124;
frost$core$String** $tmp1126 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1127 = *$tmp1126;
org$frostlanguage$frostc$FixedArray** $tmp1128 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp1129 = *$tmp1128;
*(&local30) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
org$frostlanguage$frostc$FixedArray* $tmp1130 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
*(&local30) = $tmp1129;
// line 386
frost$core$Int64 $tmp1131 = (frost$core$Int64) {0};
*(&local31) = $tmp1131;
// line 387
org$frostlanguage$frostc$FixedArray* $tmp1132 = *(&local30);
ITable* $tmp1133 = ((frost$collections$Iterable*) $tmp1132)->$class->itable;
while ($tmp1133->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1133 = $tmp1133->next;
}
$fn1135 $tmp1134 = $tmp1133->methods[0];
frost$collections$Iterator* $tmp1136 = $tmp1134(((frost$collections$Iterable*) $tmp1132));
goto block66;
block66:;
ITable* $tmp1137 = $tmp1136->$class->itable;
while ($tmp1137->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1137 = $tmp1137->next;
}
$fn1139 $tmp1138 = $tmp1137->methods[0];
frost$core$Bit $tmp1140 = $tmp1138($tmp1136);
bool $tmp1141 = $tmp1140.value;
if ($tmp1141) goto block68; else goto block67;
block67:;
*(&local32) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp1142 = $tmp1136->$class->itable;
while ($tmp1142->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1142 = $tmp1142->next;
}
$fn1144 $tmp1143 = $tmp1142->methods[1];
frost$core$Object* $tmp1145 = $tmp1143($tmp1136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp1145)));
org$frostlanguage$frostc$ASTNode* $tmp1146 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local32) = ((org$frostlanguage$frostc$ASTNode*) $tmp1145);
// line 388
frost$core$Int64 $tmp1147 = *(&local31);
org$frostlanguage$frostc$ASTNode* $tmp1148 = *(&local32);
frost$core$Int64 $tmp1149 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1148);
int64_t $tmp1150 = $tmp1147.value;
int64_t $tmp1151 = $tmp1149.value;
int64_t $tmp1152 = $tmp1150 + $tmp1151;
frost$core$Int64 $tmp1153 = (frost$core$Int64) {$tmp1152};
*(&local31) = $tmp1153;
frost$core$Frost$unref$frost$core$Object$Q($tmp1145);
// unreffing REF($818:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp1154 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
// unreffing s
*(&local32) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
// unreffing REF($807:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 390
frost$core$Int64 $tmp1155 = *(&local31);
org$frostlanguage$frostc$FixedArray* $tmp1156 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
// unreffing statements
*(&local30) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp1155;
block65:;
frost$core$Int64 $tmp1157 = (frost$core$Int64) {28};
frost$core$Bit $tmp1158 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1157);
bool $tmp1159 = $tmp1158.value;
if ($tmp1159) goto block69; else goto block70;
block69:;
org$frostlanguage$frostc$Position* $tmp1160 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp1161 = *$tmp1160;
org$frostlanguage$frostc$ASTNode** $tmp1162 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp1163 = *$tmp1162;
*(&local33) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
org$frostlanguage$frostc$ASTNode* $tmp1164 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
*(&local33) = $tmp1163;
org$frostlanguage$frostc$FixedArray** $tmp1165 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp1166 = *$tmp1165;
*(&local34) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
org$frostlanguage$frostc$FixedArray* $tmp1167 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local34) = $tmp1166;
org$frostlanguage$frostc$FixedArray** $tmp1168 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 32);
org$frostlanguage$frostc$FixedArray* $tmp1169 = *$tmp1168;
*(&local35) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
org$frostlanguage$frostc$FixedArray* $tmp1170 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
*(&local35) = $tmp1169;
// line 393
org$frostlanguage$frostc$ASTNode* $tmp1171 = *(&local33);
frost$core$Int64 $tmp1172 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1171);
*(&local36) = $tmp1172;
// line 394
org$frostlanguage$frostc$FixedArray* $tmp1173 = *(&local34);
ITable* $tmp1174 = ((frost$collections$Iterable*) $tmp1173)->$class->itable;
while ($tmp1174->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1174 = $tmp1174->next;
}
$fn1176 $tmp1175 = $tmp1174->methods[0];
frost$collections$Iterator* $tmp1177 = $tmp1175(((frost$collections$Iterable*) $tmp1173));
goto block71;
block71:;
ITable* $tmp1178 = $tmp1177->$class->itable;
while ($tmp1178->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1178 = $tmp1178->next;
}
$fn1180 $tmp1179 = $tmp1178->methods[0];
frost$core$Bit $tmp1181 = $tmp1179($tmp1177);
bool $tmp1182 = $tmp1181.value;
if ($tmp1182) goto block73; else goto block72;
block72:;
*(&local37) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp1183 = $tmp1177->$class->itable;
while ($tmp1183->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1183 = $tmp1183->next;
}
$fn1185 $tmp1184 = $tmp1183->methods[1];
frost$core$Object* $tmp1186 = $tmp1184($tmp1177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp1186)));
org$frostlanguage$frostc$ASTNode* $tmp1187 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
*(&local37) = ((org$frostlanguage$frostc$ASTNode*) $tmp1186);
// line 395
frost$core$Int64 $tmp1188 = *(&local36);
org$frostlanguage$frostc$ASTNode* $tmp1189 = *(&local37);
frost$core$Int64 $tmp1190 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1189);
int64_t $tmp1191 = $tmp1188.value;
int64_t $tmp1192 = $tmp1190.value;
int64_t $tmp1193 = $tmp1191 + $tmp1192;
frost$core$Int64 $tmp1194 = (frost$core$Int64) {$tmp1193};
*(&local36) = $tmp1194;
frost$core$Frost$unref$frost$core$Object$Q($tmp1186);
// unreffing REF($908:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp1195 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
// unreffing w
*(&local37) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block71;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
// unreffing REF($897:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 397
org$frostlanguage$frostc$FixedArray* $tmp1196 = *(&local35);
frost$core$Bit $tmp1197 = frost$core$Bit$init$builtin_bit($tmp1196 != NULL);
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block74; else goto block75;
block74:;
// line 398
org$frostlanguage$frostc$FixedArray* $tmp1199 = *(&local35);
ITable* $tmp1200 = ((frost$collections$Iterable*) $tmp1199)->$class->itable;
while ($tmp1200->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1200 = $tmp1200->next;
}
$fn1202 $tmp1201 = $tmp1200->methods[0];
frost$collections$Iterator* $tmp1203 = $tmp1201(((frost$collections$Iterable*) $tmp1199));
goto block76;
block76:;
ITable* $tmp1204 = $tmp1203->$class->itable;
while ($tmp1204->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1204 = $tmp1204->next;
}
$fn1206 $tmp1205 = $tmp1204->methods[0];
frost$core$Bit $tmp1207 = $tmp1205($tmp1203);
bool $tmp1208 = $tmp1207.value;
if ($tmp1208) goto block78; else goto block77;
block77:;
*(&local38) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp1209 = $tmp1203->$class->itable;
while ($tmp1209->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1209 = $tmp1209->next;
}
$fn1211 $tmp1210 = $tmp1209->methods[1];
frost$core$Object* $tmp1212 = $tmp1210($tmp1203);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp1212)));
org$frostlanguage$frostc$ASTNode* $tmp1213 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
*(&local38) = ((org$frostlanguage$frostc$ASTNode*) $tmp1212);
// line 399
frost$core$Int64 $tmp1214 = *(&local36);
org$frostlanguage$frostc$ASTNode* $tmp1215 = *(&local38);
frost$core$Int64 $tmp1216 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1215);
int64_t $tmp1217 = $tmp1214.value;
int64_t $tmp1218 = $tmp1216.value;
int64_t $tmp1219 = $tmp1217 + $tmp1218;
frost$core$Int64 $tmp1220 = (frost$core$Int64) {$tmp1219};
*(&local36) = $tmp1220;
frost$core$Frost$unref$frost$core$Object$Q($tmp1212);
// unreffing REF($959:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp1221 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
// unreffing s
*(&local38) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block76;
block78:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
// unreffing REF($948:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block75;
block75:;
// line 402
frost$core$Int64 $tmp1222 = *(&local36);
org$frostlanguage$frostc$FixedArray* $tmp1223 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
// unreffing other
*(&local35) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp1224 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
// unreffing whens
*(&local34) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1225 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
// unreffing value
*(&local33) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1222;
block70:;
frost$core$Int64 $tmp1226 = (frost$core$Int64) {29};
frost$core$Bit $tmp1227 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1226);
bool $tmp1228 = $tmp1227.value;
if ($tmp1228) goto block79; else goto block80;
block79:;
// line 405
frost$core$Int64 $tmp1229 = (frost$core$Int64) {10};
return $tmp1229;
block80:;
frost$core$Int64 $tmp1230 = (frost$core$Int64) {31};
frost$core$Bit $tmp1231 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1230);
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block81; else goto block82;
block81:;
// line 408
frost$core$Int64 $tmp1233 = (frost$core$Int64) {1};
return $tmp1233;
block82:;
frost$core$Int64 $tmp1234 = (frost$core$Int64) {32};
frost$core$Bit $tmp1235 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1234);
bool $tmp1236 = $tmp1235.value;
if ($tmp1236) goto block83; else goto block84;
block83:;
// line 411
frost$core$Int64 $tmp1237 = (frost$core$Int64) {0};
return $tmp1237;
block84:;
frost$core$Int64 $tmp1238 = (frost$core$Int64) {35};
frost$core$Bit $tmp1239 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1238);
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block85; else goto block86;
block85:;
org$frostlanguage$frostc$Position* $tmp1241 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp1242 = *$tmp1241;
org$frostlanguage$frostc$parser$Token$Kind* $tmp1243 = (org$frostlanguage$frostc$parser$Token$Kind*) (param1->$data + 16);
org$frostlanguage$frostc$parser$Token$Kind $tmp1244 = *$tmp1243;
org$frostlanguage$frostc$ASTNode** $tmp1245 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp1246 = *$tmp1245;
*(&local39) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
org$frostlanguage$frostc$ASTNode* $tmp1247 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local39) = $tmp1246;
// line 414
frost$core$Int64 $tmp1248 = (frost$core$Int64) {1};
org$frostlanguage$frostc$ASTNode* $tmp1249 = *(&local39);
frost$core$Int64 $tmp1250 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1249);
int64_t $tmp1251 = $tmp1248.value;
int64_t $tmp1252 = $tmp1250.value;
int64_t $tmp1253 = $tmp1251 + $tmp1252;
frost$core$Int64 $tmp1254 = (frost$core$Int64) {$tmp1253};
org$frostlanguage$frostc$ASTNode* $tmp1255 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
// unreffing base
*(&local39) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1254;
block86:;
frost$core$Int64 $tmp1256 = (frost$core$Int64) {36};
frost$core$Bit $tmp1257 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1256);
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block87; else goto block88;
block87:;
// line 417
frost$core$Int64 $tmp1259 = (frost$core$Int64) {1};
return $tmp1259;
block88:;
frost$core$Int64 $tmp1260 = (frost$core$Int64) {37};
frost$core$Bit $tmp1261 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1260);
bool $tmp1262 = $tmp1261.value;
if ($tmp1262) goto block89; else goto block90;
block89:;
// line 420
frost$core$Int64 $tmp1263 = (frost$core$Int64) {1};
return $tmp1263;
block90:;
frost$core$Int64 $tmp1264 = (frost$core$Int64) {38};
frost$core$Bit $tmp1265 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1264);
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block91; else goto block92;
block91:;
// line 423
frost$core$Int64 $tmp1267 = (frost$core$Int64) {1};
return $tmp1267;
block92:;
frost$core$Int64 $tmp1268 = (frost$core$Int64) {39};
frost$core$Bit $tmp1269 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1268);
bool $tmp1270 = $tmp1269.value;
if ($tmp1270) goto block93; else goto block94;
block93:;
org$frostlanguage$frostc$Position* $tmp1271 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp1272 = *$tmp1271;
org$frostlanguage$frostc$ASTNode** $tmp1273 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp1274 = *$tmp1273;
*(&local40) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
org$frostlanguage$frostc$ASTNode* $tmp1275 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
*(&local40) = $tmp1274;
// line 426
org$frostlanguage$frostc$ASTNode* $tmp1276 = *(&local40);
frost$core$Bit $tmp1277 = frost$core$Bit$init$builtin_bit($tmp1276 == NULL);
bool $tmp1278 = $tmp1277.value;
if ($tmp1278) goto block95; else goto block96;
block95:;
// line 427
frost$core$Int64 $tmp1279 = (frost$core$Int64) {0};
org$frostlanguage$frostc$ASTNode* $tmp1280 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
// unreffing value
*(&local40) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1279;
block96:;
// line 429
org$frostlanguage$frostc$ASTNode* $tmp1281 = *(&local40);
frost$core$Int64 $tmp1282 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1281);
org$frostlanguage$frostc$ASTNode* $tmp1283 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
// unreffing value
*(&local40) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1282;
block94:;
frost$core$Int64 $tmp1284 = (frost$core$Int64) {40};
frost$core$Bit $tmp1285 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1284);
bool $tmp1286 = $tmp1285.value;
if ($tmp1286) goto block97; else goto block98;
block97:;
// line 432
frost$core$Int64 $tmp1287 = (frost$core$Int64) {1};
return $tmp1287;
block98:;
frost$core$Int64 $tmp1288 = (frost$core$Int64) {41};
frost$core$Bit $tmp1289 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1288);
bool $tmp1290 = $tmp1289.value;
if ($tmp1290) goto block99; else goto block100;
block99:;
// line 435
frost$core$Int64 $tmp1291 = (frost$core$Int64) {1};
return $tmp1291;
block100:;
frost$core$Int64 $tmp1292 = (frost$core$Int64) {42};
frost$core$Bit $tmp1293 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1292);
bool $tmp1294 = $tmp1293.value;
if ($tmp1294) goto block101; else goto block102;
block101:;
// line 438
frost$core$Int64 $tmp1295 = (frost$core$Int64) {1};
return $tmp1295;
block102:;
frost$core$Int64 $tmp1296 = (frost$core$Int64) {45};
frost$core$Bit $tmp1297 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1296);
bool $tmp1298 = $tmp1297.value;
if ($tmp1298) goto block103; else goto block104;
block103:;
// line 441
frost$core$Int64 $tmp1299 = (frost$core$Int64) {0};
return $tmp1299;
block104:;
frost$core$Int64 $tmp1300 = (frost$core$Int64) {46};
frost$core$Bit $tmp1301 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1300);
bool $tmp1302 = $tmp1301.value;
if ($tmp1302) goto block105; else goto block106;
block105:;
// line 444
frost$core$Int64 $tmp1303 = (frost$core$Int64) {10};
return $tmp1303;
block106:;
frost$core$Int64 $tmp1304 = (frost$core$Int64) {48};
frost$core$Bit $tmp1305 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1304);
bool $tmp1306 = $tmp1305.value;
if ($tmp1306) goto block107; else goto block108;
block107:;
// line 447
frost$core$Int64 $tmp1307 = (frost$core$Int64) {10};
return $tmp1307;
block108:;
frost$core$Int64 $tmp1308 = (frost$core$Int64) {50};
frost$core$Bit $tmp1309 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1308);
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block109; else goto block110;
block109:;
org$frostlanguage$frostc$Position* $tmp1311 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp1312 = *$tmp1311;
org$frostlanguage$frostc$Variable$Kind* $tmp1313 = (org$frostlanguage$frostc$Variable$Kind*) (param1->$data + 16);
org$frostlanguage$frostc$Variable$Kind $tmp1314 = *$tmp1313;
org$frostlanguage$frostc$FixedArray** $tmp1315 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp1316 = *$tmp1315;
*(&local41) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
org$frostlanguage$frostc$FixedArray* $tmp1317 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
*(&local41) = $tmp1316;
// line 450
frost$core$Int64 $tmp1318 = (frost$core$Int64) {0};
*(&local42) = $tmp1318;
// line 451
org$frostlanguage$frostc$FixedArray* $tmp1319 = *(&local41);
ITable* $tmp1320 = ((frost$collections$Iterable*) $tmp1319)->$class->itable;
while ($tmp1320->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1320 = $tmp1320->next;
}
$fn1322 $tmp1321 = $tmp1320->methods[0];
frost$collections$Iterator* $tmp1323 = $tmp1321(((frost$collections$Iterable*) $tmp1319));
goto block111;
block111:;
ITable* $tmp1324 = $tmp1323->$class->itable;
while ($tmp1324->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1324 = $tmp1324->next;
}
$fn1326 $tmp1325 = $tmp1324->methods[0];
frost$core$Bit $tmp1327 = $tmp1325($tmp1323);
bool $tmp1328 = $tmp1327.value;
if ($tmp1328) goto block113; else goto block112;
block112:;
*(&local43) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp1329 = $tmp1323->$class->itable;
while ($tmp1329->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1329 = $tmp1329->next;
}
$fn1331 $tmp1330 = $tmp1329->methods[1];
frost$core$Object* $tmp1332 = $tmp1330($tmp1323);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp1332)));
org$frostlanguage$frostc$ASTNode* $tmp1333 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local43) = ((org$frostlanguage$frostc$ASTNode*) $tmp1332);
// line 452
frost$core$Int64 $tmp1334 = *(&local42);
org$frostlanguage$frostc$ASTNode* $tmp1335 = *(&local43);
frost$core$Int64 $tmp1336 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1335);
int64_t $tmp1337 = $tmp1334.value;
int64_t $tmp1338 = $tmp1336.value;
int64_t $tmp1339 = $tmp1337 + $tmp1338;
frost$core$Int64 $tmp1340 = (frost$core$Int64) {$tmp1339};
*(&local42) = $tmp1340;
frost$core$Frost$unref$frost$core$Object$Q($tmp1332);
// unreffing REF($1197:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp1341 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
// unreffing decl
*(&local43) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block111;
block113:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
// unreffing REF($1186:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 454
frost$core$Int64 $tmp1342 = *(&local42);
org$frostlanguage$frostc$FixedArray* $tmp1343 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
// unreffing decls
*(&local41) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp1342;
block110:;
frost$core$Int64 $tmp1344 = (frost$core$Int64) {51};
frost$core$Bit $tmp1345 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1344);
bool $tmp1346 = $tmp1345.value;
if ($tmp1346) goto block114; else goto block115;
block114:;
org$frostlanguage$frostc$Position* $tmp1347 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp1348 = *$tmp1347;
org$frostlanguage$frostc$FixedArray** $tmp1349 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 16);
org$frostlanguage$frostc$FixedArray* $tmp1350 = *$tmp1349;
*(&local44) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
org$frostlanguage$frostc$FixedArray* $tmp1351 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local44) = $tmp1350;
org$frostlanguage$frostc$FixedArray** $tmp1352 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp1353 = *$tmp1352;
*(&local45) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
org$frostlanguage$frostc$FixedArray* $tmp1354 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
*(&local45) = $tmp1353;
// line 457
frost$core$Int64 $tmp1355 = (frost$core$Int64) {0};
*(&local46) = $tmp1355;
// line 458
org$frostlanguage$frostc$FixedArray* $tmp1356 = *(&local44);
ITable* $tmp1357 = ((frost$collections$Iterable*) $tmp1356)->$class->itable;
while ($tmp1357->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1357 = $tmp1357->next;
}
$fn1359 $tmp1358 = $tmp1357->methods[0];
frost$collections$Iterator* $tmp1360 = $tmp1358(((frost$collections$Iterable*) $tmp1356));
goto block116;
block116:;
ITable* $tmp1361 = $tmp1360->$class->itable;
while ($tmp1361->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1361 = $tmp1361->next;
}
$fn1363 $tmp1362 = $tmp1361->methods[0];
frost$core$Bit $tmp1364 = $tmp1362($tmp1360);
bool $tmp1365 = $tmp1364.value;
if ($tmp1365) goto block118; else goto block117;
block117:;
*(&local47) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp1366 = $tmp1360->$class->itable;
while ($tmp1366->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1366 = $tmp1366->next;
}
$fn1368 $tmp1367 = $tmp1366->methods[1];
frost$core$Object* $tmp1369 = $tmp1367($tmp1360);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp1369)));
org$frostlanguage$frostc$ASTNode* $tmp1370 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
*(&local47) = ((org$frostlanguage$frostc$ASTNode*) $tmp1369);
// line 459
frost$core$Int64 $tmp1371 = *(&local46);
org$frostlanguage$frostc$ASTNode* $tmp1372 = *(&local47);
frost$core$Int64 $tmp1373 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1372);
int64_t $tmp1374 = $tmp1371.value;
int64_t $tmp1375 = $tmp1373.value;
int64_t $tmp1376 = $tmp1374 + $tmp1375;
frost$core$Int64 $tmp1377 = (frost$core$Int64) {$tmp1376};
*(&local46) = $tmp1377;
frost$core$Frost$unref$frost$core$Object$Q($tmp1369);
// unreffing REF($1277:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp1378 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
// unreffing test
*(&local47) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block116;
block118:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// unreffing REF($1266:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 461
org$frostlanguage$frostc$FixedArray* $tmp1379 = *(&local45);
ITable* $tmp1380 = ((frost$collections$Iterable*) $tmp1379)->$class->itable;
while ($tmp1380->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1380 = $tmp1380->next;
}
$fn1382 $tmp1381 = $tmp1380->methods[0];
frost$collections$Iterator* $tmp1383 = $tmp1381(((frost$collections$Iterable*) $tmp1379));
goto block119;
block119:;
ITable* $tmp1384 = $tmp1383->$class->itable;
while ($tmp1384->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1384 = $tmp1384->next;
}
$fn1386 $tmp1385 = $tmp1384->methods[0];
frost$core$Bit $tmp1387 = $tmp1385($tmp1383);
bool $tmp1388 = $tmp1387.value;
if ($tmp1388) goto block121; else goto block120;
block120:;
*(&local48) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp1389 = $tmp1383->$class->itable;
while ($tmp1389->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1389 = $tmp1389->next;
}
$fn1391 $tmp1390 = $tmp1389->methods[1];
frost$core$Object* $tmp1392 = $tmp1390($tmp1383);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp1392)));
org$frostlanguage$frostc$ASTNode* $tmp1393 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
*(&local48) = ((org$frostlanguage$frostc$ASTNode*) $tmp1392);
// line 462
frost$core$Int64 $tmp1394 = *(&local46);
org$frostlanguage$frostc$ASTNode* $tmp1395 = *(&local48);
frost$core$Int64 $tmp1396 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1395);
int64_t $tmp1397 = $tmp1394.value;
int64_t $tmp1398 = $tmp1396.value;
int64_t $tmp1399 = $tmp1397 + $tmp1398;
frost$core$Int64 $tmp1400 = (frost$core$Int64) {$tmp1399};
*(&local46) = $tmp1400;
frost$core$Frost$unref$frost$core$Object$Q($tmp1392);
// unreffing REF($1322:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp1401 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
// unreffing s
*(&local48) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block119;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
// unreffing REF($1311:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 464
frost$core$Int64 $tmp1402 = *(&local46);
org$frostlanguage$frostc$FixedArray* $tmp1403 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
// unreffing statements
*(&local45) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp1404 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
// unreffing tests
*(&local44) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp1402;
block115:;
frost$core$Int64 $tmp1405 = (frost$core$Int64) {52};
frost$core$Bit $tmp1406 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp1405);
bool $tmp1407 = $tmp1406.value;
if ($tmp1407) goto block122; else goto block123;
block122:;
org$frostlanguage$frostc$Position* $tmp1408 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp1409 = *$tmp1408;
frost$core$String** $tmp1410 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1411 = *$tmp1410;
org$frostlanguage$frostc$ASTNode** $tmp1412 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp1413 = *$tmp1412;
*(&local49) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
org$frostlanguage$frostc$ASTNode* $tmp1414 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local49) = $tmp1413;
org$frostlanguage$frostc$FixedArray** $tmp1415 = (org$frostlanguage$frostc$FixedArray**) (param1->$data + 32);
org$frostlanguage$frostc$FixedArray* $tmp1416 = *$tmp1415;
*(&local50) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
org$frostlanguage$frostc$FixedArray* $tmp1417 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local50) = $tmp1416;
// line 467
org$frostlanguage$frostc$ASTNode* $tmp1418 = *(&local49);
frost$core$Int64 $tmp1419 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1418);
*(&local51) = $tmp1419;
// line 468
org$frostlanguage$frostc$FixedArray* $tmp1420 = *(&local50);
ITable* $tmp1421 = ((frost$collections$Iterable*) $tmp1420)->$class->itable;
while ($tmp1421->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1421 = $tmp1421->next;
}
$fn1423 $tmp1422 = $tmp1421->methods[0];
frost$collections$Iterator* $tmp1424 = $tmp1422(((frost$collections$Iterable*) $tmp1420));
goto block124;
block124:;
ITable* $tmp1425 = $tmp1424->$class->itable;
while ($tmp1425->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1425 = $tmp1425->next;
}
$fn1427 $tmp1426 = $tmp1425->methods[0];
frost$core$Bit $tmp1428 = $tmp1426($tmp1424);
bool $tmp1429 = $tmp1428.value;
if ($tmp1429) goto block126; else goto block125;
block125:;
*(&local52) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp1430 = $tmp1424->$class->itable;
while ($tmp1430->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1430 = $tmp1430->next;
}
$fn1432 $tmp1431 = $tmp1430->methods[1];
frost$core$Object* $tmp1433 = $tmp1431($tmp1424);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp1433)));
org$frostlanguage$frostc$ASTNode* $tmp1434 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
*(&local52) = ((org$frostlanguage$frostc$ASTNode*) $tmp1433);
// line 469
frost$core$Int64 $tmp1435 = *(&local51);
org$frostlanguage$frostc$ASTNode* $tmp1436 = *(&local52);
frost$core$Int64 $tmp1437 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1436);
int64_t $tmp1438 = $tmp1435.value;
int64_t $tmp1439 = $tmp1437.value;
int64_t $tmp1440 = $tmp1438 + $tmp1439;
frost$core$Int64 $tmp1441 = (frost$core$Int64) {$tmp1440};
*(&local51) = $tmp1441;
frost$core$Frost$unref$frost$core$Object$Q($tmp1433);
// unreffing REF($1410:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp1442 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
// unreffing s
*(&local52) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block124;
block126:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
// unreffing REF($1399:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 471
frost$core$Int64 $tmp1443 = *(&local51);
org$frostlanguage$frostc$FixedArray* $tmp1444 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
// unreffing statements
*(&local50) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1445 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
// unreffing test
*(&local49) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1443;
block123:;
// line 474
frost$core$Bit $tmp1446 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1447 = $tmp1446.value;
if ($tmp1447) goto block127; else goto block128;
block128:;
frost$core$Int64 $tmp1448 = (frost$core$Int64) {474};
frost$core$String* $tmp1449 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1450, ((frost$core$Object*) param1));
frost$core$String* $tmp1451 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1449, &$s1452);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1453, $tmp1448, $tmp1451);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
// unreffing REF($1459:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
// unreffing REF($1458:frost.core.String)
abort(); // unreachable
block127:;
goto block1;
block1:;
frost$core$Bit $tmp1454 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1455 = $tmp1454.value;
if ($tmp1455) goto block129; else goto block130;
block130:;
frost$core$Int64 $tmp1456 = (frost$core$Int64) {292};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1457, $tmp1456, &$s1458);
abort(); // unreachable
block129:;
abort(); // unreachable

}
frost$core$Bit org$frostlanguage$frostc$Scanner$shouldInline$org$frostlanguage$frostc$Annotations$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlanguage$frostc$Scanner* param0, org$frostlanguage$frostc$Annotations* param1, frost$collections$ListView* param2) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Int64 local2;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
// line 480
frost$core$Weak** $tmp1459 = &param0->compiler;
frost$core$Weak* $tmp1460 = *$tmp1459;
frost$core$Object* $tmp1461 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1460);
org$frostlanguage$frostc$Compiler$Settings** $tmp1462 = &((org$frostlanguage$frostc$Compiler*) $tmp1461)->settings;
org$frostlanguage$frostc$Compiler$Settings* $tmp1463 = *$tmp1462;
frost$core$Int64* $tmp1464 = &$tmp1463->optimizationLevel;
frost$core$Int64 $tmp1465 = *$tmp1464;
frost$core$Int64 $tmp1466 = (frost$core$Int64) {0};
int64_t $tmp1467 = $tmp1465.value;
int64_t $tmp1468 = $tmp1466.value;
bool $tmp1469 = $tmp1467 > $tmp1468;
frost$core$Bit $tmp1470 = (frost$core$Bit) {$tmp1469};
bool $tmp1471 = $tmp1470.value;
if ($tmp1471) goto block3; else goto block4;
block3:;
frost$core$Bit $tmp1472 = org$frostlanguage$frostc$Annotations$get_isInline$R$frost$core$Bit(param1);
frost$core$Bit $tmp1473 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1472);
*(&local1) = $tmp1473;
goto block5;
block4:;
*(&local1) = $tmp1470;
goto block5;
block5:;
frost$core$Bit $tmp1474 = *(&local1);
bool $tmp1475 = $tmp1474.value;
if ($tmp1475) goto block6; else goto block7;
block6:;
frost$core$Bit $tmp1476 = org$frostlanguage$frostc$Annotations$get_isFinal$R$frost$core$Bit(param1);
*(&local0) = $tmp1476;
goto block8;
block7:;
*(&local0) = $tmp1474;
goto block8;
block8:;
frost$core$Bit $tmp1477 = *(&local0);
bool $tmp1478 = $tmp1477.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1461);
// unreffing REF($4:frost.core.Weak.T)
if ($tmp1478) goto block1; else goto block2;
block1:;
// line 482
frost$core$Int64 $tmp1479 = (frost$core$Int64) {0};
*(&local2) = $tmp1479;
// line 483
ITable* $tmp1480 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp1480->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1480 = $tmp1480->next;
}
$fn1482 $tmp1481 = $tmp1480->methods[0];
frost$collections$Iterator* $tmp1483 = $tmp1481(((frost$collections$Iterable*) param2));
goto block9;
block9:;
ITable* $tmp1484 = $tmp1483->$class->itable;
while ($tmp1484->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1484 = $tmp1484->next;
}
$fn1486 $tmp1485 = $tmp1484->methods[0];
frost$core$Bit $tmp1487 = $tmp1485($tmp1483);
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block11; else goto block10;
block10:;
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp1489 = $tmp1483->$class->itable;
while ($tmp1489->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1489 = $tmp1489->next;
}
$fn1491 $tmp1490 = $tmp1489->methods[1];
frost$core$Object* $tmp1492 = $tmp1490($tmp1483);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp1492)));
org$frostlanguage$frostc$ASTNode* $tmp1493 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) $tmp1492);
// line 484
frost$core$Int64 $tmp1494 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp1495 = *(&local3);
frost$core$Int64 $tmp1496 = org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1495);
int64_t $tmp1497 = $tmp1494.value;
int64_t $tmp1498 = $tmp1496.value;
int64_t $tmp1499 = $tmp1497 + $tmp1498;
frost$core$Int64 $tmp1500 = (frost$core$Int64) {$tmp1499};
*(&local2) = $tmp1500;
// line 485
frost$core$Int64 $tmp1501 = *(&local2);
frost$core$Int64 $tmp1502 = (frost$core$Int64) {10};
int64_t $tmp1503 = $tmp1501.value;
int64_t $tmp1504 = $tmp1502.value;
bool $tmp1505 = $tmp1503 > $tmp1504;
frost$core$Bit $tmp1506 = (frost$core$Bit) {$tmp1505};
bool $tmp1507 = $tmp1506.value;
if ($tmp1507) goto block12; else goto block13;
block12:;
// line 486
frost$core$Bit $tmp1508 = frost$core$Bit$init$builtin_bit(false);
frost$core$Frost$unref$frost$core$Object$Q($tmp1492);
// unreffing REF($55:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp1509 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
// unreffing s
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
// unreffing REF($44:frost.collections.Iterator<frost.collections.Iterable.T>)
return $tmp1508;
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1492);
// unreffing REF($55:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp1510 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
// unreffing s
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
// unreffing REF($44:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 489
frost$core$Bit $tmp1511 = frost$core$Bit$init$builtin_bit(true);
return $tmp1511;
block2:;
// line 491
frost$core$Bit $tmp1512 = frost$core$Bit$init$builtin_bit(false);
return $tmp1512;

}
org$frostlanguage$frostc$MethodDecl* org$frostlanguage$frostc$Scanner$scanMethod$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$R$org$frostlanguage$frostc$MethodDecl$Q(org$frostlanguage$frostc$Scanner* param0, org$frostlanguage$frostc$ClassDecl* param1, org$frostlanguage$frostc$Position param2, org$frostlanguage$frostc$ASTNode* param3, org$frostlanguage$frostc$FixedArray* param4, org$frostlanguage$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlanguage$frostc$FixedArray* param7, org$frostlanguage$frostc$FixedArray* param8, org$frostlanguage$frostc$ASTNode* param9, org$frostlanguage$frostc$FixedArray* param10) {

frost$core$String* local0 = NULL;
org$frostlanguage$frostc$Position local1;
frost$core$String* local2 = NULL;
org$frostlanguage$frostc$Annotations* local3 = NULL;
frost$core$Bit local4;
frost$core$Bit local5;
frost$collections$Array* local6 = NULL;
frost$core$String* local7 = NULL;
org$frostlanguage$frostc$ASTNode* local8 = NULL;
frost$core$String* local9 = NULL;
org$frostlanguage$frostc$Type* local10 = NULL;
frost$core$String* local11 = NULL;
frost$core$String* local12 = NULL;
org$frostlanguage$frostc$ASTNode* local13 = NULL;
frost$collections$Array* local14 = NULL;
org$frostlanguage$frostc$ASTNode* local15 = NULL;
frost$core$String* local16 = NULL;
org$frostlanguage$frostc$ASTNode* local17 = NULL;
org$frostlanguage$frostc$Type* local18 = NULL;
frost$core$Bit local19;
frost$core$Bit local20;
frost$core$Bit local21;
// line 498
*(&local0) = ((frost$core$String*) NULL);
// line 500
frost$core$Bit $tmp1513 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1514 = $tmp1513.value;
if ($tmp1514) goto block1; else goto block3;
block1:;
// line 501
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp1515 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 504
frost$core$Int64* $tmp1516 = &param3->$rawValue;
frost$core$Int64 $tmp1517 = *$tmp1516;
frost$core$Int64 $tmp1518 = (frost$core$Int64) {41};
frost$core$Bit $tmp1519 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1517, $tmp1518);
bool $tmp1520 = $tmp1519.value;
if ($tmp1520) goto block5; else goto block6;
block5:;
org$frostlanguage$frostc$Position* $tmp1521 = (org$frostlanguage$frostc$Position*) (param3->$data + 0);
org$frostlanguage$frostc$Position $tmp1522 = *$tmp1521;
*(&local1) = $tmp1522;
frost$core$String** $tmp1523 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1524 = *$tmp1523;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
frost$core$String* $tmp1525 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
*(&local2) = $tmp1524;
// line 506
frost$core$String* $tmp1526 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
frost$core$String* $tmp1527 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
*(&local0) = $tmp1526;
frost$core$String* $tmp1528 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1528));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 509
frost$core$Bit $tmp1529 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1530 = $tmp1529.value;
if ($tmp1530) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp1531 = (frost$core$Int64) {509};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1532, $tmp1531);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 513
org$frostlanguage$frostc$Annotations* $tmp1533 = org$frostlanguage$frostc$Scanner$convertAnnotations$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlanguage$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
org$frostlanguage$frostc$Annotations* $tmp1534 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
*(&local3) = $tmp1533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
// unreffing REF($61:org.frostlanguage.frostc.Annotations)
// line 514
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp1535;
$tmp1535 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp1535->value = param5;
frost$core$Int64 $tmp1536 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp1537 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1536);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp1538;
$tmp1538 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp1538->value = $tmp1537;
ITable* $tmp1539 = ((frost$core$Equatable*) $tmp1535)->$class->itable;
while ($tmp1539->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1539 = $tmp1539->next;
}
$fn1541 $tmp1540 = $tmp1539->methods[1];
frost$core$Bit $tmp1542 = $tmp1540(((frost$core$Equatable*) $tmp1535), ((frost$core$Equatable*) $tmp1538));
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block11; else goto block12;
block11:;
org$frostlanguage$frostc$Annotations** $tmp1544 = &param1->annotations;
org$frostlanguage$frostc$Annotations* $tmp1545 = *$tmp1544;
frost$core$Bit $tmp1546 = org$frostlanguage$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1545);
*(&local5) = $tmp1546;
goto block13;
block12:;
*(&local5) = $tmp1542;
goto block13;
block13:;
frost$core$Bit $tmp1547 = *(&local5);
bool $tmp1548 = $tmp1547.value;
if ($tmp1548) goto block14; else goto block15;
block14:;
*(&local4) = $tmp1547;
goto block16;
block15:;
org$frostlanguage$frostc$Annotations* $tmp1549 = *(&local3);
frost$core$Bit $tmp1550 = org$frostlanguage$frostc$Annotations$get_isPrivate$R$frost$core$Bit($tmp1549);
*(&local4) = $tmp1550;
goto block16;
block16:;
frost$core$Bit $tmp1551 = *(&local4);
bool $tmp1552 = $tmp1551.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1538)));
// unreffing REF($77:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1535)));
// unreffing REF($73:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
if ($tmp1552) goto block9; else goto block10;
block9:;
// line 515
org$frostlanguage$frostc$Annotations* $tmp1553 = *(&local3);
frost$core$Int64* $tmp1554 = &$tmp1553->flags;
frost$core$Int64 $tmp1555 = *$tmp1554;
frost$core$Int64 $tmp1556 = (frost$core$Int64) {256};
frost$core$Int64 $tmp1557 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1555, $tmp1556);
frost$core$Int64* $tmp1558 = &$tmp1553->flags;
*$tmp1558 = $tmp1557;
goto block10;
block10:;
// line 517
*(&local6) = ((frost$collections$Array*) NULL);
// line 518
frost$core$Bit $tmp1559 = frost$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1560 = $tmp1559.value;
if ($tmp1560) goto block17; else goto block19;
block17:;
// line 519
frost$collections$Array* $tmp1561 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1561);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
frost$collections$Array* $tmp1562 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
*(&local6) = $tmp1561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
// unreffing REF($124:frost.collections.Array<org.frostlanguage.frostc.MethodDecl.GenericParameter>)
// line 520
frost$core$String** $tmp1563 = &param1->name;
frost$core$String* $tmp1564 = *$tmp1563;
frost$core$String* $tmp1565 = frost$core$String$convert$R$frost$core$String($tmp1564);
frost$core$String* $tmp1566 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1565, &$s1567);
frost$core$String* $tmp1568 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1566, param6);
frost$core$String* $tmp1569 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1568, &$s1570);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
frost$core$String* $tmp1571 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
*(&local7) = $tmp1569;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
// unreffing REF($143:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
// unreffing REF($142:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
// unreffing REF($141:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
// unreffing REF($140:frost.core.String)
// line 521
ITable* $tmp1572 = ((frost$collections$Iterable*) param7)->$class->itable;
while ($tmp1572->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1572 = $tmp1572->next;
}
$fn1574 $tmp1573 = $tmp1572->methods[0];
frost$collections$Iterator* $tmp1575 = $tmp1573(((frost$collections$Iterable*) param7));
goto block20;
block20:;
ITable* $tmp1576 = $tmp1575->$class->itable;
while ($tmp1576->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1576 = $tmp1576->next;
}
$fn1578 $tmp1577 = $tmp1576->methods[0];
frost$core$Bit $tmp1579 = $tmp1577($tmp1575);
bool $tmp1580 = $tmp1579.value;
if ($tmp1580) goto block22; else goto block21;
block21:;
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp1581 = $tmp1575->$class->itable;
while ($tmp1581->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1581 = $tmp1581->next;
}
$fn1583 $tmp1582 = $tmp1581->methods[1];
frost$core$Object* $tmp1584 = $tmp1582($tmp1575);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp1584)));
org$frostlanguage$frostc$ASTNode* $tmp1585 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) $tmp1584);
// line 522
*(&local9) = ((frost$core$String*) NULL);
// line 523
*(&local10) = ((org$frostlanguage$frostc$Type*) NULL);
// line 524
org$frostlanguage$frostc$ASTNode* $tmp1586 = *(&local8);
frost$core$Int64* $tmp1587 = &$tmp1586->$rawValue;
frost$core$Int64 $tmp1588 = *$tmp1587;
frost$core$Int64 $tmp1589 = (frost$core$Int64) {22};
frost$core$Bit $tmp1590 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1588, $tmp1589);
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block24; else goto block25;
block24:;
org$frostlanguage$frostc$Position* $tmp1592 = (org$frostlanguage$frostc$Position*) ($tmp1586->$data + 0);
org$frostlanguage$frostc$Position $tmp1593 = *$tmp1592;
frost$core$String** $tmp1594 = (frost$core$String**) ($tmp1586->$data + 16);
frost$core$String* $tmp1595 = *$tmp1594;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
frost$core$String* $tmp1596 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local11) = $tmp1595;
// line 526
frost$core$String* $tmp1597 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
frost$core$String* $tmp1598 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
*(&local9) = $tmp1597;
// line 527
org$frostlanguage$frostc$Type* $tmp1599 = org$frostlanguage$frostc$Type$Any$R$org$frostlanguage$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
org$frostlanguage$frostc$Type* $tmp1600 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
*(&local10) = $tmp1599;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
// unreffing REF($218:org.frostlanguage.frostc.Type)
frost$core$String* $tmp1601 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
// unreffing id
*(&local11) = ((frost$core$String*) NULL);
goto block23;
block25:;
frost$core$Int64 $tmp1602 = (frost$core$Int64) {47};
frost$core$Bit $tmp1603 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1588, $tmp1602);
bool $tmp1604 = $tmp1603.value;
if ($tmp1604) goto block26; else goto block27;
block26:;
org$frostlanguage$frostc$Position* $tmp1605 = (org$frostlanguage$frostc$Position*) ($tmp1586->$data + 0);
org$frostlanguage$frostc$Position $tmp1606 = *$tmp1605;
frost$core$String** $tmp1607 = (frost$core$String**) ($tmp1586->$data + 16);
frost$core$String* $tmp1608 = *$tmp1607;
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
frost$core$String* $tmp1609 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
*(&local12) = $tmp1608;
org$frostlanguage$frostc$ASTNode** $tmp1610 = (org$frostlanguage$frostc$ASTNode**) ($tmp1586->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp1611 = *$tmp1610;
*(&local13) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
org$frostlanguage$frostc$ASTNode* $tmp1612 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
*(&local13) = $tmp1611;
// line 530
frost$core$String* $tmp1613 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
frost$core$String* $tmp1614 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
*(&local9) = $tmp1613;
// line 531
org$frostlanguage$frostc$ASTNode* $tmp1615 = *(&local13);
org$frostlanguage$frostc$Type* $tmp1616 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(param0, $tmp1615);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
org$frostlanguage$frostc$Type* $tmp1617 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
*(&local10) = $tmp1616;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
// unreffing REF($269:org.frostlanguage.frostc.Type)
org$frostlanguage$frostc$ASTNode* $tmp1618 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
// unreffing type
*(&local13) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp1619 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
// unreffing id
*(&local12) = ((frost$core$String*) NULL);
goto block23;
block27:;
// line 534
frost$core$Bit $tmp1620 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1621 = $tmp1620.value;
if ($tmp1621) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp1622 = (frost$core$Int64) {534};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1623, $tmp1622);
abort(); // unreachable
block28:;
goto block23;
block23:;
// line 537
frost$collections$Array* $tmp1624 = *(&local6);
org$frostlanguage$frostc$MethodDecl$GenericParameter* $tmp1625 = (org$frostlanguage$frostc$MethodDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$GenericParameter$class);
org$frostlanguage$frostc$ASTNode* $tmp1626 = *(&local8);
$fn1628 $tmp1627 = ($fn1628) $tmp1626->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp1629 = $tmp1627($tmp1626);
frost$core$String* $tmp1630 = *(&local7);
frost$core$String* $tmp1631 = *(&local9);
org$frostlanguage$frostc$Type* $tmp1632 = *(&local10);
org$frostlanguage$frostc$MethodDecl$GenericParameter$init$org$frostlanguage$frostc$Position$frost$core$String$frost$core$String$org$frostlanguage$frostc$Type($tmp1625, $tmp1629, $tmp1630, $tmp1631, $tmp1632);
frost$collections$Array$add$frost$collections$Array$T($tmp1624, ((frost$core$Object*) $tmp1625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
// unreffing REF($301:org.frostlanguage.frostc.MethodDecl.GenericParameter)
org$frostlanguage$frostc$Type* $tmp1633 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
// unreffing bound
*(&local10) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$String* $tmp1634 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
// unreffing parameterName
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1584);
// unreffing REF($178:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp1635 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
// unreffing p
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
// unreffing REF($167:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$String* $tmp1636 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
// unreffing fullName
*(&local7) = ((frost$core$String*) NULL);
goto block18;
block19:;
// line 1
// line 542
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp1637 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
*(&local6) = ((frost$collections$Array*) NULL);
goto block18;
block18:;
// line 544
frost$collections$Array* $tmp1638 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1638);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
frost$collections$Array* $tmp1639 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
*(&local14) = $tmp1638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
// unreffing REF($352:frost.collections.Array<org.frostlanguage.frostc.MethodDecl.Parameter>)
// line 545
ITable* $tmp1640 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp1640->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1640 = $tmp1640->next;
}
$fn1642 $tmp1641 = $tmp1640->methods[0];
frost$collections$Iterator* $tmp1643 = $tmp1641(((frost$collections$Iterable*) param8));
goto block30;
block30:;
ITable* $tmp1644 = $tmp1643->$class->itable;
while ($tmp1644->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1644 = $tmp1644->next;
}
$fn1646 $tmp1645 = $tmp1644->methods[0];
frost$core$Bit $tmp1647 = $tmp1645($tmp1643);
bool $tmp1648 = $tmp1647.value;
if ($tmp1648) goto block32; else goto block31;
block31:;
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp1649 = $tmp1643->$class->itable;
while ($tmp1649->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1649 = $tmp1649->next;
}
$fn1651 $tmp1650 = $tmp1649->methods[1];
frost$core$Object* $tmp1652 = $tmp1650($tmp1643);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp1652)));
org$frostlanguage$frostc$ASTNode* $tmp1653 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) $tmp1652);
// line 546
org$frostlanguage$frostc$ASTNode* $tmp1654 = *(&local15);
frost$core$Int64* $tmp1655 = &$tmp1654->$rawValue;
frost$core$Int64 $tmp1656 = *$tmp1655;
frost$core$Int64 $tmp1657 = (frost$core$Int64) {34};
frost$core$Bit $tmp1658 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1656, $tmp1657);
bool $tmp1659 = $tmp1658.value;
if ($tmp1659) goto block34; else goto block35;
block34:;
org$frostlanguage$frostc$Position* $tmp1660 = (org$frostlanguage$frostc$Position*) ($tmp1654->$data + 0);
org$frostlanguage$frostc$Position $tmp1661 = *$tmp1660;
frost$core$String** $tmp1662 = (frost$core$String**) ($tmp1654->$data + 16);
frost$core$String* $tmp1663 = *$tmp1662;
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
frost$core$String* $tmp1664 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local16) = $tmp1663;
org$frostlanguage$frostc$ASTNode** $tmp1665 = (org$frostlanguage$frostc$ASTNode**) ($tmp1654->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp1666 = *$tmp1665;
*(&local17) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
org$frostlanguage$frostc$ASTNode* $tmp1667 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
*(&local17) = $tmp1666;
// line 548
frost$collections$Array* $tmp1668 = *(&local14);
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp1669 = (org$frostlanguage$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1670 = *(&local16);
org$frostlanguage$frostc$ASTNode* $tmp1671 = *(&local17);
org$frostlanguage$frostc$Type* $tmp1672 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(param0, $tmp1671);
org$frostlanguage$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlanguage$frostc$Type($tmp1669, $tmp1670, $tmp1672);
frost$collections$Array$add$frost$collections$Array$T($tmp1668, ((frost$core$Object*) $tmp1669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
// unreffing REF($422:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
// unreffing REF($419:org.frostlanguage.frostc.MethodDecl.Parameter)
org$frostlanguage$frostc$ASTNode* $tmp1673 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
// unreffing type
*(&local17) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp1674 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
// unreffing name
*(&local16) = ((frost$core$String*) NULL);
goto block33;
block35:;
// line 551
frost$core$Bit $tmp1675 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1676 = $tmp1675.value;
if ($tmp1676) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp1677 = (frost$core$Int64) {551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1678, $tmp1677);
abort(); // unreachable
block36:;
goto block33;
block33:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1652);
// unreffing REF($380:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp1679 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
// unreffing p
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block30;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
// unreffing REF($369:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 555
*(&local18) = ((org$frostlanguage$frostc$Type*) NULL);
// line 556
frost$core$Bit $tmp1680 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1681 = $tmp1680.value;
if ($tmp1681) goto block38; else goto block40;
block38:;
// line 557
org$frostlanguage$frostc$Type* $tmp1682 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(param0, param9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
org$frostlanguage$frostc$Type* $tmp1683 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
*(&local18) = $tmp1682;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
// unreffing REF($472:org.frostlanguage.frostc.Type)
goto block39;
block40:;
// line 1
// line 560
org$frostlanguage$frostc$Type* $tmp1684 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
org$frostlanguage$frostc$Type* $tmp1685 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
*(&local18) = $tmp1684;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
// unreffing REF($485:org.frostlanguage.frostc.Type)
goto block39;
block39:;
// line 562
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp1686;
$tmp1686 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp1686->value = param5;
frost$core$Int64 $tmp1687 = (frost$core$Int64) {1};
org$frostlanguage$frostc$MethodDecl$Kind $tmp1688 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1687);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp1689;
$tmp1689 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp1689->value = $tmp1688;
ITable* $tmp1690 = ((frost$core$Equatable*) $tmp1686)->$class->itable;
while ($tmp1690->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1690 = $tmp1690->next;
}
$fn1692 $tmp1691 = $tmp1690->methods[0];
frost$core$Bit $tmp1693 = $tmp1691(((frost$core$Equatable*) $tmp1686), ((frost$core$Equatable*) $tmp1689));
bool $tmp1694 = $tmp1693.value;
if ($tmp1694) goto block43; else goto block44;
block43:;
org$frostlanguage$frostc$Type* $tmp1695 = *(&local18);
org$frostlanguage$frostc$Type* $tmp1696 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
frost$core$Bit $tmp1697 = org$frostlanguage$frostc$Type$$EQ$org$frostlanguage$frostc$Type$R$frost$core$Bit($tmp1695, $tmp1696);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
// unreffing REF($507:org.frostlanguage.frostc.Type)
*(&local19) = $tmp1697;
goto block45;
block44:;
*(&local19) = $tmp1693;
goto block45;
block45:;
frost$core$Bit $tmp1698 = *(&local19);
bool $tmp1699 = $tmp1698.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1689)));
// unreffing REF($501:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1686)));
// unreffing REF($497:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
if ($tmp1699) goto block41; else goto block42;
block41:;
// line 563
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param2, &$s1700);
goto block42;
block42:;
// line 565
frost$core$Bit $tmp1701 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1702 = $tmp1701.value;
if ($tmp1702) goto block48; else goto block49;
block48:;
org$frostlanguage$frostc$Annotations* $tmp1703 = *(&local3);
frost$core$Bit $tmp1704 = org$frostlanguage$frostc$Scanner$shouldInline$org$frostlanguage$frostc$Annotations$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$R$frost$core$Bit(param0, $tmp1703, ((frost$collections$ListView*) param10));
*(&local20) = $tmp1704;
goto block50;
block49:;
*(&local20) = $tmp1701;
goto block50;
block50:;
frost$core$Bit $tmp1705 = *(&local20);
bool $tmp1706 = $tmp1705.value;
if ($tmp1706) goto block46; else goto block47;
block46:;
// line 566
org$frostlanguage$frostc$Annotations* $tmp1707 = *(&local3);
frost$core$Int64* $tmp1708 = &$tmp1707->flags;
frost$core$Int64 $tmp1709 = *$tmp1708;
frost$core$Int64 $tmp1710 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp1711 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1709, $tmp1710);
frost$core$Int64* $tmp1712 = &$tmp1707->flags;
*$tmp1712 = $tmp1711;
goto block47;
block47:;
// line 568
frost$core$Bit $tmp1713 = frost$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp1714 = $tmp1713.value;
if ($tmp1714) goto block53; else goto block54;
block53:;
org$frostlanguage$frostc$ClassDecl$Kind* $tmp1715 = &param1->classKind;
org$frostlanguage$frostc$ClassDecl$Kind $tmp1716 = *$tmp1715;
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp1717;
$tmp1717 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp1717->value = $tmp1716;
frost$core$Int64 $tmp1718 = (frost$core$Int64) {1};
org$frostlanguage$frostc$ClassDecl$Kind $tmp1719 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp1718);
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp1720;
$tmp1720 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp1720->value = $tmp1719;
ITable* $tmp1721 = ((frost$core$Equatable*) $tmp1717)->$class->itable;
while ($tmp1721->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1721 = $tmp1721->next;
}
$fn1723 $tmp1722 = $tmp1721->methods[0];
frost$core$Bit $tmp1724 = $tmp1722(((frost$core$Equatable*) $tmp1717), ((frost$core$Equatable*) $tmp1720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1720)));
// unreffing REF($563:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1717)));
// unreffing REF($559:frost.core.Equatable<org.frostlanguage.frostc.ClassDecl.Kind>)
*(&local21) = $tmp1724;
goto block55;
block54:;
*(&local21) = $tmp1713;
goto block55;
block55:;
frost$core$Bit $tmp1725 = *(&local21);
bool $tmp1726 = $tmp1725.value;
if ($tmp1726) goto block51; else goto block52;
block51:;
// line 569
org$frostlanguage$frostc$Annotations* $tmp1727 = *(&local3);
frost$core$Int64* $tmp1728 = &$tmp1727->flags;
frost$core$Int64 $tmp1729 = *$tmp1728;
frost$core$Int64 $tmp1730 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1731 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp1729, $tmp1730);
frost$core$Int64 $tmp1732 = (frost$core$Int64) {0};
int64_t $tmp1733 = $tmp1731.value;
int64_t $tmp1734 = $tmp1732.value;
bool $tmp1735 = $tmp1733 != $tmp1734;
frost$core$Bit $tmp1736 = (frost$core$Bit) {$tmp1735};
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block56; else goto block57;
block56:;
// line 570
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param2, &$s1738);
goto block57;
block57:;
// line 573
org$frostlanguage$frostc$Annotations* $tmp1739 = *(&local3);
frost$core$Int64* $tmp1740 = &$tmp1739->flags;
frost$core$Int64 $tmp1741 = *$tmp1740;
frost$core$Int64 $tmp1742 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1743 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1741, $tmp1742);
frost$core$Int64* $tmp1744 = &$tmp1739->flags;
*$tmp1744 = $tmp1743;
goto block52;
block52:;
// line 575
org$frostlanguage$frostc$MethodDecl* $tmp1745 = (org$frostlanguage$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$class);
frost$core$String* $tmp1746 = *(&local0);
org$frostlanguage$frostc$Annotations* $tmp1747 = *(&local3);
frost$collections$Array* $tmp1748 = *(&local6);
frost$collections$Array* $tmp1749 = *(&local14);
org$frostlanguage$frostc$Type* $tmp1750 = *(&local18);
org$frostlanguage$frostc$MethodDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$Parameter$GT$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp1745, param1, param2, $tmp1746, $tmp1747, param5, param6, $tmp1748, $tmp1749, $tmp1750, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
// unreffing REF($605:org.frostlanguage.frostc.MethodDecl)
org$frostlanguage$frostc$Type* $tmp1751 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
// unreffing returnType
*(&local18) = ((org$frostlanguage$frostc$Type*) NULL);
frost$collections$Array* $tmp1752 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
// unreffing parameters
*(&local14) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1753 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
// unreffing generics
*(&local6) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Annotations* $tmp1754 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
// unreffing annotations
*(&local3) = ((org$frostlanguage$frostc$Annotations*) NULL);
frost$core$String* $tmp1755 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
// unreffing doccomment
*(&local0) = ((frost$core$String*) NULL);
return $tmp1745;

}
void org$frostlanguage$frostc$Scanner$scanClassChild$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$Scanner* param0, org$frostlanguage$frostc$ClassDecl* param1, org$frostlanguage$frostc$ASTNode* param2) {

org$frostlanguage$frostc$Position local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
org$frostlanguage$frostc$FixedArray* local2 = NULL;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
org$frostlanguage$frostc$Position local4;
org$frostlanguage$frostc$ASTNode* local5 = NULL;
org$frostlanguage$frostc$FixedArray* local6 = NULL;
org$frostlanguage$frostc$MethodDecl$Kind local7;
frost$core$String* local8 = NULL;
org$frostlanguage$frostc$FixedArray* local9 = NULL;
org$frostlanguage$frostc$FixedArray* local10 = NULL;
org$frostlanguage$frostc$ASTNode* local11 = NULL;
org$frostlanguage$frostc$FixedArray* local12 = NULL;
org$frostlanguage$frostc$MethodDecl* local13 = NULL;
org$frostlanguage$frostc$Position local14;
org$frostlanguage$frostc$ASTNode* local15 = NULL;
org$frostlanguage$frostc$FixedArray* local16 = NULL;
org$frostlanguage$frostc$ClassDecl$Kind local17;
frost$core$String* local18 = NULL;
org$frostlanguage$frostc$FixedArray* local19 = NULL;
org$frostlanguage$frostc$FixedArray* local20 = NULL;
org$frostlanguage$frostc$FixedArray* local21 = NULL;
org$frostlanguage$frostc$ClassDecl* local22 = NULL;
org$frostlanguage$frostc$Position local23;
org$frostlanguage$frostc$ASTNode* local24 = NULL;
frost$core$String* local25 = NULL;
org$frostlanguage$frostc$FixedArray* local26 = NULL;
// line 580
frost$core$Int64* $tmp1756 = &param2->$rawValue;
frost$core$Int64 $tmp1757 = *$tmp1756;
frost$core$Int64 $tmp1758 = (frost$core$Int64) {18};
frost$core$Bit $tmp1759 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1757, $tmp1758);
bool $tmp1760 = $tmp1759.value;
if ($tmp1760) goto block2; else goto block3;
block2:;
org$frostlanguage$frostc$Position* $tmp1761 = (org$frostlanguage$frostc$Position*) (param2->$data + 0);
org$frostlanguage$frostc$Position $tmp1762 = *$tmp1761;
*(&local0) = $tmp1762;
org$frostlanguage$frostc$ASTNode** $tmp1763 = (org$frostlanguage$frostc$ASTNode**) (param2->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp1764 = *$tmp1763;
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
org$frostlanguage$frostc$ASTNode* $tmp1765 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
*(&local1) = $tmp1764;
org$frostlanguage$frostc$FixedArray** $tmp1766 = (org$frostlanguage$frostc$FixedArray**) (param2->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp1767 = *$tmp1766;
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
org$frostlanguage$frostc$FixedArray* $tmp1768 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
*(&local2) = $tmp1767;
org$frostlanguage$frostc$ASTNode** $tmp1769 = (org$frostlanguage$frostc$ASTNode**) (param2->$data + 32);
org$frostlanguage$frostc$ASTNode* $tmp1770 = *$tmp1769;
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
org$frostlanguage$frostc$ASTNode* $tmp1771 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
*(&local3) = $tmp1770;
// line 582
org$frostlanguage$frostc$Position $tmp1772 = *(&local0);
org$frostlanguage$frostc$ASTNode* $tmp1773 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp1774 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp1775 = *(&local3);
org$frostlanguage$frostc$Scanner$scanFields$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode(param0, param1, $tmp1772, $tmp1773, $tmp1774, $tmp1775);
org$frostlanguage$frostc$ASTNode* $tmp1776 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
// unreffing varDecl
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp1777 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
// unreffing annotations
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1778 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
// unreffing dc
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp1779 = (frost$core$Int64) {29};
frost$core$Bit $tmp1780 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1757, $tmp1779);
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block4; else goto block5;
block4:;
org$frostlanguage$frostc$Position* $tmp1782 = (org$frostlanguage$frostc$Position*) (param2->$data + 0);
org$frostlanguage$frostc$Position $tmp1783 = *$tmp1782;
*(&local4) = $tmp1783;
org$frostlanguage$frostc$ASTNode** $tmp1784 = (org$frostlanguage$frostc$ASTNode**) (param2->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp1785 = *$tmp1784;
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1785));
org$frostlanguage$frostc$ASTNode* $tmp1786 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
*(&local5) = $tmp1785;
org$frostlanguage$frostc$FixedArray** $tmp1787 = (org$frostlanguage$frostc$FixedArray**) (param2->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp1788 = *$tmp1787;
*(&local6) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
org$frostlanguage$frostc$FixedArray* $tmp1789 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
*(&local6) = $tmp1788;
org$frostlanguage$frostc$MethodDecl$Kind* $tmp1790 = (org$frostlanguage$frostc$MethodDecl$Kind*) (param2->$data + 32);
org$frostlanguage$frostc$MethodDecl$Kind $tmp1791 = *$tmp1790;
*(&local7) = $tmp1791;
frost$core$String** $tmp1792 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp1793 = *$tmp1792;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
frost$core$String* $tmp1794 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
*(&local8) = $tmp1793;
org$frostlanguage$frostc$FixedArray** $tmp1795 = (org$frostlanguage$frostc$FixedArray**) (param2->$data + 48);
org$frostlanguage$frostc$FixedArray* $tmp1796 = *$tmp1795;
*(&local9) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
org$frostlanguage$frostc$FixedArray* $tmp1797 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
*(&local9) = $tmp1796;
org$frostlanguage$frostc$FixedArray** $tmp1798 = (org$frostlanguage$frostc$FixedArray**) (param2->$data + 56);
org$frostlanguage$frostc$FixedArray* $tmp1799 = *$tmp1798;
*(&local10) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
org$frostlanguage$frostc$FixedArray* $tmp1800 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
*(&local10) = $tmp1799;
org$frostlanguage$frostc$ASTNode** $tmp1801 = (org$frostlanguage$frostc$ASTNode**) (param2->$data + 64);
org$frostlanguage$frostc$ASTNode* $tmp1802 = *$tmp1801;
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
org$frostlanguage$frostc$ASTNode* $tmp1803 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
*(&local11) = $tmp1802;
org$frostlanguage$frostc$FixedArray** $tmp1804 = (org$frostlanguage$frostc$FixedArray**) (param2->$data + 72);
org$frostlanguage$frostc$FixedArray* $tmp1805 = *$tmp1804;
*(&local12) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
org$frostlanguage$frostc$FixedArray* $tmp1806 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
*(&local12) = $tmp1805;
// line 586
org$frostlanguage$frostc$Position $tmp1807 = *(&local4);
org$frostlanguage$frostc$ASTNode* $tmp1808 = *(&local5);
org$frostlanguage$frostc$FixedArray* $tmp1809 = *(&local6);
org$frostlanguage$frostc$MethodDecl$Kind $tmp1810 = *(&local7);
frost$core$String* $tmp1811 = *(&local8);
org$frostlanguage$frostc$FixedArray* $tmp1812 = *(&local9);
org$frostlanguage$frostc$FixedArray* $tmp1813 = *(&local10);
org$frostlanguage$frostc$ASTNode* $tmp1814 = *(&local11);
org$frostlanguage$frostc$FixedArray* $tmp1815 = *(&local12);
org$frostlanguage$frostc$MethodDecl* $tmp1816 = org$frostlanguage$frostc$Scanner$scanMethod$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$R$org$frostlanguage$frostc$MethodDecl$Q(param0, param1, $tmp1807, $tmp1808, $tmp1809, $tmp1810, $tmp1811, $tmp1812, $tmp1813, $tmp1814, $tmp1815);
*(&local13) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
org$frostlanguage$frostc$MethodDecl* $tmp1817 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
*(&local13) = $tmp1816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
// unreffing REF($142:org.frostlanguage.frostc.MethodDecl?)
// line 588
org$frostlanguage$frostc$MethodDecl* $tmp1818 = *(&local13);
frost$core$Bit $tmp1819 = frost$core$Bit$init$builtin_bit($tmp1818 != NULL);
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block6; else goto block7;
block6:;
// line 589
org$frostlanguage$frostc$SymbolTable** $tmp1821 = &param1->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp1822 = *$tmp1821;
org$frostlanguage$frostc$MethodDecl* $tmp1823 = *(&local13);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp1822, ((org$frostlanguage$frostc$Symbol*) $tmp1823));
// line 590
frost$collections$Array** $tmp1824 = &param1->methods;
frost$collections$Array* $tmp1825 = *$tmp1824;
org$frostlanguage$frostc$MethodDecl* $tmp1826 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp1825, ((frost$core$Object*) $tmp1826));
goto block7;
block7:;
org$frostlanguage$frostc$MethodDecl* $tmp1827 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
// unreffing m
*(&local13) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp1828 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
// unreffing statements
*(&local12) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1829 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
// unreffing returnType
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp1830 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
// unreffing parameters
*(&local10) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp1831 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
// unreffing generics
*(&local9) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$String* $tmp1832 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
// unreffing name
*(&local8) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp1833 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
// unreffing annotations
*(&local6) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1834 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
// unreffing dc
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp1835 = (frost$core$Int64) {12};
frost$core$Bit $tmp1836 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1757, $tmp1835);
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block8; else goto block9;
block8:;
org$frostlanguage$frostc$Position* $tmp1838 = (org$frostlanguage$frostc$Position*) (param2->$data + 0);
org$frostlanguage$frostc$Position $tmp1839 = *$tmp1838;
*(&local14) = $tmp1839;
org$frostlanguage$frostc$ASTNode** $tmp1840 = (org$frostlanguage$frostc$ASTNode**) (param2->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp1841 = *$tmp1840;
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
org$frostlanguage$frostc$ASTNode* $tmp1842 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
*(&local15) = $tmp1841;
org$frostlanguage$frostc$FixedArray** $tmp1843 = (org$frostlanguage$frostc$FixedArray**) (param2->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp1844 = *$tmp1843;
*(&local16) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
org$frostlanguage$frostc$FixedArray* $tmp1845 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
*(&local16) = $tmp1844;
org$frostlanguage$frostc$ClassDecl$Kind* $tmp1846 = (org$frostlanguage$frostc$ClassDecl$Kind*) (param2->$data + 32);
org$frostlanguage$frostc$ClassDecl$Kind $tmp1847 = *$tmp1846;
*(&local17) = $tmp1847;
frost$core$String** $tmp1848 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp1849 = *$tmp1848;
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
frost$core$String* $tmp1850 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
*(&local18) = $tmp1849;
org$frostlanguage$frostc$FixedArray** $tmp1851 = (org$frostlanguage$frostc$FixedArray**) (param2->$data + 48);
org$frostlanguage$frostc$FixedArray* $tmp1852 = *$tmp1851;
*(&local19) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
org$frostlanguage$frostc$FixedArray* $tmp1853 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
*(&local19) = $tmp1852;
org$frostlanguage$frostc$FixedArray** $tmp1854 = (org$frostlanguage$frostc$FixedArray**) (param2->$data + 56);
org$frostlanguage$frostc$FixedArray* $tmp1855 = *$tmp1854;
*(&local20) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
org$frostlanguage$frostc$FixedArray* $tmp1856 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
*(&local20) = $tmp1855;
org$frostlanguage$frostc$FixedArray** $tmp1857 = (org$frostlanguage$frostc$FixedArray**) (param2->$data + 64);
org$frostlanguage$frostc$FixedArray* $tmp1858 = *$tmp1857;
*(&local21) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
org$frostlanguage$frostc$FixedArray* $tmp1859 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
*(&local21) = $tmp1858;
// line 595
frost$io$File** $tmp1860 = &param1->source;
frost$io$File* $tmp1861 = *$tmp1860;
frost$collections$MapView** $tmp1862 = &param1->aliases;
frost$collections$MapView* $tmp1863 = *$tmp1862;
frost$core$String** $tmp1864 = &param1->name;
frost$core$String* $tmp1865 = *$tmp1864;
org$frostlanguage$frostc$Position $tmp1866 = *(&local14);
org$frostlanguage$frostc$ASTNode* $tmp1867 = *(&local15);
org$frostlanguage$frostc$FixedArray* $tmp1868 = *(&local16);
org$frostlanguage$frostc$ClassDecl$Kind $tmp1869 = *(&local17);
frost$core$String* $tmp1870 = *(&local18);
org$frostlanguage$frostc$FixedArray* $tmp1871 = *(&local19);
org$frostlanguage$frostc$FixedArray* $tmp1872 = *(&local20);
org$frostlanguage$frostc$FixedArray* $tmp1873 = *(&local21);
org$frostlanguage$frostc$ClassDecl* $tmp1874 = org$frostlanguage$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ClassDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ClassDecl$Q(param0, $tmp1861, $tmp1863, $tmp1865, $tmp1866, $tmp1867, $tmp1868, $tmp1869, $tmp1870, $tmp1871, $tmp1872, $tmp1873);
*(&local22) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
org$frostlanguage$frostc$ClassDecl* $tmp1875 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
*(&local22) = $tmp1874;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
// unreffing REF($294:org.frostlanguage.frostc.ClassDecl?)
// line 597
org$frostlanguage$frostc$ClassDecl* $tmp1876 = *(&local22);
frost$core$Bit $tmp1877 = frost$core$Bit$init$builtin_bit($tmp1876 != NULL);
bool $tmp1878 = $tmp1877.value;
if ($tmp1878) goto block10; else goto block11;
block10:;
// line 598
org$frostlanguage$frostc$ClassDecl* $tmp1879 = *(&local22);
frost$core$Weak* $tmp1880 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp1880, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Weak** $tmp1881 = &$tmp1879->owner;
frost$core$Weak* $tmp1882 = *$tmp1881;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
frost$core$Weak** $tmp1883 = &$tmp1879->owner;
*$tmp1883 = $tmp1880;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
// unreffing REF($315:frost.core.Weak<org.frostlanguage.frostc.ClassDecl?>)
// line 599
frost$collections$Array** $tmp1884 = &param1->classes;
frost$collections$Array* $tmp1885 = *$tmp1884;
org$frostlanguage$frostc$ClassDecl* $tmp1886 = *(&local22);
frost$collections$Array$add$frost$collections$Array$T($tmp1885, ((frost$core$Object*) $tmp1886));
// line 600
org$frostlanguage$frostc$ClassDecl* $tmp1887 = *(&local22);
frost$core$String** $tmp1888 = &$tmp1887->name;
frost$core$String* $tmp1889 = *$tmp1888;
frost$core$String** $tmp1890 = &param1->name;
frost$core$String* $tmp1891 = *$tmp1890;
frost$core$String* $tmp1892 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1891, &$s1893);
frost$core$Bit $tmp1894 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1889, $tmp1892);
bool $tmp1895 = $tmp1894.value;
if ($tmp1895) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1896 = (frost$core$Int64) {600};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1897, $tmp1896);
abort(); // unreachable
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
// unreffing REF($345:frost.core.String)
// line 601
org$frostlanguage$frostc$SymbolTable** $tmp1898 = &param1->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp1899 = *$tmp1898;
org$frostlanguage$frostc$Alias* $tmp1900 = (org$frostlanguage$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlanguage$frostc$Alias$class);
org$frostlanguage$frostc$ClassDecl* $tmp1901 = *(&local22);
frost$core$String** $tmp1902 = &$tmp1901->name;
frost$core$String* $tmp1903 = *$tmp1902;
frost$core$String** $tmp1904 = &param1->name;
frost$core$String* $tmp1905 = *$tmp1904;
frost$core$Int64 $tmp1906 = frost$core$String$get_length$R$frost$core$Int64($tmp1905);
frost$core$Int64 $tmp1907 = (frost$core$Int64) {1};
int64_t $tmp1908 = $tmp1906.value;
int64_t $tmp1909 = $tmp1907.value;
int64_t $tmp1910 = $tmp1908 + $tmp1909;
frost$core$Int64 $tmp1911 = (frost$core$Int64) {$tmp1910};
frost$core$Bit $tmp1912 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1913 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1911, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1912);
frost$core$String* $tmp1914 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1903, $tmp1913);
org$frostlanguage$frostc$ClassDecl* $tmp1915 = *(&local22);
frost$core$String** $tmp1916 = &$tmp1915->name;
frost$core$String* $tmp1917 = *$tmp1916;
org$frostlanguage$frostc$Position $tmp1918 = org$frostlanguage$frostc$Position$init();
org$frostlanguage$frostc$Alias$init$frost$core$String$frost$core$String$org$frostlanguage$frostc$Position($tmp1900, $tmp1914, $tmp1917, $tmp1918);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp1899, ((org$frostlanguage$frostc$Symbol*) $tmp1900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
// unreffing REF($374:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
// unreffing REF($358:org.frostlanguage.frostc.Alias)
// line 603
org$frostlanguage$frostc$ClassDecl* $tmp1919 = *(&local22);
org$frostlanguage$frostc$SymbolTable** $tmp1920 = &$tmp1919->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp1921 = *$tmp1920;
org$frostlanguage$frostc$Alias* $tmp1922 = (org$frostlanguage$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlanguage$frostc$Alias$class);
frost$core$String* $tmp1923 = org$frostlanguage$frostc$ClassDecl$simpleName$R$frost$core$String(param1);
frost$core$String** $tmp1924 = &param1->name;
frost$core$String* $tmp1925 = *$tmp1924;
org$frostlanguage$frostc$Position $tmp1926 = org$frostlanguage$frostc$Position$init();
org$frostlanguage$frostc$Alias$init$frost$core$String$frost$core$String$org$frostlanguage$frostc$Position($tmp1922, $tmp1923, $tmp1925, $tmp1926);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp1921, ((org$frostlanguage$frostc$Symbol*) $tmp1922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
// unreffing REF($395:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
// unreffing REF($394:org.frostlanguage.frostc.Alias)
goto block11;
block11:;
org$frostlanguage$frostc$ClassDecl* $tmp1927 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
// unreffing inner
*(&local22) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp1928 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
// unreffing members
*(&local21) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp1929 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
// unreffing supertypes
*(&local20) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp1930 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
// unreffing generics
*(&local19) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$String* $tmp1931 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
// unreffing name
*(&local18) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp1932 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
// unreffing annotations
*(&local16) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1933 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
// unreffing dc
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp1934 = (frost$core$Int64) {10};
frost$core$Bit $tmp1935 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1757, $tmp1934);
bool $tmp1936 = $tmp1935.value;
if ($tmp1936) goto block14; else goto block15;
block14:;
org$frostlanguage$frostc$Position* $tmp1937 = (org$frostlanguage$frostc$Position*) (param2->$data + 0);
org$frostlanguage$frostc$Position $tmp1938 = *$tmp1937;
*(&local23) = $tmp1938;
org$frostlanguage$frostc$ASTNode** $tmp1939 = (org$frostlanguage$frostc$ASTNode**) (param2->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp1940 = *$tmp1939;
*(&local24) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
org$frostlanguage$frostc$ASTNode* $tmp1941 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
*(&local24) = $tmp1940;
frost$core$String** $tmp1942 = (frost$core$String**) (param2->$data + 24);
frost$core$String* $tmp1943 = *$tmp1942;
*(&local25) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
frost$core$String* $tmp1944 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
*(&local25) = $tmp1943;
org$frostlanguage$frostc$FixedArray** $tmp1945 = (org$frostlanguage$frostc$FixedArray**) (param2->$data + 32);
org$frostlanguage$frostc$FixedArray* $tmp1946 = *$tmp1945;
*(&local26) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
org$frostlanguage$frostc$FixedArray* $tmp1947 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
*(&local26) = $tmp1946;
// line 607
org$frostlanguage$frostc$Position $tmp1948 = *(&local23);
org$frostlanguage$frostc$ASTNode* $tmp1949 = *(&local24);
frost$core$String* $tmp1950 = *(&local25);
org$frostlanguage$frostc$FixedArray* $tmp1951 = *(&local26);
org$frostlanguage$frostc$Scanner$scanChoiceCase$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0, param1, $tmp1948, $tmp1949, $tmp1950, $tmp1951);
org$frostlanguage$frostc$FixedArray* $tmp1952 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
// unreffing fields
*(&local26) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$String* $tmp1953 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
// unreffing name
*(&local25) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1954 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
// unreffing dc
*(&local24) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block1;
block15:;
// line 610
frost$core$Bit $tmp1955 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1956 = $tmp1955.value;
if ($tmp1956) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp1957 = (frost$core$Int64) {610};
frost$core$String* $tmp1958 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1959, ((frost$core$Object*) param2));
frost$core$String* $tmp1960 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1958, &$s1961);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1962, $tmp1957, $tmp1960);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
// unreffing REF($508:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
// unreffing REF($507:frost.core.String)
abort(); // unreachable
block16:;
goto block1;
block1:;
return;

}
void org$frostlanguage$frostc$Scanner$scanChoiceCase$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$Scanner* param0, org$frostlanguage$frostc$ClassDecl* param1, org$frostlanguage$frostc$Position param2, org$frostlanguage$frostc$ASTNode* param3, frost$core$String* param4, org$frostlanguage$frostc$FixedArray* param5) {

frost$core$String* local0 = NULL;
org$frostlanguage$frostc$Position local1;
frost$core$String* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlanguage$frostc$ASTNode* local4 = NULL;
org$frostlanguage$frostc$ChoiceCase* local5 = NULL;
// line 617
*(&local0) = ((frost$core$String*) NULL);
// line 619
frost$core$Bit $tmp1963 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1964 = $tmp1963.value;
if ($tmp1964) goto block1; else goto block3;
block1:;
// line 620
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp1965 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 623
frost$core$Int64* $tmp1966 = &param3->$rawValue;
frost$core$Int64 $tmp1967 = *$tmp1966;
frost$core$Int64 $tmp1968 = (frost$core$Int64) {41};
frost$core$Bit $tmp1969 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1967, $tmp1968);
bool $tmp1970 = $tmp1969.value;
if ($tmp1970) goto block5; else goto block6;
block5:;
org$frostlanguage$frostc$Position* $tmp1971 = (org$frostlanguage$frostc$Position*) (param3->$data + 0);
org$frostlanguage$frostc$Position $tmp1972 = *$tmp1971;
*(&local1) = $tmp1972;
frost$core$String** $tmp1973 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1974 = *$tmp1973;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
frost$core$String* $tmp1975 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
*(&local2) = $tmp1974;
// line 625
frost$core$String* $tmp1976 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
frost$core$String* $tmp1977 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
*(&local0) = $tmp1976;
frost$core$String* $tmp1978 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 628
frost$core$Bit $tmp1979 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1980 = $tmp1979.value;
if ($tmp1980) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp1981 = (frost$core$Int64) {628};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1982, $tmp1981);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 632
frost$collections$Array* $tmp1983 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1983);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
frost$collections$Array* $tmp1984 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
*(&local3) = $tmp1983;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
// unreffing REF($61:frost.collections.Array<org.frostlanguage.frostc.Type>)
// line 633
ITable* $tmp1985 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp1985->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1985 = $tmp1985->next;
}
$fn1987 $tmp1986 = $tmp1985->methods[0];
frost$collections$Iterator* $tmp1988 = $tmp1986(((frost$collections$Iterable*) param5));
goto block9;
block9:;
ITable* $tmp1989 = $tmp1988->$class->itable;
while ($tmp1989->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1989 = $tmp1989->next;
}
$fn1991 $tmp1990 = $tmp1989->methods[0];
frost$core$Bit $tmp1992 = $tmp1990($tmp1988);
bool $tmp1993 = $tmp1992.value;
if ($tmp1993) goto block11; else goto block10;
block10:;
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp1994 = $tmp1988->$class->itable;
while ($tmp1994->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1994 = $tmp1994->next;
}
$fn1996 $tmp1995 = $tmp1994->methods[1];
frost$core$Object* $tmp1997 = $tmp1995($tmp1988);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp1997)));
org$frostlanguage$frostc$ASTNode* $tmp1998 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) $tmp1997);
// line 634
frost$collections$Array* $tmp1999 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp2000 = *(&local4);
org$frostlanguage$frostc$Type* $tmp2001 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(param0, $tmp2000);
frost$collections$Array$add$frost$collections$Array$T($tmp1999, ((frost$core$Object*) $tmp2001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
// unreffing REF($101:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1997);
// unreffing REF($89:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp2002 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
// unreffing t
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
// unreffing REF($78:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 636
org$frostlanguage$frostc$ChoiceCase* $tmp2003 = (org$frostlanguage$frostc$ChoiceCase*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ChoiceCase$class);
frost$core$String* $tmp2004 = *(&local0);
frost$collections$Array** $tmp2005 = &param1->choiceCases;
frost$collections$Array* $tmp2006 = *$tmp2005;
ITable* $tmp2007 = ((frost$collections$CollectionView*) $tmp2006)->$class->itable;
while ($tmp2007->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2007 = $tmp2007->next;
}
$fn2009 $tmp2008 = $tmp2007->methods[0];
frost$core$Int64 $tmp2010 = $tmp2008(((frost$collections$CollectionView*) $tmp2006));
frost$collections$Array* $tmp2011 = *(&local3);
org$frostlanguage$frostc$ChoiceCase$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int64$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT($tmp2003, param1, param2, param4, $tmp2004, $tmp2010, ((frost$collections$ListView*) $tmp2011));
*(&local5) = ((org$frostlanguage$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
org$frostlanguage$frostc$ChoiceCase* $tmp2012 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
*(&local5) = $tmp2003;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
// unreffing REF($120:org.frostlanguage.frostc.ChoiceCase)
// line 638
frost$collections$Array** $tmp2013 = &param1->choiceCases;
frost$collections$Array* $tmp2014 = *$tmp2013;
org$frostlanguage$frostc$ChoiceCase* $tmp2015 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2014, ((frost$core$Object*) $tmp2015));
// line 639
org$frostlanguage$frostc$SymbolTable** $tmp2016 = &param1->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp2017 = *$tmp2016;
org$frostlanguage$frostc$ChoiceCase* $tmp2018 = *(&local5);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp2017, ((org$frostlanguage$frostc$Symbol*) $tmp2018));
org$frostlanguage$frostc$ChoiceCase* $tmp2019 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
// unreffing entry
*(&local5) = ((org$frostlanguage$frostc$ChoiceCase*) NULL);
frost$collections$Array* $tmp2020 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
// unreffing fields
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2021 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
// unreffing doccomment
*(&local0) = ((frost$core$String*) NULL);
return;

}
org$frostlanguage$frostc$ClassDecl* org$frostlanguage$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ClassDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ClassDecl$Q(org$frostlanguage$frostc$Scanner* param0, frost$io$File* param1, frost$collections$MapView* param2, frost$core$String* param3, org$frostlanguage$frostc$Position param4, org$frostlanguage$frostc$ASTNode* param5, org$frostlanguage$frostc$FixedArray* param6, org$frostlanguage$frostc$ClassDecl$Kind param7, frost$core$String* param8, org$frostlanguage$frostc$FixedArray* param9, org$frostlanguage$frostc$FixedArray* param10, org$frostlanguage$frostc$FixedArray* param11) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlanguage$frostc$Position local2;
frost$core$String* local3 = NULL;
org$frostlanguage$frostc$Annotations* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlanguage$frostc$ASTNode* local6 = NULL;
frost$core$String* local7 = NULL;
org$frostlanguage$frostc$Type* local8 = NULL;
frost$core$String* local9 = NULL;
frost$core$String* local10 = NULL;
org$frostlanguage$frostc$ASTNode* local11 = NULL;
frost$collections$Array* local12 = NULL;
org$frostlanguage$frostc$ASTNode* local13 = NULL;
org$frostlanguage$frostc$ClassDecl* local14 = NULL;
org$frostlanguage$frostc$FieldDecl* local15 = NULL;
org$frostlanguage$frostc$FieldDecl* local16 = NULL;
org$frostlanguage$frostc$ASTNode* local17 = NULL;
org$frostlanguage$frostc$Position local18;
org$frostlanguage$frostc$MethodDecl$Kind local19;
frost$core$Bit local20;
frost$core$Bit local21;
org$frostlanguage$frostc$MethodDecl* local22 = NULL;
frost$core$Bit local23;
frost$core$Bit local24;
frost$core$Bit local25;
org$frostlanguage$frostc$MethodDecl* local26 = NULL;
frost$core$Bit local27;
frost$core$Bit local28;
frost$core$Bit local29;
org$frostlanguage$frostc$MethodDecl* local30 = NULL;
frost$core$Bit local31;
org$frostlanguage$frostc$ChoiceCase* local32 = NULL;
// line 646
*(&local0) = ((frost$core$String*) NULL);
// line 647
ITable* $tmp2023 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2023->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2023 = $tmp2023->next;
}
$fn2025 $tmp2024 = $tmp2023->methods[1];
frost$core$Bit $tmp2026 = $tmp2024(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2022));
bool $tmp2027 = $tmp2026.value;
if ($tmp2027) goto block1; else goto block3;
block1:;
// line 648
frost$core$String* $tmp2028 = frost$core$String$convert$R$frost$core$String(param3);
frost$core$String* $tmp2029 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2028, &$s2030);
frost$core$String* $tmp2031 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2029, param8);
frost$core$String* $tmp2032 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2031, &$s2033);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
frost$core$String* $tmp2034 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
*(&local0) = $tmp2032;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
// unreffing REF($11:frost.core.String)
goto block2;
block3:;
// line 1
// line 651
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$core$String* $tmp2035 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
*(&local0) = param8;
goto block2;
block2:;
// line 653
*(&local1) = ((frost$core$String*) NULL);
// line 655
frost$core$Bit $tmp2036 = frost$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block4; else goto block6;
block4:;
// line 656
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2038 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block6:;
// line 1
// line 659
frost$core$Int64* $tmp2039 = &param5->$rawValue;
frost$core$Int64 $tmp2040 = *$tmp2039;
frost$core$Int64 $tmp2041 = (frost$core$Int64) {41};
frost$core$Bit $tmp2042 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2040, $tmp2041);
bool $tmp2043 = $tmp2042.value;
if ($tmp2043) goto block8; else goto block9;
block8:;
org$frostlanguage$frostc$Position* $tmp2044 = (org$frostlanguage$frostc$Position*) (param5->$data + 0);
org$frostlanguage$frostc$Position $tmp2045 = *$tmp2044;
*(&local2) = $tmp2045;
frost$core$String** $tmp2046 = (frost$core$String**) (param5->$data + 16);
frost$core$String* $tmp2047 = *$tmp2046;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
frost$core$String* $tmp2048 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
*(&local3) = $tmp2047;
// line 661
frost$core$String* $tmp2049 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
frost$core$String* $tmp2050 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
*(&local1) = $tmp2049;
frost$core$String* $tmp2051 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
// unreffing text
*(&local3) = ((frost$core$String*) NULL);
goto block7;
block9:;
// line 664
frost$core$Bit $tmp2052 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2053 = $tmp2052.value;
if ($tmp2053) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2054 = (frost$core$Int64) {664};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2055, $tmp2054);
abort(); // unreachable
block10:;
goto block7;
block7:;
goto block5;
block5:;
// line 668
org$frostlanguage$frostc$Annotations* $tmp2056 = org$frostlanguage$frostc$Scanner$convertAnnotations$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$Annotations(param0, param6);
*(&local4) = ((org$frostlanguage$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2056));
org$frostlanguage$frostc$Annotations* $tmp2057 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
*(&local4) = $tmp2056;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2056));
// unreffing REF($104:org.frostlanguage.frostc.Annotations)
// line 669
frost$collections$Array* $tmp2058 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2058);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
frost$collections$Array* $tmp2059 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
*(&local5) = $tmp2058;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
// unreffing REF($116:frost.collections.Array<org.frostlanguage.frostc.ClassDecl.GenericParameter>)
// line 670
frost$core$Bit $tmp2060 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2061 = $tmp2060.value;
if ($tmp2061) goto block12; else goto block13;
block12:;
// line 671
ITable* $tmp2062 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp2062->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2062 = $tmp2062->next;
}
$fn2064 $tmp2063 = $tmp2062->methods[0];
frost$collections$Iterator* $tmp2065 = $tmp2063(((frost$collections$Iterable*) param9));
goto block14;
block14:;
ITable* $tmp2066 = $tmp2065->$class->itable;
while ($tmp2066->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2066 = $tmp2066->next;
}
$fn2068 $tmp2067 = $tmp2066->methods[0];
frost$core$Bit $tmp2069 = $tmp2067($tmp2065);
bool $tmp2070 = $tmp2069.value;
if ($tmp2070) goto block16; else goto block15;
block15:;
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp2071 = $tmp2065->$class->itable;
while ($tmp2071->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2071 = $tmp2071->next;
}
$fn2073 $tmp2072 = $tmp2071->methods[1];
frost$core$Object* $tmp2074 = $tmp2072($tmp2065);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp2074)));
org$frostlanguage$frostc$ASTNode* $tmp2075 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) $tmp2074);
// line 672
*(&local7) = ((frost$core$String*) NULL);
// line 673
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
// line 674
org$frostlanguage$frostc$ASTNode* $tmp2076 = *(&local6);
frost$core$Int64* $tmp2077 = &$tmp2076->$rawValue;
frost$core$Int64 $tmp2078 = *$tmp2077;
frost$core$Int64 $tmp2079 = (frost$core$Int64) {22};
frost$core$Bit $tmp2080 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2078, $tmp2079);
bool $tmp2081 = $tmp2080.value;
if ($tmp2081) goto block18; else goto block19;
block18:;
org$frostlanguage$frostc$Position* $tmp2082 = (org$frostlanguage$frostc$Position*) ($tmp2076->$data + 0);
org$frostlanguage$frostc$Position $tmp2083 = *$tmp2082;
frost$core$String** $tmp2084 = (frost$core$String**) ($tmp2076->$data + 16);
frost$core$String* $tmp2085 = *$tmp2084;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
frost$core$String* $tmp2086 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
*(&local9) = $tmp2085;
// line 676
frost$core$String* $tmp2087 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
frost$core$String* $tmp2088 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
*(&local7) = $tmp2087;
// line 677
org$frostlanguage$frostc$Type* $tmp2089 = org$frostlanguage$frostc$Type$Any$R$org$frostlanguage$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2089));
org$frostlanguage$frostc$Type* $tmp2090 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
*(&local8) = $tmp2089;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2089));
// unreffing REF($189:org.frostlanguage.frostc.Type)
frost$core$String* $tmp2091 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
// unreffing id
*(&local9) = ((frost$core$String*) NULL);
goto block17;
block19:;
frost$core$Int64 $tmp2092 = (frost$core$Int64) {47};
frost$core$Bit $tmp2093 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2078, $tmp2092);
bool $tmp2094 = $tmp2093.value;
if ($tmp2094) goto block20; else goto block21;
block20:;
org$frostlanguage$frostc$Position* $tmp2095 = (org$frostlanguage$frostc$Position*) ($tmp2076->$data + 0);
org$frostlanguage$frostc$Position $tmp2096 = *$tmp2095;
frost$core$String** $tmp2097 = (frost$core$String**) ($tmp2076->$data + 16);
frost$core$String* $tmp2098 = *$tmp2097;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
frost$core$String* $tmp2099 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
*(&local10) = $tmp2098;
org$frostlanguage$frostc$ASTNode** $tmp2100 = (org$frostlanguage$frostc$ASTNode**) ($tmp2076->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp2101 = *$tmp2100;
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
org$frostlanguage$frostc$ASTNode* $tmp2102 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
*(&local11) = $tmp2101;
// line 680
frost$core$String* $tmp2103 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
frost$core$String* $tmp2104 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
*(&local7) = $tmp2103;
// line 681
org$frostlanguage$frostc$ASTNode* $tmp2105 = *(&local11);
org$frostlanguage$frostc$Type* $tmp2106 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(param0, $tmp2105);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
org$frostlanguage$frostc$Type* $tmp2107 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
*(&local8) = $tmp2106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
// unreffing REF($240:org.frostlanguage.frostc.Type)
org$frostlanguage$frostc$ASTNode* $tmp2108 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
// unreffing type
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp2109 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
// unreffing id
*(&local10) = ((frost$core$String*) NULL);
goto block17;
block21:;
// line 684
frost$core$Bit $tmp2110 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2111 = $tmp2110.value;
if ($tmp2111) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2112 = (frost$core$Int64) {684};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2113, $tmp2112);
abort(); // unreachable
block22:;
goto block17;
block17:;
// line 687
frost$collections$Array* $tmp2114 = *(&local5);
org$frostlanguage$frostc$ClassDecl$GenericParameter* $tmp2115 = (org$frostlanguage$frostc$ClassDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$GenericParameter$class);
org$frostlanguage$frostc$ASTNode* $tmp2116 = *(&local6);
$fn2118 $tmp2117 = ($fn2118) $tmp2116->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp2119 = $tmp2117($tmp2116);
frost$core$String* $tmp2120 = *(&local0);
frost$core$String* $tmp2121 = *(&local7);
org$frostlanguage$frostc$Type* $tmp2122 = *(&local8);
org$frostlanguage$frostc$ClassDecl$GenericParameter$init$org$frostlanguage$frostc$Position$frost$core$String$frost$core$String$org$frostlanguage$frostc$Type($tmp2115, $tmp2119, $tmp2120, $tmp2121, $tmp2122);
frost$collections$Array$add$frost$collections$Array$T($tmp2114, ((frost$core$Object*) $tmp2115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
// unreffing REF($272:org.frostlanguage.frostc.ClassDecl.GenericParameter)
org$frostlanguage$frostc$Type* $tmp2123 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
// unreffing bound
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$String* $tmp2124 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
// unreffing name
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2074);
// unreffing REF($149:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp2125 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
// unreffing p
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
// unreffing REF($138:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block13;
block13:;
// line 690
frost$collections$Array* $tmp2126 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2126);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
frost$collections$Array* $tmp2127 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
*(&local12) = $tmp2126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
// unreffing REF($309:frost.collections.Array<org.frostlanguage.frostc.Type>)
// line 691
frost$core$Bit $tmp2128 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2129 = $tmp2128.value;
if ($tmp2129) goto block24; else goto block25;
block24:;
// line 692
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2130;
$tmp2130 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2130->value = param7;
frost$core$Int64 $tmp2131 = (frost$core$Int64) {2};
org$frostlanguage$frostc$ClassDecl$Kind $tmp2132 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2131);
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2133;
$tmp2133 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2133->value = $tmp2132;
ITable* $tmp2134 = ((frost$core$Equatable*) $tmp2130)->$class->itable;
while ($tmp2134->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2134 = $tmp2134->next;
}
$fn2136 $tmp2135 = $tmp2134->methods[0];
frost$core$Bit $tmp2137 = $tmp2135(((frost$core$Equatable*) $tmp2130), ((frost$core$Equatable*) $tmp2133));
bool $tmp2138 = $tmp2137.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2133)));
// unreffing REF($332:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2130)));
// unreffing REF($328:frost.core.Equatable<org.frostlanguage.frostc.ClassDecl.Kind>)
if ($tmp2138) goto block26; else goto block27;
block26:;
// line 693
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param4, &$s2139);
goto block27;
block27:;
// line 695
ITable* $tmp2140 = ((frost$collections$Iterable*) param10)->$class->itable;
while ($tmp2140->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2140 = $tmp2140->next;
}
$fn2142 $tmp2141 = $tmp2140->methods[0];
frost$collections$Iterator* $tmp2143 = $tmp2141(((frost$collections$Iterable*) param10));
goto block28;
block28:;
ITable* $tmp2144 = $tmp2143->$class->itable;
while ($tmp2144->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2144 = $tmp2144->next;
}
$fn2146 $tmp2145 = $tmp2144->methods[0];
frost$core$Bit $tmp2147 = $tmp2145($tmp2143);
bool $tmp2148 = $tmp2147.value;
if ($tmp2148) goto block30; else goto block29;
block29:;
*(&local13) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp2149 = $tmp2143->$class->itable;
while ($tmp2149->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2149 = $tmp2149->next;
}
$fn2151 $tmp2150 = $tmp2149->methods[1];
frost$core$Object* $tmp2152 = $tmp2150($tmp2143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp2152)));
org$frostlanguage$frostc$ASTNode* $tmp2153 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
*(&local13) = ((org$frostlanguage$frostc$ASTNode*) $tmp2152);
// line 696
frost$collections$Array* $tmp2154 = *(&local12);
org$frostlanguage$frostc$ASTNode* $tmp2155 = *(&local13);
org$frostlanguage$frostc$Type* $tmp2156 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(param0, $tmp2155);
frost$collections$Array$add$frost$collections$Array$T($tmp2154, ((frost$core$Object*) $tmp2156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
// unreffing REF($373:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2152);
// unreffing REF($361:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp2157 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
// unreffing s
*(&local13) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block28;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
// unreffing REF($350:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block25;
block25:;
// line 699
org$frostlanguage$frostc$ClassDecl* $tmp2158 = (org$frostlanguage$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$class);
frost$core$String* $tmp2159 = *(&local1);
org$frostlanguage$frostc$Annotations* $tmp2160 = *(&local4);
frost$core$String* $tmp2161 = *(&local0);
frost$collections$Array* $tmp2162 = *(&local12);
frost$collections$Array* $tmp2163 = *(&local5);
frost$core$Weak** $tmp2164 = &param0->compiler;
frost$core$Weak* $tmp2165 = *$tmp2164;
frost$core$Object* $tmp2166 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2165);
org$frostlanguage$frostc$SymbolTable** $tmp2167 = &((org$frostlanguage$frostc$Compiler*) $tmp2166)->root;
org$frostlanguage$frostc$SymbolTable* $tmp2168 = *$tmp2167;
org$frostlanguage$frostc$ClassDecl$init$frost$io$File$org$frostlanguage$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$frost$collections$Array$LTorg$frostlanguage$frostc$ClassDecl$GenericParameter$GT$org$frostlanguage$frostc$SymbolTable($tmp2158, param1, param4, param2, $tmp2159, $tmp2160, param7, $tmp2161, ((frost$collections$ListView*) $tmp2162), $tmp2163, $tmp2168);
*(&local14) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
org$frostlanguage$frostc$ClassDecl* $tmp2169 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
*(&local14) = $tmp2158;
frost$core$Frost$unref$frost$core$Object$Q($tmp2166);
// unreffing REF($403:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
// unreffing REF($393:org.frostlanguage.frostc.ClassDecl)
// line 701
frost$core$Weak** $tmp2170 = &param0->compiler;
frost$core$Weak* $tmp2171 = *$tmp2170;
frost$core$Object* $tmp2172 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2171);
frost$collections$Stack** $tmp2173 = &((org$frostlanguage$frostc$Compiler*) $tmp2172)->currentClass;
frost$collections$Stack* $tmp2174 = *$tmp2173;
org$frostlanguage$frostc$ClassDecl* $tmp2175 = *(&local14);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2174, ((frost$core$Object*) $tmp2175));
frost$core$Frost$unref$frost$core$Object$Q($tmp2172);
// unreffing REF($425:frost.core.Weak.T)
// line 702
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2176;
$tmp2176 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2176->value = param7;
frost$core$Int64 $tmp2177 = (frost$core$Int64) {2};
org$frostlanguage$frostc$ClassDecl$Kind $tmp2178 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2177);
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2179;
$tmp2179 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2179->value = $tmp2178;
ITable* $tmp2180 = ((frost$core$Equatable*) $tmp2176)->$class->itable;
while ($tmp2180->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2180 = $tmp2180->next;
}
$fn2182 $tmp2181 = $tmp2180->methods[0];
frost$core$Bit $tmp2183 = $tmp2181(((frost$core$Equatable*) $tmp2176), ((frost$core$Equatable*) $tmp2179));
bool $tmp2184 = $tmp2183.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2179)));
// unreffing REF($441:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2176)));
// unreffing REF($437:frost.core.Equatable<org.frostlanguage.frostc.ClassDecl.Kind>)
if ($tmp2184) goto block31; else goto block32;
block31:;
// line 703
org$frostlanguage$frostc$FieldDecl* $tmp2185 = (org$frostlanguage$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlanguage$frostc$FieldDecl$class);
org$frostlanguage$frostc$ClassDecl* $tmp2186 = *(&local14);
org$frostlanguage$frostc$ClassDecl* $tmp2187 = *(&local14);
org$frostlanguage$frostc$Position* $tmp2188 = &$tmp2187->position;
org$frostlanguage$frostc$Position $tmp2189 = *$tmp2188;
org$frostlanguage$frostc$Annotations* $tmp2190 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp2191 = (frost$core$Int64) {8192};
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp2190, $tmp2191);
frost$core$Int64 $tmp2192 = (frost$core$Int64) {1};
org$frostlanguage$frostc$FieldDecl$Kind $tmp2193 = org$frostlanguage$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2192);
org$frostlanguage$frostc$Type* $tmp2194 = org$frostlanguage$frostc$Type$Int64$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$FieldDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$FieldDecl$Kind$frost$core$String$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$ASTNode$Q($tmp2185, $tmp2186, $tmp2189, ((frost$core$String*) NULL), $tmp2190, $tmp2193, &$s2195, $tmp2194, ((org$frostlanguage$frostc$ASTNode*) NULL));
*(&local15) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
org$frostlanguage$frostc$FieldDecl* $tmp2196 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
*(&local15) = $tmp2185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
// unreffing REF($463:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
// unreffing REF($458:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
// unreffing REF($453:org.frostlanguage.frostc.FieldDecl)
// line 706
org$frostlanguage$frostc$ClassDecl* $tmp2197 = *(&local14);
frost$collections$Array** $tmp2198 = &$tmp2197->fields;
frost$collections$Array* $tmp2199 = *$tmp2198;
org$frostlanguage$frostc$FieldDecl* $tmp2200 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp2199, ((frost$core$Object*) $tmp2200));
// line 707
org$frostlanguage$frostc$ClassDecl* $tmp2201 = *(&local14);
org$frostlanguage$frostc$SymbolTable** $tmp2202 = &$tmp2201->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp2203 = *$tmp2202;
org$frostlanguage$frostc$FieldDecl* $tmp2204 = *(&local15);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp2203, ((org$frostlanguage$frostc$Symbol*) $tmp2204));
// line 708
org$frostlanguage$frostc$FieldDecl* $tmp2205 = (org$frostlanguage$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlanguage$frostc$FieldDecl$class);
org$frostlanguage$frostc$ClassDecl* $tmp2206 = *(&local14);
org$frostlanguage$frostc$ClassDecl* $tmp2207 = *(&local14);
org$frostlanguage$frostc$Position* $tmp2208 = &$tmp2207->position;
org$frostlanguage$frostc$Position $tmp2209 = *$tmp2208;
org$frostlanguage$frostc$Annotations* $tmp2210 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp2211 = (frost$core$Int64) {8192};
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp2210, $tmp2211);
frost$core$Int64 $tmp2212 = (frost$core$Int64) {1};
org$frostlanguage$frostc$FieldDecl$Kind $tmp2213 = org$frostlanguage$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2212);
org$frostlanguage$frostc$Type* $tmp2214 = org$frostlanguage$frostc$Type$ChoiceData$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$FieldDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$FieldDecl$Kind$frost$core$String$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$ASTNode$Q($tmp2205, $tmp2206, $tmp2209, ((frost$core$String*) NULL), $tmp2210, $tmp2213, &$s2215, $tmp2214, ((org$frostlanguage$frostc$ASTNode*) NULL));
*(&local16) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
org$frostlanguage$frostc$FieldDecl* $tmp2216 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
*(&local16) = $tmp2205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
// unreffing REF($507:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
// unreffing REF($502:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
// unreffing REF($497:org.frostlanguage.frostc.FieldDecl)
// line 711
org$frostlanguage$frostc$ClassDecl* $tmp2217 = *(&local14);
frost$collections$Array** $tmp2218 = &$tmp2217->fields;
frost$collections$Array* $tmp2219 = *$tmp2218;
org$frostlanguage$frostc$FieldDecl* $tmp2220 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp2219, ((frost$core$Object*) $tmp2220));
// line 712
org$frostlanguage$frostc$ClassDecl* $tmp2221 = *(&local14);
org$frostlanguage$frostc$SymbolTable** $tmp2222 = &$tmp2221->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp2223 = *$tmp2222;
org$frostlanguage$frostc$FieldDecl* $tmp2224 = *(&local16);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp2223, ((org$frostlanguage$frostc$Symbol*) $tmp2224));
org$frostlanguage$frostc$FieldDecl* $tmp2225 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
// unreffing data
*(&local16) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
org$frostlanguage$frostc$FieldDecl* $tmp2226 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
// unreffing rawValue
*(&local15) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
goto block32;
block32:;
// line 714
ITable* $tmp2227 = ((frost$collections$Iterable*) param11)->$class->itable;
while ($tmp2227->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2227 = $tmp2227->next;
}
$fn2229 $tmp2228 = $tmp2227->methods[0];
frost$collections$Iterator* $tmp2230 = $tmp2228(((frost$collections$Iterable*) param11));
goto block33;
block33:;
ITable* $tmp2231 = $tmp2230->$class->itable;
while ($tmp2231->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2231 = $tmp2231->next;
}
$fn2233 $tmp2232 = $tmp2231->methods[0];
frost$core$Bit $tmp2234 = $tmp2232($tmp2230);
bool $tmp2235 = $tmp2234.value;
if ($tmp2235) goto block35; else goto block34;
block34:;
*(&local17) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp2236 = $tmp2230->$class->itable;
while ($tmp2236->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2236 = $tmp2236->next;
}
$fn2238 $tmp2237 = $tmp2236->methods[1];
frost$core$Object* $tmp2239 = $tmp2237($tmp2230);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp2239)));
org$frostlanguage$frostc$ASTNode* $tmp2240 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
*(&local17) = ((org$frostlanguage$frostc$ASTNode*) $tmp2239);
// line 715
org$frostlanguage$frostc$ASTNode* $tmp2241 = *(&local17);
frost$core$Int64* $tmp2242 = &$tmp2241->$rawValue;
frost$core$Int64 $tmp2243 = *$tmp2242;
frost$core$Int64 $tmp2244 = (frost$core$Int64) {29};
frost$core$Bit $tmp2245 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2243, $tmp2244);
bool $tmp2246 = $tmp2245.value;
if ($tmp2246) goto block37; else goto block38;
block37:;
org$frostlanguage$frostc$Position* $tmp2247 = (org$frostlanguage$frostc$Position*) ($tmp2241->$data + 0);
org$frostlanguage$frostc$Position $tmp2248 = *$tmp2247;
*(&local18) = $tmp2248;
org$frostlanguage$frostc$ASTNode** $tmp2249 = (org$frostlanguage$frostc$ASTNode**) ($tmp2241->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp2250 = *$tmp2249;
org$frostlanguage$frostc$FixedArray** $tmp2251 = (org$frostlanguage$frostc$FixedArray**) ($tmp2241->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp2252 = *$tmp2251;
org$frostlanguage$frostc$MethodDecl$Kind* $tmp2253 = (org$frostlanguage$frostc$MethodDecl$Kind*) ($tmp2241->$data + 32);
org$frostlanguage$frostc$MethodDecl$Kind $tmp2254 = *$tmp2253;
*(&local19) = $tmp2254;
frost$core$String** $tmp2255 = (frost$core$String**) ($tmp2241->$data + 40);
frost$core$String* $tmp2256 = *$tmp2255;
org$frostlanguage$frostc$FixedArray** $tmp2257 = (org$frostlanguage$frostc$FixedArray**) ($tmp2241->$data + 48);
org$frostlanguage$frostc$FixedArray* $tmp2258 = *$tmp2257;
org$frostlanguage$frostc$FixedArray** $tmp2259 = (org$frostlanguage$frostc$FixedArray**) ($tmp2241->$data + 56);
org$frostlanguage$frostc$FixedArray* $tmp2260 = *$tmp2259;
org$frostlanguage$frostc$ASTNode** $tmp2261 = (org$frostlanguage$frostc$ASTNode**) ($tmp2241->$data + 64);
org$frostlanguage$frostc$ASTNode* $tmp2262 = *$tmp2261;
org$frostlanguage$frostc$FixedArray** $tmp2263 = (org$frostlanguage$frostc$FixedArray**) ($tmp2241->$data + 72);
org$frostlanguage$frostc$FixedArray* $tmp2264 = *$tmp2263;
// line 717
org$frostlanguage$frostc$MethodDecl$Kind $tmp2265 = *(&local19);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp2266;
$tmp2266 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp2266->value = $tmp2265;
frost$core$Int64 $tmp2267 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp2268 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2267);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp2269;
$tmp2269 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp2269->value = $tmp2268;
ITable* $tmp2270 = ((frost$core$Equatable*) $tmp2266)->$class->itable;
while ($tmp2270->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2270 = $tmp2270->next;
}
$fn2272 $tmp2271 = $tmp2270->methods[0];
frost$core$Bit $tmp2273 = $tmp2271(((frost$core$Equatable*) $tmp2266), ((frost$core$Equatable*) $tmp2269));
bool $tmp2274 = $tmp2273.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2269)));
// unreffing REF($608:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2266)));
// unreffing REF($604:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
if ($tmp2274) goto block39; else goto block40;
block39:;
// line 718
frost$core$Int64 $tmp2275 = param7.$rawValue;
frost$core$Int64 $tmp2276 = (frost$core$Int64) {0};
frost$core$Bit $tmp2277 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2275, $tmp2276);
bool $tmp2278 = $tmp2277.value;
if ($tmp2278) goto block42; else goto block43;
block42:;
goto block41;
block43:;
frost$core$Int64 $tmp2279 = (frost$core$Int64) {1};
frost$core$Bit $tmp2280 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2275, $tmp2279);
bool $tmp2281 = $tmp2280.value;
if ($tmp2281) goto block44; else goto block45;
block44:;
// line 723
org$frostlanguage$frostc$Position $tmp2282 = *(&local18);
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp2282, &$s2283);
goto block41;
block45:;
frost$core$Int64 $tmp2284 = (frost$core$Int64) {2};
frost$core$Bit $tmp2285 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2275, $tmp2284);
bool $tmp2286 = $tmp2285.value;
if ($tmp2286) goto block46; else goto block41;
block46:;
// line 726
org$frostlanguage$frostc$Position $tmp2287 = *(&local18);
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp2287, &$s2288);
goto block41;
block41:;
goto block40;
block40:;
goto block36;
block38:;
goto block36;
block36:;
// line 735
org$frostlanguage$frostc$ClassDecl* $tmp2289 = *(&local14);
org$frostlanguage$frostc$ASTNode* $tmp2290 = *(&local17);
org$frostlanguage$frostc$Scanner$scanClassChild$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$ASTNode(param0, $tmp2289, $tmp2290);
frost$core$Frost$unref$frost$core$Object$Q($tmp2239);
// unreffing REF($566:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp2291 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
// unreffing m
*(&local17) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block33;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
// unreffing REF($555:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 737
frost$core$Bit $tmp2292 = frost$core$Bit$init$builtin_bit(false);
*(&local20) = $tmp2292;
// line 738
frost$core$Bit $tmp2293 = frost$core$Bit$init$builtin_bit(false);
*(&local21) = $tmp2293;
// line 739
org$frostlanguage$frostc$ClassDecl* $tmp2294 = *(&local14);
frost$collections$Array** $tmp2295 = &$tmp2294->methods;
frost$collections$Array* $tmp2296 = *$tmp2295;
ITable* $tmp2297 = ((frost$collections$Iterable*) $tmp2296)->$class->itable;
while ($tmp2297->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2297 = $tmp2297->next;
}
$fn2299 $tmp2298 = $tmp2297->methods[0];
frost$collections$Iterator* $tmp2300 = $tmp2298(((frost$collections$Iterable*) $tmp2296));
goto block47;
block47:;
ITable* $tmp2301 = $tmp2300->$class->itable;
while ($tmp2301->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2301 = $tmp2301->next;
}
$fn2303 $tmp2302 = $tmp2301->methods[0];
frost$core$Bit $tmp2304 = $tmp2302($tmp2300);
bool $tmp2305 = $tmp2304.value;
if ($tmp2305) goto block49; else goto block48;
block48:;
*(&local22) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
ITable* $tmp2306 = $tmp2300->$class->itable;
while ($tmp2306->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2306 = $tmp2306->next;
}
$fn2308 $tmp2307 = $tmp2306->methods[1];
frost$core$Object* $tmp2309 = $tmp2307($tmp2300);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl*) $tmp2309)));
org$frostlanguage$frostc$MethodDecl* $tmp2310 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
*(&local22) = ((org$frostlanguage$frostc$MethodDecl*) $tmp2309);
// line 740
org$frostlanguage$frostc$MethodDecl* $tmp2311 = *(&local22);
org$frostlanguage$frostc$MethodDecl$Kind* $tmp2312 = &$tmp2311->methodKind;
org$frostlanguage$frostc$MethodDecl$Kind $tmp2313 = *$tmp2312;
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp2314;
$tmp2314 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp2314->value = $tmp2313;
frost$core$Int64 $tmp2315 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp2316 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2315);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp2317;
$tmp2317 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp2317->value = $tmp2316;
ITable* $tmp2318 = ((frost$core$Equatable*) $tmp2314)->$class->itable;
while ($tmp2318->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2318 = $tmp2318->next;
}
$fn2320 $tmp2319 = $tmp2318->methods[0];
frost$core$Bit $tmp2321 = $tmp2319(((frost$core$Equatable*) $tmp2314), ((frost$core$Equatable*) $tmp2317));
bool $tmp2322 = $tmp2321.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2317)));
// unreffing REF($701:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2314)));
// unreffing REF($697:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
if ($tmp2322) goto block50; else goto block51;
block50:;
// line 741
frost$core$Bit $tmp2323 = frost$core$Bit$init$builtin_bit(true);
*(&local20) = $tmp2323;
goto block51;
block51:;
// line 743
org$frostlanguage$frostc$MethodDecl* $tmp2324 = *(&local22);
frost$core$String** $tmp2325 = &((org$frostlanguage$frostc$Symbol*) $tmp2324)->name;
frost$core$String* $tmp2326 = *$tmp2325;
frost$core$Bit $tmp2327 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2326, &$s2328);
bool $tmp2329 = $tmp2327.value;
if ($tmp2329) goto block54; else goto block55;
block54:;
org$frostlanguage$frostc$MethodDecl* $tmp2330 = *(&local22);
frost$collections$Array** $tmp2331 = &$tmp2330->parameters;
frost$collections$Array* $tmp2332 = *$tmp2331;
ITable* $tmp2333 = ((frost$collections$CollectionView*) $tmp2332)->$class->itable;
while ($tmp2333->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2333 = $tmp2333->next;
}
$fn2335 $tmp2334 = $tmp2333->methods[0];
frost$core$Int64 $tmp2336 = $tmp2334(((frost$collections$CollectionView*) $tmp2332));
frost$core$Int64 $tmp2337 = (frost$core$Int64) {0};
frost$core$Bit $tmp2338 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2336, $tmp2337);
*(&local23) = $tmp2338;
goto block56;
block55:;
*(&local23) = $tmp2327;
goto block56;
block56:;
frost$core$Bit $tmp2339 = *(&local23);
bool $tmp2340 = $tmp2339.value;
if ($tmp2340) goto block52; else goto block53;
block52:;
// line 744
frost$core$Bit $tmp2341 = frost$core$Bit$init$builtin_bit(true);
*(&local21) = $tmp2341;
// line 745
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2342;
$tmp2342 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2342->value = param7;
frost$core$Int64 $tmp2343 = (frost$core$Int64) {2};
org$frostlanguage$frostc$ClassDecl$Kind $tmp2344 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2343);
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2345;
$tmp2345 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2345->value = $tmp2344;
ITable* $tmp2346 = ((frost$core$Equatable*) $tmp2342)->$class->itable;
while ($tmp2346->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2346 = $tmp2346->next;
}
$fn2348 $tmp2347 = $tmp2346->methods[0];
frost$core$Bit $tmp2349 = $tmp2347(((frost$core$Equatable*) $tmp2342), ((frost$core$Equatable*) $tmp2345));
bool $tmp2350 = $tmp2349.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2345)));
// unreffing REF($747:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2342)));
// unreffing REF($743:frost.core.Equatable<org.frostlanguage.frostc.ClassDecl.Kind>)
if ($tmp2350) goto block57; else goto block58;
block57:;
// line 746
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param4, &$s2351);
goto block58;
block58:;
goto block53;
block53:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2309);
// unreffing REF($685:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodDecl* $tmp2352 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
// unreffing m
*(&local22) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
// unreffing REF($674:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 750
frost$core$Bit $tmp2353 = *(&local20);
frost$core$Bit $tmp2354 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2353);
bool $tmp2355 = $tmp2354.value;
if ($tmp2355) goto block61; else goto block62;
block61:;
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2356;
$tmp2356 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2356->value = param7;
frost$core$Int64 $tmp2357 = (frost$core$Int64) {0};
org$frostlanguage$frostc$ClassDecl$Kind $tmp2358 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2357);
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2359;
$tmp2359 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2359->value = $tmp2358;
ITable* $tmp2360 = ((frost$core$Equatable*) $tmp2356)->$class->itable;
while ($tmp2360->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2360 = $tmp2360->next;
}
$fn2362 $tmp2361 = $tmp2360->methods[0];
frost$core$Bit $tmp2363 = $tmp2361(((frost$core$Equatable*) $tmp2356), ((frost$core$Equatable*) $tmp2359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2359)));
// unreffing REF($783:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2356)));
// unreffing REF($779:frost.core.Equatable<org.frostlanguage.frostc.ClassDecl.Kind>)
*(&local25) = $tmp2363;
goto block63;
block62:;
*(&local25) = $tmp2354;
goto block63;
block63:;
frost$core$Bit $tmp2364 = *(&local25);
bool $tmp2365 = $tmp2364.value;
if ($tmp2365) goto block64; else goto block65;
block64:;
org$frostlanguage$frostc$ClassDecl* $tmp2366 = *(&local14);
frost$core$String** $tmp2367 = &$tmp2366->name;
frost$core$String* $tmp2368 = *$tmp2367;
ITable* $tmp2370 = ((frost$core$Equatable*) $tmp2368)->$class->itable;
while ($tmp2370->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2370 = $tmp2370->next;
}
$fn2372 $tmp2371 = $tmp2370->methods[1];
frost$core$Bit $tmp2373 = $tmp2371(((frost$core$Equatable*) $tmp2368), ((frost$core$Equatable*) &$s2369));
*(&local24) = $tmp2373;
goto block66;
block65:;
*(&local24) = $tmp2364;
goto block66;
block66:;
frost$core$Bit $tmp2374 = *(&local24);
bool $tmp2375 = $tmp2374.value;
if ($tmp2375) goto block59; else goto block60;
block59:;
// line 751
org$frostlanguage$frostc$MethodDecl* $tmp2376 = (org$frostlanguage$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$class);
org$frostlanguage$frostc$ClassDecl* $tmp2377 = *(&local14);
org$frostlanguage$frostc$Annotations* $tmp2378 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp2379 = (frost$core$Int64) {8192};
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp2378, $tmp2379);
frost$core$Int64 $tmp2380 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp2381 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2380);
frost$collections$Array* $tmp2382 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2383 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2382, $tmp2383);
org$frostlanguage$frostc$Type* $tmp2384 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$FixedArray* $tmp2385 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp2385);
org$frostlanguage$frostc$MethodDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$Parameter$GT$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp2376, $tmp2377, param4, ((frost$core$String*) NULL), $tmp2378, $tmp2381, &$s2386, ((frost$collections$Array*) NULL), $tmp2382, $tmp2384, $tmp2385);
*(&local26) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
org$frostlanguage$frostc$MethodDecl* $tmp2387 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
*(&local26) = $tmp2376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
// unreffing REF($827:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
// unreffing REF($826:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
// unreffing REF($822:frost.collections.Array<org.frostlanguage.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2378));
// unreffing REF($817:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
// unreffing REF($815:org.frostlanguage.frostc.MethodDecl)
// line 754
org$frostlanguage$frostc$ClassDecl* $tmp2388 = *(&local14);
frost$collections$Array** $tmp2389 = &$tmp2388->methods;
frost$collections$Array* $tmp2390 = *$tmp2389;
org$frostlanguage$frostc$MethodDecl* $tmp2391 = *(&local26);
frost$collections$Array$add$frost$collections$Array$T($tmp2390, ((frost$core$Object*) $tmp2391));
// line 755
org$frostlanguage$frostc$ClassDecl* $tmp2392 = *(&local14);
org$frostlanguage$frostc$SymbolTable** $tmp2393 = &$tmp2392->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp2394 = *$tmp2393;
org$frostlanguage$frostc$MethodDecl* $tmp2395 = *(&local26);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp2394, ((org$frostlanguage$frostc$Symbol*) $tmp2395));
org$frostlanguage$frostc$MethodDecl* $tmp2396 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
// unreffing defaultInit
*(&local26) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
goto block60;
block60:;
// line 757
frost$core$Bit $tmp2397 = *(&local21);
frost$core$Bit $tmp2398 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2397);
bool $tmp2399 = $tmp2398.value;
if ($tmp2399) goto block69; else goto block70;
block69:;
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2400;
$tmp2400 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2400->value = param7;
frost$core$Int64 $tmp2401 = (frost$core$Int64) {0};
org$frostlanguage$frostc$ClassDecl$Kind $tmp2402 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2401);
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2403;
$tmp2403 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2403->value = $tmp2402;
ITable* $tmp2404 = ((frost$core$Equatable*) $tmp2400)->$class->itable;
while ($tmp2404->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2404 = $tmp2404->next;
}
$fn2406 $tmp2405 = $tmp2404->methods[0];
frost$core$Bit $tmp2407 = $tmp2405(((frost$core$Equatable*) $tmp2400), ((frost$core$Equatable*) $tmp2403));
bool $tmp2408 = $tmp2407.value;
if ($tmp2408) goto block72; else goto block73;
block72:;
*(&local29) = $tmp2407;
goto block74;
block73:;
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2409;
$tmp2409 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2409->value = param7;
frost$core$Int64 $tmp2410 = (frost$core$Int64) {2};
org$frostlanguage$frostc$ClassDecl$Kind $tmp2411 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2410);
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2412;
$tmp2412 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2412->value = $tmp2411;
ITable* $tmp2413 = ((frost$core$Equatable*) $tmp2409)->$class->itable;
while ($tmp2413->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2413 = $tmp2413->next;
}
$fn2415 $tmp2414 = $tmp2413->methods[0];
frost$core$Bit $tmp2416 = $tmp2414(((frost$core$Equatable*) $tmp2409), ((frost$core$Equatable*) $tmp2412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2412)));
// unreffing REF($895:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2409)));
// unreffing REF($891:frost.core.Equatable<org.frostlanguage.frostc.ClassDecl.Kind>)
*(&local29) = $tmp2416;
goto block74;
block74:;
frost$core$Bit $tmp2417 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2403)));
// unreffing REF($884:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2400)));
// unreffing REF($880:frost.core.Equatable<org.frostlanguage.frostc.ClassDecl.Kind>)
*(&local28) = $tmp2417;
goto block71;
block70:;
*(&local28) = $tmp2398;
goto block71;
block71:;
frost$core$Bit $tmp2418 = *(&local28);
bool $tmp2419 = $tmp2418.value;
if ($tmp2419) goto block75; else goto block76;
block75:;
org$frostlanguage$frostc$ClassDecl* $tmp2420 = *(&local14);
frost$core$String** $tmp2421 = &$tmp2420->name;
frost$core$String* $tmp2422 = *$tmp2421;
ITable* $tmp2424 = ((frost$core$Equatable*) $tmp2422)->$class->itable;
while ($tmp2424->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2424 = $tmp2424->next;
}
$fn2426 $tmp2425 = $tmp2424->methods[1];
frost$core$Bit $tmp2427 = $tmp2425(((frost$core$Equatable*) $tmp2422), ((frost$core$Equatable*) &$s2423));
*(&local27) = $tmp2427;
goto block77;
block76:;
*(&local27) = $tmp2418;
goto block77;
block77:;
frost$core$Bit $tmp2428 = *(&local27);
bool $tmp2429 = $tmp2428.value;
if ($tmp2429) goto block67; else goto block68;
block67:;
// line 759
org$frostlanguage$frostc$MethodDecl* $tmp2430 = (org$frostlanguage$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$class);
org$frostlanguage$frostc$ClassDecl* $tmp2431 = *(&local14);
org$frostlanguage$frostc$Annotations* $tmp2432 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp2433 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2434 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2435 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2433, $tmp2434);
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp2432, $tmp2435);
frost$core$Int64 $tmp2436 = (frost$core$Int64) {0};
org$frostlanguage$frostc$MethodDecl$Kind $tmp2437 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2436);
frost$collections$Array* $tmp2438 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2439 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2438, $tmp2439);
org$frostlanguage$frostc$Type* $tmp2440 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$FixedArray* $tmp2441 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp2441);
org$frostlanguage$frostc$MethodDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$Parameter$GT$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp2430, $tmp2431, param4, ((frost$core$String*) NULL), $tmp2432, $tmp2437, &$s2442, ((frost$collections$Array*) NULL), $tmp2438, $tmp2440, $tmp2441);
*(&local30) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
org$frostlanguage$frostc$MethodDecl* $tmp2443 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
*(&local30) = $tmp2430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
// unreffing REF($950:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
// unreffing REF($949:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
// unreffing REF($945:frost.collections.Array<org.frostlanguage.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
// unreffing REF($938:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
// unreffing REF($936:org.frostlanguage.frostc.MethodDecl)
// line 762
org$frostlanguage$frostc$ClassDecl* $tmp2444 = *(&local14);
frost$collections$Array** $tmp2445 = &$tmp2444->methods;
frost$collections$Array* $tmp2446 = *$tmp2445;
org$frostlanguage$frostc$MethodDecl* $tmp2447 = *(&local30);
frost$collections$Array$add$frost$collections$Array$T($tmp2446, ((frost$core$Object*) $tmp2447));
// line 763
org$frostlanguage$frostc$ClassDecl* $tmp2448 = *(&local14);
org$frostlanguage$frostc$SymbolTable** $tmp2449 = &$tmp2448->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp2450 = *$tmp2449;
org$frostlanguage$frostc$MethodDecl* $tmp2451 = *(&local30);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp2450, ((org$frostlanguage$frostc$Symbol*) $tmp2451));
org$frostlanguage$frostc$MethodDecl* $tmp2452 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
// unreffing defaultCleanup
*(&local30) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
goto block68;
block68:;
// line 765
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2453;
$tmp2453 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2453->value = param7;
frost$core$Int64 $tmp2454 = (frost$core$Int64) {2};
org$frostlanguage$frostc$ClassDecl$Kind $tmp2455 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2454);
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp2456;
$tmp2456 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp2456->value = $tmp2455;
ITable* $tmp2457 = ((frost$core$Equatable*) $tmp2453)->$class->itable;
while ($tmp2457->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2457 = $tmp2457->next;
}
$fn2459 $tmp2458 = $tmp2457->methods[0];
frost$core$Bit $tmp2460 = $tmp2458(((frost$core$Equatable*) $tmp2453), ((frost$core$Equatable*) $tmp2456));
bool $tmp2461 = $tmp2460.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2456)));
// unreffing REF($1003:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2453)));
// unreffing REF($999:frost.core.Equatable<org.frostlanguage.frostc.ClassDecl.Kind>)
if ($tmp2461) goto block78; else goto block79;
block78:;
// line 766
frost$core$Bit $tmp2462 = frost$core$Bit$init$builtin_bit(false);
*(&local31) = $tmp2462;
// line 767
org$frostlanguage$frostc$ClassDecl* $tmp2463 = *(&local14);
frost$collections$Array** $tmp2464 = &$tmp2463->choiceCases;
frost$collections$Array* $tmp2465 = *$tmp2464;
ITable* $tmp2466 = ((frost$collections$CollectionView*) $tmp2465)->$class->itable;
while ($tmp2466->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2466 = $tmp2466->next;
}
$fn2468 $tmp2467 = $tmp2466->methods[0];
frost$core$Int64 $tmp2469 = $tmp2467(((frost$collections$CollectionView*) $tmp2465));
frost$core$Int64 $tmp2470 = (frost$core$Int64) {0};
int64_t $tmp2471 = $tmp2469.value;
int64_t $tmp2472 = $tmp2470.value;
bool $tmp2473 = $tmp2471 > $tmp2472;
frost$core$Bit $tmp2474 = (frost$core$Bit) {$tmp2473};
bool $tmp2475 = $tmp2474.value;
if ($tmp2475) goto block80; else goto block82;
block80:;
// line 768
org$frostlanguage$frostc$ClassDecl* $tmp2476 = *(&local14);
frost$collections$Array** $tmp2477 = &$tmp2476->choiceCases;
frost$collections$Array* $tmp2478 = *$tmp2477;
ITable* $tmp2479 = ((frost$collections$Iterable*) $tmp2478)->$class->itable;
while ($tmp2479->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2479 = $tmp2479->next;
}
$fn2481 $tmp2480 = $tmp2479->methods[0];
frost$collections$Iterator* $tmp2482 = $tmp2480(((frost$collections$Iterable*) $tmp2478));
goto block83;
block83:;
ITable* $tmp2483 = $tmp2482->$class->itable;
while ($tmp2483->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2483 = $tmp2483->next;
}
$fn2485 $tmp2484 = $tmp2483->methods[0];
frost$core$Bit $tmp2486 = $tmp2484($tmp2482);
bool $tmp2487 = $tmp2486.value;
if ($tmp2487) goto block85; else goto block84;
block84:;
*(&local32) = ((org$frostlanguage$frostc$ChoiceCase*) NULL);
ITable* $tmp2488 = $tmp2482->$class->itable;
while ($tmp2488->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2488 = $tmp2488->next;
}
$fn2490 $tmp2489 = $tmp2488->methods[1];
frost$core$Object* $tmp2491 = $tmp2489($tmp2482);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ChoiceCase*) $tmp2491)));
org$frostlanguage$frostc$ChoiceCase* $tmp2492 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
*(&local32) = ((org$frostlanguage$frostc$ChoiceCase*) $tmp2491);
// line 769
org$frostlanguage$frostc$ChoiceCase* $tmp2493 = *(&local32);
frost$collections$Array** $tmp2494 = &$tmp2493->fields;
frost$collections$Array* $tmp2495 = *$tmp2494;
ITable* $tmp2496 = ((frost$collections$CollectionView*) $tmp2495)->$class->itable;
while ($tmp2496->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2496 = $tmp2496->next;
}
$fn2498 $tmp2497 = $tmp2496->methods[0];
frost$core$Int64 $tmp2499 = $tmp2497(((frost$collections$CollectionView*) $tmp2495));
frost$core$Int64 $tmp2500 = (frost$core$Int64) {0};
int64_t $tmp2501 = $tmp2499.value;
int64_t $tmp2502 = $tmp2500.value;
bool $tmp2503 = $tmp2501 > $tmp2502;
frost$core$Bit $tmp2504 = (frost$core$Bit) {$tmp2503};
bool $tmp2505 = $tmp2504.value;
if ($tmp2505) goto block86; else goto block87;
block86:;
// line 770
frost$core$Bit $tmp2506 = frost$core$Bit$init$builtin_bit(true);
*(&local31) = $tmp2506;
// line 771
frost$core$Frost$unref$frost$core$Object$Q($tmp2491);
// unreffing REF($1049:frost.collections.Iterator.T)
org$frostlanguage$frostc$ChoiceCase* $tmp2507 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
// unreffing e
*(&local32) = ((org$frostlanguage$frostc$ChoiceCase*) NULL);
goto block85;
block87:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2491);
// unreffing REF($1049:frost.collections.Iterator.T)
org$frostlanguage$frostc$ChoiceCase* $tmp2508 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
// unreffing e
*(&local32) = ((org$frostlanguage$frostc$ChoiceCase*) NULL);
goto block83;
block85:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
// unreffing REF($1038:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block81;
block82:;
// line 1
// line 776
org$frostlanguage$frostc$ClassDecl* $tmp2509 = *(&local14);
org$frostlanguage$frostc$Position* $tmp2510 = &$tmp2509->position;
org$frostlanguage$frostc$Position $tmp2511 = *$tmp2510;
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp2511, &$s2512);
// line 777
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ClassDecl*) NULL)));
org$frostlanguage$frostc$ClassDecl* $tmp2513 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
// unreffing result
*(&local14) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2514 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
// unreffing supertypes
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2515 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
// unreffing parameters
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Annotations* $tmp2516 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
// unreffing annotations
*(&local4) = ((org$frostlanguage$frostc$Annotations*) NULL);
frost$core$String* $tmp2517 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
// unreffing doccomment
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2518 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
// unreffing fullName
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$ClassDecl*) NULL);
block81:;
// line 779
frost$core$Bit $tmp2519 = *(&local31);
frost$core$Bit $tmp2520 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2519);
bool $tmp2521 = $tmp2520.value;
if ($tmp2521) goto block88; else goto block89;
block88:;
// line 780
org$frostlanguage$frostc$ClassDecl* $tmp2522 = *(&local14);
org$frostlanguage$frostc$Type* $tmp2523 = org$frostlanguage$frostc$Type$Value$R$org$frostlanguage$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
org$frostlanguage$frostc$Type** $tmp2524 = &$tmp2522->rawSuper;
org$frostlanguage$frostc$Type* $tmp2525 = *$tmp2524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
org$frostlanguage$frostc$Type** $tmp2526 = &$tmp2522->rawSuper;
*$tmp2526 = $tmp2523;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
// unreffing REF($1144:org.frostlanguage.frostc.Type)
goto block89;
block89:;
goto block79;
block79:;
// line 783
frost$core$Weak** $tmp2527 = &param0->compiler;
frost$core$Weak* $tmp2528 = *$tmp2527;
frost$core$Object* $tmp2529 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2528);
frost$collections$Stack** $tmp2530 = &((org$frostlanguage$frostc$Compiler*) $tmp2529)->currentClass;
frost$collections$Stack* $tmp2531 = *$tmp2530;
frost$core$Object* $tmp2532 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2531);
frost$core$Frost$unref$frost$core$Object$Q($tmp2532);
// unreffing REF($1168:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp2529);
// unreffing REF($1163:frost.core.Weak.T)
// line 784
org$frostlanguage$frostc$ClassDecl* $tmp2533 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
org$frostlanguage$frostc$ClassDecl* $tmp2534 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
// unreffing result
*(&local14) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2535 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
// unreffing supertypes
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2536 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
// unreffing parameters
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Annotations* $tmp2537 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
// unreffing annotations
*(&local4) = ((org$frostlanguage$frostc$Annotations*) NULL);
frost$core$String* $tmp2538 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2538));
// unreffing doccomment
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2539 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
// unreffing fullName
*(&local0) = ((frost$core$String*) NULL);
return $tmp2533;

}
void org$frostlanguage$frostc$Scanner$addClass$org$frostlanguage$frostc$ClassDecl$frost$collections$Array$LTorg$frostlanguage$frostc$ClassDecl$GT(org$frostlanguage$frostc$Scanner* param0, org$frostlanguage$frostc$ClassDecl* param1, frost$collections$Array* param2) {

org$frostlanguage$frostc$ClassDecl* local0 = NULL;
// line 788
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) param1));
// line 789
frost$collections$Array** $tmp2540 = &param1->classes;
frost$collections$Array* $tmp2541 = *$tmp2540;
ITable* $tmp2542 = ((frost$collections$Iterable*) $tmp2541)->$class->itable;
while ($tmp2542->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2542 = $tmp2542->next;
}
$fn2544 $tmp2543 = $tmp2542->methods[0];
frost$collections$Iterator* $tmp2545 = $tmp2543(((frost$collections$Iterable*) $tmp2541));
goto block1;
block1:;
ITable* $tmp2546 = $tmp2545->$class->itable;
while ($tmp2546->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2546 = $tmp2546->next;
}
$fn2548 $tmp2547 = $tmp2546->methods[0];
frost$core$Bit $tmp2549 = $tmp2547($tmp2545);
bool $tmp2550 = $tmp2549.value;
if ($tmp2550) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
ITable* $tmp2551 = $tmp2545->$class->itable;
while ($tmp2551->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2551 = $tmp2551->next;
}
$fn2553 $tmp2552 = $tmp2551->methods[1];
frost$core$Object* $tmp2554 = $tmp2552($tmp2545);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ClassDecl*) $tmp2554)));
org$frostlanguage$frostc$ClassDecl* $tmp2555 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) $tmp2554);
// line 790
org$frostlanguage$frostc$ClassDecl* $tmp2556 = *(&local0);
org$frostlanguage$frostc$Scanner$addClass$org$frostlanguage$frostc$ClassDecl$frost$collections$Array$LTorg$frostlanguage$frostc$ClassDecl$GT(param0, $tmp2556, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2554);
// unreffing REF($21:frost.collections.Iterator.T)
org$frostlanguage$frostc$ClassDecl* $tmp2557 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
// unreffing inner
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2545));
// unreffing REF($10:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void org$frostlanguage$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlanguage$frostc$ClassDecl$GT(org$frostlanguage$frostc$Scanner* param0, frost$io$File* param1, frost$collections$MapView* param2, frost$core$String* param3, frost$collections$List* param4) {

frost$core$String* local0 = NULL;
org$frostlanguage$frostc$MethodDecl* local1 = NULL;
org$frostlanguage$frostc$MethodDecl* local2 = NULL;
// line 796
org$frostlanguage$frostc$ClassDecl** $tmp2558 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2559 = *$tmp2558;
frost$core$Bit $tmp2560 = frost$core$Bit$init$builtin_bit($tmp2559 == NULL);
bool $tmp2561 = $tmp2560.value;
if ($tmp2561) goto block1; else goto block2;
block1:;
// line 797
*(&local0) = ((frost$core$String*) NULL);
// line 798
ITable* $tmp2563 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2563->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2563 = $tmp2563->next;
}
$fn2565 $tmp2564 = $tmp2563->methods[1];
frost$core$Bit $tmp2566 = $tmp2564(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2562));
bool $tmp2567 = $tmp2566.value;
if ($tmp2567) goto block3; else goto block5;
block3:;
// line 799
frost$core$String* $tmp2568 = frost$core$String$convert$R$frost$core$String(param3);
frost$core$String* $tmp2569 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2568, &$s2570);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
frost$core$String* $tmp2571 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
*(&local0) = $tmp2569;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
// unreffing REF($18:frost.core.String)
goto block4;
block5:;
// line 1
// line 802
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2572));
frost$core$String* $tmp2573 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
*(&local0) = &$s2574;
goto block4;
block4:;
// line 804
org$frostlanguage$frostc$ClassDecl* $tmp2575 = (org$frostlanguage$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$class);
org$frostlanguage$frostc$Position $tmp2576 = org$frostlanguage$frostc$Position$init();
org$frostlanguage$frostc$Annotations* $tmp2577 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
org$frostlanguage$frostc$Annotations$init($tmp2577);
frost$core$Int64 $tmp2578 = (frost$core$Int64) {0};
org$frostlanguage$frostc$ClassDecl$Kind $tmp2579 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2578);
frost$core$String* $tmp2580 = *(&local0);
frost$collections$Array* $tmp2581 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2581);
frost$collections$Array* $tmp2582 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2582);
frost$core$Weak** $tmp2583 = &param0->compiler;
frost$core$Weak* $tmp2584 = *$tmp2583;
frost$core$Object* $tmp2585 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2584);
org$frostlanguage$frostc$SymbolTable** $tmp2586 = &((org$frostlanguage$frostc$Compiler*) $tmp2585)->root;
org$frostlanguage$frostc$SymbolTable* $tmp2587 = *$tmp2586;
org$frostlanguage$frostc$ClassDecl$init$frost$io$File$org$frostlanguage$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$frost$collections$Array$LTorg$frostlanguage$frostc$ClassDecl$GenericParameter$GT$org$frostlanguage$frostc$SymbolTable($tmp2575, param1, $tmp2576, param2, ((frost$core$String*) NULL), $tmp2577, $tmp2579, $tmp2580, ((frost$collections$ListView*) $tmp2581), $tmp2582, $tmp2587);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
org$frostlanguage$frostc$ClassDecl** $tmp2588 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2589 = *$tmp2588;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
org$frostlanguage$frostc$ClassDecl** $tmp2590 = &param0->bareCodeClass;
*$tmp2590 = $tmp2575;
frost$core$Frost$unref$frost$core$Object$Q($tmp2585);
// unreffing REF($60:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
// unreffing REF($54:frost.collections.Array<org.frostlanguage.frostc.ClassDecl.GenericParameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
// unreffing REF($50:frost.collections.Array<org.frostlanguage.frostc.Type>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
// unreffing REF($45:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
// unreffing REF($43:org.frostlanguage.frostc.ClassDecl)
// line 807
org$frostlanguage$frostc$ClassDecl** $tmp2591 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2592 = *$tmp2591;
ITable* $tmp2593 = ((frost$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp2593->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp2593 = $tmp2593->next;
}
$fn2595 $tmp2594 = $tmp2593->methods[0];
$tmp2594(((frost$collections$CollectionWriter*) param4), ((frost$core$Object*) $tmp2592));
// line 808
org$frostlanguage$frostc$MethodDecl* $tmp2596 = (org$frostlanguage$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$class);
org$frostlanguage$frostc$ClassDecl** $tmp2597 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2598 = *$tmp2597;
org$frostlanguage$frostc$Position $tmp2599 = org$frostlanguage$frostc$Position$init();
org$frostlanguage$frostc$Annotations* $tmp2600 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp2601 = (frost$core$Int64) {8192};
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp2600, $tmp2601);
frost$core$Int64 $tmp2602 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp2603 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2602);
frost$collections$Array* $tmp2604 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2605 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2604, $tmp2605);
org$frostlanguage$frostc$Type* $tmp2606 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$FixedArray* $tmp2607 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp2607);
org$frostlanguage$frostc$MethodDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$Parameter$GT$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp2596, $tmp2598, $tmp2599, ((frost$core$String*) NULL), $tmp2600, $tmp2603, &$s2608, ((frost$collections$Array*) NULL), $tmp2604, $tmp2606, $tmp2607);
*(&local1) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
org$frostlanguage$frostc$MethodDecl* $tmp2609 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
*(&local1) = $tmp2596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
// unreffing REF($113:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
// unreffing REF($112:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
// unreffing REF($108:frost.collections.Array<org.frostlanguage.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2600));
// unreffing REF($103:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
// unreffing REF($98:org.frostlanguage.frostc.MethodDecl)
// line 811
org$frostlanguage$frostc$ClassDecl** $tmp2610 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2611 = *$tmp2610;
frost$collections$Array** $tmp2612 = &$tmp2611->methods;
frost$collections$Array* $tmp2613 = *$tmp2612;
org$frostlanguage$frostc$MethodDecl* $tmp2614 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp2613, ((frost$core$Object*) $tmp2614));
// line 812
org$frostlanguage$frostc$ClassDecl** $tmp2615 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2616 = *$tmp2615;
org$frostlanguage$frostc$SymbolTable** $tmp2617 = &$tmp2616->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp2618 = *$tmp2617;
org$frostlanguage$frostc$MethodDecl* $tmp2619 = *(&local1);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp2618, ((org$frostlanguage$frostc$Symbol*) $tmp2619));
// line 813
org$frostlanguage$frostc$MethodDecl* $tmp2620 = (org$frostlanguage$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$class);
org$frostlanguage$frostc$ClassDecl** $tmp2621 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2622 = *$tmp2621;
org$frostlanguage$frostc$Position $tmp2623 = org$frostlanguage$frostc$Position$init();
org$frostlanguage$frostc$Annotations* $tmp2624 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp2625 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2626 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2627 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2625, $tmp2626);
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp2624, $tmp2627);
frost$core$Int64 $tmp2628 = (frost$core$Int64) {0};
org$frostlanguage$frostc$MethodDecl$Kind $tmp2629 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2628);
frost$collections$Array* $tmp2630 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2631 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2630, $tmp2631);
org$frostlanguage$frostc$Type* $tmp2632 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$FixedArray* $tmp2633 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp2633);
org$frostlanguage$frostc$MethodDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$Parameter$GT$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp2620, $tmp2622, $tmp2623, ((frost$core$String*) NULL), $tmp2624, $tmp2629, &$s2634, ((frost$collections$Array*) NULL), $tmp2630, $tmp2632, $tmp2633);
*(&local2) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
org$frostlanguage$frostc$MethodDecl* $tmp2635 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
*(&local2) = $tmp2620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2633));
// unreffing REF($177:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
// unreffing REF($176:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
// unreffing REF($172:frost.collections.Array<org.frostlanguage.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
// unreffing REF($165:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
// unreffing REF($160:org.frostlanguage.frostc.MethodDecl)
// line 816
org$frostlanguage$frostc$ClassDecl** $tmp2636 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2637 = *$tmp2636;
frost$collections$Array** $tmp2638 = &$tmp2637->methods;
frost$collections$Array* $tmp2639 = *$tmp2638;
org$frostlanguage$frostc$MethodDecl* $tmp2640 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2639, ((frost$core$Object*) $tmp2640));
// line 817
org$frostlanguage$frostc$ClassDecl** $tmp2641 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2642 = *$tmp2641;
org$frostlanguage$frostc$SymbolTable** $tmp2643 = &$tmp2642->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp2644 = *$tmp2643;
org$frostlanguage$frostc$MethodDecl* $tmp2645 = *(&local2);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp2644, ((org$frostlanguage$frostc$Symbol*) $tmp2645));
org$frostlanguage$frostc$MethodDecl* $tmp2646 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
// unreffing defaultCleanup
*(&local2) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$MethodDecl* $tmp2647 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
// unreffing defaultInit
*(&local1) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$String* $tmp2648 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
// unreffing fullName
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(org$frostlanguage$frostc$Scanner* param0, org$frostlanguage$frostc$Position param1, frost$core$String* param2) {

frost$io$File** $tmp2649 = &param0->source;
frost$io$File* $tmp2650 = *$tmp2649;
frost$core$Bit $tmp2651 = frost$core$Bit$init$builtin_bit($tmp2650 != NULL);
bool $tmp2652 = $tmp2651.value;
if ($tmp2652) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2653 = (frost$core$Int64) {822};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2654, $tmp2653, &$s2655);
abort(); // unreachable
block1:;
// line 823
frost$core$Weak** $tmp2656 = &param0->compiler;
frost$core$Weak* $tmp2657 = *$tmp2656;
frost$core$Object* $tmp2658 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2657);
frost$io$File** $tmp2659 = &param0->source;
frost$io$File* $tmp2660 = *$tmp2659;
org$frostlanguage$frostc$Compiler$error$frost$io$File$org$frostlanguage$frostc$Position$frost$core$String(((org$frostlanguage$frostc$Compiler*) $tmp2658), $tmp2660, param1, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2658);
// unreffing REF($13:frost.core.Weak.T)
return;

}
frost$collections$ListView* org$frostlanguage$frostc$Scanner$scan$frost$io$File$org$frostlanguage$frostc$ASTNode$R$frost$collections$ListView$LTorg$frostlanguage$frostc$ClassDecl$GT(org$frostlanguage$frostc$Scanner* param0, frost$io$File* param1, org$frostlanguage$frostc$ASTNode* param2) {

org$frostlanguage$frostc$FixedArray* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$String* local2 = NULL;
frost$collections$HashMap* local3 = NULL;
org$frostlanguage$frostc$ASTNode* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String$Index$nullable local7;
frost$core$String* local8 = NULL;
org$frostlanguage$frostc$Position local9;
org$frostlanguage$frostc$ASTNode* local10 = NULL;
org$frostlanguage$frostc$FixedArray* local11 = NULL;
org$frostlanguage$frostc$ClassDecl$Kind local12;
frost$core$String* local13 = NULL;
org$frostlanguage$frostc$FixedArray* local14 = NULL;
org$frostlanguage$frostc$FixedArray* local15 = NULL;
org$frostlanguage$frostc$FixedArray* local16 = NULL;
org$frostlanguage$frostc$ClassDecl* local17 = NULL;
org$frostlanguage$frostc$Position local18;
org$frostlanguage$frostc$ASTNode* local19 = NULL;
org$frostlanguage$frostc$FixedArray* local20 = NULL;
org$frostlanguage$frostc$MethodDecl$Kind local21;
frost$core$String* local22 = NULL;
org$frostlanguage$frostc$FixedArray* local23 = NULL;
org$frostlanguage$frostc$FixedArray* local24 = NULL;
org$frostlanguage$frostc$ASTNode* local25 = NULL;
org$frostlanguage$frostc$FixedArray* local26 = NULL;
frost$core$String* local27 = NULL;
frost$collections$Array* local28 = NULL;
frost$collections$Array* local29 = NULL;
frost$collections$Array* local30 = NULL;
org$frostlanguage$frostc$ASTNode* local31 = NULL;
org$frostlanguage$frostc$Position local32;
frost$core$String* local33 = NULL;
org$frostlanguage$frostc$ASTNode* local34 = NULL;
org$frostlanguage$frostc$ASTNode* local35 = NULL;
org$frostlanguage$frostc$Type* local36 = NULL;
org$frostlanguage$frostc$MethodDecl* local37 = NULL;
org$frostlanguage$frostc$MethodDecl* local38 = NULL;
org$frostlanguage$frostc$Position local39;
org$frostlanguage$frostc$ASTNode* local40 = NULL;
org$frostlanguage$frostc$FixedArray* local41 = NULL;
org$frostlanguage$frostc$ASTNode* local42 = NULL;
frost$core$Int64 local43;
frost$core$Int64 local44;
org$frostlanguage$frostc$FieldDecl* local45 = NULL;
frost$core$Bit local46;
// line 827
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp2661 = &param0->source;
frost$io$File* $tmp2662 = *$tmp2661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
frost$io$File** $tmp2663 = &param0->source;
*$tmp2663 = param1;
// line 828
frost$core$Int64* $tmp2664 = &param2->$rawValue;
frost$core$Int64 $tmp2665 = *$tmp2664;
frost$core$Int64 $tmp2666 = (frost$core$Int64) {19};
frost$core$Bit $tmp2667 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2665, $tmp2666);
bool $tmp2668 = $tmp2667.value;
if ($tmp2668) goto block2; else goto block3;
block2:;
org$frostlanguage$frostc$FixedArray** $tmp2669 = (org$frostlanguage$frostc$FixedArray**) (param2->$data + 0);
org$frostlanguage$frostc$FixedArray* $tmp2670 = *$tmp2669;
*(&local0) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
org$frostlanguage$frostc$FixedArray* $tmp2671 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
*(&local0) = $tmp2670;
// line 830
frost$collections$Array* $tmp2672 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2672);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
frost$collections$Array* $tmp2673 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2673));
*(&local1) = $tmp2672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
// unreffing REF($27:frost.collections.Array<org.frostlanguage.frostc.ClassDecl>)
// line 831
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2674));
frost$core$String* $tmp2675 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
*(&local2) = &$s2676;
// line 832
frost$collections$HashMap* $tmp2677 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2677);
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2677));
frost$collections$HashMap* $tmp2678 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
*(&local3) = $tmp2677;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2677));
// unreffing REF($49:frost.collections.HashMap<frost.core.String, frost.core.String>)
// line 833
org$frostlanguage$frostc$FixedArray* $tmp2679 = *(&local0);
ITable* $tmp2680 = ((frost$collections$Iterable*) $tmp2679)->$class->itable;
while ($tmp2680->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2680 = $tmp2680->next;
}
$fn2682 $tmp2681 = $tmp2680->methods[0];
frost$collections$Iterator* $tmp2683 = $tmp2681(((frost$collections$Iterable*) $tmp2679));
goto block4;
block4:;
ITable* $tmp2684 = $tmp2683->$class->itable;
while ($tmp2684->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2684 = $tmp2684->next;
}
$fn2686 $tmp2685 = $tmp2684->methods[0];
frost$core$Bit $tmp2687 = $tmp2685($tmp2683);
bool $tmp2688 = $tmp2687.value;
if ($tmp2688) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp2689 = $tmp2683->$class->itable;
while ($tmp2689->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2689 = $tmp2689->next;
}
$fn2691 $tmp2690 = $tmp2689->methods[1];
frost$core$Object* $tmp2692 = $tmp2690($tmp2683);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp2692)));
org$frostlanguage$frostc$ASTNode* $tmp2693 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) $tmp2692);
// line 834
org$frostlanguage$frostc$ASTNode* $tmp2694 = *(&local4);
frost$core$Int64* $tmp2695 = &$tmp2694->$rawValue;
frost$core$Int64 $tmp2696 = *$tmp2695;
frost$core$Int64 $tmp2697 = (frost$core$Int64) {33};
frost$core$Bit $tmp2698 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2696, $tmp2697);
bool $tmp2699 = $tmp2698.value;
if ($tmp2699) goto block8; else goto block9;
block8:;
org$frostlanguage$frostc$Position* $tmp2700 = (org$frostlanguage$frostc$Position*) ($tmp2694->$data + 0);
org$frostlanguage$frostc$Position $tmp2701 = *$tmp2700;
frost$core$String** $tmp2702 = (frost$core$String**) ($tmp2694->$data + 16);
frost$core$String* $tmp2703 = *$tmp2702;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
frost$core$String* $tmp2704 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
*(&local5) = $tmp2703;
// line 836
frost$core$String* $tmp2705 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
frost$core$String* $tmp2706 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
*(&local2) = $tmp2705;
frost$core$String* $tmp2707 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block7;
block9:;
frost$core$Int64 $tmp2708 = (frost$core$Int64) {49};
frost$core$Bit $tmp2709 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2696, $tmp2708);
bool $tmp2710 = $tmp2709.value;
if ($tmp2710) goto block10; else goto block11;
block10:;
org$frostlanguage$frostc$Position* $tmp2711 = (org$frostlanguage$frostc$Position*) ($tmp2694->$data + 0);
org$frostlanguage$frostc$Position $tmp2712 = *$tmp2711;
frost$core$String** $tmp2713 = (frost$core$String**) ($tmp2694->$data + 16);
frost$core$String* $tmp2714 = *$tmp2713;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
frost$core$String* $tmp2715 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
*(&local6) = $tmp2714;
// line 839
frost$core$String* $tmp2716 = *(&local6);
frost$core$String$Index$nullable $tmp2717 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp2716, &$s2718);
*(&local7) = $tmp2717;
// line 840
*(&local8) = ((frost$core$String*) NULL);
// line 841
frost$core$String$Index$nullable $tmp2719 = *(&local7);
frost$core$Bit $tmp2720 = frost$core$Bit$init$builtin_bit($tmp2719.nonnull);
bool $tmp2721 = $tmp2720.value;
if ($tmp2721) goto block12; else goto block14;
block12:;
// line 842
frost$core$String* $tmp2722 = *(&local6);
frost$core$String* $tmp2723 = *(&local6);
frost$core$String$Index$nullable $tmp2724 = *(&local7);
frost$core$String$Index $tmp2725 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp2723, ((frost$core$String$Index) $tmp2724.value));
frost$core$Bit $tmp2726 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2727 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2725, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2726);
frost$core$String* $tmp2728 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2722, $tmp2727);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
frost$core$String* $tmp2729 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
*(&local8) = $tmp2728;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
// unreffing REF($155:frost.core.String)
goto block13;
block14:;
// line 1
// line 845
frost$core$String* $tmp2730 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
frost$core$String* $tmp2731 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
*(&local8) = $tmp2730;
goto block13;
block13:;
// line 847
frost$collections$HashMap* $tmp2732 = *(&local3);
frost$core$String* $tmp2733 = *(&local8);
frost$core$String* $tmp2734 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2732, ((frost$collections$Key*) $tmp2733), ((frost$core$Object*) $tmp2734));
frost$core$String* $tmp2735 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
// unreffing alias
*(&local8) = ((frost$core$String*) NULL);
frost$core$String* $tmp2736 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
// unreffing fullName
*(&local6) = ((frost$core$String*) NULL);
goto block7;
block11:;
frost$core$Int64 $tmp2737 = (frost$core$Int64) {12};
frost$core$Bit $tmp2738 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2696, $tmp2737);
bool $tmp2739 = $tmp2738.value;
if ($tmp2739) goto block15; else goto block16;
block15:;
org$frostlanguage$frostc$Position* $tmp2740 = (org$frostlanguage$frostc$Position*) ($tmp2694->$data + 0);
org$frostlanguage$frostc$Position $tmp2741 = *$tmp2740;
*(&local9) = $tmp2741;
org$frostlanguage$frostc$ASTNode** $tmp2742 = (org$frostlanguage$frostc$ASTNode**) ($tmp2694->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp2743 = *$tmp2742;
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
org$frostlanguage$frostc$ASTNode* $tmp2744 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
*(&local10) = $tmp2743;
org$frostlanguage$frostc$FixedArray** $tmp2745 = (org$frostlanguage$frostc$FixedArray**) ($tmp2694->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp2746 = *$tmp2745;
*(&local11) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
org$frostlanguage$frostc$FixedArray* $tmp2747 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
*(&local11) = $tmp2746;
org$frostlanguage$frostc$ClassDecl$Kind* $tmp2748 = (org$frostlanguage$frostc$ClassDecl$Kind*) ($tmp2694->$data + 32);
org$frostlanguage$frostc$ClassDecl$Kind $tmp2749 = *$tmp2748;
*(&local12) = $tmp2749;
frost$core$String** $tmp2750 = (frost$core$String**) ($tmp2694->$data + 40);
frost$core$String* $tmp2751 = *$tmp2750;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
frost$core$String* $tmp2752 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
*(&local13) = $tmp2751;
org$frostlanguage$frostc$FixedArray** $tmp2753 = (org$frostlanguage$frostc$FixedArray**) ($tmp2694->$data + 48);
org$frostlanguage$frostc$FixedArray* $tmp2754 = *$tmp2753;
*(&local14) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2754));
org$frostlanguage$frostc$FixedArray* $tmp2755 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2755));
*(&local14) = $tmp2754;
org$frostlanguage$frostc$FixedArray** $tmp2756 = (org$frostlanguage$frostc$FixedArray**) ($tmp2694->$data + 56);
org$frostlanguage$frostc$FixedArray* $tmp2757 = *$tmp2756;
*(&local15) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
org$frostlanguage$frostc$FixedArray* $tmp2758 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
*(&local15) = $tmp2757;
org$frostlanguage$frostc$FixedArray** $tmp2759 = (org$frostlanguage$frostc$FixedArray**) ($tmp2694->$data + 64);
org$frostlanguage$frostc$FixedArray* $tmp2760 = *$tmp2759;
*(&local16) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
org$frostlanguage$frostc$FixedArray* $tmp2761 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
*(&local16) = $tmp2760;
// line 851
frost$collections$HashMap* $tmp2762 = *(&local3);
frost$core$String* $tmp2763 = *(&local2);
org$frostlanguage$frostc$Position $tmp2764 = *(&local9);
org$frostlanguage$frostc$ASTNode* $tmp2765 = *(&local10);
org$frostlanguage$frostc$FixedArray* $tmp2766 = *(&local11);
org$frostlanguage$frostc$ClassDecl$Kind $tmp2767 = *(&local12);
frost$core$String* $tmp2768 = *(&local13);
org$frostlanguage$frostc$FixedArray* $tmp2769 = *(&local14);
org$frostlanguage$frostc$FixedArray* $tmp2770 = *(&local15);
org$frostlanguage$frostc$FixedArray* $tmp2771 = *(&local16);
org$frostlanguage$frostc$ClassDecl* $tmp2772 = org$frostlanguage$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ClassDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ClassDecl$Q(param0, param1, ((frost$collections$MapView*) $tmp2762), $tmp2763, $tmp2764, $tmp2765, $tmp2766, $tmp2767, $tmp2768, $tmp2769, $tmp2770, $tmp2771);
*(&local17) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
org$frostlanguage$frostc$ClassDecl* $tmp2773 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2773));
*(&local17) = $tmp2772;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
// unreffing REF($271:org.frostlanguage.frostc.ClassDecl?)
// line 853
org$frostlanguage$frostc$ClassDecl* $tmp2774 = *(&local17);
frost$core$Bit $tmp2775 = frost$core$Bit$init$builtin_bit($tmp2774 != NULL);
bool $tmp2776 = $tmp2775.value;
if ($tmp2776) goto block17; else goto block18;
block17:;
// line 854
org$frostlanguage$frostc$ClassDecl* $tmp2777 = *(&local17);
frost$collections$Array* $tmp2778 = *(&local1);
org$frostlanguage$frostc$Scanner$addClass$org$frostlanguage$frostc$ClassDecl$frost$collections$Array$LTorg$frostlanguage$frostc$ClassDecl$GT(param0, $tmp2777, $tmp2778);
goto block18;
block18:;
org$frostlanguage$frostc$ClassDecl* $tmp2779 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
// unreffing cl
*(&local17) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp2780 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
// unreffing members
*(&local16) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp2781 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
// unreffing supertypes
*(&local15) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp2782 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
// unreffing generics
*(&local14) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$String* $tmp2783 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
// unreffing name
*(&local13) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp2784 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
// unreffing annotations
*(&local11) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2785 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
// unreffing dc
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block7;
block16:;
frost$core$Int64 $tmp2786 = (frost$core$Int64) {29};
frost$core$Bit $tmp2787 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2696, $tmp2786);
bool $tmp2788 = $tmp2787.value;
if ($tmp2788) goto block19; else goto block20;
block19:;
org$frostlanguage$frostc$Position* $tmp2789 = (org$frostlanguage$frostc$Position*) ($tmp2694->$data + 0);
org$frostlanguage$frostc$Position $tmp2790 = *$tmp2789;
*(&local18) = $tmp2790;
org$frostlanguage$frostc$ASTNode** $tmp2791 = (org$frostlanguage$frostc$ASTNode**) ($tmp2694->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp2792 = *$tmp2791;
*(&local19) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
org$frostlanguage$frostc$ASTNode* $tmp2793 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
*(&local19) = $tmp2792;
org$frostlanguage$frostc$FixedArray** $tmp2794 = (org$frostlanguage$frostc$FixedArray**) ($tmp2694->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp2795 = *$tmp2794;
*(&local20) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
org$frostlanguage$frostc$FixedArray* $tmp2796 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
*(&local20) = $tmp2795;
org$frostlanguage$frostc$MethodDecl$Kind* $tmp2797 = (org$frostlanguage$frostc$MethodDecl$Kind*) ($tmp2694->$data + 32);
org$frostlanguage$frostc$MethodDecl$Kind $tmp2798 = *$tmp2797;
*(&local21) = $tmp2798;
frost$core$String** $tmp2799 = (frost$core$String**) ($tmp2694->$data + 40);
frost$core$String* $tmp2800 = *$tmp2799;
*(&local22) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
frost$core$String* $tmp2801 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
*(&local22) = $tmp2800;
org$frostlanguage$frostc$FixedArray** $tmp2802 = (org$frostlanguage$frostc$FixedArray**) ($tmp2694->$data + 48);
org$frostlanguage$frostc$FixedArray* $tmp2803 = *$tmp2802;
*(&local23) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
org$frostlanguage$frostc$FixedArray* $tmp2804 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
*(&local23) = $tmp2803;
org$frostlanguage$frostc$FixedArray** $tmp2805 = (org$frostlanguage$frostc$FixedArray**) ($tmp2694->$data + 56);
org$frostlanguage$frostc$FixedArray* $tmp2806 = *$tmp2805;
*(&local24) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
org$frostlanguage$frostc$FixedArray* $tmp2807 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
*(&local24) = $tmp2806;
org$frostlanguage$frostc$ASTNode** $tmp2808 = (org$frostlanguage$frostc$ASTNode**) ($tmp2694->$data + 64);
org$frostlanguage$frostc$ASTNode* $tmp2809 = *$tmp2808;
*(&local25) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
org$frostlanguage$frostc$ASTNode* $tmp2810 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
*(&local25) = $tmp2809;
org$frostlanguage$frostc$FixedArray** $tmp2811 = (org$frostlanguage$frostc$FixedArray**) ($tmp2694->$data + 72);
org$frostlanguage$frostc$FixedArray* $tmp2812 = *$tmp2811;
*(&local26) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
org$frostlanguage$frostc$FixedArray* $tmp2813 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
*(&local26) = $tmp2812;
// line 859
org$frostlanguage$frostc$MethodDecl$Kind $tmp2814 = *(&local21);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp2815;
$tmp2815 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp2815->value = $tmp2814;
frost$core$Int64 $tmp2816 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp2817 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2816);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp2818;
$tmp2818 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp2818->value = $tmp2817;
ITable* $tmp2819 = ((frost$core$Equatable*) $tmp2815)->$class->itable;
while ($tmp2819->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2819 = $tmp2819->next;
}
$fn2821 $tmp2820 = $tmp2819->methods[0];
frost$core$Bit $tmp2822 = $tmp2820(((frost$core$Equatable*) $tmp2815), ((frost$core$Equatable*) $tmp2818));
bool $tmp2823 = $tmp2822.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2818)));
// unreffing REF($409:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2815)));
// unreffing REF($405:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
if ($tmp2823) goto block21; else goto block22;
block21:;
// line 860
org$frostlanguage$frostc$Position $tmp2824 = *(&local18);
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp2824, &$s2825);
// line 861
org$frostlanguage$frostc$FixedArray* $tmp2826 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
// unreffing statements
*(&local26) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2827 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
// unreffing rawReturnType
*(&local25) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp2828 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
// unreffing parameters
*(&local24) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp2829 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
// unreffing generics
*(&local23) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$String* $tmp2830 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
// unreffing rawName
*(&local22) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp2831 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
// unreffing annotations
*(&local20) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2832 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
// unreffing dc
*(&local19) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2692);
// unreffing REF($78:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp2833 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
// unreffing e
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block4;
block22:;
// line 863
frost$collections$HashMap* $tmp2834 = *(&local3);
frost$core$String* $tmp2835 = *(&local2);
frost$collections$Array* $tmp2836 = *(&local1);
org$frostlanguage$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlanguage$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp2834), $tmp2835, ((frost$collections$List*) $tmp2836));
// line 864
*(&local27) = ((frost$core$String*) NULL);
// line 865
frost$core$String* $tmp2837 = *(&local22);
frost$core$Bit $tmp2838 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2837, &$s2839);
bool $tmp2840 = $tmp2838.value;
if ($tmp2840) goto block23; else goto block25;
block23:;
// line 866
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2841));
frost$core$String* $tmp2842 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
*(&local27) = &$s2843;
// line 867
frost$collections$Array* $tmp2844 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2844);
*(&local28) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
frost$collections$Array* $tmp2845 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
*(&local28) = $tmp2844;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
// unreffing REF($490:frost.collections.Array<org.frostlanguage.frostc.MethodDecl.Parameter>)
// line 868
frost$collections$Array* $tmp2846 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2846);
*(&local29) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
frost$collections$Array* $tmp2847 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
*(&local29) = $tmp2846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
// unreffing REF($504:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 869
frost$collections$Array* $tmp2848 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2848);
*(&local30) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
frost$collections$Array* $tmp2849 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
*(&local30) = $tmp2848;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
// unreffing REF($518:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 870
org$frostlanguage$frostc$FixedArray* $tmp2850 = *(&local24);
ITable* $tmp2851 = ((frost$collections$Iterable*) $tmp2850)->$class->itable;
while ($tmp2851->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2851 = $tmp2851->next;
}
$fn2853 $tmp2852 = $tmp2851->methods[0];
frost$collections$Iterator* $tmp2854 = $tmp2852(((frost$collections$Iterable*) $tmp2850));
goto block26;
block26:;
ITable* $tmp2855 = $tmp2854->$class->itable;
while ($tmp2855->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2855 = $tmp2855->next;
}
$fn2857 $tmp2856 = $tmp2855->methods[0];
frost$core$Bit $tmp2858 = $tmp2856($tmp2854);
bool $tmp2859 = $tmp2858.value;
if ($tmp2859) goto block28; else goto block27;
block27:;
*(&local31) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp2860 = $tmp2854->$class->itable;
while ($tmp2860->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2860 = $tmp2860->next;
}
$fn2862 $tmp2861 = $tmp2860->methods[1];
frost$core$Object* $tmp2863 = $tmp2861($tmp2854);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp2863)));
org$frostlanguage$frostc$ASTNode* $tmp2864 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
*(&local31) = ((org$frostlanguage$frostc$ASTNode*) $tmp2863);
// line 871
org$frostlanguage$frostc$ASTNode* $tmp2865 = *(&local31);
frost$core$Int64* $tmp2866 = &$tmp2865->$rawValue;
frost$core$Int64 $tmp2867 = *$tmp2866;
frost$core$Int64 $tmp2868 = (frost$core$Int64) {34};
frost$core$Bit $tmp2869 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2867, $tmp2868);
bool $tmp2870 = $tmp2869.value;
if ($tmp2870) goto block30; else goto block31;
block30:;
org$frostlanguage$frostc$Position* $tmp2871 = (org$frostlanguage$frostc$Position*) ($tmp2865->$data + 0);
org$frostlanguage$frostc$Position $tmp2872 = *$tmp2871;
*(&local32) = $tmp2872;
frost$core$String** $tmp2873 = (frost$core$String**) ($tmp2865->$data + 16);
frost$core$String* $tmp2874 = *$tmp2873;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
frost$core$String* $tmp2875 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
*(&local33) = $tmp2874;
org$frostlanguage$frostc$ASTNode** $tmp2876 = (org$frostlanguage$frostc$ASTNode**) ($tmp2865->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp2877 = *$tmp2876;
*(&local34) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
org$frostlanguage$frostc$ASTNode* $tmp2878 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
*(&local34) = $tmp2877;
// line 873
frost$collections$Array* $tmp2879 = *(&local28);
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp2880 = (org$frostlanguage$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2881 = *(&local33);
org$frostlanguage$frostc$ASTNode* $tmp2882 = *(&local34);
org$frostlanguage$frostc$Type* $tmp2883 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(param0, $tmp2882);
org$frostlanguage$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlanguage$frostc$Type($tmp2880, $tmp2881, $tmp2883);
frost$collections$Array$add$frost$collections$Array$T($tmp2879, ((frost$core$Object*) $tmp2880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
// unreffing REF($590:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
// unreffing REF($587:org.frostlanguage.frostc.MethodDecl.Parameter)
// line 875
frost$collections$Array* $tmp2884 = *(&local30);
org$frostlanguage$frostc$ASTNode* $tmp2885 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2886 = (frost$core$Int64) {22};
org$frostlanguage$frostc$Position $tmp2887 = *(&local32);
frost$core$String* $tmp2888 = *(&local33);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp2885, $tmp2886, $tmp2887, $tmp2888);
frost$collections$Array$add$frost$collections$Array$T($tmp2884, ((frost$core$Object*) $tmp2885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2885));
// unreffing REF($603:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp2889 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
// unreffing type
*(&local34) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp2890 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
// unreffing name
*(&local33) = ((frost$core$String*) NULL);
goto block29;
block31:;
// line 878
frost$core$Bit $tmp2891 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2892 = $tmp2891.value;
if ($tmp2892) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp2893 = (frost$core$Int64) {878};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2894, $tmp2893);
abort(); // unreachable
block32:;
goto block29;
block29:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2863);
// unreffing REF($547:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp2895 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
// unreffing p
*(&local31) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
// unreffing REF($536:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 882
org$frostlanguage$frostc$ASTNode* $tmp2896 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2897 = (frost$core$Int64) {9};
org$frostlanguage$frostc$Position $tmp2898 = *(&local18);
org$frostlanguage$frostc$ASTNode* $tmp2899 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2900 = (frost$core$Int64) {22};
org$frostlanguage$frostc$Position $tmp2901 = *(&local18);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp2899, $tmp2900, $tmp2901, &$s2902);
org$frostlanguage$frostc$FixedArray* $tmp2903 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp2903);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp2896, $tmp2897, $tmp2898, $tmp2899, $tmp2903);
*(&local35) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
org$frostlanguage$frostc$ASTNode* $tmp2904 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
*(&local35) = $tmp2896;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
// unreffing REF($652:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
// unreffing REF($648:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
// unreffing REF($645:org.frostlanguage.frostc.ASTNode)
// line 885
frost$collections$Array* $tmp2905 = *(&local29);
org$frostlanguage$frostc$ASTNode* $tmp2906 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2907 = (frost$core$Int64) {9};
org$frostlanguage$frostc$Position $tmp2908 = *(&local18);
org$frostlanguage$frostc$ASTNode* $tmp2909 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2910 = (frost$core$Int64) {16};
org$frostlanguage$frostc$Position $tmp2911 = *(&local18);
org$frostlanguage$frostc$ASTNode* $tmp2912 = *(&local35);
frost$core$String* $tmp2913 = *(&local27);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String($tmp2909, $tmp2910, $tmp2911, $tmp2912, $tmp2913);
frost$collections$Array* $tmp2914 = *(&local30);
org$frostlanguage$frostc$FixedArray* $tmp2915 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp2914);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp2906, $tmp2907, $tmp2908, $tmp2909, $tmp2915);
frost$collections$Array$add$frost$collections$Array$T($tmp2905, ((frost$core$Object*) $tmp2906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
// unreffing REF($686:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
// unreffing REF($678:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
// unreffing REF($675:org.frostlanguage.frostc.ASTNode)
// line 888
*(&local36) = ((org$frostlanguage$frostc$Type*) NULL);
// line 889
org$frostlanguage$frostc$ASTNode* $tmp2916 = *(&local25);
frost$core$Bit $tmp2917 = frost$core$Bit$init$builtin_bit($tmp2916 != NULL);
bool $tmp2918 = $tmp2917.value;
if ($tmp2918) goto block34; else goto block36;
block34:;
// line 890
org$frostlanguage$frostc$ASTNode* $tmp2919 = *(&local25);
org$frostlanguage$frostc$Type* $tmp2920 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(param0, $tmp2919);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
org$frostlanguage$frostc$Type* $tmp2921 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
*(&local36) = $tmp2920;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
// unreffing REF($711:org.frostlanguage.frostc.Type)
goto block35;
block36:;
// line 1
// line 893
org$frostlanguage$frostc$Type* $tmp2922 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
org$frostlanguage$frostc$Type* $tmp2923 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
*(&local36) = $tmp2922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
// unreffing REF($724:org.frostlanguage.frostc.Type)
goto block35;
block35:;
// line 895
org$frostlanguage$frostc$MethodDecl* $tmp2924 = (org$frostlanguage$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$class);
org$frostlanguage$frostc$ClassDecl** $tmp2925 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2926 = *$tmp2925;
org$frostlanguage$frostc$Position $tmp2927 = org$frostlanguage$frostc$Position$init();
org$frostlanguage$frostc$Annotations* $tmp2928 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp2929 = (frost$core$Int64) {16};
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp2928, $tmp2929);
frost$core$Int64 $tmp2930 = (frost$core$Int64) {0};
org$frostlanguage$frostc$MethodDecl$Kind $tmp2931 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2930);
frost$collections$Array* $tmp2932 = *(&local28);
org$frostlanguage$frostc$Type* $tmp2933 = *(&local36);
frost$collections$Array* $tmp2934 = *(&local29);
org$frostlanguage$frostc$FixedArray* $tmp2935 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp2934);
org$frostlanguage$frostc$MethodDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$Parameter$GT$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp2924, $tmp2926, $tmp2927, ((frost$core$String*) NULL), $tmp2928, $tmp2931, &$s2936, ((frost$collections$Array*) NULL), $tmp2932, $tmp2933, $tmp2935);
*(&local37) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
org$frostlanguage$frostc$MethodDecl* $tmp2937 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
*(&local37) = $tmp2924;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
// unreffing REF($750:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
// unreffing REF($741:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
// unreffing REF($736:org.frostlanguage.frostc.MethodDecl)
// line 899
org$frostlanguage$frostc$ClassDecl** $tmp2938 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2939 = *$tmp2938;
frost$collections$Array** $tmp2940 = &$tmp2939->methods;
frost$collections$Array* $tmp2941 = *$tmp2940;
org$frostlanguage$frostc$MethodDecl* $tmp2942 = *(&local37);
frost$collections$Array$add$frost$collections$Array$T($tmp2941, ((frost$core$Object*) $tmp2942));
org$frostlanguage$frostc$MethodDecl* $tmp2943 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
// unreffing bareMain
*(&local37) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$Type* $tmp2944 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
// unreffing returnType
*(&local36) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2945 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
// unreffing bareConstruct
*(&local35) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2946 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
// unreffing mainArguments
*(&local30) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2947 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
// unreffing mainStatements
*(&local29) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2948 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
// unreffing mainParameters
*(&local28) = ((frost$collections$Array*) NULL);
goto block24;
block25:;
// line 1
// line 902
frost$core$String* $tmp2949 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
frost$core$String* $tmp2950 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
*(&local27) = $tmp2949;
goto block24;
block24:;
// line 904
frost$core$Weak** $tmp2951 = &param0->compiler;
frost$core$Weak* $tmp2952 = *$tmp2951;
frost$core$Object* $tmp2953 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2952);
frost$collections$Stack** $tmp2954 = &((org$frostlanguage$frostc$Compiler*) $tmp2953)->currentClass;
frost$collections$Stack* $tmp2955 = *$tmp2954;
org$frostlanguage$frostc$ClassDecl** $tmp2956 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2957 = *$tmp2956;
frost$collections$Stack$push$frost$collections$Stack$T($tmp2955, ((frost$core$Object*) $tmp2957));
frost$core$Frost$unref$frost$core$Object$Q($tmp2953);
// unreffing REF($825:frost.core.Weak.T)
// line 905
org$frostlanguage$frostc$ClassDecl** $tmp2958 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2959 = *$tmp2958;
org$frostlanguage$frostc$Position $tmp2960 = *(&local18);
org$frostlanguage$frostc$ASTNode* $tmp2961 = *(&local19);
org$frostlanguage$frostc$FixedArray* $tmp2962 = *(&local20);
org$frostlanguage$frostc$MethodDecl$Kind $tmp2963 = *(&local21);
frost$core$String* $tmp2964 = *(&local27);
org$frostlanguage$frostc$FixedArray* $tmp2965 = *(&local23);
org$frostlanguage$frostc$FixedArray* $tmp2966 = *(&local24);
org$frostlanguage$frostc$ASTNode* $tmp2967 = *(&local25);
org$frostlanguage$frostc$FixedArray* $tmp2968 = *(&local26);
org$frostlanguage$frostc$MethodDecl* $tmp2969 = org$frostlanguage$frostc$Scanner$scanMethod$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$R$org$frostlanguage$frostc$MethodDecl$Q(param0, $tmp2959, $tmp2960, $tmp2961, $tmp2962, $tmp2963, $tmp2964, $tmp2965, $tmp2966, $tmp2967, $tmp2968);
*(&local38) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
org$frostlanguage$frostc$MethodDecl* $tmp2970 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
*(&local38) = $tmp2969;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
// unreffing REF($851:org.frostlanguage.frostc.MethodDecl?)
// line 907
org$frostlanguage$frostc$MethodDecl* $tmp2971 = *(&local38);
org$frostlanguage$frostc$Annotations** $tmp2972 = &$tmp2971->annotations;
org$frostlanguage$frostc$Annotations* $tmp2973 = *$tmp2972;
frost$core$Bit $tmp2974 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2973);
bool $tmp2975 = $tmp2974.value;
if ($tmp2975) goto block37; else goto block38;
block37:;
// line 908
org$frostlanguage$frostc$MethodDecl* $tmp2976 = *(&local38);
org$frostlanguage$frostc$Position* $tmp2977 = &((org$frostlanguage$frostc$Symbol*) $tmp2976)->position;
org$frostlanguage$frostc$Position $tmp2978 = *$tmp2977;
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp2978, &$s2979);
// line 910
org$frostlanguage$frostc$MethodDecl* $tmp2980 = *(&local38);
org$frostlanguage$frostc$Annotations** $tmp2981 = &$tmp2980->annotations;
org$frostlanguage$frostc$Annotations* $tmp2982 = *$tmp2981;
frost$core$Int64* $tmp2983 = &$tmp2982->flags;
frost$core$Int64 $tmp2984 = *$tmp2983;
frost$core$Int64 $tmp2985 = (frost$core$Int64) {16};
frost$core$Int64 $tmp2986 = frost$core$Int64$$BNOT$R$frost$core$Int64($tmp2985);
frost$core$Int64 $tmp2987 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp2984, $tmp2986);
frost$core$Int64* $tmp2988 = &$tmp2982->flags;
*$tmp2988 = $tmp2987;
goto block38;
block38:;
// line 912
frost$core$Weak** $tmp2989 = &param0->compiler;
frost$core$Weak* $tmp2990 = *$tmp2989;
frost$core$Object* $tmp2991 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2990);
frost$collections$Stack** $tmp2992 = &((org$frostlanguage$frostc$Compiler*) $tmp2991)->currentClass;
frost$collections$Stack* $tmp2993 = *$tmp2992;
frost$core$Int64 $tmp2994 = (frost$core$Int64) {0};
frost$core$Object* $tmp2995 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2993, $tmp2994);
org$frostlanguage$frostc$ClassDecl** $tmp2996 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp2997 = *$tmp2996;
bool $tmp2998 = ((org$frostlanguage$frostc$ClassDecl*) $tmp2995) == $tmp2997;
frost$core$Bit $tmp2999 = frost$core$Bit$init$builtin_bit($tmp2998);
bool $tmp3000 = $tmp2999.value;
if ($tmp3000) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp3001 = (frost$core$Int64) {912};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3002, $tmp3001);
abort(); // unreachable
block39:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2995);
// unreffing REF($899:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp2991);
// unreffing REF($893:frost.core.Weak.T)
// line 913
frost$core$Weak** $tmp3003 = &param0->compiler;
frost$core$Weak* $tmp3004 = *$tmp3003;
frost$core$Object* $tmp3005 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3004);
frost$collections$Stack** $tmp3006 = &((org$frostlanguage$frostc$Compiler*) $tmp3005)->currentClass;
frost$collections$Stack* $tmp3007 = *$tmp3006;
frost$core$Object* $tmp3008 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3007);
frost$core$Frost$unref$frost$core$Object$Q($tmp3008);
// unreffing REF($925:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp3005);
// unreffing REF($920:frost.core.Weak.T)
// line 914
org$frostlanguage$frostc$ClassDecl** $tmp3009 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp3010 = *$tmp3009;
frost$collections$Array** $tmp3011 = &$tmp3010->methods;
frost$collections$Array* $tmp3012 = *$tmp3011;
org$frostlanguage$frostc$MethodDecl* $tmp3013 = *(&local38);
frost$collections$Array$add$frost$collections$Array$T($tmp3012, ((frost$core$Object*) $tmp3013));
// line 915
org$frostlanguage$frostc$ClassDecl** $tmp3014 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp3015 = *$tmp3014;
org$frostlanguage$frostc$SymbolTable** $tmp3016 = &$tmp3015->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp3017 = *$tmp3016;
org$frostlanguage$frostc$MethodDecl* $tmp3018 = *(&local38);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp3017, ((org$frostlanguage$frostc$Symbol*) $tmp3018));
org$frostlanguage$frostc$MethodDecl* $tmp3019 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
// unreffing m
*(&local38) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$String* $tmp3020 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
// unreffing name
*(&local27) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp3021 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
// unreffing statements
*(&local26) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3022 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3022));
// unreffing rawReturnType
*(&local25) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp3023 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
// unreffing parameters
*(&local24) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp3024 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
// unreffing generics
*(&local23) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$String* $tmp3025 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
// unreffing rawName
*(&local22) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp3026 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
// unreffing annotations
*(&local20) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3027 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3027));
// unreffing dc
*(&local19) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block7;
block20:;
frost$core$Int64 $tmp3028 = (frost$core$Int64) {18};
frost$core$Bit $tmp3029 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2696, $tmp3028);
bool $tmp3030 = $tmp3029.value;
if ($tmp3030) goto block41; else goto block42;
block41:;
org$frostlanguage$frostc$Position* $tmp3031 = (org$frostlanguage$frostc$Position*) ($tmp2694->$data + 0);
org$frostlanguage$frostc$Position $tmp3032 = *$tmp3031;
*(&local39) = $tmp3032;
org$frostlanguage$frostc$ASTNode** $tmp3033 = (org$frostlanguage$frostc$ASTNode**) ($tmp2694->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp3034 = *$tmp3033;
*(&local40) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
org$frostlanguage$frostc$ASTNode* $tmp3035 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
*(&local40) = $tmp3034;
org$frostlanguage$frostc$FixedArray** $tmp3036 = (org$frostlanguage$frostc$FixedArray**) ($tmp2694->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp3037 = *$tmp3036;
*(&local41) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3037));
org$frostlanguage$frostc$FixedArray* $tmp3038 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
*(&local41) = $tmp3037;
org$frostlanguage$frostc$ASTNode** $tmp3039 = (org$frostlanguage$frostc$ASTNode**) ($tmp2694->$data + 32);
org$frostlanguage$frostc$ASTNode* $tmp3040 = *$tmp3039;
*(&local42) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
org$frostlanguage$frostc$ASTNode* $tmp3041 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
*(&local42) = $tmp3040;
// line 918
frost$collections$HashMap* $tmp3042 = *(&local3);
frost$core$String* $tmp3043 = *(&local2);
frost$collections$Array* $tmp3044 = *(&local1);
org$frostlanguage$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlanguage$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3042), $tmp3043, ((frost$collections$List*) $tmp3044));
// line 919
org$frostlanguage$frostc$ClassDecl** $tmp3045 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp3046 = *$tmp3045;
frost$collections$Array** $tmp3047 = &$tmp3046->fields;
frost$collections$Array* $tmp3048 = *$tmp3047;
ITable* $tmp3049 = ((frost$collections$CollectionView*) $tmp3048)->$class->itable;
while ($tmp3049->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3049 = $tmp3049->next;
}
$fn3051 $tmp3050 = $tmp3049->methods[0];
frost$core$Int64 $tmp3052 = $tmp3050(((frost$collections$CollectionView*) $tmp3048));
*(&local43) = $tmp3052;
// line 920
org$frostlanguage$frostc$ClassDecl** $tmp3053 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp3054 = *$tmp3053;
org$frostlanguage$frostc$Position $tmp3055 = *(&local39);
org$frostlanguage$frostc$ASTNode* $tmp3056 = *(&local40);
org$frostlanguage$frostc$FixedArray* $tmp3057 = *(&local41);
org$frostlanguage$frostc$ASTNode* $tmp3058 = *(&local42);
org$frostlanguage$frostc$Scanner$scanFields$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode(param0, $tmp3054, $tmp3055, $tmp3056, $tmp3057, $tmp3058);
// line 921
frost$core$Int64 $tmp3059 = *(&local43);
org$frostlanguage$frostc$ClassDecl** $tmp3060 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp3061 = *$tmp3060;
frost$collections$Array** $tmp3062 = &$tmp3061->fields;
frost$collections$Array* $tmp3063 = *$tmp3062;
ITable* $tmp3064 = ((frost$collections$CollectionView*) $tmp3063)->$class->itable;
while ($tmp3064->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3064 = $tmp3064->next;
}
$fn3066 $tmp3065 = $tmp3064->methods[0];
frost$core$Int64 $tmp3067 = $tmp3065(((frost$collections$CollectionView*) $tmp3063));
frost$core$Bit $tmp3068 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3069 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3059, $tmp3067, $tmp3068);
frost$core$Int64 $tmp3070 = $tmp3069.min;
*(&local44) = $tmp3070;
frost$core$Int64 $tmp3071 = $tmp3069.max;
frost$core$Bit $tmp3072 = $tmp3069.inclusive;
bool $tmp3073 = $tmp3072.value;
frost$core$Int64 $tmp3074 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3075 = frost$core$Int64$convert$R$frost$core$UInt64($tmp3074);
if ($tmp3073) goto block46; else goto block47;
block46:;
int64_t $tmp3076 = $tmp3070.value;
int64_t $tmp3077 = $tmp3071.value;
bool $tmp3078 = $tmp3076 <= $tmp3077;
frost$core$Bit $tmp3079 = (frost$core$Bit) {$tmp3078};
bool $tmp3080 = $tmp3079.value;
if ($tmp3080) goto block43; else goto block44;
block47:;
int64_t $tmp3081 = $tmp3070.value;
int64_t $tmp3082 = $tmp3071.value;
bool $tmp3083 = $tmp3081 < $tmp3082;
frost$core$Bit $tmp3084 = (frost$core$Bit) {$tmp3083};
bool $tmp3085 = $tmp3084.value;
if ($tmp3085) goto block43; else goto block44;
block43:;
// line 922
org$frostlanguage$frostc$ClassDecl** $tmp3086 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp3087 = *$tmp3086;
frost$collections$Array** $tmp3088 = &$tmp3087->fields;
frost$collections$Array* $tmp3089 = *$tmp3088;
frost$core$Int64 $tmp3090 = *(&local44);
frost$core$Object* $tmp3091 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3089, $tmp3090);
*(&local45) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FieldDecl*) $tmp3091)));
org$frostlanguage$frostc$FieldDecl* $tmp3092 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
*(&local45) = ((org$frostlanguage$frostc$FieldDecl*) $tmp3091);
frost$core$Frost$unref$frost$core$Object$Q($tmp3091);
// unreffing REF($1099:frost.collections.Array.T)
// line 923
org$frostlanguage$frostc$FieldDecl* $tmp3093 = *(&local45);
org$frostlanguage$frostc$FieldDecl$Kind* $tmp3094 = &$tmp3093->fieldKind;
org$frostlanguage$frostc$FieldDecl$Kind $tmp3095 = *$tmp3094;
org$frostlanguage$frostc$FieldDecl$Kind$wrapper* $tmp3096;
$tmp3096 = (org$frostlanguage$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$FieldDecl$Kind$wrapperclass);
$tmp3096->value = $tmp3095;
frost$core$Int64 $tmp3097 = (frost$core$Int64) {2};
org$frostlanguage$frostc$FieldDecl$Kind $tmp3098 = org$frostlanguage$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp3097);
org$frostlanguage$frostc$FieldDecl$Kind$wrapper* $tmp3099;
$tmp3099 = (org$frostlanguage$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$FieldDecl$Kind$wrapperclass);
$tmp3099->value = $tmp3098;
ITable* $tmp3100 = ((frost$core$Equatable*) $tmp3096)->$class->itable;
while ($tmp3100->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3100 = $tmp3100->next;
}
$fn3102 $tmp3101 = $tmp3100->methods[1];
frost$core$Bit $tmp3103 = $tmp3101(((frost$core$Equatable*) $tmp3096), ((frost$core$Equatable*) $tmp3099));
bool $tmp3104 = $tmp3103.value;
if ($tmp3104) goto block50; else goto block51;
block50:;
org$frostlanguage$frostc$FieldDecl* $tmp3105 = *(&local45);
org$frostlanguage$frostc$Annotations** $tmp3106 = &$tmp3105->annotations;
org$frostlanguage$frostc$Annotations* $tmp3107 = *$tmp3106;
frost$core$Bit $tmp3108 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3107);
*(&local46) = $tmp3108;
goto block52;
block51:;
*(&local46) = $tmp3103;
goto block52;
block52:;
frost$core$Bit $tmp3109 = *(&local46);
bool $tmp3110 = $tmp3109.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3099)));
// unreffing REF($1119:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3096)));
// unreffing REF($1115:frost.core.Equatable<org.frostlanguage.frostc.FieldDecl.Kind>)
if ($tmp3110) goto block48; else goto block49;
block48:;
// line 925
org$frostlanguage$frostc$FieldDecl* $tmp3111 = *(&local45);
org$frostlanguage$frostc$Position* $tmp3112 = &((org$frostlanguage$frostc$Symbol*) $tmp3111)->position;
org$frostlanguage$frostc$Position $tmp3113 = *$tmp3112;
org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp3113, &$s3114);
goto block49;
block49:;
org$frostlanguage$frostc$FieldDecl* $tmp3115 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
// unreffing f
*(&local45) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
goto block45;
block45:;
frost$core$Int64 $tmp3116 = *(&local44);
int64_t $tmp3117 = $tmp3071.value;
int64_t $tmp3118 = $tmp3116.value;
int64_t $tmp3119 = $tmp3117 - $tmp3118;
frost$core$Int64 $tmp3120 = (frost$core$Int64) {$tmp3119};
frost$core$UInt64 $tmp3121 = frost$core$Int64$convert$R$frost$core$UInt64($tmp3120);
if ($tmp3073) goto block54; else goto block55;
block54:;
uint64_t $tmp3122 = $tmp3121.value;
uint64_t $tmp3123 = $tmp3075.value;
bool $tmp3124 = $tmp3122 >= $tmp3123;
frost$core$Bit $tmp3125 = (frost$core$Bit) {$tmp3124};
bool $tmp3126 = $tmp3125.value;
if ($tmp3126) goto block53; else goto block44;
block55:;
uint64_t $tmp3127 = $tmp3121.value;
uint64_t $tmp3128 = $tmp3075.value;
bool $tmp3129 = $tmp3127 > $tmp3128;
frost$core$Bit $tmp3130 = (frost$core$Bit) {$tmp3129};
bool $tmp3131 = $tmp3130.value;
if ($tmp3131) goto block53; else goto block44;
block53:;
int64_t $tmp3132 = $tmp3116.value;
int64_t $tmp3133 = $tmp3074.value;
int64_t $tmp3134 = $tmp3132 + $tmp3133;
frost$core$Int64 $tmp3135 = (frost$core$Int64) {$tmp3134};
*(&local44) = $tmp3135;
goto block43;
block44:;
org$frostlanguage$frostc$ASTNode* $tmp3136 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3136));
// unreffing varDecl
*(&local42) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp3137 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
// unreffing annotations
*(&local41) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3138 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
// unreffing dc
*(&local40) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block7;
block42:;
// line 931
frost$core$Bit $tmp3139 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3140 = $tmp3139.value;
if ($tmp3140) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp3141 = (frost$core$Int64) {931};
org$frostlanguage$frostc$ASTNode* $tmp3142 = *(&local4);
frost$core$String* $tmp3143 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3144, ((frost$core$Object*) $tmp3142));
frost$core$String* $tmp3145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3143, &$s3146);
org$frostlanguage$frostc$ASTNode* $tmp3147 = *(&local4);
frost$core$Int64* $tmp3148 = &$tmp3147->$rawValue;
frost$core$Int64 $tmp3149 = *$tmp3148;
frost$core$Int64$wrapper* $tmp3150;
$tmp3150 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3150->value = $tmp3149;
frost$core$String* $tmp3151 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3145, ((frost$core$Object*) $tmp3150));
frost$core$String* $tmp3152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3151, &$s3153);
org$frostlanguage$frostc$ASTNode* $tmp3154 = *(&local4);
$fn3156 $tmp3155 = ($fn3156) $tmp3154->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp3157 = $tmp3155($tmp3154);
org$frostlanguage$frostc$Position$wrapper* $tmp3158;
$tmp3158 = (org$frostlanguage$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Position$wrapperclass);
$tmp3158->value = $tmp3157;
frost$core$String* $tmp3159 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3152, ((frost$core$Object*) $tmp3158));
frost$core$String* $tmp3160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3159, &$s3161);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3162, $tmp3141, $tmp3160);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
// unreffing REF($1215:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
// unreffing REF($1214:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
// unreffing REF($1213:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3152));
// unreffing REF($1209:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3151));
// unreffing REF($1208:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3150));
// unreffing REF($1207:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3145));
// unreffing REF($1203:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3143));
// unreffing REF($1202:frost.core.String)
abort(); // unreachable
block56:;
goto block7;
block7:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2692);
// unreffing REF($78:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp3163 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
// unreffing e
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
// unreffing REF($67:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 935
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File** $tmp3164 = &param0->source;
frost$io$File* $tmp3165 = *$tmp3164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
frost$io$File** $tmp3166 = &param0->source;
*$tmp3166 = ((frost$io$File*) NULL);
// line 936
frost$collections$Array* $tmp3167 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp3167)));
frost$collections$HashMap* $tmp3168 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
// unreffing aliases
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp3169 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
// unreffing currentPackage
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp3170 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp3171 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3171));
// unreffing entries
*(&local0) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((frost$collections$ListView*) $tmp3167);
block3:;
// line 939
frost$core$Bit $tmp3172 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3173 = $tmp3172.value;
if ($tmp3173) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp3174 = (frost$core$Int64) {939};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3175, $tmp3174);
abort(); // unreachable
block58:;
goto block1;
block1:;
frost$core$Bit $tmp3176 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3177 = $tmp3176.value;
if ($tmp3177) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp3178 = (frost$core$Int64) {826};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3179, $tmp3178, &$s3180);
abort(); // unreachable
block60:;
abort(); // unreachable

}
void org$frostlanguage$frostc$Scanner$cleanup(org$frostlanguage$frostc$Scanner* param0) {

// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp3181 = &param0->compiler;
frost$core$Weak* $tmp3182 = *$tmp3181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
org$frostlanguage$frostc$ClassDecl** $tmp3183 = &param0->bareCodeClass;
org$frostlanguage$frostc$ClassDecl* $tmp3184 = *$tmp3183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
frost$io$File** $tmp3185 = &param0->source;
frost$io$File* $tmp3186 = *$tmp3185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
return;

}

