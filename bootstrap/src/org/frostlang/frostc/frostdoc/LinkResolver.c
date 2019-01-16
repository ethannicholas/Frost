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
#include "frost/core/Int64.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/MutableString.h"
#include "frost/collections/Iterable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "org/frostlang/frostc/parser/Parser.h"
#include "frost/io/File.h"
#include "frost/io/Console.h"
#include "org/frostlang/frostc/Scanner.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$LinkResolver$class_type org$frostlang$frostc$frostdoc$LinkResolver$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$frostdoc$LinkResolver$cleanup, org$frostlang$frostc$frostdoc$LinkResolver$matches$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$frost$core$Bit, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$ClassDecl$R$frost$core$String, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$FieldDecl$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$MethodDecl$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$Symbol$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$LinkResolver$resolve$frost$core$String$R$frost$core$String$Q} };

typedef frost$core$Int64 (*$fn15)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn19)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn30)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn59)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn63)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn105)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn127)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$String* (*$fn144)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$collections$Iterator* (*$fn161)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn165)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn170)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn190)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn215)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$String* (*$fn221)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*);
typedef frost$core$String* (*$fn249)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$String* (*$fn283)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$String* (*$fn341)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$Object* (*$fn363)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn369)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn386)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn397)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn417)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn484)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn559)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn569)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn585)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn589)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn594)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn600)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn605)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 42, -1701704929045887458, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e\x2f", 3, 1504240, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23", 1, 136, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23", 1, 136, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x6c\x69\x6e\x6b\x54\x6f\x28\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 133, -1029413212966939866, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x74\x74\x70", 4, 212406849, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x77\x2b", 3, 1980855, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, 66924027379716155, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, 8731591133455443966, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 129, 7453518017842030275, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 129, 7453518017842030275, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 129, 7453518017842030275, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 129, 7453518017842030275, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, 5931628896396964226, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 129, 7453518017842030275, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s567 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };

void org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Compiler* param1, frost$core$String* param2) {

// line 23
org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String$org$frostlang$frostc$ClassDecl$Q(param0, param1, param2, ((org$frostlang$frostc$ClassDecl*) NULL));
return;

}
void org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String$org$frostlang$frostc$ClassDecl$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Compiler* param1, frost$core$String* param2, org$frostlang$frostc$ClassDecl* param3) {

// line 27
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp5 = &param0->apiRelativePath;
frost$core$String* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$String** $tmp7 = &param0->apiRelativePath;
*$tmp7 = param2;
// line 29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ClassDecl** $tmp8 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$frostc$ClassDecl** $tmp10 = &param0->context;
*$tmp10 = param3;
return;

}
frost$core$Bit org$frostlang$frostc$frostdoc$LinkResolver$matches$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$frost$core$Bit(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$MethodDecl* param1, frost$collections$ListView* param2) {

frost$core$Int64 local0;
// line 33
frost$collections$Array** $tmp11 = &param1->parameters;
frost$collections$Array* $tmp12 = *$tmp11;
ITable* $tmp13 = ((frost$collections$CollectionView*) $tmp12)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Int64 $tmp16 = $tmp14(((frost$collections$CollectionView*) $tmp12));
ITable* $tmp17 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
frost$core$Int64 $tmp20 = $tmp18(((frost$collections$CollectionView*) param2));
int64_t $tmp21 = $tmp16.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 != $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
// line 34
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit(false);
return $tmp26;
block2:;
// line 36
frost$core$Int64 $tmp27 = (frost$core$Int64) {0};
ITable* $tmp28 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
$fn30 $tmp29 = $tmp28->methods[0];
frost$core$Int64 $tmp31 = $tmp29(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp33 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp27, $tmp31, $tmp32);
frost$core$Int64 $tmp34 = $tmp33.min;
*(&local0) = $tmp34;
frost$core$Int64 $tmp35 = $tmp33.max;
frost$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
frost$core$Int64 $tmp38 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp39 = frost$core$Int64$convert$R$frost$core$UInt64($tmp38);
if ($tmp37) goto block6; else goto block7;
block6:;
int64_t $tmp40 = $tmp34.value;
int64_t $tmp41 = $tmp35.value;
bool $tmp42 = $tmp40 <= $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block3; else goto block4;
block7:;
int64_t $tmp45 = $tmp34.value;
int64_t $tmp46 = $tmp35.value;
bool $tmp47 = $tmp45 < $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block3; else goto block4;
block3:;
// line 37
frost$collections$Array** $tmp50 = &param1->parameters;
frost$collections$Array* $tmp51 = *$tmp50;
frost$core$Int64 $tmp52 = *(&local0);
frost$core$Object* $tmp53 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp51, $tmp52);
org$frostlang$frostc$Type** $tmp54 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp53)->type;
org$frostlang$frostc$Type* $tmp55 = *$tmp54;
frost$core$Int64 $tmp56 = *(&local0);
ITable* $tmp57 = param2->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
frost$core$Object* $tmp60 = $tmp58(param2, $tmp56);
ITable* $tmp61 = ((frost$core$Equatable*) $tmp55)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[1];
frost$core$Bit $tmp64 = $tmp62(((frost$core$Equatable*) $tmp55), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp60)));
bool $tmp65 = $tmp64.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp60);
// unreffing REF($59:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp53);
// unreffing REF($50:frost.collections.Array.T)
if ($tmp65) goto block8; else goto block9;
block8:;
// line 38
frost$core$Bit $tmp66 = frost$core$Bit$init$builtin_bit(false);
return $tmp66;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp67 = *(&local0);
int64_t $tmp68 = $tmp35.value;
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68 - $tmp69;
frost$core$Int64 $tmp71 = (frost$core$Int64) {$tmp70};
frost$core$UInt64 $tmp72 = frost$core$Int64$convert$R$frost$core$UInt64($tmp71);
if ($tmp37) goto block11; else goto block12;
block11:;
uint64_t $tmp73 = $tmp72.value;
uint64_t $tmp74 = $tmp39.value;
bool $tmp75 = $tmp73 >= $tmp74;
frost$core$Bit $tmp76 = (frost$core$Bit) {$tmp75};
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block10; else goto block4;
block12:;
uint64_t $tmp78 = $tmp72.value;
uint64_t $tmp79 = $tmp39.value;
bool $tmp80 = $tmp78 > $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block10; else goto block4;
block10:;
int64_t $tmp83 = $tmp67.value;
int64_t $tmp84 = $tmp38.value;
int64_t $tmp85 = $tmp83 + $tmp84;
frost$core$Int64 $tmp86 = (frost$core$Int64) {$tmp85};
*(&local0) = $tmp86;
goto block3;
block4:;
// line 41
frost$core$Bit $tmp87 = frost$core$Bit$init$builtin_bit(true);
return $tmp87;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$String* local0 = NULL;
// line 45
*(&local0) = ((frost$core$String*) NULL);
// line 46
org$frostlang$frostc$ClassDecl** $tmp88 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp89 = *$tmp88;
frost$core$Bit $tmp90 = frost$core$Bit$init$builtin_bit($tmp89 != NULL);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block1; else goto block3;
block1:;
// line 47
org$frostlang$frostc$ClassDecl** $tmp92 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp93 = *$tmp92;
frost$core$Bit $tmp94 = frost$core$Bit$init$builtin_bit($tmp93 != NULL);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp96 = (frost$core$Int64) {47};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s97, $tmp96, &$s98);
abort(); // unreachable
block4:;
frost$core$String** $tmp99 = &$tmp93->name;
frost$core$String* $tmp100 = *$tmp99;
frost$collections$Iterator* $tmp101 = frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT($tmp100, &$s102);
ITable* $tmp103 = $tmp101->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[2];
frost$core$Int64 $tmp106 = $tmp104($tmp101);
frost$core$String* $tmp107 = frost$core$String$$MUL$frost$core$Int64$R$frost$core$String(&$s108, $tmp106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$String* $tmp109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local0) = $tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing REF($26:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($22:frost.collections.Iterator<frost.core.String.Index>)
goto block2;
block3:;
// line 1
// line 50
frost$core$String** $tmp110 = &param0->apiRelativePath;
frost$core$String* $tmp111 = *$tmp110;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$String* $tmp112 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local0) = $tmp111;
goto block2;
block2:;
// line 52
frost$core$String* $tmp113 = *(&local0);
frost$core$String** $tmp114 = &param1->name;
frost$core$String* $tmp115 = *$tmp114;
frost$core$String* $tmp116 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp115, &$s117, &$s118);
frost$core$String* $tmp119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp113, $tmp116);
frost$core$String* $tmp120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp119, &$s121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($57:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// unreffing REF($55:frost.core.String)
frost$core$String* $tmp122 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing base
*(&local0) = ((frost$core$String*) NULL);
return $tmp120;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$FieldDecl$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$FieldDecl* param1) {

// line 56
frost$core$Weak** $tmp123 = &param1->owner;
frost$core$Weak* $tmp124 = *$tmp123;
frost$core$Object* $tmp125 = frost$core$Weak$get$R$frost$core$Weak$T($tmp124);
$fn127 $tmp126 = ($fn127) param0->$class->vtable[3];
frost$core$String* $tmp128 = $tmp126(param0, ((org$frostlang$frostc$ClassDecl*) $tmp125));
frost$core$String** $tmp129 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp130 = *$tmp129;
frost$core$String* $tmp131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s132, $tmp130);
frost$core$String* $tmp133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp131, &$s134);
frost$core$String* $tmp135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp128, $tmp133);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($11:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
// unreffing REF($4:frost.core.Weak.T)
return $tmp135;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$MethodDecl$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// line 60
org$frostlang$frostc$Compiler** $tmp136 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp137 = *$tmp136;
frost$core$Bit $tmp138 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit($tmp137, param1);
// line 61
frost$core$MutableString* $tmp139 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$Weak** $tmp140 = &param1->owner;
frost$core$Weak* $tmp141 = *$tmp140;
frost$core$Object* $tmp142 = frost$core$Weak$get$R$frost$core$Weak$T($tmp141);
$fn144 $tmp143 = ($fn144) param0->$class->vtable[3];
frost$core$String* $tmp145 = $tmp143(param0, ((org$frostlang$frostc$ClassDecl*) $tmp142));
frost$core$MutableString$init$frost$core$String($tmp139, $tmp145);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$MutableString* $tmp146 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
*(&local0) = $tmp139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp142);
// unreffing REF($9:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
// unreffing REF($5:frost.core.MutableString)
// line 62
frost$core$MutableString* $tmp147 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp147, &$s148);
// line 63
frost$core$MutableString* $tmp149 = *(&local0);
frost$core$String** $tmp150 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp151 = *$tmp150;
frost$core$MutableString$append$frost$core$String($tmp149, $tmp151);
// line 64
frost$core$MutableString* $tmp152 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp152, &$s153);
// line 65
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s154));
frost$core$String* $tmp155 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local1) = &$s156;
// line 66
frost$collections$Array** $tmp157 = &param1->parameters;
frost$collections$Array* $tmp158 = *$tmp157;
ITable* $tmp159 = ((frost$collections$Iterable*) $tmp158)->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
frost$collections$Iterator* $tmp162 = $tmp160(((frost$collections$Iterable*) $tmp158));
goto block1;
block1:;
ITable* $tmp163 = $tmp162->$class->itable;
while ($tmp163->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[0];
frost$core$Bit $tmp166 = $tmp164($tmp162);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp168 = $tmp162->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[1];
frost$core$Object* $tmp171 = $tmp169($tmp162);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp171)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp172 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp171);
// line 67
frost$core$MutableString* $tmp173 = *(&local0);
frost$core$String* $tmp174 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp173, $tmp174);
// line 68
frost$core$MutableString* $tmp175 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp176 = *(&local2);
org$frostlang$frostc$Type** $tmp177 = &$tmp176->type;
org$frostlang$frostc$Type* $tmp178 = *$tmp177;
frost$core$MutableString$append$frost$core$Object($tmp175, ((frost$core$Object*) $tmp178));
// line 69
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s179));
frost$core$String* $tmp180 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local1) = &$s181;
frost$core$Frost$unref$frost$core$Object$Q($tmp171);
// unreffing REF($67:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl$Parameter* $tmp182 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing p
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing REF($56:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 71
frost$core$MutableString* $tmp183 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp183, &$s184);
// line 72
org$frostlang$frostc$Type** $tmp185 = &param1->returnType;
org$frostlang$frostc$Type* $tmp186 = *$tmp185;
org$frostlang$frostc$Type* $tmp187 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp188 = ((frost$core$Equatable*) $tmp186)->$class->itable;
while ($tmp188->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp188 = $tmp188->next;
}
$fn190 $tmp189 = $tmp188->methods[1];
frost$core$Bit $tmp191 = $tmp189(((frost$core$Equatable*) $tmp186), ((frost$core$Equatable*) $tmp187));
bool $tmp192 = $tmp191.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// unreffing REF($113:org.frostlang.frostc.Type)
if ($tmp192) goto block4; else goto block5;
block4:;
// line 73
frost$core$MutableString* $tmp193 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp193, &$s194);
// line 74
frost$core$MutableString* $tmp195 = *(&local0);
org$frostlang$frostc$Type** $tmp196 = &param1->returnType;
org$frostlang$frostc$Type* $tmp197 = *$tmp196;
frost$core$MutableString$append$frost$core$Object($tmp195, ((frost$core$Object*) $tmp197));
goto block5;
block5:;
// line 76
frost$core$MutableString* $tmp198 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp198, &$s199, &$s200);
// line 77
frost$core$MutableString* $tmp201 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp201, &$s202, &$s203);
// line 78
frost$core$MutableString* $tmp204 = *(&local0);
frost$core$String* $tmp205 = frost$core$MutableString$finish$R$frost$core$String($tmp204);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing REF($140:frost.core.String)
frost$core$String* $tmp206 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp207 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp205;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$Symbol$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Symbol* param1) {

// line 82
org$frostlang$frostc$Symbol$Kind* $tmp208 = &param1->kind;
org$frostlang$frostc$Symbol$Kind $tmp209 = *$tmp208;
frost$core$Int64 $tmp210 = $tmp209.$rawValue;
frost$core$Int64 $tmp211 = (frost$core$Int64) {2};
frost$core$Bit $tmp212 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp211);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block2; else goto block3;
block2:;
// line 84
$fn215 $tmp214 = ($fn215) param0->$class->vtable[4];
frost$core$String* $tmp216 = $tmp214(param0, ((org$frostlang$frostc$FieldDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// unreffing REF($11:frost.core.String?)
return $tmp216;
block3:;
frost$core$Int64 $tmp217 = (frost$core$Int64) {5};
frost$core$Bit $tmp218 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp217);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block4; else goto block5;
block4:;
// line 87
$fn221 $tmp220 = ($fn221) param0->$class->vtable[5];
frost$core$String* $tmp222 = $tmp220(param0, ((org$frostlang$frostc$MethodDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($25:frost.core.String?)
return $tmp222;
block5:;
// line 90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
frost$core$Bit $tmp223 = frost$core$Bit$init$builtin_bit(false);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp225 = (frost$core$Int64) {81};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s226, $tmp225, &$s227);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$resolve$frost$core$String$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, frost$core$String* param1) {

frost$core$Bit local0;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$Bit local2;
org$frostlang$frostc$Symbol* local3 = NULL;
frost$core$String$Index$nullable local4;
org$frostlang$frostc$Symbol* local5 = NULL;
frost$collections$ListView* local6 = NULL;
frost$collections$Array* local7 = NULL;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
frost$core$String* local11 = NULL;
frost$core$String$Index$nullable local12;
frost$core$String* local13 = NULL;
org$frostlang$frostc$Symbol* local14 = NULL;
org$frostlang$frostc$MethodDecl* local15 = NULL;
// line 96
frost$core$Bit $tmp228 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param1, &$s229);
bool $tmp230 = $tmp228.value;
if ($tmp230) goto block3; else goto block4;
block3:;
*(&local0) = $tmp228;
goto block5;
block4:;
frost$core$Bit $tmp231 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param1, &$s232);
*(&local0) = $tmp231;
goto block5;
block5:;
frost$core$Bit $tmp233 = *(&local0);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block1; else goto block2;
block1:;
// line 97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// line 99
org$frostlang$frostc$Compiler** $tmp235 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp236 = *$tmp235;
org$frostlang$frostc$ClassDecl* $tmp237 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp236, param1);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
org$frostlang$frostc$ClassDecl* $tmp238 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local1) = $tmp237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing REF($20:org.frostlang.frostc.ClassDecl?)
// line 100
org$frostlang$frostc$ClassDecl* $tmp239 = *(&local1);
frost$core$Bit $tmp240 = frost$core$Bit$init$builtin_bit($tmp239 != NULL);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block6; else goto block7;
block6:;
// line 101
org$frostlang$frostc$ClassDecl* $tmp242 = *(&local1);
frost$core$Bit $tmp243 = frost$core$Bit$init$builtin_bit($tmp242 != NULL);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp245 = (frost$core$Int64) {101};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s246, $tmp245, &$s247);
abort(); // unreachable
block8:;
$fn249 $tmp248 = ($fn249) param0->$class->vtable[3];
frost$core$String* $tmp250 = $tmp248(param0, $tmp242);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// unreffing REF($48:frost.core.String)
org$frostlang$frostc$ClassDecl* $tmp251 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp250;
block7:;
// line 103
org$frostlang$frostc$ClassDecl** $tmp252 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp253 = *$tmp252;
frost$core$Bit $tmp254 = frost$core$Bit$init$builtin_bit($tmp253 != NULL);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block12; else goto block13;
block12:;
frost$core$RegularExpression* $tmp256 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp256, &$s257);
frost$core$Bit $tmp258 = frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(param1, $tmp256);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($68:frost.core.RegularExpression)
*(&local2) = $tmp258;
goto block14;
block13:;
*(&local2) = $tmp254;
goto block14;
block14:;
frost$core$Bit $tmp259 = *(&local2);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block10; else goto block11;
block10:;
// line 104
org$frostlang$frostc$Compiler** $tmp261 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp262 = *$tmp261;
org$frostlang$frostc$ClassDecl** $tmp263 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp264 = *$tmp263;
frost$core$Bit $tmp265 = frost$core$Bit$init$builtin_bit($tmp264 != NULL);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp267 = (frost$core$Int64) {104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s268, $tmp267, &$s269);
abort(); // unreachable
block15:;
org$frostlang$frostc$SymbolTable* $tmp270 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp262, $tmp264);
org$frostlang$frostc$Symbol* $tmp271 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp270, param1);
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
org$frostlang$frostc$Symbol* $tmp272 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local3) = $tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
// unreffing REF($95:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing REF($94:org.frostlang.frostc.SymbolTable)
// line 105
org$frostlang$frostc$Symbol* $tmp273 = *(&local3);
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit($tmp273 != NULL);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block17; else goto block18;
block17:;
// line 106
org$frostlang$frostc$Symbol* $tmp276 = *(&local3);
frost$core$Bit $tmp277 = frost$core$Bit$init$builtin_bit($tmp276 != NULL);
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp279 = (frost$core$Int64) {106};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s280, $tmp279, &$s281);
abort(); // unreachable
block19:;
$fn283 $tmp282 = ($fn283) param0->$class->vtable[6];
frost$core$String* $tmp284 = $tmp282(param0, $tmp276);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// unreffing REF($126:frost.core.String?)
org$frostlang$frostc$Symbol* $tmp285 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing s
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp286 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp284;
block18:;
org$frostlang$frostc$Symbol* $tmp287 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// unreffing s
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
goto block11;
block11:;
// line 109
frost$core$RegularExpression* $tmp288 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp288, &$s289);
frost$core$Bit $tmp290 = frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(param1, $tmp288);
bool $tmp291 = $tmp290.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing REF($150:frost.core.RegularExpression)
if ($tmp291) goto block21; else goto block22;
block21:;
// line 110
frost$core$String$Index$nullable $tmp292 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(param1, &$s293);
*(&local4) = $tmp292;
// line 111
frost$core$String$Index$nullable $tmp294 = *(&local4);
frost$core$Bit $tmp295 = frost$core$Bit$init$builtin_bit($tmp294.nonnull);
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block23; else goto block24;
block23:;
// line 112
org$frostlang$frostc$Compiler** $tmp297 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp298 = *$tmp297;
frost$core$String$Index$nullable $tmp299 = *(&local4);
frost$core$Bit $tmp300 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp301 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp299, $tmp300);
frost$core$String* $tmp302 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp301);
org$frostlang$frostc$ClassDecl* $tmp303 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp298, $tmp302);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
org$frostlang$frostc$ClassDecl* $tmp304 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local1) = $tmp303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// unreffing REF($174:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing REF($173:frost.core.String)
// line 113
org$frostlang$frostc$ClassDecl* $tmp305 = *(&local1);
frost$core$Bit $tmp306 = frost$core$Bit$init$builtin_bit($tmp305 != NULL);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block25; else goto block26;
block25:;
// line 114
org$frostlang$frostc$Compiler** $tmp308 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp309 = *$tmp308;
org$frostlang$frostc$ClassDecl* $tmp310 = *(&local1);
frost$core$Bit $tmp311 = frost$core$Bit$init$builtin_bit($tmp310 != NULL);
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp313 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s314, $tmp313, &$s315);
abort(); // unreachable
block27:;
org$frostlang$frostc$SymbolTable* $tmp316 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp309, $tmp310);
frost$core$String$Index$nullable $tmp317 = *(&local4);
frost$core$Bit $tmp318 = frost$core$Bit$init$builtin_bit($tmp317.nonnull);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp320 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s321, $tmp320, &$s322);
abort(); // unreachable
block29:;
frost$core$String$Index $tmp323 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, ((frost$core$String$Index) $tmp317.value));
frost$core$Bit $tmp324 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp325 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp323, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp324);
frost$core$String* $tmp326 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp325);
org$frostlang$frostc$Symbol* $tmp327 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp316, $tmp326);
*(&local5) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
org$frostlang$frostc$Symbol* $tmp328 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local5) = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// unreffing REF($220:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
// unreffing REF($219:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
// unreffing REF($205:org.frostlang.frostc.SymbolTable)
// line 115
org$frostlang$frostc$Symbol* $tmp329 = *(&local5);
frost$core$Bit $tmp330 = frost$core$Bit$init$builtin_bit($tmp329 == NULL);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block31; else goto block32;
block31:;
// line 116
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp332 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
// unreffing s
*(&local5) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp333 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block32:;
// line 118
org$frostlang$frostc$Symbol* $tmp334 = *(&local5);
frost$core$Bit $tmp335 = frost$core$Bit$init$builtin_bit($tmp334 != NULL);
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp337 = (frost$core$Int64) {118};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s338, $tmp337, &$s339);
abort(); // unreachable
block33:;
$fn341 $tmp340 = ($fn341) param0->$class->vtable[6];
frost$core$String* $tmp342 = $tmp340(param0, $tmp334);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing REF($268:frost.core.String?)
org$frostlang$frostc$Symbol* $tmp343 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// unreffing s
*(&local5) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp344 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp342;
block26:;
goto block24;
block24:;
goto block22;
block22:;
// line 122
frost$core$RegularExpression* $tmp345 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp345, &$s346);
frost$collections$ListView* $tmp347 = frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q(param1, $tmp345);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$collections$ListView* $tmp348 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local6) = $tmp347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing REF($290:frost.collections.ListView<frost.core.String>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing REF($288:frost.core.RegularExpression)
// line 123
frost$collections$ListView* $tmp349 = *(&local6);
frost$core$Bit $tmp350 = frost$core$Bit$init$builtin_bit($tmp349 != NULL);
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block35; else goto block36;
block35:;
// line 124
frost$collections$Array* $tmp352 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp352);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$collections$Array* $tmp353 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local7) = $tmp352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// unreffing REF($311:frost.collections.Array<org.frostlang.frostc.Type>)
// line 125
frost$collections$ListView* $tmp354 = *(&local6);
frost$core$Bit $tmp355 = frost$core$Bit$init$builtin_bit($tmp354 != NULL);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp357 = (frost$core$Int64) {125};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s358, $tmp357, &$s359);
abort(); // unreachable
block39:;
frost$core$Int64 $tmp360 = (frost$core$Int64) {1};
ITable* $tmp361 = $tmp354->$class->itable;
while ($tmp361->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp361 = $tmp361->next;
}
$fn363 $tmp362 = $tmp361->methods[0];
frost$core$Object* $tmp364 = $tmp362($tmp354, $tmp360);
frost$core$String* $tmp365 = frost$core$String$get_trimmed$R$frost$core$String(((frost$core$String*) $tmp364));
ITable* $tmp367 = ((frost$core$Equatable*) $tmp365)->$class->itable;
while ($tmp367->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp367 = $tmp367->next;
}
$fn369 $tmp368 = $tmp367->methods[1];
frost$core$Bit $tmp370 = $tmp368(((frost$core$Equatable*) $tmp365), ((frost$core$Equatable*) &$s366));
bool $tmp371 = $tmp370.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// unreffing REF($339:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp364);
// unreffing REF($337:frost.collections.ListView.T)
if ($tmp371) goto block37; else goto block38;
block37:;
// line 126
org$frostlang$frostc$Compiler** $tmp372 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp373 = *$tmp372;
org$frostlang$frostc$parser$Parser** $tmp374 = &$tmp373->parser;
org$frostlang$frostc$parser$Parser* $tmp375 = *$tmp374;
frost$io$File* $tmp376 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$collections$ListView* $tmp377 = *(&local6);
frost$core$Bit $tmp378 = frost$core$Bit$init$builtin_bit($tmp377 != NULL);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp380 = (frost$core$Int64) {126};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s381, $tmp380, &$s382);
abort(); // unreachable
block41:;
frost$core$Int64 $tmp383 = (frost$core$Int64) {1};
ITable* $tmp384 = $tmp377->$class->itable;
while ($tmp384->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp384 = $tmp384->next;
}
$fn386 $tmp385 = $tmp384->methods[0];
frost$core$Object* $tmp387 = $tmp385($tmp377, $tmp383);
frost$io$File$init$frost$core$String($tmp376, ((frost$core$String*) $tmp387));
frost$collections$ListView* $tmp388 = *(&local6);
frost$core$Bit $tmp389 = frost$core$Bit$init$builtin_bit($tmp388 != NULL);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp391 = (frost$core$Int64) {126};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s392, $tmp391, &$s393);
abort(); // unreachable
block43:;
frost$core$Int64 $tmp394 = (frost$core$Int64) {1};
ITable* $tmp395 = $tmp388->$class->itable;
while ($tmp395->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp395 = $tmp395->next;
}
$fn397 $tmp396 = $tmp395->methods[0];
frost$core$Object* $tmp398 = $tmp396($tmp388, $tmp394);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp375, $tmp376, ((frost$core$String*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q($tmp398);
// unreffing REF($386:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp387);
// unreffing REF($371:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// unreffing REF($358:frost.io.File)
// line 127
goto block45;
block45:;
// line 128
org$frostlang$frostc$Compiler** $tmp399 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp400 = *$tmp399;
org$frostlang$frostc$parser$Parser** $tmp401 = &$tmp400->parser;
org$frostlang$frostc$parser$Parser* $tmp402 = *$tmp401;
org$frostlang$frostc$ASTNode* $tmp403 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q($tmp402);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
org$frostlang$frostc$ASTNode* $tmp404 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local8) = $tmp403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing REF($405:org.frostlang.frostc.ASTNode?)
// line 129
org$frostlang$frostc$ASTNode* $tmp405 = *(&local8);
frost$core$Bit $tmp406 = frost$core$Bit$init$builtin_bit($tmp405 == NULL);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block47; else goto block48;
block47:;
// line 130
frost$collections$ListView* $tmp408 = *(&local6);
frost$core$Bit $tmp409 = frost$core$Bit$init$builtin_bit($tmp408 != NULL);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp411 = (frost$core$Int64) {130};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s412, $tmp411, &$s413);
abort(); // unreachable
block49:;
frost$core$Int64 $tmp414 = (frost$core$Int64) {1};
ITable* $tmp415 = $tmp408->$class->itable;
while ($tmp415->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp415 = $tmp415->next;
}
$fn417 $tmp416 = $tmp415->methods[0];
frost$core$Object* $tmp418 = $tmp416($tmp408, $tmp414);
frost$core$String* $tmp419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s420, ((frost$core$String*) $tmp418));
frost$core$String* $tmp421 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp419, &$s422);
frost$io$Console$printLine$frost$core$String($tmp421);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
// unreffing REF($438:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// unreffing REF($437:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp418);
// unreffing REF($435:frost.collections.ListView.T)
// line 131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$ASTNode* $tmp423 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
// unreffing type
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp424 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp425 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp426 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block48:;
// line 133
org$frostlang$frostc$Compiler** $tmp427 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp428 = *$tmp427;
org$frostlang$frostc$Scanner** $tmp429 = &$tmp428->scanner;
org$frostlang$frostc$Scanner* $tmp430 = *$tmp429;
org$frostlang$frostc$ASTNode* $tmp431 = *(&local8);
frost$core$Bit $tmp432 = frost$core$Bit$init$builtin_bit($tmp431 != NULL);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp434 = (frost$core$Int64) {133};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s435, $tmp434, &$s436);
abort(); // unreachable
block51:;
org$frostlang$frostc$Type* $tmp437 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp430, $tmp431);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
org$frostlang$frostc$Type* $tmp438 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
*(&local9) = $tmp437;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
// unreffing REF($487:org.frostlang.frostc.Type)
// line 134
org$frostlang$frostc$Compiler** $tmp439 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp440 = *$tmp439;
org$frostlang$frostc$Type* $tmp441 = *(&local9);
org$frostlang$frostc$Type* $tmp442 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q($tmp440, $tmp441);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
org$frostlang$frostc$Type* $tmp443 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local10) = $tmp442;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
// unreffing REF($502:org.frostlang.frostc.Type?)
// line 135
org$frostlang$frostc$Type* $tmp444 = *(&local10);
frost$core$Bit $tmp445 = frost$core$Bit$init$builtin_bit($tmp444 == NULL);
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block53; else goto block54;
block53:;
// line 136
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Type* $tmp447 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// unreffing resolved
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp448 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
// unreffing converted
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp449 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// unreffing type
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp450 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp451 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp452 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block54:;
// line 138
frost$collections$Array* $tmp453 = *(&local7);
org$frostlang$frostc$Type* $tmp454 = *(&local10);
frost$core$Bit $tmp455 = frost$core$Bit$init$builtin_bit($tmp454 != NULL);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp457 = (frost$core$Int64) {138};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s458, $tmp457, &$s459);
abort(); // unreachable
block55:;
frost$collections$Array$add$frost$collections$Array$T($tmp453, ((frost$core$Object*) $tmp454));
// line 139
org$frostlang$frostc$Compiler** $tmp460 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp461 = *$tmp460;
org$frostlang$frostc$parser$Parser** $tmp462 = &$tmp461->parser;
org$frostlang$frostc$parser$Parser* $tmp463 = *$tmp462;
frost$core$Int64 $tmp464 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp465 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp464);
org$frostlang$frostc$parser$Token$nullable $tmp466 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q($tmp463, $tmp465);
frost$core$Bit $tmp467 = frost$core$Bit$init$builtin_bit(!$tmp466.nonnull);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block57; else goto block58;
block57:;
// line 140
org$frostlang$frostc$Type* $tmp469 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
// unreffing resolved
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp470 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
// unreffing converted
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp471 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
// unreffing type
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block46;
block58:;
org$frostlang$frostc$Type* $tmp472 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
// unreffing resolved
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp473 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
// unreffing converted
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp474 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// unreffing type
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block45;
block46:;
goto block38;
block38:;
// line 144
frost$collections$ListView* $tmp475 = *(&local6);
frost$core$Bit $tmp476 = frost$core$Bit$init$builtin_bit($tmp475 != NULL);
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp478 = (frost$core$Int64) {144};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s479, $tmp478, &$s480);
abort(); // unreachable
block59:;
frost$core$Int64 $tmp481 = (frost$core$Int64) {0};
ITable* $tmp482 = $tmp475->$class->itable;
while ($tmp482->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp482 = $tmp482->next;
}
$fn484 $tmp483 = $tmp482->methods[0];
frost$core$Object* $tmp485 = $tmp483($tmp475, $tmp481);
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp485)));
frost$core$String* $tmp486 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local11) = ((frost$core$String*) $tmp485);
frost$core$Frost$unref$frost$core$Object$Q($tmp485);
// unreffing REF($626:frost.collections.ListView.T)
// line 145
frost$core$String* $tmp487 = *(&local11);
frost$core$String$Index$nullable $tmp488 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp487, &$s489);
*(&local12) = $tmp488;
// line 146
*(&local13) = ((frost$core$String*) NULL);
// line 147
frost$core$String$Index$nullable $tmp490 = *(&local12);
frost$core$Bit $tmp491 = frost$core$Bit$init$builtin_bit($tmp490.nonnull);
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block61; else goto block63;
block61:;
// line 148
org$frostlang$frostc$Compiler** $tmp493 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp494 = *$tmp493;
frost$core$String* $tmp495 = *(&local11);
frost$core$String$Index$nullable $tmp496 = *(&local12);
frost$core$Bit $tmp497 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp498 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp496, $tmp497);
frost$core$String* $tmp499 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp495, $tmp498);
org$frostlang$frostc$ClassDecl* $tmp500 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp494, $tmp499);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
org$frostlang$frostc$ClassDecl* $tmp501 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local1) = $tmp500;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
// unreffing REF($658:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
// unreffing REF($657:frost.core.String)
// line 149
frost$core$String* $tmp502 = *(&local11);
frost$core$String* $tmp503 = *(&local11);
frost$core$String$Index$nullable $tmp504 = *(&local12);
frost$core$Bit $tmp505 = frost$core$Bit$init$builtin_bit($tmp504.nonnull);
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp507 = (frost$core$Int64) {149};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s508, $tmp507, &$s509);
abort(); // unreachable
block64:;
frost$core$String$Index $tmp510 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp503, ((frost$core$String$Index) $tmp504.value));
frost$core$Bit $tmp511 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp512 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp510, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp511);
frost$core$String* $tmp513 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp502, $tmp512);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$core$String* $tmp514 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local13) = $tmp513;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
// unreffing REF($687:frost.core.String)
goto block62;
block63:;
// line 1
// line 152
org$frostlang$frostc$ClassDecl** $tmp515 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp516 = *$tmp515;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
org$frostlang$frostc$ClassDecl* $tmp517 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local1) = $tmp516;
// line 153
frost$core$String* $tmp518 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
frost$core$String* $tmp519 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local13) = $tmp518;
goto block62;
block62:;
// line 155
org$frostlang$frostc$ClassDecl* $tmp520 = *(&local1);
frost$core$Bit $tmp521 = frost$core$Bit$init$builtin_bit($tmp520 != NULL);
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block66; else goto block67;
block66:;
// line 156
org$frostlang$frostc$Compiler** $tmp523 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp524 = *$tmp523;
org$frostlang$frostc$ClassDecl* $tmp525 = *(&local1);
frost$core$Bit $tmp526 = frost$core$Bit$init$builtin_bit($tmp525 != NULL);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block68; else goto block69;
block69:;
frost$core$Int64 $tmp528 = (frost$core$Int64) {156};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s529, $tmp528, &$s530);
abort(); // unreachable
block68:;
org$frostlang$frostc$SymbolTable* $tmp531 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp524, $tmp525);
frost$core$String* $tmp532 = *(&local13);
org$frostlang$frostc$Symbol* $tmp533 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp531, $tmp532);
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
org$frostlang$frostc$Symbol* $tmp534 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local14) = $tmp533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
// unreffing REF($737:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
// unreffing REF($735:org.frostlang.frostc.SymbolTable)
// line 157
org$frostlang$frostc$Symbol* $tmp535 = *(&local14);
frost$core$Bit $tmp536 = frost$core$Bit$init$builtin_bit($tmp535 == NULL);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block70; else goto block71;
block70:;
// line 158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp538 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
// unreffing s
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp539 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
// unreffing symbolName
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp540 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp541 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp542 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp543 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block71:;
// line 160
org$frostlang$frostc$Symbol* $tmp544 = *(&local14);
frost$core$Bit $tmp545 = frost$core$Bit$init$builtin_bit($tmp544 != NULL);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block72; else goto block73;
block73:;
frost$core$Int64 $tmp547 = (frost$core$Int64) {160};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s548, $tmp547, &$s549);
abort(); // unreachable
block72:;
org$frostlang$frostc$Symbol$Kind* $tmp550 = &$tmp544->kind;
org$frostlang$frostc$Symbol$Kind $tmp551 = *$tmp550;
frost$core$Int64 $tmp552 = $tmp551.$rawValue;
frost$core$Int64 $tmp553 = (frost$core$Int64) {5};
frost$core$Bit $tmp554 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp552, $tmp553);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block75; else goto block76;
block75:;
// line 162
org$frostlang$frostc$Symbol* $tmp556 = *(&local14);
frost$collections$Array* $tmp557 = *(&local7);
$fn559 $tmp558 = ($fn559) param0->$class->vtable[2];
frost$core$Bit $tmp560 = $tmp558(param0, ((org$frostlang$frostc$MethodDecl*) $tmp556), ((frost$collections$ListView*) $tmp557));
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block77; else goto block78;
block77:;
// line 163
org$frostlang$frostc$Symbol* $tmp562 = *(&local14);
frost$core$Bit $tmp563 = frost$core$Bit$init$builtin_bit($tmp562 != NULL);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp565 = (frost$core$Int64) {163};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s566, $tmp565, &$s567);
abort(); // unreachable
block79:;
$fn569 $tmp568 = ($fn569) param0->$class->vtable[6];
frost$core$String* $tmp570 = $tmp568(param0, $tmp562);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
// unreffing REF($828:frost.core.String?)
org$frostlang$frostc$Symbol* $tmp571 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
// unreffing s
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp572 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// unreffing symbolName
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp573 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp574 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp575 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp576 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp570;
block78:;
goto block74;
block76:;
frost$core$Int64 $tmp577 = (frost$core$Int64) {6};
frost$core$Bit $tmp578 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp552, $tmp577);
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block81; else goto block74;
block81:;
// line 167
org$frostlang$frostc$Symbol* $tmp580 = *(&local14);
org$frostlang$frostc$FixedArray** $tmp581 = &((org$frostlang$frostc$Methods*) $tmp580)->methods;
org$frostlang$frostc$FixedArray* $tmp582 = *$tmp581;
ITable* $tmp583 = ((frost$collections$Iterable*) $tmp582)->$class->itable;
while ($tmp583->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp583 = $tmp583->next;
}
$fn585 $tmp584 = $tmp583->methods[0];
frost$collections$Iterator* $tmp586 = $tmp584(((frost$collections$Iterable*) $tmp582));
goto block82;
block82:;
ITable* $tmp587 = $tmp586->$class->itable;
while ($tmp587->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp587 = $tmp587->next;
}
$fn589 $tmp588 = $tmp587->methods[0];
frost$core$Bit $tmp590 = $tmp588($tmp586);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block84; else goto block83;
block83:;
*(&local15) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp592 = $tmp586->$class->itable;
while ($tmp592->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp592 = $tmp592->next;
}
$fn594 $tmp593 = $tmp592->methods[1];
frost$core$Object* $tmp595 = $tmp593($tmp586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp595)));
org$frostlang$frostc$MethodDecl* $tmp596 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local15) = ((org$frostlang$frostc$MethodDecl*) $tmp595);
// line 168
org$frostlang$frostc$MethodDecl* $tmp597 = *(&local15);
frost$collections$Array* $tmp598 = *(&local7);
$fn600 $tmp599 = ($fn600) param0->$class->vtable[2];
frost$core$Bit $tmp601 = $tmp599(param0, $tmp597, ((frost$collections$ListView*) $tmp598));
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block85; else goto block86;
block85:;
// line 169
org$frostlang$frostc$MethodDecl* $tmp603 = *(&local15);
$fn605 $tmp604 = ($fn605) param0->$class->vtable[5];
frost$core$String* $tmp606 = $tmp604(param0, $tmp603);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing REF($908:frost.core.String?)
frost$core$Frost$unref$frost$core$Object$Q($tmp595);
// unreffing REF($889:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp607 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
// unreffing m
*(&local15) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// unreffing REF($878:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$Symbol* $tmp608 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// unreffing s
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp609 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
// unreffing symbolName
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp610 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp611 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp612 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp613 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp606;
block86:;
frost$core$Frost$unref$frost$core$Object$Q($tmp595);
// unreffing REF($889:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp614 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
// unreffing m
*(&local15) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block82;
block84:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// unreffing REF($878:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block74;
block74:;
// line 174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp615 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing s
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp616 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
// unreffing symbolName
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp617 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp618 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp619 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp620 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block67:;
frost$core$String* $tmp621 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing symbolName
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp622 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp623 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
goto block36;
block36:;
// line 177
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$ListView* $tmp624 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp625 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);

}
void org$frostlang$frostc$frostdoc$LinkResolver$cleanup(org$frostlang$frostc$frostdoc$LinkResolver* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp626 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp627 = *$tmp626;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$String** $tmp628 = &param0->apiRelativePath;
frost$core$String* $tmp629 = *$tmp628;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
org$frostlang$frostc$ClassDecl** $tmp630 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp631 = *$tmp630;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
return;

}

