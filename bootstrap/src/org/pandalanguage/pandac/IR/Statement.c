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

typedef panda$core$String* (*$fn175)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn606)(panda$collections$CollectionView*, panda$core$String*);

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
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x72\x65\x61\x74\x65\x5f\x73\x74\x72\x75\x63\x74\x20", 14, 4875181606754021553, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x5f\x63\x61\x6c\x6c\x20", 13, -5792732615387549007, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x61\x64\x5f\x66\x69\x65\x6c\x64\x20", 11, 3058635920978766632, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x63\x68\x6f\x69\x63\x65\x5f\x66\x69\x65\x6c\x64\x5f\x70\x6f\x69\x6e\x74\x65\x72\x20", 25, -3913498487693051030, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x66\x69\x65\x6c\x64\x5f\x70\x6f\x69\x6e\x74\x65\x72\x20", 18, 3388938635151659584, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x5f\x6d\x65\x74\x68\x6f\x64\x20", 21, -8815107277757025267, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x76\x69\x72\x74\x75\x61\x6c\x5f\x6d\x65\x74\x68\x6f\x64\x20", 19, -7905692567260344197, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x61\x64\x20", 5, 21863986849, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x65\x67\x61\x74\x65\x20", 7, 225053091281461, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20", 4, 218537570, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x61\x6c\x6c\x6f\x63\x20", 14, -2347844371417858360, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x64\x65\x73\x74\x72\x6f\x79\x20", 16, -6486310874503276737, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x67\x65\x74\x20", 12, 8247549443768276313, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x67\x65\x74\x5f\x69\x6e\x64\x65\x78\x20", 18, 4894902233184898028, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x6f\x66\x66\x73\x65\x74\x20", 15, 2675406242621769772, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x72\x65\x61\x6c\x6c\x6f\x63\x20", 16, -6484810075030803177, NULL };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x73\x65\x74\x20", 12, 8247549443780639925, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x73\x65\x74\x5f\x69\x6e\x64\x65\x78\x20", 18, -427618568312322776, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x5f\x63\x61\x6c\x6c\x20", 12, 6127247738107404280, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x70\x61\x6e\x64\x61", 8, 18742694999470718, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, 3140408377885245805, NULL };

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
org$pandalanguage$pandac$ClassDecl* local18 = NULL;
panda$collections$ImmutableArray* local19 = NULL;
org$pandalanguage$pandac$Position local20;
org$pandalanguage$pandac$IR$Value* local21 = NULL;
panda$collections$ImmutableArray* local22 = NULL;
org$pandalanguage$pandac$Position local23;
org$pandalanguage$pandac$IR$Value* local24 = NULL;
org$pandalanguage$pandac$FieldDecl* local25 = NULL;
org$pandalanguage$pandac$Position local26;
org$pandalanguage$pandac$IR$Value* local27 = NULL;
org$pandalanguage$pandac$ChoiceCase* local28 = NULL;
panda$core$Int64 local29;
org$pandalanguage$pandac$Position local30;
org$pandalanguage$pandac$IR$Value* local31 = NULL;
org$pandalanguage$pandac$FieldDecl* local32 = NULL;
org$pandalanguage$pandac$Position local33;
org$pandalanguage$pandac$IR$Value* local34 = NULL;
org$pandalanguage$pandac$ClassDecl* local35 = NULL;
panda$core$Int64 local36;
org$pandalanguage$pandac$Type* local37 = NULL;
org$pandalanguage$pandac$Position local38;
org$pandalanguage$pandac$IR$Value* local39 = NULL;
panda$core$Int64 local40;
org$pandalanguage$pandac$Type* local41 = NULL;
org$pandalanguage$pandac$Position local42;
org$pandalanguage$pandac$IR$Value* local43 = NULL;
org$pandalanguage$pandac$Position local44;
org$pandalanguage$pandac$IR$Value* local45 = NULL;
org$pandalanguage$pandac$Position local46;
org$pandalanguage$pandac$IR$Value* local47 = NULL;
org$pandalanguage$pandac$Position local48;
org$pandalanguage$pandac$IR$Value* local49 = NULL;
org$pandalanguage$pandac$Type* local50 = NULL;
org$pandalanguage$pandac$Position local51;
org$pandalanguage$pandac$IR$Value* local52 = NULL;
org$pandalanguage$pandac$Position local53;
org$pandalanguage$pandac$IR$Value* local54 = NULL;
org$pandalanguage$pandac$Position local55;
org$pandalanguage$pandac$IR$Value* local56 = NULL;
org$pandalanguage$pandac$IR$Value* local57 = NULL;
org$pandalanguage$pandac$Position local58;
org$pandalanguage$pandac$IR$Value* local59 = NULL;
org$pandalanguage$pandac$IR$Value* local60 = NULL;
org$pandalanguage$pandac$Position local61;
org$pandalanguage$pandac$IR$Value* local62 = NULL;
org$pandalanguage$pandac$IR$Value* local63 = NULL;
org$pandalanguage$pandac$IR$Value* local64 = NULL;
org$pandalanguage$pandac$Position local65;
org$pandalanguage$pandac$IR$Value* local66 = NULL;
org$pandalanguage$pandac$IR$Value* local67 = NULL;
org$pandalanguage$pandac$Position local68;
org$pandalanguage$pandac$IR$Value* local69 = NULL;
org$pandalanguage$pandac$IR$Value* local70 = NULL;
org$pandalanguage$pandac$IR$Value* local71 = NULL;
org$pandalanguage$pandac$Position local72;
org$pandalanguage$pandac$IR$Value* local73 = NULL;
org$pandalanguage$pandac$Position local74;
org$pandalanguage$pandac$MethodDecl* local75 = NULL;
panda$collections$ImmutableArray* local76 = NULL;
org$pandalanguage$pandac$Position local77;
org$pandalanguage$pandac$IR$Value* local78 = NULL;
org$pandalanguage$pandac$IR$Value* local79 = NULL;
org$pandalanguage$pandac$Position local80;
// line 174
panda$core$Int64* $tmp2 = &param0->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
org$pandalanguage$pandac$IR$Value* $tmp11 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
*(&local1) = $tmp10;
org$pandalanguage$pandac$parser$Token$Kind* $tmp12 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp13 = *$tmp12;
*(&local2) = $tmp13;
org$pandalanguage$pandac$IR$Value** $tmp14 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp15 = *$tmp14;
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
org$pandalanguage$pandac$IR$Value* $tmp16 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
*(&local3) = $tmp15;
org$pandalanguage$pandac$Type** $tmp17 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
org$pandalanguage$pandac$Type* $tmp18 = *$tmp17;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
org$pandalanguage$pandac$Type* $tmp19 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
*(&local4) = $tmp18;
// line 176
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing REF($56:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($55:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing REF($52:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing REF($51:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing REF($48:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($47:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($46:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($44:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($43:panda.core.String)
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
panda$core$Int64 $tmp41 = (panda$core$Int64) {1};
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
// line 179
org$pandalanguage$pandac$IR$Block$ID $tmp48 = *(&local6);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp49;
$tmp49 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp49->value = $tmp48;
panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s51, ((panda$core$Object*) $tmp49));
panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, &$s53);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing REF($116:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing REF($115:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing REF($114:panda.core.Object)
return $tmp52;
block5:;
panda$core$Int64 $tmp54 = (panda$core$Int64) {2};
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
org$pandalanguage$pandac$IR$Value* $tmp61 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
*(&local8) = $tmp60;
org$pandalanguage$pandac$Type** $tmp62 = (org$pandalanguage$pandac$Type**) (param0->$data + 24);
org$pandalanguage$pandac$Type* $tmp63 = *$tmp62;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
org$pandalanguage$pandac$Type* $tmp64 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
*(&local9) = $tmp63;
// line 182
org$pandalanguage$pandac$IR$Value* $tmp65 = *(&local8);
panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s67, ((panda$core$Object*) $tmp65));
panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp66, &$s69);
org$pandalanguage$pandac$Type* $tmp70 = *(&local9);
panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp68, ((panda$core$Object*) $tmp70));
panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp71, &$s73);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($162:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing REF($161:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing REF($158:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing REF($157:panda.core.String)
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
panda$core$Int64 $tmp76 = (panda$core$Int64) {3};
panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block8; else goto block9;
block8:;
panda$core$String** $tmp79 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp80 = *$tmp79;
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
panda$core$String* $tmp81 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
*(&local10) = $tmp80;
// line 185
panda$core$String* $tmp82 = *(&local10);
panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s84, $tmp82);
panda$core$String* $tmp85 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp83, &$s86);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing REF($204:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing REF($203:panda.core.String)
panda$core$String* $tmp87 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing text
*(&local10) = ((panda$core$String*) NULL);
return $tmp85;
block9:;
panda$core$Int64 $tmp88 = (panda$core$Int64) {5};
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
org$pandalanguage$pandac$IR$Value* $tmp95 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
*(&local12) = $tmp94;
org$pandalanguage$pandac$IR$Block$ID* $tmp96 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 24);
org$pandalanguage$pandac$IR$Block$ID $tmp97 = *$tmp96;
*(&local13) = $tmp97;
org$pandalanguage$pandac$IR$Block$ID* $tmp98 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 32);
org$pandalanguage$pandac$IR$Block$ID $tmp99 = *$tmp98;
*(&local14) = $tmp99;
// line 188
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
// unreffing REF($253:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($252:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($251:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing REF($249:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing REF($248:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing REF($247:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing REF($245:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing REF($244:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp115 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
// unreffing test
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp113;
block11:;
panda$core$Int64 $tmp116 = (panda$core$Int64) {6};
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
org$pandalanguage$pandac$ClassDecl* $tmp123 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
*(&local16) = $tmp122;
// line 191
org$pandalanguage$pandac$ClassDecl* $tmp124 = *(&local16);
panda$core$String** $tmp125 = &$tmp124->name;
panda$core$String* $tmp126 = *$tmp125;
panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s128, $tmp126);
panda$core$String* $tmp129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp127, &$s130);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
// unreffing REF($307:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing REF($306:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp131 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing cl
*(&local16) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp129;
block13:;
panda$core$Int64 $tmp132 = (panda$core$Int64) {7};
panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp132);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp135 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp136 = *$tmp135;
*(&local17) = $tmp136;
org$pandalanguage$pandac$ClassDecl** $tmp137 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp138 = *$tmp137;
*(&local18) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
org$pandalanguage$pandac$ClassDecl* $tmp139 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
*(&local18) = $tmp138;
panda$collections$ImmutableArray** $tmp140 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp141 = *$tmp140;
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
panda$collections$ImmutableArray* $tmp142 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
*(&local19) = $tmp141;
// line 194
org$pandalanguage$pandac$ClassDecl* $tmp143 = *(&local18);
panda$core$String** $tmp144 = &$tmp143->name;
panda$core$String* $tmp145 = *$tmp144;
panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s147, $tmp145);
panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, &$s149);
panda$collections$ImmutableArray* $tmp150 = *(&local19);
panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp148, ((panda$core$Object*) $tmp150));
panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, &$s153);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing REF($356:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
// unreffing REF($355:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
// unreffing REF($352:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing REF($351:panda.core.String)
panda$collections$ImmutableArray* $tmp154 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
// unreffing args
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp155 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
// unreffing cl
*(&local18) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp152;
block15:;
panda$core$Int64 $tmp156 = (panda$core$Int64) {8};
panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp156);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp159 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp160 = *$tmp159;
*(&local20) = $tmp160;
org$pandalanguage$pandac$IR$Value** $tmp161 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp162 = *$tmp161;
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
org$pandalanguage$pandac$IR$Value* $tmp163 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
*(&local21) = $tmp162;
panda$collections$ImmutableArray** $tmp164 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp165 = *$tmp164;
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
panda$collections$ImmutableArray* $tmp166 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
*(&local22) = $tmp165;
// line 197
org$pandalanguage$pandac$IR$Value* $tmp167 = *(&local21);
panda$core$String* $tmp168 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s169, ((panda$core$Object*) $tmp167));
panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp168, &$s171);
panda$collections$ImmutableArray* $tmp172 = *(&local22);
ITable* $tmp173 = ((panda$collections$CollectionView*) $tmp172)->$class->itable;
while ($tmp173->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[2];
panda$core$String* $tmp176 = $tmp174(((panda$collections$CollectionView*) $tmp172), &$s177);
panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, $tmp176);
panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp178, &$s180);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// unreffing REF($417:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing REF($416:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing REF($415:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
// unreffing REF($411:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
// unreffing REF($410:panda.core.String)
panda$collections$ImmutableArray* $tmp181 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing args
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp182 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
// unreffing m
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp179;
block17:;
panda$core$Int64 $tmp183 = (panda$core$Int64) {9};
panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp183);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp186 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp187 = *$tmp186;
*(&local23) = $tmp187;
org$pandalanguage$pandac$IR$Value** $tmp188 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp189 = *$tmp188;
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
org$pandalanguage$pandac$IR$Value* $tmp190 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
*(&local24) = $tmp189;
org$pandalanguage$pandac$FieldDecl** $tmp191 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp192 = *$tmp191;
*(&local25) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
org$pandalanguage$pandac$FieldDecl* $tmp193 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
*(&local25) = $tmp192;
// line 200
org$pandalanguage$pandac$IR$Value* $tmp194 = *(&local24);
panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s196, ((panda$core$Object*) $tmp194));
panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, &$s198);
org$pandalanguage$pandac$FieldDecl* $tmp199 = *(&local25);
panda$core$Weak** $tmp200 = &$tmp199->owner;
panda$core$Weak* $tmp201 = *$tmp200;
panda$core$Object* $tmp202 = panda$core$Weak$get$R$panda$core$Weak$T($tmp201);
panda$core$String** $tmp203 = &((org$pandalanguage$pandac$ClassDecl*) $tmp202)->name;
panda$core$String* $tmp204 = *$tmp203;
panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, $tmp204);
panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp205, &$s207);
org$pandalanguage$pandac$FieldDecl* $tmp208 = *(&local25);
panda$core$String** $tmp209 = &((org$pandalanguage$pandac$Symbol*) $tmp208)->name;
panda$core$String* $tmp210 = *$tmp209;
panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, $tmp210);
panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp211, &$s213);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
// unreffing REF($491:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing REF($490:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing REF($485:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing REF($484:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp202);
// unreffing REF($480:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
// unreffing REF($475:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing REF($474:panda.core.String)
org$pandalanguage$pandac$FieldDecl* $tmp214 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
// unreffing field
*(&local25) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp215 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
// unreffing value
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp212;
block19:;
panda$core$Int64 $tmp216 = (panda$core$Int64) {4};
panda$core$Bit $tmp217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp216);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp219 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp220 = *$tmp219;
*(&local26) = $tmp220;
org$pandalanguage$pandac$IR$Value** $tmp221 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp222 = *$tmp221;
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
org$pandalanguage$pandac$IR$Value* $tmp223 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
*(&local27) = $tmp222;
org$pandalanguage$pandac$ChoiceCase** $tmp224 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp225 = *$tmp224;
*(&local28) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
org$pandalanguage$pandac$ChoiceCase* $tmp226 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
*(&local28) = $tmp225;
panda$core$Int64* $tmp227 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp228 = *$tmp227;
*(&local29) = $tmp228;
// line 203
org$pandalanguage$pandac$IR$Value* $tmp229 = *(&local27);
panda$core$String* $tmp230 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s231, ((panda$core$Object*) $tmp229));
panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp230, &$s233);
org$pandalanguage$pandac$ChoiceCase* $tmp234 = *(&local28);
panda$core$String** $tmp235 = &((org$pandalanguage$pandac$Symbol*) $tmp234)->name;
panda$core$String* $tmp236 = *$tmp235;
panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, $tmp236);
panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp237, &$s239);
panda$core$Int64 $tmp240 = *(&local29);
panda$core$Int64$wrapper* $tmp241;
$tmp241 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp241->value = $tmp240;
panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp238, ((panda$core$Object*) $tmp241));
panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, &$s244);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing REF($568:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// unreffing REF($567:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
// unreffing REF($566:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing REF($564:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing REF($563:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($558:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
// unreffing REF($557:panda.core.String)
org$pandalanguage$pandac$ChoiceCase* $tmp245 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// unreffing cc
*(&local28) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp246 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
// unreffing target
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp243;
block21:;
panda$core$Int64 $tmp247 = (panda$core$Int64) {10};
panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp247);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp250 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp251 = *$tmp250;
*(&local30) = $tmp251;
org$pandalanguage$pandac$IR$Value** $tmp252 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp253 = *$tmp252;
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
org$pandalanguage$pandac$IR$Value* $tmp254 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
*(&local31) = $tmp253;
org$pandalanguage$pandac$FieldDecl** $tmp255 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp256 = *$tmp255;
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
org$pandalanguage$pandac$FieldDecl* $tmp257 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
*(&local32) = $tmp256;
// line 206
org$pandalanguage$pandac$IR$Value* $tmp258 = *(&local31);
panda$core$String* $tmp259 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s260, ((panda$core$Object*) $tmp258));
panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp259, &$s262);
org$pandalanguage$pandac$FieldDecl* $tmp263 = *(&local32);
panda$core$Weak** $tmp264 = &$tmp263->owner;
panda$core$Weak* $tmp265 = *$tmp264;
panda$core$Object* $tmp266 = panda$core$Weak$get$R$panda$core$Weak$T($tmp265);
panda$core$String** $tmp267 = &((org$pandalanguage$pandac$ClassDecl*) $tmp266)->name;
panda$core$String* $tmp268 = *$tmp267;
panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp261, $tmp268);
panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp269, &$s271);
org$pandalanguage$pandac$FieldDecl* $tmp272 = *(&local32);
panda$core$String** $tmp273 = &((org$pandalanguage$pandac$Symbol*) $tmp272)->name;
panda$core$String* $tmp274 = *$tmp273;
panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp270, $tmp274);
panda$core$String* $tmp276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp275, &$s277);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
// unreffing REF($648:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
// unreffing REF($647:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($642:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing REF($641:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp266);
// unreffing REF($637:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
// unreffing REF($632:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
// unreffing REF($631:panda.core.String)
org$pandalanguage$pandac$FieldDecl* $tmp278 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
// unreffing field
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp279 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
// unreffing ptr
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp276;
block23:;
panda$core$Int64 $tmp280 = (panda$core$Int64) {12};
panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp280);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp283 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp284 = *$tmp283;
*(&local33) = $tmp284;
org$pandalanguage$pandac$IR$Value** $tmp285 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp286 = *$tmp285;
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
org$pandalanguage$pandac$IR$Value* $tmp287 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
*(&local34) = $tmp286;
org$pandalanguage$pandac$ClassDecl** $tmp288 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 24);
org$pandalanguage$pandac$ClassDecl* $tmp289 = *$tmp288;
*(&local35) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
org$pandalanguage$pandac$ClassDecl* $tmp290 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
*(&local35) = $tmp289;
panda$core$Int64* $tmp291 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp292 = *$tmp291;
*(&local36) = $tmp292;
org$pandalanguage$pandac$Type** $tmp293 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
org$pandalanguage$pandac$Type* $tmp294 = *$tmp293;
*(&local37) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
org$pandalanguage$pandac$Type* $tmp295 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
*(&local37) = $tmp294;
// line 209
org$pandalanguage$pandac$IR$Value* $tmp296 = *(&local34);
panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s298, ((panda$core$Object*) $tmp296));
panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp297, &$s300);
org$pandalanguage$pandac$ClassDecl* $tmp301 = *(&local35);
panda$core$String** $tmp302 = &$tmp301->name;
panda$core$String* $tmp303 = *$tmp302;
panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp299, $tmp303);
panda$core$String* $tmp305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp304, &$s306);
panda$core$Int64 $tmp307 = *(&local36);
panda$core$Int64$wrapper* $tmp308;
$tmp308 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp308->value = $tmp307;
panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp305, ((panda$core$Object*) $tmp308));
panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp309, &$s311);
org$pandalanguage$pandac$Type* $tmp312 = *(&local37);
panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp310, ((panda$core$Object*) $tmp312));
panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp313, &$s315);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
// unreffing REF($737:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
// unreffing REF($736:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
// unreffing REF($733:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing REF($732:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing REF($731:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// unreffing REF($729:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
// unreffing REF($728:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
// unreffing REF($724:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
// unreffing REF($723:panda.core.String)
org$pandalanguage$pandac$Type* $tmp316 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
// unreffing type
*(&local37) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp317 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
// unreffing cl
*(&local35) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp318 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// unreffing value
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp314;
block25:;
panda$core$Int64 $tmp319 = (panda$core$Int64) {11};
panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp319);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp322 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp323 = *$tmp322;
*(&local38) = $tmp323;
org$pandalanguage$pandac$IR$Value** $tmp324 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp325 = *$tmp324;
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
org$pandalanguage$pandac$IR$Value* $tmp326 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
*(&local39) = $tmp325;
panda$core$Int64* $tmp327 = (panda$core$Int64*) (param0->$data + 24);
panda$core$Int64 $tmp328 = *$tmp327;
*(&local40) = $tmp328;
org$pandalanguage$pandac$Type** $tmp329 = (org$pandalanguage$pandac$Type**) (param0->$data + 32);
org$pandalanguage$pandac$Type* $tmp330 = *$tmp329;
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
org$pandalanguage$pandac$Type* $tmp331 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
*(&local41) = $tmp330;
// line 212
org$pandalanguage$pandac$IR$Value* $tmp332 = *(&local39);
panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s334, ((panda$core$Object*) $tmp332));
panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s336);
panda$core$Int64 $tmp337 = *(&local40);
panda$core$Int64$wrapper* $tmp338;
$tmp338 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp338->value = $tmp337;
panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp335, ((panda$core$Object*) $tmp338));
panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp339, &$s341);
org$pandalanguage$pandac$Type* $tmp342 = *(&local41);
panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp340, ((panda$core$Object*) $tmp342));
panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, &$s345);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// unreffing REF($823:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
// unreffing REF($822:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
// unreffing REF($819:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing REF($818:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
// unreffing REF($817:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
// unreffing REF($815:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// unreffing REF($814:panda.core.String)
org$pandalanguage$pandac$Type* $tmp346 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
// unreffing type
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp347 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
// unreffing value
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp344;
block27:;
panda$core$Int64 $tmp348 = (panda$core$Int64) {13};
panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp348);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp351 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp352 = *$tmp351;
*(&local42) = $tmp352;
org$pandalanguage$pandac$IR$Value** $tmp353 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp354 = *$tmp353;
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
org$pandalanguage$pandac$IR$Value* $tmp355 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
*(&local43) = $tmp354;
// line 215
org$pandalanguage$pandac$IR$Value* $tmp356 = *(&local43);
panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s358, ((panda$core$Object*) $tmp356));
panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp357, &$s360);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing REF($878:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
// unreffing REF($877:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp361 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
// unreffing ptr
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp359;
block29:;
panda$core$Int64 $tmp362 = (panda$core$Int64) {14};
panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp362);
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp365 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp366 = *$tmp365;
*(&local44) = $tmp366;
org$pandalanguage$pandac$IR$Value** $tmp367 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp368 = *$tmp367;
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
org$pandalanguage$pandac$IR$Value* $tmp369 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
*(&local45) = $tmp368;
// line 218
org$pandalanguage$pandac$IR$Value* $tmp370 = *(&local45);
panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s372, ((panda$core$Object*) $tmp370));
panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp371, &$s374);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
// unreffing REF($913:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
// unreffing REF($912:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp375 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
// unreffing value
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp373;
block31:;
panda$core$Int64 $tmp376 = (panda$core$Int64) {15};
panda$core$Bit $tmp377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp376);
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp379 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp380 = *$tmp379;
*(&local46) = $tmp380;
org$pandalanguage$pandac$IR$Value** $tmp381 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp382 = *$tmp381;
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
org$pandalanguage$pandac$IR$Value* $tmp383 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
*(&local47) = $tmp382;
// line 221
org$pandalanguage$pandac$IR$Value* $tmp384 = *(&local47);
panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s386, ((panda$core$Object*) $tmp384));
panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp385, &$s388);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing REF($948:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing REF($947:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp389 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
// unreffing value
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp387;
block33:;
panda$core$Int64 $tmp390 = (panda$core$Int64) {16};
panda$core$Bit $tmp391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp393 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp394 = *$tmp393;
*(&local48) = $tmp394;
org$pandalanguage$pandac$IR$Value** $tmp395 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp396 = *$tmp395;
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
org$pandalanguage$pandac$IR$Value* $tmp397 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
*(&local49) = $tmp396;
org$pandalanguage$pandac$Type** $tmp398 = (org$pandalanguage$pandac$Type**) (param0->$data + 24);
org$pandalanguage$pandac$Type* $tmp399 = *$tmp398;
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
org$pandalanguage$pandac$Type* $tmp400 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp400));
*(&local50) = $tmp399;
// line 224
org$pandalanguage$pandac$IR$Value* $tmp401 = *(&local49);
panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s403, ((panda$core$Object*) $tmp401));
panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp402, &$s405);
org$pandalanguage$pandac$Type* $tmp406 = *(&local50);
panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp404, ((panda$core$Object*) $tmp406));
panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp407, &$s409);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
// unreffing REF($996:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
// unreffing REF($995:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
// unreffing REF($992:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing REF($991:panda.core.String)
org$pandalanguage$pandac$Type* $tmp410 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
// unreffing type
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp411 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
// unreffing count
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp408;
block35:;
panda$core$Int64 $tmp412 = (panda$core$Int64) {17};
panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp412);
bool $tmp414 = $tmp413.value;
if ($tmp414) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp415 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp416 = *$tmp415;
*(&local51) = $tmp416;
org$pandalanguage$pandac$IR$Value** $tmp417 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp418 = *$tmp417;
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
org$pandalanguage$pandac$IR$Value* $tmp419 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
*(&local52) = $tmp418;
// line 227
org$pandalanguage$pandac$IR$Value* $tmp420 = *(&local52);
panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s422, ((panda$core$Object*) $tmp420));
panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp421, &$s424);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
// unreffing REF($1042:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp421));
// unreffing REF($1041:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp425 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
// unreffing ptr
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp423;
block37:;
panda$core$Int64 $tmp426 = (panda$core$Int64) {18};
panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp426);
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp429 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp430 = *$tmp429;
*(&local53) = $tmp430;
org$pandalanguage$pandac$IR$Value** $tmp431 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp432 = *$tmp431;
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
org$pandalanguage$pandac$IR$Value* $tmp433 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
*(&local54) = $tmp432;
// line 230
org$pandalanguage$pandac$IR$Value* $tmp434 = *(&local54);
panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s436, ((panda$core$Object*) $tmp434));
panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp435, &$s438);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
// unreffing REF($1077:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
// unreffing REF($1076:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp439 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp439));
// unreffing ptr
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp437;
block39:;
panda$core$Int64 $tmp440 = (panda$core$Int64) {19};
panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp440);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$Position* $tmp443 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp444 = *$tmp443;
*(&local55) = $tmp444;
org$pandalanguage$pandac$IR$Value** $tmp445 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp446 = *$tmp445;
*(&local56) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
org$pandalanguage$pandac$IR$Value* $tmp447 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
*(&local56) = $tmp446;
org$pandalanguage$pandac$IR$Value** $tmp448 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp449 = *$tmp448;
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
org$pandalanguage$pandac$IR$Value* $tmp450 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
*(&local57) = $tmp449;
// line 233
org$pandalanguage$pandac$IR$Value* $tmp451 = *(&local56);
panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s453, ((panda$core$Object*) $tmp451));
panda$core$String* $tmp454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp452, &$s455);
org$pandalanguage$pandac$IR$Value* $tmp456 = *(&local57);
panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp454, ((panda$core$Object*) $tmp456));
panda$core$String* $tmp458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp457, &$s459);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp458));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp458));
// unreffing REF($1125:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
// unreffing REF($1124:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
// unreffing REF($1121:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
// unreffing REF($1120:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp460 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
// unreffing index
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp461 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
// unreffing ptr
*(&local56) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp458;
block41:;
panda$core$Int64 $tmp462 = (panda$core$Int64) {20};
panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp462);
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp465 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp466 = *$tmp465;
*(&local58) = $tmp466;
org$pandalanguage$pandac$IR$Value** $tmp467 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp468 = *$tmp467;
*(&local59) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
org$pandalanguage$pandac$IR$Value* $tmp469 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
*(&local59) = $tmp468;
org$pandalanguage$pandac$IR$Value** $tmp470 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp471 = *$tmp470;
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp471));
org$pandalanguage$pandac$IR$Value* $tmp472 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp472));
*(&local60) = $tmp471;
// line 236
org$pandalanguage$pandac$IR$Value* $tmp473 = *(&local59);
panda$core$String* $tmp474 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s475, ((panda$core$Object*) $tmp473));
panda$core$String* $tmp476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp474, &$s477);
org$pandalanguage$pandac$IR$Value* $tmp478 = *(&local60);
panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp476, ((panda$core$Object*) $tmp478));
panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp479, &$s481);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
// unreffing REF($1184:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
// unreffing REF($1183:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
// unreffing REF($1180:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
// unreffing REF($1179:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp482 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
// unreffing index
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp483 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
// unreffing ptr
*(&local59) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp480;
block43:;
panda$core$Int64 $tmp484 = (panda$core$Int64) {21};
panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp484);
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp487 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp488 = *$tmp487;
*(&local61) = $tmp488;
org$pandalanguage$pandac$IR$Value** $tmp489 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp490 = *$tmp489;
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp490));
org$pandalanguage$pandac$IR$Value* $tmp491 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp491));
*(&local62) = $tmp490;
org$pandalanguage$pandac$IR$Value** $tmp492 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp493 = *$tmp492;
*(&local63) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
org$pandalanguage$pandac$IR$Value* $tmp494 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
*(&local63) = $tmp493;
org$pandalanguage$pandac$IR$Value** $tmp495 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp496 = *$tmp495;
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
org$pandalanguage$pandac$IR$Value* $tmp497 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
*(&local64) = $tmp496;
// line 239
org$pandalanguage$pandac$IR$Value* $tmp498 = *(&local62);
panda$core$String* $tmp499 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s500, ((panda$core$Object*) $tmp498));
panda$core$String* $tmp501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp499, &$s502);
org$pandalanguage$pandac$IR$Value* $tmp503 = *(&local63);
panda$core$String* $tmp504 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp501, ((panda$core$Object*) $tmp503));
panda$core$String* $tmp505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp504, &$s506);
org$pandalanguage$pandac$IR$Value* $tmp507 = *(&local64);
panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp505, ((panda$core$Object*) $tmp507));
panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp508, &$s510);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
// unreffing REF($1256:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
// unreffing REF($1255:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp505));
// unreffing REF($1252:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
// unreffing REF($1251:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
// unreffing REF($1248:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
// unreffing REF($1247:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp511 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
// unreffing newSize
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp512 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
// unreffing oldSize
*(&local63) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp513 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
// unreffing ptr
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp509;
block45:;
panda$core$Int64 $tmp514 = (panda$core$Int64) {22};
panda$core$Bit $tmp515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp514);
bool $tmp516 = $tmp515.value;
if ($tmp516) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp517 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp518 = *$tmp517;
*(&local65) = $tmp518;
org$pandalanguage$pandac$IR$Value** $tmp519 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp520 = *$tmp519;
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
org$pandalanguage$pandac$IR$Value* $tmp521 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
*(&local66) = $tmp520;
org$pandalanguage$pandac$IR$Value** $tmp522 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp523 = *$tmp522;
*(&local67) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
org$pandalanguage$pandac$IR$Value* $tmp524 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
*(&local67) = $tmp523;
// line 242
org$pandalanguage$pandac$IR$Value* $tmp525 = *(&local66);
panda$core$String* $tmp526 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s527, ((panda$core$Object*) $tmp525));
panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp526, &$s529);
org$pandalanguage$pandac$IR$Value* $tmp530 = *(&local67);
panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp528, ((panda$core$Object*) $tmp530));
panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp531, &$s533);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
// unreffing REF($1326:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
// unreffing REF($1325:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
// unreffing REF($1322:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
// unreffing REF($1321:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp534 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
// unreffing ptr
*(&local67) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp535 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
// unreffing value
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp532;
block47:;
panda$core$Int64 $tmp536 = (panda$core$Int64) {23};
panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp536);
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp539 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp540 = *$tmp539;
*(&local68) = $tmp540;
org$pandalanguage$pandac$IR$Value** $tmp541 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp542 = *$tmp541;
*(&local69) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
org$pandalanguage$pandac$IR$Value* $tmp543 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
*(&local69) = $tmp542;
org$pandalanguage$pandac$IR$Value** $tmp544 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp545 = *$tmp544;
*(&local70) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
org$pandalanguage$pandac$IR$Value* $tmp546 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
*(&local70) = $tmp545;
org$pandalanguage$pandac$IR$Value** $tmp547 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp548 = *$tmp547;
*(&local71) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
org$pandalanguage$pandac$IR$Value* $tmp549 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
*(&local71) = $tmp548;
// line 245
org$pandalanguage$pandac$IR$Value* $tmp550 = *(&local69);
panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s552, ((panda$core$Object*) $tmp550));
panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, &$s554);
org$pandalanguage$pandac$IR$Value* $tmp555 = *(&local70);
panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp553, ((panda$core$Object*) $tmp555));
panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp556, &$s558);
org$pandalanguage$pandac$IR$Value* $tmp559 = *(&local71);
panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp557, ((panda$core$Object*) $tmp559));
panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s562);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
// unreffing REF($1398:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
// unreffing REF($1397:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
// unreffing REF($1394:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// unreffing REF($1393:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp553));
// unreffing REF($1390:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
// unreffing REF($1389:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp563 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
// unreffing index
*(&local71) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp564 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
// unreffing ptr
*(&local70) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp565 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
// unreffing value
*(&local69) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp561;
block49:;
panda$core$Int64 $tmp566 = (panda$core$Int64) {24};
panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp566);
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp569 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp570 = *$tmp569;
*(&local72) = $tmp570;
org$pandalanguage$pandac$IR$Value** $tmp571 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp572 = *$tmp571;
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
org$pandalanguage$pandac$IR$Value* $tmp573 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
*(&local73) = $tmp572;
// line 248
org$pandalanguage$pandac$IR$Value* $tmp574 = *(&local73);
panda$core$Bit $tmp575 = panda$core$Bit$init$builtin_bit($tmp574 != NULL);
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block52; else goto block53;
block52:;
// line 249
org$pandalanguage$pandac$IR$Value* $tmp577 = *(&local73);
panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s579, ((panda$core$Object*) $tmp577));
panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, &$s581);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
// unreffing REF($1461:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
// unreffing REF($1460:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp582 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
// unreffing value
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp580;
block53:;
// line 251
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s583));
org$pandalanguage$pandac$IR$Value* $tmp584 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// unreffing value
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return &$s585;
block51:;
panda$core$Int64 $tmp586 = (panda$core$Int64) {25};
panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp586);
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp589 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp590 = *$tmp589;
*(&local74) = $tmp590;
org$pandalanguage$pandac$MethodDecl** $tmp591 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 16);
org$pandalanguage$pandac$MethodDecl* $tmp592 = *$tmp591;
*(&local75) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
org$pandalanguage$pandac$MethodDecl* $tmp593 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
*(&local75) = $tmp592;
panda$collections$ImmutableArray** $tmp594 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp595 = *$tmp594;
*(&local76) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
panda$collections$ImmutableArray* $tmp596 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
*(&local76) = $tmp595;
// line 254
org$pandalanguage$pandac$MethodDecl* $tmp597 = *(&local75);
panda$core$String* $tmp598 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp597);
panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s600, $tmp598);
panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, &$s602);
panda$collections$ImmutableArray* $tmp603 = *(&local76);
ITable* $tmp604 = ((panda$collections$CollectionView*) $tmp603)->$class->itable;
while ($tmp604->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp604 = $tmp604->next;
}
$fn606 $tmp605 = $tmp604->methods[2];
panda$core$String* $tmp607 = $tmp605(((panda$collections$CollectionView*) $tmp603), &$s608);
panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp601, $tmp607);
panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s611);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
// unreffing REF($1520:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
// unreffing REF($1519:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
// unreffing REF($1518:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
// unreffing REF($1514:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
// unreffing REF($1513:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
// unreffing REF($1512:panda.core.String)
panda$collections$ImmutableArray* $tmp612 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
// unreffing args
*(&local76) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp613 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
// unreffing m
*(&local75) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return $tmp610;
block55:;
panda$core$Int64 $tmp614 = (panda$core$Int64) {26};
panda$core$Bit $tmp615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp614);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block56; else goto block57;
block56:;
org$pandalanguage$pandac$Position* $tmp617 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp618 = *$tmp617;
*(&local77) = $tmp618;
org$pandalanguage$pandac$IR$Value** $tmp619 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp620 = *$tmp619;
*(&local78) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
org$pandalanguage$pandac$IR$Value* $tmp621 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
*(&local78) = $tmp620;
org$pandalanguage$pandac$IR$Value** $tmp622 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp623 = *$tmp622;
*(&local79) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp623));
org$pandalanguage$pandac$IR$Value* $tmp624 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
*(&local79) = $tmp623;
// line 257
org$pandalanguage$pandac$IR$Value* $tmp625 = *(&local78);
panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s627, ((panda$core$Object*) $tmp625));
panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp626, &$s629);
org$pandalanguage$pandac$IR$Value* $tmp630 = *(&local79);
panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp628, ((panda$core$Object*) $tmp630));
panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp631, &$s633);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
// unreffing REF($1585:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
// unreffing REF($1584:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
// unreffing REF($1581:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp626));
// unreffing REF($1580:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp634 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
// unreffing ptr
*(&local79) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp635 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
// unreffing value
*(&local78) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp632;
block57:;
panda$core$Int64 $tmp636 = (panda$core$Int64) {27};
panda$core$Bit $tmp637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp636);
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block58; else goto block1;
block58:;
org$pandalanguage$pandac$Position* $tmp639 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp640 = *$tmp639;
*(&local80) = $tmp640;
// line 260
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s641));
return &$s642;
block1:;
panda$core$Bit $tmp643 = panda$core$Bit$init$builtin_bit(false);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block59; else goto block60;
block60:;
panda$core$Int64 $tmp645 = (panda$core$Int64) {173};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s646, $tmp645, &$s647);
abort(); // unreachable
block59:;
abort(); // unreachable

}
void org$pandalanguage$pandac$IR$Statement$cleanup(org$pandalanguage$pandac$IR$Statement* param0) {

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
org$pandalanguage$pandac$ChoiceCase* local13 = NULL;
panda$core$Int64 local14;
org$pandalanguage$pandac$Position local15;
org$pandalanguage$pandac$IR$Value* local16 = NULL;
org$pandalanguage$pandac$IR$Block$ID local17;
org$pandalanguage$pandac$IR$Block$ID local18;
org$pandalanguage$pandac$Position local19;
org$pandalanguage$pandac$ClassDecl* local20 = NULL;
org$pandalanguage$pandac$Position local21;
org$pandalanguage$pandac$ClassDecl* local22 = NULL;
panda$collections$ImmutableArray* local23 = NULL;
org$pandalanguage$pandac$Position local24;
org$pandalanguage$pandac$IR$Value* local25 = NULL;
panda$collections$ImmutableArray* local26 = NULL;
org$pandalanguage$pandac$Position local27;
org$pandalanguage$pandac$IR$Value* local28 = NULL;
org$pandalanguage$pandac$FieldDecl* local29 = NULL;
org$pandalanguage$pandac$Position local30;
org$pandalanguage$pandac$IR$Value* local31 = NULL;
org$pandalanguage$pandac$FieldDecl* local32 = NULL;
org$pandalanguage$pandac$Position local33;
org$pandalanguage$pandac$IR$Value* local34 = NULL;
panda$core$Int64 local35;
org$pandalanguage$pandac$Type* local36 = NULL;
org$pandalanguage$pandac$Position local37;
org$pandalanguage$pandac$IR$Value* local38 = NULL;
org$pandalanguage$pandac$ClassDecl* local39 = NULL;
panda$core$Int64 local40;
org$pandalanguage$pandac$Type* local41 = NULL;
org$pandalanguage$pandac$Position local42;
org$pandalanguage$pandac$IR$Value* local43 = NULL;
org$pandalanguage$pandac$Position local44;
org$pandalanguage$pandac$IR$Value* local45 = NULL;
org$pandalanguage$pandac$Position local46;
org$pandalanguage$pandac$IR$Value* local47 = NULL;
org$pandalanguage$pandac$Position local48;
org$pandalanguage$pandac$IR$Value* local49 = NULL;
org$pandalanguage$pandac$Type* local50 = NULL;
org$pandalanguage$pandac$Position local51;
org$pandalanguage$pandac$IR$Value* local52 = NULL;
org$pandalanguage$pandac$Position local53;
org$pandalanguage$pandac$IR$Value* local54 = NULL;
org$pandalanguage$pandac$Position local55;
org$pandalanguage$pandac$IR$Value* local56 = NULL;
org$pandalanguage$pandac$IR$Value* local57 = NULL;
org$pandalanguage$pandac$Position local58;
org$pandalanguage$pandac$IR$Value* local59 = NULL;
org$pandalanguage$pandac$IR$Value* local60 = NULL;
org$pandalanguage$pandac$Position local61;
org$pandalanguage$pandac$IR$Value* local62 = NULL;
org$pandalanguage$pandac$IR$Value* local63 = NULL;
org$pandalanguage$pandac$IR$Value* local64 = NULL;
org$pandalanguage$pandac$Position local65;
org$pandalanguage$pandac$IR$Value* local66 = NULL;
org$pandalanguage$pandac$IR$Value* local67 = NULL;
org$pandalanguage$pandac$Position local68;
org$pandalanguage$pandac$IR$Value* local69 = NULL;
org$pandalanguage$pandac$IR$Value* local70 = NULL;
org$pandalanguage$pandac$IR$Value* local71 = NULL;
org$pandalanguage$pandac$Position local72;
org$pandalanguage$pandac$IR$Value* local73 = NULL;
org$pandalanguage$pandac$Position local74;
org$pandalanguage$pandac$MethodDecl* local75 = NULL;
panda$collections$ImmutableArray* local76 = NULL;
org$pandalanguage$pandac$Position local77;
org$pandalanguage$pandac$IR$Value* local78 = NULL;
org$pandalanguage$pandac$IR$Value* local79 = NULL;
org$pandalanguage$pandac$Position local80;
// line 6
panda$core$Int64* $tmp648 = &param0->$rawValue;
panda$core$Int64 $tmp649 = *$tmp648;
panda$core$Int64 $tmp650 = (panda$core$Int64) {0};
panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp650);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp653 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp654 = *$tmp653;
*(&local0) = $tmp654;
org$pandalanguage$pandac$IR$Value** $tmp655 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp656 = *$tmp655;
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
org$pandalanguage$pandac$IR$Value* $tmp657 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
*(&local1) = $tmp656;
org$pandalanguage$pandac$parser$Token$Kind* $tmp658 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp659 = *$tmp658;
*(&local2) = $tmp659;
org$pandalanguage$pandac$IR$Value** $tmp660 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp661 = *$tmp660;
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
org$pandalanguage$pandac$IR$Value* $tmp662 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
*(&local3) = $tmp661;
org$pandalanguage$pandac$Type** $tmp663 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
org$pandalanguage$pandac$Type* $tmp664 = *$tmp663;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
org$pandalanguage$pandac$Type* $tmp665 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
*(&local4) = $tmp664;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp666 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp667 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
// line 1
org$pandalanguage$pandac$Type* $tmp668 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
org$pandalanguage$pandac$Type* $tmp669 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing _f4
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp670 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
// unreffing _f3
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp671 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
// unreffing _f1
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp672 = (panda$core$Int64) {1};
panda$core$Bit $tmp673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp672);
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp675 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp676 = *$tmp675;
*(&local5) = $tmp676;
org$pandalanguage$pandac$IR$Block$ID* $tmp677 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp678 = *$tmp677;
*(&local6) = $tmp678;
goto block1;
block5:;
panda$core$Int64 $tmp679 = (panda$core$Int64) {2};
panda$core$Bit $tmp680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp679);
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp682 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp683 = *$tmp682;
*(&local7) = $tmp683;
org$pandalanguage$pandac$IR$Value** $tmp684 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp685 = *$tmp684;
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp685));
org$pandalanguage$pandac$IR$Value* $tmp686 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
*(&local8) = $tmp685;
org$pandalanguage$pandac$Type** $tmp687 = (org$pandalanguage$pandac$Type**) (param0->$data + 24);
org$pandalanguage$pandac$Type* $tmp688 = *$tmp687;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
org$pandalanguage$pandac$Type* $tmp689 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp689));
*(&local9) = $tmp688;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp690 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
// line 1
org$pandalanguage$pandac$Type* $tmp691 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp691));
org$pandalanguage$pandac$Type* $tmp692 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
// unreffing _f2
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp693 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
// unreffing _f1
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp694 = (panda$core$Int64) {3};
panda$core$Bit $tmp695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp694);
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block8; else goto block9;
block8:;
panda$core$String** $tmp697 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp698 = *$tmp697;
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
panda$core$String* $tmp699 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
*(&local10) = $tmp698;
// line 1
panda$core$String* $tmp700 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
panda$core$String* $tmp701 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
// unreffing _f0
*(&local10) = ((panda$core$String*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp702 = (panda$core$Int64) {4};
panda$core$Bit $tmp703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp702);
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp705 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp706 = *$tmp705;
*(&local11) = $tmp706;
org$pandalanguage$pandac$IR$Value** $tmp707 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp708 = *$tmp707;
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
org$pandalanguage$pandac$IR$Value* $tmp709 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp709));
*(&local12) = $tmp708;
org$pandalanguage$pandac$ChoiceCase** $tmp710 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp711 = *$tmp710;
*(&local13) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
org$pandalanguage$pandac$ChoiceCase* $tmp712 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
*(&local13) = $tmp711;
panda$core$Int64* $tmp713 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp714 = *$tmp713;
*(&local14) = $tmp714;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp715 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
// line 1
org$pandalanguage$pandac$ChoiceCase* $tmp716 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp716));
org$pandalanguage$pandac$ChoiceCase* $tmp717 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
// unreffing _f2
*(&local13) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp718 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp718));
// unreffing _f1
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block11:;
panda$core$Int64 $tmp719 = (panda$core$Int64) {5};
panda$core$Bit $tmp720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp719);
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp722 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp723 = *$tmp722;
*(&local15) = $tmp723;
org$pandalanguage$pandac$IR$Value** $tmp724 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp725 = *$tmp724;
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
org$pandalanguage$pandac$IR$Value* $tmp726 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
*(&local16) = $tmp725;
org$pandalanguage$pandac$IR$Block$ID* $tmp727 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 24);
org$pandalanguage$pandac$IR$Block$ID $tmp728 = *$tmp727;
*(&local17) = $tmp728;
org$pandalanguage$pandac$IR$Block$ID* $tmp729 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 32);
org$pandalanguage$pandac$IR$Block$ID $tmp730 = *$tmp729;
*(&local18) = $tmp730;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp731 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
org$pandalanguage$pandac$IR$Value* $tmp732 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp732));
// unreffing _f1
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp733 = (panda$core$Int64) {6};
panda$core$Bit $tmp734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp733);
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp736 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp737 = *$tmp736;
*(&local19) = $tmp737;
org$pandalanguage$pandac$ClassDecl** $tmp738 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp739 = *$tmp738;
*(&local20) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp739));
org$pandalanguage$pandac$ClassDecl* $tmp740 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
*(&local20) = $tmp739;
// line 1
org$pandalanguage$pandac$ClassDecl* $tmp741 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp741));
org$pandalanguage$pandac$ClassDecl* $tmp742 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp742));
// unreffing _f1
*(&local20) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block15:;
panda$core$Int64 $tmp743 = (panda$core$Int64) {7};
panda$core$Bit $tmp744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp743);
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp746 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp747 = *$tmp746;
*(&local21) = $tmp747;
org$pandalanguage$pandac$ClassDecl** $tmp748 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp749 = *$tmp748;
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp749));
org$pandalanguage$pandac$ClassDecl* $tmp750 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
*(&local22) = $tmp749;
panda$collections$ImmutableArray** $tmp751 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp752 = *$tmp751;
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp752));
panda$collections$ImmutableArray* $tmp753 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
*(&local23) = $tmp752;
// line 1
org$pandalanguage$pandac$ClassDecl* $tmp754 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp754));
// line 1
panda$collections$ImmutableArray* $tmp755 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp755));
panda$collections$ImmutableArray* $tmp756 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp756));
// unreffing _f2
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp757 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp757));
// unreffing _f1
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp758 = (panda$core$Int64) {8};
panda$core$Bit $tmp759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp758);
bool $tmp760 = $tmp759.value;
if ($tmp760) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp761 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp762 = *$tmp761;
*(&local24) = $tmp762;
org$pandalanguage$pandac$IR$Value** $tmp763 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp764 = *$tmp763;
*(&local25) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
org$pandalanguage$pandac$IR$Value* $tmp765 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
*(&local25) = $tmp764;
panda$collections$ImmutableArray** $tmp766 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp767 = *$tmp766;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
panda$collections$ImmutableArray* $tmp768 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
*(&local26) = $tmp767;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp769 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
// line 1
panda$collections$ImmutableArray* $tmp770 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
panda$collections$ImmutableArray* $tmp771 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp771));
// unreffing _f2
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp772 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
// unreffing _f1
*(&local25) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp773 = (panda$core$Int64) {9};
panda$core$Bit $tmp774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp773);
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp776 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp777 = *$tmp776;
*(&local27) = $tmp777;
org$pandalanguage$pandac$IR$Value** $tmp778 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp779 = *$tmp778;
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp779));
org$pandalanguage$pandac$IR$Value* $tmp780 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
*(&local28) = $tmp779;
org$pandalanguage$pandac$FieldDecl** $tmp781 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp782 = *$tmp781;
*(&local29) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
org$pandalanguage$pandac$FieldDecl* $tmp783 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp783));
*(&local29) = $tmp782;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp784 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
// line 1
org$pandalanguage$pandac$FieldDecl* $tmp785 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
org$pandalanguage$pandac$FieldDecl* $tmp786 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
// unreffing _f2
*(&local29) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp787 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp787));
// unreffing _f1
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp788 = (panda$core$Int64) {10};
panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp788);
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp791 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp792 = *$tmp791;
*(&local30) = $tmp792;
org$pandalanguage$pandac$IR$Value** $tmp793 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp794 = *$tmp793;
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
org$pandalanguage$pandac$IR$Value* $tmp795 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
*(&local31) = $tmp794;
org$pandalanguage$pandac$FieldDecl** $tmp796 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp797 = *$tmp796;
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
org$pandalanguage$pandac$FieldDecl* $tmp798 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp798));
*(&local32) = $tmp797;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp799 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp799));
// line 1
org$pandalanguage$pandac$FieldDecl* $tmp800 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
org$pandalanguage$pandac$FieldDecl* $tmp801 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp801));
// unreffing _f2
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp802 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp802));
// unreffing _f1
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp803 = (panda$core$Int64) {11};
panda$core$Bit $tmp804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp803);
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp806 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp807 = *$tmp806;
*(&local33) = $tmp807;
org$pandalanguage$pandac$IR$Value** $tmp808 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp809 = *$tmp808;
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp809));
org$pandalanguage$pandac$IR$Value* $tmp810 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
*(&local34) = $tmp809;
panda$core$Int64* $tmp811 = (panda$core$Int64*) (param0->$data + 24);
panda$core$Int64 $tmp812 = *$tmp811;
*(&local35) = $tmp812;
org$pandalanguage$pandac$Type** $tmp813 = (org$pandalanguage$pandac$Type**) (param0->$data + 32);
org$pandalanguage$pandac$Type* $tmp814 = *$tmp813;
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
org$pandalanguage$pandac$Type* $tmp815 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp815));
*(&local36) = $tmp814;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp816 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
// line 1
org$pandalanguage$pandac$Type* $tmp817 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp817));
org$pandalanguage$pandac$Type* $tmp818 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp818));
// unreffing _f3
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp819 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
// unreffing _f1
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp820 = (panda$core$Int64) {12};
panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp820);
bool $tmp822 = $tmp821.value;
if ($tmp822) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp823 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp824 = *$tmp823;
*(&local37) = $tmp824;
org$pandalanguage$pandac$IR$Value** $tmp825 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp826 = *$tmp825;
*(&local38) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
org$pandalanguage$pandac$IR$Value* $tmp827 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
*(&local38) = $tmp826;
org$pandalanguage$pandac$ClassDecl** $tmp828 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 24);
org$pandalanguage$pandac$ClassDecl* $tmp829 = *$tmp828;
*(&local39) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
org$pandalanguage$pandac$ClassDecl* $tmp830 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp830));
*(&local39) = $tmp829;
panda$core$Int64* $tmp831 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp832 = *$tmp831;
*(&local40) = $tmp832;
org$pandalanguage$pandac$Type** $tmp833 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
org$pandalanguage$pandac$Type* $tmp834 = *$tmp833;
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
org$pandalanguage$pandac$Type* $tmp835 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
*(&local41) = $tmp834;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp836 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
// line 1
org$pandalanguage$pandac$ClassDecl* $tmp837 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp837));
// line 1
org$pandalanguage$pandac$Type* $tmp838 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
org$pandalanguage$pandac$Type* $tmp839 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
// unreffing _f4
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp840 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp840));
// unreffing _f2
*(&local39) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp841 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp841));
// unreffing _f1
*(&local38) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block27:;
panda$core$Int64 $tmp842 = (panda$core$Int64) {13};
panda$core$Bit $tmp843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp842);
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp845 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp846 = *$tmp845;
*(&local42) = $tmp846;
org$pandalanguage$pandac$IR$Value** $tmp847 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp848 = *$tmp847;
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
org$pandalanguage$pandac$IR$Value* $tmp849 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
*(&local43) = $tmp848;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp850 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp850));
org$pandalanguage$pandac$IR$Value* $tmp851 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp851));
// unreffing _f1
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block29:;
panda$core$Int64 $tmp852 = (panda$core$Int64) {14};
panda$core$Bit $tmp853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp852);
bool $tmp854 = $tmp853.value;
if ($tmp854) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp855 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp856 = *$tmp855;
*(&local44) = $tmp856;
org$pandalanguage$pandac$IR$Value** $tmp857 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp858 = *$tmp857;
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
org$pandalanguage$pandac$IR$Value* $tmp859 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
*(&local45) = $tmp858;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp860 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
org$pandalanguage$pandac$IR$Value* $tmp861 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
// unreffing _f1
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block31:;
panda$core$Int64 $tmp862 = (panda$core$Int64) {15};
panda$core$Bit $tmp863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp862);
bool $tmp864 = $tmp863.value;
if ($tmp864) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp865 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp866 = *$tmp865;
*(&local46) = $tmp866;
org$pandalanguage$pandac$IR$Value** $tmp867 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp868 = *$tmp867;
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp868));
org$pandalanguage$pandac$IR$Value* $tmp869 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp869));
*(&local47) = $tmp868;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp870 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
org$pandalanguage$pandac$IR$Value* $tmp871 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
// unreffing _f1
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block33:;
panda$core$Int64 $tmp872 = (panda$core$Int64) {16};
panda$core$Bit $tmp873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp872);
bool $tmp874 = $tmp873.value;
if ($tmp874) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp875 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp876 = *$tmp875;
*(&local48) = $tmp876;
org$pandalanguage$pandac$IR$Value** $tmp877 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp878 = *$tmp877;
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp878));
org$pandalanguage$pandac$IR$Value* $tmp879 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
*(&local49) = $tmp878;
org$pandalanguage$pandac$Type** $tmp880 = (org$pandalanguage$pandac$Type**) (param0->$data + 24);
org$pandalanguage$pandac$Type* $tmp881 = *$tmp880;
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp881));
org$pandalanguage$pandac$Type* $tmp882 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
*(&local50) = $tmp881;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp883 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp883));
// line 1
org$pandalanguage$pandac$Type* $tmp884 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp884));
org$pandalanguage$pandac$Type* $tmp885 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
// unreffing _f2
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp886 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
// unreffing _f1
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block35:;
panda$core$Int64 $tmp887 = (panda$core$Int64) {17};
panda$core$Bit $tmp888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp887);
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp890 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp891 = *$tmp890;
*(&local51) = $tmp891;
org$pandalanguage$pandac$IR$Value** $tmp892 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp893 = *$tmp892;
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
org$pandalanguage$pandac$IR$Value* $tmp894 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
*(&local52) = $tmp893;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp895 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
org$pandalanguage$pandac$IR$Value* $tmp896 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
// unreffing _f1
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block37:;
panda$core$Int64 $tmp897 = (panda$core$Int64) {18};
panda$core$Bit $tmp898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp897);
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp900 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp901 = *$tmp900;
*(&local53) = $tmp901;
org$pandalanguage$pandac$IR$Value** $tmp902 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp903 = *$tmp902;
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
org$pandalanguage$pandac$IR$Value* $tmp904 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
*(&local54) = $tmp903;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp905 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp905));
org$pandalanguage$pandac$IR$Value* $tmp906 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp906));
// unreffing _f1
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block39:;
panda$core$Int64 $tmp907 = (panda$core$Int64) {19};
panda$core$Bit $tmp908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp907);
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$Position* $tmp910 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp911 = *$tmp910;
*(&local55) = $tmp911;
org$pandalanguage$pandac$IR$Value** $tmp912 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp913 = *$tmp912;
*(&local56) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp913));
org$pandalanguage$pandac$IR$Value* $tmp914 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
*(&local56) = $tmp913;
org$pandalanguage$pandac$IR$Value** $tmp915 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp916 = *$tmp915;
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
org$pandalanguage$pandac$IR$Value* $tmp917 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp917));
*(&local57) = $tmp916;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp918 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp918));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp919 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp919));
org$pandalanguage$pandac$IR$Value* $tmp920 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp920));
// unreffing _f2
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp921 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp921));
// unreffing _f1
*(&local56) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block41:;
panda$core$Int64 $tmp922 = (panda$core$Int64) {20};
panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp922);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp925 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp926 = *$tmp925;
*(&local58) = $tmp926;
org$pandalanguage$pandac$IR$Value** $tmp927 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp928 = *$tmp927;
*(&local59) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp928));
org$pandalanguage$pandac$IR$Value* $tmp929 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
*(&local59) = $tmp928;
org$pandalanguage$pandac$IR$Value** $tmp930 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp931 = *$tmp930;
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
org$pandalanguage$pandac$IR$Value* $tmp932 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
*(&local60) = $tmp931;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp933 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp934 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
org$pandalanguage$pandac$IR$Value* $tmp935 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
// unreffing _f2
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp936 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp936));
// unreffing _f1
*(&local59) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block43:;
panda$core$Int64 $tmp937 = (panda$core$Int64) {21};
panda$core$Bit $tmp938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp937);
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp940 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp941 = *$tmp940;
*(&local61) = $tmp941;
org$pandalanguage$pandac$IR$Value** $tmp942 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp943 = *$tmp942;
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
org$pandalanguage$pandac$IR$Value* $tmp944 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
*(&local62) = $tmp943;
org$pandalanguage$pandac$IR$Value** $tmp945 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp946 = *$tmp945;
*(&local63) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
org$pandalanguage$pandac$IR$Value* $tmp947 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
*(&local63) = $tmp946;
org$pandalanguage$pandac$IR$Value** $tmp948 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp949 = *$tmp948;
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp949));
org$pandalanguage$pandac$IR$Value* $tmp950 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
*(&local64) = $tmp949;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp951 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp951));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp952 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp953 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
org$pandalanguage$pandac$IR$Value* $tmp954 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp954));
// unreffing _f3
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp955 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
// unreffing _f2
*(&local63) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp956 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp956));
// unreffing _f1
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block45:;
panda$core$Int64 $tmp957 = (panda$core$Int64) {22};
panda$core$Bit $tmp958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp957);
bool $tmp959 = $tmp958.value;
if ($tmp959) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp960 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp961 = *$tmp960;
*(&local65) = $tmp961;
org$pandalanguage$pandac$IR$Value** $tmp962 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp963 = *$tmp962;
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
org$pandalanguage$pandac$IR$Value* $tmp964 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
*(&local66) = $tmp963;
org$pandalanguage$pandac$IR$Value** $tmp965 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp966 = *$tmp965;
*(&local67) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
org$pandalanguage$pandac$IR$Value* $tmp967 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp967));
*(&local67) = $tmp966;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp968 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp968));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp969 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
org$pandalanguage$pandac$IR$Value* $tmp970 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp970));
// unreffing _f2
*(&local67) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp971 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp971));
// unreffing _f1
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block47:;
panda$core$Int64 $tmp972 = (panda$core$Int64) {23};
panda$core$Bit $tmp973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp972);
bool $tmp974 = $tmp973.value;
if ($tmp974) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp975 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp976 = *$tmp975;
*(&local68) = $tmp976;
org$pandalanguage$pandac$IR$Value** $tmp977 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp978 = *$tmp977;
*(&local69) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp978));
org$pandalanguage$pandac$IR$Value* $tmp979 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp979));
*(&local69) = $tmp978;
org$pandalanguage$pandac$IR$Value** $tmp980 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp981 = *$tmp980;
*(&local70) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
org$pandalanguage$pandac$IR$Value* $tmp982 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp982));
*(&local70) = $tmp981;
org$pandalanguage$pandac$IR$Value** $tmp983 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp984 = *$tmp983;
*(&local71) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
org$pandalanguage$pandac$IR$Value* $tmp985 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
*(&local71) = $tmp984;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp986 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp987 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp988 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
org$pandalanguage$pandac$IR$Value* $tmp989 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp989));
// unreffing _f3
*(&local71) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp990 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
// unreffing _f2
*(&local70) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp991 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp991));
// unreffing _f1
*(&local69) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block49:;
panda$core$Int64 $tmp992 = (panda$core$Int64) {24};
panda$core$Bit $tmp993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp992);
bool $tmp994 = $tmp993.value;
if ($tmp994) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp995 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp996 = *$tmp995;
*(&local72) = $tmp996;
org$pandalanguage$pandac$IR$Value** $tmp997 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp998 = *$tmp997;
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
org$pandalanguage$pandac$IR$Value* $tmp999 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp999));
*(&local73) = $tmp998;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp1000 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
org$pandalanguage$pandac$IR$Value* $tmp1001 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
// unreffing _f1
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block51:;
panda$core$Int64 $tmp1002 = (panda$core$Int64) {25};
panda$core$Bit $tmp1003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp1002);
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp1005 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1006 = *$tmp1005;
*(&local74) = $tmp1006;
org$pandalanguage$pandac$MethodDecl** $tmp1007 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 16);
org$pandalanguage$pandac$MethodDecl* $tmp1008 = *$tmp1007;
*(&local75) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1008));
org$pandalanguage$pandac$MethodDecl* $tmp1009 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
*(&local75) = $tmp1008;
panda$collections$ImmutableArray** $tmp1010 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1011 = *$tmp1010;
*(&local76) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1011));
panda$collections$ImmutableArray* $tmp1012 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1012));
*(&local76) = $tmp1011;
// line 1
org$pandalanguage$pandac$MethodDecl* $tmp1013 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
// line 1
panda$collections$ImmutableArray* $tmp1014 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
panda$collections$ImmutableArray* $tmp1015 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
// unreffing _f2
*(&local76) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp1016 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
// unreffing _f1
*(&local75) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block1;
block53:;
panda$core$Int64 $tmp1017 = (panda$core$Int64) {26};
panda$core$Bit $tmp1018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp1017);
bool $tmp1019 = $tmp1018.value;
if ($tmp1019) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp1020 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1021 = *$tmp1020;
*(&local77) = $tmp1021;
org$pandalanguage$pandac$IR$Value** $tmp1022 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp1023 = *$tmp1022;
*(&local78) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1023));
org$pandalanguage$pandac$IR$Value* $tmp1024 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
*(&local78) = $tmp1023;
org$pandalanguage$pandac$IR$Value** $tmp1025 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp1026 = *$tmp1025;
*(&local79) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
org$pandalanguage$pandac$IR$Value* $tmp1027 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
*(&local79) = $tmp1026;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp1028 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp1029 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
org$pandalanguage$pandac$IR$Value* $tmp1030 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1030));
// unreffing _f2
*(&local79) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1031 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1031));
// unreffing _f1
*(&local78) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block55:;
panda$core$Int64 $tmp1032 = (panda$core$Int64) {27};
panda$core$Bit $tmp1033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, $tmp1032);
bool $tmp1034 = $tmp1033.value;
if ($tmp1034) goto block56; else goto block1;
block56:;
org$pandalanguage$pandac$Position* $tmp1035 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1036 = *$tmp1035;
*(&local80) = $tmp1036;
goto block1;
block1:;
// line 6
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$parser$Token$Kind param4, org$pandalanguage$pandac$IR$Value* param5, org$pandalanguage$pandac$Type* param6) {

// line 6
panda$core$Int64* $tmp1037 = &param0->$rawValue;
*$tmp1037 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1038 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1038 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1039 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1039 = param3;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp1040 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
*$tmp1040 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$IR$Value** $tmp1041 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
*$tmp1041 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$Type** $tmp1042 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
*$tmp1042 = param6;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Block$ID param3) {

// line 6
panda$core$Int64* $tmp1043 = &param0->$rawValue;
*$tmp1043 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1044 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1044 = param2;
// line 6
org$pandalanguage$pandac$IR$Block$ID* $tmp1045 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
*$tmp1045 = param3;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$Type* param4) {

// line 6
panda$core$Int64* $tmp1046 = &param0->$rawValue;
*$tmp1046 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1047 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1047 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1048 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1048 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$Type** $tmp1049 = (org$pandalanguage$pandac$Type**) (param0->$data + 24);
*$tmp1049 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 6
panda$core$Int64* $tmp1050 = &param0->$rawValue;
*$tmp1050 = param1;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp1051 = (panda$core$String**) (param0->$data + 0);
*$tmp1051 = param2;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$ChoiceCase* param4, panda$core$Int64 param5) {

// line 6
panda$core$Int64* $tmp1052 = &param0->$rawValue;
*$tmp1052 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1053 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1053 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1054 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1054 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ChoiceCase** $tmp1055 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
*$tmp1055 = param4;
// line 6
panda$core$Int64* $tmp1056 = (panda$core$Int64*) (param0->$data + 32);
*$tmp1056 = param5;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$IR$Block$ID param4, org$pandalanguage$pandac$IR$Block$ID param5) {

// line 6
panda$core$Int64* $tmp1057 = &param0->$rawValue;
*$tmp1057 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1058 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1058 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1059 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1059 = param3;
// line 6
org$pandalanguage$pandac$IR$Block$ID* $tmp1060 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 24);
*$tmp1060 = param4;
// line 6
org$pandalanguage$pandac$IR$Block$ID* $tmp1061 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 32);
*$tmp1061 = param5;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ClassDecl* param3) {

// line 6
panda$core$Int64* $tmp1062 = &param0->$rawValue;
*$tmp1062 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1063 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1063 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ClassDecl** $tmp1064 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 16);
*$tmp1064 = param3;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IR$Value$GT(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ClassDecl* param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp1065 = &param0->$rawValue;
*$tmp1065 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1066 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1066 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ClassDecl** $tmp1067 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 16);
*$tmp1067 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp1068 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp1068 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IR$Value$GT(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp1069 = &param0->$rawValue;
*$tmp1069 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1070 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1070 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1071 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1071 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp1072 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp1072 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$FieldDecl* param4) {

// line 6
panda$core$Int64* $tmp1073 = &param0->$rawValue;
*$tmp1073 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1074 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1074 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1075 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1075 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FieldDecl** $tmp1076 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 24);
*$tmp1076 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, panda$core$Int64 param4, org$pandalanguage$pandac$Type* param5) {

// line 6
panda$core$Int64* $tmp1077 = &param0->$rawValue;
*$tmp1077 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1078 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1078 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1079 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1079 = param3;
// line 6
panda$core$Int64* $tmp1080 = (panda$core$Int64*) (param0->$data + 24);
*$tmp1080 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$Type** $tmp1081 = (org$pandalanguage$pandac$Type**) (param0->$data + 32);
*$tmp1081 = param5;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$ClassDecl* param4, panda$core$Int64 param5, org$pandalanguage$pandac$Type* param6) {

// line 6
panda$core$Int64* $tmp1082 = &param0->$rawValue;
*$tmp1082 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1083 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1083 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1084 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1084 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ClassDecl** $tmp1085 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 24);
*$tmp1085 = param4;
// line 6
panda$core$Int64* $tmp1086 = (panda$core$Int64*) (param0->$data + 32);
*$tmp1086 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$Type** $tmp1087 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
*$tmp1087 = param6;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3) {

// line 6
panda$core$Int64* $tmp1088 = &param0->$rawValue;
*$tmp1088 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1089 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1089 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1090 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1090 = param3;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$IR$Value* param4) {

// line 6
panda$core$Int64* $tmp1091 = &param0->$rawValue;
*$tmp1091 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1092 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1092 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1093 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1093 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$IR$Value** $tmp1094 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
*$tmp1094 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$IR$Value* param4, org$pandalanguage$pandac$IR$Value* param5) {

// line 6
panda$core$Int64* $tmp1095 = &param0->$rawValue;
*$tmp1095 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1096 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1096 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1097 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1097 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$IR$Value** $tmp1098 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
*$tmp1098 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$IR$Value** $tmp1099 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
*$tmp1099 = param5;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3) {

// line 6
panda$core$Int64* $tmp1100 = &param0->$rawValue;
*$tmp1100 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1101 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1101 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1102 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1102 = param3;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IR$Value$GT(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$MethodDecl* param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp1103 = &param0->$rawValue;
*$tmp1103 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1104 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1104 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodDecl** $tmp1105 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 16);
*$tmp1105 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp1106 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp1106 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2) {

// line 6
panda$core$Int64* $tmp1107 = &param0->$rawValue;
*$tmp1107 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1108 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1108 = param2;
return;

}

