#include "org/pandalanguage/pandac/pandadoc/LinkResolver.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Equatable.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/RegularExpression.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/io/File.h"
#include "panda/io/Console.h"
#include "org/pandalanguage/pandac/Scanner.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/FixedArray.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$LinkResolver$class_type org$pandalanguage$pandac$pandadoc$LinkResolver$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup, org$pandalanguage$pandac$pandadoc$LinkResolver$matches$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q} };

typedef panda$core$Int64 (*$fn15)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn19)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn30)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn59)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn63)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn105)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn127)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn144)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn161)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn165)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn170)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn190)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn215)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$String* (*$fn221)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn249)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn283)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$String* (*$fn341)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn363)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn369)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn386)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn397)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn417)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn484)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn559)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn569)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn585)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn589)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn594)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn600)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn605)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 46, -3781975212496513654, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f", 3, 1504240, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x6c\x69\x6e\x6b\x54\x6f\x28\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 141, 8511965622435595822, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x74\x70", 4, 212406849, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b", 3, 1980855, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, 66924027379716155, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, 8731591133455443966, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x27", 129, 5478557202783960173, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x27", 129, 5478557202783960173, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x27", 129, 5478557202783960173, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x27", 129, 5478557202783960173, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, 5931628896396964226, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x27", 129, 5478557202783960173, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };

void org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$Compiler* param1, panda$core$String* param2) {

// line 23
org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$panda$core$String$org$pandalanguage$pandac$ClassDecl$Q(param0, param1, param2, ((org$pandalanguage$pandac$ClassDecl*) NULL));
return;

}
void org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$panda$core$String$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$Compiler* param1, panda$core$String* param2, org$pandalanguage$pandac$ClassDecl* param3) {

// line 27
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 28
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp5 = &param0->apiRelativePath;
panda$core$String* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$String** $tmp7 = &param0->apiRelativePath;
*$tmp7 = param2;
// line 29
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ClassDecl** $tmp8 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
org$pandalanguage$pandac$ClassDecl** $tmp10 = &param0->context;
*$tmp10 = param3;
return;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$LinkResolver$matches$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$MethodDecl* param1, panda$collections$ListView* param2) {

panda$core$Int64 local0;
// line 33
panda$collections$Array** $tmp11 = &param1->parameters;
panda$collections$Array* $tmp12 = *$tmp11;
ITable* $tmp13 = ((panda$collections$CollectionView*) $tmp12)->$class->itable;
while ($tmp13->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
panda$core$Int64 $tmp16 = $tmp14(((panda$collections$CollectionView*) $tmp12));
ITable* $tmp17 = ((panda$collections$CollectionView*) param2)->$class->itable;
while ($tmp17->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
panda$core$Int64 $tmp20 = $tmp18(((panda$collections$CollectionView*) param2));
int64_t $tmp21 = $tmp16.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 != $tmp22;
panda$core$Bit $tmp24 = (panda$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
// line 34
panda$core$Bit $tmp26 = panda$core$Bit$init$builtin_bit(false);
return $tmp26;
block2:;
// line 36
panda$core$Int64 $tmp27 = (panda$core$Int64) {0};
ITable* $tmp28 = ((panda$collections$CollectionView*) param2)->$class->itable;
while ($tmp28->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
$fn30 $tmp29 = $tmp28->methods[0];
panda$core$Int64 $tmp31 = $tmp29(((panda$collections$CollectionView*) param2));
panda$core$Bit $tmp32 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp33 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp27, $tmp31, $tmp32);
panda$core$Int64 $tmp34 = $tmp33.min;
*(&local0) = $tmp34;
panda$core$Int64 $tmp35 = $tmp33.max;
panda$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
panda$core$Int64 $tmp38 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp39 = panda$core$Int64$convert$R$panda$core$UInt64($tmp38);
if ($tmp37) goto block6; else goto block7;
block6:;
int64_t $tmp40 = $tmp34.value;
int64_t $tmp41 = $tmp35.value;
bool $tmp42 = $tmp40 <= $tmp41;
panda$core$Bit $tmp43 = (panda$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block3; else goto block4;
block7:;
int64_t $tmp45 = $tmp34.value;
int64_t $tmp46 = $tmp35.value;
bool $tmp47 = $tmp45 < $tmp46;
panda$core$Bit $tmp48 = (panda$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block3; else goto block4;
block3:;
// line 37
panda$collections$Array** $tmp50 = &param1->parameters;
panda$collections$Array* $tmp51 = *$tmp50;
panda$core$Int64 $tmp52 = *(&local0);
panda$core$Object* $tmp53 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp51, $tmp52);
org$pandalanguage$pandac$Type** $tmp54 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp53)->type;
org$pandalanguage$pandac$Type* $tmp55 = *$tmp54;
panda$core$Int64 $tmp56 = *(&local0);
ITable* $tmp57 = param2->$class->itable;
while ($tmp57->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
panda$core$Object* $tmp60 = $tmp58(param2, $tmp56);
ITable* $tmp61 = ((panda$core$Equatable*) $tmp55)->$class->itable;
while ($tmp61->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[1];
panda$core$Bit $tmp64 = $tmp62(((panda$core$Equatable*) $tmp55), ((panda$core$Equatable*) ((org$pandalanguage$pandac$Type*) $tmp60)));
bool $tmp65 = $tmp64.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp60);
// unreffing REF($59:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp53);
// unreffing REF($50:panda.collections.Array.T)
if ($tmp65) goto block8; else goto block9;
block8:;
// line 38
panda$core$Bit $tmp66 = panda$core$Bit$init$builtin_bit(false);
return $tmp66;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp67 = *(&local0);
int64_t $tmp68 = $tmp35.value;
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68 - $tmp69;
panda$core$Int64 $tmp71 = (panda$core$Int64) {$tmp70};
panda$core$UInt64 $tmp72 = panda$core$Int64$convert$R$panda$core$UInt64($tmp71);
if ($tmp37) goto block11; else goto block12;
block11:;
uint64_t $tmp73 = $tmp72.value;
uint64_t $tmp74 = $tmp39.value;
bool $tmp75 = $tmp73 >= $tmp74;
panda$core$Bit $tmp76 = (panda$core$Bit) {$tmp75};
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block10; else goto block4;
block12:;
uint64_t $tmp78 = $tmp72.value;
uint64_t $tmp79 = $tmp39.value;
bool $tmp80 = $tmp78 > $tmp79;
panda$core$Bit $tmp81 = (panda$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block10; else goto block4;
block10:;
int64_t $tmp83 = $tmp67.value;
int64_t $tmp84 = $tmp38.value;
int64_t $tmp85 = $tmp83 + $tmp84;
panda$core$Int64 $tmp86 = (panda$core$Int64) {$tmp85};
*(&local0) = $tmp86;
goto block3;
block4:;
// line 41
panda$core$Bit $tmp87 = panda$core$Bit$init$builtin_bit(true);
return $tmp87;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$core$String* local0 = NULL;
// line 45
*(&local0) = ((panda$core$String*) NULL);
// line 46
org$pandalanguage$pandac$ClassDecl** $tmp88 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp89 = *$tmp88;
panda$core$Bit $tmp90 = panda$core$Bit$init$builtin_bit($tmp89 != NULL);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block1; else goto block3;
block1:;
// line 47
org$pandalanguage$pandac$ClassDecl** $tmp92 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp93 = *$tmp92;
panda$core$Bit $tmp94 = panda$core$Bit$init$builtin_bit($tmp93 != NULL);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp96 = (panda$core$Int64) {47};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s97, $tmp96, &$s98);
abort(); // unreachable
block4:;
panda$core$String** $tmp99 = &$tmp93->name;
panda$core$String* $tmp100 = *$tmp99;
panda$collections$Iterator* $tmp101 = panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT($tmp100, &$s102);
ITable* $tmp103 = $tmp101->$class->itable;
while ($tmp103->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[2];
panda$core$Int64 $tmp106 = $tmp104($tmp101);
panda$core$String* $tmp107 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s108, $tmp106);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
panda$core$String* $tmp109 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
*(&local0) = $tmp107;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing REF($26:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing REF($22:panda.collections.Iterator<panda.core.String.Index>)
goto block2;
block3:;
// line 1
// line 50
panda$core$String** $tmp110 = &param0->apiRelativePath;
panda$core$String* $tmp111 = *$tmp110;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
panda$core$String* $tmp112 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
*(&local0) = $tmp111;
goto block2;
block2:;
// line 52
panda$core$String* $tmp113 = *(&local0);
panda$core$String** $tmp114 = &param1->name;
panda$core$String* $tmp115 = *$tmp114;
panda$core$String* $tmp116 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp115, &$s117, &$s118);
panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp113, $tmp116);
panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp119, &$s121);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
// unreffing REF($56:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// unreffing REF($55:panda.core.String)
panda$core$String* $tmp122 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
// unreffing base
*(&local0) = ((panda$core$String*) NULL);
return $tmp120;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$FieldDecl* param1) {

// line 56
panda$core$Weak** $tmp123 = &param1->owner;
panda$core$Weak* $tmp124 = *$tmp123;
panda$core$Object* $tmp125 = panda$core$Weak$get$R$panda$core$Weak$T($tmp124);
$fn127 $tmp126 = ($fn127) param0->$class->vtable[3];
panda$core$String* $tmp128 = $tmp126(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp125));
panda$core$String** $tmp129 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp130 = *$tmp129;
panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s132, $tmp130);
panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s134);
panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, $tmp133);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp125);
// unreffing REF($4:panda.core.Weak.T)
return $tmp135;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$MethodDecl$Parameter* local2 = NULL;
// line 60
org$pandalanguage$pandac$Compiler** $tmp136 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp137 = *$tmp136;
panda$core$Bit $tmp138 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit($tmp137, param1);
// line 61
panda$core$MutableString* $tmp139 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$Weak** $tmp140 = &param1->owner;
panda$core$Weak* $tmp141 = *$tmp140;
panda$core$Object* $tmp142 = panda$core$Weak$get$R$panda$core$Weak$T($tmp141);
$fn144 $tmp143 = ($fn144) param0->$class->vtable[3];
panda$core$String* $tmp145 = $tmp143(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp142));
panda$core$MutableString$init$panda$core$String($tmp139, $tmp145);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
panda$core$MutableString* $tmp146 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
*(&local0) = $tmp139;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp142);
// unreffing REF($9:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing REF($5:panda.core.MutableString)
// line 62
panda$core$MutableString* $tmp147 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp147, &$s148);
// line 63
panda$core$MutableString* $tmp149 = *(&local0);
panda$core$String** $tmp150 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp151 = *$tmp150;
panda$core$MutableString$append$panda$core$String($tmp149, $tmp151);
// line 64
panda$core$MutableString* $tmp152 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp152, &$s153);
// line 65
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s154));
panda$core$String* $tmp155 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
*(&local1) = &$s156;
// line 66
panda$collections$Array** $tmp157 = &param1->parameters;
panda$collections$Array* $tmp158 = *$tmp157;
ITable* $tmp159 = ((panda$collections$Iterable*) $tmp158)->$class->itable;
while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
panda$collections$Iterator* $tmp162 = $tmp160(((panda$collections$Iterable*) $tmp158));
goto block1;
block1:;
ITable* $tmp163 = $tmp162->$class->itable;
while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[0];
panda$core$Bit $tmp166 = $tmp164($tmp162);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp168 = $tmp162->$class->itable;
while ($tmp168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[1];
panda$core$Object* $tmp171 = $tmp169($tmp162);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp171)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp172 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp171);
// line 67
panda$core$MutableString* $tmp173 = *(&local0);
panda$core$String* $tmp174 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp173, $tmp174);
// line 68
panda$core$MutableString* $tmp175 = *(&local0);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp176 = *(&local2);
org$pandalanguage$pandac$Type** $tmp177 = &$tmp176->type;
org$pandalanguage$pandac$Type* $tmp178 = *$tmp177;
panda$core$MutableString$append$panda$core$Object($tmp175, ((panda$core$Object*) $tmp178));
// line 69
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s179));
panda$core$String* $tmp180 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
*(&local1) = &$s181;
panda$core$Panda$unref$panda$core$Object$Q($tmp171);
// unreffing REF($67:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp182 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
// unreffing REF($56:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 71
panda$core$MutableString* $tmp183 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp183, &$s184);
// line 72
org$pandalanguage$pandac$Type** $tmp185 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp186 = *$tmp185;
org$pandalanguage$pandac$Type* $tmp187 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp188 = ((panda$core$Equatable*) $tmp186)->$class->itable;
while ($tmp188->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp188 = $tmp188->next;
}
$fn190 $tmp189 = $tmp188->methods[1];
panda$core$Bit $tmp191 = $tmp189(((panda$core$Equatable*) $tmp186), ((panda$core$Equatable*) $tmp187));
bool $tmp192 = $tmp191.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
// unreffing REF($113:org.pandalanguage.pandac.Type)
if ($tmp192) goto block4; else goto block5;
block4:;
// line 73
panda$core$MutableString* $tmp193 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp193, &$s194);
// line 74
panda$core$MutableString* $tmp195 = *(&local0);
org$pandalanguage$pandac$Type** $tmp196 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp197 = *$tmp196;
panda$core$MutableString$append$panda$core$Object($tmp195, ((panda$core$Object*) $tmp197));
goto block5;
block5:;
// line 76
panda$core$MutableString* $tmp198 = *(&local0);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp198, &$s199, &$s200);
// line 77
panda$core$MutableString* $tmp201 = *(&local0);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp201, &$s202, &$s203);
// line 78
panda$core$MutableString* $tmp204 = *(&local0);
panda$core$String* $tmp205 = panda$core$MutableString$finish$R$panda$core$String($tmp204);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing REF($140:panda.core.String)
panda$core$String* $tmp206 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp207 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp205;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$Symbol* param1) {

// line 82
org$pandalanguage$pandac$Symbol$Kind* $tmp208 = &param1->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp209 = *$tmp208;
panda$core$Int64 $tmp210 = $tmp209.$rawValue;
panda$core$Int64 $tmp211 = (panda$core$Int64) {2};
panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp210, $tmp211);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block2; else goto block3;
block2:;
// line 84
$fn215 $tmp214 = ($fn215) param0->$class->vtable[4];
panda$core$String* $tmp216 = $tmp214(param0, ((org$pandalanguage$pandac$FieldDecl*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
// unreffing REF($11:panda.core.String?)
return $tmp216;
block3:;
panda$core$Int64 $tmp217 = (panda$core$Int64) {5};
panda$core$Bit $tmp218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp210, $tmp217);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block4; else goto block5;
block4:;
// line 87
$fn221 $tmp220 = ($fn221) param0->$class->vtable[5];
panda$core$String* $tmp222 = $tmp220(param0, ((org$pandalanguage$pandac$MethodDecl*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing REF($25:panda.core.String?)
return $tmp222;
block5:;
// line 90
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block1:;
panda$core$Bit $tmp223 = panda$core$Bit$init$builtin_bit(false);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp225 = (panda$core$Int64) {81};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s226, $tmp225, &$s227);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, panda$core$String* param1) {

panda$core$Bit local0;
org$pandalanguage$pandac$ClassDecl* local1 = NULL;
panda$core$Bit local2;
org$pandalanguage$pandac$Symbol* local3 = NULL;
panda$core$String$Index$nullable local4;
org$pandalanguage$pandac$Symbol* local5 = NULL;
panda$collections$ListView* local6 = NULL;
panda$collections$Array* local7 = NULL;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
org$pandalanguage$pandac$Type* local9 = NULL;
org$pandalanguage$pandac$Type* local10 = NULL;
panda$core$String* local11 = NULL;
panda$core$String$Index$nullable local12;
panda$core$String* local13 = NULL;
org$pandalanguage$pandac$Symbol* local14 = NULL;
org$pandalanguage$pandac$MethodDecl* local15 = NULL;
// line 96
panda$core$Bit $tmp228 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(param1, &$s229);
bool $tmp230 = $tmp228.value;
if ($tmp230) goto block3; else goto block4;
block3:;
*(&local0) = $tmp228;
goto block5;
block4:;
panda$core$Bit $tmp231 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(param1, &$s232);
*(&local0) = $tmp231;
goto block5;
block5:;
panda$core$Bit $tmp233 = *(&local0);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block1; else goto block2;
block1:;
// line 97
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block2:;
// line 99
org$pandalanguage$pandac$Compiler** $tmp235 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp236 = *$tmp235;
org$pandalanguage$pandac$ClassDecl* $tmp237 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q($tmp236, param1);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
org$pandalanguage$pandac$ClassDecl* $tmp238 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
*(&local1) = $tmp237;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing REF($20:org.pandalanguage.pandac.ClassDecl?)
// line 100
org$pandalanguage$pandac$ClassDecl* $tmp239 = *(&local1);
panda$core$Bit $tmp240 = panda$core$Bit$init$builtin_bit($tmp239 != NULL);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block6; else goto block7;
block6:;
// line 101
org$pandalanguage$pandac$ClassDecl* $tmp242 = *(&local1);
panda$core$Bit $tmp243 = panda$core$Bit$init$builtin_bit($tmp242 != NULL);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp245 = (panda$core$Int64) {101};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s246, $tmp245, &$s247);
abort(); // unreachable
block8:;
$fn249 $tmp248 = ($fn249) param0->$class->vtable[3];
panda$core$String* $tmp250 = $tmp248(param0, $tmp242);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing REF($48:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp251 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp250;
block7:;
// line 103
org$pandalanguage$pandac$ClassDecl** $tmp252 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp253 = *$tmp252;
panda$core$Bit $tmp254 = panda$core$Bit$init$builtin_bit($tmp253 != NULL);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block12; else goto block13;
block12:;
panda$core$RegularExpression* $tmp256 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp256, &$s257);
panda$core$Bit $tmp258 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(param1, $tmp256);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing REF($68:panda.core.RegularExpression)
*(&local2) = $tmp258;
goto block14;
block13:;
*(&local2) = $tmp254;
goto block14;
block14:;
panda$core$Bit $tmp259 = *(&local2);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block10; else goto block11;
block10:;
// line 104
org$pandalanguage$pandac$Compiler** $tmp261 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp262 = *$tmp261;
org$pandalanguage$pandac$ClassDecl** $tmp263 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp264 = *$tmp263;
panda$core$Bit $tmp265 = panda$core$Bit$init$builtin_bit($tmp264 != NULL);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp267 = (panda$core$Int64) {104};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s268, $tmp267, &$s269);
abort(); // unreachable
block15:;
org$pandalanguage$pandac$SymbolTable* $tmp270 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable($tmp262, $tmp264);
org$pandalanguage$pandac$Symbol* $tmp271 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp270, param1);
*(&local3) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
org$pandalanguage$pandac$Symbol* $tmp272 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
*(&local3) = $tmp271;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
// unreffing REF($95:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($94:org.pandalanguage.pandac.SymbolTable)
// line 105
org$pandalanguage$pandac$Symbol* $tmp273 = *(&local3);
panda$core$Bit $tmp274 = panda$core$Bit$init$builtin_bit($tmp273 != NULL);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block17; else goto block18;
block17:;
// line 106
org$pandalanguage$pandac$Symbol* $tmp276 = *(&local3);
panda$core$Bit $tmp277 = panda$core$Bit$init$builtin_bit($tmp276 != NULL);
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp279 = (panda$core$Int64) {106};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s280, $tmp279, &$s281);
abort(); // unreachable
block19:;
$fn283 $tmp282 = ($fn283) param0->$class->vtable[6];
panda$core$String* $tmp284 = $tmp282(param0, $tmp276);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
// unreffing REF($126:panda.core.String?)
org$pandalanguage$pandac$Symbol* $tmp285 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp286 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp284;
block18:;
org$pandalanguage$pandac$Symbol* $tmp287 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$Symbol*) NULL);
goto block11;
block11:;
// line 109
panda$core$RegularExpression* $tmp288 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp288, &$s289);
panda$core$Bit $tmp290 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(param1, $tmp288);
bool $tmp291 = $tmp290.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
// unreffing REF($150:panda.core.RegularExpression)
if ($tmp291) goto block21; else goto block22;
block21:;
// line 110
panda$core$String$Index$nullable $tmp292 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(param1, &$s293);
*(&local4) = $tmp292;
// line 111
panda$core$String$Index$nullable $tmp294 = *(&local4);
panda$core$Bit $tmp295 = panda$core$Bit$init$builtin_bit($tmp294.nonnull);
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block23; else goto block24;
block23:;
// line 112
org$pandalanguage$pandac$Compiler** $tmp297 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp298 = *$tmp297;
panda$core$String$Index$nullable $tmp299 = *(&local4);
panda$core$Bit $tmp300 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp301 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { .nonnull = false }), $tmp299, $tmp300);
panda$core$String* $tmp302 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param1, $tmp301);
org$pandalanguage$pandac$ClassDecl* $tmp303 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q($tmp298, $tmp302);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
org$pandalanguage$pandac$ClassDecl* $tmp304 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
*(&local1) = $tmp303;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
// unreffing REF($174:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing REF($173:panda.core.String)
// line 113
org$pandalanguage$pandac$ClassDecl* $tmp305 = *(&local1);
panda$core$Bit $tmp306 = panda$core$Bit$init$builtin_bit($tmp305 != NULL);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block25; else goto block26;
block25:;
// line 114
org$pandalanguage$pandac$Compiler** $tmp308 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp309 = *$tmp308;
org$pandalanguage$pandac$ClassDecl* $tmp310 = *(&local1);
panda$core$Bit $tmp311 = panda$core$Bit$init$builtin_bit($tmp310 != NULL);
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp313 = (panda$core$Int64) {114};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s314, $tmp313, &$s315);
abort(); // unreachable
block27:;
org$pandalanguage$pandac$SymbolTable* $tmp316 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable($tmp309, $tmp310);
panda$core$String$Index$nullable $tmp317 = *(&local4);
panda$core$Bit $tmp318 = panda$core$Bit$init$builtin_bit($tmp317.nonnull);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block29; else goto block30;
block30:;
panda$core$Int64 $tmp320 = (panda$core$Int64) {114};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s321, $tmp320, &$s322);
abort(); // unreachable
block29:;
panda$core$String$Index $tmp323 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param1, ((panda$core$String$Index) $tmp317.value));
panda$core$Bit $tmp324 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp325 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp323, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp324);
panda$core$String* $tmp326 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param1, $tmp325);
org$pandalanguage$pandac$Symbol* $tmp327 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp316, $tmp326);
*(&local5) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
org$pandalanguage$pandac$Symbol* $tmp328 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
*(&local5) = $tmp327;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
// unreffing REF($220:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
// unreffing REF($219:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
// unreffing REF($205:org.pandalanguage.pandac.SymbolTable)
// line 115
org$pandalanguage$pandac$Symbol* $tmp329 = *(&local5);
panda$core$Bit $tmp330 = panda$core$Bit$init$builtin_bit($tmp329 == NULL);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block31; else goto block32;
block31:;
// line 116
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp332 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
// unreffing s
*(&local5) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp333 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block32:;
// line 118
org$pandalanguage$pandac$Symbol* $tmp334 = *(&local5);
panda$core$Bit $tmp335 = panda$core$Bit$init$builtin_bit($tmp334 != NULL);
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block33; else goto block34;
block34:;
panda$core$Int64 $tmp337 = (panda$core$Int64) {118};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s338, $tmp337, &$s339);
abort(); // unreachable
block33:;
$fn341 $tmp340 = ($fn341) param0->$class->vtable[6];
panda$core$String* $tmp342 = $tmp340(param0, $tmp334);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing REF($268:panda.core.String?)
org$pandalanguage$pandac$Symbol* $tmp343 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
// unreffing s
*(&local5) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp344 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp342;
block26:;
goto block24;
block24:;
goto block22;
block22:;
// line 122
panda$core$RegularExpression* $tmp345 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp345, &$s346);
panda$collections$ListView* $tmp347 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(param1, $tmp345);
*(&local6) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
panda$collections$ListView* $tmp348 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp348));
*(&local6) = $tmp347;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
// unreffing REF($290:panda.collections.ListView<panda.core.String>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
// unreffing REF($288:panda.core.RegularExpression)
// line 123
panda$collections$ListView* $tmp349 = *(&local6);
panda$core$Bit $tmp350 = panda$core$Bit$init$builtin_bit($tmp349 != NULL);
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block35; else goto block36;
block35:;
// line 124
panda$collections$Array* $tmp352 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp352);
*(&local7) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
panda$collections$Array* $tmp353 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
*(&local7) = $tmp352;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing REF($311:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 125
panda$collections$ListView* $tmp354 = *(&local6);
panda$core$Bit $tmp355 = panda$core$Bit$init$builtin_bit($tmp354 != NULL);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp357 = (panda$core$Int64) {125};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s358, $tmp357, &$s359);
abort(); // unreachable
block39:;
panda$core$Int64 $tmp360 = (panda$core$Int64) {1};
ITable* $tmp361 = $tmp354->$class->itable;
while ($tmp361->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp361 = $tmp361->next;
}
$fn363 $tmp362 = $tmp361->methods[0];
panda$core$Object* $tmp364 = $tmp362($tmp354, $tmp360);
panda$core$String* $tmp365 = panda$core$String$get_trimmed$R$panda$core$String(((panda$core$String*) $tmp364));
ITable* $tmp367 = ((panda$core$Equatable*) $tmp365)->$class->itable;
while ($tmp367->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp367 = $tmp367->next;
}
$fn369 $tmp368 = $tmp367->methods[1];
panda$core$Bit $tmp370 = $tmp368(((panda$core$Equatable*) $tmp365), ((panda$core$Equatable*) &$s366));
bool $tmp371 = $tmp370.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
// unreffing REF($339:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp364);
// unreffing REF($337:panda.collections.ListView.T)
if ($tmp371) goto block37; else goto block38;
block37:;
// line 126
org$pandalanguage$pandac$Compiler** $tmp372 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp373 = *$tmp372;
org$pandalanguage$pandac$parser$Parser** $tmp374 = &$tmp373->parser;
org$pandalanguage$pandac$parser$Parser* $tmp375 = *$tmp374;
panda$io$File* $tmp376 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$collections$ListView* $tmp377 = *(&local6);
panda$core$Bit $tmp378 = panda$core$Bit$init$builtin_bit($tmp377 != NULL);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block41; else goto block42;
block42:;
panda$core$Int64 $tmp380 = (panda$core$Int64) {126};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s381, $tmp380, &$s382);
abort(); // unreachable
block41:;
panda$core$Int64 $tmp383 = (panda$core$Int64) {1};
ITable* $tmp384 = $tmp377->$class->itable;
while ($tmp384->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp384 = $tmp384->next;
}
$fn386 $tmp385 = $tmp384->methods[0];
panda$core$Object* $tmp387 = $tmp385($tmp377, $tmp383);
panda$io$File$init$panda$core$String($tmp376, ((panda$core$String*) $tmp387));
panda$collections$ListView* $tmp388 = *(&local6);
panda$core$Bit $tmp389 = panda$core$Bit$init$builtin_bit($tmp388 != NULL);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block43; else goto block44;
block44:;
panda$core$Int64 $tmp391 = (panda$core$Int64) {126};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s392, $tmp391, &$s393);
abort(); // unreachable
block43:;
panda$core$Int64 $tmp394 = (panda$core$Int64) {1};
ITable* $tmp395 = $tmp388->$class->itable;
while ($tmp395->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp395 = $tmp395->next;
}
$fn397 $tmp396 = $tmp395->methods[0];
panda$core$Object* $tmp398 = $tmp396($tmp388, $tmp394);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp375, $tmp376, ((panda$core$String*) $tmp398));
panda$core$Panda$unref$panda$core$Object$Q($tmp398);
// unreffing REF($386:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp387);
// unreffing REF($371:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
// unreffing REF($358:panda.io.File)
// line 127
goto block45;
block45:;
// line 128
org$pandalanguage$pandac$Compiler** $tmp399 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp400 = *$tmp399;
org$pandalanguage$pandac$parser$Parser** $tmp401 = &$tmp400->parser;
org$pandalanguage$pandac$parser$Parser* $tmp402 = *$tmp401;
org$pandalanguage$pandac$ASTNode* $tmp403 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q($tmp402);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
org$pandalanguage$pandac$ASTNode* $tmp404 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
*(&local8) = $tmp403;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing REF($405:org.pandalanguage.pandac.ASTNode?)
// line 129
org$pandalanguage$pandac$ASTNode* $tmp405 = *(&local8);
panda$core$Bit $tmp406 = panda$core$Bit$init$builtin_bit($tmp405 == NULL);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block47; else goto block48;
block47:;
// line 130
panda$collections$ListView* $tmp408 = *(&local6);
panda$core$Bit $tmp409 = panda$core$Bit$init$builtin_bit($tmp408 != NULL);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp411 = (panda$core$Int64) {130};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s412, $tmp411, &$s413);
abort(); // unreachable
block49:;
panda$core$Int64 $tmp414 = (panda$core$Int64) {1};
ITable* $tmp415 = $tmp408->$class->itable;
while ($tmp415->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp415 = $tmp415->next;
}
$fn417 $tmp416 = $tmp415->methods[0];
panda$core$Object* $tmp418 = $tmp416($tmp408, $tmp414);
panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s420, ((panda$core$String*) $tmp418));
panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp419, &$s422);
panda$io$Console$printLine$panda$core$String($tmp421);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp421));
// unreffing REF($438:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
// unreffing REF($437:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp418);
// unreffing REF($435:panda.collections.ListView.T)
// line 131
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp423 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp424 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp425 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp426 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block48:;
// line 133
org$pandalanguage$pandac$Compiler** $tmp427 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp428 = *$tmp427;
org$pandalanguage$pandac$Scanner** $tmp429 = &$tmp428->scanner;
org$pandalanguage$pandac$Scanner* $tmp430 = *$tmp429;
org$pandalanguage$pandac$ASTNode* $tmp431 = *(&local8);
panda$core$Bit $tmp432 = panda$core$Bit$init$builtin_bit($tmp431 != NULL);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block51; else goto block52;
block52:;
panda$core$Int64 $tmp434 = (panda$core$Int64) {133};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s435, $tmp434, &$s436);
abort(); // unreachable
block51:;
org$pandalanguage$pandac$Type* $tmp437 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp430, $tmp431);
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
org$pandalanguage$pandac$Type* $tmp438 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
*(&local9) = $tmp437;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
// unreffing REF($487:org.pandalanguage.pandac.Type)
// line 134
org$pandalanguage$pandac$Compiler** $tmp439 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp440 = *$tmp439;
org$pandalanguage$pandac$Type* $tmp441 = *(&local9);
org$pandalanguage$pandac$Type* $tmp442 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q($tmp440, $tmp441);
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
org$pandalanguage$pandac$Type* $tmp443 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
*(&local10) = $tmp442;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
// unreffing REF($502:org.pandalanguage.pandac.Type?)
// line 135
org$pandalanguage$pandac$Type* $tmp444 = *(&local10);
panda$core$Bit $tmp445 = panda$core$Bit$init$builtin_bit($tmp444 == NULL);
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block53; else goto block54;
block53:;
// line 136
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$Type* $tmp447 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
// unreffing resolved
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp448 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
// unreffing converted
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp449 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp450 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp451 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp452 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block54:;
// line 138
panda$collections$Array* $tmp453 = *(&local7);
org$pandalanguage$pandac$Type* $tmp454 = *(&local10);
panda$core$Bit $tmp455 = panda$core$Bit$init$builtin_bit($tmp454 != NULL);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block55; else goto block56;
block56:;
panda$core$Int64 $tmp457 = (panda$core$Int64) {138};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s458, $tmp457, &$s459);
abort(); // unreachable
block55:;
panda$collections$Array$add$panda$collections$Array$T($tmp453, ((panda$core$Object*) $tmp454));
// line 139
org$pandalanguage$pandac$Compiler** $tmp460 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp461 = *$tmp460;
org$pandalanguage$pandac$parser$Parser** $tmp462 = &$tmp461->parser;
org$pandalanguage$pandac$parser$Parser* $tmp463 = *$tmp462;
panda$core$Int64 $tmp464 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp465 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp464);
org$pandalanguage$pandac$parser$Token$nullable $tmp466 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q($tmp463, $tmp465);
panda$core$Bit $tmp467 = panda$core$Bit$init$builtin_bit(!$tmp466.nonnull);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block57; else goto block58;
block57:;
// line 140
org$pandalanguage$pandac$Type* $tmp469 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
// unreffing resolved
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp470 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
// unreffing converted
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp471 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp471));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block46;
block58:;
org$pandalanguage$pandac$Type* $tmp472 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp472));
// unreffing resolved
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp473 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
// unreffing converted
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp474 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block45;
block46:;
goto block38;
block38:;
// line 144
panda$collections$ListView* $tmp475 = *(&local6);
panda$core$Bit $tmp476 = panda$core$Bit$init$builtin_bit($tmp475 != NULL);
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block59; else goto block60;
block60:;
panda$core$Int64 $tmp478 = (panda$core$Int64) {144};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s479, $tmp478, &$s480);
abort(); // unreachable
block59:;
panda$core$Int64 $tmp481 = (panda$core$Int64) {0};
ITable* $tmp482 = $tmp475->$class->itable;
while ($tmp482->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp482 = $tmp482->next;
}
$fn484 $tmp483 = $tmp482->methods[0];
panda$core$Object* $tmp485 = $tmp483($tmp475, $tmp481);
*(&local11) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp485)));
panda$core$String* $tmp486 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
*(&local11) = ((panda$core$String*) $tmp485);
panda$core$Panda$unref$panda$core$Object$Q($tmp485);
// unreffing REF($626:panda.collections.ListView.T)
// line 145
panda$core$String* $tmp487 = *(&local11);
panda$core$String$Index$nullable $tmp488 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp487, &$s489);
*(&local12) = $tmp488;
// line 146
*(&local13) = ((panda$core$String*) NULL);
// line 147
panda$core$String$Index$nullable $tmp490 = *(&local12);
panda$core$Bit $tmp491 = panda$core$Bit$init$builtin_bit($tmp490.nonnull);
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block61; else goto block63;
block61:;
// line 148
org$pandalanguage$pandac$Compiler** $tmp493 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp494 = *$tmp493;
panda$core$String* $tmp495 = *(&local11);
panda$core$String$Index$nullable $tmp496 = *(&local12);
panda$core$Bit $tmp497 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp498 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { .nonnull = false }), $tmp496, $tmp497);
panda$core$String* $tmp499 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp495, $tmp498);
org$pandalanguage$pandac$ClassDecl* $tmp500 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q($tmp494, $tmp499);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
org$pandalanguage$pandac$ClassDecl* $tmp501 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
*(&local1) = $tmp500;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
// unreffing REF($658:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
// unreffing REF($657:panda.core.String)
// line 149
panda$core$String* $tmp502 = *(&local11);
panda$core$String* $tmp503 = *(&local11);
panda$core$String$Index$nullable $tmp504 = *(&local12);
panda$core$Bit $tmp505 = panda$core$Bit$init$builtin_bit($tmp504.nonnull);
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block64; else goto block65;
block65:;
panda$core$Int64 $tmp507 = (panda$core$Int64) {149};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s508, $tmp507, &$s509);
abort(); // unreachable
block64:;
panda$core$String$Index $tmp510 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp503, ((panda$core$String$Index) $tmp504.value));
panda$core$Bit $tmp511 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp512 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp510, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp511);
panda$core$String* $tmp513 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp502, $tmp512);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
panda$core$String* $tmp514 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
*(&local13) = $tmp513;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
// unreffing REF($687:panda.core.String)
goto block62;
block63:;
// line 1
// line 152
org$pandalanguage$pandac$ClassDecl** $tmp515 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp516 = *$tmp515;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
org$pandalanguage$pandac$ClassDecl* $tmp517 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
*(&local1) = $tmp516;
// line 153
panda$core$String* $tmp518 = *(&local11);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
panda$core$String* $tmp519 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
*(&local13) = $tmp518;
goto block62;
block62:;
// line 155
org$pandalanguage$pandac$ClassDecl* $tmp520 = *(&local1);
panda$core$Bit $tmp521 = panda$core$Bit$init$builtin_bit($tmp520 != NULL);
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block66; else goto block67;
block66:;
// line 156
org$pandalanguage$pandac$Compiler** $tmp523 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp524 = *$tmp523;
org$pandalanguage$pandac$ClassDecl* $tmp525 = *(&local1);
panda$core$Bit $tmp526 = panda$core$Bit$init$builtin_bit($tmp525 != NULL);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block68; else goto block69;
block69:;
panda$core$Int64 $tmp528 = (panda$core$Int64) {156};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s529, $tmp528, &$s530);
abort(); // unreachable
block68:;
org$pandalanguage$pandac$SymbolTable* $tmp531 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable($tmp524, $tmp525);
panda$core$String* $tmp532 = *(&local13);
org$pandalanguage$pandac$Symbol* $tmp533 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp531, $tmp532);
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
org$pandalanguage$pandac$Symbol* $tmp534 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
*(&local14) = $tmp533;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
// unreffing REF($737:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
// unreffing REF($735:org.pandalanguage.pandac.SymbolTable)
// line 157
org$pandalanguage$pandac$Symbol* $tmp535 = *(&local14);
panda$core$Bit $tmp536 = panda$core$Bit$init$builtin_bit($tmp535 == NULL);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block70; else goto block71;
block70:;
// line 158
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp538 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
// unreffing s
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp539 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp540 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp541 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp542 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp543 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block71:;
// line 160
org$pandalanguage$pandac$Symbol* $tmp544 = *(&local14);
panda$core$Bit $tmp545 = panda$core$Bit$init$builtin_bit($tmp544 != NULL);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block72; else goto block73;
block73:;
panda$core$Int64 $tmp547 = (panda$core$Int64) {160};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s548, $tmp547, &$s549);
abort(); // unreachable
block72:;
org$pandalanguage$pandac$Symbol$Kind* $tmp550 = &$tmp544->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp551 = *$tmp550;
panda$core$Int64 $tmp552 = $tmp551.$rawValue;
panda$core$Int64 $tmp553 = (panda$core$Int64) {5};
panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp552, $tmp553);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block75; else goto block76;
block75:;
// line 162
org$pandalanguage$pandac$Symbol* $tmp556 = *(&local14);
panda$collections$Array* $tmp557 = *(&local7);
$fn559 $tmp558 = ($fn559) param0->$class->vtable[2];
panda$core$Bit $tmp560 = $tmp558(param0, ((org$pandalanguage$pandac$MethodDecl*) $tmp556), ((panda$collections$ListView*) $tmp557));
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block77; else goto block78;
block77:;
// line 163
org$pandalanguage$pandac$Symbol* $tmp562 = *(&local14);
panda$core$Bit $tmp563 = panda$core$Bit$init$builtin_bit($tmp562 != NULL);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block79; else goto block80;
block80:;
panda$core$Int64 $tmp565 = (panda$core$Int64) {163};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s566, $tmp565, &$s567);
abort(); // unreachable
block79:;
$fn569 $tmp568 = ($fn569) param0->$class->vtable[6];
panda$core$String* $tmp570 = $tmp568(param0, $tmp562);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
// unreffing REF($828:panda.core.String?)
org$pandalanguage$pandac$Symbol* $tmp571 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
// unreffing s
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp572 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp573 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp574 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp575 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp575));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp576 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp570;
block78:;
goto block74;
block76:;
panda$core$Int64 $tmp577 = (panda$core$Int64) {6};
panda$core$Bit $tmp578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp552, $tmp577);
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block81; else goto block74;
block81:;
// line 167
org$pandalanguage$pandac$Symbol* $tmp580 = *(&local14);
org$pandalanguage$pandac$FixedArray** $tmp581 = &((org$pandalanguage$pandac$Methods*) $tmp580)->methods;
org$pandalanguage$pandac$FixedArray* $tmp582 = *$tmp581;
ITable* $tmp583 = ((panda$collections$Iterable*) $tmp582)->$class->itable;
while ($tmp583->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp583 = $tmp583->next;
}
$fn585 $tmp584 = $tmp583->methods[0];
panda$collections$Iterator* $tmp586 = $tmp584(((panda$collections$Iterable*) $tmp582));
goto block82;
block82:;
ITable* $tmp587 = $tmp586->$class->itable;
while ($tmp587->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp587 = $tmp587->next;
}
$fn589 $tmp588 = $tmp587->methods[0];
panda$core$Bit $tmp590 = $tmp588($tmp586);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block84; else goto block83;
block83:;
*(&local15) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp592 = $tmp586->$class->itable;
while ($tmp592->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp592 = $tmp592->next;
}
$fn594 $tmp593 = $tmp592->methods[1];
panda$core$Object* $tmp595 = $tmp593($tmp586);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp595)));
org$pandalanguage$pandac$MethodDecl* $tmp596 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
*(&local15) = ((org$pandalanguage$pandac$MethodDecl*) $tmp595);
// line 168
org$pandalanguage$pandac$MethodDecl* $tmp597 = *(&local15);
panda$collections$Array* $tmp598 = *(&local7);
$fn600 $tmp599 = ($fn600) param0->$class->vtable[2];
panda$core$Bit $tmp601 = $tmp599(param0, $tmp597, ((panda$collections$ListView*) $tmp598));
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block85; else goto block86;
block85:;
// line 169
org$pandalanguage$pandac$MethodDecl* $tmp603 = *(&local15);
$fn605 $tmp604 = ($fn605) param0->$class->vtable[5];
panda$core$String* $tmp606 = $tmp604(param0, $tmp603);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
// unreffing REF($908:panda.core.String?)
panda$core$Panda$unref$panda$core$Object$Q($tmp595);
// unreffing REF($889:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp607 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
// unreffing m
*(&local15) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
// unreffing REF($878:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$Symbol* $tmp608 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
// unreffing s
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp609 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp610 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp611 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp612 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp613 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp606;
block86:;
panda$core$Panda$unref$panda$core$Object$Q($tmp595);
// unreffing REF($889:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp614 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
// unreffing m
*(&local15) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block82;
block84:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
// unreffing REF($878:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block74;
block74:;
// line 174
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp615 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
// unreffing s
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp616 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp617 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp618 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp619 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp620 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block67:;
panda$core$String* $tmp621 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp622 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp623 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp623));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
goto block36;
block36:;
// line 177
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$collections$ListView* $tmp624 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp625 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp625));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);

}
void org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup(org$pandalanguage$pandac$pandadoc$LinkResolver* param0) {

// line 12
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Compiler** $tmp626 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp627 = *$tmp626;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
panda$core$String** $tmp628 = &param0->apiRelativePath;
panda$core$String* $tmp629 = *$tmp628;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
org$pandalanguage$pandac$ClassDecl** $tmp630 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp631 = *$tmp630;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
return;

}

