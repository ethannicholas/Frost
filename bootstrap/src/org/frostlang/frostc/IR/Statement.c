#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Frost.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$Statement$class_type org$frostlang$frostc$IR$Statement$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$Statement$get_asString$R$frost$core$String, org$frostlang$frostc$IR$Statement$cleanup, org$frostlang$frostc$IR$Statement$get_position$R$org$frostlang$frostc$Position} };

typedef frost$core$String* (*$fn398)(frost$core$Object*);
typedef frost$core$String* (*$fn407)(frost$core$Object*);
typedef frost$core$String* (*$fn414)(frost$core$Object*);
typedef frost$core$String* (*$fn421)(frost$core$Object*);
typedef frost$core$String* (*$fn442)(frost$core$Object*);
typedef frost$core$String* (*$fn466)(frost$core$Object*);
typedef frost$core$String* (*$fn474)(frost$core$Object*);
typedef frost$core$String* (*$fn483)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$String* (*$fn525)(frost$core$Object*);
typedef frost$core$String* (*$fn534)(frost$core$Object*);
typedef frost$core$String* (*$fn542)(frost$core$Object*);
typedef frost$core$String* (*$fn590)(frost$core$Object*);
typedef frost$core$String* (*$fn613)(frost$core$Object*);
typedef frost$core$String* (*$fn622)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn654)(frost$core$Object*);
typedef frost$core$String* (*$fn701)(frost$core$Object*);
typedef frost$core$String* (*$fn716)(frost$core$Object*);
typedef frost$core$String* (*$fn739)(frost$core$Object*);
typedef frost$core$String* (*$fn789)(frost$core$Object*);
typedef frost$core$String* (*$fn804)(frost$core$Object*);
typedef frost$core$String* (*$fn811)(frost$core$Object*);
typedef frost$core$String* (*$fn837)(frost$core$Object*);
typedef frost$core$String* (*$fn846)(frost$core$Object*);
typedef frost$core$String* (*$fn853)(frost$core$Object*);
typedef frost$core$String* (*$fn873)(frost$core$Object*);
typedef frost$core$String* (*$fn893)(frost$core$Object*);
typedef frost$core$String* (*$fn913)(frost$core$Object*);
typedef frost$core$String* (*$fn936)(frost$core$Object*);
typedef frost$core$String* (*$fn944)(frost$core$Object*);
typedef frost$core$String* (*$fn964)(frost$core$Object*);
typedef frost$core$String* (*$fn984)(frost$core$Object*);
typedef frost$core$String* (*$fn1007)(frost$core$Object*);
typedef frost$core$String* (*$fn1015)(frost$core$Object*);
typedef frost$core$String* (*$fn1038)(frost$core$Object*);
typedef frost$core$String* (*$fn1046)(frost$core$Object*);
typedef frost$core$String* (*$fn1072)(frost$core$Object*);
typedef frost$core$String* (*$fn1080)(frost$core$Object*);
typedef frost$core$String* (*$fn1087)(frost$core$Object*);
typedef frost$core$String* (*$fn1111)(frost$core$Object*);
typedef frost$core$String* (*$fn1119)(frost$core$Object*);
typedef frost$core$String* (*$fn1145)(frost$core$Object*);
typedef frost$core$String* (*$fn1153)(frost$core$Object*);
typedef frost$core$String* (*$fn1160)(frost$core$Object*);
typedef frost$core$String* (*$fn1184)(frost$core$Object*);
typedef frost$core$String* (*$fn1217)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1241)(frost$core$Object*);
typedef frost$core$String* (*$fn1249)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74", 33, 5024691128674697068, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x69\x6e\x61\x72\x79\x20", 7, 2706552969837839508, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x72\x61\x6e\x63\x68\x20", 7, -7472202356177628417, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x73\x74\x20", 5, -6286263964257499670, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 562958782608952338, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x28", 2, 560029683631965909, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x6c\x69\x63\x69\x74\x7c\x69\x6d\x70\x6c\x69\x63\x69\x74", 17, 3623723475840696532, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x20", 3, -2414825399736645539, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x72\x61\x6e\x63\x68\x20", 7, -7472202356177628417, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x20", 10, 8571758572123753174, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x72\x65\x61\x74\x65\x5f\x73\x74\x72\x75\x63\x74\x20", 14, -77302371419623543, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x5f\x63\x61\x6c\x6c\x20", 13, -6231059145519777207, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s624 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x64", 3, -4400013430294884342, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x64", 3, -4400013430294884342, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x72\x61\x63\x74\x5f\x66\x69\x65\x6c\x64\x20", 14, -1220379667226606121, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s680 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x63\x68\x6f\x69\x63\x65\x5f\x66\x69\x65\x6c\x64\x5f\x70\x6f\x69\x6e\x74\x65\x72\x20", 25, 6926120267578633934, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s720 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x66\x69\x65\x6c\x64\x5f\x70\x6f\x69\x6e\x74\x65\x72\x20", 18, 6497610734453070394, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s752 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s759 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s765 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x5f\x6d\x65\x74\x68\x6f\x64\x20", 21, 2617681842998377519, NULL };
static frost$core$String $s794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x76\x69\x72\x74\x75\x61\x6c\x5f\x6d\x65\x74\x68\x6f\x64\x20", 19, -459831016846235881, NULL };
static frost$core$String $s842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s876 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x61\x64\x20", 5, 1571179811990624395, NULL };
static frost$core$String $s878 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x65\x67\x61\x74\x65\x20", 7, 2373311089243591617, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20", 4, 4321545493442781470, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s939 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x61\x6c\x6c\x6f\x63\x20", 14, -4188160412678025876, NULL };
static frost$core$String $s941 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s948 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x64\x65\x73\x74\x72\x6f\x79\x20", 16, -1256794751555975283, NULL };
static frost$core$String $s969 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s987 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x67\x65\x74\x20", 12, -4150999462542899349, NULL };
static frost$core$String $s989 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1010 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x67\x65\x74\x5f\x69\x6e\x64\x65\x78\x20", 18, 6153964135681359618, NULL };
static frost$core$String $s1012 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1019 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1041 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x6f\x66\x66\x73\x65\x74\x20", 15, 8060691994097193756, NULL };
static frost$core$String $s1043 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1050 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1075 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x72\x65\x61\x6c\x6c\x6f\x63\x20", 16, -8429519907930147899, NULL };
static frost$core$String $s1077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1091 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x73\x65\x74\x20", 12, 240301160714393775, NULL };
static frost$core$String $s1116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72\x5f\x73\x65\x74\x5f\x69\x6e\x64\x65\x78\x20", 18, 2801718907932075046, NULL };
static frost$core$String $s1150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, -8138645579369886003, NULL };
static frost$core$String $s1189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, -4195180554649555617, NULL };
static frost$core$String $s1193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, -4195180554649555617, NULL };
static frost$core$String $s1211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x5f\x63\x61\x6c\x6c\x20", 12, -6085481003625654716, NULL };
static frost$core$String $s1213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s1244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x6f\x72\x65\x20", 6, -3335037841811812694, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 2003079889812304977, NULL };
static frost$core$String $s1265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 2003079889812304977, NULL };
static frost$core$String $s1267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };

org$frostlang$frostc$Position org$frostlang$frostc$IR$Statement$get_position$R$org$frostlang$frostc$Position(org$frostlang$frostc$IR$Statement* param0) {

org$frostlang$frostc$Position local0;
org$frostlang$frostc$Position local1;
org$frostlang$frostc$Position local2;
org$frostlang$frostc$Position local3;
org$frostlang$frostc$Position local4;
org$frostlang$frostc$Position local5;
org$frostlang$frostc$Position local6;
org$frostlang$frostc$Position local7;
org$frostlang$frostc$Position local8;
org$frostlang$frostc$Position local9;
org$frostlang$frostc$Position local10;
org$frostlang$frostc$Position local11;
org$frostlang$frostc$Position local12;
org$frostlang$frostc$Position local13;
org$frostlang$frostc$Position local14;
org$frostlang$frostc$Position local15;
org$frostlang$frostc$Position local16;
org$frostlang$frostc$Position local17;
org$frostlang$frostc$Position local18;
org$frostlang$frostc$Position local19;
org$frostlang$frostc$Position local20;
org$frostlang$frostc$Position local21;
org$frostlang$frostc$Position local22;
org$frostlang$frostc$Position local23;
org$frostlang$frostc$Position local24;
org$frostlang$frostc$Position local25;
org$frostlang$frostc$Position local26;
org$frostlang$frostc$Position local27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:182
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:183:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp10 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp11 = *$tmp10;
*(&local0) = $tmp11;
org$frostlang$frostc$IR$Value** $tmp12 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp13 = *$tmp12;
org$frostlang$frostc$expression$Binary$Operator* $tmp14 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp15 = *$tmp14;
org$frostlang$frostc$IR$Value** $tmp16 = (org$frostlang$frostc$IR$Value**) (param0->$data + 40);
org$frostlang$frostc$IR$Value* $tmp17 = *$tmp16;
org$frostlang$frostc$Type** $tmp18 = (org$frostlang$frostc$Type**) (param0->$data + 48);
org$frostlang$frostc$Type* $tmp19 = *$tmp18;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:184
org$frostlang$frostc$Position $tmp20 = *(&local0);
return $tmp20;
block3:;
frost$core$Int $tmp21 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:186:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp22 = $tmp3.value;
int64_t $tmp23 = $tmp21.value;
bool $tmp24 = $tmp22 == $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp27 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp28 = *$tmp27;
*(&local1) = $tmp28;
org$frostlang$frostc$IR$Block$ID* $tmp29 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp30 = *$tmp29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:187
org$frostlang$frostc$Position $tmp31 = *(&local1);
return $tmp31;
block6:;
frost$core$Int $tmp32 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:189:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp33 = $tmp3.value;
int64_t $tmp34 = $tmp32.value;
bool $tmp35 = $tmp33 == $tmp34;
frost$core$Bit $tmp36 = (frost$core$Bit) {$tmp35};
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp38 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp39 = *$tmp38;
*(&local2) = $tmp39;
org$frostlang$frostc$IR$Value** $tmp40 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp41 = *$tmp40;
org$frostlang$frostc$Type** $tmp42 = (org$frostlang$frostc$Type**) (param0->$data + 32);
org$frostlang$frostc$Type* $tmp43 = *$tmp42;
frost$core$Bit* $tmp44 = (frost$core$Bit*) (param0->$data + 40);
frost$core$Bit $tmp45 = *$tmp44;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:190
org$frostlang$frostc$Position $tmp46 = *(&local2);
return $tmp46;
block9:;
frost$core$Int $tmp47 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:192:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp48 = $tmp3.value;
int64_t $tmp49 = $tmp47.value;
bool $tmp50 = $tmp48 == $tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50};
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp53 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp54 = *$tmp53;
*(&local3) = $tmp54;
frost$core$String** $tmp55 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp56 = *$tmp55;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:193
org$frostlang$frostc$Position $tmp57 = *(&local3);
return $tmp57;
block12:;
frost$core$Int $tmp58 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:195:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp59 = $tmp3.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 == $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp64 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp65 = *$tmp64;
*(&local4) = $tmp65;
org$frostlang$frostc$IR$Value** $tmp66 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp67 = *$tmp66;
org$frostlang$frostc$IR$Block$ID* $tmp68 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp69 = *$tmp68;
org$frostlang$frostc$IR$Block$ID* $tmp70 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp71 = *$tmp70;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:196
org$frostlang$frostc$Position $tmp72 = *(&local4);
return $tmp72;
block15:;
frost$core$Int $tmp73 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:198:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp74 = $tmp3.value;
int64_t $tmp75 = $tmp73.value;
bool $tmp76 = $tmp74 == $tmp75;
frost$core$Bit $tmp77 = (frost$core$Bit) {$tmp76};
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp79 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp80 = *$tmp79;
*(&local5) = $tmp80;
org$frostlang$frostc$ClassDecl** $tmp81 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp82 = *$tmp81;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:199
org$frostlang$frostc$Position $tmp83 = *(&local5);
return $tmp83;
block18:;
frost$core$Int $tmp84 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:201:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp85 = $tmp3.value;
int64_t $tmp86 = $tmp84.value;
bool $tmp87 = $tmp85 == $tmp86;
frost$core$Bit $tmp88 = (frost$core$Bit) {$tmp87};
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp90 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp91 = *$tmp90;
*(&local6) = $tmp91;
org$frostlang$frostc$ClassDecl** $tmp92 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp93 = *$tmp92;
org$frostlang$frostc$FixedArray** $tmp94 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp95 = *$tmp94;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:202
org$frostlang$frostc$Position $tmp96 = *(&local6);
return $tmp96;
block21:;
frost$core$Int $tmp97 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:204:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp98 = $tmp3.value;
int64_t $tmp99 = $tmp97.value;
bool $tmp100 = $tmp98 == $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp103 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp104 = *$tmp103;
*(&local7) = $tmp104;
org$frostlang$frostc$IR$Value** $tmp105 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp106 = *$tmp105;
org$frostlang$frostc$FixedArray** $tmp107 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp108 = *$tmp107;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:205
org$frostlang$frostc$Position $tmp109 = *(&local7);
return $tmp109;
block24:;
frost$core$Int $tmp110 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:207:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp111 = $tmp3.value;
int64_t $tmp112 = $tmp110.value;
bool $tmp113 = $tmp111 == $tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:208
org$frostlang$frostc$Position $tmp116 = org$frostlang$frostc$Position$init();
return $tmp116;
block27:;
frost$core$Int $tmp117 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:210:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp118 = $tmp3.value;
int64_t $tmp119 = $tmp117.value;
bool $tmp120 = $tmp118 == $tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp123 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp124 = *$tmp123;
*(&local8) = $tmp124;
org$frostlang$frostc$IR$Value** $tmp125 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp126 = *$tmp125;
org$frostlang$frostc$FieldDecl** $tmp127 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp128 = *$tmp127;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:211
org$frostlang$frostc$Position $tmp129 = *(&local8);
return $tmp129;
block30:;
frost$core$Int $tmp130 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:213:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp131 = $tmp3.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 == $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp136 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp137 = *$tmp136;
*(&local9) = $tmp137;
org$frostlang$frostc$IR$Value** $tmp138 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp139 = *$tmp138;
org$frostlang$frostc$ChoiceCase** $tmp140 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp141 = *$tmp140;
frost$core$Int* $tmp142 = (frost$core$Int*) (param0->$data + 40);
frost$core$Int $tmp143 = *$tmp142;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:214
org$frostlang$frostc$Position $tmp144 = *(&local9);
return $tmp144;
block33:;
frost$core$Int $tmp145 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:216:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp146 = $tmp3.value;
int64_t $tmp147 = $tmp145.value;
bool $tmp148 = $tmp146 == $tmp147;
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148};
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Position* $tmp151 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp152 = *$tmp151;
*(&local10) = $tmp152;
org$frostlang$frostc$IR$Value** $tmp153 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp154 = *$tmp153;
org$frostlang$frostc$FieldDecl** $tmp155 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp156 = *$tmp155;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:217
org$frostlang$frostc$Position $tmp157 = *(&local10);
return $tmp157;
block36:;
frost$core$Int $tmp158 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:219:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp159 = $tmp3.value;
int64_t $tmp160 = $tmp158.value;
bool $tmp161 = $tmp159 == $tmp160;
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp164 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp165 = *$tmp164;
*(&local11) = $tmp165;
org$frostlang$frostc$IR$Value** $tmp166 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp167 = *$tmp166;
org$frostlang$frostc$ClassDecl** $tmp168 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 32);
org$frostlang$frostc$ClassDecl* $tmp169 = *$tmp168;
frost$core$Int* $tmp170 = (frost$core$Int*) (param0->$data + 40);
frost$core$Int $tmp171 = *$tmp170;
org$frostlang$frostc$Type** $tmp172 = (org$frostlang$frostc$Type**) (param0->$data + 48);
org$frostlang$frostc$Type* $tmp173 = *$tmp172;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:220
org$frostlang$frostc$Position $tmp174 = *(&local11);
return $tmp174;
block39:;
frost$core$Int $tmp175 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:222:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp176 = $tmp3.value;
int64_t $tmp177 = $tmp175.value;
bool $tmp178 = $tmp176 == $tmp177;
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Position* $tmp181 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp182 = *$tmp181;
*(&local12) = $tmp182;
org$frostlang$frostc$IR$Value** $tmp183 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp184 = *$tmp183;
frost$core$Int* $tmp185 = (frost$core$Int*) (param0->$data + 32);
frost$core$Int $tmp186 = *$tmp185;
org$frostlang$frostc$Type** $tmp187 = (org$frostlang$frostc$Type**) (param0->$data + 40);
org$frostlang$frostc$Type* $tmp188 = *$tmp187;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:223
org$frostlang$frostc$Position $tmp189 = *(&local12);
return $tmp189;
block42:;
frost$core$Int $tmp190 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:225:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp191 = $tmp3.value;
int64_t $tmp192 = $tmp190.value;
bool $tmp193 = $tmp191 == $tmp192;
frost$core$Bit $tmp194 = (frost$core$Bit) {$tmp193};
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp196 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp197 = *$tmp196;
*(&local13) = $tmp197;
org$frostlang$frostc$IR$Value** $tmp198 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp199 = *$tmp198;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:226
org$frostlang$frostc$Position $tmp200 = *(&local13);
return $tmp200;
block45:;
frost$core$Int $tmp201 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:228:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp202 = $tmp3.value;
int64_t $tmp203 = $tmp201.value;
bool $tmp204 = $tmp202 == $tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block47; else goto block48;
block47:;
org$frostlang$frostc$Position* $tmp207 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp208 = *$tmp207;
*(&local14) = $tmp208;
org$frostlang$frostc$IR$Value** $tmp209 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp210 = *$tmp209;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:229
org$frostlang$frostc$Position $tmp211 = *(&local14);
return $tmp211;
block48:;
frost$core$Int $tmp212 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:231:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp213 = $tmp3.value;
int64_t $tmp214 = $tmp212.value;
bool $tmp215 = $tmp213 == $tmp214;
frost$core$Bit $tmp216 = (frost$core$Bit) {$tmp215};
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp218 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp219 = *$tmp218;
*(&local15) = $tmp219;
org$frostlang$frostc$IR$Value** $tmp220 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp221 = *$tmp220;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:232
org$frostlang$frostc$Position $tmp222 = *(&local15);
return $tmp222;
block51:;
frost$core$Int $tmp223 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:234:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp224 = $tmp3.value;
int64_t $tmp225 = $tmp223.value;
bool $tmp226 = $tmp224 == $tmp225;
frost$core$Bit $tmp227 = (frost$core$Bit) {$tmp226};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block53; else goto block54;
block53:;
org$frostlang$frostc$Position* $tmp229 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp230 = *$tmp229;
*(&local16) = $tmp230;
org$frostlang$frostc$IR$Value** $tmp231 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp232 = *$tmp231;
org$frostlang$frostc$Type** $tmp233 = (org$frostlang$frostc$Type**) (param0->$data + 32);
org$frostlang$frostc$Type* $tmp234 = *$tmp233;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:235
org$frostlang$frostc$Position $tmp235 = *(&local16);
return $tmp235;
block54:;
frost$core$Int $tmp236 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:237:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp237 = $tmp3.value;
int64_t $tmp238 = $tmp236.value;
bool $tmp239 = $tmp237 == $tmp238;
frost$core$Bit $tmp240 = (frost$core$Bit) {$tmp239};
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp242 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp243 = *$tmp242;
*(&local17) = $tmp243;
org$frostlang$frostc$IR$Value** $tmp244 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp245 = *$tmp244;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:238
org$frostlang$frostc$Position $tmp246 = *(&local17);
return $tmp246;
block57:;
frost$core$Int $tmp247 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:240:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp248 = $tmp3.value;
int64_t $tmp249 = $tmp247.value;
bool $tmp250 = $tmp248 == $tmp249;
frost$core$Bit $tmp251 = (frost$core$Bit) {$tmp250};
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block59; else goto block60;
block59:;
org$frostlang$frostc$Position* $tmp253 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp254 = *$tmp253;
*(&local18) = $tmp254;
org$frostlang$frostc$IR$Value** $tmp255 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp256 = *$tmp255;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:241
org$frostlang$frostc$Position $tmp257 = *(&local18);
return $tmp257;
block60:;
frost$core$Int $tmp258 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:243:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp259 = $tmp3.value;
int64_t $tmp260 = $tmp258.value;
bool $tmp261 = $tmp259 == $tmp260;
frost$core$Bit $tmp262 = (frost$core$Bit) {$tmp261};
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp264 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp265 = *$tmp264;
*(&local19) = $tmp265;
org$frostlang$frostc$IR$Value** $tmp266 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp267 = *$tmp266;
org$frostlang$frostc$IR$Value** $tmp268 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp269 = *$tmp268;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:244
org$frostlang$frostc$Position $tmp270 = *(&local19);
return $tmp270;
block63:;
frost$core$Int $tmp271 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:246:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp272 = $tmp3.value;
int64_t $tmp273 = $tmp271.value;
bool $tmp274 = $tmp272 == $tmp273;
frost$core$Bit $tmp275 = (frost$core$Bit) {$tmp274};
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block65; else goto block66;
block65:;
org$frostlang$frostc$Position* $tmp277 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp278 = *$tmp277;
*(&local20) = $tmp278;
org$frostlang$frostc$IR$Value** $tmp279 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp280 = *$tmp279;
org$frostlang$frostc$IR$Value** $tmp281 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp282 = *$tmp281;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:247
org$frostlang$frostc$Position $tmp283 = *(&local20);
return $tmp283;
block66:;
frost$core$Int $tmp284 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:249:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp285 = $tmp3.value;
int64_t $tmp286 = $tmp284.value;
bool $tmp287 = $tmp285 == $tmp286;
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp290 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp291 = *$tmp290;
*(&local21) = $tmp291;
org$frostlang$frostc$IR$Value** $tmp292 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp293 = *$tmp292;
org$frostlang$frostc$IR$Value** $tmp294 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp295 = *$tmp294;
org$frostlang$frostc$IR$Value** $tmp296 = (org$frostlang$frostc$IR$Value**) (param0->$data + 40);
org$frostlang$frostc$IR$Value* $tmp297 = *$tmp296;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:250
org$frostlang$frostc$Position $tmp298 = *(&local21);
return $tmp298;
block69:;
frost$core$Int $tmp299 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:252:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp300 = $tmp3.value;
int64_t $tmp301 = $tmp299.value;
bool $tmp302 = $tmp300 == $tmp301;
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block71; else goto block72;
block71:;
org$frostlang$frostc$Position* $tmp305 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp306 = *$tmp305;
*(&local22) = $tmp306;
org$frostlang$frostc$IR$Value** $tmp307 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp308 = *$tmp307;
org$frostlang$frostc$IR$Value** $tmp309 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp310 = *$tmp309;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:253
org$frostlang$frostc$Position $tmp311 = *(&local22);
return $tmp311;
block72:;
frost$core$Int $tmp312 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:255:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp313 = $tmp3.value;
int64_t $tmp314 = $tmp312.value;
bool $tmp315 = $tmp313 == $tmp314;
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp318 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp319 = *$tmp318;
*(&local23) = $tmp319;
org$frostlang$frostc$IR$Value** $tmp320 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp321 = *$tmp320;
org$frostlang$frostc$IR$Value** $tmp322 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp323 = *$tmp322;
org$frostlang$frostc$IR$Value** $tmp324 = (org$frostlang$frostc$IR$Value**) (param0->$data + 40);
org$frostlang$frostc$IR$Value* $tmp325 = *$tmp324;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:256
org$frostlang$frostc$Position $tmp326 = *(&local23);
return $tmp326;
block75:;
frost$core$Int $tmp327 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:258:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp328 = $tmp3.value;
int64_t $tmp329 = $tmp327.value;
bool $tmp330 = $tmp328 == $tmp329;
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block77; else goto block78;
block77:;
org$frostlang$frostc$Position* $tmp333 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp334 = *$tmp333;
*(&local24) = $tmp334;
org$frostlang$frostc$IR$Value** $tmp335 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp336 = *$tmp335;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:259
org$frostlang$frostc$Position $tmp337 = *(&local24);
return $tmp337;
block78:;
frost$core$Int $tmp338 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:261:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp339 = $tmp3.value;
int64_t $tmp340 = $tmp338.value;
bool $tmp341 = $tmp339 == $tmp340;
frost$core$Bit $tmp342 = (frost$core$Bit) {$tmp341};
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp344 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp345 = *$tmp344;
*(&local25) = $tmp345;
org$frostlang$frostc$MethodDecl** $tmp346 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 24);
org$frostlang$frostc$MethodDecl* $tmp347 = *$tmp346;
org$frostlang$frostc$FixedArray** $tmp348 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp349 = *$tmp348;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:262
org$frostlang$frostc$Position $tmp350 = *(&local25);
return $tmp350;
block81:;
frost$core$Int $tmp351 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:264:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp352 = $tmp3.value;
int64_t $tmp353 = $tmp351.value;
bool $tmp354 = $tmp352 == $tmp353;
frost$core$Bit $tmp355 = (frost$core$Bit) {$tmp354};
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block83; else goto block84;
block83:;
org$frostlang$frostc$Position* $tmp357 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp358 = *$tmp357;
*(&local26) = $tmp358;
org$frostlang$frostc$IR$Value** $tmp359 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp360 = *$tmp359;
org$frostlang$frostc$IR$Value** $tmp361 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp362 = *$tmp361;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:265
org$frostlang$frostc$Position $tmp363 = *(&local26);
return $tmp363;
block84:;
frost$core$Int $tmp364 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:267:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp365 = $tmp3.value;
int64_t $tmp366 = $tmp364.value;
bool $tmp367 = $tmp365 == $tmp366;
frost$core$Bit $tmp368 = (frost$core$Bit) {$tmp367};
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block86; else goto block1;
block86:;
org$frostlang$frostc$Position* $tmp370 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp371 = *$tmp370;
*(&local27) = $tmp371;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:268
org$frostlang$frostc$Position $tmp372 = *(&local27);
return $tmp372;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:271
frost$core$Int $tmp373 = (frost$core$Int) {271u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s374, $tmp373);
abort(); // unreachable

}
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
frost$core$Bit local10;
frost$core$String* local11 = NULL;
org$frostlang$frostc$Position local12;
org$frostlang$frostc$IR$Value* local13 = NULL;
org$frostlang$frostc$IR$Block$ID local14;
org$frostlang$frostc$IR$Block$ID local15;
org$frostlang$frostc$Position local16;
org$frostlang$frostc$ClassDecl* local17 = NULL;
org$frostlang$frostc$Position local18;
org$frostlang$frostc$ClassDecl* local19 = NULL;
org$frostlang$frostc$FixedArray* local20 = NULL;
org$frostlang$frostc$Position local21;
org$frostlang$frostc$IR$Value* local22 = NULL;
org$frostlang$frostc$FixedArray* local23 = NULL;
org$frostlang$frostc$Position local24;
org$frostlang$frostc$IR$Value* local25 = NULL;
org$frostlang$frostc$FieldDecl* local26 = NULL;
org$frostlang$frostc$Position local27;
org$frostlang$frostc$IR$Value* local28 = NULL;
org$frostlang$frostc$ChoiceCase* local29 = NULL;
frost$core$Int local30;
org$frostlang$frostc$Position local31;
org$frostlang$frostc$IR$Value* local32 = NULL;
org$frostlang$frostc$FieldDecl* local33 = NULL;
org$frostlang$frostc$Position local34;
org$frostlang$frostc$IR$Value* local35 = NULL;
org$frostlang$frostc$ClassDecl* local36 = NULL;
frost$core$Int local37;
org$frostlang$frostc$Type* local38 = NULL;
org$frostlang$frostc$Position local39;
org$frostlang$frostc$IR$Value* local40 = NULL;
frost$core$Int local41;
org$frostlang$frostc$Type* local42 = NULL;
org$frostlang$frostc$Position local43;
org$frostlang$frostc$IR$Value* local44 = NULL;
org$frostlang$frostc$Position local45;
org$frostlang$frostc$IR$Value* local46 = NULL;
org$frostlang$frostc$Position local47;
org$frostlang$frostc$IR$Value* local48 = NULL;
org$frostlang$frostc$Position local49;
org$frostlang$frostc$IR$Value* local50 = NULL;
org$frostlang$frostc$Type* local51 = NULL;
org$frostlang$frostc$Position local52;
org$frostlang$frostc$IR$Value* local53 = NULL;
org$frostlang$frostc$Position local54;
org$frostlang$frostc$IR$Value* local55 = NULL;
org$frostlang$frostc$Position local56;
org$frostlang$frostc$IR$Value* local57 = NULL;
org$frostlang$frostc$IR$Value* local58 = NULL;
org$frostlang$frostc$Position local59;
org$frostlang$frostc$IR$Value* local60 = NULL;
org$frostlang$frostc$IR$Value* local61 = NULL;
org$frostlang$frostc$Position local62;
org$frostlang$frostc$IR$Value* local63 = NULL;
org$frostlang$frostc$IR$Value* local64 = NULL;
org$frostlang$frostc$IR$Value* local65 = NULL;
org$frostlang$frostc$Position local66;
org$frostlang$frostc$IR$Value* local67 = NULL;
org$frostlang$frostc$IR$Value* local68 = NULL;
org$frostlang$frostc$Position local69;
org$frostlang$frostc$IR$Value* local70 = NULL;
org$frostlang$frostc$IR$Value* local71 = NULL;
org$frostlang$frostc$IR$Value* local72 = NULL;
org$frostlang$frostc$Position local73;
org$frostlang$frostc$IR$Value* local74 = NULL;
org$frostlang$frostc$Position local75;
org$frostlang$frostc$MethodDecl* local76 = NULL;
org$frostlang$frostc$FixedArray* local77 = NULL;
org$frostlang$frostc$Position local78;
org$frostlang$frostc$IR$Value* local79 = NULL;
org$frostlang$frostc$IR$Value* local80 = NULL;
org$frostlang$frostc$Position local81;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:276
frost$core$Int* $tmp375 = &param0->$rawValue;
frost$core$Int $tmp376 = *$tmp375;
frost$core$Int $tmp377 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:277:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp378 = $tmp376.value;
int64_t $tmp379 = $tmp377.value;
bool $tmp380 = $tmp378 == $tmp379;
frost$core$Bit $tmp381 = (frost$core$Bit) {$tmp380};
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp383 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp384 = *$tmp383;
*(&local0) = $tmp384;
org$frostlang$frostc$IR$Value** $tmp385 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp386 = *$tmp385;
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
org$frostlang$frostc$IR$Value* $tmp387 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
*(&local1) = $tmp386;
org$frostlang$frostc$expression$Binary$Operator* $tmp388 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp389 = *$tmp388;
*(&local2) = $tmp389;
org$frostlang$frostc$IR$Value** $tmp390 = (org$frostlang$frostc$IR$Value**) (param0->$data + 40);
org$frostlang$frostc$IR$Value* $tmp391 = *$tmp390;
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
org$frostlang$frostc$IR$Value* $tmp392 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local3) = $tmp391;
org$frostlang$frostc$Type** $tmp393 = (org$frostlang$frostc$Type**) (param0->$data + 48);
org$frostlang$frostc$Type* $tmp394 = *$tmp393;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
org$frostlang$frostc$Type* $tmp395 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local4) = $tmp394;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:278
org$frostlang$frostc$IR$Value* $tmp396 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:278:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn398 $tmp397 = ($fn398) ((frost$core$Object*) $tmp396)->$class->vtable[0];
frost$core$String* $tmp399 = $tmp397(((frost$core$Object*) $tmp396));
frost$core$String* $tmp400 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s401, $tmp399);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$String* $tmp402 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp400, &$s403);
org$frostlang$frostc$expression$Binary$Operator $tmp404 = *(&local2);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp405;
$tmp405 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp405->value = $tmp404;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:278:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn407 $tmp406 = ($fn407) ((frost$core$Object*) $tmp405)->$class->vtable[0];
frost$core$String* $tmp408 = $tmp406(((frost$core$Object*) $tmp405));
frost$core$String* $tmp409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp402, $tmp408);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$String* $tmp410 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp409, &$s411);
org$frostlang$frostc$IR$Value* $tmp412 = *(&local3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:278:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn414 $tmp413 = ($fn414) ((frost$core$Object*) $tmp412)->$class->vtable[0];
frost$core$String* $tmp415 = $tmp413(((frost$core$Object*) $tmp412));
frost$core$String* $tmp416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp410, $tmp415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$core$String* $tmp417 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp416, &$s418);
org$frostlang$frostc$Type* $tmp419 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:278:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn421 $tmp420 = ($fn421) ((frost$core$Object*) $tmp419)->$class->vtable[0];
frost$core$String* $tmp422 = $tmp420(((frost$core$Object*) $tmp419));
frost$core$String* $tmp423 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp417, $tmp422);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$String* $tmp424 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp423, &$s425);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
org$frostlang$frostc$Type* $tmp426 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp427 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp424;
block3:;
frost$core$Int $tmp429 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:280:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp430 = $tmp376.value;
int64_t $tmp431 = $tmp429.value;
bool $tmp432 = $tmp430 == $tmp431;
frost$core$Bit $tmp433 = (frost$core$Bit) {$tmp432};
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp435 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp436 = *$tmp435;
*(&local5) = $tmp436;
org$frostlang$frostc$IR$Block$ID* $tmp437 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp438 = *$tmp437;
*(&local6) = $tmp438;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:281
org$frostlang$frostc$IR$Block$ID $tmp439 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp440;
$tmp440 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp440->value = $tmp439;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:281:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn442 $tmp441 = ($fn442) ((frost$core$Object*) $tmp440)->$class->vtable[0];
frost$core$String* $tmp443 = $tmp441(((frost$core$Object*) $tmp440));
frost$core$String* $tmp444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s445, $tmp443);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$core$String* $tmp446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp444, &$s447);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
return $tmp446;
block10:;
frost$core$Int $tmp448 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:283:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp449 = $tmp376.value;
int64_t $tmp450 = $tmp448.value;
bool $tmp451 = $tmp449 == $tmp450;
frost$core$Bit $tmp452 = (frost$core$Bit) {$tmp451};
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp454 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp455 = *$tmp454;
*(&local7) = $tmp455;
org$frostlang$frostc$IR$Value** $tmp456 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp457 = *$tmp456;
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
org$frostlang$frostc$IR$Value* $tmp458 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local8) = $tmp457;
org$frostlang$frostc$Type** $tmp459 = (org$frostlang$frostc$Type**) (param0->$data + 32);
org$frostlang$frostc$Type* $tmp460 = *$tmp459;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
org$frostlang$frostc$Type* $tmp461 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local9) = $tmp460;
frost$core$Bit* $tmp462 = (frost$core$Bit*) (param0->$data + 40);
frost$core$Bit $tmp463 = *$tmp462;
*(&local10) = $tmp463;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:284
org$frostlang$frostc$IR$Value* $tmp464 = *(&local8);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:284:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn466 $tmp465 = ($fn466) ((frost$core$Object*) $tmp464)->$class->vtable[0];
frost$core$String* $tmp467 = $tmp465(((frost$core$Object*) $tmp464));
frost$core$String* $tmp468 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s469, $tmp467);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
frost$core$String* $tmp470 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp468, &$s471);
org$frostlang$frostc$Type* $tmp472 = *(&local9);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:284:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn474 $tmp473 = ($fn474) ((frost$core$Object*) $tmp472)->$class->vtable[0];
frost$core$String* $tmp475 = $tmp473(((frost$core$Object*) $tmp472));
frost$core$String* $tmp476 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp470, $tmp475);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$String* $tmp477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp476, &$s478);
frost$core$Bit $tmp479 = *(&local10);
frost$core$Bit$wrapper* $tmp480;
$tmp480 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp480->value = $tmp479;
ITable* $tmp481 = ((frost$core$Formattable*) $tmp480)->$class->itable;
while ($tmp481->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp481 = $tmp481->next;
}
$fn483 $tmp482 = $tmp481->methods[0];
frost$core$String* $tmp484 = $tmp482(((frost$core$Formattable*) $tmp480), &$s485);
frost$core$String* $tmp486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp477, $tmp484);
frost$core$String* $tmp487 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp486, &$s488);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp480)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
org$frostlang$frostc$Type* $tmp489 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp490 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp487;
block14:;
frost$core$Int $tmp491 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:286:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp492 = $tmp376.value;
int64_t $tmp493 = $tmp491.value;
bool $tmp494 = $tmp492 == $tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp497 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp498 = *$tmp497;
frost$core$String** $tmp499 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp500 = *$tmp499;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$core$String* $tmp501 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local11) = $tmp500;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:287
frost$core$String* $tmp502 = *(&local11);
frost$core$String* $tmp503 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s504, $tmp502);
frost$core$String* $tmp505 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp503, &$s506);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$String* $tmp507 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local11) = ((frost$core$String*) NULL);
return $tmp505;
block19:;
frost$core$Int $tmp508 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:289:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp509 = $tmp376.value;
int64_t $tmp510 = $tmp508.value;
bool $tmp511 = $tmp509 == $tmp510;
frost$core$Bit $tmp512 = (frost$core$Bit) {$tmp511};
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block21; else goto block22;
block21:;
org$frostlang$frostc$Position* $tmp514 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp515 = *$tmp514;
*(&local12) = $tmp515;
org$frostlang$frostc$IR$Value** $tmp516 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp517 = *$tmp516;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
org$frostlang$frostc$IR$Value* $tmp518 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local13) = $tmp517;
org$frostlang$frostc$IR$Block$ID* $tmp519 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp520 = *$tmp519;
*(&local14) = $tmp520;
org$frostlang$frostc$IR$Block$ID* $tmp521 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp522 = *$tmp521;
*(&local15) = $tmp522;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:290
org$frostlang$frostc$IR$Value* $tmp523 = *(&local13);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:290:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn525 $tmp524 = ($fn525) ((frost$core$Object*) $tmp523)->$class->vtable[0];
frost$core$String* $tmp526 = $tmp524(((frost$core$Object*) $tmp523));
frost$core$String* $tmp527 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s528, $tmp526);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$String* $tmp529 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp527, &$s530);
org$frostlang$frostc$IR$Block$ID $tmp531 = *(&local14);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp532;
$tmp532 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp532->value = $tmp531;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:290:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn534 $tmp533 = ($fn534) ((frost$core$Object*) $tmp532)->$class->vtable[0];
frost$core$String* $tmp535 = $tmp533(((frost$core$Object*) $tmp532));
frost$core$String* $tmp536 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp529, $tmp535);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
frost$core$String* $tmp537 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp536, &$s538);
org$frostlang$frostc$IR$Block$ID $tmp539 = *(&local15);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp540;
$tmp540 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp540->value = $tmp539;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:290:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn542 $tmp541 = ($fn542) ((frost$core$Object*) $tmp540)->$class->vtable[0];
frost$core$String* $tmp543 = $tmp541(((frost$core$Object*) $tmp540));
frost$core$String* $tmp544 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp537, $tmp543);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
frost$core$String* $tmp545 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp544, &$s546);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
org$frostlang$frostc$IR$Value* $tmp547 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp545;
block22:;
frost$core$Int $tmp548 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:292:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp549 = $tmp376.value;
int64_t $tmp550 = $tmp548.value;
bool $tmp551 = $tmp549 == $tmp550;
frost$core$Bit $tmp552 = (frost$core$Bit) {$tmp551};
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Position* $tmp554 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp555 = *$tmp554;
*(&local16) = $tmp555;
org$frostlang$frostc$ClassDecl** $tmp556 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp557 = *$tmp556;
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
org$frostlang$frostc$ClassDecl* $tmp558 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local17) = $tmp557;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:293
org$frostlang$frostc$ClassDecl* $tmp559 = *(&local17);
frost$core$String** $tmp560 = &$tmp559->name;
frost$core$String* $tmp561 = *$tmp560;
frost$core$String* $tmp562 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s563, $tmp561);
frost$core$String* $tmp564 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp562, &$s565);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
org$frostlang$frostc$ClassDecl* $tmp566 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp564;
block28:;
frost$core$Int $tmp567 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:295:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp568 = $tmp376.value;
int64_t $tmp569 = $tmp567.value;
bool $tmp570 = $tmp568 == $tmp569;
frost$core$Bit $tmp571 = (frost$core$Bit) {$tmp570};
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp573 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp574 = *$tmp573;
*(&local18) = $tmp574;
org$frostlang$frostc$ClassDecl** $tmp575 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp576 = *$tmp575;
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
org$frostlang$frostc$ClassDecl* $tmp577 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local19) = $tmp576;
org$frostlang$frostc$FixedArray** $tmp578 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp579 = *$tmp578;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
org$frostlang$frostc$FixedArray* $tmp580 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local20) = $tmp579;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:296
org$frostlang$frostc$ClassDecl* $tmp581 = *(&local19);
frost$core$String** $tmp582 = &$tmp581->name;
frost$core$String* $tmp583 = *$tmp582;
frost$core$String* $tmp584 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s585, $tmp583);
frost$core$String* $tmp586 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp584, &$s587);
org$frostlang$frostc$FixedArray* $tmp588 = *(&local20);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:296:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn590 $tmp589 = ($fn590) ((frost$core$Object*) $tmp588)->$class->vtable[0];
frost$core$String* $tmp591 = $tmp589(((frost$core$Object*) $tmp588));
frost$core$String* $tmp592 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp586, $tmp591);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$core$String* $tmp593 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp592, &$s594);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
org$frostlang$frostc$FixedArray* $tmp595 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp596 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp593;
block31:;
frost$core$Int $tmp597 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:298:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp598 = $tmp376.value;
int64_t $tmp599 = $tmp597.value;
bool $tmp600 = $tmp598 == $tmp599;
frost$core$Bit $tmp601 = (frost$core$Bit) {$tmp600};
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp603 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp604 = *$tmp603;
*(&local21) = $tmp604;
org$frostlang$frostc$IR$Value** $tmp605 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp606 = *$tmp605;
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
org$frostlang$frostc$IR$Value* $tmp607 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local22) = $tmp606;
org$frostlang$frostc$FixedArray** $tmp608 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp609 = *$tmp608;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
org$frostlang$frostc$FixedArray* $tmp610 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local23) = $tmp609;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:299
org$frostlang$frostc$IR$Value* $tmp611 = *(&local22);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:299:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn613 $tmp612 = ($fn613) ((frost$core$Object*) $tmp611)->$class->vtable[0];
frost$core$String* $tmp614 = $tmp612(((frost$core$Object*) $tmp611));
frost$core$String* $tmp615 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s616, $tmp614);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$String* $tmp617 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp615, &$s618);
org$frostlang$frostc$FixedArray* $tmp619 = *(&local23);
ITable* $tmp620 = ((frost$collections$CollectionView*) $tmp619)->$class->itable;
while ($tmp620->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp620 = $tmp620->next;
}
$fn622 $tmp621 = $tmp620->methods[3];
frost$core$String* $tmp623 = $tmp621(((frost$collections$CollectionView*) $tmp619), &$s624);
frost$core$String* $tmp625 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp617, $tmp623);
frost$core$String* $tmp626 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp625, &$s627);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
org$frostlang$frostc$FixedArray* $tmp628 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp629 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp626;
block35:;
frost$core$Int $tmp630 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:301:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp631 = $tmp376.value;
int64_t $tmp632 = $tmp630.value;
bool $tmp633 = $tmp631 == $tmp632;
frost$core$Bit $tmp634 = (frost$core$Bit) {$tmp633};
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:302
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s636));
return &$s637;
block39:;
frost$core$Int $tmp638 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:304:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp639 = $tmp376.value;
int64_t $tmp640 = $tmp638.value;
bool $tmp641 = $tmp639 == $tmp640;
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Position* $tmp644 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp645 = *$tmp644;
*(&local24) = $tmp645;
org$frostlang$frostc$IR$Value** $tmp646 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp647 = *$tmp646;
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
org$frostlang$frostc$IR$Value* $tmp648 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local25) = $tmp647;
org$frostlang$frostc$FieldDecl** $tmp649 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp650 = *$tmp649;
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
org$frostlang$frostc$FieldDecl* $tmp651 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local26) = $tmp650;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:305
org$frostlang$frostc$IR$Value* $tmp652 = *(&local25);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:305:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn654 $tmp653 = ($fn654) ((frost$core$Object*) $tmp652)->$class->vtable[0];
frost$core$String* $tmp655 = $tmp653(((frost$core$Object*) $tmp652));
frost$core$String* $tmp656 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s657, $tmp655);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$String* $tmp658 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp656, &$s659);
org$frostlang$frostc$FieldDecl* $tmp660 = *(&local26);
frost$core$Weak** $tmp661 = &$tmp660->owner;
frost$core$Weak* $tmp662 = *$tmp661;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from IR.frost:305:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp663 = &$tmp662->_valid;
frost$core$Bit $tmp664 = *$tmp663;
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block47; else goto block48;
block48:;
frost$core$Int $tmp666 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s667, $tmp666);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp668 = &$tmp662->value;
frost$core$Object* $tmp669 = *$tmp668;
frost$core$Frost$ref$frost$core$Object$Q($tmp669);
frost$core$String** $tmp670 = &((org$frostlang$frostc$ClassDecl*) $tmp669)->name;
frost$core$String* $tmp671 = *$tmp670;
frost$core$String* $tmp672 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp658, $tmp671);
frost$core$String* $tmp673 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp672, &$s674);
org$frostlang$frostc$FieldDecl* $tmp675 = *(&local26);
frost$core$String** $tmp676 = &((org$frostlang$frostc$Symbol*) $tmp675)->name;
frost$core$String* $tmp677 = *$tmp676;
frost$core$String* $tmp678 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp673, $tmp677);
frost$core$String* $tmp679 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp678, &$s680);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
frost$core$Frost$unref$frost$core$Object$Q($tmp669);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
org$frostlang$frostc$FieldDecl* $tmp681 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp682 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp679;
block42:;
frost$core$Int $tmp683 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:307:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp684 = $tmp376.value;
int64_t $tmp685 = $tmp683.value;
bool $tmp686 = $tmp684 == $tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block49; else goto block50;
block49:;
org$frostlang$frostc$Position* $tmp689 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp690 = *$tmp689;
*(&local27) = $tmp690;
org$frostlang$frostc$IR$Value** $tmp691 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp692 = *$tmp691;
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
org$frostlang$frostc$IR$Value* $tmp693 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
*(&local28) = $tmp692;
org$frostlang$frostc$ChoiceCase** $tmp694 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp695 = *$tmp694;
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
org$frostlang$frostc$ChoiceCase* $tmp696 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local29) = $tmp695;
frost$core$Int* $tmp697 = (frost$core$Int*) (param0->$data + 40);
frost$core$Int $tmp698 = *$tmp697;
*(&local30) = $tmp698;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:308
org$frostlang$frostc$IR$Value* $tmp699 = *(&local28);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:308:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn701 $tmp700 = ($fn701) ((frost$core$Object*) $tmp699)->$class->vtable[0];
frost$core$String* $tmp702 = $tmp700(((frost$core$Object*) $tmp699));
frost$core$String* $tmp703 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s704, $tmp702);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$String* $tmp705 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp703, &$s706);
org$frostlang$frostc$ChoiceCase* $tmp707 = *(&local29);
frost$core$String** $tmp708 = &((org$frostlang$frostc$Symbol*) $tmp707)->name;
frost$core$String* $tmp709 = *$tmp708;
frost$core$String* $tmp710 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp705, $tmp709);
frost$core$String* $tmp711 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp710, &$s712);
frost$core$Int $tmp713 = *(&local30);
frost$core$Int$wrapper* $tmp714;
$tmp714 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp714->value = $tmp713;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:308:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn716 $tmp715 = ($fn716) ((frost$core$Object*) $tmp714)->$class->vtable[0];
frost$core$String* $tmp717 = $tmp715(((frost$core$Object*) $tmp714));
frost$core$String* $tmp718 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp711, $tmp717);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
frost$core$String* $tmp719 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp718, &$s720);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
org$frostlang$frostc$ChoiceCase* $tmp721 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$IR$Value* $tmp722 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp719;
block50:;
frost$core$Int $tmp723 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:310:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp724 = $tmp376.value;
int64_t $tmp725 = $tmp723.value;
bool $tmp726 = $tmp724 == $tmp725;
frost$core$Bit $tmp727 = (frost$core$Bit) {$tmp726};
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp729 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp730 = *$tmp729;
*(&local31) = $tmp730;
org$frostlang$frostc$IR$Value** $tmp731 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp732 = *$tmp731;
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
org$frostlang$frostc$IR$Value* $tmp733 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local32) = $tmp732;
org$frostlang$frostc$FieldDecl** $tmp734 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp735 = *$tmp734;
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
org$frostlang$frostc$FieldDecl* $tmp736 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local33) = $tmp735;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:311
org$frostlang$frostc$IR$Value* $tmp737 = *(&local32);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:311:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn739 $tmp738 = ($fn739) ((frost$core$Object*) $tmp737)->$class->vtable[0];
frost$core$String* $tmp740 = $tmp738(((frost$core$Object*) $tmp737));
frost$core$String* $tmp741 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s742, $tmp740);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$String* $tmp743 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp741, &$s744);
org$frostlang$frostc$FieldDecl* $tmp745 = *(&local33);
frost$core$Weak** $tmp746 = &$tmp745->owner;
frost$core$Weak* $tmp747 = *$tmp746;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from IR.frost:311:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp748 = &$tmp747->_valid;
frost$core$Bit $tmp749 = *$tmp748;
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block60; else goto block61;
block61:;
frost$core$Int $tmp751 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s752, $tmp751);
abort(); // unreachable
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp753 = &$tmp747->value;
frost$core$Object* $tmp754 = *$tmp753;
frost$core$Frost$ref$frost$core$Object$Q($tmp754);
frost$core$String** $tmp755 = &((org$frostlang$frostc$ClassDecl*) $tmp754)->name;
frost$core$String* $tmp756 = *$tmp755;
frost$core$String* $tmp757 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp743, $tmp756);
frost$core$String* $tmp758 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp757, &$s759);
org$frostlang$frostc$FieldDecl* $tmp760 = *(&local33);
frost$core$String** $tmp761 = &((org$frostlang$frostc$Symbol*) $tmp760)->name;
frost$core$String* $tmp762 = *$tmp761;
frost$core$String* $tmp763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp758, $tmp762);
frost$core$String* $tmp764 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp763, &$s765);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$core$Frost$unref$frost$core$Object$Q($tmp754);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
org$frostlang$frostc$FieldDecl* $tmp766 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp767 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp764;
block55:;
frost$core$Int $tmp768 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:313:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp769 = $tmp376.value;
int64_t $tmp770 = $tmp768.value;
bool $tmp771 = $tmp769 == $tmp770;
frost$core$Bit $tmp772 = (frost$core$Bit) {$tmp771};
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp774 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp775 = *$tmp774;
*(&local34) = $tmp775;
org$frostlang$frostc$IR$Value** $tmp776 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp777 = *$tmp776;
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
org$frostlang$frostc$IR$Value* $tmp778 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local35) = $tmp777;
org$frostlang$frostc$ClassDecl** $tmp779 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 32);
org$frostlang$frostc$ClassDecl* $tmp780 = *$tmp779;
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
org$frostlang$frostc$ClassDecl* $tmp781 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local36) = $tmp780;
frost$core$Int* $tmp782 = (frost$core$Int*) (param0->$data + 40);
frost$core$Int $tmp783 = *$tmp782;
*(&local37) = $tmp783;
org$frostlang$frostc$Type** $tmp784 = (org$frostlang$frostc$Type**) (param0->$data + 48);
org$frostlang$frostc$Type* $tmp785 = *$tmp784;
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
org$frostlang$frostc$Type* $tmp786 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
*(&local38) = $tmp785;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:314
org$frostlang$frostc$IR$Value* $tmp787 = *(&local35);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:314:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn789 $tmp788 = ($fn789) ((frost$core$Object*) $tmp787)->$class->vtable[0];
frost$core$String* $tmp790 = $tmp788(((frost$core$Object*) $tmp787));
frost$core$String* $tmp791 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s792, $tmp790);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$String* $tmp793 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp791, &$s794);
org$frostlang$frostc$ClassDecl* $tmp795 = *(&local36);
frost$core$String** $tmp796 = &$tmp795->name;
frost$core$String* $tmp797 = *$tmp796;
frost$core$String* $tmp798 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp793, $tmp797);
frost$core$String* $tmp799 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp798, &$s800);
frost$core$Int $tmp801 = *(&local37);
frost$core$Int$wrapper* $tmp802;
$tmp802 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp802->value = $tmp801;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:314:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn804 $tmp803 = ($fn804) ((frost$core$Object*) $tmp802)->$class->vtable[0];
frost$core$String* $tmp805 = $tmp803(((frost$core$Object*) $tmp802));
frost$core$String* $tmp806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp799, $tmp805);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$String* $tmp807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp806, &$s808);
org$frostlang$frostc$Type* $tmp809 = *(&local38);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:314:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn811 $tmp810 = ($fn811) ((frost$core$Object*) $tmp809)->$class->vtable[0];
frost$core$String* $tmp812 = $tmp810(((frost$core$Object*) $tmp809));
frost$core$String* $tmp813 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp807, $tmp812);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
frost$core$String* $tmp814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp813, &$s815);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
org$frostlang$frostc$Type* $tmp816 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp817 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp818 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp814;
block63:;
frost$core$Int $tmp819 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:316:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp820 = $tmp376.value;
int64_t $tmp821 = $tmp819.value;
bool $tmp822 = $tmp820 == $tmp821;
frost$core$Bit $tmp823 = (frost$core$Bit) {$tmp822};
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp825 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp826 = *$tmp825;
*(&local39) = $tmp826;
org$frostlang$frostc$IR$Value** $tmp827 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp828 = *$tmp827;
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
org$frostlang$frostc$IR$Value* $tmp829 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
*(&local40) = $tmp828;
frost$core$Int* $tmp830 = (frost$core$Int*) (param0->$data + 32);
frost$core$Int $tmp831 = *$tmp830;
*(&local41) = $tmp831;
org$frostlang$frostc$Type** $tmp832 = (org$frostlang$frostc$Type**) (param0->$data + 40);
org$frostlang$frostc$Type* $tmp833 = *$tmp832;
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
org$frostlang$frostc$Type* $tmp834 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local42) = $tmp833;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:317
org$frostlang$frostc$IR$Value* $tmp835 = *(&local40);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:317:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn837 $tmp836 = ($fn837) ((frost$core$Object*) $tmp835)->$class->vtable[0];
frost$core$String* $tmp838 = $tmp836(((frost$core$Object*) $tmp835));
frost$core$String* $tmp839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s840, $tmp838);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
frost$core$String* $tmp841 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp839, &$s842);
frost$core$Int $tmp843 = *(&local41);
frost$core$Int$wrapper* $tmp844;
$tmp844 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp844->value = $tmp843;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:317:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn846 $tmp845 = ($fn846) ((frost$core$Object*) $tmp844)->$class->vtable[0];
frost$core$String* $tmp847 = $tmp845(((frost$core$Object*) $tmp844));
frost$core$String* $tmp848 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp841, $tmp847);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$core$String* $tmp849 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp848, &$s850);
org$frostlang$frostc$Type* $tmp851 = *(&local42);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:317:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn853 $tmp852 = ($fn853) ((frost$core$Object*) $tmp851)->$class->vtable[0];
frost$core$String* $tmp854 = $tmp852(((frost$core$Object*) $tmp851));
frost$core$String* $tmp855 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp849, $tmp854);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
frost$core$String* $tmp856 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp855, &$s857);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
org$frostlang$frostc$Type* $tmp858 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp859 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp856;
block69:;
frost$core$Int $tmp860 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:319:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp861 = $tmp376.value;
int64_t $tmp862 = $tmp860.value;
bool $tmp863 = $tmp861 == $tmp862;
frost$core$Bit $tmp864 = (frost$core$Bit) {$tmp863};
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp866 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp867 = *$tmp866;
*(&local43) = $tmp867;
org$frostlang$frostc$IR$Value** $tmp868 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp869 = *$tmp868;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
org$frostlang$frostc$IR$Value* $tmp870 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local44) = $tmp869;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:320
org$frostlang$frostc$IR$Value* $tmp871 = *(&local44);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:320:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn873 $tmp872 = ($fn873) ((frost$core$Object*) $tmp871)->$class->vtable[0];
frost$core$String* $tmp874 = $tmp872(((frost$core$Object*) $tmp871));
frost$core$String* $tmp875 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s876, $tmp874);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
frost$core$String* $tmp877 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp875, &$s878);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
org$frostlang$frostc$IR$Value* $tmp879 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp877;
block75:;
frost$core$Int $tmp880 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:322:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp881 = $tmp376.value;
int64_t $tmp882 = $tmp880.value;
bool $tmp883 = $tmp881 == $tmp882;
frost$core$Bit $tmp884 = (frost$core$Bit) {$tmp883};
bool $tmp885 = $tmp884.value;
if ($tmp885) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp886 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp887 = *$tmp886;
*(&local45) = $tmp887;
org$frostlang$frostc$IR$Value** $tmp888 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp889 = *$tmp888;
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
org$frostlang$frostc$IR$Value* $tmp890 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local46) = $tmp889;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:323
org$frostlang$frostc$IR$Value* $tmp891 = *(&local46);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:323:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn893 $tmp892 = ($fn893) ((frost$core$Object*) $tmp891)->$class->vtable[0];
frost$core$String* $tmp894 = $tmp892(((frost$core$Object*) $tmp891));
frost$core$String* $tmp895 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s896, $tmp894);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$core$String* $tmp897 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp895, &$s898);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
org$frostlang$frostc$IR$Value* $tmp899 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp897;
block79:;
frost$core$Int $tmp900 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:325:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp901 = $tmp376.value;
int64_t $tmp902 = $tmp900.value;
bool $tmp903 = $tmp901 == $tmp902;
frost$core$Bit $tmp904 = (frost$core$Bit) {$tmp903};
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Position* $tmp906 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp907 = *$tmp906;
*(&local47) = $tmp907;
org$frostlang$frostc$IR$Value** $tmp908 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp909 = *$tmp908;
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
org$frostlang$frostc$IR$Value* $tmp910 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local48) = $tmp909;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:326
org$frostlang$frostc$IR$Value* $tmp911 = *(&local48);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:326:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn913 $tmp912 = ($fn913) ((frost$core$Object*) $tmp911)->$class->vtable[0];
frost$core$String* $tmp914 = $tmp912(((frost$core$Object*) $tmp911));
frost$core$String* $tmp915 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s916, $tmp914);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$String* $tmp917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp915, &$s918);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
org$frostlang$frostc$IR$Value* $tmp919 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp917;
block83:;
frost$core$Int $tmp920 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:328:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp921 = $tmp376.value;
int64_t $tmp922 = $tmp920.value;
bool $tmp923 = $tmp921 == $tmp922;
frost$core$Bit $tmp924 = (frost$core$Bit) {$tmp923};
bool $tmp925 = $tmp924.value;
if ($tmp925) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp926 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp927 = *$tmp926;
*(&local49) = $tmp927;
org$frostlang$frostc$IR$Value** $tmp928 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp929 = *$tmp928;
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
org$frostlang$frostc$IR$Value* $tmp930 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
*(&local50) = $tmp929;
org$frostlang$frostc$Type** $tmp931 = (org$frostlang$frostc$Type**) (param0->$data + 32);
org$frostlang$frostc$Type* $tmp932 = *$tmp931;
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
org$frostlang$frostc$Type* $tmp933 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local51) = $tmp932;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:329
org$frostlang$frostc$IR$Value* $tmp934 = *(&local50);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:329:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn936 $tmp935 = ($fn936) ((frost$core$Object*) $tmp934)->$class->vtable[0];
frost$core$String* $tmp937 = $tmp935(((frost$core$Object*) $tmp934));
frost$core$String* $tmp938 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s939, $tmp937);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
frost$core$String* $tmp940 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp938, &$s941);
org$frostlang$frostc$Type* $tmp942 = *(&local51);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:329:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn944 $tmp943 = ($fn944) ((frost$core$Object*) $tmp942)->$class->vtable[0];
frost$core$String* $tmp945 = $tmp943(((frost$core$Object*) $tmp942));
frost$core$String* $tmp946 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp940, $tmp945);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$core$String* $tmp947 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp946, &$s948);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
org$frostlang$frostc$Type* $tmp949 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp950 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp947;
block87:;
frost$core$Int $tmp951 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:331:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp952 = $tmp376.value;
int64_t $tmp953 = $tmp951.value;
bool $tmp954 = $tmp952 == $tmp953;
frost$core$Bit $tmp955 = (frost$core$Bit) {$tmp954};
bool $tmp956 = $tmp955.value;
if ($tmp956) goto block91; else goto block92;
block91:;
org$frostlang$frostc$Position* $tmp957 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp958 = *$tmp957;
*(&local52) = $tmp958;
org$frostlang$frostc$IR$Value** $tmp959 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp960 = *$tmp959;
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
org$frostlang$frostc$IR$Value* $tmp961 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
*(&local53) = $tmp960;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:332
org$frostlang$frostc$IR$Value* $tmp962 = *(&local53);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:332:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn964 $tmp963 = ($fn964) ((frost$core$Object*) $tmp962)->$class->vtable[0];
frost$core$String* $tmp965 = $tmp963(((frost$core$Object*) $tmp962));
frost$core$String* $tmp966 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s967, $tmp965);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
frost$core$String* $tmp968 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp966, &$s969);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
org$frostlang$frostc$IR$Value* $tmp970 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp968;
block92:;
frost$core$Int $tmp971 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:334:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp972 = $tmp376.value;
int64_t $tmp973 = $tmp971.value;
bool $tmp974 = $tmp972 == $tmp973;
frost$core$Bit $tmp975 = (frost$core$Bit) {$tmp974};
bool $tmp976 = $tmp975.value;
if ($tmp976) goto block95; else goto block96;
block95:;
org$frostlang$frostc$Position* $tmp977 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp978 = *$tmp977;
*(&local54) = $tmp978;
org$frostlang$frostc$IR$Value** $tmp979 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp980 = *$tmp979;
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
org$frostlang$frostc$IR$Value* $tmp981 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
*(&local55) = $tmp980;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:335
org$frostlang$frostc$IR$Value* $tmp982 = *(&local55);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:335:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn984 $tmp983 = ($fn984) ((frost$core$Object*) $tmp982)->$class->vtable[0];
frost$core$String* $tmp985 = $tmp983(((frost$core$Object*) $tmp982));
frost$core$String* $tmp986 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s987, $tmp985);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
frost$core$String* $tmp988 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp986, &$s989);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
org$frostlang$frostc$IR$Value* $tmp990 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp988;
block96:;
frost$core$Int $tmp991 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:337:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp992 = $tmp376.value;
int64_t $tmp993 = $tmp991.value;
bool $tmp994 = $tmp992 == $tmp993;
frost$core$Bit $tmp995 = (frost$core$Bit) {$tmp994};
bool $tmp996 = $tmp995.value;
if ($tmp996) goto block99; else goto block100;
block99:;
org$frostlang$frostc$Position* $tmp997 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp998 = *$tmp997;
*(&local56) = $tmp998;
org$frostlang$frostc$IR$Value** $tmp999 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1000 = *$tmp999;
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
org$frostlang$frostc$IR$Value* $tmp1001 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local57) = $tmp1000;
org$frostlang$frostc$IR$Value** $tmp1002 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1003 = *$tmp1002;
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
org$frostlang$frostc$IR$Value* $tmp1004 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local58) = $tmp1003;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:338
org$frostlang$frostc$IR$Value* $tmp1005 = *(&local57);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:338:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1007 $tmp1006 = ($fn1007) ((frost$core$Object*) $tmp1005)->$class->vtable[0];
frost$core$String* $tmp1008 = $tmp1006(((frost$core$Object*) $tmp1005));
frost$core$String* $tmp1009 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1010, $tmp1008);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
frost$core$String* $tmp1011 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1009, &$s1012);
org$frostlang$frostc$IR$Value* $tmp1013 = *(&local58);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:338:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1015 $tmp1014 = ($fn1015) ((frost$core$Object*) $tmp1013)->$class->vtable[0];
frost$core$String* $tmp1016 = $tmp1014(((frost$core$Object*) $tmp1013));
frost$core$String* $tmp1017 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1011, $tmp1016);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$String* $tmp1018 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1017, &$s1019);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
org$frostlang$frostc$IR$Value* $tmp1020 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1021 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1018;
block100:;
frost$core$Int $tmp1022 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:340:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1023 = $tmp376.value;
int64_t $tmp1024 = $tmp1022.value;
bool $tmp1025 = $tmp1023 == $tmp1024;
frost$core$Bit $tmp1026 = (frost$core$Bit) {$tmp1025};
bool $tmp1027 = $tmp1026.value;
if ($tmp1027) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp1028 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1029 = *$tmp1028;
*(&local59) = $tmp1029;
org$frostlang$frostc$IR$Value** $tmp1030 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1031 = *$tmp1030;
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
org$frostlang$frostc$IR$Value* $tmp1032 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
*(&local60) = $tmp1031;
org$frostlang$frostc$IR$Value** $tmp1033 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1034 = *$tmp1033;
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
org$frostlang$frostc$IR$Value* $tmp1035 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
*(&local61) = $tmp1034;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:341
org$frostlang$frostc$IR$Value* $tmp1036 = *(&local60);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:341:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1038 $tmp1037 = ($fn1038) ((frost$core$Object*) $tmp1036)->$class->vtable[0];
frost$core$String* $tmp1039 = $tmp1037(((frost$core$Object*) $tmp1036));
frost$core$String* $tmp1040 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1041, $tmp1039);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
frost$core$String* $tmp1042 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1040, &$s1043);
org$frostlang$frostc$IR$Value* $tmp1044 = *(&local61);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:341:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1046 $tmp1045 = ($fn1046) ((frost$core$Object*) $tmp1044)->$class->vtable[0];
frost$core$String* $tmp1047 = $tmp1045(((frost$core$Object*) $tmp1044));
frost$core$String* $tmp1048 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1042, $tmp1047);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
frost$core$String* $tmp1049 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1048, &$s1050);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
org$frostlang$frostc$IR$Value* $tmp1051 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1052 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1049;
block105:;
frost$core$Int $tmp1053 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:343:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1054 = $tmp376.value;
int64_t $tmp1055 = $tmp1053.value;
bool $tmp1056 = $tmp1054 == $tmp1055;
frost$core$Bit $tmp1057 = (frost$core$Bit) {$tmp1056};
bool $tmp1058 = $tmp1057.value;
if ($tmp1058) goto block109; else goto block110;
block109:;
org$frostlang$frostc$Position* $tmp1059 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1060 = *$tmp1059;
*(&local62) = $tmp1060;
org$frostlang$frostc$IR$Value** $tmp1061 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1062 = *$tmp1061;
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
org$frostlang$frostc$IR$Value* $tmp1063 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
*(&local63) = $tmp1062;
org$frostlang$frostc$IR$Value** $tmp1064 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1065 = *$tmp1064;
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
org$frostlang$frostc$IR$Value* $tmp1066 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
*(&local64) = $tmp1065;
org$frostlang$frostc$IR$Value** $tmp1067 = (org$frostlang$frostc$IR$Value**) (param0->$data + 40);
org$frostlang$frostc$IR$Value* $tmp1068 = *$tmp1067;
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
org$frostlang$frostc$IR$Value* $tmp1069 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
*(&local65) = $tmp1068;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:344
org$frostlang$frostc$IR$Value* $tmp1070 = *(&local63);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:344:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1072 $tmp1071 = ($fn1072) ((frost$core$Object*) $tmp1070)->$class->vtable[0];
frost$core$String* $tmp1073 = $tmp1071(((frost$core$Object*) $tmp1070));
frost$core$String* $tmp1074 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1075, $tmp1073);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
frost$core$String* $tmp1076 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1074, &$s1077);
org$frostlang$frostc$IR$Value* $tmp1078 = *(&local64);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:344:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1080 $tmp1079 = ($fn1080) ((frost$core$Object*) $tmp1078)->$class->vtable[0];
frost$core$String* $tmp1081 = $tmp1079(((frost$core$Object*) $tmp1078));
frost$core$String* $tmp1082 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1076, $tmp1081);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
frost$core$String* $tmp1083 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1082, &$s1084);
org$frostlang$frostc$IR$Value* $tmp1085 = *(&local65);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:344:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1087 $tmp1086 = ($fn1087) ((frost$core$Object*) $tmp1085)->$class->vtable[0];
frost$core$String* $tmp1088 = $tmp1086(((frost$core$Object*) $tmp1085));
frost$core$String* $tmp1089 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1083, $tmp1088);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
frost$core$String* $tmp1090 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1089, &$s1091);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
org$frostlang$frostc$IR$Value* $tmp1092 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1093 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1094 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1090;
block110:;
frost$core$Int $tmp1095 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:346:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1096 = $tmp376.value;
int64_t $tmp1097 = $tmp1095.value;
bool $tmp1098 = $tmp1096 == $tmp1097;
frost$core$Bit $tmp1099 = (frost$core$Bit) {$tmp1098};
bool $tmp1100 = $tmp1099.value;
if ($tmp1100) goto block115; else goto block116;
block115:;
org$frostlang$frostc$Position* $tmp1101 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1102 = *$tmp1101;
*(&local66) = $tmp1102;
org$frostlang$frostc$IR$Value** $tmp1103 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1104 = *$tmp1103;
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
org$frostlang$frostc$IR$Value* $tmp1105 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local67) = $tmp1104;
org$frostlang$frostc$IR$Value** $tmp1106 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1107 = *$tmp1106;
*(&local68) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
org$frostlang$frostc$IR$Value* $tmp1108 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
*(&local68) = $tmp1107;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:347
org$frostlang$frostc$IR$Value* $tmp1109 = *(&local67);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:347:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1111 $tmp1110 = ($fn1111) ((frost$core$Object*) $tmp1109)->$class->vtable[0];
frost$core$String* $tmp1112 = $tmp1110(((frost$core$Object*) $tmp1109));
frost$core$String* $tmp1113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1114, $tmp1112);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
frost$core$String* $tmp1115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1113, &$s1116);
org$frostlang$frostc$IR$Value* $tmp1117 = *(&local68);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:347:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1119 $tmp1118 = ($fn1119) ((frost$core$Object*) $tmp1117)->$class->vtable[0];
frost$core$String* $tmp1120 = $tmp1118(((frost$core$Object*) $tmp1117));
frost$core$String* $tmp1121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1115, $tmp1120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
frost$core$String* $tmp1122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1121, &$s1123);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
org$frostlang$frostc$IR$Value* $tmp1124 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
*(&local68) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1125 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1122;
block116:;
frost$core$Int $tmp1126 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:349:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1127 = $tmp376.value;
int64_t $tmp1128 = $tmp1126.value;
bool $tmp1129 = $tmp1127 == $tmp1128;
frost$core$Bit $tmp1130 = (frost$core$Bit) {$tmp1129};
bool $tmp1131 = $tmp1130.value;
if ($tmp1131) goto block120; else goto block121;
block120:;
org$frostlang$frostc$Position* $tmp1132 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1133 = *$tmp1132;
*(&local69) = $tmp1133;
org$frostlang$frostc$IR$Value** $tmp1134 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1135 = *$tmp1134;
*(&local70) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
org$frostlang$frostc$IR$Value* $tmp1136 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
*(&local70) = $tmp1135;
org$frostlang$frostc$IR$Value** $tmp1137 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1138 = *$tmp1137;
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
org$frostlang$frostc$IR$Value* $tmp1139 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local71) = $tmp1138;
org$frostlang$frostc$IR$Value** $tmp1140 = (org$frostlang$frostc$IR$Value**) (param0->$data + 40);
org$frostlang$frostc$IR$Value* $tmp1141 = *$tmp1140;
*(&local72) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
org$frostlang$frostc$IR$Value* $tmp1142 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local72) = $tmp1141;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:350
org$frostlang$frostc$IR$Value* $tmp1143 = *(&local70);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:350:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1145 $tmp1144 = ($fn1145) ((frost$core$Object*) $tmp1143)->$class->vtable[0];
frost$core$String* $tmp1146 = $tmp1144(((frost$core$Object*) $tmp1143));
frost$core$String* $tmp1147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1148, $tmp1146);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$String* $tmp1149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1147, &$s1150);
org$frostlang$frostc$IR$Value* $tmp1151 = *(&local71);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:350:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1153 $tmp1152 = ($fn1153) ((frost$core$Object*) $tmp1151)->$class->vtable[0];
frost$core$String* $tmp1154 = $tmp1152(((frost$core$Object*) $tmp1151));
frost$core$String* $tmp1155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1149, $tmp1154);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
frost$core$String* $tmp1156 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1155, &$s1157);
org$frostlang$frostc$IR$Value* $tmp1158 = *(&local72);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:350:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1160 $tmp1159 = ($fn1160) ((frost$core$Object*) $tmp1158)->$class->vtable[0];
frost$core$String* $tmp1161 = $tmp1159(((frost$core$Object*) $tmp1158));
frost$core$String* $tmp1162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1156, $tmp1161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$String* $tmp1163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1162, &$s1164);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
org$frostlang$frostc$IR$Value* $tmp1165 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local72) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1166 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1167 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local70) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1163;
block121:;
frost$core$Int $tmp1168 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:352:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1169 = $tmp376.value;
int64_t $tmp1170 = $tmp1168.value;
bool $tmp1171 = $tmp1169 == $tmp1170;
frost$core$Bit $tmp1172 = (frost$core$Bit) {$tmp1171};
bool $tmp1173 = $tmp1172.value;
if ($tmp1173) goto block126; else goto block127;
block126:;
org$frostlang$frostc$Position* $tmp1174 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1175 = *$tmp1174;
*(&local73) = $tmp1175;
org$frostlang$frostc$IR$Value** $tmp1176 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1177 = *$tmp1176;
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
org$frostlang$frostc$IR$Value* $tmp1178 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local74) = $tmp1177;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:353
org$frostlang$frostc$IR$Value* $tmp1179 = *(&local74);
frost$core$Bit $tmp1180 = (frost$core$Bit) {$tmp1179 != NULL};
bool $tmp1181 = $tmp1180.value;
if ($tmp1181) goto block129; else goto block130;
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:354
org$frostlang$frostc$IR$Value* $tmp1182 = *(&local74);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:354:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1184 $tmp1183 = ($fn1184) ((frost$core$Object*) $tmp1182)->$class->vtable[0];
frost$core$String* $tmp1185 = $tmp1183(((frost$core$Object*) $tmp1182));
frost$core$String* $tmp1186 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1187, $tmp1185);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$core$String* $tmp1188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1186, &$s1189);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
org$frostlang$frostc$IR$Value* $tmp1190 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1188;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:356
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1191));
org$frostlang$frostc$IR$Value* $tmp1192 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
return &$s1193;
block127:;
frost$core$Int $tmp1194 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:358:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1195 = $tmp376.value;
int64_t $tmp1196 = $tmp1194.value;
bool $tmp1197 = $tmp1195 == $tmp1196;
frost$core$Bit $tmp1198 = (frost$core$Bit) {$tmp1197};
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block132; else goto block133;
block132:;
org$frostlang$frostc$Position* $tmp1200 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1201 = *$tmp1200;
*(&local75) = $tmp1201;
org$frostlang$frostc$MethodDecl** $tmp1202 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 24);
org$frostlang$frostc$MethodDecl* $tmp1203 = *$tmp1202;
*(&local76) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
org$frostlang$frostc$MethodDecl* $tmp1204 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
*(&local76) = $tmp1203;
org$frostlang$frostc$FixedArray** $tmp1205 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1206 = *$tmp1205;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
org$frostlang$frostc$FixedArray* $tmp1207 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
*(&local77) = $tmp1206;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:359
org$frostlang$frostc$MethodDecl* $tmp1208 = *(&local76);
frost$core$String* $tmp1209 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp1208);
frost$core$String* $tmp1210 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1211, $tmp1209);
frost$core$String* $tmp1212 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1210, &$s1213);
org$frostlang$frostc$FixedArray* $tmp1214 = *(&local77);
ITable* $tmp1215 = ((frost$collections$CollectionView*) $tmp1214)->$class->itable;
while ($tmp1215->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1215 = $tmp1215->next;
}
$fn1217 $tmp1216 = $tmp1215->methods[3];
frost$core$String* $tmp1218 = $tmp1216(((frost$collections$CollectionView*) $tmp1214), &$s1219);
frost$core$String* $tmp1220 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1212, $tmp1218);
frost$core$String* $tmp1221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1220, &$s1222);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
org$frostlang$frostc$FixedArray* $tmp1223 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1224 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local76) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp1221;
block133:;
frost$core$Int $tmp1225 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:361:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1226 = $tmp376.value;
int64_t $tmp1227 = $tmp1225.value;
bool $tmp1228 = $tmp1226 == $tmp1227;
frost$core$Bit $tmp1229 = (frost$core$Bit) {$tmp1228};
bool $tmp1230 = $tmp1229.value;
if ($tmp1230) goto block135; else goto block136;
block135:;
org$frostlang$frostc$Position* $tmp1231 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1232 = *$tmp1231;
*(&local78) = $tmp1232;
org$frostlang$frostc$IR$Value** $tmp1233 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1234 = *$tmp1233;
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
org$frostlang$frostc$IR$Value* $tmp1235 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local79) = $tmp1234;
org$frostlang$frostc$IR$Value** $tmp1236 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1237 = *$tmp1236;
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
org$frostlang$frostc$IR$Value* $tmp1238 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
*(&local80) = $tmp1237;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:362
org$frostlang$frostc$IR$Value* $tmp1239 = *(&local79);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:362:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1241 $tmp1240 = ($fn1241) ((frost$core$Object*) $tmp1239)->$class->vtable[0];
frost$core$String* $tmp1242 = $tmp1240(((frost$core$Object*) $tmp1239));
frost$core$String* $tmp1243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1244, $tmp1242);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
frost$core$String* $tmp1245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1243, &$s1246);
org$frostlang$frostc$IR$Value* $tmp1247 = *(&local80);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:362:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1249 $tmp1248 = ($fn1249) ((frost$core$Object*) $tmp1247)->$class->vtable[0];
frost$core$String* $tmp1250 = $tmp1248(((frost$core$Object*) $tmp1247));
frost$core$String* $tmp1251 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1245, $tmp1250);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
frost$core$String* $tmp1252 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1251, &$s1253);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
org$frostlang$frostc$IR$Value* $tmp1254 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1255 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1252;
block136:;
frost$core$Int $tmp1256 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:364:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1257 = $tmp376.value;
int64_t $tmp1258 = $tmp1256.value;
bool $tmp1259 = $tmp1257 == $tmp1258;
frost$core$Bit $tmp1260 = (frost$core$Bit) {$tmp1259};
bool $tmp1261 = $tmp1260.value;
if ($tmp1261) goto block140; else goto block1;
block140:;
org$frostlang$frostc$Position* $tmp1262 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1263 = *$tmp1262;
*(&local81) = $tmp1263;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:365
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1264));
return &$s1265;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:368
frost$core$Int $tmp1266 = (frost$core$Int) {368u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1267, $tmp1266);
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
frost$core$Bit local10;
org$frostlang$frostc$Position local11;
frost$core$String* local12 = NULL;
org$frostlang$frostc$Position local13;
org$frostlang$frostc$IR$Value* local14 = NULL;
org$frostlang$frostc$ChoiceCase* local15 = NULL;
frost$core$Int local16;
org$frostlang$frostc$Position local17;
org$frostlang$frostc$IR$Value* local18 = NULL;
org$frostlang$frostc$IR$Block$ID local19;
org$frostlang$frostc$IR$Block$ID local20;
org$frostlang$frostc$Position local21;
org$frostlang$frostc$ClassDecl* local22 = NULL;
org$frostlang$frostc$Position local23;
org$frostlang$frostc$ClassDecl* local24 = NULL;
org$frostlang$frostc$FixedArray* local25 = NULL;
org$frostlang$frostc$Position local26;
org$frostlang$frostc$IR$Value* local27 = NULL;
org$frostlang$frostc$FixedArray* local28 = NULL;
org$frostlang$frostc$Position local29;
org$frostlang$frostc$IR$Value* local30 = NULL;
org$frostlang$frostc$FieldDecl* local31 = NULL;
org$frostlang$frostc$Position local32;
org$frostlang$frostc$IR$Value* local33 = NULL;
org$frostlang$frostc$FieldDecl* local34 = NULL;
org$frostlang$frostc$Position local35;
org$frostlang$frostc$IR$Value* local36 = NULL;
frost$core$Int local37;
org$frostlang$frostc$Type* local38 = NULL;
org$frostlang$frostc$Position local39;
org$frostlang$frostc$IR$Value* local40 = NULL;
org$frostlang$frostc$ClassDecl* local41 = NULL;
frost$core$Int local42;
org$frostlang$frostc$Type* local43 = NULL;
org$frostlang$frostc$Position local44;
org$frostlang$frostc$IR$Value* local45 = NULL;
org$frostlang$frostc$Position local46;
org$frostlang$frostc$IR$Value* local47 = NULL;
org$frostlang$frostc$Position local48;
org$frostlang$frostc$IR$Value* local49 = NULL;
org$frostlang$frostc$Position local50;
org$frostlang$frostc$IR$Value* local51 = NULL;
org$frostlang$frostc$Type* local52 = NULL;
org$frostlang$frostc$Position local53;
org$frostlang$frostc$IR$Value* local54 = NULL;
org$frostlang$frostc$Position local55;
org$frostlang$frostc$IR$Value* local56 = NULL;
org$frostlang$frostc$Position local57;
org$frostlang$frostc$IR$Value* local58 = NULL;
org$frostlang$frostc$IR$Value* local59 = NULL;
org$frostlang$frostc$Position local60;
org$frostlang$frostc$IR$Value* local61 = NULL;
org$frostlang$frostc$IR$Value* local62 = NULL;
org$frostlang$frostc$Position local63;
org$frostlang$frostc$IR$Value* local64 = NULL;
org$frostlang$frostc$IR$Value* local65 = NULL;
org$frostlang$frostc$IR$Value* local66 = NULL;
org$frostlang$frostc$Position local67;
org$frostlang$frostc$IR$Value* local68 = NULL;
org$frostlang$frostc$IR$Value* local69 = NULL;
org$frostlang$frostc$Position local70;
org$frostlang$frostc$IR$Value* local71 = NULL;
org$frostlang$frostc$IR$Value* local72 = NULL;
org$frostlang$frostc$IR$Value* local73 = NULL;
org$frostlang$frostc$Position local74;
org$frostlang$frostc$IR$Value* local75 = NULL;
org$frostlang$frostc$Position local76;
org$frostlang$frostc$MethodDecl* local77 = NULL;
org$frostlang$frostc$FixedArray* local78 = NULL;
org$frostlang$frostc$Position local79;
org$frostlang$frostc$IR$Value* local80 = NULL;
org$frostlang$frostc$IR$Value* local81 = NULL;
org$frostlang$frostc$Position local82;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1268 = &param0->$rawValue;
frost$core$Int $tmp1269 = *$tmp1268;
frost$core$Int $tmp1270 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1271 = $tmp1269.value;
int64_t $tmp1272 = $tmp1270.value;
bool $tmp1273 = $tmp1271 == $tmp1272;
frost$core$Bit $tmp1274 = (frost$core$Bit) {$tmp1273};
bool $tmp1275 = $tmp1274.value;
if ($tmp1275) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1276 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1277 = *$tmp1276;
*(&local0) = $tmp1277;
org$frostlang$frostc$IR$Value** $tmp1278 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1279 = *$tmp1278;
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
org$frostlang$frostc$IR$Value* $tmp1280 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local1) = $tmp1279;
org$frostlang$frostc$expression$Binary$Operator* $tmp1281 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp1282 = *$tmp1281;
*(&local2) = $tmp1282;
org$frostlang$frostc$IR$Value** $tmp1283 = (org$frostlang$frostc$IR$Value**) (param0->$data + 40);
org$frostlang$frostc$IR$Value* $tmp1284 = *$tmp1283;
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
org$frostlang$frostc$IR$Value* $tmp1285 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
*(&local3) = $tmp1284;
org$frostlang$frostc$Type** $tmp1286 = (org$frostlang$frostc$Type**) (param0->$data + 48);
org$frostlang$frostc$Type* $tmp1287 = *$tmp1286;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
org$frostlang$frostc$Type* $tmp1288 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local4) = $tmp1287;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1289 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// <no location>
org$frostlang$frostc$IR$Value* $tmp1290 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
// <no location>
org$frostlang$frostc$Type* $tmp1291 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
org$frostlang$frostc$Type* $tmp1292 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1293 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1294 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block3:;
frost$core$Int $tmp1295 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1296 = $tmp1269.value;
int64_t $tmp1297 = $tmp1295.value;
bool $tmp1298 = $tmp1296 == $tmp1297;
frost$core$Bit $tmp1299 = (frost$core$Bit) {$tmp1298};
bool $tmp1300 = $tmp1299.value;
if ($tmp1300) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp1301 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1302 = *$tmp1301;
*(&local5) = $tmp1302;
org$frostlang$frostc$IR$Block$ID* $tmp1303 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp1304 = *$tmp1303;
*(&local6) = $tmp1304;
goto block1;
block6:;
frost$core$Int $tmp1305 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1306 = $tmp1269.value;
int64_t $tmp1307 = $tmp1305.value;
bool $tmp1308 = $tmp1306 == $tmp1307;
frost$core$Bit $tmp1309 = (frost$core$Bit) {$tmp1308};
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp1311 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1312 = *$tmp1311;
*(&local7) = $tmp1312;
org$frostlang$frostc$IR$Value** $tmp1313 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1314 = *$tmp1313;
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
org$frostlang$frostc$IR$Value* $tmp1315 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
*(&local8) = $tmp1314;
org$frostlang$frostc$Type** $tmp1316 = (org$frostlang$frostc$Type**) (param0->$data + 32);
org$frostlang$frostc$Type* $tmp1317 = *$tmp1316;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
org$frostlang$frostc$Type* $tmp1318 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local9) = $tmp1317;
frost$core$Bit* $tmp1319 = (frost$core$Bit*) (param0->$data + 40);
frost$core$Bit $tmp1320 = *$tmp1319;
*(&local10) = $tmp1320;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1321 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
// <no location>
org$frostlang$frostc$Type* $tmp1322 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
org$frostlang$frostc$Type* $tmp1323 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1324 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block9:;
frost$core$Int $tmp1325 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1326 = $tmp1269.value;
int64_t $tmp1327 = $tmp1325.value;
bool $tmp1328 = $tmp1326 == $tmp1327;
frost$core$Bit $tmp1329 = (frost$core$Bit) {$tmp1328};
bool $tmp1330 = $tmp1329.value;
if ($tmp1330) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp1331 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1332 = *$tmp1331;
*(&local11) = $tmp1332;
frost$core$String** $tmp1333 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1334 = *$tmp1333;
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$core$String* $tmp1335 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local12) = $tmp1334;
// <no location>
frost$core$String* $tmp1336 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$core$String* $tmp1337 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local12) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Int $tmp1338 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1339 = $tmp1269.value;
int64_t $tmp1340 = $tmp1338.value;
bool $tmp1341 = $tmp1339 == $tmp1340;
frost$core$Bit $tmp1342 = (frost$core$Bit) {$tmp1341};
bool $tmp1343 = $tmp1342.value;
if ($tmp1343) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp1344 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1345 = *$tmp1344;
*(&local13) = $tmp1345;
org$frostlang$frostc$IR$Value** $tmp1346 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1347 = *$tmp1346;
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
org$frostlang$frostc$IR$Value* $tmp1348 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local14) = $tmp1347;
org$frostlang$frostc$ChoiceCase** $tmp1349 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp1350 = *$tmp1349;
*(&local15) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
org$frostlang$frostc$ChoiceCase* $tmp1351 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local15) = $tmp1350;
frost$core$Int* $tmp1352 = (frost$core$Int*) (param0->$data + 40);
frost$core$Int $tmp1353 = *$tmp1352;
*(&local16) = $tmp1353;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1354 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
// <no location>
org$frostlang$frostc$ChoiceCase* $tmp1355 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
org$frostlang$frostc$ChoiceCase* $tmp1356 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local15) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$IR$Value* $tmp1357 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block15:;
frost$core$Int $tmp1358 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1359 = $tmp1269.value;
int64_t $tmp1360 = $tmp1358.value;
bool $tmp1361 = $tmp1359 == $tmp1360;
frost$core$Bit $tmp1362 = (frost$core$Bit) {$tmp1361};
bool $tmp1363 = $tmp1362.value;
if ($tmp1363) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp1364 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1365 = *$tmp1364;
*(&local17) = $tmp1365;
org$frostlang$frostc$IR$Value** $tmp1366 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1367 = *$tmp1366;
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
org$frostlang$frostc$IR$Value* $tmp1368 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
*(&local18) = $tmp1367;
org$frostlang$frostc$IR$Block$ID* $tmp1369 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp1370 = *$tmp1369;
*(&local19) = $tmp1370;
org$frostlang$frostc$IR$Block$ID* $tmp1371 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp1372 = *$tmp1371;
*(&local20) = $tmp1372;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1373 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
org$frostlang$frostc$IR$Value* $tmp1374 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block18:;
frost$core$Int $tmp1375 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1376 = $tmp1269.value;
int64_t $tmp1377 = $tmp1375.value;
bool $tmp1378 = $tmp1376 == $tmp1377;
frost$core$Bit $tmp1379 = (frost$core$Bit) {$tmp1378};
bool $tmp1380 = $tmp1379.value;
if ($tmp1380) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp1381 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1382 = *$tmp1381;
*(&local21) = $tmp1382;
org$frostlang$frostc$ClassDecl** $tmp1383 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp1384 = *$tmp1383;
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
org$frostlang$frostc$ClassDecl* $tmp1385 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local22) = $tmp1384;
// <no location>
org$frostlang$frostc$ClassDecl* $tmp1386 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
org$frostlang$frostc$ClassDecl* $tmp1387 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block21:;
frost$core$Int $tmp1388 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1389 = $tmp1269.value;
int64_t $tmp1390 = $tmp1388.value;
bool $tmp1391 = $tmp1389 == $tmp1390;
frost$core$Bit $tmp1392 = (frost$core$Bit) {$tmp1391};
bool $tmp1393 = $tmp1392.value;
if ($tmp1393) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp1394 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1395 = *$tmp1394;
*(&local23) = $tmp1395;
org$frostlang$frostc$ClassDecl** $tmp1396 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp1397 = *$tmp1396;
*(&local24) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
org$frostlang$frostc$ClassDecl* $tmp1398 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
*(&local24) = $tmp1397;
org$frostlang$frostc$FixedArray** $tmp1399 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1400 = *$tmp1399;
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
org$frostlang$frostc$FixedArray* $tmp1401 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
*(&local25) = $tmp1400;
// <no location>
org$frostlang$frostc$ClassDecl* $tmp1402 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
// <no location>
org$frostlang$frostc$FixedArray* $tmp1403 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
org$frostlang$frostc$FixedArray* $tmp1404 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1405 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local24) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block24:;
frost$core$Int $tmp1406 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1407 = $tmp1269.value;
int64_t $tmp1408 = $tmp1406.value;
bool $tmp1409 = $tmp1407 == $tmp1408;
frost$core$Bit $tmp1410 = (frost$core$Bit) {$tmp1409};
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp1412 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1413 = *$tmp1412;
*(&local26) = $tmp1413;
org$frostlang$frostc$IR$Value** $tmp1414 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1415 = *$tmp1414;
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
org$frostlang$frostc$IR$Value* $tmp1416 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local27) = $tmp1415;
org$frostlang$frostc$FixedArray** $tmp1417 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1418 = *$tmp1417;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
org$frostlang$frostc$FixedArray* $tmp1419 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
*(&local28) = $tmp1418;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1420 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
// <no location>
org$frostlang$frostc$FixedArray* $tmp1421 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
org$frostlang$frostc$FixedArray* $tmp1422 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp1423 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block27:;
frost$core$Int $tmp1424 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1425 = $tmp1269.value;
int64_t $tmp1426 = $tmp1424.value;
bool $tmp1427 = $tmp1425 == $tmp1426;
frost$core$Bit $tmp1428 = (frost$core$Bit) {$tmp1427};
bool $tmp1429 = $tmp1428.value;
if ($tmp1429) goto block29; else goto block30;
block29:;
goto block1;
block30:;
frost$core$Int $tmp1430 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1431 = $tmp1269.value;
int64_t $tmp1432 = $tmp1430.value;
bool $tmp1433 = $tmp1431 == $tmp1432;
frost$core$Bit $tmp1434 = (frost$core$Bit) {$tmp1433};
bool $tmp1435 = $tmp1434.value;
if ($tmp1435) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp1436 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1437 = *$tmp1436;
*(&local29) = $tmp1437;
org$frostlang$frostc$IR$Value** $tmp1438 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1439 = *$tmp1438;
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
org$frostlang$frostc$IR$Value* $tmp1440 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
*(&local30) = $tmp1439;
org$frostlang$frostc$FieldDecl** $tmp1441 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp1442 = *$tmp1441;
*(&local31) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
org$frostlang$frostc$FieldDecl* $tmp1443 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
*(&local31) = $tmp1442;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1444 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
// <no location>
org$frostlang$frostc$FieldDecl* $tmp1445 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
org$frostlang$frostc$FieldDecl* $tmp1446 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local31) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp1447 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block33:;
frost$core$Int $tmp1448 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1449 = $tmp1269.value;
int64_t $tmp1450 = $tmp1448.value;
bool $tmp1451 = $tmp1449 == $tmp1450;
frost$core$Bit $tmp1452 = (frost$core$Bit) {$tmp1451};
bool $tmp1453 = $tmp1452.value;
if ($tmp1453) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Position* $tmp1454 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1455 = *$tmp1454;
*(&local32) = $tmp1455;
org$frostlang$frostc$IR$Value** $tmp1456 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1457 = *$tmp1456;
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
org$frostlang$frostc$IR$Value* $tmp1458 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
*(&local33) = $tmp1457;
org$frostlang$frostc$FieldDecl** $tmp1459 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp1460 = *$tmp1459;
*(&local34) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
org$frostlang$frostc$FieldDecl* $tmp1461 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
*(&local34) = $tmp1460;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1462 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
// <no location>
org$frostlang$frostc$FieldDecl* $tmp1463 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
org$frostlang$frostc$FieldDecl* $tmp1464 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
*(&local34) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp1465 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block36:;
frost$core$Int $tmp1466 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1467 = $tmp1269.value;
int64_t $tmp1468 = $tmp1466.value;
bool $tmp1469 = $tmp1467 == $tmp1468;
frost$core$Bit $tmp1470 = (frost$core$Bit) {$tmp1469};
bool $tmp1471 = $tmp1470.value;
if ($tmp1471) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp1472 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1473 = *$tmp1472;
*(&local35) = $tmp1473;
org$frostlang$frostc$IR$Value** $tmp1474 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1475 = *$tmp1474;
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
org$frostlang$frostc$IR$Value* $tmp1476 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
*(&local36) = $tmp1475;
frost$core$Int* $tmp1477 = (frost$core$Int*) (param0->$data + 32);
frost$core$Int $tmp1478 = *$tmp1477;
*(&local37) = $tmp1478;
org$frostlang$frostc$Type** $tmp1479 = (org$frostlang$frostc$Type**) (param0->$data + 40);
org$frostlang$frostc$Type* $tmp1480 = *$tmp1479;
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
org$frostlang$frostc$Type* $tmp1481 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
*(&local38) = $tmp1480;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1482 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
// <no location>
org$frostlang$frostc$Type* $tmp1483 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
org$frostlang$frostc$Type* $tmp1484 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1485 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block39:;
frost$core$Int $tmp1486 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1487 = $tmp1269.value;
int64_t $tmp1488 = $tmp1486.value;
bool $tmp1489 = $tmp1487 == $tmp1488;
frost$core$Bit $tmp1490 = (frost$core$Bit) {$tmp1489};
bool $tmp1491 = $tmp1490.value;
if ($tmp1491) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Position* $tmp1492 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1493 = *$tmp1492;
*(&local39) = $tmp1493;
org$frostlang$frostc$IR$Value** $tmp1494 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1495 = *$tmp1494;
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
org$frostlang$frostc$IR$Value* $tmp1496 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local40) = $tmp1495;
org$frostlang$frostc$ClassDecl** $tmp1497 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 32);
org$frostlang$frostc$ClassDecl* $tmp1498 = *$tmp1497;
*(&local41) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
org$frostlang$frostc$ClassDecl* $tmp1499 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
*(&local41) = $tmp1498;
frost$core$Int* $tmp1500 = (frost$core$Int*) (param0->$data + 40);
frost$core$Int $tmp1501 = *$tmp1500;
*(&local42) = $tmp1501;
org$frostlang$frostc$Type** $tmp1502 = (org$frostlang$frostc$Type**) (param0->$data + 48);
org$frostlang$frostc$Type* $tmp1503 = *$tmp1502;
*(&local43) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
org$frostlang$frostc$Type* $tmp1504 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
*(&local43) = $tmp1503;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1505 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
// <no location>
org$frostlang$frostc$ClassDecl* $tmp1506 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
// <no location>
org$frostlang$frostc$Type* $tmp1507 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
org$frostlang$frostc$Type* $tmp1508 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
*(&local43) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1509 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
*(&local41) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp1510 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block42:;
frost$core$Int $tmp1511 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1512 = $tmp1269.value;
int64_t $tmp1513 = $tmp1511.value;
bool $tmp1514 = $tmp1512 == $tmp1513;
frost$core$Bit $tmp1515 = (frost$core$Bit) {$tmp1514};
bool $tmp1516 = $tmp1515.value;
if ($tmp1516) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1517 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1518 = *$tmp1517;
*(&local44) = $tmp1518;
org$frostlang$frostc$IR$Value** $tmp1519 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1520 = *$tmp1519;
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
org$frostlang$frostc$IR$Value* $tmp1521 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
*(&local45) = $tmp1520;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1522 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
org$frostlang$frostc$IR$Value* $tmp1523 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block45:;
frost$core$Int $tmp1524 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1525 = $tmp1269.value;
int64_t $tmp1526 = $tmp1524.value;
bool $tmp1527 = $tmp1525 == $tmp1526;
frost$core$Bit $tmp1528 = (frost$core$Bit) {$tmp1527};
bool $tmp1529 = $tmp1528.value;
if ($tmp1529) goto block47; else goto block48;
block47:;
org$frostlang$frostc$Position* $tmp1530 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1531 = *$tmp1530;
*(&local46) = $tmp1531;
org$frostlang$frostc$IR$Value** $tmp1532 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1533 = *$tmp1532;
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
org$frostlang$frostc$IR$Value* $tmp1534 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
*(&local47) = $tmp1533;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1535 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
org$frostlang$frostc$IR$Value* $tmp1536 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block48:;
frost$core$Int $tmp1537 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1538 = $tmp1269.value;
int64_t $tmp1539 = $tmp1537.value;
bool $tmp1540 = $tmp1538 == $tmp1539;
frost$core$Bit $tmp1541 = (frost$core$Bit) {$tmp1540};
bool $tmp1542 = $tmp1541.value;
if ($tmp1542) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp1543 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1544 = *$tmp1543;
*(&local48) = $tmp1544;
org$frostlang$frostc$IR$Value** $tmp1545 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1546 = *$tmp1545;
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
org$frostlang$frostc$IR$Value* $tmp1547 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
*(&local49) = $tmp1546;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1548 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
org$frostlang$frostc$IR$Value* $tmp1549 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block51:;
frost$core$Int $tmp1550 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1551 = $tmp1269.value;
int64_t $tmp1552 = $tmp1550.value;
bool $tmp1553 = $tmp1551 == $tmp1552;
frost$core$Bit $tmp1554 = (frost$core$Bit) {$tmp1553};
bool $tmp1555 = $tmp1554.value;
if ($tmp1555) goto block53; else goto block54;
block53:;
org$frostlang$frostc$Position* $tmp1556 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1557 = *$tmp1556;
*(&local50) = $tmp1557;
org$frostlang$frostc$IR$Value** $tmp1558 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1559 = *$tmp1558;
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
org$frostlang$frostc$IR$Value* $tmp1560 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local51) = $tmp1559;
org$frostlang$frostc$Type** $tmp1561 = (org$frostlang$frostc$Type**) (param0->$data + 32);
org$frostlang$frostc$Type* $tmp1562 = *$tmp1561;
*(&local52) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
org$frostlang$frostc$Type* $tmp1563 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local52) = $tmp1562;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1564 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
// <no location>
org$frostlang$frostc$Type* $tmp1565 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
org$frostlang$frostc$Type* $tmp1566 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
*(&local52) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1567 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block54:;
frost$core$Int $tmp1568 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1569 = $tmp1269.value;
int64_t $tmp1570 = $tmp1568.value;
bool $tmp1571 = $tmp1569 == $tmp1570;
frost$core$Bit $tmp1572 = (frost$core$Bit) {$tmp1571};
bool $tmp1573 = $tmp1572.value;
if ($tmp1573) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp1574 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1575 = *$tmp1574;
*(&local53) = $tmp1575;
org$frostlang$frostc$IR$Value** $tmp1576 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1577 = *$tmp1576;
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
org$frostlang$frostc$IR$Value* $tmp1578 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
*(&local54) = $tmp1577;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1579 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
org$frostlang$frostc$IR$Value* $tmp1580 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block57:;
frost$core$Int $tmp1581 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1582 = $tmp1269.value;
int64_t $tmp1583 = $tmp1581.value;
bool $tmp1584 = $tmp1582 == $tmp1583;
frost$core$Bit $tmp1585 = (frost$core$Bit) {$tmp1584};
bool $tmp1586 = $tmp1585.value;
if ($tmp1586) goto block59; else goto block60;
block59:;
org$frostlang$frostc$Position* $tmp1587 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1588 = *$tmp1587;
*(&local55) = $tmp1588;
org$frostlang$frostc$IR$Value** $tmp1589 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1590 = *$tmp1589;
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
org$frostlang$frostc$IR$Value* $tmp1591 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
*(&local56) = $tmp1590;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1592 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
org$frostlang$frostc$IR$Value* $tmp1593 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block60:;
frost$core$Int $tmp1594 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1595 = $tmp1269.value;
int64_t $tmp1596 = $tmp1594.value;
bool $tmp1597 = $tmp1595 == $tmp1596;
frost$core$Bit $tmp1598 = (frost$core$Bit) {$tmp1597};
bool $tmp1599 = $tmp1598.value;
if ($tmp1599) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp1600 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1601 = *$tmp1600;
*(&local57) = $tmp1601;
org$frostlang$frostc$IR$Value** $tmp1602 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1603 = *$tmp1602;
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
org$frostlang$frostc$IR$Value* $tmp1604 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
*(&local58) = $tmp1603;
org$frostlang$frostc$IR$Value** $tmp1605 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1606 = *$tmp1605;
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
org$frostlang$frostc$IR$Value* $tmp1607 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
*(&local59) = $tmp1606;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1608 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
// <no location>
org$frostlang$frostc$IR$Value* $tmp1609 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
org$frostlang$frostc$IR$Value* $tmp1610 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1611 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block63:;
frost$core$Int $tmp1612 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1613 = $tmp1269.value;
int64_t $tmp1614 = $tmp1612.value;
bool $tmp1615 = $tmp1613 == $tmp1614;
frost$core$Bit $tmp1616 = (frost$core$Bit) {$tmp1615};
bool $tmp1617 = $tmp1616.value;
if ($tmp1617) goto block65; else goto block66;
block65:;
org$frostlang$frostc$Position* $tmp1618 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1619 = *$tmp1618;
*(&local60) = $tmp1619;
org$frostlang$frostc$IR$Value** $tmp1620 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1621 = *$tmp1620;
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
org$frostlang$frostc$IR$Value* $tmp1622 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
*(&local61) = $tmp1621;
org$frostlang$frostc$IR$Value** $tmp1623 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1624 = *$tmp1623;
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
org$frostlang$frostc$IR$Value* $tmp1625 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
*(&local62) = $tmp1624;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1626 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
// <no location>
org$frostlang$frostc$IR$Value* $tmp1627 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
org$frostlang$frostc$IR$Value* $tmp1628 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1629 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block66:;
frost$core$Int $tmp1630 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1631 = $tmp1269.value;
int64_t $tmp1632 = $tmp1630.value;
bool $tmp1633 = $tmp1631 == $tmp1632;
frost$core$Bit $tmp1634 = (frost$core$Bit) {$tmp1633};
bool $tmp1635 = $tmp1634.value;
if ($tmp1635) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp1636 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1637 = *$tmp1636;
*(&local63) = $tmp1637;
org$frostlang$frostc$IR$Value** $tmp1638 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1639 = *$tmp1638;
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
org$frostlang$frostc$IR$Value* $tmp1640 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
*(&local64) = $tmp1639;
org$frostlang$frostc$IR$Value** $tmp1641 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1642 = *$tmp1641;
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
org$frostlang$frostc$IR$Value* $tmp1643 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
*(&local65) = $tmp1642;
org$frostlang$frostc$IR$Value** $tmp1644 = (org$frostlang$frostc$IR$Value**) (param0->$data + 40);
org$frostlang$frostc$IR$Value* $tmp1645 = *$tmp1644;
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
org$frostlang$frostc$IR$Value* $tmp1646 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
*(&local66) = $tmp1645;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1647 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
// <no location>
org$frostlang$frostc$IR$Value* $tmp1648 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
// <no location>
org$frostlang$frostc$IR$Value* $tmp1649 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
org$frostlang$frostc$IR$Value* $tmp1650 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1651 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1652 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block69:;
frost$core$Int $tmp1653 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1654 = $tmp1269.value;
int64_t $tmp1655 = $tmp1653.value;
bool $tmp1656 = $tmp1654 == $tmp1655;
frost$core$Bit $tmp1657 = (frost$core$Bit) {$tmp1656};
bool $tmp1658 = $tmp1657.value;
if ($tmp1658) goto block71; else goto block72;
block71:;
org$frostlang$frostc$Position* $tmp1659 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1660 = *$tmp1659;
*(&local67) = $tmp1660;
org$frostlang$frostc$IR$Value** $tmp1661 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1662 = *$tmp1661;
*(&local68) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
org$frostlang$frostc$IR$Value* $tmp1663 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
*(&local68) = $tmp1662;
org$frostlang$frostc$IR$Value** $tmp1664 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1665 = *$tmp1664;
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
org$frostlang$frostc$IR$Value* $tmp1666 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
*(&local69) = $tmp1665;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1667 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
// <no location>
org$frostlang$frostc$IR$Value* $tmp1668 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
org$frostlang$frostc$IR$Value* $tmp1669 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1670 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local68) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block72:;
frost$core$Int $tmp1671 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1672 = $tmp1269.value;
int64_t $tmp1673 = $tmp1671.value;
bool $tmp1674 = $tmp1672 == $tmp1673;
frost$core$Bit $tmp1675 = (frost$core$Bit) {$tmp1674};
bool $tmp1676 = $tmp1675.value;
if ($tmp1676) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp1677 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1678 = *$tmp1677;
*(&local70) = $tmp1678;
org$frostlang$frostc$IR$Value** $tmp1679 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1680 = *$tmp1679;
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
org$frostlang$frostc$IR$Value* $tmp1681 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
*(&local71) = $tmp1680;
org$frostlang$frostc$IR$Value** $tmp1682 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1683 = *$tmp1682;
*(&local72) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
org$frostlang$frostc$IR$Value* $tmp1684 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
*(&local72) = $tmp1683;
org$frostlang$frostc$IR$Value** $tmp1685 = (org$frostlang$frostc$IR$Value**) (param0->$data + 40);
org$frostlang$frostc$IR$Value* $tmp1686 = *$tmp1685;
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
org$frostlang$frostc$IR$Value* $tmp1687 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
*(&local73) = $tmp1686;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1688 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
// <no location>
org$frostlang$frostc$IR$Value* $tmp1689 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1689));
// <no location>
org$frostlang$frostc$IR$Value* $tmp1690 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
org$frostlang$frostc$IR$Value* $tmp1691 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1692 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
*(&local72) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1693 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block75:;
frost$core$Int $tmp1694 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1695 = $tmp1269.value;
int64_t $tmp1696 = $tmp1694.value;
bool $tmp1697 = $tmp1695 == $tmp1696;
frost$core$Bit $tmp1698 = (frost$core$Bit) {$tmp1697};
bool $tmp1699 = $tmp1698.value;
if ($tmp1699) goto block77; else goto block78;
block77:;
org$frostlang$frostc$Position* $tmp1700 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1701 = *$tmp1700;
*(&local74) = $tmp1701;
org$frostlang$frostc$IR$Value** $tmp1702 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1703 = *$tmp1702;
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
org$frostlang$frostc$IR$Value* $tmp1704 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
*(&local75) = $tmp1703;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1705 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
org$frostlang$frostc$IR$Value* $tmp1706 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block78:;
frost$core$Int $tmp1707 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1708 = $tmp1269.value;
int64_t $tmp1709 = $tmp1707.value;
bool $tmp1710 = $tmp1708 == $tmp1709;
frost$core$Bit $tmp1711 = (frost$core$Bit) {$tmp1710};
bool $tmp1712 = $tmp1711.value;
if ($tmp1712) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp1713 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1714 = *$tmp1713;
*(&local76) = $tmp1714;
org$frostlang$frostc$MethodDecl** $tmp1715 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 24);
org$frostlang$frostc$MethodDecl* $tmp1716 = *$tmp1715;
*(&local77) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
org$frostlang$frostc$MethodDecl* $tmp1717 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local77) = $tmp1716;
org$frostlang$frostc$FixedArray** $tmp1718 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1719 = *$tmp1718;
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
org$frostlang$frostc$FixedArray* $tmp1720 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
*(&local78) = $tmp1719;
// <no location>
org$frostlang$frostc$MethodDecl* $tmp1721 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
// <no location>
org$frostlang$frostc$FixedArray* $tmp1722 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
org$frostlang$frostc$FixedArray* $tmp1723 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1724 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
*(&local77) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block81:;
frost$core$Int $tmp1725 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1726 = $tmp1269.value;
int64_t $tmp1727 = $tmp1725.value;
bool $tmp1728 = $tmp1726 == $tmp1727;
frost$core$Bit $tmp1729 = (frost$core$Bit) {$tmp1728};
bool $tmp1730 = $tmp1729.value;
if ($tmp1730) goto block83; else goto block84;
block83:;
org$frostlang$frostc$Position* $tmp1731 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1732 = *$tmp1731;
*(&local79) = $tmp1732;
org$frostlang$frostc$IR$Value** $tmp1733 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1734 = *$tmp1733;
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
org$frostlang$frostc$IR$Value* $tmp1735 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
*(&local80) = $tmp1734;
org$frostlang$frostc$IR$Value** $tmp1736 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1737 = *$tmp1736;
*(&local81) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
org$frostlang$frostc$IR$Value* $tmp1738 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
*(&local81) = $tmp1737;
// <no location>
org$frostlang$frostc$IR$Value* $tmp1739 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
// <no location>
org$frostlang$frostc$IR$Value* $tmp1740 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
org$frostlang$frostc$IR$Value* $tmp1741 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
*(&local81) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1742 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block84:;
frost$core$Int $tmp1743 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1744 = $tmp1269.value;
int64_t $tmp1745 = $tmp1743.value;
bool $tmp1746 = $tmp1744 == $tmp1745;
frost$core$Bit $tmp1747 = (frost$core$Bit) {$tmp1746};
bool $tmp1748 = $tmp1747.value;
if ($tmp1748) goto block86; else goto block1;
block86:;
org$frostlang$frostc$Position* $tmp1749 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1750 = *$tmp1749;
*(&local82) = $tmp1750;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$expression$Binary$Operator param4, org$frostlang$frostc$IR$Value* param5, org$frostlang$frostc$Type* param6) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1751 = &param0->$rawValue;
*$tmp1751 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1752 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1752 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1753 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1753 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$expression$Binary$Operator* $tmp1754 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 32);
*$tmp1754 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$IR$Value** $tmp1755 = (org$frostlang$frostc$IR$Value**) (param0->$data + 40);
*$tmp1755 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$Type** $tmp1756 = (org$frostlang$frostc$Type**) (param0->$data + 48);
*$tmp1756 = param6;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Block$ID param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1757 = &param0->$rawValue;
*$tmp1757 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1758 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1758 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$IR$Block$ID* $tmp1759 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
*$tmp1759 = param3;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$frost$core$Bit(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$Type* param4, frost$core$Bit param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1760 = &param0->$rawValue;
*$tmp1760 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1761 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1761 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1762 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1762 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Type** $tmp1763 = (org$frostlang$frostc$Type**) (param0->$data + 32);
*$tmp1763 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Bit* $tmp1764 = (frost$core$Bit*) (param0->$data + 40);
*$tmp1764 = param5;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1765 = &param0->$rawValue;
*$tmp1765 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1766 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1766 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp1767 = (frost$core$String**) (param0->$data + 24);
*$tmp1767 = param3;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1768 = &param0->$rawValue;
*$tmp1768 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1769 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1769 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1770 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1770 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp1771 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 32);
*$tmp1771 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1772 = (frost$core$Int*) (param0->$data + 40);
*$tmp1772 = param5;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$IR$Block$ID param4, org$frostlang$frostc$IR$Block$ID param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1773 = &param0->$rawValue;
*$tmp1773 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1774 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1774 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1775 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1775 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$IR$Block$ID* $tmp1776 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 32);
*$tmp1776 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$IR$Block$ID* $tmp1777 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 40);
*$tmp1777 = param5;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ClassDecl* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1778 = &param0->$rawValue;
*$tmp1778 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1779 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1779 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ClassDecl** $tmp1780 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 24);
*$tmp1780 = param3;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1781 = &param0->$rawValue;
*$tmp1781 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1782 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1782 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ClassDecl** $tmp1783 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 24);
*$tmp1783 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp1784 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp1784 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1785 = &param0->$rawValue;
*$tmp1785 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1786 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1786 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1787 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1787 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp1788 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp1788 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1789 = &param0->$rawValue;
*$tmp1789 = param1;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1790 = &param0->$rawValue;
*$tmp1790 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1791 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1791 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1792 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1792 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FieldDecl** $tmp1793 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 32);
*$tmp1793 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$Int$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, frost$core$Int param4, org$frostlang$frostc$Type* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1794 = &param0->$rawValue;
*$tmp1794 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1795 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1795 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1796 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1796 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1797 = (frost$core$Int*) (param0->$data + 32);
*$tmp1797 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$Type** $tmp1798 = (org$frostlang$frostc$Type**) (param0->$data + 40);
*$tmp1798 = param5;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ClassDecl* param4, frost$core$Int param5, org$frostlang$frostc$Type* param6) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1799 = &param0->$rawValue;
*$tmp1799 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1800 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1800 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1801 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1801 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ClassDecl** $tmp1802 = (org$frostlang$frostc$ClassDecl**) (param0->$data + 32);
*$tmp1802 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1803 = (frost$core$Int*) (param0->$data + 40);
*$tmp1803 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$Type** $tmp1804 = (org$frostlang$frostc$Type**) (param0->$data + 48);
*$tmp1804 = param6;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1805 = &param0->$rawValue;
*$tmp1805 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1806 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1806 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1807 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1807 = param3;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$Type* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1808 = &param0->$rawValue;
*$tmp1808 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1809 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1809 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1810 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1810 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Type** $tmp1811 = (org$frostlang$frostc$Type**) (param0->$data + 32);
*$tmp1811 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$IR$Value* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1812 = &param0->$rawValue;
*$tmp1812 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1813 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1813 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1814 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1814 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value** $tmp1815 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
*$tmp1815 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$IR$Value* param4, org$frostlang$frostc$IR$Value* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1816 = &param0->$rawValue;
*$tmp1816 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1817 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1817 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1818 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1818 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value** $tmp1819 = (org$frostlang$frostc$IR$Value**) (param0->$data + 32);
*$tmp1819 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$IR$Value** $tmp1820 = (org$frostlang$frostc$IR$Value**) (param0->$data + 40);
*$tmp1820 = param5;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1821 = &param0->$rawValue;
*$tmp1821 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1822 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1822 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp1823 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp1823 = param3;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$MethodDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1824 = &param0->$rawValue;
*$tmp1824 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1825 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1825 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp1826 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 24);
*$tmp1826 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp1827 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp1827 = param4;
return;

}
void org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position(org$frostlang$frostc$IR$Statement* param0, frost$core$Int param1, org$frostlang$frostc$Position param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
frost$core$Int* $tmp1828 = &param0->$rawValue;
*$tmp1828 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:6
org$frostlang$frostc$Position* $tmp1829 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp1829 = param2;
return;

}

