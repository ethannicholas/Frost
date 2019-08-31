#include "org/frostlang/frostc/frostdoc/LinkResolver.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Equatable.h"
#include "frost/core/MutableString.h"
#include "frost/core/String/MatchIterator.h"
#include "frost/collections/Iterator.h"
#include "frost/io/Console.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Iterable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/String/Index.h"
#include "frost/core/Matcher.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "org/frostlang/frostc/parser/Parser.h"
#include "org/frostlang/frostc/Scanner.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$LinkResolver$class_type org$frostlang$frostc$frostdoc$LinkResolver$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$LinkResolver$cleanup, org$frostlang$frostc$frostdoc$LinkResolver$matches$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$frost$core$Bit, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$ClassDecl$R$frost$core$String, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$FieldDecl$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$MethodDecl$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$Symbol$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$LinkResolver$resolve$frost$core$String$R$frost$core$String$Q} };

typedef frost$core$Int (*$fn15)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn19)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn30)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn60)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn80)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn84)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn126)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn207)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$String* (*$fn230)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$collections$Iterator* (*$fn247)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn251)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn256)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn266)(frost$core$Object*);
typedef frost$core$Bit (*$fn281)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn290)(frost$core$Object*);
typedef frost$core$String* (*$fn312)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$String* (*$fn321)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*);
typedef frost$core$String* (*$fn347)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$String* (*$fn381)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$String* (*$fn443)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$Object* (*$fn519)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn530)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn543)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn562)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn573)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn604)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn673)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn697)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn804)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn814)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn834)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn838)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn843)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn849)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn854)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 42, 561282631868116756, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 93, -6936278265055109166, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2f", 3, -587371103437254554, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23", 1, -5808625042874858702, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23", 1, -5808625042874858702, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x74\x70", 4, -8614080090317487483, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x77\x2b", 3, -5621372931950450467, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, -3737132400950803795, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, -3548194912101010482, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e", 131, -5758671458487631293, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e", 131, -5758671458487631293, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e", 131, -5758671458487631293, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s599 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e", 131, -5758671458487631293, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s610 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, -794231800371556794, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e", 131, -5758671458487631293, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s705 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s720 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s745 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s758 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s759 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s790 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, 5826254796962425023, NULL };
static frost$core$String $s812 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };

void org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Compiler* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:23
org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String$org$frostlang$frostc$ClassDecl$Q(param0, param1, param2, ((org$frostlang$frostc$ClassDecl*) NULL));
return;

}
void org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String$org$frostlang$frostc$ClassDecl$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Compiler* param1, frost$core$String* param2, org$frostlang$frostc$ClassDecl* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:27
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp5 = &param0->apiRelativePath;
frost$core$String* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$String** $tmp7 = &param0->apiRelativePath;
*$tmp7 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ClassDecl** $tmp8 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$frostc$ClassDecl** $tmp10 = &param0->context;
*$tmp10 = param3;
return;

}
frost$core$Bit org$frostlang$frostc$frostdoc$LinkResolver$matches$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$frost$core$Bit(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$MethodDecl* param1, frost$collections$ListView* param2) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:33
frost$collections$Array** $tmp11 = &param1->parameters;
frost$collections$Array* $tmp12 = *$tmp11;
ITable* $tmp13 = ((frost$collections$CollectionView*) $tmp12)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Int $tmp16 = $tmp14(((frost$collections$CollectionView*) $tmp12));
ITable* $tmp17 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
frost$core$Int $tmp20 = $tmp18(((frost$collections$CollectionView*) param2));
int64_t $tmp21 = $tmp16.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 != $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:34
frost$core$Bit $tmp26 = (frost$core$Bit) {false};
return $tmp26;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:36
frost$core$Int $tmp27 = (frost$core$Int) {0u};
ITable* $tmp28 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
$fn30 $tmp29 = $tmp28->methods[0];
frost$core$Int $tmp31 = $tmp29(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp32 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp33 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp27, $tmp31, $tmp32);
frost$core$Int $tmp34 = $tmp33.min;
*(&local0) = $tmp34;
frost$core$Int $tmp35 = $tmp33.max;
frost$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
frost$core$Int $tmp38 = (frost$core$Int) {1u};
if ($tmp37) goto block6; else goto block7;
block6:;
int64_t $tmp39 = $tmp34.value;
int64_t $tmp40 = $tmp35.value;
bool $tmp41 = $tmp39 <= $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block3; else goto block4;
block7:;
int64_t $tmp44 = $tmp34.value;
int64_t $tmp45 = $tmp35.value;
bool $tmp46 = $tmp44 < $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:37
frost$collections$Array** $tmp49 = &param1->parameters;
frost$collections$Array* $tmp50 = *$tmp49;
frost$core$Int $tmp51 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from LinkResolver.frost:37:28
frost$core$Int $tmp52 = (frost$core$Int) {0u};
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 >= $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block13; else goto block12;
block13:;
ITable* $tmp58 = ((frost$collections$CollectionView*) $tmp50)->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp58 = $tmp58->next;
}
$fn60 $tmp59 = $tmp58->methods[0];
frost$core$Int $tmp61 = $tmp59(((frost$collections$CollectionView*) $tmp50));
int64_t $tmp62 = $tmp51.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 < $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block11; else goto block12;
block12:;
frost$core$Int $tmp67 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s68, $tmp67, &$s69);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp70 = &$tmp50->data;
frost$core$Object** $tmp71 = *$tmp70;
frost$core$Int64 $tmp72 = frost$core$Int64$init$frost$core$Int($tmp51);
int64_t $tmp73 = $tmp72.value;
frost$core$Object* $tmp74 = $tmp71[$tmp73];
frost$core$Frost$ref$frost$core$Object$Q($tmp74);
org$frostlang$frostc$Type** $tmp75 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp74)->type;
org$frostlang$frostc$Type* $tmp76 = *$tmp75;
frost$core$Int $tmp77 = *(&local0);
ITable* $tmp78 = param2->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp78 = $tmp78->next;
}
$fn80 $tmp79 = $tmp78->methods[0];
frost$core$Object* $tmp81 = $tmp79(param2, $tmp77);
ITable* $tmp82 = ((frost$core$Equatable*) $tmp76)->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp82 = $tmp82->next;
}
$fn84 $tmp83 = $tmp82->methods[1];
frost$core$Bit $tmp85 = $tmp83(((frost$core$Equatable*) $tmp76), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp81)));
bool $tmp86 = $tmp85.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp81);
frost$core$Frost$unref$frost$core$Object$Q($tmp74);
if ($tmp86) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:38
frost$core$Bit $tmp87 = (frost$core$Bit) {false};
return $tmp87;
block9:;
frost$core$Int $tmp88 = *(&local0);
int64_t $tmp89 = $tmp35.value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 - $tmp90;
frost$core$Int $tmp92 = (frost$core$Int) {$tmp91};
if ($tmp37) goto block15; else goto block16;
block15:;
int64_t $tmp93 = $tmp92.value;
int64_t $tmp94 = $tmp38.value;
bool $tmp95 = $tmp93 >= $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block14; else goto block4;
block16:;
int64_t $tmp98 = $tmp92.value;
int64_t $tmp99 = $tmp38.value;
bool $tmp100 = $tmp98 > $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block14; else goto block4;
block14:;
int64_t $tmp103 = $tmp88.value;
int64_t $tmp104 = $tmp38.value;
int64_t $tmp105 = $tmp103 + $tmp104;
frost$core$Int $tmp106 = (frost$core$Int) {$tmp105};
*(&local0) = $tmp106;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:41
frost$core$Bit $tmp107 = (frost$core$Bit) {true};
return $tmp107;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:45
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:46
org$frostlang$frostc$ClassDecl** $tmp108 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp109 = *$tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109 != NULL};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:47
org$frostlang$frostc$ClassDecl** $tmp112 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp113 = *$tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113 != NULL};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block4; else goto block5;
block5:;
frost$core$Int $tmp116 = (frost$core$Int) {47u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s117, $tmp116, &$s118);
abort(); // unreachable
block4:;
frost$core$String** $tmp119 = &$tmp113->name;
frost$core$String* $tmp120 = *$tmp119;
// begin inline call to function frost.core.String.find(needle:frost.core.String):frost.collections.Iterator<frost.core.String.Index> from LinkResolver.frost:47:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1186
frost$core$Bit $tmp121 = (frost$core$Bit) {false};
// begin inline call to function frost.core.String.find(needle:frost.core.String, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Index> from String.frost:1186:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1190
FROST_ASSERT(56 == sizeof(frost$core$String$MatchIterator));
frost$core$String$MatchIterator* $tmp122 = (frost$core$String$MatchIterator*) frostObjectAlloc(56, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp122, $tmp120, &$s123, $tmp121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp122)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp122)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp122)));
ITable* $tmp124 = ((frost$collections$Iterator*) $tmp122)->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[2];
frost$core$Int $tmp127 = $tmp125(((frost$collections$Iterator*) $tmp122));
// begin inline call to function frost.core.String.*(count:frost.core.Int):frost.core.String from LinkResolver.frost:47:27
frost$core$Int $tmp128 = (frost$core$Int) {0u};
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128.value;
bool $tmp131 = $tmp129 >= $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block9; else goto block10;
block10:;
frost$core$Int $tmp134 = (frost$core$Int) {567u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s135, $tmp134, &$s136);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:568
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp137 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp137);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$MutableString* $tmp138 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local1) = $tmp137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:569
frost$core$Int $tmp139 = (frost$core$Int) {0u};
frost$core$Bit $tmp140 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp141 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp139, $tmp127, $tmp140);
frost$core$Int $tmp142 = $tmp141.min;
*(&local2) = $tmp142;
frost$core$Int $tmp143 = $tmp141.max;
frost$core$Bit $tmp144 = $tmp141.inclusive;
bool $tmp145 = $tmp144.value;
frost$core$Int $tmp146 = (frost$core$Int) {1u};
if ($tmp145) goto block14; else goto block15;
block14:;
int64_t $tmp147 = $tmp142.value;
int64_t $tmp148 = $tmp143.value;
bool $tmp149 = $tmp147 <= $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block11; else goto block12;
block15:;
int64_t $tmp152 = $tmp142.value;
int64_t $tmp153 = $tmp143.value;
bool $tmp154 = $tmp152 < $tmp153;
frost$core$Bit $tmp155 = (frost$core$Bit) {$tmp154};
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:570
frost$core$MutableString* $tmp157 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp157, &$s158);
frost$core$Int $tmp159 = *(&local2);
int64_t $tmp160 = $tmp143.value;
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160 - $tmp161;
frost$core$Int $tmp163 = (frost$core$Int) {$tmp162};
if ($tmp145) goto block17; else goto block18;
block17:;
int64_t $tmp164 = $tmp163.value;
int64_t $tmp165 = $tmp146.value;
bool $tmp166 = $tmp164 >= $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block16; else goto block12;
block18:;
int64_t $tmp169 = $tmp163.value;
int64_t $tmp170 = $tmp146.value;
bool $tmp171 = $tmp169 > $tmp170;
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171};
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block16; else goto block12;
block16:;
int64_t $tmp174 = $tmp159.value;
int64_t $tmp175 = $tmp146.value;
int64_t $tmp176 = $tmp174 + $tmp175;
frost$core$Int $tmp177 = (frost$core$Int) {$tmp176};
*(&local2) = $tmp177;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:572
frost$core$MutableString* $tmp178 = *(&local1);
frost$core$String* $tmp179 = frost$core$MutableString$finish$R$frost$core$String($tmp178);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$MutableString* $tmp180 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$String* $tmp181 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local0) = $tmp179;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp122)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:48
frost$core$String* $tmp182 = *(&local0);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from LinkResolver.frost:48:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp182);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s183);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:51
frost$core$String** $tmp184 = &param0->apiRelativePath;
frost$core$String* $tmp185 = *$tmp184;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$String* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local0) = $tmp185;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:53
frost$core$String* $tmp187 = *(&local0);
frost$core$String** $tmp188 = &param1->name;
frost$core$String* $tmp189 = *$tmp188;
frost$core$String* $tmp190 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp189, &$s191, &$s192);
frost$core$String* $tmp193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp187, $tmp190);
frost$core$String* $tmp194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp193, &$s195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$String* $tmp196 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local0) = ((frost$core$String*) NULL);
return $tmp194;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$FieldDecl$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$FieldDecl* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:57
frost$core$Weak** $tmp197 = &param1->owner;
frost$core$Weak* $tmp198 = *$tmp197;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkResolver.frost:57:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp199 = &$tmp198->_valid;
frost$core$Bit $tmp200 = *$tmp199;
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block3; else goto block4;
block4:;
frost$core$Int $tmp202 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s203, $tmp202);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp204 = &$tmp198->value;
frost$core$Object* $tmp205 = *$tmp204;
frost$core$Frost$ref$frost$core$Object$Q($tmp205);
$fn207 $tmp206 = ($fn207) param0->$class->vtable[3];
frost$core$String* $tmp208 = $tmp206(param0, ((org$frostlang$frostc$ClassDecl*) $tmp205));
frost$core$String** $tmp209 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp210 = *$tmp209;
frost$core$String* $tmp211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s212, $tmp210);
frost$core$String* $tmp213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp211, &$s214);
frost$core$String* $tmp215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp208, $tmp213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q($tmp205);
return $tmp215;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$MethodDecl$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:61
org$frostlang$frostc$Compiler** $tmp216 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp217 = *$tmp216;
frost$core$Bit $tmp218 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit($tmp217, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:62
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp219 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$Weak** $tmp220 = &param1->owner;
frost$core$Weak* $tmp221 = *$tmp220;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkResolver.frost:62:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp222 = &$tmp221->_valid;
frost$core$Bit $tmp223 = *$tmp222;
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block3; else goto block4;
block4:;
frost$core$Int $tmp225 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s226, $tmp225);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp227 = &$tmp221->value;
frost$core$Object* $tmp228 = *$tmp227;
frost$core$Frost$ref$frost$core$Object$Q($tmp228);
$fn230 $tmp229 = ($fn230) param0->$class->vtable[3];
frost$core$String* $tmp231 = $tmp229(param0, ((org$frostlang$frostc$ClassDecl*) $tmp228));
frost$core$MutableString$init$frost$core$String($tmp219, $tmp231);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$MutableString* $tmp232 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local0) = $tmp219;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q($tmp228);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:63
frost$core$MutableString* $tmp233 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp233, &$s234);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:64
frost$core$MutableString* $tmp235 = *(&local0);
frost$core$String** $tmp236 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp237 = *$tmp236;
frost$core$MutableString$append$frost$core$String($tmp235, $tmp237);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:65
frost$core$MutableString* $tmp238 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp238, &$s239);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:66
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s240));
frost$core$String* $tmp241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local1) = &$s242;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:67
frost$collections$Array** $tmp243 = &param1->parameters;
frost$collections$Array* $tmp244 = *$tmp243;
ITable* $tmp245 = ((frost$collections$Iterable*) $tmp244)->$class->itable;
while ($tmp245->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
frost$collections$Iterator* $tmp248 = $tmp246(((frost$collections$Iterable*) $tmp244));
goto block5;
block5:;
ITable* $tmp249 = $tmp248->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[0];
frost$core$Bit $tmp252 = $tmp250($tmp248);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp254 = $tmp248->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[1];
frost$core$Object* $tmp257 = $tmp255($tmp248);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp257)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp258 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp257);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:68
frost$core$MutableString* $tmp259 = *(&local0);
frost$core$String* $tmp260 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp259, $tmp260);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:69
frost$core$MutableString* $tmp261 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp262 = *(&local2);
org$frostlang$frostc$Type** $tmp263 = &$tmp262->type;
org$frostlang$frostc$Type* $tmp264 = *$tmp263;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from LinkResolver.frost:69:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn266 $tmp265 = ($fn266) ((frost$core$Object*) $tmp264)->$class->vtable[0];
frost$core$String* $tmp267 = $tmp265(((frost$core$Object*) $tmp264));
frost$core$MutableString$append$frost$core$String($tmp261, $tmp267);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:70
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s268));
frost$core$String* $tmp269 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local1) = &$s270;
frost$core$Frost$unref$frost$core$Object$Q($tmp257);
org$frostlang$frostc$MethodDecl$Parameter* $tmp271 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:72
frost$core$MutableString* $tmp272 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp272, &$s273);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:73
org$frostlang$frostc$Type** $tmp274 = &param1->returnType;
org$frostlang$frostc$Type* $tmp275 = *$tmp274;
frost$core$String** $tmp276 = &((org$frostlang$frostc$Symbol*) $tmp275)->name;
frost$core$String* $tmp277 = *$tmp276;
ITable* $tmp279 = ((frost$core$Equatable*) $tmp277)->$class->itable;
while ($tmp279->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp279 = $tmp279->next;
}
$fn281 $tmp280 = $tmp279->methods[1];
frost$core$Bit $tmp282 = $tmp280(((frost$core$Equatable*) $tmp277), ((frost$core$Equatable*) &$s278));
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:74
frost$core$MutableString* $tmp284 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp284, &$s285);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:75
frost$core$MutableString* $tmp286 = *(&local0);
org$frostlang$frostc$Type** $tmp287 = &param1->returnType;
org$frostlang$frostc$Type* $tmp288 = *$tmp287;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from LinkResolver.frost:75:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn290 $tmp289 = ($fn290) ((frost$core$Object*) $tmp288)->$class->vtable[0];
frost$core$String* $tmp291 = $tmp289(((frost$core$Object*) $tmp288));
frost$core$MutableString$append$frost$core$String($tmp286, $tmp291);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:77
frost$core$MutableString* $tmp292 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp292, &$s293, &$s294);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:78
frost$core$MutableString* $tmp295 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp295, &$s296, &$s297);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:79
frost$core$MutableString* $tmp298 = *(&local0);
frost$core$String* $tmp299 = frost$core$MutableString$finish$R$frost$core$String($tmp298);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$String* $tmp300 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp301 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp299;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$Symbol$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Symbol* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:83
org$frostlang$frostc$Symbol$Kind* $tmp302 = &param1->kind;
org$frostlang$frostc$Symbol$Kind $tmp303 = *$tmp302;
frost$core$Int $tmp304 = $tmp303.$rawValue;
frost$core$Int $tmp305 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LinkResolver.frost:84:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp306 = $tmp304.value;
int64_t $tmp307 = $tmp305.value;
bool $tmp308 = $tmp306 == $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:85
$fn312 $tmp311 = ($fn312) param0->$class->vtable[4];
frost$core$String* $tmp313 = $tmp311(param0, ((org$frostlang$frostc$FieldDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
return $tmp313;
block3:;
frost$core$Int $tmp314 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LinkResolver.frost:87:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp315 = $tmp304.value;
int64_t $tmp316 = $tmp314.value;
bool $tmp317 = $tmp315 == $tmp316;
frost$core$Bit $tmp318 = (frost$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:88
$fn321 $tmp320 = ($fn321) param0->$class->vtable[5];
frost$core$String* $tmp322 = $tmp320(param0, ((org$frostlang$frostc$MethodDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
return $tmp322;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
goto block8;
block8:;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$resolve$frost$core$String$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, frost$core$String* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
frost$core$String$Index$nullable local2;
org$frostlang$frostc$Symbol* local3 = NULL;
frost$collections$ListView* local4 = NULL;
frost$core$Matcher* local5 = NULL;
frost$collections$Array* local6 = NULL;
frost$core$Int local7;
frost$collections$ListView* local8 = NULL;
frost$collections$Array* local9 = NULL;
frost$io$File* local10 = NULL;
org$frostlang$frostc$ASTNode* local11 = NULL;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$Type* local13 = NULL;
org$frostlang$frostc$parser$Token$Kind local14;
org$frostlang$frostc$parser$Token$Kind local15;
org$frostlang$frostc$parser$Token$nullable local16;
org$frostlang$frostc$parser$Token local17;
frost$core$String* local18 = NULL;
frost$core$String$Index$nullable local19;
frost$core$String* local20 = NULL;
org$frostlang$frostc$Symbol* local21 = NULL;
org$frostlang$frostc$MethodDecl* local22 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:97
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from LinkResolver.frost:97:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
frost$core$String$Index $tmp323 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index$nullable $tmp324 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, &$s325, $tmp323);
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp324.nonnull};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block1; else goto block3;
block3:;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from LinkResolver.frost:97:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
frost$core$String$Index $tmp328 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index$nullable $tmp329 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, &$s330, $tmp328);
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp329.nonnull};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:98
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:100
org$frostlang$frostc$Compiler** $tmp333 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp334 = *$tmp333;
org$frostlang$frostc$ClassDecl* $tmp335 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp334, param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
org$frostlang$frostc$ClassDecl* $tmp336 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local0) = $tmp335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:101
org$frostlang$frostc$ClassDecl* $tmp337 = *(&local0);
frost$core$Bit $tmp338 = (frost$core$Bit) {$tmp337 != NULL};
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:102
org$frostlang$frostc$ClassDecl* $tmp340 = *(&local0);
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340 != NULL};
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block10; else goto block11;
block11:;
frost$core$Int $tmp343 = (frost$core$Int) {102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s344, $tmp343, &$s345);
abort(); // unreachable
block10:;
$fn347 $tmp346 = ($fn347) param0->$class->vtable[3];
frost$core$String* $tmp348 = $tmp346(param0, $tmp340);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
org$frostlang$frostc$ClassDecl* $tmp349 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp348;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:104
org$frostlang$frostc$ClassDecl** $tmp350 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp351 = *$tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351 != NULL};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block14; else goto block13;
block14:;
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp354 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp354, &$s355);
// begin inline call to function frost.core.String.matches(regex:frost.core.RegularExpression):frost.core.Bit from LinkResolver.frost:104:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1047
frost$core$Matcher* $tmp356 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp354, param1);
frost$core$Bit $tmp357;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp357, $tmp356);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
bool $tmp358 = $tmp357.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
if ($tmp358) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:105
org$frostlang$frostc$Compiler** $tmp359 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp360 = *$tmp359;
org$frostlang$frostc$ClassDecl** $tmp361 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp362 = *$tmp361;
frost$core$Bit $tmp363 = (frost$core$Bit) {$tmp362 != NULL};
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block16; else goto block17;
block17:;
frost$core$Int $tmp365 = (frost$core$Int) {105u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s366, $tmp365, &$s367);
abort(); // unreachable
block16:;
org$frostlang$frostc$SymbolTable* $tmp368 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp360, $tmp362);
org$frostlang$frostc$Symbol* $tmp369 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp368, param1);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
org$frostlang$frostc$Symbol* $tmp370 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local1) = $tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:106
org$frostlang$frostc$Symbol* $tmp371 = *(&local1);
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371 != NULL};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:107
org$frostlang$frostc$Symbol* $tmp374 = *(&local1);
frost$core$Bit $tmp375 = (frost$core$Bit) {$tmp374 != NULL};
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block20; else goto block21;
block21:;
frost$core$Int $tmp377 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s378, $tmp377, &$s379);
abort(); // unreachable
block20:;
$fn381 $tmp380 = ($fn381) param0->$class->vtable[6];
frost$core$String* $tmp382 = $tmp380(param0, $tmp374);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
org$frostlang$frostc$Symbol* $tmp383 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp384 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp382;
block19:;
org$frostlang$frostc$Symbol* $tmp385 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:110
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp386 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp386, &$s387);
// begin inline call to function frost.core.String.matches(regex:frost.core.RegularExpression):frost.core.Bit from LinkResolver.frost:110:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1047
frost$core$Matcher* $tmp388 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp386, param1);
frost$core$Bit $tmp389;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp389, $tmp388);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
bool $tmp390 = $tmp389.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
if ($tmp390) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:111
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from LinkResolver.frost:111:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp391 = &param1->_length;
frost$core$Int $tmp392 = *$tmp391;
frost$core$String$Index $tmp393 = frost$core$String$Index$init$frost$core$Int($tmp392);
frost$core$String$Index$nullable $tmp394 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, &$s395, $tmp393);
*(&local2) = $tmp394;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:112
frost$core$String$Index$nullable $tmp396 = *(&local2);
frost$core$Bit $tmp397 = (frost$core$Bit) {$tmp396.nonnull};
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:113
org$frostlang$frostc$Compiler** $tmp399 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp400 = *$tmp399;
frost$core$String$Index$nullable $tmp401 = *(&local2);
frost$core$Bit $tmp402 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp403 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp401, $tmp402);
frost$core$String* $tmp404 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp403);
org$frostlang$frostc$ClassDecl* $tmp405 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp400, $tmp404);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
org$frostlang$frostc$ClassDecl* $tmp406 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local0) = $tmp405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:114
org$frostlang$frostc$ClassDecl* $tmp407 = *(&local0);
frost$core$Bit $tmp408 = (frost$core$Bit) {$tmp407 != NULL};
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:115
org$frostlang$frostc$Compiler** $tmp410 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp411 = *$tmp410;
org$frostlang$frostc$ClassDecl* $tmp412 = *(&local0);
frost$core$Bit $tmp413 = (frost$core$Bit) {$tmp412 != NULL};
bool $tmp414 = $tmp413.value;
if ($tmp414) goto block31; else goto block32;
block32:;
frost$core$Int $tmp415 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s416, $tmp415, &$s417);
abort(); // unreachable
block31:;
org$frostlang$frostc$SymbolTable* $tmp418 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp411, $tmp412);
frost$core$String$Index$nullable $tmp419 = *(&local2);
frost$core$Bit $tmp420 = (frost$core$Bit) {$tmp419.nonnull};
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block33; else goto block34;
block34:;
frost$core$Int $tmp422 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s423, $tmp422, &$s424);
abort(); // unreachable
block33:;
frost$core$String$Index $tmp425 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, ((frost$core$String$Index) $tmp419.value));
frost$core$Bit $tmp426 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp427 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp425, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp426);
frost$core$String* $tmp428 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp427);
org$frostlang$frostc$Symbol* $tmp429 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp418, $tmp428);
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
org$frostlang$frostc$Symbol* $tmp430 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local3) = $tmp429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:116
org$frostlang$frostc$Symbol* $tmp431 = *(&local3);
frost$core$Bit $tmp432 = (frost$core$Bit) {$tmp431 == NULL};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:117
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp434 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp435 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:119
org$frostlang$frostc$Symbol* $tmp436 = *(&local3);
frost$core$Bit $tmp437 = (frost$core$Bit) {$tmp436 != NULL};
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block37; else goto block38;
block38:;
frost$core$Int $tmp439 = (frost$core$Int) {119u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s440, $tmp439, &$s441);
abort(); // unreachable
block37:;
$fn443 $tmp442 = ($fn443) param0->$class->vtable[6];
frost$core$String* $tmp444 = $tmp442(param0, $tmp436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
org$frostlang$frostc$Symbol* $tmp445 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp446 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp444;
block30:;
goto block28;
block28:;
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:123
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp447 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp447, &$s448);
// begin inline call to function frost.core.String.parse(regex:frost.core.RegularExpression):frost.collections.ListView<frost.core.String?>? from LinkResolver.frost:123:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1072
frost$core$Matcher* $tmp449 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp447, param1);
*(&local5) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Matcher* $tmp450 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local5) = $tmp449;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1073
frost$core$Matcher* $tmp451 = *(&local5);
frost$core$Bit $tmp452;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp452, $tmp451);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1074
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp454 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp454);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$collections$Array* $tmp455 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local6) = $tmp454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1075
frost$core$Int $tmp456 = (frost$core$Int) {1u};
frost$core$Matcher* $tmp457 = *(&local5);
frost$core$Int $tmp458;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp458, $tmp457);
frost$core$Bit $tmp459 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp460 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp456, $tmp458, $tmp459);
frost$core$Int $tmp461 = $tmp460.min;
*(&local7) = $tmp461;
frost$core$Int $tmp462 = $tmp460.max;
frost$core$Bit $tmp463 = $tmp460.inclusive;
bool $tmp464 = $tmp463.value;
frost$core$Int $tmp465 = (frost$core$Int) {1u};
if ($tmp464) goto block45; else goto block46;
block45:;
int64_t $tmp466 = $tmp461.value;
int64_t $tmp467 = $tmp462.value;
bool $tmp468 = $tmp466 <= $tmp467;
frost$core$Bit $tmp469 = (frost$core$Bit) {$tmp468};
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block42; else goto block43;
block46:;
int64_t $tmp471 = $tmp461.value;
int64_t $tmp472 = $tmp462.value;
bool $tmp473 = $tmp471 < $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1076
frost$collections$Array* $tmp476 = *(&local6);
frost$core$Matcher* $tmp477 = *(&local5);
frost$core$Int $tmp478 = *(&local7);
frost$core$String* $tmp479 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp477, $tmp478);
frost$collections$Array$add$frost$collections$Array$T($tmp476, ((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Int $tmp480 = *(&local7);
int64_t $tmp481 = $tmp462.value;
int64_t $tmp482 = $tmp480.value;
int64_t $tmp483 = $tmp481 - $tmp482;
frost$core$Int $tmp484 = (frost$core$Int) {$tmp483};
if ($tmp464) goto block48; else goto block49;
block48:;
int64_t $tmp485 = $tmp484.value;
int64_t $tmp486 = $tmp465.value;
bool $tmp487 = $tmp485 >= $tmp486;
frost$core$Bit $tmp488 = (frost$core$Bit) {$tmp487};
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block47; else goto block43;
block49:;
int64_t $tmp490 = $tmp484.value;
int64_t $tmp491 = $tmp465.value;
bool $tmp492 = $tmp490 > $tmp491;
frost$core$Bit $tmp493 = (frost$core$Bit) {$tmp492};
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block47; else goto block43;
block47:;
int64_t $tmp495 = $tmp480.value;
int64_t $tmp496 = $tmp465.value;
int64_t $tmp497 = $tmp495 + $tmp496;
frost$core$Int $tmp498 = (frost$core$Int) {$tmp497};
*(&local7) = $tmp498;
goto block42;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1078
frost$collections$Array* $tmp499 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp499)));
frost$collections$Array* $tmp500 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp501 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local5) = ((frost$core$Matcher*) NULL);
*(&local4) = ((frost$collections$ListView*) $tmp499);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp499)));
goto block39;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp502 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local5) = ((frost$core$Matcher*) NULL);
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
goto block39;
block39:;
frost$collections$ListView* $tmp503 = *(&local4);
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$collections$ListView* $tmp504 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local8) = $tmp503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:124
frost$collections$ListView* $tmp505 = *(&local8);
frost$core$Bit $tmp506 = (frost$core$Bit) {$tmp505 != NULL};
bool $tmp507 = $tmp506.value;
if ($tmp507) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:125
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp508 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp508);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$collections$Array* $tmp509 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local9) = $tmp508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:126
frost$collections$ListView* $tmp510 = *(&local8);
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510 != NULL};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block54; else goto block55;
block55:;
frost$core$Int $tmp513 = (frost$core$Int) {126u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s514, $tmp513, &$s515);
abort(); // unreachable
block54:;
frost$core$Int $tmp516 = (frost$core$Int) {1u};
ITable* $tmp517 = $tmp510->$class->itable;
while ($tmp517->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp517 = $tmp517->next;
}
$fn519 $tmp518 = $tmp517->methods[0];
frost$core$Object* $tmp520 = $tmp518($tmp510, $tmp516);
frost$core$Bit $tmp521 = (frost$core$Bit) {((frost$core$String*) $tmp520) != NULL};
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block56; else goto block57;
block57:;
frost$core$Int $tmp523 = (frost$core$Int) {126u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s524, $tmp523, &$s525);
abort(); // unreachable
block56:;
frost$core$String* $tmp526 = frost$core$String$get_trimmed$R$frost$core$String(((frost$core$String*) $tmp520));
ITable* $tmp528 = ((frost$core$Equatable*) $tmp526)->$class->itable;
while ($tmp528->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp528 = $tmp528->next;
}
$fn530 $tmp529 = $tmp528->methods[1];
frost$core$Bit $tmp531 = $tmp529(((frost$core$Equatable*) $tmp526), ((frost$core$Equatable*) &$s527));
bool $tmp532 = $tmp531.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$Frost$unref$frost$core$Object$Q($tmp520);
if ($tmp532) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:127
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp533 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$collections$ListView* $tmp534 = *(&local8);
frost$core$Bit $tmp535 = (frost$core$Bit) {$tmp534 != NULL};
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block58; else goto block59;
block59:;
frost$core$Int $tmp537 = (frost$core$Int) {127u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s538, $tmp537, &$s539);
abort(); // unreachable
block58:;
frost$core$Int $tmp540 = (frost$core$Int) {1u};
ITable* $tmp541 = $tmp534->$class->itable;
while ($tmp541->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp541 = $tmp541->next;
}
$fn543 $tmp542 = $tmp541->methods[0];
frost$core$Object* $tmp544 = $tmp542($tmp534, $tmp540);
frost$core$Bit $tmp545 = (frost$core$Bit) {((frost$core$String*) $tmp544) != NULL};
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block60; else goto block61;
block61:;
frost$core$Int $tmp547 = (frost$core$Int) {127u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s548, $tmp547, &$s549);
abort(); // unreachable
block60:;
frost$io$File$init$frost$core$String($tmp533, ((frost$core$String*) $tmp544));
*(&local10) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$io$File* $tmp550 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local10) = $tmp533;
frost$core$Frost$unref$frost$core$Object$Q($tmp544);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:128
org$frostlang$frostc$Compiler** $tmp551 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp552 = *$tmp551;
org$frostlang$frostc$parser$Parser** $tmp553 = &$tmp552->parser;
org$frostlang$frostc$parser$Parser* $tmp554 = *$tmp553;
frost$io$File* $tmp555 = *(&local10);
org$frostlang$frostc$Compiler** $tmp556 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp557 = *$tmp556;
frost$collections$Array** $tmp558 = &$tmp557->files;
frost$collections$Array* $tmp559 = *$tmp558;
ITable* $tmp560 = ((frost$collections$CollectionView*) $tmp559)->$class->itable;
while ($tmp560->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp560 = $tmp560->next;
}
$fn562 $tmp561 = $tmp560->methods[0];
frost$core$Int $tmp563 = $tmp561(((frost$collections$CollectionView*) $tmp559));
frost$collections$ListView* $tmp564 = *(&local8);
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564 != NULL};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block62; else goto block63;
block63:;
frost$core$Int $tmp567 = (frost$core$Int) {128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s568, $tmp567, &$s569);
abort(); // unreachable
block62:;
frost$core$Int $tmp570 = (frost$core$Int) {1u};
ITable* $tmp571 = $tmp564->$class->itable;
while ($tmp571->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp571 = $tmp571->next;
}
$fn573 $tmp572 = $tmp571->methods[0];
frost$core$Object* $tmp574 = $tmp572($tmp564, $tmp570);
frost$core$Bit $tmp575 = (frost$core$Bit) {((frost$core$String*) $tmp574) != NULL};
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block64; else goto block65;
block65:;
frost$core$Int $tmp577 = (frost$core$Int) {128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s578, $tmp577, &$s579);
abort(); // unreachable
block64:;
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String($tmp554, $tmp555, $tmp563, ((frost$core$String*) $tmp574));
frost$core$Frost$unref$frost$core$Object$Q($tmp574);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:129
org$frostlang$frostc$Compiler** $tmp580 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp581 = *$tmp580;
frost$collections$Array** $tmp582 = &$tmp581->files;
frost$collections$Array* $tmp583 = *$tmp582;
frost$io$File* $tmp584 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp583, ((frost$core$Object*) $tmp584));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:130
goto block66;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:131
org$frostlang$frostc$Compiler** $tmp585 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp586 = *$tmp585;
org$frostlang$frostc$parser$Parser** $tmp587 = &$tmp586->parser;
org$frostlang$frostc$parser$Parser* $tmp588 = *$tmp587;
// begin inline call to method org.frostlang.frostc.parser.Parser.type():org.frostlang.frostc.ASTNode? from LinkResolver.frost:131:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:852
frost$core$Bit $tmp589 = (frost$core$Bit) {true};
org$frostlang$frostc$ASTNode* $tmp590 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q($tmp588, $tmp589);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
org$frostlang$frostc$ASTNode* $tmp591 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local11) = $tmp590;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:132
org$frostlang$frostc$ASTNode* $tmp592 = *(&local11);
frost$core$Bit $tmp593 = (frost$core$Bit) {$tmp592 == NULL};
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:133
frost$collections$ListView* $tmp595 = *(&local8);
frost$core$Bit $tmp596 = (frost$core$Bit) {$tmp595 != NULL};
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block71; else goto block72;
block72:;
frost$core$Int $tmp598 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s599, $tmp598, &$s600);
abort(); // unreachable
block71:;
frost$core$Int $tmp601 = (frost$core$Int) {1u};
ITable* $tmp602 = $tmp595->$class->itable;
while ($tmp602->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp602 = $tmp602->next;
}
$fn604 $tmp603 = $tmp602->methods[0];
frost$core$Object* $tmp605 = $tmp603($tmp595, $tmp601);
frost$core$Bit $tmp606 = (frost$core$Bit) {((frost$core$String*) $tmp605) != NULL};
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block73; else goto block74;
block74:;
frost$core$Int $tmp608 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s609, $tmp608, &$s610);
abort(); // unreachable
block73:;
frost$core$String* $tmp611 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s612, ((frost$core$String*) $tmp605));
frost$core$String* $tmp613 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp611, &$s614);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from LinkResolver.frost:133:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp613);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s615);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q($tmp605);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$ASTNode* $tmp616 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$io$File* $tmp617 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local10) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp618 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp619 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp620 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
org$frostlang$frostc$ClassDecl* $tmp621 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:136
org$frostlang$frostc$Compiler** $tmp622 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp623 = *$tmp622;
org$frostlang$frostc$Scanner** $tmp624 = &$tmp623->scanner;
org$frostlang$frostc$Scanner* $tmp625 = *$tmp624;
org$frostlang$frostc$ASTNode* $tmp626 = *(&local11);
frost$core$Bit $tmp627 = (frost$core$Bit) {$tmp626 != NULL};
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block77; else goto block78;
block78:;
frost$core$Int $tmp629 = (frost$core$Int) {136u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s630, $tmp629, &$s631);
abort(); // unreachable
block77:;
org$frostlang$frostc$Type* $tmp632 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp625, $tmp626);
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
org$frostlang$frostc$Type* $tmp633 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local12) = $tmp632;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:137
org$frostlang$frostc$Compiler** $tmp634 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp635 = *$tmp634;
org$frostlang$frostc$Type* $tmp636 = *(&local12);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from LinkResolver.frost:137:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:891
frost$core$Bit $tmp637 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp638 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q($tmp635, $tmp636, $tmp637);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
org$frostlang$frostc$Type* $tmp639 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local13) = $tmp638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:138
org$frostlang$frostc$Type* $tmp640 = *(&local13);
frost$core$Bit $tmp641 = (frost$core$Bit) {$tmp640 == NULL};
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:139
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Type* $tmp643 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp644 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp645 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$io$File* $tmp646 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local10) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp647 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp648 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp649 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
org$frostlang$frostc$ClassDecl* $tmp650 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:141
frost$collections$Array* $tmp651 = *(&local9);
org$frostlang$frostc$Type* $tmp652 = *(&local13);
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652 != NULL};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block82; else goto block83;
block83:;
frost$core$Int $tmp655 = (frost$core$Int) {141u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s656, $tmp655, &$s657);
abort(); // unreachable
block82:;
frost$collections$Array$add$frost$collections$Array$T($tmp651, ((frost$core$Object*) $tmp652));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:142
org$frostlang$frostc$Compiler** $tmp658 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp659 = *$tmp658;
org$frostlang$frostc$parser$Parser** $tmp660 = &$tmp659->parser;
org$frostlang$frostc$parser$Parser* $tmp661 = *$tmp660;
frost$core$Int $tmp662 = (frost$core$Int) {110u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from LinkResolver.frost:142:60
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int* $tmp663 = &(&local15)->$rawValue;
*$tmp663 = $tmp662;
org$frostlang$frostc$parser$Token$Kind $tmp664 = *(&local15);
*(&local14) = $tmp664;
org$frostlang$frostc$parser$Token$Kind $tmp665 = *(&local14);
// begin inline call to method org.frostlang.frostc.parser.Parser.checkNext(kind:org.frostlang.frostc.parser.Token.Kind):org.frostlang.frostc.parser.Token? from LinkResolver.frost:142:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:174
org$frostlang$frostc$parser$Token $tmp666 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp661);
*(&local17) = $tmp666;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:175
org$frostlang$frostc$parser$Token $tmp667 = *(&local17);
org$frostlang$frostc$parser$Token$Kind $tmp668 = $tmp667.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp669;
$tmp669 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp669->value = $tmp668;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp670;
$tmp670 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp670->value = $tmp665;
ITable* $tmp671 = ((frost$core$Equatable*) $tmp669)->$class->itable;
while ($tmp671->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp671 = $tmp671->next;
}
$fn673 $tmp672 = $tmp671->methods[0];
frost$core$Bit $tmp674 = $tmp672(((frost$core$Equatable*) $tmp669), ((frost$core$Equatable*) $tmp670));
bool $tmp675 = $tmp674.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp670)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp669)));
if ($tmp675) goto block88; else goto block89;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:176
org$frostlang$frostc$parser$Token $tmp676 = *(&local17);
*(&local16) = ((org$frostlang$frostc$parser$Token$nullable) { $tmp676, true });
goto block87;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:178
org$frostlang$frostc$parser$Token $tmp677 = *(&local17);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token($tmp661, $tmp677);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:179
*(&local16) = ((org$frostlang$frostc$parser$Token$nullable) { .nonnull = false });
goto block87;
block87:;
org$frostlang$frostc$parser$Token$nullable $tmp678 = *(&local16);
frost$core$Bit $tmp679 = (frost$core$Bit) {!$tmp678.nonnull};
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block84; else goto block85;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:143
org$frostlang$frostc$Type* $tmp681 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp682 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp683 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$io$File* $tmp684 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local10) = ((frost$io$File*) NULL);
goto block53;
block85:;
org$frostlang$frostc$Type* $tmp685 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp686 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp687 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block66;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:147
frost$collections$ListView* $tmp688 = *(&local8);
frost$core$Bit $tmp689 = (frost$core$Bit) {$tmp688 != NULL};
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block90; else goto block91;
block91:;
frost$core$Int $tmp691 = (frost$core$Int) {147u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s692, $tmp691, &$s693);
abort(); // unreachable
block90:;
frost$core$Int $tmp694 = (frost$core$Int) {0u};
ITable* $tmp695 = $tmp688->$class->itable;
while ($tmp695->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp695 = $tmp695->next;
}
$fn697 $tmp696 = $tmp695->methods[0];
frost$core$Object* $tmp698 = $tmp696($tmp688, $tmp694);
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp698)));
frost$core$String* $tmp699 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
*(&local18) = ((frost$core$String*) $tmp698);
frost$core$Frost$unref$frost$core$Object$Q($tmp698);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:148
frost$core$String* $tmp700 = *(&local18);
frost$core$Bit $tmp701 = (frost$core$Bit) {$tmp700 != NULL};
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block92; else goto block93;
block93:;
frost$core$Int $tmp703 = (frost$core$Int) {148u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s704, $tmp703, &$s705);
abort(); // unreachable
block92:;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from LinkResolver.frost:148:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp706 = &$tmp700->_length;
frost$core$Int $tmp707 = *$tmp706;
frost$core$String$Index $tmp708 = frost$core$String$Index$init$frost$core$Int($tmp707);
frost$core$String$Index$nullable $tmp709 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp700, &$s710, $tmp708);
*(&local19) = $tmp709;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:149
*(&local20) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:150
frost$core$String$Index$nullable $tmp711 = *(&local19);
frost$core$Bit $tmp712 = (frost$core$Bit) {$tmp711.nonnull};
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block96; else goto block98;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:151
org$frostlang$frostc$Compiler** $tmp714 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp715 = *$tmp714;
frost$core$String* $tmp716 = *(&local18);
frost$core$Bit $tmp717 = (frost$core$Bit) {$tmp716 != NULL};
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block99; else goto block100;
block100:;
frost$core$Int $tmp719 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s720, $tmp719, &$s721);
abort(); // unreachable
block99:;
frost$core$String$Index$nullable $tmp722 = *(&local19);
frost$core$Bit $tmp723 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp724 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp722, $tmp723);
frost$core$String* $tmp725 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp716, $tmp724);
org$frostlang$frostc$ClassDecl* $tmp726 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp715, $tmp725);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
org$frostlang$frostc$ClassDecl* $tmp727 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local0) = $tmp726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:152
frost$core$String* $tmp728 = *(&local18);
frost$core$Bit $tmp729 = (frost$core$Bit) {$tmp728 != NULL};
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block101; else goto block102;
block102:;
frost$core$Int $tmp731 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s732, $tmp731, &$s733);
abort(); // unreachable
block101:;
frost$core$String* $tmp734 = *(&local18);
frost$core$Bit $tmp735 = (frost$core$Bit) {$tmp734 != NULL};
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block103; else goto block104;
block104:;
frost$core$Int $tmp737 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s738, $tmp737, &$s739);
abort(); // unreachable
block103:;
frost$core$String$Index$nullable $tmp740 = *(&local19);
frost$core$Bit $tmp741 = (frost$core$Bit) {$tmp740.nonnull};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block105; else goto block106;
block106:;
frost$core$Int $tmp743 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s744, $tmp743, &$s745);
abort(); // unreachable
block105:;
frost$core$String$Index $tmp746 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp734, ((frost$core$String$Index) $tmp740.value));
frost$core$Bit $tmp747 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp748 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp746, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp747);
frost$core$String* $tmp749 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp728, $tmp748);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$String* $tmp750 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local20) = $tmp749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
goto block97;
block98:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:155
org$frostlang$frostc$ClassDecl** $tmp751 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp752 = *$tmp751;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
org$frostlang$frostc$ClassDecl* $tmp753 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local0) = $tmp752;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:156
frost$core$String* $tmp754 = *(&local18);
frost$core$Bit $tmp755 = (frost$core$Bit) {$tmp754 != NULL};
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block107; else goto block108;
block108:;
frost$core$Int $tmp757 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s758, $tmp757, &$s759);
abort(); // unreachable
block107:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$String* $tmp760 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local20) = $tmp754;
goto block97;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:158
org$frostlang$frostc$ClassDecl* $tmp761 = *(&local0);
frost$core$Bit $tmp762 = (frost$core$Bit) {$tmp761 != NULL};
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block109; else goto block110;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:159
org$frostlang$frostc$Compiler** $tmp764 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp765 = *$tmp764;
org$frostlang$frostc$ClassDecl* $tmp766 = *(&local0);
frost$core$Bit $tmp767 = (frost$core$Bit) {$tmp766 != NULL};
bool $tmp768 = $tmp767.value;
if ($tmp768) goto block111; else goto block112;
block112:;
frost$core$Int $tmp769 = (frost$core$Int) {159u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s770, $tmp769, &$s771);
abort(); // unreachable
block111:;
org$frostlang$frostc$SymbolTable* $tmp772 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp765, $tmp766);
frost$core$String* $tmp773 = *(&local20);
org$frostlang$frostc$Symbol* $tmp774 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp772, $tmp773);
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
org$frostlang$frostc$Symbol* $tmp775 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
*(&local21) = $tmp774;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:160
org$frostlang$frostc$Symbol* $tmp776 = *(&local21);
frost$core$Bit $tmp777 = (frost$core$Bit) {$tmp776 == NULL};
bool $tmp778 = $tmp777.value;
if ($tmp778) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:161
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp779 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp780 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp781 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp782 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp783 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp784 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
org$frostlang$frostc$ClassDecl* $tmp785 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:163
org$frostlang$frostc$Symbol* $tmp786 = *(&local21);
frost$core$Bit $tmp787 = (frost$core$Bit) {$tmp786 != NULL};
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block115; else goto block116;
block116:;
frost$core$Int $tmp789 = (frost$core$Int) {163u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s790, $tmp789, &$s791);
abort(); // unreachable
block115:;
org$frostlang$frostc$Symbol$Kind* $tmp792 = &$tmp786->kind;
org$frostlang$frostc$Symbol$Kind $tmp793 = *$tmp792;
frost$core$Int $tmp794 = $tmp793.$rawValue;
frost$core$Int $tmp795 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LinkResolver.frost:164:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp796 = $tmp794.value;
int64_t $tmp797 = $tmp795.value;
bool $tmp798 = $tmp796 == $tmp797;
frost$core$Bit $tmp799 = (frost$core$Bit) {$tmp798};
bool $tmp800 = $tmp799.value;
if ($tmp800) goto block118; else goto block119;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:165
org$frostlang$frostc$Symbol* $tmp801 = *(&local21);
frost$collections$Array* $tmp802 = *(&local9);
$fn804 $tmp803 = ($fn804) param0->$class->vtable[2];
frost$core$Bit $tmp805 = $tmp803(param0, ((org$frostlang$frostc$MethodDecl*) $tmp801), ((frost$collections$ListView*) $tmp802));
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block121; else goto block122;
block121:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:166
org$frostlang$frostc$Symbol* $tmp807 = *(&local21);
frost$core$Bit $tmp808 = (frost$core$Bit) {$tmp807 != NULL};
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block123; else goto block124;
block124:;
frost$core$Int $tmp810 = (frost$core$Int) {166u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s811, $tmp810, &$s812);
abort(); // unreachable
block123:;
$fn814 $tmp813 = ($fn814) param0->$class->vtable[6];
frost$core$String* $tmp815 = $tmp813(param0, $tmp807);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
org$frostlang$frostc$Symbol* $tmp816 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp817 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp818 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp819 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp820 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp821 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
org$frostlang$frostc$ClassDecl* $tmp822 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp815;
block122:;
goto block117;
block119:;
frost$core$Int $tmp823 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LinkResolver.frost:169:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp824 = $tmp794.value;
int64_t $tmp825 = $tmp823.value;
bool $tmp826 = $tmp824 == $tmp825;
frost$core$Bit $tmp827 = (frost$core$Bit) {$tmp826};
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block125; else goto block117;
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:170
org$frostlang$frostc$Symbol* $tmp829 = *(&local21);
org$frostlang$frostc$FixedArray** $tmp830 = &((org$frostlang$frostc$Methods*) $tmp829)->methods;
org$frostlang$frostc$FixedArray* $tmp831 = *$tmp830;
ITable* $tmp832 = ((frost$collections$Iterable*) $tmp831)->$class->itable;
while ($tmp832->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp832 = $tmp832->next;
}
$fn834 $tmp833 = $tmp832->methods[0];
frost$collections$Iterator* $tmp835 = $tmp833(((frost$collections$Iterable*) $tmp831));
goto block127;
block127:;
ITable* $tmp836 = $tmp835->$class->itable;
while ($tmp836->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp836 = $tmp836->next;
}
$fn838 $tmp837 = $tmp836->methods[0];
frost$core$Bit $tmp839 = $tmp837($tmp835);
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block129; else goto block128;
block128:;
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp841 = $tmp835->$class->itable;
while ($tmp841->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp841 = $tmp841->next;
}
$fn843 $tmp842 = $tmp841->methods[1];
frost$core$Object* $tmp844 = $tmp842($tmp835);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp844)));
org$frostlang$frostc$MethodDecl* $tmp845 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) $tmp844);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:171
org$frostlang$frostc$MethodDecl* $tmp846 = *(&local22);
frost$collections$Array* $tmp847 = *(&local9);
$fn849 $tmp848 = ($fn849) param0->$class->vtable[2];
frost$core$Bit $tmp850 = $tmp848(param0, $tmp846, ((frost$collections$ListView*) $tmp847));
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block130; else goto block131;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:172
org$frostlang$frostc$MethodDecl* $tmp852 = *(&local22);
$fn854 $tmp853 = ($fn854) param0->$class->vtable[5];
frost$core$String* $tmp855 = $tmp853(param0, $tmp852);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q($tmp844);
org$frostlang$frostc$MethodDecl* $tmp856 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
org$frostlang$frostc$Symbol* $tmp857 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp858 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp859 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp860 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp861 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp862 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
org$frostlang$frostc$ClassDecl* $tmp863 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp855;
block131:;
frost$core$Frost$unref$frost$core$Object$Q($tmp844);
org$frostlang$frostc$MethodDecl* $tmp864 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block127;
block129:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
goto block117;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:177
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp865 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp866 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp867 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp868 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp869 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp870 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
org$frostlang$frostc$ClassDecl* $tmp871 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block110:;
frost$core$String* $tmp872 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp873 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp874 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
*(&local9) = ((frost$collections$Array*) NULL);
goto block51;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:180
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$ListView* $tmp875 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp876 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
org$frostlang$frostc$ClassDecl* $tmp877 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);

}
void org$frostlang$frostc$frostdoc$LinkResolver$cleanup(org$frostlang$frostc$frostdoc$LinkResolver* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp878 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp879 = *$tmp878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$core$String** $tmp880 = &param0->apiRelativePath;
frost$core$String* $tmp881 = *$tmp880;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
org$frostlang$frostc$ClassDecl** $tmp882 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp883 = *$tmp882;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
return;

}

