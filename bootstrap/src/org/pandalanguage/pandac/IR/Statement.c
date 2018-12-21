#include "org/pandalanguage/pandac/IR/Statement.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Symbol.h"


static panda$core$String $s1;
org$pandalanguage$pandac$IR$Statement$class_type org$pandalanguage$pandac$IR$Statement$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IR$Statement$convert$R$panda$core$String, org$pandalanguage$pandac$IR$Statement$cleanup} };

typedef panda$core$String* (*$fn151)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn582)(panda$collections$CollectionView*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74", 37, -8510906505906847728, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x61\x72\x79\x20", 7, 212357618280678, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x61\x6e\x63\x68\x20", 7, 212450869639155, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x73\x74\x20", 5, 20913204260, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x20", 3, 1493923, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x61\x6e\x63\x68\x20", 7, 212450869639155, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x20", 10, -1409986609548663362, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x5f\x63\x61\x6c\x6c\x20", 13, -5792732615387549007, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x61\x64\x5f\x66\x69\x65\x6c\x64\x20", 11, 3058635920978766632, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x63\x68\x6f\x69\x63\x65\x5f\x66\x69\x65\x6c\x64\x5f\x70\x6f\x69\x6e\x74\x65\x72\x20", 25, -3913498487693051030, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x66\x69\x65\x6c\x64\x5f\x70\x6f\x69\x6e\x74\x65\x72\x20", 18, 3388938635151659584, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x5f\x6d\x65\x74\x68\x6f\x64\x20", 21, -8815107277757025267, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x76\x69\x72\x74\x75\x61\x6c\x5f\x6d\x65\x74\x68\x6f\x64\x20", 19, -7905692567260344197, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x61\x64\x20", 5, 21863986849, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x65\x67\x61\x74\x65\x20", 7, 225053091281461, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20", 4, 218537570, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x61\x6c\x6c\x6f\x63\x20", 14, -2347844371417858360, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x64\x65\x73\x74\x72\x6f\x79\x20", 16, -6486310874503276737, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x67\x65\x74\x20", 12, 8247549443768276313, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x67\x65\x74\x5f\x69\x6e\x64\x65\x78\x20", 18, 4894902233184898028, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x6f\x66\x66\x73\x65\x74\x20", 15, 2675406242621769772, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x72\x65\x61\x6c\x6c\x6f\x63\x20", 16, -6484810075030803177, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x73\x65\x74\x20", 12, 8247549443780639925, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x73\x65\x74\x5f\x69\x6e\x64\x65\x78\x20", 18, -427618568312322776, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x5f\x63\x61\x6c\x6c\x20", 12, 6127247738107404280, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x70\x61\x6e\x64\x61", 8, 18742694999470718, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, 3140408377885245805, NULL };

panda$core$String* org$pandalanguage$pandac$IR$Statement$convert$R$panda$core$String(org$pandalanguage$pandac$IR$Statement* param0) {

org$pandalanguage$pandac$Position local0;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local2;
org$pandalanguage$pandac$IR$Value* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
org$pandalanguage$pandac$Position local5;
org$pandalanguage$pandac$IR$Block$ID local6;
org$pandalanguage$pandac$Position local7;
org$pandalanguage$pandac$IR$Value* local8 = NULL;
org$pandalanguage$pandac$Type* local9 = NULL;
panda$core$String* local10 = NULL;
org$pandalanguage$pandac$Position local11;
org$pandalanguage$pandac$IR$Value* local12 = NULL;
org$pandalanguage$pandac$IR$Block$ID local13;
org$pandalanguage$pandac$IR$Block$ID local14;
org$pandalanguage$pandac$Position local15;
org$pandalanguage$pandac$ClassDecl* local16 = NULL;
org$pandalanguage$pandac$Position local17;
org$pandalanguage$pandac$IR$Value* local18 = NULL;
panda$collections$ImmutableArray* local19 = NULL;
org$pandalanguage$pandac$Position local20;
org$pandalanguage$pandac$IR$Value* local21 = NULL;
org$pandalanguage$pandac$FieldDecl* local22 = NULL;
org$pandalanguage$pandac$Position local23;
org$pandalanguage$pandac$IR$Value* local24 = NULL;
org$pandalanguage$pandac$ChoiceCase* local25 = NULL;
panda$core$Int64 local26;
org$pandalanguage$pandac$Position local27;
org$pandalanguage$pandac$IR$Value* local28 = NULL;
org$pandalanguage$pandac$FieldDecl* local29 = NULL;
org$pandalanguage$pandac$Position local30;
org$pandalanguage$pandac$IR$Value* local31 = NULL;
org$pandalanguage$pandac$ClassDecl* local32 = NULL;
panda$core$Int64 local33;
org$pandalanguage$pandac$Type* local34 = NULL;
org$pandalanguage$pandac$Position local35;
org$pandalanguage$pandac$IR$Value* local36 = NULL;
panda$core$Int64 local37;
org$pandalanguage$pandac$Type* local38 = NULL;
org$pandalanguage$pandac$Position local39;
org$pandalanguage$pandac$IR$Value* local40 = NULL;
org$pandalanguage$pandac$Position local41;
org$pandalanguage$pandac$IR$Value* local42 = NULL;
org$pandalanguage$pandac$Position local43;
org$pandalanguage$pandac$IR$Value* local44 = NULL;
org$pandalanguage$pandac$Position local45;
org$pandalanguage$pandac$IR$Value* local46 = NULL;
org$pandalanguage$pandac$Type* local47 = NULL;
org$pandalanguage$pandac$Position local48;
org$pandalanguage$pandac$IR$Value* local49 = NULL;
org$pandalanguage$pandac$Position local50;
org$pandalanguage$pandac$IR$Value* local51 = NULL;
org$pandalanguage$pandac$Position local52;
org$pandalanguage$pandac$IR$Value* local53 = NULL;
org$pandalanguage$pandac$IR$Value* local54 = NULL;
org$pandalanguage$pandac$Position local55;
org$pandalanguage$pandac$IR$Value* local56 = NULL;
org$pandalanguage$pandac$IR$Value* local57 = NULL;
org$pandalanguage$pandac$Position local58;
org$pandalanguage$pandac$IR$Value* local59 = NULL;
org$pandalanguage$pandac$IR$Value* local60 = NULL;
org$pandalanguage$pandac$IR$Value* local61 = NULL;
org$pandalanguage$pandac$Position local62;
org$pandalanguage$pandac$IR$Value* local63 = NULL;
org$pandalanguage$pandac$IR$Value* local64 = NULL;
org$pandalanguage$pandac$Position local65;
org$pandalanguage$pandac$IR$Value* local66 = NULL;
org$pandalanguage$pandac$IR$Value* local67 = NULL;
org$pandalanguage$pandac$IR$Value* local68 = NULL;
org$pandalanguage$pandac$Position local69;
org$pandalanguage$pandac$IR$Value* local70 = NULL;
org$pandalanguage$pandac$Position local71;
org$pandalanguage$pandac$MethodDecl* local72 = NULL;
panda$collections$ImmutableArray* local73 = NULL;
org$pandalanguage$pandac$Position local74;
org$pandalanguage$pandac$IR$Value* local75 = NULL;
org$pandalanguage$pandac$IR$Value* local76 = NULL;
org$pandalanguage$pandac$Position local77;
// line 168
panda$core$Int64* $tmp2 = &param0->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = panda$core$Int64$init$builtin_int64(0);
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp7 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp8 = *$tmp7;
*(&local0) = $tmp8;
org$pandalanguage$pandac$IR$Value** $tmp9 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp10 = *$tmp9;
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp11 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
*(&local1) = $tmp10;
org$pandalanguage$pandac$parser$Token$Kind* $tmp12 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp13 = *$tmp12;
*(&local2) = $tmp13;
org$pandalanguage$pandac$IR$Value** $tmp14 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp15 = *$tmp14;
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp16 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
*(&local3) = $tmp15;
org$pandalanguage$pandac$Type** $tmp17 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
org$pandalanguage$pandac$Type* $tmp18 = *$tmp17;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp19 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
*(&local4) = $tmp18;
// line 170
org$pandalanguage$pandac$IR$Value* $tmp20 = *(&local1);
panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s22, ((panda$core$Object*) $tmp20));
panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s24);
org$pandalanguage$pandac$parser$Token$Kind $tmp25 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp26;
$tmp26 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp26->value = $tmp25;
panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp23, ((panda$core$Object*) $tmp26));
panda$core$String* $tmp28 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, &$s29);
org$pandalanguage$pandac$IR$Value* $tmp30 = *(&local3);
panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp28, ((panda$core$Object*) $tmp30));
panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp31, &$s33);
org$pandalanguage$pandac$Type* $tmp34 = *(&local4);
panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp32, ((panda$core$Object*) $tmp34));
panda$core$String* $tmp36 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp35, &$s37);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
org$pandalanguage$pandac$Type* $tmp38 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp39 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp40 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing left
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp36;
block3:;
panda$core$Int64 $tmp41 = panda$core$Int64$init$builtin_int64(1);
panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp41);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp44 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp45 = *$tmp44;
*(&local5) = $tmp45;
org$pandalanguage$pandac$IR$Block$ID* $tmp46 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp47 = *$tmp46;
*(&local6) = $tmp47;
// line 172
org$pandalanguage$pandac$IR$Block$ID $tmp48 = *(&local6);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp49;
$tmp49 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp49->value = $tmp48;
panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s51, ((panda$core$Object*) $tmp49));
panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, &$s53);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
return $tmp52;
block5:;
panda$core$Int64 $tmp54 = panda$core$Int64$init$builtin_int64(2);
panda$core$Bit $tmp55 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp54);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp57 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp58 = *$tmp57;
*(&local7) = $tmp58;
org$pandalanguage$pandac$IR$Value** $tmp59 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp60 = *$tmp59;
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp61 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
*(&local8) = $tmp60;
org$pandalanguage$pandac$Type** $tmp62 = (org$pandalanguage$pandac$Type**) (param0->$data + 24);
org$pandalanguage$pandac$Type* $tmp63 = *$tmp62;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp64 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
*(&local9) = $tmp63;
// line 174
org$pandalanguage$pandac$IR$Value* $tmp65 = *(&local8);
panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s67, ((panda$core$Object*) $tmp65));
panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp66, &$s69);
org$pandalanguage$pandac$Type* $tmp70 = *(&local9);
panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp68, ((panda$core$Object*) $tmp70));
panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp71, &$s73);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
org$pandalanguage$pandac$Type* $tmp74 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing type
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp75 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing value
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp72;
block7:;
panda$core$Int64 $tmp76 = panda$core$Int64$init$builtin_int64(3);
panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block8; else goto block9;
block8:;
panda$core$String** $tmp79 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp80 = *$tmp79;
*(&local10) = ((panda$core$String*) NULL);
panda$core$String* $tmp81 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
*(&local10) = $tmp80;
// line 176
panda$core$String* $tmp82 = *(&local10);
panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s84, $tmp82);
panda$core$String* $tmp85 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp83, &$s86);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$core$String* $tmp87 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing text
*(&local10) = ((panda$core$String*) NULL);
return $tmp85;
block9:;
panda$core$Int64 $tmp88 = panda$core$Int64$init$builtin_int64(5);
panda$core$Bit $tmp89 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp88);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp91 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp92 = *$tmp91;
*(&local11) = $tmp92;
org$pandalanguage$pandac$IR$Value** $tmp93 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp94 = *$tmp93;
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp95 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
*(&local12) = $tmp94;
org$pandalanguage$pandac$IR$Block$ID* $tmp96 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 24);
org$pandalanguage$pandac$IR$Block$ID $tmp97 = *$tmp96;
*(&local13) = $tmp97;
org$pandalanguage$pandac$IR$Block$ID* $tmp98 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 32);
org$pandalanguage$pandac$IR$Block$ID $tmp99 = *$tmp98;
*(&local14) = $tmp99;
// line 178
org$pandalanguage$pandac$IR$Value* $tmp100 = *(&local12);
panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s102, ((panda$core$Object*) $tmp100));
panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s104);
org$pandalanguage$pandac$IR$Block$ID $tmp105 = *(&local13);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp106;
$tmp106 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp106->value = $tmp105;
panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp103, ((panda$core$Object*) $tmp106));
panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp107, &$s109);
org$pandalanguage$pandac$IR$Block$ID $tmp110 = *(&local14);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp111;
$tmp111 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp111->value = $tmp110;
panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp108, ((panda$core$Object*) $tmp111));
panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp112, &$s114);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
org$pandalanguage$pandac$IR$Value* $tmp115 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
// unreffing test
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp113;
block11:;
panda$core$Int64 $tmp116 = panda$core$Int64$init$builtin_int64(6);
panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp119 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp120 = *$tmp119;
*(&local15) = $tmp120;
org$pandalanguage$pandac$ClassDecl** $tmp121 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp122 = *$tmp121;
*(&local16) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp123 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
*(&local16) = $tmp122;
// line 180
org$pandalanguage$pandac$ClassDecl* $tmp124 = *(&local16);
panda$core$String** $tmp125 = &$tmp124->name;
panda$core$String* $tmp126 = *$tmp125;
panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s128, $tmp126);
panda$core$String* $tmp129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp127, &$s130);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
org$pandalanguage$pandac$ClassDecl* $tmp131 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing cl
*(&local16) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp129;
block13:;
panda$core$Int64 $tmp132 = panda$core$Int64$init$builtin_int64(7);
panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp132);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp135 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp136 = *$tmp135;
*(&local17) = $tmp136;
org$pandalanguage$pandac$IR$Value** $tmp137 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp138 = *$tmp137;
*(&local18) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp139 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
*(&local18) = $tmp138;
panda$collections$ImmutableArray** $tmp140 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp141 = *$tmp140;
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp142 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
*(&local19) = $tmp141;
// line 182
org$pandalanguage$pandac$IR$Value* $tmp143 = *(&local18);
panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s145, ((panda$core$Object*) $tmp143));
panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp144, &$s147);
panda$collections$ImmutableArray* $tmp148 = *(&local19);
ITable* $tmp149 = ((panda$collections$CollectionView*) $tmp148)->$class->itable;
while ($tmp149->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp149 = $tmp149->next;
}
$fn151 $tmp150 = $tmp149->methods[2];
panda$core$String* $tmp152 = $tmp150(((panda$collections$CollectionView*) $tmp148), &$s153);
panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, $tmp152);
panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp154, &$s156);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
panda$collections$ImmutableArray* $tmp157 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing args
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp158 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// unreffing m
*(&local18) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp155;
block15:;
panda$core$Int64 $tmp159 = panda$core$Int64$init$builtin_int64(8);
panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp159);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp162 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp163 = *$tmp162;
*(&local20) = $tmp163;
org$pandalanguage$pandac$IR$Value** $tmp164 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp165 = *$tmp164;
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp166 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
*(&local21) = $tmp165;
org$pandalanguage$pandac$FieldDecl** $tmp167 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp168 = *$tmp167;
*(&local22) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp169 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
*(&local22) = $tmp168;
// line 184
org$pandalanguage$pandac$IR$Value* $tmp170 = *(&local21);
panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s172, ((panda$core$Object*) $tmp170));
panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s174);
org$pandalanguage$pandac$FieldDecl* $tmp175 = *(&local22);
panda$core$Weak** $tmp176 = &$tmp175->owner;
panda$core$Weak* $tmp177 = *$tmp176;
panda$core$Object* $tmp178 = panda$core$Weak$get$R$panda$core$Weak$T($tmp177);
panda$core$Panda$unref$panda$core$Object$Q($tmp178);
panda$core$String** $tmp179 = &((org$pandalanguage$pandac$ClassDecl*) $tmp178)->name;
panda$core$String* $tmp180 = *$tmp179;
panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, $tmp180);
panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, &$s183);
org$pandalanguage$pandac$FieldDecl* $tmp184 = *(&local22);
panda$core$String** $tmp185 = &((org$pandalanguage$pandac$Symbol*) $tmp184)->name;
panda$core$String* $tmp186 = *$tmp185;
panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp182, $tmp186);
panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s189);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
org$pandalanguage$pandac$FieldDecl* $tmp190 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
// unreffing field
*(&local22) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp191 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing value
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp188;
block17:;
panda$core$Int64 $tmp192 = panda$core$Int64$init$builtin_int64(4);
panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp192);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp195 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp196 = *$tmp195;
*(&local23) = $tmp196;
org$pandalanguage$pandac$IR$Value** $tmp197 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp198 = *$tmp197;
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp199 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
*(&local24) = $tmp198;
org$pandalanguage$pandac$ChoiceCase** $tmp200 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp201 = *$tmp200;
*(&local25) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ChoiceCase* $tmp202 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
*(&local25) = $tmp201;
panda$core$Int64* $tmp203 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp204 = *$tmp203;
*(&local26) = $tmp204;
// line 186
org$pandalanguage$pandac$IR$Value* $tmp205 = *(&local24);
panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s207, ((panda$core$Object*) $tmp205));
panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, &$s209);
org$pandalanguage$pandac$ChoiceCase* $tmp210 = *(&local25);
panda$core$String** $tmp211 = &((org$pandalanguage$pandac$Symbol*) $tmp210)->name;
panda$core$String* $tmp212 = *$tmp211;
panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp208, $tmp212);
panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp213, &$s215);
panda$core$Int64 $tmp216 = *(&local26);
panda$core$Int64$wrapper* $tmp217;
$tmp217 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp217->value = $tmp216;
panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp214, ((panda$core$Object*) $tmp217));
panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp218, &$s220);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
org$pandalanguage$pandac$ChoiceCase* $tmp221 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
// unreffing cc
*(&local25) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp222 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing target
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp219;
block19:;
panda$core$Int64 $tmp223 = panda$core$Int64$init$builtin_int64(9);
panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp223);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp226 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp227 = *$tmp226;
*(&local27) = $tmp227;
org$pandalanguage$pandac$IR$Value** $tmp228 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp229 = *$tmp228;
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp230 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
*(&local28) = $tmp229;
org$pandalanguage$pandac$FieldDecl** $tmp231 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp232 = *$tmp231;
*(&local29) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp233 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
*(&local29) = $tmp232;
// line 188
org$pandalanguage$pandac$IR$Value* $tmp234 = *(&local28);
panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s236, ((panda$core$Object*) $tmp234));
panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s238);
org$pandalanguage$pandac$FieldDecl* $tmp239 = *(&local29);
panda$core$Weak** $tmp240 = &$tmp239->owner;
panda$core$Weak* $tmp241 = *$tmp240;
panda$core$Object* $tmp242 = panda$core$Weak$get$R$panda$core$Weak$T($tmp241);
panda$core$Panda$unref$panda$core$Object$Q($tmp242);
panda$core$String** $tmp243 = &((org$pandalanguage$pandac$ClassDecl*) $tmp242)->name;
panda$core$String* $tmp244 = *$tmp243;
panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp237, $tmp244);
panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp245, &$s247);
org$pandalanguage$pandac$FieldDecl* $tmp248 = *(&local29);
panda$core$String** $tmp249 = &((org$pandalanguage$pandac$Symbol*) $tmp248)->name;
panda$core$String* $tmp250 = *$tmp249;
panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, $tmp250);
panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp251, &$s253);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
org$pandalanguage$pandac$FieldDecl* $tmp254 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
// unreffing field
*(&local29) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp255 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
// unreffing ptr
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp252;
block21:;
panda$core$Int64 $tmp256 = panda$core$Int64$init$builtin_int64(11);
panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp256);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp259 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp260 = *$tmp259;
*(&local30) = $tmp260;
org$pandalanguage$pandac$IR$Value** $tmp261 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp262 = *$tmp261;
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp263 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
*(&local31) = $tmp262;
org$pandalanguage$pandac$ClassDecl** $tmp264 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 24);
org$pandalanguage$pandac$ClassDecl* $tmp265 = *$tmp264;
*(&local32) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp266 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
*(&local32) = $tmp265;
panda$core$Int64* $tmp267 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp268 = *$tmp267;
*(&local33) = $tmp268;
org$pandalanguage$pandac$Type** $tmp269 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
org$pandalanguage$pandac$Type* $tmp270 = *$tmp269;
*(&local34) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp271 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
*(&local34) = $tmp270;
// line 190
org$pandalanguage$pandac$IR$Value* $tmp272 = *(&local31);
panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s274, ((panda$core$Object*) $tmp272));
panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp273, &$s276);
org$pandalanguage$pandac$ClassDecl* $tmp277 = *(&local32);
panda$core$String** $tmp278 = &$tmp277->name;
panda$core$String* $tmp279 = *$tmp278;
panda$core$String* $tmp280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp275, $tmp279);
panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp280, &$s282);
panda$core$Int64 $tmp283 = *(&local33);
panda$core$Int64$wrapper* $tmp284;
$tmp284 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp284->value = $tmp283;
panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp281, ((panda$core$Object*) $tmp284));
panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp285, &$s287);
org$pandalanguage$pandac$Type* $tmp288 = *(&local34);
panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp286, ((panda$core$Object*) $tmp288));
panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp289, &$s291);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
org$pandalanguage$pandac$Type* $tmp292 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
// unreffing type
*(&local34) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp293 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
// unreffing cl
*(&local32) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp294 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// unreffing value
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp290;
block23:;
panda$core$Int64 $tmp295 = panda$core$Int64$init$builtin_int64(10);
panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp295);
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp298 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp299 = *$tmp298;
*(&local35) = $tmp299;
org$pandalanguage$pandac$IR$Value** $tmp300 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp301 = *$tmp300;
*(&local36) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp302 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
*(&local36) = $tmp301;
panda$core$Int64* $tmp303 = (panda$core$Int64*) (param0->$data + 24);
panda$core$Int64 $tmp304 = *$tmp303;
*(&local37) = $tmp304;
org$pandalanguage$pandac$Type** $tmp305 = (org$pandalanguage$pandac$Type**) (param0->$data + 32);
org$pandalanguage$pandac$Type* $tmp306 = *$tmp305;
*(&local38) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp307 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
*(&local38) = $tmp306;
// line 192
org$pandalanguage$pandac$IR$Value* $tmp308 = *(&local36);
panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s310, ((panda$core$Object*) $tmp308));
panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp309, &$s312);
panda$core$Int64 $tmp313 = *(&local37);
panda$core$Int64$wrapper* $tmp314;
$tmp314 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp314->value = $tmp313;
panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp311, ((panda$core$Object*) $tmp314));
panda$core$String* $tmp316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s317);
org$pandalanguage$pandac$Type* $tmp318 = *(&local38);
panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp316, ((panda$core$Object*) $tmp318));
panda$core$String* $tmp320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp319, &$s321);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
org$pandalanguage$pandac$Type* $tmp322 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing type
*(&local38) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp323 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
// unreffing value
*(&local36) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp320;
block25:;
panda$core$Int64 $tmp324 = panda$core$Int64$init$builtin_int64(12);
panda$core$Bit $tmp325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp324);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp327 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp328 = *$tmp327;
*(&local39) = $tmp328;
org$pandalanguage$pandac$IR$Value** $tmp329 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp330 = *$tmp329;
*(&local40) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp331 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
*(&local40) = $tmp330;
// line 194
org$pandalanguage$pandac$IR$Value* $tmp332 = *(&local40);
panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s334, ((panda$core$Object*) $tmp332));
panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s336);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
org$pandalanguage$pandac$IR$Value* $tmp337 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
// unreffing ptr
*(&local40) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp335;
block27:;
panda$core$Int64 $tmp338 = panda$core$Int64$init$builtin_int64(13);
panda$core$Bit $tmp339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp338);
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp341 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp342 = *$tmp341;
*(&local41) = $tmp342;
org$pandalanguage$pandac$IR$Value** $tmp343 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp344 = *$tmp343;
*(&local42) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp345 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
*(&local42) = $tmp344;
// line 196
org$pandalanguage$pandac$IR$Value* $tmp346 = *(&local42);
panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s348, ((panda$core$Object*) $tmp346));
panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp347, &$s350);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
org$pandalanguage$pandac$IR$Value* $tmp351 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
// unreffing value
*(&local42) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp349;
block29:;
panda$core$Int64 $tmp352 = panda$core$Int64$init$builtin_int64(14);
panda$core$Bit $tmp353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp352);
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp355 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp356 = *$tmp355;
*(&local43) = $tmp356;
org$pandalanguage$pandac$IR$Value** $tmp357 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp358 = *$tmp357;
*(&local44) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp359 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
*(&local44) = $tmp358;
// line 198
org$pandalanguage$pandac$IR$Value* $tmp360 = *(&local44);
panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s362, ((panda$core$Object*) $tmp360));
panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, &$s364);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
org$pandalanguage$pandac$IR$Value* $tmp365 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
// unreffing value
*(&local44) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp363;
block31:;
panda$core$Int64 $tmp366 = panda$core$Int64$init$builtin_int64(15);
panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp366);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp369 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp370 = *$tmp369;
*(&local45) = $tmp370;
org$pandalanguage$pandac$IR$Value** $tmp371 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp372 = *$tmp371;
*(&local46) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp373 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
*(&local46) = $tmp372;
org$pandalanguage$pandac$Type** $tmp374 = (org$pandalanguage$pandac$Type**) (param0->$data + 24);
org$pandalanguage$pandac$Type* $tmp375 = *$tmp374;
*(&local47) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp376 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
*(&local47) = $tmp375;
// line 200
org$pandalanguage$pandac$IR$Value* $tmp377 = *(&local46);
panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s379, ((panda$core$Object*) $tmp377));
panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp378, &$s381);
org$pandalanguage$pandac$Type* $tmp382 = *(&local47);
panda$core$String* $tmp383 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp380, ((panda$core$Object*) $tmp382));
panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp383, &$s385);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
org$pandalanguage$pandac$Type* $tmp386 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
// unreffing type
*(&local47) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp387 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing count
*(&local46) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp384;
block33:;
panda$core$Int64 $tmp388 = panda$core$Int64$init$builtin_int64(16);
panda$core$Bit $tmp389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp388);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp391 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp392 = *$tmp391;
*(&local48) = $tmp392;
org$pandalanguage$pandac$IR$Value** $tmp393 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp394 = *$tmp393;
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp395 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
*(&local49) = $tmp394;
// line 202
org$pandalanguage$pandac$IR$Value* $tmp396 = *(&local49);
panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s398, ((panda$core$Object*) $tmp396));
panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, &$s400);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
org$pandalanguage$pandac$IR$Value* $tmp401 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing ptr
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp399;
block35:;
panda$core$Int64 $tmp402 = panda$core$Int64$init$builtin_int64(17);
panda$core$Bit $tmp403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp402);
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp405 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp406 = *$tmp405;
*(&local50) = $tmp406;
org$pandalanguage$pandac$IR$Value** $tmp407 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp408 = *$tmp407;
*(&local51) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp409 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
*(&local51) = $tmp408;
// line 204
org$pandalanguage$pandac$IR$Value* $tmp410 = *(&local51);
panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s412, ((panda$core$Object*) $tmp410));
panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp411, &$s414);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
org$pandalanguage$pandac$IR$Value* $tmp415 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
// unreffing ptr
*(&local51) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp413;
block37:;
panda$core$Int64 $tmp416 = panda$core$Int64$init$builtin_int64(18);
panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp416);
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp419 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp420 = *$tmp419;
*(&local52) = $tmp420;
org$pandalanguage$pandac$IR$Value** $tmp421 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp422 = *$tmp421;
*(&local53) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp423 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
*(&local53) = $tmp422;
org$pandalanguage$pandac$IR$Value** $tmp424 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp425 = *$tmp424;
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp426 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
*(&local54) = $tmp425;
// line 206
org$pandalanguage$pandac$IR$Value* $tmp427 = *(&local53);
panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s429, ((panda$core$Object*) $tmp427));
panda$core$String* $tmp430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, &$s431);
org$pandalanguage$pandac$IR$Value* $tmp432 = *(&local54);
panda$core$String* $tmp433 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp430, ((panda$core$Object*) $tmp432));
panda$core$String* $tmp434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp433, &$s435);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
org$pandalanguage$pandac$IR$Value* $tmp436 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
// unreffing index
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp437 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
// unreffing ptr
*(&local53) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp434;
block39:;
panda$core$Int64 $tmp438 = panda$core$Int64$init$builtin_int64(19);
panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp438);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$Position* $tmp441 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp442 = *$tmp441;
*(&local55) = $tmp442;
org$pandalanguage$pandac$IR$Value** $tmp443 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp444 = *$tmp443;
*(&local56) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp445 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
*(&local56) = $tmp444;
org$pandalanguage$pandac$IR$Value** $tmp446 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp447 = *$tmp446;
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp448 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
*(&local57) = $tmp447;
// line 208
org$pandalanguage$pandac$IR$Value* $tmp449 = *(&local56);
panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s451, ((panda$core$Object*) $tmp449));
panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp450, &$s453);
org$pandalanguage$pandac$IR$Value* $tmp454 = *(&local57);
panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp452, ((panda$core$Object*) $tmp454));
panda$core$String* $tmp456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp455, &$s457);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
org$pandalanguage$pandac$IR$Value* $tmp458 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp458));
// unreffing index
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp459 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing ptr
*(&local56) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp456;
block41:;
panda$core$Int64 $tmp460 = panda$core$Int64$init$builtin_int64(20);
panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp460);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp463 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp464 = *$tmp463;
*(&local58) = $tmp464;
org$pandalanguage$pandac$IR$Value** $tmp465 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp466 = *$tmp465;
*(&local59) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp467 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
*(&local59) = $tmp466;
org$pandalanguage$pandac$IR$Value** $tmp468 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp469 = *$tmp468;
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp470 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
*(&local60) = $tmp469;
org$pandalanguage$pandac$IR$Value** $tmp471 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp472 = *$tmp471;
*(&local61) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp473 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp472));
*(&local61) = $tmp472;
// line 210
org$pandalanguage$pandac$IR$Value* $tmp474 = *(&local59);
panda$core$String* $tmp475 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s476, ((panda$core$Object*) $tmp474));
panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp475, &$s478);
org$pandalanguage$pandac$IR$Value* $tmp479 = *(&local60);
panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp477, ((panda$core$Object*) $tmp479));
panda$core$String* $tmp481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s482);
org$pandalanguage$pandac$IR$Value* $tmp483 = *(&local61);
panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp481, ((panda$core$Object*) $tmp483));
panda$core$String* $tmp485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp484, &$s486);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
org$pandalanguage$pandac$IR$Value* $tmp487 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp487));
// unreffing newSize
*(&local61) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp488 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp488));
// unreffing oldSize
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp489 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
// unreffing ptr
*(&local59) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp485;
block43:;
panda$core$Int64 $tmp490 = panda$core$Int64$init$builtin_int64(21);
panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp490);
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp493 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp494 = *$tmp493;
*(&local62) = $tmp494;
org$pandalanguage$pandac$IR$Value** $tmp495 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp496 = *$tmp495;
*(&local63) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp497 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
*(&local63) = $tmp496;
org$pandalanguage$pandac$IR$Value** $tmp498 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp499 = *$tmp498;
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp500 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
*(&local64) = $tmp499;
// line 212
org$pandalanguage$pandac$IR$Value* $tmp501 = *(&local63);
panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s503, ((panda$core$Object*) $tmp501));
panda$core$String* $tmp504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp502, &$s505);
org$pandalanguage$pandac$IR$Value* $tmp506 = *(&local64);
panda$core$String* $tmp507 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp504, ((panda$core$Object*) $tmp506));
panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp507, &$s509);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
org$pandalanguage$pandac$IR$Value* $tmp510 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
// unreffing ptr
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp511 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
// unreffing value
*(&local63) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp508;
block45:;
panda$core$Int64 $tmp512 = panda$core$Int64$init$builtin_int64(22);
panda$core$Bit $tmp513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp512);
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp515 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp516 = *$tmp515;
*(&local65) = $tmp516;
org$pandalanguage$pandac$IR$Value** $tmp517 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp518 = *$tmp517;
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp519 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
*(&local66) = $tmp518;
org$pandalanguage$pandac$IR$Value** $tmp520 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp521 = *$tmp520;
*(&local67) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp522 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
*(&local67) = $tmp521;
org$pandalanguage$pandac$IR$Value** $tmp523 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp524 = *$tmp523;
*(&local68) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp525 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp525));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
*(&local68) = $tmp524;
// line 214
org$pandalanguage$pandac$IR$Value* $tmp526 = *(&local66);
panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s528, ((panda$core$Object*) $tmp526));
panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp527, &$s530);
org$pandalanguage$pandac$IR$Value* $tmp531 = *(&local67);
panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp529, ((panda$core$Object*) $tmp531));
panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp532, &$s534);
org$pandalanguage$pandac$IR$Value* $tmp535 = *(&local68);
panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp533, ((panda$core$Object*) $tmp535));
panda$core$String* $tmp537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, &$s538);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp527));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
org$pandalanguage$pandac$IR$Value* $tmp539 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
// unreffing index
*(&local68) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp540 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
// unreffing ptr
*(&local67) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp541 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing value
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp537;
block47:;
panda$core$Int64 $tmp542 = panda$core$Int64$init$builtin_int64(23);
panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp542);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp545 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp546 = *$tmp545;
*(&local69) = $tmp546;
org$pandalanguage$pandac$IR$Value** $tmp547 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp548 = *$tmp547;
*(&local70) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp549 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
*(&local70) = $tmp548;
// line 216
org$pandalanguage$pandac$IR$Value* $tmp550 = *(&local70);
panda$core$Bit $tmp551 = panda$core$Bit$init$builtin_bit($tmp550 != NULL);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block50; else goto block51;
block50:;
// line 217
org$pandalanguage$pandac$IR$Value* $tmp553 = *(&local70);
panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s555, ((panda$core$Object*) $tmp553));
panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp554, &$s557);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp554));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
org$pandalanguage$pandac$IR$Value* $tmp558 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp558));
// unreffing value
*(&local70) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp556;
block51:;
// line 219
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s559));
org$pandalanguage$pandac$IR$Value* $tmp560 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
// unreffing value
*(&local70) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return &$s561;
block49:;
panda$core$Int64 $tmp562 = panda$core$Int64$init$builtin_int64(24);
panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp565 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp566 = *$tmp565;
*(&local71) = $tmp566;
org$pandalanguage$pandac$MethodDecl** $tmp567 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 16);
org$pandalanguage$pandac$MethodDecl* $tmp568 = *$tmp567;
*(&local72) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp569 = *(&local72);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
*(&local72) = $tmp568;
panda$collections$ImmutableArray** $tmp570 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp571 = *$tmp570;
*(&local73) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp572 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
*(&local73) = $tmp571;
// line 221
org$pandalanguage$pandac$MethodDecl* $tmp573 = *(&local72);
panda$core$String* $tmp574 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String($tmp573);
panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s576, $tmp574);
panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s578);
panda$collections$ImmutableArray* $tmp579 = *(&local73);
ITable* $tmp580 = ((panda$collections$CollectionView*) $tmp579)->$class->itable;
while ($tmp580->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp580 = $tmp580->next;
}
$fn582 $tmp581 = $tmp580->methods[2];
panda$core$String* $tmp583 = $tmp581(((panda$collections$CollectionView*) $tmp579), &$s584);
panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, $tmp583);
panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, &$s587);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp575));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
panda$collections$ImmutableArray* $tmp588 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
// unreffing args
*(&local73) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp589 = *(&local72);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp589));
// unreffing m
*(&local72) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return $tmp586;
block53:;
panda$core$Int64 $tmp590 = panda$core$Int64$init$builtin_int64(25);
panda$core$Bit $tmp591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp590);
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp593 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp594 = *$tmp593;
*(&local74) = $tmp594;
org$pandalanguage$pandac$IR$Value** $tmp595 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp596 = *$tmp595;
*(&local75) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp597 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
*(&local75) = $tmp596;
org$pandalanguage$pandac$IR$Value** $tmp598 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp599 = *$tmp598;
*(&local76) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp600 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
*(&local76) = $tmp599;
// line 223
org$pandalanguage$pandac$IR$Value* $tmp601 = *(&local75);
panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s603, ((panda$core$Object*) $tmp601));
panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp602, &$s605);
org$pandalanguage$pandac$IR$Value* $tmp606 = *(&local76);
panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp604, ((panda$core$Object*) $tmp606));
panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp607, &$s609);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
org$pandalanguage$pandac$IR$Value* $tmp610 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
// unreffing ptr
*(&local76) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp611 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
// unreffing value
*(&local75) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp608;
block55:;
panda$core$Int64 $tmp612 = panda$core$Int64$init$builtin_int64(26);
panda$core$Bit $tmp613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp612);
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block56; else goto block1;
block56:;
org$pandalanguage$pandac$Position* $tmp615 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp616 = *$tmp615;
*(&local77) = $tmp616;
// line 225
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s617));
return &$s618;
block1:;
panda$core$Bit $tmp619 = panda$core$Bit$init$builtin_bit(false);
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block57; else goto block58;
block58:;
panda$core$Int64 $tmp621 = panda$core$Int64$init$builtin_int64(167);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s622, $tmp621, &$s623);
abort(); // unreachable
block57:;
abort(); // unreachable

}
void org$pandalanguage$pandac$IR$Statement$cleanup(org$pandalanguage$pandac$IR$Statement* param0) {

return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$parser$Token$Kind param4, org$pandalanguage$pandac$IR$Value* param5, org$pandalanguage$pandac$Type* param6) {

// line 6
panda$core$Int64* $tmp624 = &param0->$rawValue;
*$tmp624 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp625 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp625 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp626 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp626 = param3;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp627 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
*$tmp627 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$IR$Value** $tmp628 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
*$tmp628 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$Type** $tmp629 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
*$tmp629 = param6;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Block$ID param3) {

// line 6
panda$core$Int64* $tmp630 = &param0->$rawValue;
*$tmp630 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp631 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp631 = param2;
// line 6
org$pandalanguage$pandac$IR$Block$ID* $tmp632 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
*$tmp632 = param3;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$Type* param4) {

// line 6
panda$core$Int64* $tmp633 = &param0->$rawValue;
*$tmp633 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp634 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp634 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp635 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp635 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$Type** $tmp636 = (org$pandalanguage$pandac$Type**) (param0->$data + 24);
*$tmp636 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 6
panda$core$Int64* $tmp637 = &param0->$rawValue;
*$tmp637 = param1;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp638 = (panda$core$String**) (param0->$data + 0);
*$tmp638 = param2;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$ChoiceCase* param4, panda$core$Int64 param5) {

// line 6
panda$core$Int64* $tmp639 = &param0->$rawValue;
*$tmp639 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp640 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp640 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp641 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp641 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ChoiceCase** $tmp642 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
*$tmp642 = param4;
// line 6
panda$core$Int64* $tmp643 = (panda$core$Int64*) (param0->$data + 32);
*$tmp643 = param5;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$IR$Block$ID param4, org$pandalanguage$pandac$IR$Block$ID param5) {

// line 6
panda$core$Int64* $tmp644 = &param0->$rawValue;
*$tmp644 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp645 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp645 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp646 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp646 = param3;
// line 6
org$pandalanguage$pandac$IR$Block$ID* $tmp647 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 24);
*$tmp647 = param4;
// line 6
org$pandalanguage$pandac$IR$Block$ID* $tmp648 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 32);
*$tmp648 = param5;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ClassDecl* param3) {

// line 6
panda$core$Int64* $tmp649 = &param0->$rawValue;
*$tmp649 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp650 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp650 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ClassDecl** $tmp651 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 16);
*$tmp651 = param3;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IR$Value$GT(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp652 = &param0->$rawValue;
*$tmp652 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp653 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp653 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp654 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp654 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp655 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp655 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$FieldDecl* param4) {

// line 6
panda$core$Int64* $tmp656 = &param0->$rawValue;
*$tmp656 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp657 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp657 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp658 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp658 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FieldDecl** $tmp659 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 24);
*$tmp659 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, panda$core$Int64 param4, org$pandalanguage$pandac$Type* param5) {

// line 6
panda$core$Int64* $tmp660 = &param0->$rawValue;
*$tmp660 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp661 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp661 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp662 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp662 = param3;
// line 6
panda$core$Int64* $tmp663 = (panda$core$Int64*) (param0->$data + 24);
*$tmp663 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$Type** $tmp664 = (org$pandalanguage$pandac$Type**) (param0->$data + 32);
*$tmp664 = param5;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$ClassDecl* param4, panda$core$Int64 param5, org$pandalanguage$pandac$Type* param6) {

// line 6
panda$core$Int64* $tmp665 = &param0->$rawValue;
*$tmp665 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp666 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp666 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp667 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp667 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ClassDecl** $tmp668 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 24);
*$tmp668 = param4;
// line 6
panda$core$Int64* $tmp669 = (panda$core$Int64*) (param0->$data + 32);
*$tmp669 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$Type** $tmp670 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
*$tmp670 = param6;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3) {

// line 6
panda$core$Int64* $tmp671 = &param0->$rawValue;
*$tmp671 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp672 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp672 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp673 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp673 = param3;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$IR$Value* param4) {

// line 6
panda$core$Int64* $tmp674 = &param0->$rawValue;
*$tmp674 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp675 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp675 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp676 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp676 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$IR$Value** $tmp677 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
*$tmp677 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$IR$Value* param4, org$pandalanguage$pandac$IR$Value* param5) {

// line 6
panda$core$Int64* $tmp678 = &param0->$rawValue;
*$tmp678 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp679 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp679 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp680 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp680 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$IR$Value** $tmp681 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
*$tmp681 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$IR$Value** $tmp682 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
*$tmp682 = param5;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3) {

// line 6
panda$core$Int64* $tmp683 = &param0->$rawValue;
*$tmp683 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp684 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp684 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp685 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp685 = param3;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IR$Value$GT(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$MethodDecl* param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp686 = &param0->$rawValue;
*$tmp686 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp687 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp687 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodDecl** $tmp688 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 16);
*$tmp688 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp689 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp689 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2) {

// line 6
panda$core$Int64* $tmp690 = &param0->$rawValue;
*$tmp690 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp691 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp691 = param2;
return;

}

