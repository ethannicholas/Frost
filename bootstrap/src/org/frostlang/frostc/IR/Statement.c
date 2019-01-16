#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
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
org$frostlang$frostc$IR$Statement$class_type org$frostlang$frostc$IR$Statement$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$Statement$convert$R$frost$core$String, org$frostlang$frostc$IR$Statement$cleanup} };

typedef frost$core$String* (*$fn175)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn605)(frost$collections$CollectionView*);

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
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s599 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x5f\x63\x61\x6c\x6c\x20", 12, 6127247738107404280, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x6f\x72\x65\x20", 6, 2282368251290, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 95, 3983440175905457801, NULL };

frost$core$String* org$frostlang$frostc$IR$Statement$convert$R$frost$core$String(org$frostlang$frostc$IR$Statement* param0) {

org$frostlang$frostc$Position local0;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$parser$Token$Kind local2;
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
org$frostlang$frostc$parser$Token$Kind* $tmp12 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp13 = *$tmp12;
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
org$frostlang$frostc$parser$Token$Kind $tmp25 = *(&local2);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp26;
$tmp26 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
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
frost$core$String* $tmp577 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s578, ((frost$core$Object*) $tmp576));
frost$core$String* $tmp579 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp577, &$s580);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
// unreffing REF($1461:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
// unreffing REF($1460:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp581 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
// unreffing value
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp579;
block53:;
// line 251
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s582));
org$frostlang$frostc$IR$Value* $tmp583 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
// unreffing value
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
return &$s584;
block51:;
frost$core$Int64 $tmp585 = (frost$core$Int64) {25};
frost$core$Bit $tmp586 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp585);
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp588 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp589 = *$tmp588;
*(&local74) = $tmp589;
org$frostlang$frostc$MethodDecl** $tmp590 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 16);
org$frostlang$frostc$MethodDecl* $tmp591 = *$tmp590;
*(&local75) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
org$frostlang$frostc$MethodDecl* $tmp592 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
*(&local75) = $tmp591;
org$frostlang$frostc$FixedArray** $tmp593 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp594 = *$tmp593;
*(&local76) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
org$frostlang$frostc$FixedArray* $tmp595 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local76) = $tmp594;
// line 254
org$frostlang$frostc$MethodDecl* $tmp596 = *(&local75);
frost$core$String* $tmp597 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp596);
frost$core$String* $tmp598 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s599, $tmp597);
frost$core$String* $tmp600 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp598, &$s601);
org$frostlang$frostc$FixedArray* $tmp602 = *(&local76);
ITable* $tmp603 = ((frost$collections$CollectionView*) $tmp602)->$class->itable;
while ($tmp603->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp603 = $tmp603->next;
}
$fn605 $tmp604 = $tmp603->methods[1];
frost$core$String* $tmp606 = $tmp604(((frost$collections$CollectionView*) $tmp602));
frost$core$String* $tmp607 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp600, $tmp606);
frost$core$String* $tmp608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp607, &$s609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// unreffing REF($1520:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
// unreffing REF($1519:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing REF($1518:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
// unreffing REF($1514:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
// unreffing REF($1513:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
// unreffing REF($1512:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp610 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// unreffing args
*(&local76) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp611 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
// unreffing m
*(&local75) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp608;
block55:;
frost$core$Int64 $tmp612 = (frost$core$Int64) {26};
frost$core$Bit $tmp613 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp612);
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp615 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp616 = *$tmp615;
*(&local77) = $tmp616;
org$frostlang$frostc$IR$Value** $tmp617 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp618 = *$tmp617;
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
org$frostlang$frostc$IR$Value* $tmp619 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local78) = $tmp618;
org$frostlang$frostc$IR$Value** $tmp620 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp621 = *$tmp620;
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
org$frostlang$frostc$IR$Value* $tmp622 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
*(&local79) = $tmp621;
// line 257
org$frostlang$frostc$IR$Value* $tmp623 = *(&local78);
frost$core$String* $tmp624 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s625, ((frost$core$Object*) $tmp623));
frost$core$String* $tmp626 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp624, &$s627);
org$frostlang$frostc$IR$Value* $tmp628 = *(&local79);
frost$core$String* $tmp629 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp626, ((frost$core$Object*) $tmp628));
frost$core$String* $tmp630 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp629, &$s631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
// unreffing REF($1585:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing REF($1584:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
// unreffing REF($1581:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// unreffing REF($1580:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp632 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// unreffing ptr
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp633 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// unreffing value
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp630;
block57:;
frost$core$Int64 $tmp634 = (frost$core$Int64) {27};
frost$core$Bit $tmp635 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp634);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block58; else goto block1;
block58:;
org$frostlang$frostc$Position* $tmp637 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp638 = *$tmp637;
*(&local80) = $tmp638;
// line 260
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s639));
return &$s640;
block1:;
frost$core$Bit $tmp641 = frost$core$Bit$init$builtin_bit(false);
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp643 = (frost$core$Int64) {173};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s644, $tmp643, &$s645);
abort(); // unreachable
block59:;
abort(); // unreachable

}
void org$frostlang$frostc$IR$Statement$cleanup(org$frostlang$frostc$IR$Statement* param0) {

org$frostlang$frostc$Position local0;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$parser$Token$Kind local2;
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
frost$core$Int64* $tmp646 = &param0->$rawValue;
frost$core$Int64 $tmp647 = *$tmp646;
frost$core$Int64 $tmp648 = (frost$core$Int64) {0};
frost$core$Bit $tmp649 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp648);
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp651 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp652 = *$tmp651;
*(&local0) = $tmp652;
org$frostlang$frostc$IR$Value** $tmp653 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp654 = *$tmp653;
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
org$frostlang$frostc$IR$Value* $tmp655 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
*(&local1) = $tmp654;
org$frostlang$frostc$parser$Token$Kind* $tmp656 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp657 = *$tmp656;
*(&local2) = $tmp657;
org$frostlang$frostc$IR$Value** $tmp658 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp659 = *$tmp658;
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
org$frostlang$frostc$IR$Value* $tmp660 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
*(&local3) = $tmp659;
org$frostlang$frostc$Type** $tmp661 = (org$frostlang$frostc$Type**) (param0->$data + 40);
org$frostlang$frostc$Type* $tmp662 = *$tmp661;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
org$frostlang$frostc$Type* $tmp663 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local4) = $tmp662;
// line 1
org$frostlang$frostc$IR$Value* $tmp664 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
// line 1
org$frostlang$frostc$IR$Value* $tmp665 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
// line 1
org$frostlang$frostc$Type* $tmp666 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
org$frostlang$frostc$Type* $tmp667 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
// unreffing _f4
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp668 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
// unreffing _f3
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp669 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
// unreffing _f1
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp670 = (frost$core$Int64) {1};
frost$core$Bit $tmp671 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp670);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp673 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp674 = *$tmp673;
*(&local5) = $tmp674;
org$frostlang$frostc$IR$Block$ID* $tmp675 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp676 = *$tmp675;
*(&local6) = $tmp676;
goto block1;
block5:;
frost$core$Int64 $tmp677 = (frost$core$Int64) {2};
frost$core$Bit $tmp678 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp677);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp680 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp681 = *$tmp680;
*(&local7) = $tmp681;
org$frostlang$frostc$IR$Value** $tmp682 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp683 = *$tmp682;
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
org$frostlang$frostc$IR$Value* $tmp684 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local8) = $tmp683;
org$frostlang$frostc$Type** $tmp685 = (org$frostlang$frostc$Type**) (param0->$data + 24);
org$frostlang$frostc$Type* $tmp686 = *$tmp685;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
org$frostlang$frostc$Type* $tmp687 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local9) = $tmp686;
// line 1
org$frostlang$frostc$IR$Value* $tmp688 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// line 1
org$frostlang$frostc$Type* $tmp689 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
org$frostlang$frostc$Type* $tmp690 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing _f2
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp691 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
// unreffing _f1
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp692 = (frost$core$Int64) {3};
frost$core$Bit $tmp693 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp692);
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block8; else goto block9;
block8:;
frost$core$String** $tmp695 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp696 = *$tmp695;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$String* $tmp697 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
*(&local10) = $tmp696;
// line 1
frost$core$String* $tmp698 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$String* $tmp699 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
// unreffing _f0
*(&local10) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp700 = (frost$core$Int64) {4};
frost$core$Bit $tmp701 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp700);
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp703 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp704 = *$tmp703;
*(&local11) = $tmp704;
org$frostlang$frostc$IR$Value** $tmp705 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp706 = *$tmp705;
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
org$frostlang$frostc$IR$Value* $tmp707 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local12) = $tmp706;
org$frostlang$frostc$ChoiceCase** $tmp708 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp709 = *$tmp708;
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
org$frostlang$frostc$ChoiceCase* $tmp710 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
*(&local13) = $tmp709;
frost$core$Int64* $tmp711 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp712 = *$tmp711;
*(&local14) = $tmp712;
// line 1
org$frostlang$frostc$IR$Value* $tmp713 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// line 1
org$frostlang$frostc$ChoiceCase* $tmp714 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
org$frostlang$frostc$ChoiceCase* $tmp715 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// unreffing _f2
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$IR$Value* $tmp716 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
// unreffing _f1
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block11:;
frost$core$Int64 $tmp717 = (frost$core$Int64) {5};
frost$core$Bit $tmp718 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp717);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp720 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp721 = *$tmp720;
*(&local15) = $tmp721;
org$frostlang$frostc$IR$Value** $tmp722 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp723 = *$tmp722;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
org$frostlang$frostc$IR$Value* $tmp724 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local16) = $tmp723;
org$frostlang$frostc$IR$Block$ID* $tmp725 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp726 = *$tmp725;
*(&local17) = $tmp726;
org$frostlang$frostc$IR$Block$ID* $tmp727 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp728 = *$tmp727;
*(&local18) = $tmp728;
// line 1
org$frostlang$frostc$IR$Value* $tmp729 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
org$frostlang$frostc$IR$Value* $tmp730 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
// unreffing _f1
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp731 = (frost$core$Int64) {6};
frost$core$Bit $tmp732 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp731);
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp734 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp735 = *$tmp734;
*(&local19) = $tmp735;
org$frostlang$frostc$ClassDecl** $tmp736 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp737 = *$tmp736;
*(&local20) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
org$frostlang$frostc$ClassDecl* $tmp738 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local20) = $tmp737;
// line 1
org$frostlang$frostc$ClassDecl* $tmp739 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
org$frostlang$frostc$ClassDecl* $tmp740 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// unreffing _f1
*(&local20) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block15:;
frost$core$Int64 $tmp741 = (frost$core$Int64) {7};
frost$core$Bit $tmp742 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp741);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp744 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp745 = *$tmp744;
*(&local21) = $tmp745;
org$frostlang$frostc$ClassDecl** $tmp746 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp747 = *$tmp746;
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
org$frostlang$frostc$ClassDecl* $tmp748 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local22) = $tmp747;
org$frostlang$frostc$FixedArray** $tmp749 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp750 = *$tmp749;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
org$frostlang$frostc$FixedArray* $tmp751 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local23) = $tmp750;
// line 1
org$frostlang$frostc$ClassDecl* $tmp752 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// line 1
org$frostlang$frostc$FixedArray* $tmp753 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
org$frostlang$frostc$FixedArray* $tmp754 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
// unreffing _f2
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp755 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
// unreffing _f1
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp756 = (frost$core$Int64) {8};
frost$core$Bit $tmp757 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp756);
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp759 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp760 = *$tmp759;
*(&local24) = $tmp760;
org$frostlang$frostc$IR$Value** $tmp761 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp762 = *$tmp761;
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
org$frostlang$frostc$IR$Value* $tmp763 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local25) = $tmp762;
org$frostlang$frostc$FixedArray** $tmp764 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp765 = *$tmp764;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
org$frostlang$frostc$FixedArray* $tmp766 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local26) = $tmp765;
// line 1
org$frostlang$frostc$IR$Value* $tmp767 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
// line 1
org$frostlang$frostc$FixedArray* $tmp768 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
org$frostlang$frostc$FixedArray* $tmp769 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// unreffing _f2
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp770 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
// unreffing _f1
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp771 = (frost$core$Int64) {9};
frost$core$Bit $tmp772 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp771);
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp774 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp775 = *$tmp774;
*(&local27) = $tmp775;
org$frostlang$frostc$IR$Value** $tmp776 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp777 = *$tmp776;
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
org$frostlang$frostc$IR$Value* $tmp778 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local28) = $tmp777;
org$frostlang$frostc$FieldDecl** $tmp779 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp780 = *$tmp779;
*(&local29) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
org$frostlang$frostc$FieldDecl* $tmp781 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local29) = $tmp780;
// line 1
org$frostlang$frostc$IR$Value* $tmp782 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
// line 1
org$frostlang$frostc$FieldDecl* $tmp783 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
org$frostlang$frostc$FieldDecl* $tmp784 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// unreffing _f2
*(&local29) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp785 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// unreffing _f1
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp786 = (frost$core$Int64) {10};
frost$core$Bit $tmp787 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp786);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp789 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp790 = *$tmp789;
*(&local30) = $tmp790;
org$frostlang$frostc$IR$Value** $tmp791 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp792 = *$tmp791;
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
org$frostlang$frostc$IR$Value* $tmp793 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
*(&local31) = $tmp792;
org$frostlang$frostc$FieldDecl** $tmp794 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp795 = *$tmp794;
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
org$frostlang$frostc$FieldDecl* $tmp796 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local32) = $tmp795;
// line 1
org$frostlang$frostc$IR$Value* $tmp797 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// line 1
org$frostlang$frostc$FieldDecl* $tmp798 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
org$frostlang$frostc$FieldDecl* $tmp799 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
// unreffing _f2
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp800 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
// unreffing _f1
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp801 = (frost$core$Int64) {11};
frost$core$Bit $tmp802 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp801);
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp804 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp805 = *$tmp804;
*(&local33) = $tmp805;
org$frostlang$frostc$IR$Value** $tmp806 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp807 = *$tmp806;
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
org$frostlang$frostc$IR$Value* $tmp808 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
*(&local34) = $tmp807;
frost$core$Int64* $tmp809 = (frost$core$Int64*) (param0->$data + 24);
frost$core$Int64 $tmp810 = *$tmp809;
*(&local35) = $tmp810;
org$frostlang$frostc$Type** $tmp811 = (org$frostlang$frostc$Type**) (param0->$data + 32);
org$frostlang$frostc$Type* $tmp812 = *$tmp811;
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
org$frostlang$frostc$Type* $tmp813 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
*(&local36) = $tmp812;
// line 1
org$frostlang$frostc$IR$Value* $tmp814 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
// line 1
org$frostlang$frostc$Type* $tmp815 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
org$frostlang$frostc$Type* $tmp816 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
// unreffing _f3
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp817 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
// unreffing _f1
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp818 = (frost$core$Int64) {12};
frost$core$Bit $tmp819 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp818);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp821 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp822 = *$tmp821;
*(&local37) = $tmp822;
org$frostlang$frostc$IR$Value** $tmp823 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp824 = *$tmp823;
*(&local38) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
org$frostlang$frostc$IR$Value* $tmp825 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
*(&local38) = $tmp824;
org$frostlang$frostc$ClassDecl** $tmp826 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp827 = *$tmp826;
*(&local39) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
org$frostlang$frostc$ClassDecl* $tmp828 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local39) = $tmp827;
frost$core$Int64* $tmp829 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp830 = *$tmp829;
*(&local40) = $tmp830;
org$frostlang$frostc$Type** $tmp831 = (org$frostlang$frostc$Type**) (param0->$data + 40);
org$frostlang$frostc$Type* $tmp832 = *$tmp831;
*(&local41) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
org$frostlang$frostc$Type* $tmp833 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local41) = $tmp832;
// line 1
org$frostlang$frostc$IR$Value* $tmp834 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// line 1
org$frostlang$frostc$ClassDecl* $tmp835 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
// line 1
org$frostlang$frostc$Type* $tmp836 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
org$frostlang$frostc$Type* $tmp837 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
// unreffing _f4
*(&local41) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp838 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
// unreffing _f2
*(&local39) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp839 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing _f1
*(&local38) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp840 = (frost$core$Int64) {13};
frost$core$Bit $tmp841 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp840);
bool $tmp842 = $tmp841.value;
if ($tmp842) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp843 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp844 = *$tmp843;
*(&local42) = $tmp844;
org$frostlang$frostc$IR$Value** $tmp845 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp846 = *$tmp845;
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
org$frostlang$frostc$IR$Value* $tmp847 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local43) = $tmp846;
// line 1
org$frostlang$frostc$IR$Value* $tmp848 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
org$frostlang$frostc$IR$Value* $tmp849 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// unreffing _f1
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp850 = (frost$core$Int64) {14};
frost$core$Bit $tmp851 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp850);
bool $tmp852 = $tmp851.value;
if ($tmp852) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp853 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp854 = *$tmp853;
*(&local44) = $tmp854;
org$frostlang$frostc$IR$Value** $tmp855 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp856 = *$tmp855;
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
org$frostlang$frostc$IR$Value* $tmp857 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local45) = $tmp856;
// line 1
org$frostlang$frostc$IR$Value* $tmp858 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
org$frostlang$frostc$IR$Value* $tmp859 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// unreffing _f1
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block31:;
frost$core$Int64 $tmp860 = (frost$core$Int64) {15};
frost$core$Bit $tmp861 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp860);
bool $tmp862 = $tmp861.value;
if ($tmp862) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp863 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp864 = *$tmp863;
*(&local46) = $tmp864;
org$frostlang$frostc$IR$Value** $tmp865 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp866 = *$tmp865;
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
org$frostlang$frostc$IR$Value* $tmp867 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
*(&local47) = $tmp866;
// line 1
org$frostlang$frostc$IR$Value* $tmp868 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
org$frostlang$frostc$IR$Value* $tmp869 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// unreffing _f1
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block33:;
frost$core$Int64 $tmp870 = (frost$core$Int64) {16};
frost$core$Bit $tmp871 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp870);
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp873 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp874 = *$tmp873;
*(&local48) = $tmp874;
org$frostlang$frostc$IR$Value** $tmp875 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp876 = *$tmp875;
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
org$frostlang$frostc$IR$Value* $tmp877 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local49) = $tmp876;
org$frostlang$frostc$Type** $tmp878 = (org$frostlang$frostc$Type**) (param0->$data + 24);
org$frostlang$frostc$Type* $tmp879 = *$tmp878;
*(&local50) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
org$frostlang$frostc$Type* $tmp880 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
*(&local50) = $tmp879;
// line 1
org$frostlang$frostc$IR$Value* $tmp881 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
// line 1
org$frostlang$frostc$Type* $tmp882 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
org$frostlang$frostc$Type* $tmp883 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// unreffing _f2
*(&local50) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp884 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// unreffing _f1
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block35:;
frost$core$Int64 $tmp885 = (frost$core$Int64) {17};
frost$core$Bit $tmp886 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp885);
bool $tmp887 = $tmp886.value;
if ($tmp887) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp888 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp889 = *$tmp888;
*(&local51) = $tmp889;
org$frostlang$frostc$IR$Value** $tmp890 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp891 = *$tmp890;
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
org$frostlang$frostc$IR$Value* $tmp892 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local52) = $tmp891;
// line 1
org$frostlang$frostc$IR$Value* $tmp893 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
org$frostlang$frostc$IR$Value* $tmp894 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
// unreffing _f1
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block37:;
frost$core$Int64 $tmp895 = (frost$core$Int64) {18};
frost$core$Bit $tmp896 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp895);
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp898 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp899 = *$tmp898;
*(&local53) = $tmp899;
org$frostlang$frostc$IR$Value** $tmp900 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp901 = *$tmp900;
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
org$frostlang$frostc$IR$Value* $tmp902 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
*(&local54) = $tmp901;
// line 1
org$frostlang$frostc$IR$Value* $tmp903 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
org$frostlang$frostc$IR$Value* $tmp904 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
// unreffing _f1
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block39:;
frost$core$Int64 $tmp905 = (frost$core$Int64) {19};
frost$core$Bit $tmp906 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp905);
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp908 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp909 = *$tmp908;
*(&local55) = $tmp909;
org$frostlang$frostc$IR$Value** $tmp910 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp911 = *$tmp910;
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
org$frostlang$frostc$IR$Value* $tmp912 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
*(&local56) = $tmp911;
org$frostlang$frostc$IR$Value** $tmp913 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp914 = *$tmp913;
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
org$frostlang$frostc$IR$Value* $tmp915 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
*(&local57) = $tmp914;
// line 1
org$frostlang$frostc$IR$Value* $tmp916 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
// line 1
org$frostlang$frostc$IR$Value* $tmp917 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
org$frostlang$frostc$IR$Value* $tmp918 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
// unreffing _f2
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp919 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
// unreffing _f1
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block41:;
frost$core$Int64 $tmp920 = (frost$core$Int64) {20};
frost$core$Bit $tmp921 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp920);
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp923 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp924 = *$tmp923;
*(&local58) = $tmp924;
org$frostlang$frostc$IR$Value** $tmp925 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp926 = *$tmp925;
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
org$frostlang$frostc$IR$Value* $tmp927 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
*(&local59) = $tmp926;
org$frostlang$frostc$IR$Value** $tmp928 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp929 = *$tmp928;
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
org$frostlang$frostc$IR$Value* $tmp930 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
*(&local60) = $tmp929;
// line 1
org$frostlang$frostc$IR$Value* $tmp931 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
// line 1
org$frostlang$frostc$IR$Value* $tmp932 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
org$frostlang$frostc$IR$Value* $tmp933 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
// unreffing _f2
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp934 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// unreffing _f1
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block43:;
frost$core$Int64 $tmp935 = (frost$core$Int64) {21};
frost$core$Bit $tmp936 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp935);
bool $tmp937 = $tmp936.value;
if ($tmp937) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp938 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp939 = *$tmp938;
*(&local61) = $tmp939;
org$frostlang$frostc$IR$Value** $tmp940 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp941 = *$tmp940;
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
org$frostlang$frostc$IR$Value* $tmp942 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local62) = $tmp941;
org$frostlang$frostc$IR$Value** $tmp943 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp944 = *$tmp943;
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
org$frostlang$frostc$IR$Value* $tmp945 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local63) = $tmp944;
org$frostlang$frostc$IR$Value** $tmp946 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp947 = *$tmp946;
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
org$frostlang$frostc$IR$Value* $tmp948 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
*(&local64) = $tmp947;
// line 1
org$frostlang$frostc$IR$Value* $tmp949 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
// line 1
org$frostlang$frostc$IR$Value* $tmp950 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
// line 1
org$frostlang$frostc$IR$Value* $tmp951 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
org$frostlang$frostc$IR$Value* $tmp952 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
// unreffing _f3
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp953 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
// unreffing _f2
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp954 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
// unreffing _f1
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block45:;
frost$core$Int64 $tmp955 = (frost$core$Int64) {22};
frost$core$Bit $tmp956 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp955);
bool $tmp957 = $tmp956.value;
if ($tmp957) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp958 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp959 = *$tmp958;
*(&local65) = $tmp959;
org$frostlang$frostc$IR$Value** $tmp960 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp961 = *$tmp960;
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
org$frostlang$frostc$IR$Value* $tmp962 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local66) = $tmp961;
org$frostlang$frostc$IR$Value** $tmp963 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp964 = *$tmp963;
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
org$frostlang$frostc$IR$Value* $tmp965 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
*(&local67) = $tmp964;
// line 1
org$frostlang$frostc$IR$Value* $tmp966 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
// line 1
org$frostlang$frostc$IR$Value* $tmp967 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
org$frostlang$frostc$IR$Value* $tmp968 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
// unreffing _f2
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp969 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
// unreffing _f1
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block47:;
frost$core$Int64 $tmp970 = (frost$core$Int64) {23};
frost$core$Bit $tmp971 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp970);
bool $tmp972 = $tmp971.value;
if ($tmp972) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp973 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp974 = *$tmp973;
*(&local68) = $tmp974;
org$frostlang$frostc$IR$Value** $tmp975 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp976 = *$tmp975;
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
org$frostlang$frostc$IR$Value* $tmp977 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local69) = $tmp976;
org$frostlang$frostc$IR$Value** $tmp978 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp979 = *$tmp978;
*(&local70) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
org$frostlang$frostc$IR$Value* $tmp980 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
*(&local70) = $tmp979;
org$frostlang$frostc$IR$Value** $tmp981 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp982 = *$tmp981;
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
org$frostlang$frostc$IR$Value* $tmp983 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
*(&local71) = $tmp982;
// line 1
org$frostlang$frostc$IR$Value* $tmp984 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
// line 1
org$frostlang$frostc$IR$Value* $tmp985 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
// line 1
org$frostlang$frostc$IR$Value* $tmp986 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
org$frostlang$frostc$IR$Value* $tmp987 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
// unreffing _f3
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp988 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
// unreffing _f2
*(&local70) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp989 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
// unreffing _f1
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block49:;
frost$core$Int64 $tmp990 = (frost$core$Int64) {24};
frost$core$Bit $tmp991 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp990);
bool $tmp992 = $tmp991.value;
if ($tmp992) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp993 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp994 = *$tmp993;
*(&local72) = $tmp994;
org$frostlang$frostc$IR$Value** $tmp995 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp996 = *$tmp995;
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
org$frostlang$frostc$IR$Value* $tmp997 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
*(&local73) = $tmp996;
// line 1
org$frostlang$frostc$IR$Value* $tmp998 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
org$frostlang$frostc$IR$Value* $tmp999 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// unreffing _f1
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block51:;
frost$core$Int64 $tmp1000 = (frost$core$Int64) {25};
frost$core$Bit $tmp1001 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp1000);
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp1003 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1004 = *$tmp1003;
*(&local74) = $tmp1004;
org$frostlang$frostc$MethodDecl** $tmp1005 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 16);
org$frostlang$frostc$MethodDecl* $tmp1006 = *$tmp1005;
*(&local75) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
org$frostlang$frostc$MethodDecl* $tmp1007 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
*(&local75) = $tmp1006;
org$frostlang$frostc$FixedArray** $tmp1008 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1009 = *$tmp1008;
*(&local76) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
org$frostlang$frostc$FixedArray* $tmp1010 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
*(&local76) = $tmp1009;
// line 1
org$frostlang$frostc$MethodDecl* $tmp1011 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
// line 1
org$frostlang$frostc$FixedArray* $tmp1012 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
org$frostlang$frostc$FixedArray* $tmp1013 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
// unreffing _f2
*(&local76) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1014 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
// unreffing _f1
*(&local75) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block53:;
frost$core$Int64 $tmp1015 = (frost$core$Int64) {26};
frost$core$Bit $tmp1016 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp1015);
bool $tmp1017 = $tmp1016.value;
if ($tmp1017) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp1018 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1019 = *$tmp1018;
*(&local77) = $tmp1019;
org$frostlang$frostc$IR$Value** $tmp1020 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp1021 = *$tmp1020;
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
org$frostlang$frostc$IR$Value* $tmp1022 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
*(&local78) = $tmp1021;
org$frostlang$frostc$IR$Value** $tmp1023 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1024 = *$tmp1023;
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
org$frostlang$frostc$IR$Value* $tmp1025 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
*(&local79) = $tmp1024;
// line 1
org$frostlang$frostc$IR$Value* $tmp1026 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// line 1
org$frostlang$frostc$IR$Value* $tmp1027 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
org$frostlang$frostc$IR$Value* $tmp1028 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
// unreffing _f2
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1029 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
// unreffing _f1
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block55:;
frost$core$Int64 $tmp1030 = (frost$core$Int64) {27};
frost$core$Bit $tmp1031 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp1030);
bool $tmp1032 = $tmp1031.value;
if ($tmp1032) goto block56; else goto block1;
block56:;
org$frostlang$frostc$Position* $tmp1033 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1034 = *$tmp1033;
*(&local80) = $tmp1034;
goto block1;
block1:;
// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$parser$Token$Kind param4, org$frostlang$frostc$IR$Value* param5, org$frostlang$frostc$Type* param6) {

// line 6
frost$core$Int64* $tmp1035 = &param0->$rawValue;
*$tmp1035 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1036 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1036 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1037 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1037 = param3;
// line 6
org$frostlang$frostc$parser$Token$Kind* $tmp1038 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
*$tmp1038 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$IR$Value** $tmp1039 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
*$tmp1039 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$Type** $tmp1040 = (org$frostlang$frostc$Type**) (param0->$data + 40);
*$tmp1040 = param6;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Block$ID param3) {

// line 6
frost$core$Int64* $tmp1041 = &param0->$rawValue;
*$tmp1041 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1042 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1042 = param2;
// line 6
org$frostlang$frostc$IR$Block$ID* $tmp1043 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
*$tmp1043 = param3;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$Type* param4) {

// line 6
frost$core$Int64* $tmp1044 = &param0->$rawValue;
*$tmp1044 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1045 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1045 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1046 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1046 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Type** $tmp1047 = (org$frostlang$frostc$Type**) (param0->$data + 24);
*$tmp1047 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$frost$core$String(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 6
frost$core$Int64* $tmp1048 = &param0->$rawValue;
*$tmp1048 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp1049 = (frost$core$String**) (param0->$data + 0);
*$tmp1049 = param2;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

// line 6
frost$core$Int64* $tmp1050 = &param0->$rawValue;
*$tmp1050 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1051 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1051 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1052 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1052 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp1053 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
*$tmp1053 = param4;
// line 6
frost$core$Int64* $tmp1054 = (frost$core$Int64*) (param0->$data + 32);
*$tmp1054 = param5;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$IR$Block$ID param4, org$frostlang$frostc$IR$Block$ID param5) {

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
org$frostlang$frostc$IR$Block$ID* $tmp1058 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
*$tmp1058 = param4;
// line 6
org$frostlang$frostc$IR$Block$ID* $tmp1059 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 32);
*$tmp1059 = param5;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ClassDecl* param3) {

// line 6
frost$core$Int64* $tmp1060 = &param0->$rawValue;
*$tmp1060 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1061 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1061 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ClassDecl** $tmp1062 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 16);
*$tmp1062 = param3;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp1063 = &param0->$rawValue;
*$tmp1063 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1064 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1064 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ClassDecl** $tmp1065 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 16);
*$tmp1065 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp1066 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp1066 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp1067 = &param0->$rawValue;
*$tmp1067 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1068 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1068 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1069 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1069 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp1070 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp1070 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {

// line 6
frost$core$Int64* $tmp1071 = &param0->$rawValue;
*$tmp1071 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1072 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1072 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1073 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1073 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FieldDecl** $tmp1074 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 24);
*$tmp1074 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, frost$core$Int64 param4, org$frostlang$frostc$Type* param5) {

// line 6
frost$core$Int64* $tmp1075 = &param0->$rawValue;
*$tmp1075 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1076 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1076 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1077 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1077 = param3;
// line 6
frost$core$Int64* $tmp1078 = (frost$core$Int64*) (param0->$data + 24);
*$tmp1078 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$Type** $tmp1079 = (org$frostlang$frostc$Type**) (param0->$data + 32);
*$tmp1079 = param5;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ClassDecl* param4, frost$core$Int64 param5, org$frostlang$frostc$Type* param6) {

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
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ClassDecl** $tmp1083 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 24);
*$tmp1083 = param4;
// line 6
frost$core$Int64* $tmp1084 = (frost$core$Int64*) (param0->$data + 32);
*$tmp1084 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$Type** $tmp1085 = (org$frostlang$frostc$Type**) (param0->$data + 40);
*$tmp1085 = param6;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// line 6
frost$core$Int64* $tmp1086 = &param0->$rawValue;
*$tmp1086 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1087 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1087 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1088 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1088 = param3;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$IR$Value* param4) {

// line 6
frost$core$Int64* $tmp1089 = &param0->$rawValue;
*$tmp1089 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1090 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1090 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1091 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1091 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value** $tmp1092 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1092 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$IR$Value* param4, org$frostlang$frostc$IR$Value* param5) {

// line 6
frost$core$Int64* $tmp1093 = &param0->$rawValue;
*$tmp1093 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1094 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1094 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1095 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp1095 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value** $tmp1096 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1096 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$IR$Value** $tmp1097 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
*$tmp1097 = param5;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

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
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$MethodDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp1101 = &param0->$rawValue;
*$tmp1101 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1102 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1102 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp1103 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 16);
*$tmp1103 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp1104 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp1104 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position(org$frostlang$frostc$IR$Statement* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2) {

// line 6
frost$core$Int64* $tmp1105 = &param0->$rawValue;
*$tmp1105 = param1;
// line 6
org$frostlang$frostc$Position* $tmp1106 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1106 = param2;
return;

}

