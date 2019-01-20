#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$Statement$class_type org$frostlang$frostc$IR$Statement$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$Statement$get_asString$R$frost$core$String, org$frostlang$frostc$IR$Statement$cleanup} };

typedef frost$core$String* (*$fn175)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn610)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74", 33, -1293902195150777086, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x69\x6e\x61\x72\x79\x20", 7, 212357618280678, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x61\x6e\x63\x68\x20", 7, 212450869639155, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x73\x74\x20", 5, 20913204260, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x20", 3, 1493923, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x61\x6e\x63\x68\x20", 7, 212450869639155, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x20", 10, -1409986609548663362, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x72\x65\x61\x74\x65\x5f\x73\x74\x72\x75\x63\x74\x20", 14, 4875181606754021553, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x5f\x63\x61\x6c\x6c\x20", 13, -5792732615387549007, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x61\x64\x5f\x66\x69\x65\x6c\x64\x20", 11, 3058635920978766632, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x63\x68\x6f\x69\x63\x65\x5f\x66\x69\x65\x6c\x64\x5f\x70\x6f\x69\x6e\x74\x65\x72\x20", 25, -3913498487693051030, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x66\x69\x65\x6c\x64\x5f\x70\x6f\x69\x6e\x74\x65\x72\x20", 18, 3388938635151659584, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x5f\x6d\x65\x74\x68\x6f\x64\x20", 21, -8815107277757025267, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x76\x69\x72\x74\x75\x61\x6c\x5f\x6d\x65\x74\x68\x6f\x64\x20", 19, -7905692567260344197, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x61\x64\x20", 5, 21863986849, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x65\x67\x61\x74\x65\x20", 7, 225053091281461, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20", 4, 218537570, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x61\x6c\x6c\x6f\x63\x20", 14, -2347844371417858360, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x64\x65\x73\x74\x72\x6f\x79\x20", 16, -6486310874503276737, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x67\x65\x74\x20", 12, 8247549443768276313, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x67\x65\x74\x5f\x69\x6e\x64\x65\x78\x20", 18, 4894902233184898028, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x6f\x66\x66\x73\x65\x74\x20", 15, 2675406242621769772, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x72\x65\x61\x6c\x6c\x6f\x63\x20", 16, -6484810075030803177, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s526 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x73\x65\x74\x20", 12, 8247549443780639925, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x73\x65\x74\x5f\x69\x6e\x64\x65\x78\x20", 18, -427618568312322776, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s581 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 1393803510449382482, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x5f\x63\x61\x6c\x6c\x20", 12, 6127247738107404280, NULL };
static frost$core$String $s606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x6f\x72\x65\x20", 6, 2282368251290, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static frost$core$String $s649 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x67\x65\x74\x5f\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 100, -7973077713222497818, NULL };

frost$core$String* org$frostlang$frostc$IR$Statement$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Statement* param0) {

org$frostlang$frostc$Position local0;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$expression$Binary$Operator local2;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Position local5;
org$frostlang$frostc$IR$Block$ID local6;
org$frostlang$frostc$Position local7;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
frost$core$String* local10 = NULL;
org$frostlang$frostc$Position local11;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$IR$Block$ID local13;
org$frostlang$frostc$IR$Block$ID local14;
org$frostlang$frostc$Position local15;
org$frostlang$frostc$ClassDecl* local16 = NULL;
org$frostlang$frostc$Position local17;
org$frostlang$frostc$ClassDecl* local18 = NULL;
org$frostlang$frostc$FixedArray* local19 = NULL;
org$frostlang$frostc$Position local20;
org$frostlang$frostc$IR$Value* local21 = NULL;
org$frostlang$frostc$FixedArray* local22 = NULL;
org$frostlang$frostc$Position local23;
org$frostlang$frostc$IR$Value* local24 = NULL;
org$frostlang$frostc$FieldDecl* local25 = NULL;
org$frostlang$frostc$Position local26;
org$frostlang$frostc$IR$Value* local27 = NULL;
org$frostlang$frostc$ChoiceCase* local28 = NULL;
frost$core$Int64 local29;
org$frostlang$frostc$Position local30;
org$frostlang$frostc$IR$Value* local31 = NULL;
org$frostlang$frostc$FieldDecl* local32 = NULL;
org$frostlang$frostc$Position local33;
org$frostlang$frostc$IR$Value* local34 = NULL;
org$frostlang$frostc$ClassDecl* local35 = NULL;
frost$core$Int64 local36;
org$frostlang$frostc$Type* local37 = NULL;
org$frostlang$frostc$Position local38;
org$frostlang$frostc$IR$Value* local39 = NULL;
frost$core$Int64 local40;
org$frostlang$frostc$Type* local41 = NULL;
org$frostlang$frostc$Position local42;
org$frostlang$frostc$IR$Value* local43 = NULL;
org$frostlang$frostc$Position local44;
org$frostlang$frostc$IR$Value* local45 = NULL;
org$frostlang$frostc$Position local46;
org$frostlang$frostc$IR$Value* local47 = NULL;
org$frostlang$frostc$Position local48;
org$frostlang$frostc$IR$Value* local49 = NULL;
org$frostlang$frostc$Type* local50 = NULL;
org$frostlang$frostc$Position local51;
org$frostlang$frostc$IR$Value* local52 = NULL;
org$frostlang$frostc$Position local53;
org$frostlang$frostc$IR$Value* local54 = NULL;
org$frostlang$frostc$Position local55;
org$frostlang$frostc$IR$Value* local56 = NULL;
org$frostlang$frostc$IR$Value* local57 = NULL;
org$frostlang$frostc$Position local58;
org$frostlang$frostc$IR$Value* local59 = NULL;
org$frostlang$frostc$IR$Value* local60 = NULL;
org$frostlang$frostc$Position local61;
org$frostlang$frostc$IR$Value* local62 = NULL;
org$frostlang$frostc$IR$Value* local63 = NULL;
org$frostlang$frostc$IR$Value* local64 = NULL;
org$frostlang$frostc$Position local65;
org$frostlang$frostc$IR$Value* local66 = NULL;
org$frostlang$frostc$IR$Value* local67 = NULL;
org$frostlang$frostc$Position local68;
org$frostlang$frostc$IR$Value* local69 = NULL;
org$frostlang$frostc$IR$Value* local70 = NULL;
org$frostlang$frostc$IR$Value* local71 = NULL;
org$frostlang$frostc$Position local72;
org$frostlang$frostc$IR$Value* local73 = NULL;
org$frostlang$frostc$Position local74;
org$frostlang$frostc$MethodDecl* local75 = NULL;
org$frostlang$frostc$FixedArray* local76 = NULL;
org$frostlang$frostc$Position local77;
org$frostlang$frostc$IR$Value* local78 = NULL;
org$frostlang$frostc$IR$Value* local79 = NULL;
org$frostlang$frostc$Position local80;
// line 174
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp7 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp8 = *$tmp7;
*(&local0) = $tmp8;
org$frostlang$frostc$IR$Value** $tmp9 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp10 = *$tmp9;
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$IR$Value* $tmp11 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
*(&local1) = $tmp10;
org$frostlang$frostc$expression$Binary$Operator* $tmp12 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp13 = *$tmp12;
*(&local2) = $tmp13;
org$frostlang$frostc$IR$Value** $tmp14 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp15 = *$tmp14;
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlang$frostc$IR$Value* $tmp16 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local3) = $tmp15;
org$frostlang$frostc$Type** $tmp17 = (org$frostlang$frostc$Type**) (param0->$data + 40);
org$frostlang$frostc$Type* $tmp18 = *$tmp17;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
org$frostlang$frostc$Type* $tmp19 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local4) = $tmp18;
// line 176
org$frostlang$frostc$IR$Value* $tmp20 = *(&local1);
frost$core$String* $tmp21 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s22, ((frost$core$Object*) $tmp20));
frost$core$String* $tmp23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp21, &$s24);
org$frostlang$frostc$expression$Binary$Operator $tmp25 = *(&local2);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp26;
$tmp26 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp26->value = $tmp25;
frost$core$String* $tmp27 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp23, ((frost$core$Object*) $tmp26));
frost$core$String* $tmp28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp27, &$s29);
org$frostlang$frostc$IR$Value* $tmp30 = *(&local3);
frost$core$String* $tmp31 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp28, ((frost$core$Object*) $tmp30));
frost$core$String* $tmp32 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp31, &$s33);
org$frostlang$frostc$Type* $tmp34 = *(&local4);
frost$core$String* $tmp35 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp32, ((frost$core$Object*) $tmp34));
frost$core$String* $tmp36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp35, &$s37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($55:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing REF($52:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// unreffing REF($51:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($48:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($46:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing REF($44:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($43:frost.core.String)
org$frostlang$frostc$Type* $tmp38 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// unreffing type
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp39 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// unreffing right
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp40 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// unreffing left
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp36;
block3:;
frost$core$Int64 $tmp41 = (frost$core$Int64) {1};
frost$core$Bit $tmp42 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp41);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp44 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp45 = *$tmp44;
*(&local5) = $tmp45;
org$frostlang$frostc$IR$Block$ID* $tmp46 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp47 = *$tmp46;
*(&local6) = $tmp47;
// line 179
org$frostlang$frostc$IR$Block$ID $tmp48 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp49;
$tmp49 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp49->value = $tmp48;
frost$core$String* $tmp50 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s51, ((frost$core$Object*) $tmp49));
frost$core$String* $tmp52 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp50, &$s53);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing REF($116:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing REF($115:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing REF($114:frost.core.Object)
return $tmp52;
block5:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {2};
frost$core$Bit $tmp55 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp54);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp57 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp58 = *$tmp57;
*(&local7) = $tmp58;
org$frostlang$frostc$IR$Value** $tmp59 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp60 = *$tmp59;
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
org$frostlang$frostc$IR$Value* $tmp61 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local8) = $tmp60;
org$frostlang$frostc$Type** $tmp62 = (org$frostlang$frostc$Type**) (param0->$data + 24);
org$frostlang$frostc$Type* $tmp63 = *$tmp62;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
org$frostlang$frostc$Type* $tmp64 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local9) = $tmp63;
// line 182
org$frostlang$frostc$IR$Value* $tmp65 = *(&local8);
frost$core$String* $tmp66 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s67, ((frost$core$Object*) $tmp65));
frost$core$String* $tmp68 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp66, &$s69);
org$frostlang$frostc$Type* $tmp70 = *(&local9);
frost$core$String* $tmp71 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp68, ((frost$core$Object*) $tmp70));
frost$core$String* $tmp72 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp71, &$s73);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing REF($162:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($161:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing REF($158:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing REF($157:frost.core.String)
org$frostlang$frostc$Type* $tmp74 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing type
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp75 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing value
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp72;
block7:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {3};
frost$core$Bit $tmp77 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block8; else goto block9;
block8:;
frost$core$String** $tmp79 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp80 = *$tmp79;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$String* $tmp81 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local10) = $tmp80;
// line 185
frost$core$String* $tmp82 = *(&local10);
frost$core$String* $tmp83 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s84, $tmp82);
frost$core$String* $tmp85 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp83, &$s86);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing REF($204:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing REF($203:frost.core.String)
frost$core$String* $tmp87 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// unreffing text
*(&local10) = ((frost$core$String*) NULL);
return $tmp85;
block9:;
frost$core$Int64 $tmp88 = (frost$core$Int64) {5};
frost$core$Bit $tmp89 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp88);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp91 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp92 = *$tmp91;
*(&local11) = $tmp92;
org$frostlang$frostc$IR$Value** $tmp93 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp94 = *$tmp93;
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
org$frostlang$frostc$IR$Value* $tmp95 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local12) = $tmp94;
org$frostlang$frostc$IR$Block$ID* $tmp96 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp97 = *$tmp96;
*(&local13) = $tmp97;
org$frostlang$frostc$IR$Block$ID* $tmp98 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp99 = *$tmp98;
*(&local14) = $tmp99;
// line 188
org$frostlang$frostc$IR$Value* $tmp100 = *(&local12);
frost$core$String* $tmp101 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s102, ((frost$core$Object*) $tmp100));
frost$core$String* $tmp103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp101, &$s104);
org$frostlang$frostc$IR$Block$ID $tmp105 = *(&local13);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp106;
$tmp106 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp106->value = $tmp105;
frost$core$String* $tmp107 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp103, ((frost$core$Object*) $tmp106));
frost$core$String* $tmp108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp107, &$s109);
org$frostlang$frostc$IR$Block$ID $tmp110 = *(&local14);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp111;
$tmp111 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp111->value = $tmp110;
frost$core$String* $tmp112 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp108, ((frost$core$Object*) $tmp111));
frost$core$String* $tmp113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp112, &$s114);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing REF($253:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($252:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing REF($251:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($249:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing REF($248:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing REF($247:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing REF($245:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($244:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp115 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing test
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp113;
block11:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {6};
frost$core$Bit $tmp117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp119 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp120 = *$tmp119;
*(&local15) = $tmp120;
org$frostlang$frostc$ClassDecl** $tmp121 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp122 = *$tmp121;
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
org$frostlang$frostc$ClassDecl* $tmp123 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local16) = $tmp122;
// line 191
org$frostlang$frostc$ClassDecl* $tmp124 = *(&local16);
frost$core$String** $tmp125 = &$tmp124->name;
frost$core$String* $tmp126 = *$tmp125;
frost$core$String* $tmp127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s128, $tmp126);
frost$core$String* $tmp129 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp127, &$s130);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
// unreffing REF($307:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing REF($306:frost.core.String)
org$frostlang$frostc$ClassDecl* $tmp131 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing cl
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp129;
block13:;
frost$core$Int64 $tmp132 = (frost$core$Int64) {7};
frost$core$Bit $tmp133 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp132);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp135 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp136 = *$tmp135;
*(&local17) = $tmp136;
org$frostlang$frostc$ClassDecl** $tmp137 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp138 = *$tmp137;
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
org$frostlang$frostc$ClassDecl* $tmp139 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local18) = $tmp138;
org$frostlang$frostc$FixedArray** $tmp140 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp141 = *$tmp140;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
org$frostlang$frostc$FixedArray* $tmp142 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local19) = $tmp141;
// line 194
org$frostlang$frostc$ClassDecl* $tmp143 = *(&local18);
frost$core$String** $tmp144 = &$tmp143->name;
frost$core$String* $tmp145 = *$tmp144;
frost$core$String* $tmp146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s147, $tmp145);
frost$core$String* $tmp148 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp146, &$s149);
org$frostlang$frostc$FixedArray* $tmp150 = *(&local19);
frost$core$String* $tmp151 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp148, ((frost$core$Object*) $tmp150));
frost$core$String* $tmp152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp151, &$s153);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing REF($356:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing REF($355:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing REF($352:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing REF($351:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp154 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing args
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp155 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing cl
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp152;
block15:;
frost$core$Int64 $tmp156 = (frost$core$Int64) {8};
frost$core$Bit $tmp157 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp156);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp159 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp160 = *$tmp159;
*(&local20) = $tmp160;
org$frostlang$frostc$IR$Value** $tmp161 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp162 = *$tmp161;
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
org$frostlang$frostc$IR$Value* $tmp163 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local21) = $tmp162;
org$frostlang$frostc$FixedArray** $tmp164 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp165 = *$tmp164;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
org$frostlang$frostc$FixedArray* $tmp166 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local22) = $tmp165;
// line 197
org$frostlang$frostc$IR$Value* $tmp167 = *(&local21);
frost$core$String* $tmp168 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s169, ((frost$core$Object*) $tmp167));
frost$core$String* $tmp170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp168, &$s171);
org$frostlang$frostc$FixedArray* $tmp172 = *(&local22);
ITable* $tmp173 = ((frost$collections$CollectionView*) $tmp172)->$class->itable;
while ($tmp173->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[1];
frost$core$String* $tmp176 = $tmp174(((frost$collections$CollectionView*) $tmp172));
frost$core$String* $tmp177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp170, $tmp176);
frost$core$String* $tmp178 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp177, &$s179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
// unreffing REF($417:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing REF($416:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// unreffing REF($415:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// unreffing REF($411:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
// unreffing REF($410:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp180 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// unreffing args
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp181 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing m
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp178;
block17:;
frost$core$Int64 $tmp182 = (frost$core$Int64) {9};
frost$core$Bit $tmp183 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp182);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp185 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp186 = *$tmp185;
*(&local23) = $tmp186;
org$frostlang$frostc$IR$Value** $tmp187 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp188 = *$tmp187;
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
org$frostlang$frostc$IR$Value* $tmp189 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local24) = $tmp188;
org$frostlang$frostc$FieldDecl** $tmp190 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp191 = *$tmp190;
*(&local25) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
org$frostlang$frostc$FieldDecl* $tmp192 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local25) = $tmp191;
// line 200
org$frostlang$frostc$IR$Value* $tmp193 = *(&local24);
frost$core$String* $tmp194 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s195, ((frost$core$Object*) $tmp193));
frost$core$String* $tmp196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp194, &$s197);
org$frostlang$frostc$FieldDecl* $tmp198 = *(&local25);
frost$core$Weak** $tmp199 = &$tmp198->owner;
frost$core$Weak* $tmp200 = *$tmp199;
frost$core$Object* $tmp201 = frost$core$Weak$get$R$frost$core$Weak$T($tmp200);
frost$core$String** $tmp202 = &((org$frostlang$frostc$ClassDecl*) $tmp201)->name;
frost$core$String* $tmp203 = *$tmp202;
frost$core$String* $tmp204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp196, $tmp203);
frost$core$String* $tmp205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp204, &$s206);
org$frostlang$frostc$FieldDecl* $tmp207 = *(&local25);
frost$core$String** $tmp208 = &((org$frostlang$frostc$Symbol*) $tmp207)->name;
frost$core$String* $tmp209 = *$tmp208;
frost$core$String* $tmp210 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp205, $tmp209);
frost$core$String* $tmp211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp210, &$s212);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing REF($491:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing REF($490:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing REF($485:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing REF($484:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp201);
// unreffing REF($480:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing REF($475:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing REF($474:frost.core.String)
org$frostlang$frostc$FieldDecl* $tmp213 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// unreffing field
*(&local25) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp214 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing value
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp211;
block19:;
frost$core$Int64 $tmp215 = (frost$core$Int64) {4};
frost$core$Bit $tmp216 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp218 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp219 = *$tmp218;
*(&local26) = $tmp219;
org$frostlang$frostc$IR$Value** $tmp220 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp221 = *$tmp220;
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
org$frostlang$frostc$IR$Value* $tmp222 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local27) = $tmp221;
org$frostlang$frostc$ChoiceCase** $tmp223 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp224 = *$tmp223;
*(&local28) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
org$frostlang$frostc$ChoiceCase* $tmp225 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local28) = $tmp224;
frost$core$Int64* $tmp226 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp227 = *$tmp226;
*(&local29) = $tmp227;
// line 203
org$frostlang$frostc$IR$Value* $tmp228 = *(&local27);
frost$core$String* $tmp229 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s230, ((frost$core$Object*) $tmp228));
frost$core$String* $tmp231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp229, &$s232);
org$frostlang$frostc$ChoiceCase* $tmp233 = *(&local28);
frost$core$String** $tmp234 = &((org$frostlang$frostc$Symbol*) $tmp233)->name;
frost$core$String* $tmp235 = *$tmp234;
frost$core$String* $tmp236 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp231, $tmp235);
frost$core$String* $tmp237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp236, &$s238);
frost$core$Int64 $tmp239 = *(&local29);
frost$core$Int64$wrapper* $tmp240;
$tmp240 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp240->value = $tmp239;
frost$core$String* $tmp241 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp237, ((frost$core$Object*) $tmp240));
frost$core$String* $tmp242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp241, &$s243);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($568:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// unreffing REF($567:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing REF($566:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing REF($564:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing REF($563:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// unreffing REF($558:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// unreffing REF($557:frost.core.String)
org$frostlang$frostc$ChoiceCase* $tmp244 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing cc
*(&local28) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$IR$Value* $tmp245 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing target
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp242;
block21:;
frost$core$Int64 $tmp246 = (frost$core$Int64) {10};
frost$core$Bit $tmp247 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp249 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp250 = *$tmp249;
*(&local30) = $tmp250;
org$frostlang$frostc$IR$Value** $tmp251 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp252 = *$tmp251;
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
org$frostlang$frostc$IR$Value* $tmp253 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local31) = $tmp252;
org$frostlang$frostc$FieldDecl** $tmp254 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp255 = *$tmp254;
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$FieldDecl* $tmp256 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local32) = $tmp255;
// line 206
org$frostlang$frostc$IR$Value* $tmp257 = *(&local31);
frost$core$String* $tmp258 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s259, ((frost$core$Object*) $tmp257));
frost$core$String* $tmp260 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp258, &$s261);
org$frostlang$frostc$FieldDecl* $tmp262 = *(&local32);
frost$core$Weak** $tmp263 = &$tmp262->owner;
frost$core$Weak* $tmp264 = *$tmp263;
frost$core$Object* $tmp265 = frost$core$Weak$get$R$frost$core$Weak$T($tmp264);
frost$core$String** $tmp266 = &((org$frostlang$frostc$ClassDecl*) $tmp265)->name;
frost$core$String* $tmp267 = *$tmp266;
frost$core$String* $tmp268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp260, $tmp267);
frost$core$String* $tmp269 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp268, &$s270);
org$frostlang$frostc$FieldDecl* $tmp271 = *(&local32);
frost$core$String** $tmp272 = &((org$frostlang$frostc$Symbol*) $tmp271)->name;
frost$core$String* $tmp273 = *$tmp272;
frost$core$String* $tmp274 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp269, $tmp273);
frost$core$String* $tmp275 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp274, &$s276);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// unreffing REF($648:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// unreffing REF($647:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing REF($642:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing REF($641:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp265);
// unreffing REF($637:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing REF($632:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($631:frost.core.String)
org$frostlang$frostc$FieldDecl* $tmp277 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
// unreffing field
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp278 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// unreffing ptr
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp275;
block23:;
frost$core$Int64 $tmp279 = (frost$core$Int64) {12};
frost$core$Bit $tmp280 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp279);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp282 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp283 = *$tmp282;
*(&local33) = $tmp283;
org$frostlang$frostc$IR$Value** $tmp284 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp285 = *$tmp284;
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$IR$Value* $tmp286 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local34) = $tmp285;
org$frostlang$frostc$ClassDecl** $tmp287 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp288 = *$tmp287;
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
org$frostlang$frostc$ClassDecl* $tmp289 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local35) = $tmp288;
frost$core$Int64* $tmp290 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp291 = *$tmp290;
*(&local36) = $tmp291;
org$frostlang$frostc$Type** $tmp292 = (org$frostlang$frostc$Type**) (param0->$data + 40);
org$frostlang$frostc$Type* $tmp293 = *$tmp292;
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
org$frostlang$frostc$Type* $tmp294 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local37) = $tmp293;
// line 209
org$frostlang$frostc$IR$Value* $tmp295 = *(&local34);
frost$core$String* $tmp296 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s297, ((frost$core$Object*) $tmp295));
frost$core$String* $tmp298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp296, &$s299);
org$frostlang$frostc$ClassDecl* $tmp300 = *(&local35);
frost$core$String** $tmp301 = &$tmp300->name;
frost$core$String* $tmp302 = *$tmp301;
frost$core$String* $tmp303 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp298, $tmp302);
frost$core$String* $tmp304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp303, &$s305);
frost$core$Int64 $tmp306 = *(&local36);
frost$core$Int64$wrapper* $tmp307;
$tmp307 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp307->value = $tmp306;
frost$core$String* $tmp308 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp304, ((frost$core$Object*) $tmp307));
frost$core$String* $tmp309 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp308, &$s310);
org$frostlang$frostc$Type* $tmp311 = *(&local37);
frost$core$String* $tmp312 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp309, ((frost$core$Object*) $tmp311));
frost$core$String* $tmp313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp312, &$s314);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing REF($737:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing REF($736:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing REF($733:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing REF($732:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// unreffing REF($731:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing REF($729:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// unreffing REF($728:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// unreffing REF($724:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing REF($723:frost.core.String)
org$frostlang$frostc$Type* $tmp315 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// unreffing type
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp316 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
// unreffing cl
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp317 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// unreffing value
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp313;
block25:;
frost$core$Int64 $tmp318 = (frost$core$Int64) {11};
frost$core$Bit $tmp319 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp318);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp321 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp322 = *$tmp321;
*(&local38) = $tmp322;
org$frostlang$frostc$IR$Value** $tmp323 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp324 = *$tmp323;
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
org$frostlang$frostc$IR$Value* $tmp325 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local39) = $tmp324;
frost$core$Int64* $tmp326 = (frost$core$Int64*) (param0->$data + 24);
frost$core$Int64 $tmp327 = *$tmp326;
*(&local40) = $tmp327;
org$frostlang$frostc$Type** $tmp328 = (org$frostlang$frostc$Type**) (param0->$data + 32);
org$frostlang$frostc$Type* $tmp329 = *$tmp328;
*(&local41) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
org$frostlang$frostc$Type* $tmp330 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local41) = $tmp329;
// line 212
org$frostlang$frostc$IR$Value* $tmp331 = *(&local39);
frost$core$String* $tmp332 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s333, ((frost$core$Object*) $tmp331));
frost$core$String* $tmp334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp332, &$s335);
frost$core$Int64 $tmp336 = *(&local40);
frost$core$Int64$wrapper* $tmp337;
$tmp337 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp337->value = $tmp336;
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp334, ((frost$core$Object*) $tmp337));
frost$core$String* $tmp339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s340);
org$frostlang$frostc$Type* $tmp341 = *(&local41);
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp339, ((frost$core$Object*) $tmp341));
frost$core$String* $tmp343 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp342, &$s344);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// unreffing REF($823:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing REF($822:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// unreffing REF($819:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// unreffing REF($818:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($817:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// unreffing REF($815:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
// unreffing REF($814:frost.core.String)
org$frostlang$frostc$Type* $tmp345 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing type
*(&local41) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp346 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// unreffing value
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp343;
block27:;
frost$core$Int64 $tmp347 = (frost$core$Int64) {13};
frost$core$Bit $tmp348 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp347);
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp350 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp351 = *$tmp350;
*(&local42) = $tmp351;
org$frostlang$frostc$IR$Value** $tmp352 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp353 = *$tmp352;
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
org$frostlang$frostc$IR$Value* $tmp354 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local43) = $tmp353;
// line 215
org$frostlang$frostc$IR$Value* $tmp355 = *(&local43);
frost$core$String* $tmp356 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s357, ((frost$core$Object*) $tmp355));
frost$core$String* $tmp358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp356, &$s359);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// unreffing REF($878:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// unreffing REF($877:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp360 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
// unreffing ptr
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp358;
block29:;
frost$core$Int64 $tmp361 = (frost$core$Int64) {14};
frost$core$Bit $tmp362 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp361);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp364 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp365 = *$tmp364;
*(&local44) = $tmp365;
org$frostlang$frostc$IR$Value** $tmp366 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp367 = *$tmp366;
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
org$frostlang$frostc$IR$Value* $tmp368 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local45) = $tmp367;
// line 218
org$frostlang$frostc$IR$Value* $tmp369 = *(&local45);
frost$core$String* $tmp370 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s371, ((frost$core$Object*) $tmp369));
frost$core$String* $tmp372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp370, &$s373);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
// unreffing REF($913:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// unreffing REF($912:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp374 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
// unreffing value
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp372;
block31:;
frost$core$Int64 $tmp375 = (frost$core$Int64) {15};
frost$core$Bit $tmp376 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp375);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp378 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp379 = *$tmp378;
*(&local46) = $tmp379;
org$frostlang$frostc$IR$Value** $tmp380 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp381 = *$tmp380;
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
org$frostlang$frostc$IR$Value* $tmp382 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local47) = $tmp381;
// line 221
org$frostlang$frostc$IR$Value* $tmp383 = *(&local47);
frost$core$String* $tmp384 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s385, ((frost$core$Object*) $tmp383));
frost$core$String* $tmp386 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp384, &$s387);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// unreffing REF($948:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
// unreffing REF($947:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp388 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
// unreffing value
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp386;
block33:;
frost$core$Int64 $tmp389 = (frost$core$Int64) {16};
frost$core$Bit $tmp390 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp389);
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp392 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp393 = *$tmp392;
*(&local48) = $tmp393;
org$frostlang$frostc$IR$Value** $tmp394 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp395 = *$tmp394;
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
org$frostlang$frostc$IR$Value* $tmp396 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local49) = $tmp395;
org$frostlang$frostc$Type** $tmp397 = (org$frostlang$frostc$Type**) (param0->$data + 24);
org$frostlang$frostc$Type* $tmp398 = *$tmp397;
*(&local50) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
org$frostlang$frostc$Type* $tmp399 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local50) = $tmp398;
// line 224
org$frostlang$frostc$IR$Value* $tmp400 = *(&local49);
frost$core$String* $tmp401 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s402, ((frost$core$Object*) $tmp400));
frost$core$String* $tmp403 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp401, &$s404);
org$frostlang$frostc$Type* $tmp405 = *(&local50);
frost$core$String* $tmp406 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp403, ((frost$core$Object*) $tmp405));
frost$core$String* $tmp407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp406, &$s408);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// unreffing REF($996:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing REF($995:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing REF($992:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// unreffing REF($991:frost.core.String)
org$frostlang$frostc$Type* $tmp409 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// unreffing type
*(&local50) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp410 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
// unreffing count
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp407;
block35:;
frost$core$Int64 $tmp411 = (frost$core$Int64) {17};
frost$core$Bit $tmp412 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp411);
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp414 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp415 = *$tmp414;
*(&local51) = $tmp415;
org$frostlang$frostc$IR$Value** $tmp416 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp417 = *$tmp416;
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
org$frostlang$frostc$IR$Value* $tmp418 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local52) = $tmp417;
// line 227
org$frostlang$frostc$IR$Value* $tmp419 = *(&local52);
frost$core$String* $tmp420 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s421, ((frost$core$Object*) $tmp419));
frost$core$String* $tmp422 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp420, &$s423);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
// unreffing REF($1042:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
// unreffing REF($1041:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp424 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// unreffing ptr
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp422;
block37:;
frost$core$Int64 $tmp425 = (frost$core$Int64) {18};
frost$core$Bit $tmp426 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp425);
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp428 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp429 = *$tmp428;
*(&local53) = $tmp429;
org$frostlang$frostc$IR$Value** $tmp430 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp431 = *$tmp430;
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
org$frostlang$frostc$IR$Value* $tmp432 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local54) = $tmp431;
// line 230
org$frostlang$frostc$IR$Value* $tmp433 = *(&local54);
frost$core$String* $tmp434 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s435, ((frost$core$Object*) $tmp433));
frost$core$String* $tmp436 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp434, &$s437);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
// unreffing REF($1077:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// unreffing REF($1076:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp438 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
// unreffing ptr
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp436;
block39:;
frost$core$Int64 $tmp439 = (frost$core$Int64) {19};
frost$core$Bit $tmp440 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp439);
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp442 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp443 = *$tmp442;
*(&local55) = $tmp443;
org$frostlang$frostc$IR$Value** $tmp444 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp445 = *$tmp444;
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
org$frostlang$frostc$IR$Value* $tmp446 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local56) = $tmp445;
org$frostlang$frostc$IR$Value** $tmp447 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp448 = *$tmp447;
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
org$frostlang$frostc$IR$Value* $tmp449 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local57) = $tmp448;
// line 233
org$frostlang$frostc$IR$Value* $tmp450 = *(&local56);
frost$core$String* $tmp451 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s452, ((frost$core$Object*) $tmp450));
frost$core$String* $tmp453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp451, &$s454);
org$frostlang$frostc$IR$Value* $tmp455 = *(&local57);
frost$core$String* $tmp456 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp453, ((frost$core$Object*) $tmp455));
frost$core$String* $tmp457 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp456, &$s458);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// unreffing REF($1125:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// unreffing REF($1124:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
// unreffing REF($1121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
// unreffing REF($1120:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp459 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// unreffing index
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp460 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// unreffing ptr
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp457;
block41:;
frost$core$Int64 $tmp461 = (frost$core$Int64) {20};
frost$core$Bit $tmp462 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp461);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp464 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp465 = *$tmp464;
*(&local58) = $tmp465;
org$frostlang$frostc$IR$Value** $tmp466 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp467 = *$tmp466;
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
org$frostlang$frostc$IR$Value* $tmp468 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local59) = $tmp467;
org$frostlang$frostc$IR$Value** $tmp469 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp470 = *$tmp469;
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
org$frostlang$frostc$IR$Value* $tmp471 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local60) = $tmp470;
// line 236
org$frostlang$frostc$IR$Value* $tmp472 = *(&local59);
frost$core$String* $tmp473 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s474, ((frost$core$Object*) $tmp472));
frost$core$String* $tmp475 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp473, &$s476);
org$frostlang$frostc$IR$Value* $tmp477 = *(&local60);
frost$core$String* $tmp478 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp475, ((frost$core$Object*) $tmp477));
frost$core$String* $tmp479 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp478, &$s480);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
// unreffing REF($1184:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
// unreffing REF($1183:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing REF($1180:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
// unreffing REF($1179:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp481 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
// unreffing index
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp482 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// unreffing ptr
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp479;
block43:;
frost$core$Int64 $tmp483 = (frost$core$Int64) {21};
frost$core$Bit $tmp484 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp483);
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp486 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp487 = *$tmp486;
*(&local61) = $tmp487;
org$frostlang$frostc$IR$Value** $tmp488 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp489 = *$tmp488;
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
org$frostlang$frostc$IR$Value* $tmp490 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local62) = $tmp489;
org$frostlang$frostc$IR$Value** $tmp491 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp492 = *$tmp491;
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
org$frostlang$frostc$IR$Value* $tmp493 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
*(&local63) = $tmp492;
org$frostlang$frostc$IR$Value** $tmp494 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp495 = *$tmp494;
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
org$frostlang$frostc$IR$Value* $tmp496 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local64) = $tmp495;
// line 239
org$frostlang$frostc$IR$Value* $tmp497 = *(&local62);
frost$core$String* $tmp498 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s499, ((frost$core$Object*) $tmp497));
frost$core$String* $tmp500 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp498, &$s501);
org$frostlang$frostc$IR$Value* $tmp502 = *(&local63);
frost$core$String* $tmp503 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp500, ((frost$core$Object*) $tmp502));
frost$core$String* $tmp504 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp503, &$s505);
org$frostlang$frostc$IR$Value* $tmp506 = *(&local64);
frost$core$String* $tmp507 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp504, ((frost$core$Object*) $tmp506));
frost$core$String* $tmp508 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp507, &$s509);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// unreffing REF($1256:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// unreffing REF($1255:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
// unreffing REF($1252:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// unreffing REF($1251:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
// unreffing REF($1248:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// unreffing REF($1247:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp510 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
// unreffing newSize
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp511 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
// unreffing oldSize
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp512 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// unreffing ptr
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp508;
block45:;
frost$core$Int64 $tmp513 = (frost$core$Int64) {22};
frost$core$Bit $tmp514 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp513);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp516 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp517 = *$tmp516;
*(&local65) = $tmp517;
org$frostlang$frostc$IR$Value** $tmp518 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp519 = *$tmp518;
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
org$frostlang$frostc$IR$Value* $tmp520 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local66) = $tmp519;
org$frostlang$frostc$IR$Value** $tmp521 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp522 = *$tmp521;
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
org$frostlang$frostc$IR$Value* $tmp523 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local67) = $tmp522;
// line 242
org$frostlang$frostc$IR$Value* $tmp524 = *(&local66);
frost$core$String* $tmp525 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s526, ((frost$core$Object*) $tmp524));
frost$core$String* $tmp527 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp525, &$s528);
org$frostlang$frostc$IR$Value* $tmp529 = *(&local67);
frost$core$String* $tmp530 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp527, ((frost$core$Object*) $tmp529));
frost$core$String* $tmp531 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp530, &$s532);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
// unreffing REF($1326:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
// unreffing REF($1325:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
// unreffing REF($1322:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
// unreffing REF($1321:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp533 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
// unreffing ptr
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp534 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
// unreffing value
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp531;
block47:;
frost$core$Int64 $tmp535 = (frost$core$Int64) {23};
frost$core$Bit $tmp536 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp535);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp538 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp539 = *$tmp538;
*(&local68) = $tmp539;
org$frostlang$frostc$IR$Value** $tmp540 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp541 = *$tmp540;
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
org$frostlang$frostc$IR$Value* $tmp542 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local69) = $tmp541;
org$frostlang$frostc$IR$Value** $tmp543 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp544 = *$tmp543;
*(&local70) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
org$frostlang$frostc$IR$Value* $tmp545 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local70) = $tmp544;
org$frostlang$frostc$IR$Value** $tmp546 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp547 = *$tmp546;
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
org$frostlang$frostc$IR$Value* $tmp548 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local71) = $tmp547;
// line 245
org$frostlang$frostc$IR$Value* $tmp549 = *(&local69);
frost$core$String* $tmp550 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s551, ((frost$core$Object*) $tmp549));
frost$core$String* $tmp552 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp550, &$s553);
org$frostlang$frostc$IR$Value* $tmp554 = *(&local70);
frost$core$String* $tmp555 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp552, ((frost$core$Object*) $tmp554));
frost$core$String* $tmp556 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp555, &$s557);
org$frostlang$frostc$IR$Value* $tmp558 = *(&local71);
frost$core$String* $tmp559 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp556, ((frost$core$Object*) $tmp558));
frost$core$String* $tmp560 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp559, &$s561);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// unreffing REF($1398:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// unreffing REF($1397:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// unreffing REF($1394:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
// unreffing REF($1393:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
// unreffing REF($1390:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// unreffing REF($1389:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp562 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// unreffing index
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp563 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
// unreffing ptr
*(&local70) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp564 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// unreffing value
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp560;
block49:;
frost$core$Int64 $tmp565 = (frost$core$Int64) {24};
frost$core$Bit $tmp566 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp565);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp568 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp569 = *$tmp568;
*(&local72) = $tmp569;
org$frostlang$frostc$IR$Value** $tmp570 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp571 = *$tmp570;
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
org$frostlang$frostc$IR$Value* $tmp572 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local73) = $tmp571;
// line 248
org$frostlang$frostc$IR$Value* $tmp573 = *(&local73);
frost$core$Bit $tmp574 = frost$core$Bit$init$builtin_bit($tmp573 != NULL);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block52; else goto block53;
block52:;
// line 249
org$frostlang$frostc$IR$Value* $tmp576 = *(&local73);
frost$core$Bit $tmp577 = frost$core$Bit$init$builtin_bit($tmp576 != NULL);
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp579 = (frost$core$Int64) {249};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s580, $tmp579, &$s581);
abort(); // unreachable
block54:;
frost$core$String* $tmp582 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s583, ((frost$core$Object*) $tmp576));
frost$core$String* $tmp584 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp582, &$s585);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// unreffing REF($1468:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
// unreffing REF($1467:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp586 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// unreffing value
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp584;
block53:;
// line 251
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s587));
org$frostlang$frostc$IR$Value* $tmp588 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
// unreffing value
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
return &$s589;
block51:;
frost$core$Int64 $tmp590 = (frost$core$Int64) {25};
frost$core$Bit $tmp591 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp590);
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp593 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp594 = *$tmp593;
*(&local74) = $tmp594;
org$frostlang$frostc$MethodDecl** $tmp595 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 16);
org$frostlang$frostc$MethodDecl* $tmp596 = *$tmp595;
*(&local75) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
org$frostlang$frostc$MethodDecl* $tmp597 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local75) = $tmp596;
org$frostlang$frostc$FixedArray** $tmp598 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp599 = *$tmp598;
*(&local76) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
org$frostlang$frostc$FixedArray* $tmp600 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local76) = $tmp599;
// line 254
org$frostlang$frostc$MethodDecl* $tmp601 = *(&local75);
frost$core$String* $tmp602 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp601);
frost$core$String* $tmp603 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s604, $tmp602);
frost$core$String* $tmp605 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp603, &$s606);
org$frostlang$frostc$FixedArray* $tmp607 = *(&local76);
ITable* $tmp608 = ((frost$collections$CollectionView*) $tmp607)->$class->itable;
while ($tmp608->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp608 = $tmp608->next;
}
$fn610 $tmp609 = $tmp608->methods[1];
frost$core$String* $tmp611 = $tmp609(((frost$collections$CollectionView*) $tmp607));
frost$core$String* $tmp612 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp605, $tmp611);
frost$core$String* $tmp613 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp612, &$s614);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// unreffing REF($1527:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
// unreffing REF($1526:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
// unreffing REF($1525:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
// unreffing REF($1521:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
// unreffing REF($1520:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
// unreffing REF($1519:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp615 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing args
*(&local76) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp616 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
// unreffing m
*(&local75) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp613;
block57:;
frost$core$Int64 $tmp617 = (frost$core$Int64) {26};
frost$core$Bit $tmp618 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp617);
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp620 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp621 = *$tmp620;
*(&local77) = $tmp621;
org$frostlang$frostc$IR$Value** $tmp622 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp623 = *$tmp622;
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
org$frostlang$frostc$IR$Value* $tmp624 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
*(&local78) = $tmp623;
org$frostlang$frostc$IR$Value** $tmp625 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp626 = *$tmp625;
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
org$frostlang$frostc$IR$Value* $tmp627 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local79) = $tmp626;
// line 257
org$frostlang$frostc$IR$Value* $tmp628 = *(&local78);
frost$core$String* $tmp629 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s630, ((frost$core$Object*) $tmp628));
frost$core$String* $tmp631 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp629, &$s632);
org$frostlang$frostc$IR$Value* $tmp633 = *(&local79);
frost$core$String* $tmp634 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp631, ((frost$core$Object*) $tmp633));
frost$core$String* $tmp635 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp634, &$s636);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
// unreffing REF($1592:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// unreffing REF($1591:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing REF($1588:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing REF($1587:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp637 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
// unreffing ptr
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp638 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
// unreffing value
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp635;
block59:;
frost$core$Int64 $tmp639 = (frost$core$Int64) {27};
frost$core$Bit $tmp640 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp639);
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block60; else goto block1;
block60:;
org$frostlang$frostc$Position* $tmp642 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp643 = *$tmp642;
*(&local80) = $tmp643;
// line 260
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s644));
return &$s645;
block1:;
frost$core$Bit $tmp646 = frost$core$Bit$init$builtin_bit(false);
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp648 = (frost$core$Int64) {173};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s649, $tmp648, &$s650);
abort(); // unreachable
block61:;
abort(); // unreachable

}
void org$frostlang$frostc$IR$Statement$cleanup(org$frostlang$frostc$IR$Statement* param0) {

org$frostlang$frostc$Position local0;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$expression$Binary$Operator local2;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Position local5;
org$frostlang$frostc$IR$Block$ID local6;
org$frostlang$frostc$Position local7;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
frost$core$String* local10 = NULL;
org$frostlang$frostc$Position local11;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$ChoiceCase* local13 = NULL;
frost$core$Int64 local14;
org$frostlang$frostc$Position local15;
org$frostlang$frostc$IR$Value* local16 = NULL;
org$frostlang$frostc$IR$Block$ID local17;
org$frostlang$frostc$IR$Block$ID local18;
org$frostlang$frostc$Position local19;
org$frostlang$frostc$ClassDecl* local20 = NULL;
org$frostlang$frostc$Position local21;
org$frostlang$frostc$ClassDecl* local22 = NULL;
org$frostlang$frostc$FixedArray* local23 = NULL;
org$frostlang$frostc$Position local24;
org$frostlang$frostc$IR$Value* local25 = NULL;
org$frostlang$frostc$FixedArray* local26 = NULL;
org$frostlang$frostc$Position local27;
org$frostlang$frostc$IR$Value* local28 = NULL;
org$frostlang$frostc$FieldDecl* local29 = NULL;
org$frostlang$frostc$Position local30;
org$frostlang$frostc$IR$Value* local31 = NULL;
org$frostlang$frostc$FieldDecl* local32 = NULL;
org$frostlang$frostc$Position local33;
org$frostlang$frostc$IR$Value* local34 = NULL;
frost$core$Int64 local35;
org$frostlang$frostc$Type* local36 = NULL;
org$frostlang$frostc$Position local37;
org$frostlang$frostc$IR$Value* local38 = NULL;
org$frostlang$frostc$ClassDecl* local39 = NULL;
frost$core$Int64 local40;
org$frostlang$frostc$Type* local41 = NULL;
org$frostlang$frostc$Position local42;
org$frostlang$frostc$IR$Value* local43 = NULL;
org$frostlang$frostc$Position local44;
org$frostlang$frostc$IR$Value* local45 = NULL;
org$frostlang$frostc$Position local46;
org$frostlang$frostc$IR$Value* local47 = NULL;
org$frostlang$frostc$Position local48;
org$frostlang$frostc$IR$Value* local49 = NULL;
org$frostlang$frostc$Type* local50 = NULL;
org$frostlang$frostc$Position local51;
org$frostlang$frostc$IR$Value* local52 = NULL;
org$frostlang$frostc$Position local53;
org$frostlang$frostc$IR$Value* local54 = NULL;
org$frostlang$frostc$Position local55;
org$frostlang$frostc$IR$Value* local56 = NULL;
org$frostlang$frostc$IR$Value* local57 = NULL;
org$frostlang$frostc$Position local58;
org$frostlang$frostc$IR$Value* local59 = NULL;
org$frostlang$frostc$IR$Value* local60 = NULL;
org$frostlang$frostc$Position local61;
org$frostlang$frostc$IR$Value* local62 = NULL;
org$frostlang$frostc$IR$Value* local63 = NULL;
org$frostlang$frostc$IR$Value* local64 = NULL;
org$frostlang$frostc$Position local65;
org$frostlang$frostc$IR$Value* local66 = NULL;
org$frostlang$frostc$IR$Value* local67 = NULL;
org$frostlang$frostc$Position local68;
org$frostlang$frostc$IR$Value* local69 = NULL;
org$frostlang$frostc$IR$Value* local70 = NULL;
org$frostlang$frostc$IR$Value* local71 = NULL;
org$frostlang$frostc$Position local72;
org$frostlang$frostc$IR$Value* local73 = NULL;
org$frostlang$frostc$Position local74;
org$frostlang$frostc$MethodDecl* local75 = NULL;
org$frostlang$frostc$FixedArray* local76 = NULL;
org$frostlang$frostc$Position local77;
org$frostlang$frostc$IR$Value* local78 = NULL;
org$frostlang$frostc$IR$Value* local79 = NULL;
org$frostlang$frostc$Position local80;
// line 6
frost$core$Int64* $tmp651 = &param0->$rawValue;
frost$core$Int64 $tmp652 = *$tmp651;
frost$core$Int64 $tmp653 = (frost$core$Int64) {0};
frost$core$Bit $tmp654 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp653);
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp656 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp657 = *$tmp656;
*(&local0) = $tmp657;
org$frostlang$frostc$IR$Value** $tmp658 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp659 = *$tmp658;
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
org$frostlang$frostc$IR$Value* $tmp660 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
*(&local1) = $tmp659;
org$frostlang$frostc$expression$Binary$Operator* $tmp661 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp662 = *$tmp661;
*(&local2) = $tmp662;
org$frostlang$frostc$IR$Value** $tmp663 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp664 = *$tmp663;
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
org$frostlang$frostc$IR$Value* $tmp665 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local3) = $tmp664;
org$frostlang$frostc$Type** $tmp666 = (org$frostlang$frostc$Type**) (param0->$data + 40);
org$frostlang$frostc$Type* $tmp667 = *$tmp666;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
org$frostlang$frostc$Type* $tmp668 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
*(&local4) = $tmp667;
// line 1
org$frostlang$frostc$IR$Value* $tmp669 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
// line 1
org$frostlang$frostc$IR$Value* $tmp670 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// line 1
org$frostlang$frostc$Type* $tmp671 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
org$frostlang$frostc$Type* $tmp672 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
// unreffing _f4
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp673 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
// unreffing _f3
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp674 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
// unreffing _f1
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp675 = (frost$core$Int64) {1};
frost$core$Bit $tmp676 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp675);
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp678 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp679 = *$tmp678;
*(&local5) = $tmp679;
org$frostlang$frostc$IR$Block$ID* $tmp680 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp681 = *$tmp680;
*(&local6) = $tmp681;
goto block1;
block5:;
frost$core$Int64 $tmp682 = (frost$core$Int64) {2};
frost$core$Bit $tmp683 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp682);
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp685 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp686 = *$tmp685;
*(&local7) = $tmp686;
org$frostlang$frostc$IR$Value** $tmp687 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp688 = *$tmp687;
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
org$frostlang$frostc$IR$Value* $tmp689 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local8) = $tmp688;
org$frostlang$frostc$Type** $tmp690 = (org$frostlang$frostc$Type**) (param0->$data + 24);
org$frostlang$frostc$Type* $tmp691 = *$tmp690;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
org$frostlang$frostc$Type* $tmp692 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local9) = $tmp691;
// line 1
org$frostlang$frostc$IR$Value* $tmp693 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
// line 1
org$frostlang$frostc$Type* $tmp694 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
org$frostlang$frostc$Type* $tmp695 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
// unreffing _f2
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp696 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing _f1
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp697 = (frost$core$Int64) {3};
frost$core$Bit $tmp698 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp697);
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block8; else goto block9;
block8:;
frost$core$String** $tmp700 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp701 = *$tmp700;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$String* $tmp702 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local10) = $tmp701;
// line 1
frost$core$String* $tmp703 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$String* $tmp704 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
// unreffing _f0
*(&local10) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp705 = (frost$core$Int64) {4};
frost$core$Bit $tmp706 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp705);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp708 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp709 = *$tmp708;
*(&local11) = $tmp709;
org$frostlang$frostc$IR$Value** $tmp710 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp711 = *$tmp710;
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
org$frostlang$frostc$IR$Value* $tmp712 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local12) = $tmp711;
org$frostlang$frostc$ChoiceCase** $tmp713 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp714 = *$tmp713;
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
org$frostlang$frostc$ChoiceCase* $tmp715 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
*(&local13) = $tmp714;
frost$core$Int64* $tmp716 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp717 = *$tmp716;
*(&local14) = $tmp717;
// line 1
org$frostlang$frostc$IR$Value* $tmp718 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
// line 1
org$frostlang$frostc$ChoiceCase* $tmp719 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
org$frostlang$frostc$ChoiceCase* $tmp720 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// unreffing _f2
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$IR$Value* $tmp721 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
// unreffing _f1
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block11:;
frost$core$Int64 $tmp722 = (frost$core$Int64) {5};
frost$core$Bit $tmp723 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp722);
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp725 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp726 = *$tmp725;
*(&local15) = $tmp726;
org$frostlang$frostc$IR$Value** $tmp727 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp728 = *$tmp727;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
org$frostlang$frostc$IR$Value* $tmp729 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local16) = $tmp728;
org$frostlang$frostc$IR$Block$ID* $tmp730 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp731 = *$tmp730;
*(&local17) = $tmp731;
org$frostlang$frostc$IR$Block$ID* $tmp732 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp733 = *$tmp732;
*(&local18) = $tmp733;
// line 1
org$frostlang$frostc$IR$Value* $tmp734 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
org$frostlang$frostc$IR$Value* $tmp735 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// unreffing _f1
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp736 = (frost$core$Int64) {6};
frost$core$Bit $tmp737 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp736);
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp739 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp740 = *$tmp739;
*(&local19) = $tmp740;
org$frostlang$frostc$ClassDecl** $tmp741 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp742 = *$tmp741;
*(&local20) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
org$frostlang$frostc$ClassDecl* $tmp743 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local20) = $tmp742;
// line 1
org$frostlang$frostc$ClassDecl* $tmp744 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
org$frostlang$frostc$ClassDecl* $tmp745 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
// unreffing _f1
*(&local20) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block15:;
frost$core$Int64 $tmp746 = (frost$core$Int64) {7};
frost$core$Bit $tmp747 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp746);
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp749 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp750 = *$tmp749;
*(&local21) = $tmp750;
org$frostlang$frostc$ClassDecl** $tmp751 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp752 = *$tmp751;
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
org$frostlang$frostc$ClassDecl* $tmp753 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local22) = $tmp752;
org$frostlang$frostc$FixedArray** $tmp754 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp755 = *$tmp754;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
org$frostlang$frostc$FixedArray* $tmp756 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local23) = $tmp755;
// line 1
org$frostlang$frostc$ClassDecl* $tmp757 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
// line 1
org$frostlang$frostc$FixedArray* $tmp758 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
org$frostlang$frostc$FixedArray* $tmp759 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// unreffing _f2
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp760 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
// unreffing _f1
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp761 = (frost$core$Int64) {8};
frost$core$Bit $tmp762 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp761);
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp764 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp765 = *$tmp764;
*(&local24) = $tmp765;
org$frostlang$frostc$IR$Value** $tmp766 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp767 = *$tmp766;
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
org$frostlang$frostc$IR$Value* $tmp768 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local25) = $tmp767;
org$frostlang$frostc$FixedArray** $tmp769 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp770 = *$tmp769;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
org$frostlang$frostc$FixedArray* $tmp771 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local26) = $tmp770;
// line 1
org$frostlang$frostc$IR$Value* $tmp772 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
// line 1
org$frostlang$frostc$FixedArray* $tmp773 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
org$frostlang$frostc$FixedArray* $tmp774 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// unreffing _f2
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp775 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
// unreffing _f1
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp776 = (frost$core$Int64) {9};
frost$core$Bit $tmp777 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp776);
bool $tmp778 = $tmp777.value;
if ($tmp778) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp779 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp780 = *$tmp779;
*(&local27) = $tmp780;
org$frostlang$frostc$IR$Value** $tmp781 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp782 = *$tmp781;
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
org$frostlang$frostc$IR$Value* $tmp783 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local28) = $tmp782;
org$frostlang$frostc$FieldDecl** $tmp784 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp785 = *$tmp784;
*(&local29) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
org$frostlang$frostc$FieldDecl* $tmp786 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
*(&local29) = $tmp785;
// line 1
org$frostlang$frostc$IR$Value* $tmp787 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
// line 1
org$frostlang$frostc$FieldDecl* $tmp788 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
org$frostlang$frostc$FieldDecl* $tmp789 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
// unreffing _f2
*(&local29) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp790 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
// unreffing _f1
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp791 = (frost$core$Int64) {10};
frost$core$Bit $tmp792 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp791);
bool $tmp793 = $tmp792.value;
if ($tmp793) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp794 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp795 = *$tmp794;
*(&local30) = $tmp795;
org$frostlang$frostc$IR$Value** $tmp796 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp797 = *$tmp796;
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
org$frostlang$frostc$IR$Value* $tmp798 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local31) = $tmp797;
org$frostlang$frostc$FieldDecl** $tmp799 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp800 = *$tmp799;
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
org$frostlang$frostc$FieldDecl* $tmp801 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
*(&local32) = $tmp800;
// line 1
org$frostlang$frostc$IR$Value* $tmp802 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
// line 1
org$frostlang$frostc$FieldDecl* $tmp803 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
org$frostlang$frostc$FieldDecl* $tmp804 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// unreffing _f2
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp805 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
// unreffing _f1
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp806 = (frost$core$Int64) {11};
frost$core$Bit $tmp807 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp806);
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp809 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp810 = *$tmp809;
*(&local33) = $tmp810;
org$frostlang$frostc$IR$Value** $tmp811 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp812 = *$tmp811;
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
org$frostlang$frostc$IR$Value* $tmp813 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
*(&local34) = $tmp812;
frost$core$Int64* $tmp814 = (frost$core$Int64*) (param0->$data + 24);
frost$core$Int64 $tmp815 = *$tmp814;
*(&local35) = $tmp815;
org$frostlang$frostc$Type** $tmp816 = (org$frostlang$frostc$Type**) (param0->$data + 32);
org$frostlang$frostc$Type* $tmp817 = *$tmp816;
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
org$frostlang$frostc$Type* $tmp818 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local36) = $tmp817;
// line 1
org$frostlang$frostc$IR$Value* $tmp819 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
// line 1
org$frostlang$frostc$Type* $tmp820 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
org$frostlang$frostc$Type* $tmp821 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
// unreffing _f3
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp822 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing _f1
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp823 = (frost$core$Int64) {12};
frost$core$Bit $tmp824 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp823);
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp826 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp827 = *$tmp826;
*(&local37) = $tmp827;
org$frostlang$frostc$IR$Value** $tmp828 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp829 = *$tmp828;
*(&local38) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
org$frostlang$frostc$IR$Value* $tmp830 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local38) = $tmp829;
org$frostlang$frostc$ClassDecl** $tmp831 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp832 = *$tmp831;
*(&local39) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
org$frostlang$frostc$ClassDecl* $tmp833 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local39) = $tmp832;
frost$core$Int64* $tmp834 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp835 = *$tmp834;
*(&local40) = $tmp835;
org$frostlang$frostc$Type** $tmp836 = (org$frostlang$frostc$Type**) (param0->$data + 40);
org$frostlang$frostc$Type* $tmp837 = *$tmp836;
*(&local41) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
org$frostlang$frostc$Type* $tmp838 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
*(&local41) = $tmp837;
// line 1
org$frostlang$frostc$IR$Value* $tmp839 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// line 1
org$frostlang$frostc$ClassDecl* $tmp840 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// line 1
org$frostlang$frostc$Type* $tmp841 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
org$frostlang$frostc$Type* $tmp842 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing _f4
*(&local41) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp843 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// unreffing _f2
*(&local39) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp844 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing _f1
*(&local38) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp845 = (frost$core$Int64) {13};
frost$core$Bit $tmp846 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp845);
bool $tmp847 = $tmp846.value;
if ($tmp847) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp848 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp849 = *$tmp848;
*(&local42) = $tmp849;
org$frostlang$frostc$IR$Value** $tmp850 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp851 = *$tmp850;
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
org$frostlang$frostc$IR$Value* $tmp852 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local43) = $tmp851;
// line 1
org$frostlang$frostc$IR$Value* $tmp853 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
org$frostlang$frostc$IR$Value* $tmp854 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// unreffing _f1
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp855 = (frost$core$Int64) {14};
frost$core$Bit $tmp856 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp855);
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp858 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp859 = *$tmp858;
*(&local44) = $tmp859;
org$frostlang$frostc$IR$Value** $tmp860 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp861 = *$tmp860;
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
org$frostlang$frostc$IR$Value* $tmp862 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local45) = $tmp861;
// line 1
org$frostlang$frostc$IR$Value* $tmp863 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
org$frostlang$frostc$IR$Value* $tmp864 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
// unreffing _f1
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block31:;
frost$core$Int64 $tmp865 = (frost$core$Int64) {15};
frost$core$Bit $tmp866 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp865);
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp868 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp869 = *$tmp868;
*(&local46) = $tmp869;
org$frostlang$frostc$IR$Value** $tmp870 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp871 = *$tmp870;
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
org$frostlang$frostc$IR$Value* $tmp872 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local47) = $tmp871;
// line 1
org$frostlang$frostc$IR$Value* $tmp873 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
org$frostlang$frostc$IR$Value* $tmp874 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
// unreffing _f1
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block33:;
frost$core$Int64 $tmp875 = (frost$core$Int64) {16};
frost$core$Bit $tmp876 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp875);
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp878 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp879 = *$tmp878;
*(&local48) = $tmp879;
org$frostlang$frostc$IR$Value** $tmp880 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp881 = *$tmp880;
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
org$frostlang$frostc$IR$Value* $tmp882 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local49) = $tmp881;
org$frostlang$frostc$Type** $tmp883 = (org$frostlang$frostc$Type**) (param0->$data + 24);
org$frostlang$frostc$Type* $tmp884 = *$tmp883;
*(&local50) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
org$frostlang$frostc$Type* $tmp885 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local50) = $tmp884;
// line 1
org$frostlang$frostc$IR$Value* $tmp886 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
// line 1
org$frostlang$frostc$Type* $tmp887 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
org$frostlang$frostc$Type* $tmp888 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// unreffing _f2
*(&local50) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp889 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// unreffing _f1
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block35:;
frost$core$Int64 $tmp890 = (frost$core$Int64) {17};
frost$core$Bit $tmp891 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp890);
bool $tmp892 = $tmp891.value;
if ($tmp892) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp893 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp894 = *$tmp893;
*(&local51) = $tmp894;
org$frostlang$frostc$IR$Value** $tmp895 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp896 = *$tmp895;
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
org$frostlang$frostc$IR$Value* $tmp897 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local52) = $tmp896;
// line 1
org$frostlang$frostc$IR$Value* $tmp898 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
org$frostlang$frostc$IR$Value* $tmp899 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// unreffing _f1
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block37:;
frost$core$Int64 $tmp900 = (frost$core$Int64) {18};
frost$core$Bit $tmp901 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp900);
bool $tmp902 = $tmp901.value;
if ($tmp902) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp903 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp904 = *$tmp903;
*(&local53) = $tmp904;
org$frostlang$frostc$IR$Value** $tmp905 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp906 = *$tmp905;
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
org$frostlang$frostc$IR$Value* $tmp907 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
*(&local54) = $tmp906;
// line 1
org$frostlang$frostc$IR$Value* $tmp908 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
org$frostlang$frostc$IR$Value* $tmp909 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
// unreffing _f1
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block39:;
frost$core$Int64 $tmp910 = (frost$core$Int64) {19};
frost$core$Bit $tmp911 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp910);
bool $tmp912 = $tmp911.value;
if ($tmp912) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp913 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp914 = *$tmp913;
*(&local55) = $tmp914;
org$frostlang$frostc$IR$Value** $tmp915 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp916 = *$tmp915;
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
org$frostlang$frostc$IR$Value* $tmp917 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
*(&local56) = $tmp916;
org$frostlang$frostc$IR$Value** $tmp918 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp919 = *$tmp918;
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
org$frostlang$frostc$IR$Value* $tmp920 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
*(&local57) = $tmp919;
// line 1
org$frostlang$frostc$IR$Value* $tmp921 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
// line 1
org$frostlang$frostc$IR$Value* $tmp922 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
org$frostlang$frostc$IR$Value* $tmp923 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
// unreffing _f2
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp924 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
// unreffing _f1
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block41:;
frost$core$Int64 $tmp925 = (frost$core$Int64) {20};
frost$core$Bit $tmp926 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp925);
bool $tmp927 = $tmp926.value;
if ($tmp927) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp928 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp929 = *$tmp928;
*(&local58) = $tmp929;
org$frostlang$frostc$IR$Value** $tmp930 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp931 = *$tmp930;
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
org$frostlang$frostc$IR$Value* $tmp932 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
*(&local59) = $tmp931;
org$frostlang$frostc$IR$Value** $tmp933 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp934 = *$tmp933;
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
org$frostlang$frostc$IR$Value* $tmp935 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local60) = $tmp934;
// line 1
org$frostlang$frostc$IR$Value* $tmp936 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
// line 1
org$frostlang$frostc$IR$Value* $tmp937 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
org$frostlang$frostc$IR$Value* $tmp938 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
// unreffing _f2
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp939 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
// unreffing _f1
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block43:;
frost$core$Int64 $tmp940 = (frost$core$Int64) {21};
frost$core$Bit $tmp941 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp940);
bool $tmp942 = $tmp941.value;
if ($tmp942) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp943 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp944 = *$tmp943;
*(&local61) = $tmp944;
org$frostlang$frostc$IR$Value** $tmp945 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp946 = *$tmp945;
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
org$frostlang$frostc$IR$Value* $tmp947 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
*(&local62) = $tmp946;
org$frostlang$frostc$IR$Value** $tmp948 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp949 = *$tmp948;
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
org$frostlang$frostc$IR$Value* $tmp950 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
*(&local63) = $tmp949;
org$frostlang$frostc$IR$Value** $tmp951 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp952 = *$tmp951;
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
org$frostlang$frostc$IR$Value* $tmp953 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
*(&local64) = $tmp952;
// line 1
org$frostlang$frostc$IR$Value* $tmp954 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
// line 1
org$frostlang$frostc$IR$Value* $tmp955 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// line 1
org$frostlang$frostc$IR$Value* $tmp956 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
org$frostlang$frostc$IR$Value* $tmp957 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing _f3
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp958 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing _f2
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp959 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// unreffing _f1
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block45:;
frost$core$Int64 $tmp960 = (frost$core$Int64) {22};
frost$core$Bit $tmp961 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp960);
bool $tmp962 = $tmp961.value;
if ($tmp962) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp963 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp964 = *$tmp963;
*(&local65) = $tmp964;
org$frostlang$frostc$IR$Value** $tmp965 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp966 = *$tmp965;
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
org$frostlang$frostc$IR$Value* $tmp967 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
*(&local66) = $tmp966;
org$frostlang$frostc$IR$Value** $tmp968 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp969 = *$tmp968;
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
org$frostlang$frostc$IR$Value* $tmp970 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
*(&local67) = $tmp969;
// line 1
org$frostlang$frostc$IR$Value* $tmp971 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
// line 1
org$frostlang$frostc$IR$Value* $tmp972 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
org$frostlang$frostc$IR$Value* $tmp973 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
// unreffing _f2
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp974 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
// unreffing _f1
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block47:;
frost$core$Int64 $tmp975 = (frost$core$Int64) {23};
frost$core$Bit $tmp976 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp975);
bool $tmp977 = $tmp976.value;
if ($tmp977) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp978 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp979 = *$tmp978;
*(&local68) = $tmp979;
org$frostlang$frostc$IR$Value** $tmp980 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp981 = *$tmp980;
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
org$frostlang$frostc$IR$Value* $tmp982 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
*(&local69) = $tmp981;
org$frostlang$frostc$IR$Value** $tmp983 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp984 = *$tmp983;
*(&local70) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
org$frostlang$frostc$IR$Value* $tmp985 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
*(&local70) = $tmp984;
org$frostlang$frostc$IR$Value** $tmp986 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp987 = *$tmp986;
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
org$frostlang$frostc$IR$Value* $tmp988 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
*(&local71) = $tmp987;
// line 1
org$frostlang$frostc$IR$Value* $tmp989 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
// line 1
org$frostlang$frostc$IR$Value* $tmp990 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
// line 1
org$frostlang$frostc$IR$Value* $tmp991 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
org$frostlang$frostc$IR$Value* $tmp992 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
// unreffing _f3
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp993 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
// unreffing _f2
*(&local70) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp994 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
// unreffing _f1
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block49:;
frost$core$Int64 $tmp995 = (frost$core$Int64) {24};
frost$core$Bit $tmp996 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp995);
bool $tmp997 = $tmp996.value;
if ($tmp997) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp998 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp999 = *$tmp998;
*(&local72) = $tmp999;
org$frostlang$frostc$IR$Value** $tmp1000 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp1001 = *$tmp1000;
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
org$frostlang$frostc$IR$Value* $tmp1002 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local73) = $tmp1001;
// line 1
org$frostlang$frostc$IR$Value* $tmp1003 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
org$frostlang$frostc$IR$Value* $tmp1004 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
// unreffing _f1
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block51:;
frost$core$Int64 $tmp1005 = (frost$core$Int64) {25};
frost$core$Bit $tmp1006 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp1005);
bool $tmp1007 = $tmp1006.value;
if ($tmp1007) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp1008 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1009 = *$tmp1008;
*(&local74) = $tmp1009;
org$frostlang$frostc$MethodDecl** $tmp1010 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 16);
org$frostlang$frostc$MethodDecl* $tmp1011 = *$tmp1010;
*(&local75) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
org$frostlang$frostc$MethodDecl* $tmp1012 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
*(&local75) = $tmp1011;
org$frostlang$frostc$FixedArray** $tmp1013 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1014 = *$tmp1013;
*(&local76) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
org$frostlang$frostc$FixedArray* $tmp1015 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
*(&local76) = $tmp1014;
// line 1
org$frostlang$frostc$MethodDecl* $tmp1016 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
// line 1
org$frostlang$frostc$FixedArray* $tmp1017 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
org$frostlang$frostc$FixedArray* $tmp1018 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// unreffing _f2
*(&local76) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1019 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
// unreffing _f1
*(&local75) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block53:;
frost$core$Int64 $tmp1020 = (frost$core$Int64) {26};
frost$core$Bit $tmp1021 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp1020);
bool $tmp1022 = $tmp1021.value;
if ($tmp1022) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp1023 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1024 = *$tmp1023;
*(&local77) = $tmp1024;
org$frostlang$frostc$IR$Value** $tmp1025 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp1026 = *$tmp1025;
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
org$frostlang$frostc$IR$Value* $tmp1027 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
*(&local78) = $tmp1026;
org$frostlang$frostc$IR$Value** $tmp1028 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1029 = *$tmp1028;
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
org$frostlang$frostc$IR$Value* $tmp1030 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local79) = $tmp1029;
// line 1
org$frostlang$frostc$IR$Value* $tmp1031 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
// line 1
org$frostlang$frostc$IR$Value* $tmp1032 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
org$frostlang$frostc$IR$Value* $tmp1033 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
// unreffing _f2
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1034 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
// unreffing _f1
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block55:;
frost$core$Int64 $tmp1035 = (frost$core$Int64) {27};
frost$core$Bit $tmp1036 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp652, $tmp1035);
bool $tmp1037 = $tmp1036.value;
if ($tmp1037) goto block56; else goto block1;
block56:;
org$frostlang$frostc$Position* $tmp1038 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1039 = *$tmp1038;
*(&local80) = $tmp1039;
goto block1;
block1:;
// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$expression$Binary$Operator param4, org$frostlang$frostc$IR$Value* param5, org$frostlang$frostc$Type* param6) {

// line 6
frost$core$Int64* $tmp1040 = &param0->$rawValue;
*$tmp1040 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1041 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1041 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1042 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1042 = param3;
// line 6
org$frostlang$frostc$expression$Binary$Operator* $tmp1043 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
*$tmp1043 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$IR$Value** $tmp1044 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
*$tmp1044 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$Type** $tmp1045 = (org$frostlang$frostc$Type**) (param0->$data + 40);
*$tmp1045 = param6;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Block$ID param3) {

// line 6
frost$core$Int64* $tmp1046 = &param0->$rawValue;
*$tmp1046 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1047 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1047 = param2;
// line 6
org$frostlang$frostc$IR$Block$ID* $tmp1048 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
*$tmp1048 = param3;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$Type* param4) {

// line 6
frost$core$Int64* $tmp1049 = &param0->$rawValue;
*$tmp1049 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1050 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1050 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1051 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1051 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Type** $tmp1052 = (org$frostlang$frostc$Type**) (param0->$data + 24);
*$tmp1052 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$frost$core$String(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 6
frost$core$Int64* $tmp1053 = &param0->$rawValue;
*$tmp1053 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp1054 = (frost$core$String**) (param0->$data + 0);
*$tmp1054 = param2;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

// line 6
frost$core$Int64* $tmp1055 = &param0->$rawValue;
*$tmp1055 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1056 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1056 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1057 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1057 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp1058 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
*$tmp1058 = param4;
// line 6
frost$core$Int64* $tmp1059 = (frost$core$Int64*) (param0->$data + 32);
*$tmp1059 = param5;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$IR$Block$ID param4, org$frostlang$frostc$IR$Block$ID param5) {

// line 6
frost$core$Int64* $tmp1060 = &param0->$rawValue;
*$tmp1060 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1061 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1061 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1062 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1062 = param3;
// line 6
org$frostlang$frostc$IR$Block$ID* $tmp1063 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
*$tmp1063 = param4;
// line 6
org$frostlang$frostc$IR$Block$ID* $tmp1064 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 32);
*$tmp1064 = param5;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ClassDecl* param3) {

// line 6
frost$core$Int64* $tmp1065 = &param0->$rawValue;
*$tmp1065 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1066 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1066 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ClassDecl** $tmp1067 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 16);
*$tmp1067 = param3;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp1068 = &param0->$rawValue;
*$tmp1068 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1069 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1069 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ClassDecl** $tmp1070 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 16);
*$tmp1070 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp1071 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp1071 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp1072 = &param0->$rawValue;
*$tmp1072 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1073 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1073 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1074 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1074 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp1075 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp1075 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {

// line 6
frost$core$Int64* $tmp1076 = &param0->$rawValue;
*$tmp1076 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1077 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1077 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1078 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1078 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FieldDecl** $tmp1079 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 24);
*$tmp1079 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, frost$core$Int64 param4, org$frostlang$frostc$Type* param5) {

// line 6
frost$core$Int64* $tmp1080 = &param0->$rawValue;
*$tmp1080 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1081 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1081 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1082 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1082 = param3;
// line 6
frost$core$Int64* $tmp1083 = (frost$core$Int64*) (param0->$data + 24);
*$tmp1083 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$Type** $tmp1084 = (org$frostlang$frostc$Type**) (param0->$data + 32);
*$tmp1084 = param5;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ClassDecl* param4, frost$core$Int64 param5, org$frostlang$frostc$Type* param6) {

// line 6
frost$core$Int64* $tmp1085 = &param0->$rawValue;
*$tmp1085 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1086 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1086 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1087 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1087 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ClassDecl** $tmp1088 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 24);
*$tmp1088 = param4;
// line 6
frost$core$Int64* $tmp1089 = (frost$core$Int64*) (param0->$data + 32);
*$tmp1089 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$Type** $tmp1090 = (org$frostlang$frostc$Type**) (param0->$data + 40);
*$tmp1090 = param6;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// line 6
frost$core$Int64* $tmp1091 = &param0->$rawValue;
*$tmp1091 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1092 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1092 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1093 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1093 = param3;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$IR$Value* param4) {

// line 6
frost$core$Int64* $tmp1094 = &param0->$rawValue;
*$tmp1094 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1095 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1095 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1096 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1096 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value** $tmp1097 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1097 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$IR$Value* param4, org$frostlang$frostc$IR$Value* param5) {

// line 6
frost$core$Int64* $tmp1098 = &param0->$rawValue;
*$tmp1098 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1099 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1099 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1100 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1100 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value** $tmp1101 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1101 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$IR$Value** $tmp1102 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
*$tmp1102 = param5;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// line 6
frost$core$Int64* $tmp1103 = &param0->$rawValue;
*$tmp1103 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1104 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1104 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1105 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1105 = param3;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$MethodDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp1106 = &param0->$rawValue;
*$tmp1106 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1107 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1107 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp1108 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 16);
*$tmp1108 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp1109 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp1109 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2) {

// line 6
frost$core$Int64* $tmp1110 = &param0->$rawValue;
*$tmp1110 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1111 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1111 = param2;
return;

}

