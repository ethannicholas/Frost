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
#include "org/pandalanguage/pandac/FixedArray.h"
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

typedef panda$core$String* (*$fn175)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn605)(panda$collections$CollectionView*);

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
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x61\x64\x5f\x66\x69\x65\x6c\x64\x20", 11, 3058635920978766632, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x63\x68\x6f\x69\x63\x65\x5f\x66\x69\x65\x6c\x64\x5f\x70\x6f\x69\x6e\x74\x65\x72\x20", 25, -3913498487693051030, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x66\x69\x65\x6c\x64\x5f\x70\x6f\x69\x6e\x74\x65\x72\x20", 18, 3388938635151659584, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x5f\x6d\x65\x74\x68\x6f\x64\x20", 21, -8815107277757025267, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x76\x69\x72\x74\x75\x61\x6c\x5f\x6d\x65\x74\x68\x6f\x64\x20", 19, -7905692567260344197, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x61\x64\x20", 5, 21863986849, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x65\x67\x61\x74\x65\x20", 7, 225053091281461, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20", 4, 218537570, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x61\x6c\x6c\x6f\x63\x20", 14, -2347844371417858360, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x64\x65\x73\x74\x72\x6f\x79\x20", 16, -6486310874503276737, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x67\x65\x74\x20", 12, 8247549443768276313, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x67\x65\x74\x5f\x69\x6e\x64\x65\x78\x20", 18, 4894902233184898028, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x6f\x66\x66\x73\x65\x74\x20", 15, 2675406242621769772, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x72\x65\x61\x6c\x6c\x6f\x63\x20", 16, -6484810075030803177, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x73\x65\x74\x20", 12, 8247549443780639925, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x73\x65\x74\x5f\x69\x6e\x64\x65\x78\x20", 18, -427618568312322776, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x5f\x63\x61\x6c\x6c\x20", 12, 6127247738107404280, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x70\x61\x6e\x64\x61", 8, 18742694999470718, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, 3140408377885245805, NULL };

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
org$pandalanguage$pandac$FixedArray* local19 = NULL;
org$pandalanguage$pandac$Position local20;
org$pandalanguage$pandac$IR$Value* local21 = NULL;
org$pandalanguage$pandac$FixedArray* local22 = NULL;
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
org$pandalanguage$pandac$FixedArray* local76 = NULL;
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
org$pandalanguage$pandac$FixedArray** $tmp140 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp141 = *$tmp140;
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
org$pandalanguage$pandac$FixedArray* $tmp142 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
*(&local19) = $tmp141;
// line 194
org$pandalanguage$pandac$ClassDecl* $tmp143 = *(&local18);
panda$core$String** $tmp144 = &$tmp143->name;
panda$core$String* $tmp145 = *$tmp144;
panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s147, $tmp145);
panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, &$s149);
org$pandalanguage$pandac$FixedArray* $tmp150 = *(&local19);
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
org$pandalanguage$pandac$FixedArray* $tmp154 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
// unreffing args
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
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
org$pandalanguage$pandac$FixedArray** $tmp164 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp165 = *$tmp164;
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
org$pandalanguage$pandac$FixedArray* $tmp166 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
*(&local22) = $tmp165;
// line 197
org$pandalanguage$pandac$IR$Value* $tmp167 = *(&local21);
panda$core$String* $tmp168 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s169, ((panda$core$Object*) $tmp167));
panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp168, &$s171);
org$pandalanguage$pandac$FixedArray* $tmp172 = *(&local22);
ITable* $tmp173 = ((panda$collections$CollectionView*) $tmp172)->$class->itable;
while ($tmp173->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[1];
panda$core$String* $tmp176 = $tmp174(((panda$collections$CollectionView*) $tmp172));
panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, $tmp176);
panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s179);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing REF($417:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing REF($416:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing REF($415:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
// unreffing REF($411:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
// unreffing REF($410:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp180 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing args
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp181 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing m
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp178;
block17:;
panda$core$Int64 $tmp182 = (panda$core$Int64) {9};
panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp182);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp185 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp186 = *$tmp185;
*(&local23) = $tmp186;
org$pandalanguage$pandac$IR$Value** $tmp187 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp188 = *$tmp187;
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
org$pandalanguage$pandac$IR$Value* $tmp189 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
*(&local24) = $tmp188;
org$pandalanguage$pandac$FieldDecl** $tmp190 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp191 = *$tmp190;
*(&local25) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
org$pandalanguage$pandac$FieldDecl* $tmp192 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
*(&local25) = $tmp191;
// line 200
org$pandalanguage$pandac$IR$Value* $tmp193 = *(&local24);
panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s195, ((panda$core$Object*) $tmp193));
panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, &$s197);
org$pandalanguage$pandac$FieldDecl* $tmp198 = *(&local25);
panda$core$Weak** $tmp199 = &$tmp198->owner;
panda$core$Weak* $tmp200 = *$tmp199;
panda$core$Object* $tmp201 = panda$core$Weak$get$R$panda$core$Weak$T($tmp200);
panda$core$String** $tmp202 = &((org$pandalanguage$pandac$ClassDecl*) $tmp201)->name;
panda$core$String* $tmp203 = *$tmp202;
panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, $tmp203);
panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp204, &$s206);
org$pandalanguage$pandac$FieldDecl* $tmp207 = *(&local25);
panda$core$String** $tmp208 = &((org$pandalanguage$pandac$Symbol*) $tmp207)->name;
panda$core$String* $tmp209 = *$tmp208;
panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp205, $tmp209);
panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp210, &$s212);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing REF($491:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
// unreffing REF($490:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing REF($485:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing REF($484:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp201);
// unreffing REF($480:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing REF($475:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing REF($474:panda.core.String)
org$pandalanguage$pandac$FieldDecl* $tmp213 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
// unreffing field
*(&local25) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp214 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
// unreffing value
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp211;
block19:;
panda$core$Int64 $tmp215 = (panda$core$Int64) {4};
panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp218 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp219 = *$tmp218;
*(&local26) = $tmp219;
org$pandalanguage$pandac$IR$Value** $tmp220 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp221 = *$tmp220;
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
org$pandalanguage$pandac$IR$Value* $tmp222 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
*(&local27) = $tmp221;
org$pandalanguage$pandac$ChoiceCase** $tmp223 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp224 = *$tmp223;
*(&local28) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
org$pandalanguage$pandac$ChoiceCase* $tmp225 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
*(&local28) = $tmp224;
panda$core$Int64* $tmp226 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp227 = *$tmp226;
*(&local29) = $tmp227;
// line 203
org$pandalanguage$pandac$IR$Value* $tmp228 = *(&local27);
panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s230, ((panda$core$Object*) $tmp228));
panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp229, &$s232);
org$pandalanguage$pandac$ChoiceCase* $tmp233 = *(&local28);
panda$core$String** $tmp234 = &((org$pandalanguage$pandac$Symbol*) $tmp233)->name;
panda$core$String* $tmp235 = *$tmp234;
panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp231, $tmp235);
panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp236, &$s238);
panda$core$Int64 $tmp239 = *(&local29);
panda$core$Int64$wrapper* $tmp240;
$tmp240 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp240->value = $tmp239;
panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp237, ((panda$core$Object*) $tmp240));
panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, &$s243);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// unreffing REF($568:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
// unreffing REF($567:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing REF($566:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing REF($564:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// unreffing REF($563:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
// unreffing REF($558:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
// unreffing REF($557:panda.core.String)
org$pandalanguage$pandac$ChoiceCase* $tmp244 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
// unreffing cc
*(&local28) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp245 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// unreffing target
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp242;
block21:;
panda$core$Int64 $tmp246 = (panda$core$Int64) {10};
panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp249 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp250 = *$tmp249;
*(&local30) = $tmp250;
org$pandalanguage$pandac$IR$Value** $tmp251 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp252 = *$tmp251;
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
org$pandalanguage$pandac$IR$Value* $tmp253 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
*(&local31) = $tmp252;
org$pandalanguage$pandac$FieldDecl** $tmp254 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp255 = *$tmp254;
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
org$pandalanguage$pandac$FieldDecl* $tmp256 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
*(&local32) = $tmp255;
// line 206
org$pandalanguage$pandac$IR$Value* $tmp257 = *(&local31);
panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s259, ((panda$core$Object*) $tmp257));
panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, &$s261);
org$pandalanguage$pandac$FieldDecl* $tmp262 = *(&local32);
panda$core$Weak** $tmp263 = &$tmp262->owner;
panda$core$Weak* $tmp264 = *$tmp263;
panda$core$Object* $tmp265 = panda$core$Weak$get$R$panda$core$Weak$T($tmp264);
panda$core$String** $tmp266 = &((org$pandalanguage$pandac$ClassDecl*) $tmp265)->name;
panda$core$String* $tmp267 = *$tmp266;
panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp260, $tmp267);
panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp268, &$s270);
org$pandalanguage$pandac$FieldDecl* $tmp271 = *(&local32);
panda$core$String** $tmp272 = &((org$pandalanguage$pandac$Symbol*) $tmp271)->name;
panda$core$String* $tmp273 = *$tmp272;
panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp269, $tmp273);
panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp274, &$s276);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
// unreffing REF($648:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
// unreffing REF($647:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing REF($642:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing REF($641:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp265);
// unreffing REF($637:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
// unreffing REF($632:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing REF($631:panda.core.String)
org$pandalanguage$pandac$FieldDecl* $tmp277 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
// unreffing field
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp278 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
// unreffing ptr
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp275;
block23:;
panda$core$Int64 $tmp279 = (panda$core$Int64) {12};
panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp279);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp282 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp283 = *$tmp282;
*(&local33) = $tmp283;
org$pandalanguage$pandac$IR$Value** $tmp284 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp285 = *$tmp284;
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
org$pandalanguage$pandac$IR$Value* $tmp286 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
*(&local34) = $tmp285;
org$pandalanguage$pandac$ClassDecl** $tmp287 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 24);
org$pandalanguage$pandac$ClassDecl* $tmp288 = *$tmp287;
*(&local35) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
org$pandalanguage$pandac$ClassDecl* $tmp289 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
*(&local35) = $tmp288;
panda$core$Int64* $tmp290 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp291 = *$tmp290;
*(&local36) = $tmp291;
org$pandalanguage$pandac$Type** $tmp292 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
org$pandalanguage$pandac$Type* $tmp293 = *$tmp292;
*(&local37) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
org$pandalanguage$pandac$Type* $tmp294 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
*(&local37) = $tmp293;
// line 209
org$pandalanguage$pandac$IR$Value* $tmp295 = *(&local34);
panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s297, ((panda$core$Object*) $tmp295));
panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp296, &$s299);
org$pandalanguage$pandac$ClassDecl* $tmp300 = *(&local35);
panda$core$String** $tmp301 = &$tmp300->name;
panda$core$String* $tmp302 = *$tmp301;
panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp298, $tmp302);
panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp303, &$s305);
panda$core$Int64 $tmp306 = *(&local36);
panda$core$Int64$wrapper* $tmp307;
$tmp307 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp307->value = $tmp306;
panda$core$String* $tmp308 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp304, ((panda$core$Object*) $tmp307));
panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp308, &$s310);
org$pandalanguage$pandac$Type* $tmp311 = *(&local37);
panda$core$String* $tmp312 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp309, ((panda$core$Object*) $tmp311));
panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp312, &$s314);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
// unreffing REF($737:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
// unreffing REF($736:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing REF($733:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing REF($732:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
// unreffing REF($731:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
// unreffing REF($729:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
// unreffing REF($728:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// unreffing REF($724:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
// unreffing REF($723:panda.core.String)
org$pandalanguage$pandac$Type* $tmp315 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
// unreffing type
*(&local37) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp316 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
// unreffing cl
*(&local35) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp317 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
// unreffing value
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp313;
block25:;
panda$core$Int64 $tmp318 = (panda$core$Int64) {11};
panda$core$Bit $tmp319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp318);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp321 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp322 = *$tmp321;
*(&local38) = $tmp322;
org$pandalanguage$pandac$IR$Value** $tmp323 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp324 = *$tmp323;
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
org$pandalanguage$pandac$IR$Value* $tmp325 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
*(&local39) = $tmp324;
panda$core$Int64* $tmp326 = (panda$core$Int64*) (param0->$data + 24);
panda$core$Int64 $tmp327 = *$tmp326;
*(&local40) = $tmp327;
org$pandalanguage$pandac$Type** $tmp328 = (org$pandalanguage$pandac$Type**) (param0->$data + 32);
org$pandalanguage$pandac$Type* $tmp329 = *$tmp328;
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
org$pandalanguage$pandac$Type* $tmp330 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
*(&local41) = $tmp329;
// line 212
org$pandalanguage$pandac$IR$Value* $tmp331 = *(&local39);
panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s333, ((panda$core$Object*) $tmp331));
panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, &$s335);
panda$core$Int64 $tmp336 = *(&local40);
panda$core$Int64$wrapper* $tmp337;
$tmp337 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp337->value = $tmp336;
panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp334, ((panda$core$Object*) $tmp337));
panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp338, &$s340);
org$pandalanguage$pandac$Type* $tmp341 = *(&local41);
panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp339, ((panda$core$Object*) $tmp341));
panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, &$s344);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
// unreffing REF($823:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing REF($822:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing REF($819:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
// unreffing REF($818:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
// unreffing REF($817:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
// unreffing REF($815:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
// unreffing REF($814:panda.core.String)
org$pandalanguage$pandac$Type* $tmp345 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
// unreffing type
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp346 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
// unreffing value
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp343;
block27:;
panda$core$Int64 $tmp347 = (panda$core$Int64) {13};
panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp347);
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp350 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp351 = *$tmp350;
*(&local42) = $tmp351;
org$pandalanguage$pandac$IR$Value** $tmp352 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp353 = *$tmp352;
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
org$pandalanguage$pandac$IR$Value* $tmp354 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
*(&local43) = $tmp353;
// line 215
org$pandalanguage$pandac$IR$Value* $tmp355 = *(&local43);
panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s357, ((panda$core$Object*) $tmp355));
panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp356, &$s359);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
// unreffing REF($878:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
// unreffing REF($877:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp360 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
// unreffing ptr
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp358;
block29:;
panda$core$Int64 $tmp361 = (panda$core$Int64) {14};
panda$core$Bit $tmp362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp361);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp364 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp365 = *$tmp364;
*(&local44) = $tmp365;
org$pandalanguage$pandac$IR$Value** $tmp366 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp367 = *$tmp366;
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
org$pandalanguage$pandac$IR$Value* $tmp368 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
*(&local45) = $tmp367;
// line 218
org$pandalanguage$pandac$IR$Value* $tmp369 = *(&local45);
panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s371, ((panda$core$Object*) $tmp369));
panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s373);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
// unreffing REF($913:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
// unreffing REF($912:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp374 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
// unreffing value
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp372;
block31:;
panda$core$Int64 $tmp375 = (panda$core$Int64) {15};
panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp375);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp378 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp379 = *$tmp378;
*(&local46) = $tmp379;
org$pandalanguage$pandac$IR$Value** $tmp380 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp381 = *$tmp380;
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
org$pandalanguage$pandac$IR$Value* $tmp382 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
*(&local47) = $tmp381;
// line 221
org$pandalanguage$pandac$IR$Value* $tmp383 = *(&local47);
panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s385, ((panda$core$Object*) $tmp383));
panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp384, &$s387);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
// unreffing REF($948:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
// unreffing REF($947:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp388 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
// unreffing value
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp386;
block33:;
panda$core$Int64 $tmp389 = (panda$core$Int64) {16};
panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp389);
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp392 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp393 = *$tmp392;
*(&local48) = $tmp393;
org$pandalanguage$pandac$IR$Value** $tmp394 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp395 = *$tmp394;
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
org$pandalanguage$pandac$IR$Value* $tmp396 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
*(&local49) = $tmp395;
org$pandalanguage$pandac$Type** $tmp397 = (org$pandalanguage$pandac$Type**) (param0->$data + 24);
org$pandalanguage$pandac$Type* $tmp398 = *$tmp397;
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
org$pandalanguage$pandac$Type* $tmp399 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
*(&local50) = $tmp398;
// line 224
org$pandalanguage$pandac$IR$Value* $tmp400 = *(&local49);
panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s402, ((panda$core$Object*) $tmp400));
panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp401, &$s404);
org$pandalanguage$pandac$Type* $tmp405 = *(&local50);
panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp403, ((panda$core$Object*) $tmp405));
panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp406, &$s408);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
// unreffing REF($996:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
// unreffing REF($995:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing REF($992:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing REF($991:panda.core.String)
org$pandalanguage$pandac$Type* $tmp409 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
// unreffing type
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp410 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
// unreffing count
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp407;
block35:;
panda$core$Int64 $tmp411 = (panda$core$Int64) {17};
panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp411);
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp414 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp415 = *$tmp414;
*(&local51) = $tmp415;
org$pandalanguage$pandac$IR$Value** $tmp416 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp417 = *$tmp416;
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
org$pandalanguage$pandac$IR$Value* $tmp418 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
*(&local52) = $tmp417;
// line 227
org$pandalanguage$pandac$IR$Value* $tmp419 = *(&local52);
panda$core$String* $tmp420 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s421, ((panda$core$Object*) $tmp419));
panda$core$String* $tmp422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp420, &$s423);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
// unreffing REF($1042:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
// unreffing REF($1041:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp424 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
// unreffing ptr
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp422;
block37:;
panda$core$Int64 $tmp425 = (panda$core$Int64) {18};
panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp425);
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp428 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp429 = *$tmp428;
*(&local53) = $tmp429;
org$pandalanguage$pandac$IR$Value** $tmp430 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp431 = *$tmp430;
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
org$pandalanguage$pandac$IR$Value* $tmp432 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
*(&local54) = $tmp431;
// line 230
org$pandalanguage$pandac$IR$Value* $tmp433 = *(&local54);
panda$core$String* $tmp434 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s435, ((panda$core$Object*) $tmp433));
panda$core$String* $tmp436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp434, &$s437);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
// unreffing REF($1077:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
// unreffing REF($1076:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp438 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
// unreffing ptr
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp436;
block39:;
panda$core$Int64 $tmp439 = (panda$core$Int64) {19};
panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp439);
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$Position* $tmp442 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp443 = *$tmp442;
*(&local55) = $tmp443;
org$pandalanguage$pandac$IR$Value** $tmp444 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp445 = *$tmp444;
*(&local56) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
org$pandalanguage$pandac$IR$Value* $tmp446 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
*(&local56) = $tmp445;
org$pandalanguage$pandac$IR$Value** $tmp447 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp448 = *$tmp447;
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
org$pandalanguage$pandac$IR$Value* $tmp449 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
*(&local57) = $tmp448;
// line 233
org$pandalanguage$pandac$IR$Value* $tmp450 = *(&local56);
panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s452, ((panda$core$Object*) $tmp450));
panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp451, &$s454);
org$pandalanguage$pandac$IR$Value* $tmp455 = *(&local57);
panda$core$String* $tmp456 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp453, ((panda$core$Object*) $tmp455));
panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp456, &$s458);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
// unreffing REF($1125:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
// unreffing REF($1124:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
// unreffing REF($1121:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
// unreffing REF($1120:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp459 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing index
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp460 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
// unreffing ptr
*(&local56) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp457;
block41:;
panda$core$Int64 $tmp461 = (panda$core$Int64) {20};
panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp461);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp464 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp465 = *$tmp464;
*(&local58) = $tmp465;
org$pandalanguage$pandac$IR$Value** $tmp466 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp467 = *$tmp466;
*(&local59) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
org$pandalanguage$pandac$IR$Value* $tmp468 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
*(&local59) = $tmp467;
org$pandalanguage$pandac$IR$Value** $tmp469 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp470 = *$tmp469;
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
org$pandalanguage$pandac$IR$Value* $tmp471 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp471));
*(&local60) = $tmp470;
// line 236
org$pandalanguage$pandac$IR$Value* $tmp472 = *(&local59);
panda$core$String* $tmp473 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s474, ((panda$core$Object*) $tmp472));
panda$core$String* $tmp475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp473, &$s476);
org$pandalanguage$pandac$IR$Value* $tmp477 = *(&local60);
panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp475, ((panda$core$Object*) $tmp477));
panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp478, &$s480);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
// unreffing REF($1184:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
// unreffing REF($1183:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
// unreffing REF($1180:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
// unreffing REF($1179:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp481 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
// unreffing index
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp482 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
// unreffing ptr
*(&local59) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp479;
block43:;
panda$core$Int64 $tmp483 = (panda$core$Int64) {21};
panda$core$Bit $tmp484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp483);
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp486 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp487 = *$tmp486;
*(&local61) = $tmp487;
org$pandalanguage$pandac$IR$Value** $tmp488 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp489 = *$tmp488;
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
org$pandalanguage$pandac$IR$Value* $tmp490 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp490));
*(&local62) = $tmp489;
org$pandalanguage$pandac$IR$Value** $tmp491 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp492 = *$tmp491;
*(&local63) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
org$pandalanguage$pandac$IR$Value* $tmp493 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
*(&local63) = $tmp492;
org$pandalanguage$pandac$IR$Value** $tmp494 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp495 = *$tmp494;
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
org$pandalanguage$pandac$IR$Value* $tmp496 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
*(&local64) = $tmp495;
// line 239
org$pandalanguage$pandac$IR$Value* $tmp497 = *(&local62);
panda$core$String* $tmp498 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s499, ((panda$core$Object*) $tmp497));
panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp498, &$s501);
org$pandalanguage$pandac$IR$Value* $tmp502 = *(&local63);
panda$core$String* $tmp503 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp500, ((panda$core$Object*) $tmp502));
panda$core$String* $tmp504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp503, &$s505);
org$pandalanguage$pandac$IR$Value* $tmp506 = *(&local64);
panda$core$String* $tmp507 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp504, ((panda$core$Object*) $tmp506));
panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp507, &$s509);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
// unreffing REF($1256:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
// unreffing REF($1255:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
// unreffing REF($1252:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
// unreffing REF($1251:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
// unreffing REF($1248:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
// unreffing REF($1247:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp510 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
// unreffing newSize
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp511 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
// unreffing oldSize
*(&local63) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp512 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
// unreffing ptr
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp508;
block45:;
panda$core$Int64 $tmp513 = (panda$core$Int64) {22};
panda$core$Bit $tmp514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp513);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp516 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp517 = *$tmp516;
*(&local65) = $tmp517;
org$pandalanguage$pandac$IR$Value** $tmp518 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp519 = *$tmp518;
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
org$pandalanguage$pandac$IR$Value* $tmp520 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
*(&local66) = $tmp519;
org$pandalanguage$pandac$IR$Value** $tmp521 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp522 = *$tmp521;
*(&local67) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
org$pandalanguage$pandac$IR$Value* $tmp523 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
*(&local67) = $tmp522;
// line 242
org$pandalanguage$pandac$IR$Value* $tmp524 = *(&local66);
panda$core$String* $tmp525 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s526, ((panda$core$Object*) $tmp524));
panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp525, &$s528);
org$pandalanguage$pandac$IR$Value* $tmp529 = *(&local67);
panda$core$String* $tmp530 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp527, ((panda$core$Object*) $tmp529));
panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp530, &$s532);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
// unreffing REF($1326:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
// unreffing REF($1325:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp527));
// unreffing REF($1322:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp525));
// unreffing REF($1321:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp533 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
// unreffing ptr
*(&local67) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp534 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
// unreffing value
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp531;
block47:;
panda$core$Int64 $tmp535 = (panda$core$Int64) {23};
panda$core$Bit $tmp536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp535);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp538 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp539 = *$tmp538;
*(&local68) = $tmp539;
org$pandalanguage$pandac$IR$Value** $tmp540 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp541 = *$tmp540;
*(&local69) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
org$pandalanguage$pandac$IR$Value* $tmp542 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
*(&local69) = $tmp541;
org$pandalanguage$pandac$IR$Value** $tmp543 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp544 = *$tmp543;
*(&local70) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
org$pandalanguage$pandac$IR$Value* $tmp545 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
*(&local70) = $tmp544;
org$pandalanguage$pandac$IR$Value** $tmp546 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp547 = *$tmp546;
*(&local71) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
org$pandalanguage$pandac$IR$Value* $tmp548 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
*(&local71) = $tmp547;
// line 245
org$pandalanguage$pandac$IR$Value* $tmp549 = *(&local69);
panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s551, ((panda$core$Object*) $tmp549));
panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp550, &$s553);
org$pandalanguage$pandac$IR$Value* $tmp554 = *(&local70);
panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp552, ((panda$core$Object*) $tmp554));
panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp555, &$s557);
org$pandalanguage$pandac$IR$Value* $tmp558 = *(&local71);
panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp556, ((panda$core$Object*) $tmp558));
panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp559, &$s561);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
// unreffing REF($1398:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
// unreffing REF($1397:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// unreffing REF($1394:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
// unreffing REF($1393:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp552));
// unreffing REF($1390:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
// unreffing REF($1389:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp562 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
// unreffing index
*(&local71) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp563 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
// unreffing ptr
*(&local70) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp564 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
// unreffing value
*(&local69) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp560;
block49:;
panda$core$Int64 $tmp565 = (panda$core$Int64) {24};
panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp565);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp568 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp569 = *$tmp568;
*(&local72) = $tmp569;
org$pandalanguage$pandac$IR$Value** $tmp570 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp571 = *$tmp570;
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
org$pandalanguage$pandac$IR$Value* $tmp572 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
*(&local73) = $tmp571;
// line 248
org$pandalanguage$pandac$IR$Value* $tmp573 = *(&local73);
panda$core$Bit $tmp574 = panda$core$Bit$init$builtin_bit($tmp573 != NULL);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block52; else goto block53;
block52:;
// line 249
org$pandalanguage$pandac$IR$Value* $tmp576 = *(&local73);
panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s578, ((panda$core$Object*) $tmp576));
panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, &$s580);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
// unreffing REF($1461:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
// unreffing REF($1460:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp581 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
// unreffing value
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp579;
block53:;
// line 251
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s582));
org$pandalanguage$pandac$IR$Value* $tmp583 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
// unreffing value
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return &$s584;
block51:;
panda$core$Int64 $tmp585 = (panda$core$Int64) {25};
panda$core$Bit $tmp586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp585);
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp588 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp589 = *$tmp588;
*(&local74) = $tmp589;
org$pandalanguage$pandac$MethodDecl** $tmp590 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 16);
org$pandalanguage$pandac$MethodDecl* $tmp591 = *$tmp590;
*(&local75) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
org$pandalanguage$pandac$MethodDecl* $tmp592 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
*(&local75) = $tmp591;
org$pandalanguage$pandac$FixedArray** $tmp593 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp594 = *$tmp593;
*(&local76) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
org$pandalanguage$pandac$FixedArray* $tmp595 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
*(&local76) = $tmp594;
// line 254
org$pandalanguage$pandac$MethodDecl* $tmp596 = *(&local75);
panda$core$String* $tmp597 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp596);
panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s599, $tmp597);
panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, &$s601);
org$pandalanguage$pandac$FixedArray* $tmp602 = *(&local76);
ITable* $tmp603 = ((panda$collections$CollectionView*) $tmp602)->$class->itable;
while ($tmp603->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp603 = $tmp603->next;
}
$fn605 $tmp604 = $tmp603->methods[1];
panda$core$String* $tmp606 = $tmp604(((panda$collections$CollectionView*) $tmp602));
panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp600, $tmp606);
panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp607, &$s609);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
// unreffing REF($1520:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
// unreffing REF($1519:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
// unreffing REF($1518:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
// unreffing REF($1514:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
// unreffing REF($1513:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
// unreffing REF($1512:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp610 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
// unreffing args
*(&local76) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp611 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
// unreffing m
*(&local75) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return $tmp608;
block55:;
panda$core$Int64 $tmp612 = (panda$core$Int64) {26};
panda$core$Bit $tmp613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp612);
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block56; else goto block57;
block56:;
org$pandalanguage$pandac$Position* $tmp615 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp616 = *$tmp615;
*(&local77) = $tmp616;
org$pandalanguage$pandac$IR$Value** $tmp617 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp618 = *$tmp617;
*(&local78) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
org$pandalanguage$pandac$IR$Value* $tmp619 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
*(&local78) = $tmp618;
org$pandalanguage$pandac$IR$Value** $tmp620 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp621 = *$tmp620;
*(&local79) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
org$pandalanguage$pandac$IR$Value* $tmp622 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
*(&local79) = $tmp621;
// line 257
org$pandalanguage$pandac$IR$Value* $tmp623 = *(&local78);
panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s625, ((panda$core$Object*) $tmp623));
panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s627);
org$pandalanguage$pandac$IR$Value* $tmp628 = *(&local79);
panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp626, ((panda$core$Object*) $tmp628));
panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp629, &$s631);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp630));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp630));
// unreffing REF($1585:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
// unreffing REF($1584:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp626));
// unreffing REF($1581:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
// unreffing REF($1580:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp632 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
// unreffing ptr
*(&local79) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp633 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp633));
// unreffing value
*(&local78) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp630;
block57:;
panda$core$Int64 $tmp634 = (panda$core$Int64) {27};
panda$core$Bit $tmp635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp634);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block58; else goto block1;
block58:;
org$pandalanguage$pandac$Position* $tmp637 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp638 = *$tmp637;
*(&local80) = $tmp638;
// line 260
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s639));
return &$s640;
block1:;
panda$core$Bit $tmp641 = panda$core$Bit$init$builtin_bit(false);
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block59; else goto block60;
block60:;
panda$core$Int64 $tmp643 = (panda$core$Int64) {173};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s644, $tmp643, &$s645);
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
org$pandalanguage$pandac$FixedArray* local23 = NULL;
org$pandalanguage$pandac$Position local24;
org$pandalanguage$pandac$IR$Value* local25 = NULL;
org$pandalanguage$pandac$FixedArray* local26 = NULL;
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
org$pandalanguage$pandac$FixedArray* local76 = NULL;
org$pandalanguage$pandac$Position local77;
org$pandalanguage$pandac$IR$Value* local78 = NULL;
org$pandalanguage$pandac$IR$Value* local79 = NULL;
org$pandalanguage$pandac$Position local80;
// line 6
panda$core$Int64* $tmp646 = &param0->$rawValue;
panda$core$Int64 $tmp647 = *$tmp646;
panda$core$Int64 $tmp648 = (panda$core$Int64) {0};
panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp648);
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp651 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp652 = *$tmp651;
*(&local0) = $tmp652;
org$pandalanguage$pandac$IR$Value** $tmp653 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp654 = *$tmp653;
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
org$pandalanguage$pandac$IR$Value* $tmp655 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
*(&local1) = $tmp654;
org$pandalanguage$pandac$parser$Token$Kind* $tmp656 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp657 = *$tmp656;
*(&local2) = $tmp657;
org$pandalanguage$pandac$IR$Value** $tmp658 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp659 = *$tmp658;
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
org$pandalanguage$pandac$IR$Value* $tmp660 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
*(&local3) = $tmp659;
org$pandalanguage$pandac$Type** $tmp661 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
org$pandalanguage$pandac$Type* $tmp662 = *$tmp661;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
org$pandalanguage$pandac$Type* $tmp663 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
*(&local4) = $tmp662;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp664 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp665 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
// line 1
org$pandalanguage$pandac$Type* $tmp666 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
org$pandalanguage$pandac$Type* $tmp667 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
// unreffing _f4
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp668 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
// unreffing _f3
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp669 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing _f1
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp670 = (panda$core$Int64) {1};
panda$core$Bit $tmp671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp670);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp673 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp674 = *$tmp673;
*(&local5) = $tmp674;
org$pandalanguage$pandac$IR$Block$ID* $tmp675 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp676 = *$tmp675;
*(&local6) = $tmp676;
goto block1;
block5:;
panda$core$Int64 $tmp677 = (panda$core$Int64) {2};
panda$core$Bit $tmp678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp677);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp680 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp681 = *$tmp680;
*(&local7) = $tmp681;
org$pandalanguage$pandac$IR$Value** $tmp682 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp683 = *$tmp682;
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
org$pandalanguage$pandac$IR$Value* $tmp684 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
*(&local8) = $tmp683;
org$pandalanguage$pandac$Type** $tmp685 = (org$pandalanguage$pandac$Type**) (param0->$data + 24);
org$pandalanguage$pandac$Type* $tmp686 = *$tmp685;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
org$pandalanguage$pandac$Type* $tmp687 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp687));
*(&local9) = $tmp686;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp688 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
// line 1
org$pandalanguage$pandac$Type* $tmp689 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp689));
org$pandalanguage$pandac$Type* $tmp690 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
// unreffing _f2
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp691 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp691));
// unreffing _f1
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp692 = (panda$core$Int64) {3};
panda$core$Bit $tmp693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp692);
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block8; else goto block9;
block8:;
panda$core$String** $tmp695 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp696 = *$tmp695;
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
panda$core$String* $tmp697 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
*(&local10) = $tmp696;
// line 1
panda$core$String* $tmp698 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
panda$core$String* $tmp699 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
// unreffing _f0
*(&local10) = ((panda$core$String*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp700 = (panda$core$Int64) {4};
panda$core$Bit $tmp701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp700);
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp703 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp704 = *$tmp703;
*(&local11) = $tmp704;
org$pandalanguage$pandac$IR$Value** $tmp705 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp706 = *$tmp705;
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp706));
org$pandalanguage$pandac$IR$Value* $tmp707 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
*(&local12) = $tmp706;
org$pandalanguage$pandac$ChoiceCase** $tmp708 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp709 = *$tmp708;
*(&local13) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp709));
org$pandalanguage$pandac$ChoiceCase* $tmp710 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
*(&local13) = $tmp709;
panda$core$Int64* $tmp711 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp712 = *$tmp711;
*(&local14) = $tmp712;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp713 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
// line 1
org$pandalanguage$pandac$ChoiceCase* $tmp714 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp714));
org$pandalanguage$pandac$ChoiceCase* $tmp715 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
// unreffing _f2
*(&local13) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp716 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp716));
// unreffing _f1
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block11:;
panda$core$Int64 $tmp717 = (panda$core$Int64) {5};
panda$core$Bit $tmp718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp717);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp720 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp721 = *$tmp720;
*(&local15) = $tmp721;
org$pandalanguage$pandac$IR$Value** $tmp722 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp723 = *$tmp722;
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
org$pandalanguage$pandac$IR$Value* $tmp724 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
*(&local16) = $tmp723;
org$pandalanguage$pandac$IR$Block$ID* $tmp725 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 24);
org$pandalanguage$pandac$IR$Block$ID $tmp726 = *$tmp725;
*(&local17) = $tmp726;
org$pandalanguage$pandac$IR$Block$ID* $tmp727 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 32);
org$pandalanguage$pandac$IR$Block$ID $tmp728 = *$tmp727;
*(&local18) = $tmp728;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp729 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp729));
org$pandalanguage$pandac$IR$Value* $tmp730 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp730));
// unreffing _f1
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp731 = (panda$core$Int64) {6};
panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp731);
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp734 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp735 = *$tmp734;
*(&local19) = $tmp735;
org$pandalanguage$pandac$ClassDecl** $tmp736 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp737 = *$tmp736;
*(&local20) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
org$pandalanguage$pandac$ClassDecl* $tmp738 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
*(&local20) = $tmp737;
// line 1
org$pandalanguage$pandac$ClassDecl* $tmp739 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp739));
org$pandalanguage$pandac$ClassDecl* $tmp740 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
// unreffing _f1
*(&local20) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block15:;
panda$core$Int64 $tmp741 = (panda$core$Int64) {7};
panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp741);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp744 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp745 = *$tmp744;
*(&local21) = $tmp745;
org$pandalanguage$pandac$ClassDecl** $tmp746 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp747 = *$tmp746;
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp747));
org$pandalanguage$pandac$ClassDecl* $tmp748 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp748));
*(&local22) = $tmp747;
org$pandalanguage$pandac$FixedArray** $tmp749 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp750 = *$tmp749;
*(&local23) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
org$pandalanguage$pandac$FixedArray* $tmp751 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp751));
*(&local23) = $tmp750;
// line 1
org$pandalanguage$pandac$ClassDecl* $tmp752 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp752));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp753 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
org$pandalanguage$pandac$FixedArray* $tmp754 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp754));
// unreffing _f2
*(&local23) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp755 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp755));
// unreffing _f1
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp756 = (panda$core$Int64) {8};
panda$core$Bit $tmp757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp756);
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp759 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp760 = *$tmp759;
*(&local24) = $tmp760;
org$pandalanguage$pandac$IR$Value** $tmp761 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp762 = *$tmp761;
*(&local25) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp762));
org$pandalanguage$pandac$IR$Value* $tmp763 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp763));
*(&local25) = $tmp762;
org$pandalanguage$pandac$FixedArray** $tmp764 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp765 = *$tmp764;
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
org$pandalanguage$pandac$FixedArray* $tmp766 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
*(&local26) = $tmp765;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp767 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp768 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
org$pandalanguage$pandac$FixedArray* $tmp769 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
// unreffing _f2
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp770 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
// unreffing _f1
*(&local25) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp771 = (panda$core$Int64) {9};
panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp771);
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp774 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp775 = *$tmp774;
*(&local27) = $tmp775;
org$pandalanguage$pandac$IR$Value** $tmp776 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp777 = *$tmp776;
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp777));
org$pandalanguage$pandac$IR$Value* $tmp778 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp778));
*(&local28) = $tmp777;
org$pandalanguage$pandac$FieldDecl** $tmp779 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp780 = *$tmp779;
*(&local29) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
org$pandalanguage$pandac$FieldDecl* $tmp781 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
*(&local29) = $tmp780;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp782 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
// line 1
org$pandalanguage$pandac$FieldDecl* $tmp783 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp783));
org$pandalanguage$pandac$FieldDecl* $tmp784 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
// unreffing _f2
*(&local29) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp785 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
// unreffing _f1
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp786 = (panda$core$Int64) {10};
panda$core$Bit $tmp787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp786);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp789 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp790 = *$tmp789;
*(&local30) = $tmp790;
org$pandalanguage$pandac$IR$Value** $tmp791 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp792 = *$tmp791;
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
org$pandalanguage$pandac$IR$Value* $tmp793 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp793));
*(&local31) = $tmp792;
org$pandalanguage$pandac$FieldDecl** $tmp794 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp795 = *$tmp794;
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
org$pandalanguage$pandac$FieldDecl* $tmp796 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
*(&local32) = $tmp795;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp797 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
// line 1
org$pandalanguage$pandac$FieldDecl* $tmp798 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp798));
org$pandalanguage$pandac$FieldDecl* $tmp799 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp799));
// unreffing _f2
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp800 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
// unreffing _f1
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp801 = (panda$core$Int64) {11};
panda$core$Bit $tmp802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp801);
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp804 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp805 = *$tmp804;
*(&local33) = $tmp805;
org$pandalanguage$pandac$IR$Value** $tmp806 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp807 = *$tmp806;
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp807));
org$pandalanguage$pandac$IR$Value* $tmp808 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
*(&local34) = $tmp807;
panda$core$Int64* $tmp809 = (panda$core$Int64*) (param0->$data + 24);
panda$core$Int64 $tmp810 = *$tmp809;
*(&local35) = $tmp810;
org$pandalanguage$pandac$Type** $tmp811 = (org$pandalanguage$pandac$Type**) (param0->$data + 32);
org$pandalanguage$pandac$Type* $tmp812 = *$tmp811;
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
org$pandalanguage$pandac$Type* $tmp813 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp813));
*(&local36) = $tmp812;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp814 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
// line 1
org$pandalanguage$pandac$Type* $tmp815 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp815));
org$pandalanguage$pandac$Type* $tmp816 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
// unreffing _f3
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp817 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp817));
// unreffing _f1
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp818 = (panda$core$Int64) {12};
panda$core$Bit $tmp819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp818);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp821 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp822 = *$tmp821;
*(&local37) = $tmp822;
org$pandalanguage$pandac$IR$Value** $tmp823 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp824 = *$tmp823;
*(&local38) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
org$pandalanguage$pandac$IR$Value* $tmp825 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
*(&local38) = $tmp824;
org$pandalanguage$pandac$ClassDecl** $tmp826 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 24);
org$pandalanguage$pandac$ClassDecl* $tmp827 = *$tmp826;
*(&local39) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
org$pandalanguage$pandac$ClassDecl* $tmp828 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
*(&local39) = $tmp827;
panda$core$Int64* $tmp829 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp830 = *$tmp829;
*(&local40) = $tmp830;
org$pandalanguage$pandac$Type** $tmp831 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
org$pandalanguage$pandac$Type* $tmp832 = *$tmp831;
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
org$pandalanguage$pandac$Type* $tmp833 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
*(&local41) = $tmp832;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp834 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
// line 1
org$pandalanguage$pandac$ClassDecl* $tmp835 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
// line 1
org$pandalanguage$pandac$Type* $tmp836 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
org$pandalanguage$pandac$Type* $tmp837 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp837));
// unreffing _f4
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp838 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
// unreffing _f2
*(&local39) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp839 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
// unreffing _f1
*(&local38) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block27:;
panda$core$Int64 $tmp840 = (panda$core$Int64) {13};
panda$core$Bit $tmp841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp840);
bool $tmp842 = $tmp841.value;
if ($tmp842) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp843 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp844 = *$tmp843;
*(&local42) = $tmp844;
org$pandalanguage$pandac$IR$Value** $tmp845 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp846 = *$tmp845;
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp846));
org$pandalanguage$pandac$IR$Value* $tmp847 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp847));
*(&local43) = $tmp846;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp848 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
org$pandalanguage$pandac$IR$Value* $tmp849 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
// unreffing _f1
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block29:;
panda$core$Int64 $tmp850 = (panda$core$Int64) {14};
panda$core$Bit $tmp851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp850);
bool $tmp852 = $tmp851.value;
if ($tmp852) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp853 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp854 = *$tmp853;
*(&local44) = $tmp854;
org$pandalanguage$pandac$IR$Value** $tmp855 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp856 = *$tmp855;
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
org$pandalanguage$pandac$IR$Value* $tmp857 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp857));
*(&local45) = $tmp856;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp858 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
org$pandalanguage$pandac$IR$Value* $tmp859 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing _f1
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block31:;
panda$core$Int64 $tmp860 = (panda$core$Int64) {15};
panda$core$Bit $tmp861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp860);
bool $tmp862 = $tmp861.value;
if ($tmp862) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp863 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp864 = *$tmp863;
*(&local46) = $tmp864;
org$pandalanguage$pandac$IR$Value** $tmp865 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp866 = *$tmp865;
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
org$pandalanguage$pandac$IR$Value* $tmp867 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp867));
*(&local47) = $tmp866;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp868 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp868));
org$pandalanguage$pandac$IR$Value* $tmp869 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp869));
// unreffing _f1
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block33:;
panda$core$Int64 $tmp870 = (panda$core$Int64) {16};
panda$core$Bit $tmp871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp870);
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp873 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp874 = *$tmp873;
*(&local48) = $tmp874;
org$pandalanguage$pandac$IR$Value** $tmp875 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp876 = *$tmp875;
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp876));
org$pandalanguage$pandac$IR$Value* $tmp877 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp877));
*(&local49) = $tmp876;
org$pandalanguage$pandac$Type** $tmp878 = (org$pandalanguage$pandac$Type**) (param0->$data + 24);
org$pandalanguage$pandac$Type* $tmp879 = *$tmp878;
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
org$pandalanguage$pandac$Type* $tmp880 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp880));
*(&local50) = $tmp879;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp881 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp881));
// line 1
org$pandalanguage$pandac$Type* $tmp882 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
org$pandalanguage$pandac$Type* $tmp883 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp883));
// unreffing _f2
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp884 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp884));
// unreffing _f1
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block35:;
panda$core$Int64 $tmp885 = (panda$core$Int64) {17};
panda$core$Bit $tmp886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp885);
bool $tmp887 = $tmp886.value;
if ($tmp887) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp888 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp889 = *$tmp888;
*(&local51) = $tmp889;
org$pandalanguage$pandac$IR$Value** $tmp890 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp891 = *$tmp890;
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
org$pandalanguage$pandac$IR$Value* $tmp892 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
*(&local52) = $tmp891;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp893 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
org$pandalanguage$pandac$IR$Value* $tmp894 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
// unreffing _f1
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block37:;
panda$core$Int64 $tmp895 = (panda$core$Int64) {18};
panda$core$Bit $tmp896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp895);
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp898 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp899 = *$tmp898;
*(&local53) = $tmp899;
org$pandalanguage$pandac$IR$Value** $tmp900 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp901 = *$tmp900;
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp901));
org$pandalanguage$pandac$IR$Value* $tmp902 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp902));
*(&local54) = $tmp901;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp903 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
org$pandalanguage$pandac$IR$Value* $tmp904 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
// unreffing _f1
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block39:;
panda$core$Int64 $tmp905 = (panda$core$Int64) {19};
panda$core$Bit $tmp906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp905);
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$Position* $tmp908 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp909 = *$tmp908;
*(&local55) = $tmp909;
org$pandalanguage$pandac$IR$Value** $tmp910 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp911 = *$tmp910;
*(&local56) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp911));
org$pandalanguage$pandac$IR$Value* $tmp912 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp912));
*(&local56) = $tmp911;
org$pandalanguage$pandac$IR$Value** $tmp913 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp914 = *$tmp913;
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
org$pandalanguage$pandac$IR$Value* $tmp915 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
*(&local57) = $tmp914;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp916 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp917 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp917));
org$pandalanguage$pandac$IR$Value* $tmp918 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp918));
// unreffing _f2
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp919 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp919));
// unreffing _f1
*(&local56) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block41:;
panda$core$Int64 $tmp920 = (panda$core$Int64) {20};
panda$core$Bit $tmp921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp920);
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp923 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp924 = *$tmp923;
*(&local58) = $tmp924;
org$pandalanguage$pandac$IR$Value** $tmp925 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp926 = *$tmp925;
*(&local59) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
org$pandalanguage$pandac$IR$Value* $tmp927 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
*(&local59) = $tmp926;
org$pandalanguage$pandac$IR$Value** $tmp928 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp929 = *$tmp928;
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
org$pandalanguage$pandac$IR$Value* $tmp930 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
*(&local60) = $tmp929;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp931 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp932 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
org$pandalanguage$pandac$IR$Value* $tmp933 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
// unreffing _f2
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp934 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
// unreffing _f1
*(&local59) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block43:;
panda$core$Int64 $tmp935 = (panda$core$Int64) {21};
panda$core$Bit $tmp936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp935);
bool $tmp937 = $tmp936.value;
if ($tmp937) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp938 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp939 = *$tmp938;
*(&local61) = $tmp939;
org$pandalanguage$pandac$IR$Value** $tmp940 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp941 = *$tmp940;
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
org$pandalanguage$pandac$IR$Value* $tmp942 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp942));
*(&local62) = $tmp941;
org$pandalanguage$pandac$IR$Value** $tmp943 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp944 = *$tmp943;
*(&local63) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
org$pandalanguage$pandac$IR$Value* $tmp945 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp945));
*(&local63) = $tmp944;
org$pandalanguage$pandac$IR$Value** $tmp946 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp947 = *$tmp946;
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
org$pandalanguage$pandac$IR$Value* $tmp948 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp948));
*(&local64) = $tmp947;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp949 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp949));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp950 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp951 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp951));
org$pandalanguage$pandac$IR$Value* $tmp952 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
// unreffing _f3
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp953 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
// unreffing _f2
*(&local63) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp954 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp954));
// unreffing _f1
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block45:;
panda$core$Int64 $tmp955 = (panda$core$Int64) {22};
panda$core$Bit $tmp956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp955);
bool $tmp957 = $tmp956.value;
if ($tmp957) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp958 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp959 = *$tmp958;
*(&local65) = $tmp959;
org$pandalanguage$pandac$IR$Value** $tmp960 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp961 = *$tmp960;
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp961));
org$pandalanguage$pandac$IR$Value* $tmp962 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp962));
*(&local66) = $tmp961;
org$pandalanguage$pandac$IR$Value** $tmp963 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp964 = *$tmp963;
*(&local67) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
org$pandalanguage$pandac$IR$Value* $tmp965 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp965));
*(&local67) = $tmp964;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp966 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp967 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp967));
org$pandalanguage$pandac$IR$Value* $tmp968 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp968));
// unreffing _f2
*(&local67) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp969 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
// unreffing _f1
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block47:;
panda$core$Int64 $tmp970 = (panda$core$Int64) {23};
panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp970);
bool $tmp972 = $tmp971.value;
if ($tmp972) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp973 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp974 = *$tmp973;
*(&local68) = $tmp974;
org$pandalanguage$pandac$IR$Value** $tmp975 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp976 = *$tmp975;
*(&local69) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp976));
org$pandalanguage$pandac$IR$Value* $tmp977 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp977));
*(&local69) = $tmp976;
org$pandalanguage$pandac$IR$Value** $tmp978 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp979 = *$tmp978;
*(&local70) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp979));
org$pandalanguage$pandac$IR$Value* $tmp980 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
*(&local70) = $tmp979;
org$pandalanguage$pandac$IR$Value** $tmp981 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp982 = *$tmp981;
*(&local71) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp982));
org$pandalanguage$pandac$IR$Value* $tmp983 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
*(&local71) = $tmp982;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp984 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp985 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp986 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
org$pandalanguage$pandac$IR$Value* $tmp987 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
// unreffing _f3
*(&local71) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp988 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
// unreffing _f2
*(&local70) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp989 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp989));
// unreffing _f1
*(&local69) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block49:;
panda$core$Int64 $tmp990 = (panda$core$Int64) {24};
panda$core$Bit $tmp991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp990);
bool $tmp992 = $tmp991.value;
if ($tmp992) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp993 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp994 = *$tmp993;
*(&local72) = $tmp994;
org$pandalanguage$pandac$IR$Value** $tmp995 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp996 = *$tmp995;
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp996));
org$pandalanguage$pandac$IR$Value* $tmp997 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
*(&local73) = $tmp996;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp998 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
org$pandalanguage$pandac$IR$Value* $tmp999 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp999));
// unreffing _f1
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block51:;
panda$core$Int64 $tmp1000 = (panda$core$Int64) {25};
panda$core$Bit $tmp1001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp1000);
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp1003 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1004 = *$tmp1003;
*(&local74) = $tmp1004;
org$pandalanguage$pandac$MethodDecl** $tmp1005 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 16);
org$pandalanguage$pandac$MethodDecl* $tmp1006 = *$tmp1005;
*(&local75) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1006));
org$pandalanguage$pandac$MethodDecl* $tmp1007 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
*(&local75) = $tmp1006;
org$pandalanguage$pandac$FixedArray** $tmp1008 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1009 = *$tmp1008;
*(&local76) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
org$pandalanguage$pandac$FixedArray* $tmp1010 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1010));
*(&local76) = $tmp1009;
// line 1
org$pandalanguage$pandac$MethodDecl* $tmp1011 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1011));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp1012 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1012));
org$pandalanguage$pandac$FixedArray* $tmp1013 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
// unreffing _f2
*(&local76) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp1014 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
// unreffing _f1
*(&local75) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block1;
block53:;
panda$core$Int64 $tmp1015 = (panda$core$Int64) {26};
panda$core$Bit $tmp1016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp1015);
bool $tmp1017 = $tmp1016.value;
if ($tmp1017) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp1018 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1019 = *$tmp1018;
*(&local77) = $tmp1019;
org$pandalanguage$pandac$IR$Value** $tmp1020 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp1021 = *$tmp1020;
*(&local78) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1021));
org$pandalanguage$pandac$IR$Value* $tmp1022 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
*(&local78) = $tmp1021;
org$pandalanguage$pandac$IR$Value** $tmp1023 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp1024 = *$tmp1023;
*(&local79) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
org$pandalanguage$pandac$IR$Value* $tmp1025 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
*(&local79) = $tmp1024;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp1026 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
// line 1
org$pandalanguage$pandac$IR$Value* $tmp1027 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
org$pandalanguage$pandac$IR$Value* $tmp1028 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// unreffing _f2
*(&local79) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1029 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
// unreffing _f1
*(&local78) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block55:;
panda$core$Int64 $tmp1030 = (panda$core$Int64) {27};
panda$core$Bit $tmp1031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp1030);
bool $tmp1032 = $tmp1031.value;
if ($tmp1032) goto block56; else goto block1;
block56:;
org$pandalanguage$pandac$Position* $tmp1033 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1034 = *$tmp1033;
*(&local80) = $tmp1034;
goto block1;
block1:;
// line 6
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$parser$Token$Kind param4, org$pandalanguage$pandac$IR$Value* param5, org$pandalanguage$pandac$Type* param6) {

// line 6
panda$core$Int64* $tmp1035 = &param0->$rawValue;
*$tmp1035 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1036 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1036 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1037 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1037 = param3;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp1038 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
*$tmp1038 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$IR$Value** $tmp1039 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
*$tmp1039 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$Type** $tmp1040 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
*$tmp1040 = param6;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Block$ID param3) {

// line 6
panda$core$Int64* $tmp1041 = &param0->$rawValue;
*$tmp1041 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1042 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1042 = param2;
// line 6
org$pandalanguage$pandac$IR$Block$ID* $tmp1043 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
*$tmp1043 = param3;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$Type* param4) {

// line 6
panda$core$Int64* $tmp1044 = &param0->$rawValue;
*$tmp1044 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1045 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1045 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1046 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1046 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$Type** $tmp1047 = (org$pandalanguage$pandac$Type**) (param0->$data + 24);
*$tmp1047 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 6
panda$core$Int64* $tmp1048 = &param0->$rawValue;
*$tmp1048 = param1;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp1049 = (panda$core$String**) (param0->$data + 0);
*$tmp1049 = param2;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$ChoiceCase* param4, panda$core$Int64 param5) {

// line 6
panda$core$Int64* $tmp1050 = &param0->$rawValue;
*$tmp1050 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1051 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1051 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1052 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1052 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ChoiceCase** $tmp1053 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
*$tmp1053 = param4;
// line 6
panda$core$Int64* $tmp1054 = (panda$core$Int64*) (param0->$data + 32);
*$tmp1054 = param5;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$IR$Block$ID param4, org$pandalanguage$pandac$IR$Block$ID param5) {

// line 6
panda$core$Int64* $tmp1055 = &param0->$rawValue;
*$tmp1055 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1056 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1056 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1057 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1057 = param3;
// line 6
org$pandalanguage$pandac$IR$Block$ID* $tmp1058 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 24);
*$tmp1058 = param4;
// line 6
org$pandalanguage$pandac$IR$Block$ID* $tmp1059 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 32);
*$tmp1059 = param5;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ClassDecl* param3) {

// line 6
panda$core$Int64* $tmp1060 = &param0->$rawValue;
*$tmp1060 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1061 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1061 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ClassDecl** $tmp1062 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 16);
*$tmp1062 = param3;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ClassDecl* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp1063 = &param0->$rawValue;
*$tmp1063 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1064 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1064 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ClassDecl** $tmp1065 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 16);
*$tmp1065 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp1066 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp1066 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp1067 = &param0->$rawValue;
*$tmp1067 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1068 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1068 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1069 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1069 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp1070 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp1070 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$FieldDecl* param4) {

// line 6
panda$core$Int64* $tmp1071 = &param0->$rawValue;
*$tmp1071 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1072 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1072 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1073 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1073 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FieldDecl** $tmp1074 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 24);
*$tmp1074 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, panda$core$Int64 param4, org$pandalanguage$pandac$Type* param5) {

// line 6
panda$core$Int64* $tmp1075 = &param0->$rawValue;
*$tmp1075 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1076 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1076 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1077 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1077 = param3;
// line 6
panda$core$Int64* $tmp1078 = (panda$core$Int64*) (param0->$data + 24);
*$tmp1078 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$Type** $tmp1079 = (org$pandalanguage$pandac$Type**) (param0->$data + 32);
*$tmp1079 = param5;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$ClassDecl* param4, panda$core$Int64 param5, org$pandalanguage$pandac$Type* param6) {

// line 6
panda$core$Int64* $tmp1080 = &param0->$rawValue;
*$tmp1080 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1081 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1081 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1082 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1082 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ClassDecl** $tmp1083 = (org$pandalanguage$pandac$ClassDecl**) (param0->$data + 24);
*$tmp1083 = param4;
// line 6
panda$core$Int64* $tmp1084 = (panda$core$Int64*) (param0->$data + 32);
*$tmp1084 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$Type** $tmp1085 = (org$pandalanguage$pandac$Type**) (param0->$data + 40);
*$tmp1085 = param6;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3) {

// line 6
panda$core$Int64* $tmp1086 = &param0->$rawValue;
*$tmp1086 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1087 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1087 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1088 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1088 = param3;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$IR$Value* param4) {

// line 6
panda$core$Int64* $tmp1089 = &param0->$rawValue;
*$tmp1089 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1090 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1090 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1091 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1091 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$IR$Value** $tmp1092 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
*$tmp1092 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$IR$Value* param4, org$pandalanguage$pandac$IR$Value* param5) {

// line 6
panda$core$Int64* $tmp1093 = &param0->$rawValue;
*$tmp1093 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1094 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1094 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1095 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1095 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$IR$Value** $tmp1096 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 24);
*$tmp1096 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$IR$Value** $tmp1097 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 32);
*$tmp1097 = param5;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3) {

// line 6
panda$core$Int64* $tmp1098 = &param0->$rawValue;
*$tmp1098 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1099 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1099 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp1100 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp1100 = param3;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$MethodDecl* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp1101 = &param0->$rawValue;
*$tmp1101 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1102 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1102 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodDecl** $tmp1103 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 16);
*$tmp1103 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp1104 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp1104 = param4;
return;

}
void org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IR$Statement* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2) {

// line 6
panda$core$Int64* $tmp1105 = &param0->$rawValue;
*$tmp1105 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp1106 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp1106 = param2;
return;

}

