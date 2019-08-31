#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/ASTNode/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "org/frostlang/frostc/ASTNode/_Closure4.h"


static frost$core$String $s1;
org$frostlang$frostc$ASTNode$class_type org$frostlang$frostc$ASTNode$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$ASTNode$get_asString$R$frost$core$String, org$frostlang$frostc$ASTNode$cleanup, org$frostlang$frostc$ASTNode$position$R$org$frostlang$frostc$Position} };

typedef frost$core$String* (*$fn757)(frost$core$Object*);
typedef frost$core$String* (*$fn780)(frost$core$Object*);
typedef frost$core$String* (*$fn802)(frost$core$Object*);
typedef frost$core$String* (*$fn812)(frost$core$Object*);
typedef frost$core$String* (*$fn825)(frost$core$Object*);
typedef frost$core$String* (*$fn845)(frost$core$Object*);
typedef frost$core$Bit (*$fn887)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn892)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn898)(frost$core$Object*);
typedef frost$core$String* (*$fn910)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn917)(frost$core$Object*);
typedef frost$core$String* (*$fn924)(frost$core$Object*);
typedef frost$core$String* (*$fn933)(frost$core$Object*);
typedef frost$core$String* (*$fn942)(frost$core$Object*);
typedef frost$core$String* (*$fn949)(frost$core$Object*);
typedef frost$core$String* (*$fn969)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn988)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn992)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn997)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1003)(frost$core$Object*);
typedef frost$core$String* (*$fn1058)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1065)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1103)(frost$core$Object*);
typedef frost$core$String* (*$fn1119)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1149)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1155)(frost$core$Object*);
typedef frost$core$String* (*$fn1163)(frost$core$Object*);
typedef frost$core$String* (*$fn1211)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1218)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1222)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1227)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1233)(frost$core$Object*);
typedef frost$core$String* (*$fn1278)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1297)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1309)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1313)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1318)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1324)(frost$core$Object*);
typedef frost$core$String* (*$fn1387)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1398)(frost$core$Object*);
typedef frost$core$String* (*$fn1407)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1447)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1451)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1456)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1462)(frost$core$Object*);
typedef frost$core$String* (*$fn1470)(frost$core$Object*);
typedef frost$core$String* (*$fn1498)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1527)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1538)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1577)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1584)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1588)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1593)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1599)(frost$core$Object*);
typedef frost$core$String* (*$fn1607)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1629)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1633)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1638)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1644)(frost$core$Object*);
typedef frost$core$String* (*$fn1690)(frost$core$Object*);
typedef frost$core$String* (*$fn1698)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1706)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1710)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1715)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1721)(frost$core$Object*);
typedef frost$core$String* (*$fn1755)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1798)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1826)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1836)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1840)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1845)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1851)(frost$core$Object*);
typedef frost$core$String* (*$fn1869)(frost$core$Object*);
typedef frost$core$String* (*$fn1894)(frost$core$Object*);
typedef frost$core$String* (*$fn1909)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1945)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1949)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1954)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1960)(frost$core$Object*);
typedef frost$core$String* (*$fn1992)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2002)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2006)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2011)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2017)(frost$core$Object*);
typedef frost$core$String* (*$fn2034)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2093)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2100)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2104)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2109)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2115)(frost$core$Object*);
typedef frost$core$String* (*$fn2158)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2169)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2187)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2206)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2210)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2215)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2221)(frost$core$Object*);
typedef frost$core$String* (*$fn2295)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2320)(frost$core$Object*);
typedef frost$core$String* (*$fn2357)(frost$core$Object*);
typedef frost$core$String* (*$fn2394)(frost$core$Object*);
typedef frost$core$String* (*$fn2433)(frost$core$Object*);
typedef frost$core$String* (*$fn2452)(frost$core$Object*);
typedef frost$core$String* (*$fn2465)(frost$core$Object*);
typedef frost$core$String* (*$fn2488)(frost$core$Object*);
typedef frost$core$String* (*$fn2528)(frost$core$Object*);
typedef frost$core$String* (*$fn2583)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2605)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2627)(frost$collections$CollectionView*, frost$core$String*);
typedef void (*$fn2660)(org$frostlang$frostc$ASTNode$_Closure2*, frost$core$Object*);
typedef void (*$fn2668)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn2680)(frost$core$Object*);
typedef void (*$fn2693)(org$frostlang$frostc$ASTNode$_Closure4*, frost$core$Object*);
typedef void (*$fn2701)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn2752)(frost$core$Object*);
typedef frost$core$String* (*$fn2779)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2788)(frost$core$Object*);
typedef frost$core$Bit (*$fn2817)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn2822)(frost$core$Object*);
typedef frost$core$String* (*$fn2872)(frost$core$Object*);
typedef frost$core$String* (*$fn2900)(frost$core$Object*);
typedef frost$core$String* (*$fn2927)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2936)(frost$core$Object*);
typedef frost$core$String* (*$fn3009)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn3039)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3043)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3048)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn3057)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn3071)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3075)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3080)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn3086)(frost$core$Object*);
typedef frost$core$String* (*$fn3133)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn3142)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3146)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3151)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn3157)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 28, 2259226173871209856, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s761 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, -5648485517632880895, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, -5648485517632880895, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s822 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s823 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s829 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x28", 5, -3005768931565142592, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 3862259953841813309, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 3862259953841813309, NULL };
static frost$core$String $s895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s913 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s936 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s938 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s953 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s983 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b\x0a", 2, 645197854336348944, NULL };
static frost$core$String $s1006 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1009 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1032 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s1033 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s1035 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, -4009745356995480888, NULL };
static frost$core$String $s1037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1039 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, -7802669844351431112, NULL };
static frost$core$String $s1041 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, -7802669844351431112, NULL };
static frost$core$String $s1061 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1067 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1070 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s1100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s1106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s1116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, 3537422157515687608, NULL };
static frost$core$String $s1121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s1152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s1208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s1209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s1214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 1485954231735473549, NULL };
static frost$core$String $s1255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, -8457991779168398576, NULL };
static frost$core$String $s1263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 8239240588283385762, NULL };
static frost$core$String $s1274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s1275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, 3537422157515687608, NULL };
static frost$core$String $s1280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s1294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, 3537422157515687608, NULL };
static frost$core$String $s1299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s1303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s1327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s1359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s1361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 3845678946966909516, NULL };
static frost$core$String $s1363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, -3260652667040864604, NULL };
static frost$core$String $s1367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, -3260652667040864604, NULL };
static frost$core$String $s1390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 6240486548179417074, NULL };
static frost$core$String $s1395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s1396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s1402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s1439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s1441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, -132858756693273155, NULL };
static frost$core$String $s1465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 1551900757386413905, NULL };
static frost$core$String $s1475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1501 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1534 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s1575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s1580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s1684 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s1686 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s1693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20", 4, -2513920666828367600, NULL };
static frost$core$String $s1695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, -4672451134882412660, NULL };
static frost$core$String $s1702 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s1724 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1751 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1757 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1760 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52\x5f\x47\x45\x4e\x45\x52\x49\x43\x53\x28", 20, 7008644811477646607, NULL };
static frost$core$String $s1794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1800 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1803 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x29", 2, 581090828866184664, NULL };
static frost$core$String $s1829 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20", 3, 3135810569060049970, NULL };
static frost$core$String $s1831 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s1854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1857 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1866 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s1867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s1872 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 255937440374704776, NULL };
static frost$core$String $s1874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1936 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s1937 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s1939 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1941 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, -7243352351154767332, NULL };
static frost$core$String $s1963 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1966 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1995 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, -1503173836575230814, NULL };
static frost$core$String $s1997 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s2020 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s2031 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, 3537422157515687608, NULL };
static frost$core$String $s2036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2038 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x20\x7b\x0a", 12, 5730672801218777498, NULL };
static frost$core$String $s2040 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s2042 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s2090 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s2091 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s2096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, -7952910774154584656, NULL };
static frost$core$String $s2137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 7226600790104464427, NULL };
static frost$core$String $s2154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s2155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, 3537422157515687608, NULL };
static frost$core$String $s2160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s2164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s2171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s2185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s2190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s2192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s2202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s2203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 1977603186615208662, NULL };
static frost$core$String $s2224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s2262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e", 2, 578299168842724610, NULL };
static frost$core$String $s2264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e", 2, 578299168842724610, NULL };
static frost$core$String $s2271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e", 3, 7580368616763478972, NULL };
static frost$core$String $s2273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e", 3, 7580368616763478972, NULL };
static frost$core$String $s2280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 7588087188392006392, NULL };
static frost$core$String $s2282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 7588087188392006392, NULL };
static frost$core$String $s2289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 8523082171760740322, NULL };
static frost$core$String $s2291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 8523082171760740322, NULL };
static frost$core$String $s2297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s2318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s2324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x29", 2, 567769145981429338, NULL };
static frost$core$String $s2342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s2343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s2360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s2391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s2398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s2431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s2438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2e", 3, -587370003925626343, NULL };
static frost$core$String $s2440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s2449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s2450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s2462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s2463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s2468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x62\x79\x20", 4, -229567638518546866, NULL };
static frost$core$String $s2503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s2505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s2525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s2526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s2531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, -8138645579369886003, NULL };
static frost$core$String $s2533 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, -4195180554649555617, NULL };
static frost$core$String $s2537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, -4195180554649555617, NULL };
static frost$core$String $s2544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 3249880500923765431, NULL };
static frost$core$String $s2545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 3249880500923765431, NULL };
static frost$core$String $s2559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s2567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, -3398237824395938252, NULL };
static frost$core$String $s2568 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, -3398237824395938252, NULL };
static frost$core$String $s2585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2607 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2629 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 6067664983089856075, NULL };
static frost$core$String $s2677 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s2678 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s2683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x28", 7, 6075539153696769322, NULL };
static frost$core$String $s2685 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b\x0a", 4, -7356922811060594803, NULL };
static frost$core$String $s2687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x20\x7b\x0a", 9, -2885440192676299181, NULL };
static frost$core$String $s2703 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s2744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s2749 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s2750 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s2756 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2781 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2783 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2785 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e", 3, 43478091129369215, NULL };
static frost$core$String $s2792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2825 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s2835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s2836 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s2837 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s2844 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s2845 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s2846 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s2853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2862 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29", 9, 6104512261600802090, NULL };
static frost$core$String $s2863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29", 9, 6104512261600802090, NULL };
static frost$core$String $s2864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29", 9, 6104512261600802090, NULL };
static frost$core$String $s2866 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s2869 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2876 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s2898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s2903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x2c\x20", 13, -7202926641727240027, NULL };
static frost$core$String $s2905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 2003079889812304977, NULL };
static frost$core$String $s2909 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 2003079889812304977, NULL };
static frost$core$String $s2929 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2931 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2933 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e", 3, 43478091129369215, NULL };
static frost$core$String $s2940 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2980 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 4850958444317981178, NULL };
static frost$core$String $s2988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x66\x20", 4, -6503404126614323964, NULL };
static frost$core$String $s2996 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, -1568754217983211905, NULL };
static frost$core$String $s3004 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 8604313941350852984, NULL };
static frost$core$String $s3011 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s3031 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 3980698872071072891, NULL };
static frost$core$String $s3033 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s3035 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s3054 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s3061 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s3062 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s3064 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s3067 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b", 2, 559938424166824396, NULL };
static frost$core$String $s3089 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s3092 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s3126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s3127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s3129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s3136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 118270813553635210, NULL };
static frost$core$String $s3138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s3160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s3163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s3171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };

org$frostlang$frostc$Position org$frostlang$frostc$ASTNode$position$R$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* param0) {

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
org$frostlang$frostc$Position local28;
org$frostlang$frostc$Position local29;
org$frostlang$frostc$Position local30;
org$frostlang$frostc$Position local31;
org$frostlang$frostc$Position local32;
org$frostlang$frostc$Position local33;
org$frostlang$frostc$Position local34;
org$frostlang$frostc$Position local35;
org$frostlang$frostc$Position local36;
org$frostlang$frostc$Position local37;
org$frostlang$frostc$Position local38;
org$frostlang$frostc$Position local39;
org$frostlang$frostc$Position local40;
org$frostlang$frostc$Position local41;
org$frostlang$frostc$Position local42;
org$frostlang$frostc$Position local43;
org$frostlang$frostc$Position local44;
org$frostlang$frostc$Position local45;
org$frostlang$frostc$Position local46;
org$frostlang$frostc$Position local47;
org$frostlang$frostc$Position local48;
org$frostlang$frostc$Position local49;
org$frostlang$frostc$Position local50;
org$frostlang$frostc$Position local51;
org$frostlang$frostc$Position local52;
org$frostlang$frostc$Position local53;
org$frostlang$frostc$Position local54;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:95
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:96:18
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
frost$core$String** $tmp12 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp13 = *$tmp12;
frost$core$String** $tmp14 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp15 = *$tmp14;
org$frostlang$frostc$ASTNode** $tmp16 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp17 = *$tmp16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:97
org$frostlang$frostc$Position $tmp18 = *(&local0);
return $tmp18;
block3:;
frost$core$Int $tmp19 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:99:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp20 = $tmp3.value;
int64_t $tmp21 = $tmp19.value;
bool $tmp22 = $tmp20 == $tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {$tmp22};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp25 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp26 = *$tmp25;
*(&local1) = $tmp26;
org$frostlang$frostc$FixedArray** $tmp27 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp28 = *$tmp27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:100
org$frostlang$frostc$Position $tmp29 = *(&local1);
return $tmp29;
block6:;
frost$core$Int $tmp30 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:102:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp31 = $tmp3.value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 == $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp36 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp37 = *$tmp36;
*(&local2) = $tmp37;
org$frostlang$frostc$ASTNode** $tmp38 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp39 = *$tmp38;
org$frostlang$frostc$ASTNode** $tmp40 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp41 = *$tmp40;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:103
org$frostlang$frostc$Position $tmp42 = *(&local2);
return $tmp42;
block9:;
frost$core$Int $tmp43 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:105:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp44 = $tmp3.value;
int64_t $tmp45 = $tmp43.value;
bool $tmp46 = $tmp44 == $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp49 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp50 = *$tmp49;
*(&local3) = $tmp50;
org$frostlang$frostc$ASTNode** $tmp51 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp52 = *$tmp51;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:106
org$frostlang$frostc$Position $tmp53 = *(&local3);
return $tmp53;
block12:;
frost$core$Int $tmp54 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:108:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp55 = $tmp3.value;
int64_t $tmp56 = $tmp54.value;
bool $tmp57 = $tmp55 == $tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp60 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp61 = *$tmp60;
*(&local4) = $tmp61;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:109
org$frostlang$frostc$Position $tmp62 = *(&local4);
return $tmp62;
block15:;
frost$core$Int $tmp63 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:111:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp64 = $tmp3.value;
int64_t $tmp65 = $tmp63.value;
bool $tmp66 = $tmp64 == $tmp65;
frost$core$Bit $tmp67 = (frost$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp69 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp70 = *$tmp69;
*(&local5) = $tmp70;
org$frostlang$frostc$ASTNode** $tmp71 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp72 = *$tmp71;
org$frostlang$frostc$expression$Binary$Operator* $tmp73 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp74 = *$tmp73;
org$frostlang$frostc$ASTNode** $tmp75 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp76 = *$tmp75;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:112
org$frostlang$frostc$Position $tmp77 = *(&local5);
return $tmp77;
block18:;
frost$core$Int $tmp78 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:114:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp79 = $tmp3.value;
int64_t $tmp80 = $tmp78.value;
bool $tmp81 = $tmp79 == $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp84 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp85 = *$tmp84;
*(&local6) = $tmp85;
frost$core$Bit* $tmp86 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp87 = *$tmp86;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:115
org$frostlang$frostc$Position $tmp88 = *(&local6);
return $tmp88;
block21:;
frost$core$Int $tmp89 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:117:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp90 = $tmp3.value;
int64_t $tmp91 = $tmp89.value;
bool $tmp92 = $tmp90 == $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp95 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp96 = *$tmp95;
*(&local7) = $tmp96;
org$frostlang$frostc$FixedArray** $tmp97 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp98 = *$tmp97;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:118
org$frostlang$frostc$Position $tmp99 = *(&local7);
return $tmp99;
block24:;
frost$core$Int $tmp100 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:120:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp101 = $tmp3.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 == $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp106 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp107 = *$tmp106;
*(&local8) = $tmp107;
frost$core$String** $tmp108 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp109 = *$tmp108;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:121
org$frostlang$frostc$Position $tmp110 = *(&local8);
return $tmp110;
block27:;
frost$core$Int $tmp111 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:123:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp112 = $tmp3.value;
int64_t $tmp113 = $tmp111.value;
bool $tmp114 = $tmp112 == $tmp113;
frost$core$Bit $tmp115 = (frost$core$Bit) {$tmp114};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp117 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp118 = *$tmp117;
*(&local9) = $tmp118;
org$frostlang$frostc$ASTNode** $tmp119 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp120 = *$tmp119;
org$frostlang$frostc$FixedArray** $tmp121 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp122 = *$tmp121;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:124
org$frostlang$frostc$Position $tmp123 = *(&local9);
return $tmp123;
block30:;
frost$core$Int $tmp124 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:126:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp125 = $tmp3.value;
int64_t $tmp126 = $tmp124.value;
bool $tmp127 = $tmp125 == $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp130 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp131 = *$tmp130;
*(&local10) = $tmp131;
org$frostlang$frostc$ASTNode** $tmp132 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp133 = *$tmp132;
frost$core$String** $tmp134 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp135 = *$tmp134;
org$frostlang$frostc$FixedArray** $tmp136 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp137 = *$tmp136;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:127
org$frostlang$frostc$Position $tmp138 = *(&local10);
return $tmp138;
block33:;
frost$core$Int $tmp139 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:129:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp140 = $tmp3.value;
int64_t $tmp141 = $tmp139.value;
bool $tmp142 = $tmp140 == $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Position* $tmp145 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp146 = *$tmp145;
*(&local11) = $tmp146;
org$frostlang$frostc$ASTNode** $tmp147 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp148 = *$tmp147;
org$frostlang$frostc$ChoiceCase** $tmp149 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp150 = *$tmp149;
frost$core$Int* $tmp151 = (frost$core$Int*) (param0->$data + 40);
frost$core$Int $tmp152 = *$tmp151;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:130
org$frostlang$frostc$Position $tmp153 = *(&local11);
return $tmp153;
block36:;
frost$core$Int $tmp154 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:132:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp155 = $tmp3.value;
int64_t $tmp156 = $tmp154.value;
bool $tmp157 = $tmp155 == $tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp160 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp161 = *$tmp160;
*(&local12) = $tmp161;
org$frostlang$frostc$ASTNode** $tmp162 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp163 = *$tmp162;
org$frostlang$frostc$FixedArray** $tmp164 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp165 = *$tmp164;
org$frostlang$frostc$ClassDecl$Kind* $tmp166 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp167 = *$tmp166;
frost$core$String** $tmp168 = (frost$core$String**) (param0->$data + 48);
frost$core$String* $tmp169 = *$tmp168;
org$frostlang$frostc$FixedArray** $tmp170 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp171 = *$tmp170;
org$frostlang$frostc$FixedArray** $tmp172 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp173 = *$tmp172;
org$frostlang$frostc$FixedArray** $tmp174 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp175 = *$tmp174;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:133
org$frostlang$frostc$Position $tmp176 = *(&local12);
return $tmp176;
block39:;
frost$core$Int $tmp177 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:135:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp178 = $tmp3.value;
int64_t $tmp179 = $tmp177.value;
bool $tmp180 = $tmp178 == $tmp179;
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Position* $tmp183 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp184 = *$tmp183;
*(&local13) = $tmp184;
frost$core$String** $tmp185 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp186 = *$tmp185;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:136
org$frostlang$frostc$Position $tmp187 = *(&local13);
return $tmp187;
block42:;
frost$core$Int $tmp188 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:138:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp189 = $tmp3.value;
int64_t $tmp190 = $tmp188.value;
bool $tmp191 = $tmp189 == $tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp194 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp195 = *$tmp194;
*(&local14) = $tmp195;
org$frostlang$frostc$ASTNode** $tmp196 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp197 = *$tmp196;
org$frostlang$frostc$ASTNode** $tmp198 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp199 = *$tmp198;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:139
org$frostlang$frostc$Position $tmp200 = *(&local14);
return $tmp200;
block45:;
frost$core$Int $tmp201 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:141:18
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
*(&local15) = $tmp208;
frost$core$String** $tmp209 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp210 = *$tmp209;
org$frostlang$frostc$FixedArray** $tmp211 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp212 = *$tmp211;
org$frostlang$frostc$ASTNode** $tmp213 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp214 = *$tmp213;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:142
org$frostlang$frostc$Position $tmp215 = *(&local15);
return $tmp215;
block48:;
frost$core$Int $tmp216 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:144:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp217 = $tmp3.value;
int64_t $tmp218 = $tmp216.value;
bool $tmp219 = $tmp217 == $tmp218;
frost$core$Bit $tmp220 = (frost$core$Bit) {$tmp219};
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp222 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp223 = *$tmp222;
*(&local16) = $tmp223;
org$frostlang$frostc$ASTNode** $tmp224 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp225 = *$tmp224;
frost$core$String** $tmp226 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp227 = *$tmp226;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:145
org$frostlang$frostc$Position $tmp228 = *(&local16);
return $tmp228;
block51:;
frost$core$Int $tmp229 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:147:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp230 = $tmp3.value;
int64_t $tmp231 = $tmp229.value;
bool $tmp232 = $tmp230 == $tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block53; else goto block54;
block53:;
org$frostlang$frostc$Position* $tmp235 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp236 = *$tmp235;
*(&local17) = $tmp236;
org$frostlang$frostc$ASTNode** $tmp237 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp238 = *$tmp237;
frost$core$String** $tmp239 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp240 = *$tmp239;
org$frostlang$frostc$FixedArray** $tmp241 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp242 = *$tmp241;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:148
org$frostlang$frostc$Position $tmp243 = *(&local17);
return $tmp243;
block54:;
frost$core$Int $tmp244 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:150:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp245 = $tmp3.value;
int64_t $tmp246 = $tmp244.value;
bool $tmp247 = $tmp245 == $tmp246;
frost$core$Bit $tmp248 = (frost$core$Bit) {$tmp247};
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp250 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp251 = *$tmp250;
*(&local18) = $tmp251;
org$frostlang$frostc$ASTNode** $tmp252 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp253 = *$tmp252;
org$frostlang$frostc$FixedArray** $tmp254 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp255 = *$tmp254;
org$frostlang$frostc$ASTNode** $tmp256 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp257 = *$tmp256;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:151
org$frostlang$frostc$Position $tmp258 = *(&local18);
return $tmp258;
block57:;
frost$core$Int $tmp259 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:153:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp260 = $tmp3.value;
int64_t $tmp261 = $tmp259.value;
bool $tmp262 = $tmp260 == $tmp261;
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262};
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block59; else goto block60;
block59:;
org$frostlang$frostc$FixedArray** $tmp265 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp266 = *$tmp265;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:154
org$frostlang$frostc$Position $tmp267 = org$frostlang$frostc$Position$init();
return $tmp267;
block60:;
frost$core$Int $tmp268 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:156:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp269 = $tmp3.value;
int64_t $tmp270 = $tmp268.value;
bool $tmp271 = $tmp269 == $tmp270;
frost$core$Bit $tmp272 = (frost$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp274 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp275 = *$tmp274;
*(&local19) = $tmp275;
frost$core$String** $tmp276 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp277 = *$tmp276;
org$frostlang$frostc$ASTNode** $tmp278 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp279 = *$tmp278;
org$frostlang$frostc$ASTNode** $tmp280 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp281 = *$tmp280;
org$frostlang$frostc$FixedArray** $tmp282 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp283 = *$tmp282;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:157
org$frostlang$frostc$Position $tmp284 = *(&local19);
return $tmp284;
block63:;
frost$core$Int $tmp285 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:159:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp286 = $tmp3.value;
int64_t $tmp287 = $tmp285.value;
bool $tmp288 = $tmp286 == $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block65; else goto block66;
block65:;
org$frostlang$frostc$Position* $tmp291 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp292 = *$tmp291;
*(&local20) = $tmp292;
frost$core$String** $tmp293 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp294 = *$tmp293;
org$frostlang$frostc$FixedArray** $tmp295 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp296 = *$tmp295;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:160
org$frostlang$frostc$Position $tmp297 = *(&local20);
return $tmp297;
block66:;
frost$core$Int $tmp298 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:162:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp299 = $tmp3.value;
int64_t $tmp300 = $tmp298.value;
bool $tmp301 = $tmp299 == $tmp300;
frost$core$Bit $tmp302 = (frost$core$Bit) {$tmp301};
bool $tmp303 = $tmp302.value;
if ($tmp303) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp304 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp305 = *$tmp304;
*(&local21) = $tmp305;
frost$core$String** $tmp306 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp307 = *$tmp306;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:163
org$frostlang$frostc$Position $tmp308 = *(&local21);
return $tmp308;
block69:;
frost$core$Int $tmp309 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:165:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp310 = $tmp3.value;
int64_t $tmp311 = $tmp309.value;
bool $tmp312 = $tmp310 == $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block71; else goto block72;
block71:;
org$frostlang$frostc$Position* $tmp315 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp316 = *$tmp315;
*(&local22) = $tmp316;
frost$core$String** $tmp317 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp318 = *$tmp317;
org$frostlang$frostc$FixedArray** $tmp319 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp320 = *$tmp319;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:166
org$frostlang$frostc$Position $tmp321 = *(&local22);
return $tmp321;
block72:;
frost$core$Int $tmp322 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:168:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp323 = $tmp3.value;
int64_t $tmp324 = $tmp322.value;
bool $tmp325 = $tmp323 == $tmp324;
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp325};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp328 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp329 = *$tmp328;
*(&local23) = $tmp329;
org$frostlang$frostc$ASTNode** $tmp330 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp331 = *$tmp330;
org$frostlang$frostc$FixedArray** $tmp332 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp333 = *$tmp332;
org$frostlang$frostc$ASTNode** $tmp334 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp335 = *$tmp334;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:169
org$frostlang$frostc$Position $tmp336 = *(&local23);
return $tmp336;
block75:;
frost$core$Int $tmp337 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:171:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp338 = $tmp3.value;
int64_t $tmp339 = $tmp337.value;
bool $tmp340 = $tmp338 == $tmp339;
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340};
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block77; else goto block78;
block77:;
org$frostlang$frostc$Position* $tmp343 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp344 = *$tmp343;
*(&local24) = $tmp344;
frost$core$UInt64* $tmp345 = (frost$core$UInt64*) (param0->$data + 24);
frost$core$UInt64 $tmp346 = *$tmp345;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:172
org$frostlang$frostc$Position $tmp347 = *(&local24);
return $tmp347;
block78:;
frost$core$Int $tmp348 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:174:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp349 = $tmp3.value;
int64_t $tmp350 = $tmp348.value;
bool $tmp351 = $tmp349 == $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp354 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp355 = *$tmp354;
*(&local25) = $tmp355;
org$frostlang$frostc$IR$Value** $tmp356 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp357 = *$tmp356;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:175
org$frostlang$frostc$Position $tmp358 = *(&local25);
return $tmp358;
block81:;
frost$core$Int $tmp359 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:177:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp360 = $tmp3.value;
int64_t $tmp361 = $tmp359.value;
bool $tmp362 = $tmp360 == $tmp361;
frost$core$Bit $tmp363 = (frost$core$Bit) {$tmp362};
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block83; else goto block84;
block83:;
org$frostlang$frostc$Position* $tmp365 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp366 = *$tmp365;
*(&local26) = $tmp366;
frost$core$String** $tmp367 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp368 = *$tmp367;
org$frostlang$frostc$FixedArray** $tmp369 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp370 = *$tmp369;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:178
org$frostlang$frostc$Position $tmp371 = *(&local26);
return $tmp371;
block84:;
frost$core$Int $tmp372 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:180:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp373 = $tmp3.value;
int64_t $tmp374 = $tmp372.value;
bool $tmp375 = $tmp373 == $tmp374;
frost$core$Bit $tmp376 = (frost$core$Bit) {$tmp375};
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp378 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp379 = *$tmp378;
*(&local27) = $tmp379;
org$frostlang$frostc$ASTNode** $tmp380 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp381 = *$tmp380;
org$frostlang$frostc$FixedArray** $tmp382 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp383 = *$tmp382;
org$frostlang$frostc$FixedArray** $tmp384 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp385 = *$tmp384;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:181
org$frostlang$frostc$Position $tmp386 = *(&local27);
return $tmp386;
block87:;
frost$core$Int $tmp387 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:183:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp388 = $tmp3.value;
int64_t $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 == $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block89; else goto block90;
block89:;
org$frostlang$frostc$Position* $tmp393 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp394 = *$tmp393;
*(&local28) = $tmp394;
org$frostlang$frostc$ASTNode** $tmp395 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp396 = *$tmp395;
org$frostlang$frostc$FixedArray** $tmp397 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp398 = *$tmp397;
org$frostlang$frostc$MethodDecl$Kind* $tmp399 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp400 = *$tmp399;
frost$core$String** $tmp401 = (frost$core$String**) (param0->$data + 48);
frost$core$String* $tmp402 = *$tmp401;
org$frostlang$frostc$FixedArray** $tmp403 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp404 = *$tmp403;
org$frostlang$frostc$FixedArray** $tmp405 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp406 = *$tmp405;
org$frostlang$frostc$ASTNode** $tmp407 = (org$frostlang$frostc$ASTNode**) (param0->$data + 72);
org$frostlang$frostc$ASTNode* $tmp408 = *$tmp407;
org$frostlang$frostc$FixedArray** $tmp409 = (org$frostlang$frostc$FixedArray**) (param0->$data + 80);
org$frostlang$frostc$FixedArray* $tmp410 = *$tmp409;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:184
org$frostlang$frostc$Position $tmp411 = *(&local28);
return $tmp411;
block90:;
frost$core$Int $tmp412 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:186:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp413 = $tmp3.value;
int64_t $tmp414 = $tmp412.value;
bool $tmp415 = $tmp413 == $tmp414;
frost$core$Bit $tmp416 = (frost$core$Bit) {$tmp415};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp418 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp419 = *$tmp418;
*(&local29) = $tmp419;
org$frostlang$frostc$parser$Token$Kind* $tmp420 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp421 = *$tmp420;
org$frostlang$frostc$FixedArray** $tmp422 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp423 = *$tmp422;
org$frostlang$frostc$ASTNode** $tmp424 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp425 = *$tmp424;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:187
org$frostlang$frostc$Position $tmp426 = *(&local29);
return $tmp426;
block93:;
frost$core$Int $tmp427 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:189:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp428 = $tmp3.value;
int64_t $tmp429 = $tmp427.value;
bool $tmp430 = $tmp428 == $tmp429;
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block95; else goto block96;
block95:;
org$frostlang$frostc$Position* $tmp433 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp434 = *$tmp433;
*(&local30) = $tmp434;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:190
org$frostlang$frostc$Position $tmp435 = *(&local30);
return $tmp435;
block96:;
frost$core$Int $tmp436 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:192:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp437 = $tmp3.value;
int64_t $tmp438 = $tmp436.value;
bool $tmp439 = $tmp437 == $tmp438;
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp442 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp443 = *$tmp442;
*(&local31) = $tmp443;
org$frostlang$frostc$ASTNode** $tmp444 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp445 = *$tmp444;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:193
org$frostlang$frostc$Position $tmp446 = *(&local31);
return $tmp446;
block99:;
frost$core$Int $tmp447 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:195:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp448 = $tmp3.value;
int64_t $tmp449 = $tmp447.value;
bool $tmp450 = $tmp448 == $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Position* $tmp453 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp454 = *$tmp453;
*(&local32) = $tmp454;
frost$core$String** $tmp455 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp456 = *$tmp455;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:196
org$frostlang$frostc$Position $tmp457 = *(&local32);
return $tmp457;
block102:;
frost$core$Int $tmp458 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:198:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp459 = $tmp3.value;
int64_t $tmp460 = $tmp458.value;
bool $tmp461 = $tmp459 == $tmp460;
frost$core$Bit $tmp462 = (frost$core$Bit) {$tmp461};
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp464 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp465 = *$tmp464;
*(&local33) = $tmp465;
frost$core$String** $tmp466 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp467 = *$tmp466;
org$frostlang$frostc$ASTNode** $tmp468 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp469 = *$tmp468;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:199
org$frostlang$frostc$Position $tmp470 = *(&local33);
return $tmp470;
block105:;
frost$core$Int $tmp471 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:201:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp472 = $tmp3.value;
int64_t $tmp473 = $tmp471.value;
bool $tmp474 = $tmp472 == $tmp473;
frost$core$Bit $tmp475 = (frost$core$Bit) {$tmp474};
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block107; else goto block108;
block107:;
org$frostlang$frostc$Position* $tmp477 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp478 = *$tmp477;
*(&local34) = $tmp478;
org$frostlang$frostc$ASTNode** $tmp479 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp480 = *$tmp479;
frost$core$Bit* $tmp481 = (frost$core$Bit*) (param0->$data + 32);
frost$core$Bit $tmp482 = *$tmp481;
org$frostlang$frostc$ASTNode** $tmp483 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp484 = *$tmp483;
org$frostlang$frostc$ASTNode** $tmp485 = (org$frostlang$frostc$ASTNode**) (param0->$data + 41);
org$frostlang$frostc$ASTNode* $tmp486 = *$tmp485;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:202
org$frostlang$frostc$Position $tmp487 = *(&local34);
return $tmp487;
block108:;
frost$core$Int $tmp488 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:204:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp489 = $tmp3.value;
int64_t $tmp490 = $tmp488.value;
bool $tmp491 = $tmp489 == $tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Position* $tmp494 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp495 = *$tmp494;
*(&local35) = $tmp495;
frost$core$Real64* $tmp496 = (frost$core$Real64*) (param0->$data + 24);
frost$core$Real64 $tmp497 = *$tmp496;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:205
org$frostlang$frostc$Position $tmp498 = *(&local35);
return $tmp498;
block111:;
frost$core$Int $tmp499 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:207:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp500 = $tmp3.value;
int64_t $tmp501 = $tmp499.value;
bool $tmp502 = $tmp500 == $tmp501;
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block113; else goto block114;
block113:;
org$frostlang$frostc$Position* $tmp505 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp506 = *$tmp505;
*(&local36) = $tmp506;
frost$core$String** $tmp507 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp508 = *$tmp507;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:208
org$frostlang$frostc$Position $tmp509 = *(&local36);
return $tmp509;
block114:;
frost$core$Int $tmp510 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:210:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp511 = $tmp3.value;
int64_t $tmp512 = $tmp510.value;
bool $tmp513 = $tmp511 == $tmp512;
frost$core$Bit $tmp514 = (frost$core$Bit) {$tmp513};
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block116; else goto block117;
block116:;
org$frostlang$frostc$Position* $tmp516 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp517 = *$tmp516;
*(&local37) = $tmp517;
org$frostlang$frostc$ASTNode** $tmp518 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp519 = *$tmp518;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:211
org$frostlang$frostc$Position $tmp520 = *(&local37);
return $tmp520;
block117:;
frost$core$Int $tmp521 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:213:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp522 = $tmp3.value;
int64_t $tmp523 = $tmp521.value;
bool $tmp524 = $tmp522 == $tmp523;
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block119; else goto block120;
block119:;
org$frostlang$frostc$Position* $tmp527 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp528 = *$tmp527;
*(&local38) = $tmp528;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:214
org$frostlang$frostc$Position $tmp529 = *(&local38);
return $tmp529;
block120:;
frost$core$Int $tmp530 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:216:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp531 = $tmp3.value;
int64_t $tmp532 = $tmp530.value;
bool $tmp533 = $tmp531 == $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block122; else goto block123;
block122:;
org$frostlang$frostc$Position* $tmp536 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp537 = *$tmp536;
*(&local39) = $tmp537;
frost$core$String** $tmp538 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp539 = *$tmp538;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:217
org$frostlang$frostc$Position $tmp540 = *(&local39);
return $tmp540;
block123:;
frost$core$Int $tmp541 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:219:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp542 = $tmp3.value;
int64_t $tmp543 = $tmp541.value;
bool $tmp544 = $tmp542 == $tmp543;
frost$core$Bit $tmp545 = (frost$core$Bit) {$tmp544};
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block125; else goto block126;
block125:;
org$frostlang$frostc$Position* $tmp547 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp548 = *$tmp547;
*(&local40) = $tmp548;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:220
org$frostlang$frostc$Position $tmp549 = *(&local40);
return $tmp549;
block126:;
frost$core$Int $tmp550 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:222:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp551 = $tmp3.value;
int64_t $tmp552 = $tmp550.value;
bool $tmp553 = $tmp551 == $tmp552;
frost$core$Bit $tmp554 = (frost$core$Bit) {$tmp553};
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block128; else goto block129;
block128:;
org$frostlang$frostc$Position* $tmp556 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp557 = *$tmp556;
*(&local41) = $tmp557;
org$frostlang$frostc$FixedArray** $tmp558 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp559 = *$tmp558;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:223
org$frostlang$frostc$Position $tmp560 = *(&local41);
return $tmp560;
block129:;
frost$core$Int $tmp561 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:225:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp562 = $tmp3.value;
int64_t $tmp563 = $tmp561.value;
bool $tmp564 = $tmp562 == $tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block131; else goto block132;
block131:;
org$frostlang$frostc$Position* $tmp567 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp568 = *$tmp567;
*(&local42) = $tmp568;
org$frostlang$frostc$FixedArray** $tmp569 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp570 = *$tmp569;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:226
org$frostlang$frostc$Position $tmp571 = *(&local42);
return $tmp571;
block132:;
frost$core$Int $tmp572 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:228:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp573 = $tmp3.value;
int64_t $tmp574 = $tmp572.value;
bool $tmp575 = $tmp573 == $tmp574;
frost$core$Bit $tmp576 = (frost$core$Bit) {$tmp575};
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block134; else goto block135;
block134:;
org$frostlang$frostc$Position* $tmp578 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp579 = *$tmp578;
*(&local43) = $tmp579;
org$frostlang$frostc$FixedArray** $tmp580 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp581 = *$tmp580;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:229
org$frostlang$frostc$Position $tmp582 = *(&local43);
return $tmp582;
block135:;
frost$core$Int $tmp583 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:231:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp584 = $tmp3.value;
int64_t $tmp585 = $tmp583.value;
bool $tmp586 = $tmp584 == $tmp585;
frost$core$Bit $tmp587 = (frost$core$Bit) {$tmp586};
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block137; else goto block138;
block137:;
org$frostlang$frostc$Position* $tmp589 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp590 = *$tmp589;
*(&local44) = $tmp590;
frost$core$String** $tmp591 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp592 = *$tmp591;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:232
org$frostlang$frostc$Position $tmp593 = *(&local44);
return $tmp593;
block138:;
frost$core$Int $tmp594 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:234:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp595 = $tmp3.value;
int64_t $tmp596 = $tmp594.value;
bool $tmp597 = $tmp595 == $tmp596;
frost$core$Bit $tmp598 = (frost$core$Bit) {$tmp597};
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block140; else goto block141;
block140:;
org$frostlang$frostc$Position* $tmp600 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp601 = *$tmp600;
*(&local45) = $tmp601;
frost$core$String** $tmp602 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp603 = *$tmp602;
org$frostlang$frostc$ASTNode** $tmp604 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp605 = *$tmp604;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:235
org$frostlang$frostc$Position $tmp606 = *(&local45);
return $tmp606;
block141:;
frost$core$Int $tmp607 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:237:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp608 = $tmp3.value;
int64_t $tmp609 = $tmp607.value;
bool $tmp610 = $tmp608 == $tmp609;
frost$core$Bit $tmp611 = (frost$core$Bit) {$tmp610};
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block143; else goto block144;
block143:;
org$frostlang$frostc$Position* $tmp613 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp614 = *$tmp613;
*(&local46) = $tmp614;
org$frostlang$frostc$FixedArray** $tmp615 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp616 = *$tmp615;
org$frostlang$frostc$ASTNode** $tmp617 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp618 = *$tmp617;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:238
org$frostlang$frostc$Position $tmp619 = *(&local46);
return $tmp619;
block144:;
frost$core$Int $tmp620 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:240:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp621 = $tmp3.value;
int64_t $tmp622 = $tmp620.value;
bool $tmp623 = $tmp621 == $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block146; else goto block147;
block146:;
org$frostlang$frostc$Position* $tmp626 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp627 = *$tmp626;
*(&local47) = $tmp627;
org$frostlang$frostc$expression$Unary$Operator* $tmp628 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp629 = *$tmp628;
org$frostlang$frostc$ASTNode** $tmp630 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp631 = *$tmp630;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:241
org$frostlang$frostc$Position $tmp632 = *(&local47);
return $tmp632;
block147:;
frost$core$Int $tmp633 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:243:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp634 = $tmp3.value;
int64_t $tmp635 = $tmp633.value;
bool $tmp636 = $tmp634 == $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block149; else goto block150;
block149:;
org$frostlang$frostc$Position* $tmp639 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp640 = *$tmp639;
*(&local48) = $tmp640;
org$frostlang$frostc$ASTNode** $tmp641 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp642 = *$tmp641;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:244
org$frostlang$frostc$Position $tmp643 = *(&local48);
return $tmp643;
block150:;
frost$core$Int $tmp644 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:246:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp645 = $tmp3.value;
int64_t $tmp646 = $tmp644.value;
bool $tmp647 = $tmp645 == $tmp646;
frost$core$Bit $tmp648 = (frost$core$Bit) {$tmp647};
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block152; else goto block153;
block152:;
org$frostlang$frostc$Position* $tmp650 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp651 = *$tmp650;
*(&local49) = $tmp651;
org$frostlang$frostc$FixedArray** $tmp652 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp653 = *$tmp652;
org$frostlang$frostc$ASTNode** $tmp654 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp655 = *$tmp654;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:247
org$frostlang$frostc$Position $tmp656 = *(&local49);
return $tmp656;
block153:;
frost$core$Int $tmp657 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:249:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp658 = $tmp3.value;
int64_t $tmp659 = $tmp657.value;
bool $tmp660 = $tmp658 == $tmp659;
frost$core$Bit $tmp661 = (frost$core$Bit) {$tmp660};
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block155; else goto block156;
block155:;
org$frostlang$frostc$Position* $tmp663 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp664 = *$tmp663;
*(&local50) = $tmp664;
frost$core$String** $tmp665 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp666 = *$tmp665;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:250
org$frostlang$frostc$Position $tmp667 = *(&local50);
return $tmp667;
block156:;
frost$core$Int $tmp668 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:252:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp669 = $tmp3.value;
int64_t $tmp670 = $tmp668.value;
bool $tmp671 = $tmp669 == $tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block158; else goto block159;
block158:;
org$frostlang$frostc$Position* $tmp674 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp675 = *$tmp674;
*(&local51) = $tmp675;
org$frostlang$frostc$FixedArray** $tmp676 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp677 = *$tmp676;
org$frostlang$frostc$ASTNode** $tmp678 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp679 = *$tmp678;
org$frostlang$frostc$FixedArray** $tmp680 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp681 = *$tmp680;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:253
org$frostlang$frostc$Position $tmp682 = *(&local51);
return $tmp682;
block159:;
frost$core$Int $tmp683 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:255:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp684 = $tmp3.value;
int64_t $tmp685 = $tmp683.value;
bool $tmp686 = $tmp684 == $tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block161; else goto block162;
block161:;
org$frostlang$frostc$Position* $tmp689 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp690 = *$tmp689;
*(&local52) = $tmp690;
org$frostlang$frostc$Variable$Kind* $tmp691 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp692 = *$tmp691;
org$frostlang$frostc$FixedArray** $tmp693 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp694 = *$tmp693;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:256
org$frostlang$frostc$Position $tmp695 = *(&local52);
return $tmp695;
block162:;
frost$core$Int $tmp696 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:258:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp697 = $tmp3.value;
int64_t $tmp698 = $tmp696.value;
bool $tmp699 = $tmp697 == $tmp698;
frost$core$Bit $tmp700 = (frost$core$Bit) {$tmp699};
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block164; else goto block165;
block164:;
org$frostlang$frostc$Position* $tmp702 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp703 = *$tmp702;
*(&local53) = $tmp703;
org$frostlang$frostc$FixedArray** $tmp704 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp705 = *$tmp704;
org$frostlang$frostc$FixedArray** $tmp706 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp707 = *$tmp706;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:259
org$frostlang$frostc$Position $tmp708 = *(&local53);
return $tmp708;
block165:;
frost$core$Int $tmp709 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:261:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp710 = $tmp3.value;
int64_t $tmp711 = $tmp709.value;
bool $tmp712 = $tmp710 == $tmp711;
frost$core$Bit $tmp713 = (frost$core$Bit) {$tmp712};
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block167; else goto block168;
block167:;
org$frostlang$frostc$Position* $tmp715 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp716 = *$tmp715;
*(&local54) = $tmp716;
frost$core$String** $tmp717 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp718 = *$tmp717;
org$frostlang$frostc$ASTNode** $tmp719 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp720 = *$tmp719;
org$frostlang$frostc$FixedArray** $tmp721 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp722 = *$tmp721;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:262
org$frostlang$frostc$Position $tmp723 = *(&local54);
return $tmp723;
block168:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:265
frost$core$Int $tmp724 = (frost$core$Int) {265u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s725, $tmp724);
abort(); // unreachable
block1:;
goto block170;
block170:;

}
frost$core$String* org$frostlang$frostc$ASTNode$get_asString$R$frost$core$String(org$frostlang$frostc$ASTNode* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
org$frostlang$frostc$expression$Binary$Operator local7;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$expression$Binary$Operator local9;
org$frostlang$frostc$expression$Binary$Operator local10;
frost$core$Bit local11;
org$frostlang$frostc$FixedArray* local12 = NULL;
frost$core$MutableString* local13 = NULL;
org$frostlang$frostc$ASTNode* local14 = NULL;
frost$core$String* local15 = NULL;
org$frostlang$frostc$ASTNode* local16 = NULL;
org$frostlang$frostc$FixedArray* local17 = NULL;
org$frostlang$frostc$ASTNode* local18 = NULL;
frost$core$String* local19 = NULL;
org$frostlang$frostc$FixedArray* local20 = NULL;
frost$core$MutableString* local21 = NULL;
org$frostlang$frostc$ASTNode* local22 = NULL;
org$frostlang$frostc$ChoiceCase* local23 = NULL;
frost$core$Int local24;
org$frostlang$frostc$ASTNode* local25 = NULL;
org$frostlang$frostc$FixedArray* local26 = NULL;
org$frostlang$frostc$ClassDecl$Kind local27;
frost$core$String* local28 = NULL;
org$frostlang$frostc$FixedArray* local29 = NULL;
org$frostlang$frostc$FixedArray* local30 = NULL;
org$frostlang$frostc$FixedArray* local31 = NULL;
frost$core$MutableString* local32 = NULL;
org$frostlang$frostc$ASTNode* local33 = NULL;
org$frostlang$frostc$ASTNode* local34 = NULL;
frost$core$String* local35 = NULL;
org$frostlang$frostc$ASTNode* local36 = NULL;
org$frostlang$frostc$ASTNode* local37 = NULL;
frost$core$String* local38 = NULL;
org$frostlang$frostc$FixedArray* local39 = NULL;
org$frostlang$frostc$ASTNode* local40 = NULL;
frost$core$MutableString* local41 = NULL;
org$frostlang$frostc$ASTNode* local42 = NULL;
org$frostlang$frostc$ASTNode* local43 = NULL;
frost$core$String* local44 = NULL;
org$frostlang$frostc$ASTNode* local45 = NULL;
frost$core$String* local46 = NULL;
org$frostlang$frostc$FixedArray* local47 = NULL;
org$frostlang$frostc$ASTNode* local48 = NULL;
org$frostlang$frostc$FixedArray* local49 = NULL;
org$frostlang$frostc$ASTNode* local50 = NULL;
frost$core$MutableString* local51 = NULL;
org$frostlang$frostc$ASTNode* local52 = NULL;
org$frostlang$frostc$FixedArray* local53 = NULL;
frost$core$MutableString* local54 = NULL;
org$frostlang$frostc$ASTNode* local55 = NULL;
frost$core$String* local56 = NULL;
org$frostlang$frostc$ASTNode* local57 = NULL;
org$frostlang$frostc$ASTNode* local58 = NULL;
org$frostlang$frostc$FixedArray* local59 = NULL;
frost$core$MutableString* local60 = NULL;
org$frostlang$frostc$ASTNode* local61 = NULL;
frost$core$String* local62 = NULL;
org$frostlang$frostc$FixedArray* local63 = NULL;
frost$core$String* local64 = NULL;
frost$core$String* local65 = NULL;
org$frostlang$frostc$FixedArray* local66 = NULL;
org$frostlang$frostc$ASTNode* local67 = NULL;
org$frostlang$frostc$FixedArray* local68 = NULL;
org$frostlang$frostc$ASTNode* local69 = NULL;
frost$core$MutableString* local70 = NULL;
org$frostlang$frostc$ASTNode* local71 = NULL;
frost$core$UInt64 local72;
org$frostlang$frostc$IR$Value* local73 = NULL;
frost$core$String* local74 = NULL;
org$frostlang$frostc$FixedArray* local75 = NULL;
frost$core$MutableString* local76 = NULL;
org$frostlang$frostc$ASTNode* local77 = NULL;
org$frostlang$frostc$ASTNode* local78 = NULL;
org$frostlang$frostc$FixedArray* local79 = NULL;
org$frostlang$frostc$FixedArray* local80 = NULL;
frost$core$MutableString* local81 = NULL;
org$frostlang$frostc$ASTNode* local82 = NULL;
org$frostlang$frostc$ASTNode* local83 = NULL;
org$frostlang$frostc$FixedArray* local84 = NULL;
org$frostlang$frostc$MethodDecl$Kind local85;
frost$core$String* local86 = NULL;
org$frostlang$frostc$FixedArray* local87 = NULL;
org$frostlang$frostc$FixedArray* local88 = NULL;
org$frostlang$frostc$ASTNode* local89 = NULL;
org$frostlang$frostc$FixedArray* local90 = NULL;
frost$core$MutableString* local91 = NULL;
org$frostlang$frostc$ASTNode* local92 = NULL;
org$frostlang$frostc$ASTNode* local93 = NULL;
org$frostlang$frostc$parser$Token$Kind local94;
org$frostlang$frostc$FixedArray* local95 = NULL;
org$frostlang$frostc$ASTNode* local96 = NULL;
frost$core$String* local97 = NULL;
frost$core$String* local98 = NULL;
org$frostlang$frostc$ASTNode* local99 = NULL;
frost$core$String* local100 = NULL;
frost$core$String* local101 = NULL;
org$frostlang$frostc$ASTNode* local102 = NULL;
org$frostlang$frostc$ASTNode* local103 = NULL;
frost$core$Bit local104;
org$frostlang$frostc$ASTNode* local105 = NULL;
org$frostlang$frostc$ASTNode* local106 = NULL;
frost$core$MutableString* local107 = NULL;
frost$core$Real64 local108;
frost$core$String* local109 = NULL;
org$frostlang$frostc$ASTNode* local110 = NULL;
frost$core$String* local111 = NULL;
org$frostlang$frostc$FixedArray* local112 = NULL;
org$frostlang$frostc$FixedArray* local113 = NULL;
org$frostlang$frostc$FixedArray* local114 = NULL;
org$frostlang$frostc$FixedArray* local115 = NULL;
org$frostlang$frostc$ASTNode* local116 = NULL;
org$frostlang$frostc$FixedArray* local117 = NULL;
frost$core$MutableString* local118 = NULL;
frost$core$MutableString* local119 = NULL;
frost$core$MutableString* local120 = NULL;
frost$core$String* local121 = NULL;
frost$core$String* local122 = NULL;
org$frostlang$frostc$ASTNode* local123 = NULL;
org$frostlang$frostc$FixedArray* local124 = NULL;
org$frostlang$frostc$ASTNode* local125 = NULL;
org$frostlang$frostc$expression$Unary$Operator local126;
org$frostlang$frostc$ASTNode* local127 = NULL;
org$frostlang$frostc$expression$Unary$Operator local128;
org$frostlang$frostc$expression$Unary$Operator local129;
frost$core$String* local130 = NULL;
org$frostlang$frostc$ASTNode* local131 = NULL;
org$frostlang$frostc$FixedArray* local132 = NULL;
org$frostlang$frostc$ASTNode* local133 = NULL;
frost$core$String* local134 = NULL;
org$frostlang$frostc$Variable$Kind local135;
org$frostlang$frostc$FixedArray* local136 = NULL;
frost$core$MutableString* local137 = NULL;
org$frostlang$frostc$FixedArray* local138 = NULL;
org$frostlang$frostc$FixedArray* local139 = NULL;
frost$core$MutableString* local140 = NULL;
frost$core$String* local141 = NULL;
org$frostlang$frostc$ASTNode* local142 = NULL;
org$frostlang$frostc$ASTNode* local143 = NULL;
frost$core$String* local144 = NULL;
org$frostlang$frostc$ASTNode* local145 = NULL;
org$frostlang$frostc$FixedArray* local146 = NULL;
frost$core$MutableString* local147 = NULL;
org$frostlang$frostc$ASTNode* local148 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:272
frost$core$Int* $tmp726 = &param0->$rawValue;
frost$core$Int $tmp727 = *$tmp726;
frost$core$Int $tmp728 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:273:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp729 = $tmp727.value;
int64_t $tmp730 = $tmp728.value;
bool $tmp731 = $tmp729 == $tmp730;
frost$core$Bit $tmp732 = (frost$core$Bit) {$tmp731};
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp734 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp735 = *$tmp734;
frost$core$String** $tmp736 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp737 = *$tmp736;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$String* $tmp738 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local0) = $tmp737;
frost$core$String** $tmp739 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp740 = *$tmp739;
org$frostlang$frostc$ASTNode** $tmp741 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp742 = *$tmp741;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
org$frostlang$frostc$ASTNode* $tmp743 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local1) = $tmp742;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:274
org$frostlang$frostc$ASTNode* $tmp744 = *(&local1);
frost$core$Bit $tmp745 = (frost$core$Bit) {$tmp744 != NULL};
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:275
frost$core$String* $tmp747 = *(&local0);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:275:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$String* $tmp748 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp747, &$s749);
org$frostlang$frostc$ASTNode* $tmp750 = *(&local1);
frost$core$Bit $tmp751 = (frost$core$Bit) {$tmp750 != NULL};
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block8; else goto block9;
block9:;
frost$core$Int $tmp753 = (frost$core$Int) {275u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s754, $tmp753, &$s755);
abort(); // unreachable
block8:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:275:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn757 $tmp756 = ($fn757) ((frost$core$Object*) $tmp750)->$class->vtable[0];
frost$core$String* $tmp758 = $tmp756(((frost$core$Object*) $tmp750));
frost$core$String* $tmp759 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp748, $tmp758);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
frost$core$String* $tmp760 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp759, &$s761);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
org$frostlang$frostc$ASTNode* $tmp762 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp763 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local0) = ((frost$core$String*) NULL);
return $tmp760;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:277
frost$core$String* $tmp764 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
org$frostlang$frostc$ASTNode* $tmp765 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp766 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local0) = ((frost$core$String*) NULL);
return $tmp764;
block3:;
frost$core$Int $tmp767 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:279:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp768 = $tmp727.value;
int64_t $tmp769 = $tmp767.value;
bool $tmp770 = $tmp768 == $tmp769;
frost$core$Bit $tmp771 = (frost$core$Bit) {$tmp770};
bool $tmp772 = $tmp771.value;
if ($tmp772) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp773 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp774 = *$tmp773;
org$frostlang$frostc$FixedArray** $tmp775 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp776 = *$tmp775;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
org$frostlang$frostc$FixedArray* $tmp777 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
*(&local2) = $tmp776;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:280
org$frostlang$frostc$FixedArray* $tmp778 = *(&local2);
$fn780 $tmp779 = ($fn780) ((frost$core$Object*) $tmp778)->$class->vtable[0];
frost$core$String* $tmp781 = $tmp779(((frost$core$Object*) $tmp778));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
org$frostlang$frostc$FixedArray* $tmp782 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp781;
block12:;
frost$core$Int $tmp783 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:282:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp784 = $tmp727.value;
int64_t $tmp785 = $tmp783.value;
bool $tmp786 = $tmp784 == $tmp785;
frost$core$Bit $tmp787 = (frost$core$Bit) {$tmp786};
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp789 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp790 = *$tmp789;
org$frostlang$frostc$ASTNode** $tmp791 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp792 = *$tmp791;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
org$frostlang$frostc$ASTNode* $tmp793 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
*(&local3) = $tmp792;
org$frostlang$frostc$ASTNode** $tmp794 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp795 = *$tmp794;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
org$frostlang$frostc$ASTNode* $tmp796 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local4) = $tmp795;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:283
org$frostlang$frostc$ASTNode* $tmp797 = *(&local4);
frost$core$Bit $tmp798 = (frost$core$Bit) {$tmp797 == NULL};
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:284
org$frostlang$frostc$ASTNode* $tmp800 = *(&local3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:284:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn802 $tmp801 = ($fn802) ((frost$core$Object*) $tmp800)->$class->vtable[0];
frost$core$String* $tmp803 = $tmp801(((frost$core$Object*) $tmp800));
frost$core$String* $tmp804 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s805, $tmp803);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$String* $tmp806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp804, &$s807);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
org$frostlang$frostc$ASTNode* $tmp808 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp809 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp806;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:286
org$frostlang$frostc$ASTNode* $tmp810 = *(&local3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:286:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn812 $tmp811 = ($fn812) ((frost$core$Object*) $tmp810)->$class->vtable[0];
frost$core$String* $tmp813 = $tmp811(((frost$core$Object*) $tmp810));
frost$core$String* $tmp814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s815, $tmp813);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$String* $tmp816 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp814, &$s817);
org$frostlang$frostc$ASTNode* $tmp818 = *(&local4);
frost$core$Bit $tmp819 = (frost$core$Bit) {$tmp818 != NULL};
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block21; else goto block22;
block22:;
frost$core$Int $tmp821 = (frost$core$Int) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s822, $tmp821, &$s823);
abort(); // unreachable
block21:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:286:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn825 $tmp824 = ($fn825) ((frost$core$Object*) $tmp818)->$class->vtable[0];
frost$core$String* $tmp826 = $tmp824(((frost$core$Object*) $tmp818));
frost$core$String* $tmp827 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp816, $tmp826);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$String* $tmp828 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp827, &$s829);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
org$frostlang$frostc$ASTNode* $tmp830 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp831 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp828;
block15:;
frost$core$Int $tmp832 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:288:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp833 = $tmp727.value;
int64_t $tmp834 = $tmp832.value;
bool $tmp835 = $tmp833 == $tmp834;
frost$core$Bit $tmp836 = (frost$core$Bit) {$tmp835};
bool $tmp837 = $tmp836.value;
if ($tmp837) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp838 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp839 = *$tmp838;
org$frostlang$frostc$ASTNode** $tmp840 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp841 = *$tmp840;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
org$frostlang$frostc$ASTNode* $tmp842 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local5) = $tmp841;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:289
org$frostlang$frostc$ASTNode* $tmp843 = *(&local5);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:289:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn845 $tmp844 = ($fn845) ((frost$core$Object*) $tmp843)->$class->vtable[0];
frost$core$String* $tmp846 = $tmp844(((frost$core$Object*) $tmp843));
frost$core$String* $tmp847 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s848, $tmp846);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$String* $tmp849 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp847, &$s850);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
org$frostlang$frostc$ASTNode* $tmp851 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp849;
block25:;
frost$core$Int $tmp852 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:291:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp853 = $tmp727.value;
int64_t $tmp854 = $tmp852.value;
bool $tmp855 = $tmp853 == $tmp854;
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp858 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp859 = *$tmp858;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:292
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s860));
return &$s861;
block29:;
frost$core$Int $tmp862 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:294:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp863 = $tmp727.value;
int64_t $tmp864 = $tmp862.value;
bool $tmp865 = $tmp863 == $tmp864;
frost$core$Bit $tmp866 = (frost$core$Bit) {$tmp865};
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block31; else goto block32;
block31:;
org$frostlang$frostc$Position* $tmp868 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp869 = *$tmp868;
org$frostlang$frostc$ASTNode** $tmp870 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp871 = *$tmp870;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
org$frostlang$frostc$ASTNode* $tmp872 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local6) = $tmp871;
org$frostlang$frostc$expression$Binary$Operator* $tmp873 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp874 = *$tmp873;
*(&local7) = $tmp874;
org$frostlang$frostc$ASTNode** $tmp875 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp876 = *$tmp875;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
org$frostlang$frostc$ASTNode* $tmp877 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local8) = $tmp876;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:295
org$frostlang$frostc$expression$Binary$Operator $tmp878 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp879;
$tmp879 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp879->value = $tmp878;
frost$core$Int $tmp880 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from ASTNode.frost:295:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp881 = &(&local10)->$rawValue;
*$tmp881 = $tmp880;
org$frostlang$frostc$expression$Binary$Operator $tmp882 = *(&local10);
*(&local9) = $tmp882;
org$frostlang$frostc$expression$Binary$Operator $tmp883 = *(&local9);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp884;
$tmp884 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp884->value = $tmp883;
ITable* $tmp885 = ((frost$core$Equatable*) $tmp879)->$class->itable;
while ($tmp885->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp885 = $tmp885->next;
}
$fn887 $tmp886 = $tmp885->methods[0];
frost$core$Bit $tmp888 = $tmp886(((frost$core$Equatable*) $tmp879), ((frost$core$Equatable*) $tmp884));
bool $tmp889 = $tmp888.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp884)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp879)));
if ($tmp889) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:296
org$frostlang$frostc$ASTNode* $tmp890 = *(&local6);
$fn892 $tmp891 = ($fn892) $tmp890->$class->vtable[0];
frost$core$String* $tmp893 = $tmp891($tmp890);
frost$core$String* $tmp894 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp893, &$s895);
org$frostlang$frostc$ASTNode* $tmp896 = *(&local8);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:296:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn898 $tmp897 = ($fn898) ((frost$core$Object*) $tmp896)->$class->vtable[0];
frost$core$String* $tmp899 = $tmp897(((frost$core$Object*) $tmp896));
frost$core$String* $tmp900 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp894, $tmp899);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$core$String* $tmp901 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp900, &$s902);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
org$frostlang$frostc$ASTNode* $tmp903 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp904 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp901;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:298
org$frostlang$frostc$expression$Binary$Operator $tmp905 = *(&local7);
frost$core$Bit $tmp906 = org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit($tmp905);
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:299
org$frostlang$frostc$ASTNode* $tmp908 = *(&local6);
$fn910 $tmp909 = ($fn910) $tmp908->$class->vtable[0];
frost$core$String* $tmp911 = $tmp909($tmp908);
frost$core$String* $tmp912 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp911, &$s913);
org$frostlang$frostc$expression$Binary$Operator $tmp914 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp915;
$tmp915 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp915->value = $tmp914;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:299:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn917 $tmp916 = ($fn917) ((frost$core$Object*) $tmp915)->$class->vtable[0];
frost$core$String* $tmp918 = $tmp916(((frost$core$Object*) $tmp915));
frost$core$String* $tmp919 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp912, $tmp918);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
frost$core$String* $tmp920 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp919, &$s921);
org$frostlang$frostc$ASTNode* $tmp922 = *(&local8);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:299:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn924 $tmp923 = ($fn924) ((frost$core$Object*) $tmp922)->$class->vtable[0];
frost$core$String* $tmp925 = $tmp923(((frost$core$Object*) $tmp922));
frost$core$String* $tmp926 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp920, $tmp925);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
frost$core$String* $tmp927 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp926, &$s928);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
org$frostlang$frostc$ASTNode* $tmp929 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp930 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp927;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:301
org$frostlang$frostc$ASTNode* $tmp931 = *(&local6);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:301:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn933 $tmp932 = ($fn933) ((frost$core$Object*) $tmp931)->$class->vtable[0];
frost$core$String* $tmp934 = $tmp932(((frost$core$Object*) $tmp931));
frost$core$String* $tmp935 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s936, $tmp934);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$String* $tmp937 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp935, &$s938);
org$frostlang$frostc$expression$Binary$Operator $tmp939 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp940;
$tmp940 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp940->value = $tmp939;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:301:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn942 $tmp941 = ($fn942) ((frost$core$Object*) $tmp940)->$class->vtable[0];
frost$core$String* $tmp943 = $tmp941(((frost$core$Object*) $tmp940));
frost$core$String* $tmp944 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp937, $tmp943);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
frost$core$String* $tmp945 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp944, &$s946);
org$frostlang$frostc$ASTNode* $tmp947 = *(&local8);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:301:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn949 $tmp948 = ($fn949) ((frost$core$Object*) $tmp947)->$class->vtable[0];
frost$core$String* $tmp950 = $tmp948(((frost$core$Object*) $tmp947));
frost$core$String* $tmp951 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp945, $tmp950);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
frost$core$String* $tmp952 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp951, &$s953);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
org$frostlang$frostc$ASTNode* $tmp954 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp955 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp952;
block32:;
frost$core$Int $tmp956 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:303:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp957 = $tmp727.value;
int64_t $tmp958 = $tmp956.value;
bool $tmp959 = $tmp957 == $tmp958;
frost$core$Bit $tmp960 = (frost$core$Bit) {$tmp959};
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block45; else goto block46;
block45:;
org$frostlang$frostc$Position* $tmp962 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp963 = *$tmp962;
frost$core$Bit* $tmp964 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp965 = *$tmp964;
*(&local11) = $tmp965;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:304
frost$core$Bit $tmp966 = *(&local11);
frost$core$Bit$wrapper* $tmp967;
$tmp967 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp967->value = $tmp966;
$fn969 $tmp968 = ($fn969) ((frost$core$Object*) $tmp967)->$class->vtable[0];
frost$core$String* $tmp970 = $tmp968(((frost$core$Object*) $tmp967));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
return $tmp970;
block46:;
frost$core$Int $tmp971 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:306:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp972 = $tmp727.value;
int64_t $tmp973 = $tmp971.value;
bool $tmp974 = $tmp972 == $tmp973;
frost$core$Bit $tmp975 = (frost$core$Bit) {$tmp974};
bool $tmp976 = $tmp975.value;
if ($tmp976) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp977 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp978 = *$tmp977;
org$frostlang$frostc$FixedArray** $tmp979 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp980 = *$tmp979;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
org$frostlang$frostc$FixedArray* $tmp981 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
*(&local12) = $tmp980;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:307
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp982 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp982, &$s983);
*(&local13) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$core$MutableString* $tmp984 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
*(&local13) = $tmp982;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:308
org$frostlang$frostc$FixedArray* $tmp985 = *(&local12);
ITable* $tmp986 = ((frost$collections$Iterable*) $tmp985)->$class->itable;
while ($tmp986->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp986 = $tmp986->next;
}
$fn988 $tmp987 = $tmp986->methods[0];
frost$collections$Iterator* $tmp989 = $tmp987(((frost$collections$Iterable*) $tmp985));
goto block51;
block51:;
ITable* $tmp990 = $tmp989->$class->itable;
while ($tmp990->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp990 = $tmp990->next;
}
$fn992 $tmp991 = $tmp990->methods[0];
frost$core$Bit $tmp993 = $tmp991($tmp989);
bool $tmp994 = $tmp993.value;
if ($tmp994) goto block53; else goto block52;
block52:;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp995 = $tmp989->$class->itable;
while ($tmp995->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp995 = $tmp995->next;
}
$fn997 $tmp996 = $tmp995->methods[1];
frost$core$Object* $tmp998 = $tmp996($tmp989);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp998)));
org$frostlang$frostc$ASTNode* $tmp999 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
*(&local14) = ((org$frostlang$frostc$ASTNode*) $tmp998);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:309
frost$core$MutableString* $tmp1000 = *(&local13);
org$frostlang$frostc$ASTNode* $tmp1001 = *(&local14);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:309:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1003 $tmp1002 = ($fn1003) ((frost$core$Object*) $tmp1001)->$class->vtable[0];
frost$core$String* $tmp1004 = $tmp1002(((frost$core$Object*) $tmp1001));
frost$core$String* $tmp1005 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1004, &$s1006);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
frost$core$MutableString$append$frost$core$String($tmp1000, $tmp1005);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
frost$core$Frost$unref$frost$core$Object$Q($tmp998);
org$frostlang$frostc$ASTNode* $tmp1007 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block51;
block53:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:311
frost$core$MutableString* $tmp1008 = *(&local13);
frost$core$MutableString$append$frost$core$String($tmp1008, &$s1009);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:312
frost$core$MutableString* $tmp1010 = *(&local13);
frost$core$String* $tmp1011 = frost$core$MutableString$finish$R$frost$core$String($tmp1010);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$MutableString* $tmp1012 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
*(&local13) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1013 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1011;
block49:;
frost$core$Int $tmp1014 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:314:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1015 = $tmp727.value;
int64_t $tmp1016 = $tmp1014.value;
bool $tmp1017 = $tmp1015 == $tmp1016;
frost$core$Bit $tmp1018 = (frost$core$Bit) {$tmp1017};
bool $tmp1019 = $tmp1018.value;
if ($tmp1019) goto block55; else goto block56;
block55:;
org$frostlang$frostc$Position* $tmp1020 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1021 = *$tmp1020;
frost$core$String** $tmp1022 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1023 = *$tmp1022;
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$core$String* $tmp1024 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local15) = $tmp1023;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:315
frost$core$String* $tmp1025 = *(&local15);
frost$core$Bit $tmp1026 = (frost$core$Bit) {$tmp1025 != NULL};
bool $tmp1027 = $tmp1026.value;
if ($tmp1027) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:316
frost$core$String* $tmp1028 = *(&local15);
frost$core$Bit $tmp1029 = (frost$core$Bit) {$tmp1028 != NULL};
bool $tmp1030 = $tmp1029.value;
if ($tmp1030) goto block60; else goto block61;
block61:;
frost$core$Int $tmp1031 = (frost$core$Int) {316u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1032, $tmp1031, &$s1033);
abort(); // unreachable
block60:;
frost$core$String* $tmp1034 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1035, $tmp1028);
frost$core$String* $tmp1036 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1034, &$s1037);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
frost$core$String* $tmp1038 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
*(&local15) = ((frost$core$String*) NULL);
return $tmp1036;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:318
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1039));
frost$core$String* $tmp1040 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
*(&local15) = ((frost$core$String*) NULL);
return &$s1041;
block56:;
frost$core$Int $tmp1042 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:320:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1043 = $tmp727.value;
int64_t $tmp1044 = $tmp1042.value;
bool $tmp1045 = $tmp1043 == $tmp1044;
frost$core$Bit $tmp1046 = (frost$core$Bit) {$tmp1045};
bool $tmp1047 = $tmp1046.value;
if ($tmp1047) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp1048 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1049 = *$tmp1048;
org$frostlang$frostc$ASTNode** $tmp1050 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1051 = *$tmp1050;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
org$frostlang$frostc$ASTNode* $tmp1052 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
*(&local16) = $tmp1051;
org$frostlang$frostc$FixedArray** $tmp1053 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1054 = *$tmp1053;
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
org$frostlang$frostc$FixedArray* $tmp1055 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local17) = $tmp1054;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:321
org$frostlang$frostc$ASTNode* $tmp1056 = *(&local16);
$fn1058 $tmp1057 = ($fn1058) $tmp1056->$class->vtable[0];
frost$core$String* $tmp1059 = $tmp1057($tmp1056);
frost$core$String* $tmp1060 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1059, &$s1061);
org$frostlang$frostc$FixedArray* $tmp1062 = *(&local17);
ITable* $tmp1063 = ((frost$collections$CollectionView*) $tmp1062)->$class->itable;
while ($tmp1063->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1063 = $tmp1063->next;
}
$fn1065 $tmp1064 = $tmp1063->methods[3];
frost$core$String* $tmp1066 = $tmp1064(((frost$collections$CollectionView*) $tmp1062), &$s1067);
frost$core$String* $tmp1068 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1060, $tmp1066);
frost$core$String* $tmp1069 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1068, &$s1070);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
org$frostlang$frostc$FixedArray* $tmp1071 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1072 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1069;
block63:;
frost$core$Int $tmp1073 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:323:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1074 = $tmp727.value;
int64_t $tmp1075 = $tmp1073.value;
bool $tmp1076 = $tmp1074 == $tmp1075;
frost$core$Bit $tmp1077 = (frost$core$Bit) {$tmp1076};
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block65; else goto block66;
block65:;
org$frostlang$frostc$Position* $tmp1079 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1080 = *$tmp1079;
org$frostlang$frostc$ASTNode** $tmp1081 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1082 = *$tmp1081;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
org$frostlang$frostc$ASTNode* $tmp1083 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local18) = $tmp1082;
frost$core$String** $tmp1084 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp1085 = *$tmp1084;
*(&local19) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$String* $tmp1086 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
*(&local19) = $tmp1085;
org$frostlang$frostc$FixedArray** $tmp1087 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1088 = *$tmp1087;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
org$frostlang$frostc$FixedArray* $tmp1089 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local20) = $tmp1088;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:324
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1090 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1090);
*(&local21) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$MutableString* $tmp1091 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
*(&local21) = $tmp1090;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:325
org$frostlang$frostc$ASTNode* $tmp1092 = *(&local18);
frost$core$Bit $tmp1093 = (frost$core$Bit) {$tmp1092 != NULL};
bool $tmp1094 = $tmp1093.value;
if ($tmp1094) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:326
frost$core$MutableString* $tmp1095 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1096 = *(&local18);
frost$core$Bit $tmp1097 = (frost$core$Bit) {$tmp1096 != NULL};
bool $tmp1098 = $tmp1097.value;
if ($tmp1098) goto block70; else goto block71;
block71:;
frost$core$Int $tmp1099 = (frost$core$Int) {326u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1100, $tmp1099, &$s1101);
abort(); // unreachable
block70:;
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:326:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1103 $tmp1102 = ($fn1103) ((frost$core$Object*) $tmp1096)->$class->vtable[0];
frost$core$String* $tmp1104 = $tmp1102(((frost$core$Object*) $tmp1096));
frost$core$String* $tmp1105 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1104, &$s1106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
frost$core$MutableString$append$frost$core$String($tmp1095, $tmp1105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
goto block69;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:328
frost$core$MutableString* $tmp1107 = *(&local21);
frost$core$String* $tmp1108 = *(&local19);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:328:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
frost$core$String* $tmp1109 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1108, &$s1110);
org$frostlang$frostc$FixedArray* $tmp1111 = *(&local20);
frost$core$Bit $tmp1112 = (frost$core$Bit) {$tmp1111 != NULL};
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block74; else goto block75;
block75:;
frost$core$Int $tmp1114 = (frost$core$Int) {328u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1115, $tmp1114, &$s1116);
abort(); // unreachable
block74:;
ITable* $tmp1117 = ((frost$collections$CollectionView*) $tmp1111)->$class->itable;
while ($tmp1117->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1117 = $tmp1117->next;
}
$fn1119 $tmp1118 = $tmp1117->methods[3];
frost$core$String* $tmp1120 = $tmp1118(((frost$collections$CollectionView*) $tmp1111), &$s1121);
frost$core$String* $tmp1122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1109, $tmp1120);
frost$core$String* $tmp1123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1122, &$s1124);
frost$core$MutableString$append$frost$core$String($tmp1107, $tmp1123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:329
frost$core$MutableString* $tmp1125 = *(&local21);
frost$core$String* $tmp1126 = frost$core$MutableString$finish$R$frost$core$String($tmp1125);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
frost$core$MutableString* $tmp1127 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
*(&local21) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1128 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1129 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
*(&local19) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1130 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1126;
block66:;
frost$core$Int $tmp1131 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:331:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1132 = $tmp727.value;
int64_t $tmp1133 = $tmp1131.value;
bool $tmp1134 = $tmp1132 == $tmp1133;
frost$core$Bit $tmp1135 = (frost$core$Bit) {$tmp1134};
bool $tmp1136 = $tmp1135.value;
if ($tmp1136) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp1137 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1138 = *$tmp1137;
org$frostlang$frostc$ASTNode** $tmp1139 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1140 = *$tmp1139;
*(&local22) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
org$frostlang$frostc$ASTNode* $tmp1141 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
*(&local22) = $tmp1140;
org$frostlang$frostc$ChoiceCase** $tmp1142 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp1143 = *$tmp1142;
*(&local23) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
org$frostlang$frostc$ChoiceCase* $tmp1144 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local23) = $tmp1143;
frost$core$Int* $tmp1145 = (frost$core$Int*) (param0->$data + 40);
frost$core$Int $tmp1146 = *$tmp1145;
*(&local24) = $tmp1146;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:332
org$frostlang$frostc$ASTNode* $tmp1147 = *(&local22);
$fn1149 $tmp1148 = ($fn1149) $tmp1147->$class->vtable[0];
frost$core$String* $tmp1150 = $tmp1148($tmp1147);
frost$core$String* $tmp1151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1150, &$s1152);
org$frostlang$frostc$ChoiceCase* $tmp1153 = *(&local23);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:332:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1155 $tmp1154 = ($fn1155) ((frost$core$Object*) $tmp1153)->$class->vtable[0];
frost$core$String* $tmp1156 = $tmp1154(((frost$core$Object*) $tmp1153));
frost$core$String* $tmp1157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1151, $tmp1156);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
frost$core$String* $tmp1158 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1157, &$s1159);
frost$core$Int $tmp1160 = *(&local24);
frost$core$Int$wrapper* $tmp1161;
$tmp1161 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1161->value = $tmp1160;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:332:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1163 $tmp1162 = ($fn1163) ((frost$core$Object*) $tmp1161)->$class->vtable[0];
frost$core$String* $tmp1164 = $tmp1162(((frost$core$Object*) $tmp1161));
frost$core$String* $tmp1165 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1158, $tmp1164);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$String* $tmp1166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1165, &$s1167);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
org$frostlang$frostc$ChoiceCase* $tmp1168 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local23) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp1169 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
*(&local22) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1166;
block77:;
frost$core$Int $tmp1170 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:334:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1171 = $tmp727.value;
int64_t $tmp1172 = $tmp1170.value;
bool $tmp1173 = $tmp1171 == $tmp1172;
frost$core$Bit $tmp1174 = (frost$core$Bit) {$tmp1173};
bool $tmp1175 = $tmp1174.value;
if ($tmp1175) goto block81; else goto block82;
block81:;
org$frostlang$frostc$Position* $tmp1176 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1177 = *$tmp1176;
org$frostlang$frostc$ASTNode** $tmp1178 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1179 = *$tmp1178;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
org$frostlang$frostc$ASTNode* $tmp1180 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
*(&local25) = $tmp1179;
org$frostlang$frostc$FixedArray** $tmp1181 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1182 = *$tmp1181;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
org$frostlang$frostc$FixedArray* $tmp1183 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
*(&local26) = $tmp1182;
org$frostlang$frostc$ClassDecl$Kind* $tmp1184 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp1185 = *$tmp1184;
*(&local27) = $tmp1185;
frost$core$String** $tmp1186 = (frost$core$String**) (param0->$data + 48);
frost$core$String* $tmp1187 = *$tmp1186;
*(&local28) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$String* $tmp1188 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
*(&local28) = $tmp1187;
org$frostlang$frostc$FixedArray** $tmp1189 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1190 = *$tmp1189;
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
org$frostlang$frostc$FixedArray* $tmp1191 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
*(&local29) = $tmp1190;
org$frostlang$frostc$FixedArray** $tmp1192 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp1193 = *$tmp1192;
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
org$frostlang$frostc$FixedArray* $tmp1194 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
*(&local30) = $tmp1193;
org$frostlang$frostc$FixedArray** $tmp1195 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1196 = *$tmp1195;
*(&local31) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
org$frostlang$frostc$FixedArray* $tmp1197 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local31) = $tmp1196;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:335
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1198 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1198);
*(&local32) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$core$MutableString* $tmp1199 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
*(&local32) = $tmp1198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:336
org$frostlang$frostc$ASTNode* $tmp1200 = *(&local25);
frost$core$Bit $tmp1201 = (frost$core$Bit) {$tmp1200 != NULL};
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block84; else goto block85;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:337
frost$core$MutableString* $tmp1203 = *(&local32);
org$frostlang$frostc$ASTNode* $tmp1204 = *(&local25);
frost$core$Bit $tmp1205 = (frost$core$Bit) {$tmp1204 != NULL};
bool $tmp1206 = $tmp1205.value;
if ($tmp1206) goto block86; else goto block87;
block87:;
frost$core$Int $tmp1207 = (frost$core$Int) {337u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1208, $tmp1207, &$s1209);
abort(); // unreachable
block86:;
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:337:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1211 $tmp1210 = ($fn1211) ((frost$core$Object*) $tmp1204)->$class->vtable[0];
frost$core$String* $tmp1212 = $tmp1210(((frost$core$Object*) $tmp1204));
frost$core$String* $tmp1213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1212, &$s1214);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$MutableString$append$frost$core$String($tmp1203, $tmp1213);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
goto block85;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:339
org$frostlang$frostc$FixedArray* $tmp1215 = *(&local26);
ITable* $tmp1216 = ((frost$collections$Iterable*) $tmp1215)->$class->itable;
while ($tmp1216->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1216 = $tmp1216->next;
}
$fn1218 $tmp1217 = $tmp1216->methods[0];
frost$collections$Iterator* $tmp1219 = $tmp1217(((frost$collections$Iterable*) $tmp1215));
goto block89;
block89:;
ITable* $tmp1220 = $tmp1219->$class->itable;
while ($tmp1220->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1220 = $tmp1220->next;
}
$fn1222 $tmp1221 = $tmp1220->methods[0];
frost$core$Bit $tmp1223 = $tmp1221($tmp1219);
bool $tmp1224 = $tmp1223.value;
if ($tmp1224) goto block91; else goto block90;
block90:;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1225 = $tmp1219->$class->itable;
while ($tmp1225->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1225 = $tmp1225->next;
}
$fn1227 $tmp1226 = $tmp1225->methods[1];
frost$core$Object* $tmp1228 = $tmp1226($tmp1219);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1228)));
org$frostlang$frostc$ASTNode* $tmp1229 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
*(&local33) = ((org$frostlang$frostc$ASTNode*) $tmp1228);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:340
frost$core$MutableString* $tmp1230 = *(&local32);
org$frostlang$frostc$ASTNode* $tmp1231 = *(&local33);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:340:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1233 $tmp1232 = ($fn1233) ((frost$core$Object*) $tmp1231)->$class->vtable[0];
frost$core$String* $tmp1234 = $tmp1232(((frost$core$Object*) $tmp1231));
frost$core$String* $tmp1235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1234, &$s1236);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
frost$core$MutableString$append$frost$core$String($tmp1230, $tmp1235);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
frost$core$Frost$unref$frost$core$Object$Q($tmp1228);
org$frostlang$frostc$ASTNode* $tmp1237 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block89;
block91:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:342
org$frostlang$frostc$ClassDecl$Kind $tmp1238 = *(&local27);
frost$core$Int $tmp1239 = $tmp1238.$rawValue;
frost$core$Int $tmp1240 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:343:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1241 = $tmp1239.value;
int64_t $tmp1242 = $tmp1240.value;
bool $tmp1243 = $tmp1241 == $tmp1242;
frost$core$Bit $tmp1244 = (frost$core$Bit) {$tmp1243};
bool $tmp1245 = $tmp1244.value;
if ($tmp1245) goto block94; else goto block95;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:343
frost$core$MutableString* $tmp1246 = *(&local32);
frost$core$MutableString$append$frost$core$String($tmp1246, &$s1247);
goto block93;
block95:;
frost$core$Int $tmp1248 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:344:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1249 = $tmp1239.value;
int64_t $tmp1250 = $tmp1248.value;
bool $tmp1251 = $tmp1249 == $tmp1250;
frost$core$Bit $tmp1252 = (frost$core$Bit) {$tmp1251};
bool $tmp1253 = $tmp1252.value;
if ($tmp1253) goto block97; else goto block98;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:344
frost$core$MutableString* $tmp1254 = *(&local32);
frost$core$MutableString$append$frost$core$String($tmp1254, &$s1255);
goto block93;
block98:;
frost$core$Int $tmp1256 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:345:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1257 = $tmp1239.value;
int64_t $tmp1258 = $tmp1256.value;
bool $tmp1259 = $tmp1257 == $tmp1258;
frost$core$Bit $tmp1260 = (frost$core$Bit) {$tmp1259};
bool $tmp1261 = $tmp1260.value;
if ($tmp1261) goto block100; else goto block93;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:345
frost$core$MutableString* $tmp1262 = *(&local32);
frost$core$MutableString$append$frost$core$String($tmp1262, &$s1263);
goto block93;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:347
frost$core$MutableString* $tmp1264 = *(&local32);
frost$core$String* $tmp1265 = *(&local28);
frost$core$MutableString$append$frost$core$String($tmp1264, $tmp1265);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:348
org$frostlang$frostc$FixedArray* $tmp1266 = *(&local29);
frost$core$Bit $tmp1267 = (frost$core$Bit) {$tmp1266 != NULL};
bool $tmp1268 = $tmp1267.value;
if ($tmp1268) goto block102; else goto block103;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:349
frost$core$MutableString* $tmp1269 = *(&local32);
org$frostlang$frostc$FixedArray* $tmp1270 = *(&local29);
frost$core$Bit $tmp1271 = (frost$core$Bit) {$tmp1270 != NULL};
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block104; else goto block105;
block105:;
frost$core$Int $tmp1273 = (frost$core$Int) {349u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1274, $tmp1273, &$s1275);
abort(); // unreachable
block104:;
ITable* $tmp1276 = ((frost$collections$CollectionView*) $tmp1270)->$class->itable;
while ($tmp1276->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1276 = $tmp1276->next;
}
$fn1278 $tmp1277 = $tmp1276->methods[3];
frost$core$String* $tmp1279 = $tmp1277(((frost$collections$CollectionView*) $tmp1270), &$s1280);
frost$core$String* $tmp1281 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1282, $tmp1279);
frost$core$String* $tmp1283 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1281, &$s1284);
frost$core$MutableString$append$frost$core$String($tmp1269, $tmp1283);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
goto block103;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:351
org$frostlang$frostc$FixedArray* $tmp1285 = *(&local30);
frost$core$Bit $tmp1286 = (frost$core$Bit) {$tmp1285 != NULL};
bool $tmp1287 = $tmp1286.value;
if ($tmp1287) goto block106; else goto block107;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:352
frost$core$MutableString* $tmp1288 = *(&local32);
org$frostlang$frostc$FixedArray* $tmp1289 = *(&local30);
frost$core$Bit $tmp1290 = (frost$core$Bit) {$tmp1289 != NULL};
bool $tmp1291 = $tmp1290.value;
if ($tmp1291) goto block108; else goto block109;
block109:;
frost$core$Int $tmp1292 = (frost$core$Int) {352u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1293, $tmp1292, &$s1294);
abort(); // unreachable
block108:;
ITable* $tmp1295 = ((frost$collections$CollectionView*) $tmp1289)->$class->itable;
while ($tmp1295->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1295 = $tmp1295->next;
}
$fn1297 $tmp1296 = $tmp1295->methods[3];
frost$core$String* $tmp1298 = $tmp1296(((frost$collections$CollectionView*) $tmp1289), &$s1299);
frost$core$String* $tmp1300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1301, $tmp1298);
frost$core$String* $tmp1302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1300, &$s1303);
frost$core$MutableString$append$frost$core$String($tmp1288, $tmp1302);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
goto block107;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:354
frost$core$MutableString* $tmp1304 = *(&local32);
frost$core$MutableString$append$frost$core$String($tmp1304, &$s1305);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:355
org$frostlang$frostc$FixedArray* $tmp1306 = *(&local31);
ITable* $tmp1307 = ((frost$collections$Iterable*) $tmp1306)->$class->itable;
while ($tmp1307->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1307 = $tmp1307->next;
}
$fn1309 $tmp1308 = $tmp1307->methods[0];
frost$collections$Iterator* $tmp1310 = $tmp1308(((frost$collections$Iterable*) $tmp1306));
goto block110;
block110:;
ITable* $tmp1311 = $tmp1310->$class->itable;
while ($tmp1311->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1311 = $tmp1311->next;
}
$fn1313 $tmp1312 = $tmp1311->methods[0];
frost$core$Bit $tmp1314 = $tmp1312($tmp1310);
bool $tmp1315 = $tmp1314.value;
if ($tmp1315) goto block112; else goto block111;
block111:;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1316 = $tmp1310->$class->itable;
while ($tmp1316->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1316 = $tmp1316->next;
}
$fn1318 $tmp1317 = $tmp1316->methods[1];
frost$core$Object* $tmp1319 = $tmp1317($tmp1310);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1319)));
org$frostlang$frostc$ASTNode* $tmp1320 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local34) = ((org$frostlang$frostc$ASTNode*) $tmp1319);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:356
frost$core$MutableString* $tmp1321 = *(&local32);
org$frostlang$frostc$ASTNode* $tmp1322 = *(&local34);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:356:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1324 $tmp1323 = ($fn1324) ((frost$core$Object*) $tmp1322)->$class->vtable[0];
frost$core$String* $tmp1325 = $tmp1323(((frost$core$Object*) $tmp1322));
frost$core$String* $tmp1326 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1325, &$s1327);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$core$MutableString$append$frost$core$String($tmp1321, $tmp1326);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$Frost$unref$frost$core$Object$Q($tmp1319);
org$frostlang$frostc$ASTNode* $tmp1328 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block110;
block112:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:358
frost$core$MutableString* $tmp1329 = *(&local32);
frost$core$MutableString$append$frost$core$String($tmp1329, &$s1330);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:359
frost$core$MutableString* $tmp1331 = *(&local32);
frost$core$String* $tmp1332 = frost$core$MutableString$finish$R$frost$core$String($tmp1331);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$MutableString* $tmp1333 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local32) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1334 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local31) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1335 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1336 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1337 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local28) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1338 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1339 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1332;
block82:;
frost$core$Int $tmp1340 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:361:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1341 = $tmp727.value;
int64_t $tmp1342 = $tmp1340.value;
bool $tmp1343 = $tmp1341 == $tmp1342;
frost$core$Bit $tmp1344 = (frost$core$Bit) {$tmp1343};
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block114; else goto block115;
block114:;
org$frostlang$frostc$Position* $tmp1346 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1347 = *$tmp1346;
frost$core$String** $tmp1348 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1349 = *$tmp1348;
*(&local35) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
frost$core$String* $tmp1350 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
*(&local35) = $tmp1349;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:362
frost$core$String* $tmp1351 = *(&local35);
frost$core$Bit $tmp1352 = (frost$core$Bit) {$tmp1351 != NULL};
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block117; else goto block118;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:363
frost$core$String* $tmp1354 = *(&local35);
frost$core$Bit $tmp1355 = (frost$core$Bit) {$tmp1354 != NULL};
bool $tmp1356 = $tmp1355.value;
if ($tmp1356) goto block119; else goto block120;
block120:;
frost$core$Int $tmp1357 = (frost$core$Int) {363u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1358, $tmp1357, &$s1359);
abort(); // unreachable
block119:;
frost$core$String* $tmp1360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1361, $tmp1354);
frost$core$String* $tmp1362 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1360, &$s1363);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
frost$core$String* $tmp1364 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
*(&local35) = ((frost$core$String*) NULL);
return $tmp1362;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:365
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1365));
frost$core$String* $tmp1366 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
*(&local35) = ((frost$core$String*) NULL);
return &$s1367;
block115:;
frost$core$Int $tmp1368 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:367:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1369 = $tmp727.value;
int64_t $tmp1370 = $tmp1368.value;
bool $tmp1371 = $tmp1369 == $tmp1370;
frost$core$Bit $tmp1372 = (frost$core$Bit) {$tmp1371};
bool $tmp1373 = $tmp1372.value;
if ($tmp1373) goto block121; else goto block122;
block121:;
org$frostlang$frostc$Position* $tmp1374 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1375 = *$tmp1374;
org$frostlang$frostc$ASTNode** $tmp1376 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1377 = *$tmp1376;
*(&local36) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
org$frostlang$frostc$ASTNode* $tmp1378 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
*(&local36) = $tmp1377;
org$frostlang$frostc$ASTNode** $tmp1379 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1380 = *$tmp1379;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
org$frostlang$frostc$ASTNode* $tmp1381 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
*(&local37) = $tmp1380;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:368
org$frostlang$frostc$ASTNode* $tmp1382 = *(&local37);
frost$core$Bit $tmp1383 = (frost$core$Bit) {$tmp1382 != NULL};
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block124; else goto block125;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:369
org$frostlang$frostc$ASTNode* $tmp1385 = *(&local36);
$fn1387 $tmp1386 = ($fn1387) $tmp1385->$class->vtable[0];
frost$core$String* $tmp1388 = $tmp1386($tmp1385);
frost$core$String* $tmp1389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1388, &$s1390);
org$frostlang$frostc$ASTNode* $tmp1391 = *(&local37);
frost$core$Bit $tmp1392 = (frost$core$Bit) {$tmp1391 != NULL};
bool $tmp1393 = $tmp1392.value;
if ($tmp1393) goto block126; else goto block127;
block127:;
frost$core$Int $tmp1394 = (frost$core$Int) {369u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1395, $tmp1394, &$s1396);
abort(); // unreachable
block126:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:369:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1398 $tmp1397 = ($fn1398) ((frost$core$Object*) $tmp1391)->$class->vtable[0];
frost$core$String* $tmp1399 = $tmp1397(((frost$core$Object*) $tmp1391));
frost$core$String* $tmp1400 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1389, $tmp1399);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
frost$core$String* $tmp1401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1400, &$s1402);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
org$frostlang$frostc$ASTNode* $tmp1403 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1404 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
*(&local36) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1401;
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:371
org$frostlang$frostc$ASTNode* $tmp1405 = *(&local36);
$fn1407 $tmp1406 = ($fn1407) ((frost$core$Object*) $tmp1405)->$class->vtable[0];
frost$core$String* $tmp1408 = $tmp1406(((frost$core$Object*) $tmp1405));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
org$frostlang$frostc$ASTNode* $tmp1409 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1410 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
*(&local36) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1408;
block122:;
frost$core$Int $tmp1411 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:373:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1412 = $tmp727.value;
int64_t $tmp1413 = $tmp1411.value;
bool $tmp1414 = $tmp1412 == $tmp1413;
frost$core$Bit $tmp1415 = (frost$core$Bit) {$tmp1414};
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block129; else goto block130;
block129:;
org$frostlang$frostc$Position* $tmp1417 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1418 = *$tmp1417;
frost$core$String** $tmp1419 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1420 = *$tmp1419;
*(&local38) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
frost$core$String* $tmp1421 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local38) = $tmp1420;
org$frostlang$frostc$FixedArray** $tmp1422 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1423 = *$tmp1422;
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
org$frostlang$frostc$FixedArray* $tmp1424 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
*(&local39) = $tmp1423;
org$frostlang$frostc$ASTNode** $tmp1425 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1426 = *$tmp1425;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
org$frostlang$frostc$ASTNode* $tmp1427 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local40) = $tmp1426;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:374
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1428 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1428);
*(&local41) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
frost$core$MutableString* $tmp1429 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
*(&local41) = $tmp1428;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:375
frost$core$String* $tmp1430 = *(&local38);
frost$core$Bit $tmp1431 = (frost$core$Bit) {$tmp1430 != NULL};
bool $tmp1432 = $tmp1431.value;
if ($tmp1432) goto block132; else goto block133;
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:376
frost$core$MutableString* $tmp1433 = *(&local41);
frost$core$String* $tmp1434 = *(&local38);
frost$core$Bit $tmp1435 = (frost$core$Bit) {$tmp1434 != NULL};
bool $tmp1436 = $tmp1435.value;
if ($tmp1436) goto block134; else goto block135;
block135:;
frost$core$Int $tmp1437 = (frost$core$Int) {376u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1438, $tmp1437, &$s1439);
abort(); // unreachable
block134:;
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:376:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$String* $tmp1440 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1434, &$s1441);
frost$core$MutableString$append$frost$core$String($tmp1433, $tmp1440);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
goto block133;
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:378
frost$core$MutableString* $tmp1442 = *(&local41);
frost$core$MutableString$append$frost$core$String($tmp1442, &$s1443);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:379
org$frostlang$frostc$FixedArray* $tmp1444 = *(&local39);
ITable* $tmp1445 = ((frost$collections$Iterable*) $tmp1444)->$class->itable;
while ($tmp1445->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1445 = $tmp1445->next;
}
$fn1447 $tmp1446 = $tmp1445->methods[0];
frost$collections$Iterator* $tmp1448 = $tmp1446(((frost$collections$Iterable*) $tmp1444));
goto block137;
block137:;
ITable* $tmp1449 = $tmp1448->$class->itable;
while ($tmp1449->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1449 = $tmp1449->next;
}
$fn1451 $tmp1450 = $tmp1449->methods[0];
frost$core$Bit $tmp1452 = $tmp1450($tmp1448);
bool $tmp1453 = $tmp1452.value;
if ($tmp1453) goto block139; else goto block138;
block138:;
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1454 = $tmp1448->$class->itable;
while ($tmp1454->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1454 = $tmp1454->next;
}
$fn1456 $tmp1455 = $tmp1454->methods[1];
frost$core$Object* $tmp1457 = $tmp1455($tmp1448);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1457)));
org$frostlang$frostc$ASTNode* $tmp1458 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
*(&local42) = ((org$frostlang$frostc$ASTNode*) $tmp1457);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:380
frost$core$MutableString* $tmp1459 = *(&local41);
org$frostlang$frostc$ASTNode* $tmp1460 = *(&local42);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:380:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1462 $tmp1461 = ($fn1462) ((frost$core$Object*) $tmp1460)->$class->vtable[0];
frost$core$String* $tmp1463 = $tmp1461(((frost$core$Object*) $tmp1460));
frost$core$String* $tmp1464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1463, &$s1465);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
frost$core$MutableString$append$frost$core$String($tmp1459, $tmp1464);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q($tmp1457);
org$frostlang$frostc$ASTNode* $tmp1466 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block137;
block139:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:382
frost$core$MutableString* $tmp1467 = *(&local41);
org$frostlang$frostc$ASTNode* $tmp1468 = *(&local40);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:382:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1470 $tmp1469 = ($fn1470) ((frost$core$Object*) $tmp1468)->$class->vtable[0];
frost$core$String* $tmp1471 = $tmp1469(((frost$core$Object*) $tmp1468));
frost$core$String* $tmp1472 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1473, $tmp1471);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
frost$core$String* $tmp1474 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1472, &$s1475);
frost$core$MutableString$append$frost$core$String($tmp1467, $tmp1474);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:383
frost$core$MutableString* $tmp1476 = *(&local41);
frost$core$String* $tmp1477 = frost$core$MutableString$finish$R$frost$core$String($tmp1476);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
frost$core$MutableString* $tmp1478 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
*(&local41) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1479 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1480 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1481 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
*(&local38) = ((frost$core$String*) NULL);
return $tmp1477;
block130:;
frost$core$Int $tmp1482 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:385:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1483 = $tmp727.value;
int64_t $tmp1484 = $tmp1482.value;
bool $tmp1485 = $tmp1483 == $tmp1484;
frost$core$Bit $tmp1486 = (frost$core$Bit) {$tmp1485};
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block142; else goto block143;
block142:;
org$frostlang$frostc$Position* $tmp1488 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1489 = *$tmp1488;
org$frostlang$frostc$ASTNode** $tmp1490 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1491 = *$tmp1490;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
org$frostlang$frostc$ASTNode* $tmp1492 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
*(&local43) = $tmp1491;
frost$core$String** $tmp1493 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp1494 = *$tmp1493;
*(&local44) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
frost$core$String* $tmp1495 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
*(&local44) = $tmp1494;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:386
org$frostlang$frostc$ASTNode* $tmp1496 = *(&local43);
$fn1498 $tmp1497 = ($fn1498) $tmp1496->$class->vtable[0];
frost$core$String* $tmp1499 = $tmp1497($tmp1496);
frost$core$String* $tmp1500 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1499, &$s1501);
frost$core$String* $tmp1502 = *(&local44);
frost$core$String* $tmp1503 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1500, $tmp1502);
frost$core$String* $tmp1504 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1503, &$s1505);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
frost$core$String* $tmp1506 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
*(&local44) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1507 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1504;
block143:;
frost$core$Int $tmp1508 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:388:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1509 = $tmp727.value;
int64_t $tmp1510 = $tmp1508.value;
bool $tmp1511 = $tmp1509 == $tmp1510;
frost$core$Bit $tmp1512 = (frost$core$Bit) {$tmp1511};
bool $tmp1513 = $tmp1512.value;
if ($tmp1513) goto block145; else goto block146;
block145:;
org$frostlang$frostc$Position* $tmp1514 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1515 = *$tmp1514;
org$frostlang$frostc$ASTNode** $tmp1516 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1517 = *$tmp1516;
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
org$frostlang$frostc$ASTNode* $tmp1518 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
*(&local45) = $tmp1517;
frost$core$String** $tmp1519 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp1520 = *$tmp1519;
*(&local46) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
frost$core$String* $tmp1521 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
*(&local46) = $tmp1520;
org$frostlang$frostc$FixedArray** $tmp1522 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1523 = *$tmp1522;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
org$frostlang$frostc$FixedArray* $tmp1524 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
*(&local47) = $tmp1523;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:389
org$frostlang$frostc$ASTNode* $tmp1525 = *(&local45);
$fn1527 $tmp1526 = ($fn1527) $tmp1525->$class->vtable[0];
frost$core$String* $tmp1528 = $tmp1526($tmp1525);
frost$core$String* $tmp1529 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1528, &$s1530);
frost$core$String* $tmp1531 = *(&local46);
frost$core$String* $tmp1532 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1529, $tmp1531);
frost$core$String* $tmp1533 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1532, &$s1534);
org$frostlang$frostc$FixedArray* $tmp1535 = *(&local47);
ITable* $tmp1536 = ((frost$collections$CollectionView*) $tmp1535)->$class->itable;
while ($tmp1536->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1536 = $tmp1536->next;
}
$fn1538 $tmp1537 = $tmp1536->methods[3];
frost$core$String* $tmp1539 = $tmp1537(((frost$collections$CollectionView*) $tmp1535), &$s1540);
frost$core$String* $tmp1541 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1533, $tmp1539);
frost$core$String* $tmp1542 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1541, &$s1543);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1528));
org$frostlang$frostc$FixedArray* $tmp1544 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1545 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
*(&local46) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1546 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1542;
block146:;
frost$core$Int $tmp1547 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:391:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1548 = $tmp727.value;
int64_t $tmp1549 = $tmp1547.value;
bool $tmp1550 = $tmp1548 == $tmp1549;
frost$core$Bit $tmp1551 = (frost$core$Bit) {$tmp1550};
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block148; else goto block149;
block148:;
org$frostlang$frostc$Position* $tmp1553 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1554 = *$tmp1553;
org$frostlang$frostc$ASTNode** $tmp1555 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1556 = *$tmp1555;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
org$frostlang$frostc$ASTNode* $tmp1557 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
*(&local48) = $tmp1556;
org$frostlang$frostc$FixedArray** $tmp1558 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1559 = *$tmp1558;
*(&local49) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
org$frostlang$frostc$FixedArray* $tmp1560 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local49) = $tmp1559;
org$frostlang$frostc$ASTNode** $tmp1561 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1562 = *$tmp1561;
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
org$frostlang$frostc$ASTNode* $tmp1563 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local50) = $tmp1562;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:392
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1564 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1564);
*(&local51) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
frost$core$MutableString* $tmp1565 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
*(&local51) = $tmp1564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:393
org$frostlang$frostc$ASTNode* $tmp1566 = *(&local48);
frost$core$Bit $tmp1567 = (frost$core$Bit) {$tmp1566 != NULL};
bool $tmp1568 = $tmp1567.value;
if ($tmp1568) goto block151; else goto block152;
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:394
frost$core$MutableString* $tmp1569 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp1570 = *(&local48);
frost$core$Bit $tmp1571 = (frost$core$Bit) {$tmp1570 != NULL};
bool $tmp1572 = $tmp1571.value;
if ($tmp1572) goto block153; else goto block154;
block154:;
frost$core$Int $tmp1573 = (frost$core$Int) {394u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1574, $tmp1573, &$s1575);
abort(); // unreachable
block153:;
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:394:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1577 $tmp1576 = ($fn1577) ((frost$core$Object*) $tmp1570)->$class->vtable[0];
frost$core$String* $tmp1578 = $tmp1576(((frost$core$Object*) $tmp1570));
frost$core$String* $tmp1579 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1578, &$s1580);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
frost$core$MutableString$append$frost$core$String($tmp1569, $tmp1579);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
goto block152;
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:396
org$frostlang$frostc$FixedArray* $tmp1581 = *(&local49);
ITable* $tmp1582 = ((frost$collections$Iterable*) $tmp1581)->$class->itable;
while ($tmp1582->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1582 = $tmp1582->next;
}
$fn1584 $tmp1583 = $tmp1582->methods[0];
frost$collections$Iterator* $tmp1585 = $tmp1583(((frost$collections$Iterable*) $tmp1581));
goto block156;
block156:;
ITable* $tmp1586 = $tmp1585->$class->itable;
while ($tmp1586->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1586 = $tmp1586->next;
}
$fn1588 $tmp1587 = $tmp1586->methods[0];
frost$core$Bit $tmp1589 = $tmp1587($tmp1585);
bool $tmp1590 = $tmp1589.value;
if ($tmp1590) goto block158; else goto block157;
block157:;
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1591 = $tmp1585->$class->itable;
while ($tmp1591->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1591 = $tmp1591->next;
}
$fn1593 $tmp1592 = $tmp1591->methods[1];
frost$core$Object* $tmp1594 = $tmp1592($tmp1585);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1594)));
org$frostlang$frostc$ASTNode* $tmp1595 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
*(&local52) = ((org$frostlang$frostc$ASTNode*) $tmp1594);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:397
frost$core$MutableString* $tmp1596 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp1597 = *(&local52);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:397:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1599 $tmp1598 = ($fn1599) ((frost$core$Object*) $tmp1597)->$class->vtable[0];
frost$core$String* $tmp1600 = $tmp1598(((frost$core$Object*) $tmp1597));
frost$core$String* $tmp1601 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1600, &$s1602);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
frost$core$MutableString$append$frost$core$String($tmp1596, $tmp1601);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q($tmp1594);
org$frostlang$frostc$ASTNode* $tmp1603 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block156;
block158:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:399
frost$core$MutableString* $tmp1604 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp1605 = *(&local50);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from ASTNode.frost:399:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn1607 $tmp1606 = ($fn1607) ((frost$core$Object*) $tmp1605)->$class->vtable[0];
frost$core$String* $tmp1608 = $tmp1606(((frost$core$Object*) $tmp1605));
frost$core$MutableString$append$frost$core$String($tmp1604, $tmp1608);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:400
frost$core$MutableString* $tmp1609 = *(&local51);
frost$core$String* $tmp1610 = frost$core$MutableString$finish$R$frost$core$String($tmp1609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
frost$core$MutableString* $tmp1611 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
*(&local51) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1612 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1613 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
*(&local49) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1614 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1610;
block149:;
frost$core$Int $tmp1615 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:402:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1616 = $tmp727.value;
int64_t $tmp1617 = $tmp1615.value;
bool $tmp1618 = $tmp1616 == $tmp1617;
frost$core$Bit $tmp1619 = (frost$core$Bit) {$tmp1618};
bool $tmp1620 = $tmp1619.value;
if ($tmp1620) goto block161; else goto block162;
block161:;
org$frostlang$frostc$FixedArray** $tmp1621 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp1622 = *$tmp1621;
*(&local53) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
org$frostlang$frostc$FixedArray* $tmp1623 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
*(&local53) = $tmp1622;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:403
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1624 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1624);
*(&local54) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
frost$core$MutableString* $tmp1625 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
*(&local54) = $tmp1624;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:404
org$frostlang$frostc$FixedArray* $tmp1626 = *(&local53);
ITable* $tmp1627 = ((frost$collections$Iterable*) $tmp1626)->$class->itable;
while ($tmp1627->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1627 = $tmp1627->next;
}
$fn1629 $tmp1628 = $tmp1627->methods[0];
frost$collections$Iterator* $tmp1630 = $tmp1628(((frost$collections$Iterable*) $tmp1626));
goto block164;
block164:;
ITable* $tmp1631 = $tmp1630->$class->itable;
while ($tmp1631->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1631 = $tmp1631->next;
}
$fn1633 $tmp1632 = $tmp1631->methods[0];
frost$core$Bit $tmp1634 = $tmp1632($tmp1630);
bool $tmp1635 = $tmp1634.value;
if ($tmp1635) goto block166; else goto block165;
block165:;
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1636 = $tmp1630->$class->itable;
while ($tmp1636->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1636 = $tmp1636->next;
}
$fn1638 $tmp1637 = $tmp1636->methods[1];
frost$core$Object* $tmp1639 = $tmp1637($tmp1630);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1639)));
org$frostlang$frostc$ASTNode* $tmp1640 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
*(&local55) = ((org$frostlang$frostc$ASTNode*) $tmp1639);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:405
frost$core$MutableString* $tmp1641 = *(&local54);
org$frostlang$frostc$ASTNode* $tmp1642 = *(&local55);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:405:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1644 $tmp1643 = ($fn1644) ((frost$core$Object*) $tmp1642)->$class->vtable[0];
frost$core$String* $tmp1645 = $tmp1643(((frost$core$Object*) $tmp1642));
frost$core$String* $tmp1646 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1645, &$s1647);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
frost$core$MutableString$append$frost$core$String($tmp1641, $tmp1646);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
frost$core$Frost$unref$frost$core$Object$Q($tmp1639);
org$frostlang$frostc$ASTNode* $tmp1648 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block164;
block166:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:407
frost$core$MutableString* $tmp1649 = *(&local54);
frost$core$String* $tmp1650 = frost$core$MutableString$finish$R$frost$core$String($tmp1649);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
frost$core$MutableString* $tmp1651 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local54) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1652 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
*(&local53) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1650;
block162:;
frost$core$Int $tmp1653 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:409:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1654 = $tmp727.value;
int64_t $tmp1655 = $tmp1653.value;
bool $tmp1656 = $tmp1654 == $tmp1655;
frost$core$Bit $tmp1657 = (frost$core$Bit) {$tmp1656};
bool $tmp1658 = $tmp1657.value;
if ($tmp1658) goto block168; else goto block169;
block168:;
org$frostlang$frostc$Position* $tmp1659 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1660 = *$tmp1659;
frost$core$String** $tmp1661 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1662 = *$tmp1661;
*(&local56) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
frost$core$String* $tmp1663 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
*(&local56) = $tmp1662;
org$frostlang$frostc$ASTNode** $tmp1664 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1665 = *$tmp1664;
*(&local57) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
org$frostlang$frostc$ASTNode* $tmp1666 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
*(&local57) = $tmp1665;
org$frostlang$frostc$ASTNode** $tmp1667 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1668 = *$tmp1667;
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
org$frostlang$frostc$ASTNode* $tmp1669 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
*(&local58) = $tmp1668;
org$frostlang$frostc$FixedArray** $tmp1670 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1671 = *$tmp1670;
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
org$frostlang$frostc$FixedArray* $tmp1672 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
*(&local59) = $tmp1671;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:410
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1673 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1673);
*(&local60) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
frost$core$MutableString* $tmp1674 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
*(&local60) = $tmp1673;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:411
frost$core$String* $tmp1675 = *(&local56);
frost$core$Bit $tmp1676 = (frost$core$Bit) {$tmp1675 != NULL};
bool $tmp1677 = $tmp1676.value;
if ($tmp1677) goto block171; else goto block172;
block171:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:412
frost$core$MutableString* $tmp1678 = *(&local60);
frost$core$String* $tmp1679 = *(&local56);
frost$core$Bit $tmp1680 = (frost$core$Bit) {$tmp1679 != NULL};
bool $tmp1681 = $tmp1680.value;
if ($tmp1681) goto block173; else goto block174;
block174:;
frost$core$Int $tmp1682 = (frost$core$Int) {412u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1683, $tmp1682, &$s1684);
abort(); // unreachable
block173:;
frost$core$String* $tmp1685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1679, &$s1686);
frost$core$MutableString$append$frost$core$String($tmp1678, $tmp1685);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
goto block172;
block172:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:414
frost$core$MutableString* $tmp1687 = *(&local60);
org$frostlang$frostc$ASTNode* $tmp1688 = *(&local57);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:414:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1690 $tmp1689 = ($fn1690) ((frost$core$Object*) $tmp1688)->$class->vtable[0];
frost$core$String* $tmp1691 = $tmp1689(((frost$core$Object*) $tmp1688));
frost$core$String* $tmp1692 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1693, $tmp1691);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
frost$core$String* $tmp1694 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1692, &$s1695);
org$frostlang$frostc$ASTNode* $tmp1696 = *(&local58);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:414:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1698 $tmp1697 = ($fn1698) ((frost$core$Object*) $tmp1696)->$class->vtable[0];
frost$core$String* $tmp1699 = $tmp1697(((frost$core$Object*) $tmp1696));
frost$core$String* $tmp1700 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1694, $tmp1699);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
frost$core$String* $tmp1701 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1700, &$s1702);
frost$core$MutableString$append$frost$core$String($tmp1687, $tmp1701);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:415
org$frostlang$frostc$FixedArray* $tmp1703 = *(&local59);
ITable* $tmp1704 = ((frost$collections$Iterable*) $tmp1703)->$class->itable;
while ($tmp1704->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1704 = $tmp1704->next;
}
$fn1706 $tmp1705 = $tmp1704->methods[0];
frost$collections$Iterator* $tmp1707 = $tmp1705(((frost$collections$Iterable*) $tmp1703));
goto block177;
block177:;
ITable* $tmp1708 = $tmp1707->$class->itable;
while ($tmp1708->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1708 = $tmp1708->next;
}
$fn1710 $tmp1709 = $tmp1708->methods[0];
frost$core$Bit $tmp1711 = $tmp1709($tmp1707);
bool $tmp1712 = $tmp1711.value;
if ($tmp1712) goto block179; else goto block178;
block178:;
*(&local61) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1713 = $tmp1707->$class->itable;
while ($tmp1713->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1713 = $tmp1713->next;
}
$fn1715 $tmp1714 = $tmp1713->methods[1];
frost$core$Object* $tmp1716 = $tmp1714($tmp1707);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1716)));
org$frostlang$frostc$ASTNode* $tmp1717 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local61) = ((org$frostlang$frostc$ASTNode*) $tmp1716);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:416
frost$core$MutableString* $tmp1718 = *(&local60);
org$frostlang$frostc$ASTNode* $tmp1719 = *(&local61);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:416:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1721 $tmp1720 = ($fn1721) ((frost$core$Object*) $tmp1719)->$class->vtable[0];
frost$core$String* $tmp1722 = $tmp1720(((frost$core$Object*) $tmp1719));
frost$core$String* $tmp1723 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1722, &$s1724);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
frost$core$MutableString$append$frost$core$String($tmp1718, $tmp1723);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
frost$core$Frost$unref$frost$core$Object$Q($tmp1716);
org$frostlang$frostc$ASTNode* $tmp1725 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
*(&local61) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block177;
block179:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:418
frost$core$MutableString* $tmp1726 = *(&local60);
frost$core$MutableString$append$frost$core$String($tmp1726, &$s1727);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:419
frost$core$MutableString* $tmp1728 = *(&local60);
frost$core$String* $tmp1729 = frost$core$MutableString$finish$R$frost$core$String($tmp1728);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
frost$core$MutableString* $tmp1730 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
*(&local60) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1731 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1732 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1733 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
*(&local57) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1734 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
*(&local56) = ((frost$core$String*) NULL);
return $tmp1729;
block169:;
frost$core$Int $tmp1735 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:421:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1736 = $tmp727.value;
int64_t $tmp1737 = $tmp1735.value;
bool $tmp1738 = $tmp1736 == $tmp1737;
frost$core$Bit $tmp1739 = (frost$core$Bit) {$tmp1738};
bool $tmp1740 = $tmp1739.value;
if ($tmp1740) goto block181; else goto block182;
block181:;
org$frostlang$frostc$Position* $tmp1741 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1742 = *$tmp1741;
frost$core$String** $tmp1743 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1744 = *$tmp1743;
*(&local62) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
frost$core$String* $tmp1745 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
*(&local62) = $tmp1744;
org$frostlang$frostc$FixedArray** $tmp1746 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1747 = *$tmp1746;
*(&local63) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
org$frostlang$frostc$FixedArray* $tmp1748 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
*(&local63) = $tmp1747;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:422
frost$core$String* $tmp1749 = *(&local62);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:422:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
frost$core$String* $tmp1750 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1749, &$s1751);
org$frostlang$frostc$FixedArray* $tmp1752 = *(&local63);
ITable* $tmp1753 = ((frost$collections$CollectionView*) $tmp1752)->$class->itable;
while ($tmp1753->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1753 = $tmp1753->next;
}
$fn1755 $tmp1754 = $tmp1753->methods[3];
frost$core$String* $tmp1756 = $tmp1754(((frost$collections$CollectionView*) $tmp1752), &$s1757);
frost$core$String* $tmp1758 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1750, $tmp1756);
frost$core$String* $tmp1759 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1758, &$s1760);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
org$frostlang$frostc$FixedArray* $tmp1761 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
*(&local63) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1762 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
*(&local62) = ((frost$core$String*) NULL);
return $tmp1759;
block182:;
frost$core$Int $tmp1763 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:424:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1764 = $tmp727.value;
int64_t $tmp1765 = $tmp1763.value;
bool $tmp1766 = $tmp1764 == $tmp1765;
frost$core$Bit $tmp1767 = (frost$core$Bit) {$tmp1766};
bool $tmp1768 = $tmp1767.value;
if ($tmp1768) goto block185; else goto block186;
block185:;
org$frostlang$frostc$Position* $tmp1769 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1770 = *$tmp1769;
frost$core$String** $tmp1771 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1772 = *$tmp1771;
*(&local64) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
frost$core$String* $tmp1773 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
*(&local64) = $tmp1772;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:425
frost$core$String* $tmp1774 = *(&local64);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
frost$core$String* $tmp1775 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
*(&local64) = ((frost$core$String*) NULL);
return $tmp1774;
block186:;
frost$core$Int $tmp1776 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:427:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1777 = $tmp727.value;
int64_t $tmp1778 = $tmp1776.value;
bool $tmp1779 = $tmp1777 == $tmp1778;
frost$core$Bit $tmp1780 = (frost$core$Bit) {$tmp1779};
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block188; else goto block189;
block188:;
org$frostlang$frostc$Position* $tmp1782 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1783 = *$tmp1782;
frost$core$String** $tmp1784 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1785 = *$tmp1784;
*(&local65) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1785));
frost$core$String* $tmp1786 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
*(&local65) = $tmp1785;
org$frostlang$frostc$FixedArray** $tmp1787 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1788 = *$tmp1787;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
org$frostlang$frostc$FixedArray* $tmp1789 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
*(&local66) = $tmp1788;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:428
frost$core$String* $tmp1790 = *(&local65);
frost$core$String* $tmp1791 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1792, $tmp1790);
frost$core$String* $tmp1793 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1791, &$s1794);
org$frostlang$frostc$FixedArray* $tmp1795 = *(&local66);
ITable* $tmp1796 = ((frost$collections$CollectionView*) $tmp1795)->$class->itable;
while ($tmp1796->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1796 = $tmp1796->next;
}
$fn1798 $tmp1797 = $tmp1796->methods[3];
frost$core$String* $tmp1799 = $tmp1797(((frost$collections$CollectionView*) $tmp1795), &$s1800);
frost$core$String* $tmp1801 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1793, $tmp1799);
frost$core$String* $tmp1802 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1801, &$s1803);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
org$frostlang$frostc$FixedArray* $tmp1804 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1805 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
*(&local65) = ((frost$core$String*) NULL);
return $tmp1802;
block189:;
frost$core$Int $tmp1806 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:430:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1807 = $tmp727.value;
int64_t $tmp1808 = $tmp1806.value;
bool $tmp1809 = $tmp1807 == $tmp1808;
frost$core$Bit $tmp1810 = (frost$core$Bit) {$tmp1809};
bool $tmp1811 = $tmp1810.value;
if ($tmp1811) goto block191; else goto block192;
block191:;
org$frostlang$frostc$Position* $tmp1812 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1813 = *$tmp1812;
org$frostlang$frostc$ASTNode** $tmp1814 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1815 = *$tmp1814;
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
org$frostlang$frostc$ASTNode* $tmp1816 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
*(&local67) = $tmp1815;
org$frostlang$frostc$FixedArray** $tmp1817 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1818 = *$tmp1817;
*(&local68) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
org$frostlang$frostc$FixedArray* $tmp1819 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
*(&local68) = $tmp1818;
org$frostlang$frostc$ASTNode** $tmp1820 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1821 = *$tmp1820;
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
org$frostlang$frostc$ASTNode* $tmp1822 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
*(&local69) = $tmp1821;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:431
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1823 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1824 = *(&local67);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:431:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1826 $tmp1825 = ($fn1826) ((frost$core$Object*) $tmp1824)->$class->vtable[0];
frost$core$String* $tmp1827 = $tmp1825(((frost$core$Object*) $tmp1824));
frost$core$String* $tmp1828 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1829, $tmp1827);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
frost$core$String* $tmp1830 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1828, &$s1831);
frost$core$MutableString$init$frost$core$String($tmp1823, $tmp1830);
*(&local70) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
frost$core$MutableString* $tmp1832 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
*(&local70) = $tmp1823;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:432
org$frostlang$frostc$FixedArray* $tmp1833 = *(&local68);
ITable* $tmp1834 = ((frost$collections$Iterable*) $tmp1833)->$class->itable;
while ($tmp1834->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1834 = $tmp1834->next;
}
$fn1836 $tmp1835 = $tmp1834->methods[0];
frost$collections$Iterator* $tmp1837 = $tmp1835(((frost$collections$Iterable*) $tmp1833));
goto block195;
block195:;
ITable* $tmp1838 = $tmp1837->$class->itable;
while ($tmp1838->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1838 = $tmp1838->next;
}
$fn1840 $tmp1839 = $tmp1838->methods[0];
frost$core$Bit $tmp1841 = $tmp1839($tmp1837);
bool $tmp1842 = $tmp1841.value;
if ($tmp1842) goto block197; else goto block196;
block196:;
*(&local71) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1843 = $tmp1837->$class->itable;
while ($tmp1843->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1843 = $tmp1843->next;
}
$fn1845 $tmp1844 = $tmp1843->methods[1];
frost$core$Object* $tmp1846 = $tmp1844($tmp1837);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1846)));
org$frostlang$frostc$ASTNode* $tmp1847 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
*(&local71) = ((org$frostlang$frostc$ASTNode*) $tmp1846);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:433
frost$core$MutableString* $tmp1848 = *(&local70);
org$frostlang$frostc$ASTNode* $tmp1849 = *(&local71);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:433:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1851 $tmp1850 = ($fn1851) ((frost$core$Object*) $tmp1849)->$class->vtable[0];
frost$core$String* $tmp1852 = $tmp1850(((frost$core$Object*) $tmp1849));
frost$core$String* $tmp1853 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1852, &$s1854);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
frost$core$MutableString$append$frost$core$String($tmp1848, $tmp1853);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
frost$core$Frost$unref$frost$core$Object$Q($tmp1846);
org$frostlang$frostc$ASTNode* $tmp1855 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
*(&local71) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block195;
block197:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:435
frost$core$MutableString* $tmp1856 = *(&local70);
frost$core$MutableString$append$frost$core$String($tmp1856, &$s1857);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:436
org$frostlang$frostc$ASTNode* $tmp1858 = *(&local69);
frost$core$Bit $tmp1859 = (frost$core$Bit) {$tmp1858 != NULL};
bool $tmp1860 = $tmp1859.value;
if ($tmp1860) goto block199; else goto block200;
block199:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:437
frost$core$MutableString* $tmp1861 = *(&local70);
org$frostlang$frostc$ASTNode* $tmp1862 = *(&local69);
frost$core$Bit $tmp1863 = (frost$core$Bit) {$tmp1862 != NULL};
bool $tmp1864 = $tmp1863.value;
if ($tmp1864) goto block201; else goto block202;
block202:;
frost$core$Int $tmp1865 = (frost$core$Int) {437u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1866, $tmp1865, &$s1867);
abort(); // unreachable
block201:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:437:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1869 $tmp1868 = ($fn1869) ((frost$core$Object*) $tmp1862)->$class->vtable[0];
frost$core$String* $tmp1870 = $tmp1868(((frost$core$Object*) $tmp1862));
frost$core$String* $tmp1871 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1872, $tmp1870);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
frost$core$String* $tmp1873 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1871, &$s1874);
frost$core$MutableString$append$frost$core$String($tmp1861, $tmp1873);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
goto block200;
block200:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:439
frost$core$MutableString* $tmp1875 = *(&local70);
frost$core$String* $tmp1876 = frost$core$MutableString$finish$R$frost$core$String($tmp1875);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
frost$core$MutableString* $tmp1877 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
*(&local70) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1878 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1879 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
*(&local68) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1880 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1876;
block192:;
frost$core$Int $tmp1881 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:441:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1882 = $tmp727.value;
int64_t $tmp1883 = $tmp1881.value;
bool $tmp1884 = $tmp1882 == $tmp1883;
frost$core$Bit $tmp1885 = (frost$core$Bit) {$tmp1884};
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block204; else goto block205;
block204:;
org$frostlang$frostc$Position* $tmp1887 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1888 = *$tmp1887;
frost$core$UInt64* $tmp1889 = (frost$core$UInt64*) (param0->$data + 24);
frost$core$UInt64 $tmp1890 = *$tmp1889;
*(&local72) = $tmp1890;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:442
frost$core$UInt64 $tmp1891 = *(&local72);
frost$core$UInt64$wrapper* $tmp1892;
$tmp1892 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1892->value = $tmp1891;
$fn1894 $tmp1893 = ($fn1894) ((frost$core$Object*) $tmp1892)->$class->vtable[0];
frost$core$String* $tmp1895 = $tmp1893(((frost$core$Object*) $tmp1892));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
return $tmp1895;
block205:;
frost$core$Int $tmp1896 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:444:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1897 = $tmp727.value;
int64_t $tmp1898 = $tmp1896.value;
bool $tmp1899 = $tmp1897 == $tmp1898;
frost$core$Bit $tmp1900 = (frost$core$Bit) {$tmp1899};
bool $tmp1901 = $tmp1900.value;
if ($tmp1901) goto block207; else goto block208;
block207:;
org$frostlang$frostc$Position* $tmp1902 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1903 = *$tmp1902;
org$frostlang$frostc$IR$Value** $tmp1904 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1905 = *$tmp1904;
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
org$frostlang$frostc$IR$Value* $tmp1906 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
*(&local73) = $tmp1905;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:445
org$frostlang$frostc$IR$Value* $tmp1907 = *(&local73);
$fn1909 $tmp1908 = ($fn1909) ((frost$core$Object*) $tmp1907)->$class->vtable[0];
frost$core$String* $tmp1910 = $tmp1908(((frost$core$Object*) $tmp1907));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
org$frostlang$frostc$IR$Value* $tmp1911 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1910;
block208:;
frost$core$Int $tmp1912 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:447:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1913 = $tmp727.value;
int64_t $tmp1914 = $tmp1912.value;
bool $tmp1915 = $tmp1913 == $tmp1914;
frost$core$Bit $tmp1916 = (frost$core$Bit) {$tmp1915};
bool $tmp1917 = $tmp1916.value;
if ($tmp1917) goto block210; else goto block211;
block210:;
org$frostlang$frostc$Position* $tmp1918 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1919 = *$tmp1918;
frost$core$String** $tmp1920 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1921 = *$tmp1920;
*(&local74) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
frost$core$String* $tmp1922 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
*(&local74) = $tmp1921;
org$frostlang$frostc$FixedArray** $tmp1923 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1924 = *$tmp1923;
*(&local75) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
org$frostlang$frostc$FixedArray* $tmp1925 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
*(&local75) = $tmp1924;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:448
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1926 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1926);
*(&local76) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
frost$core$MutableString* $tmp1927 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
*(&local76) = $tmp1926;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:449
frost$core$String* $tmp1928 = *(&local74);
frost$core$Bit $tmp1929 = (frost$core$Bit) {$tmp1928 != NULL};
bool $tmp1930 = $tmp1929.value;
if ($tmp1930) goto block213; else goto block214;
block213:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:450
frost$core$MutableString* $tmp1931 = *(&local76);
frost$core$String* $tmp1932 = *(&local74);
frost$core$Bit $tmp1933 = (frost$core$Bit) {$tmp1932 != NULL};
bool $tmp1934 = $tmp1933.value;
if ($tmp1934) goto block215; else goto block216;
block216:;
frost$core$Int $tmp1935 = (frost$core$Int) {450u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1936, $tmp1935, &$s1937);
abort(); // unreachable
block215:;
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:450:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
frost$core$String* $tmp1938 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1932, &$s1939);
frost$core$MutableString$append$frost$core$String($tmp1931, $tmp1938);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
goto block214;
block214:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:452
frost$core$MutableString* $tmp1940 = *(&local76);
frost$core$MutableString$append$frost$core$String($tmp1940, &$s1941);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:453
org$frostlang$frostc$FixedArray* $tmp1942 = *(&local75);
ITable* $tmp1943 = ((frost$collections$Iterable*) $tmp1942)->$class->itable;
while ($tmp1943->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1943 = $tmp1943->next;
}
$fn1945 $tmp1944 = $tmp1943->methods[0];
frost$collections$Iterator* $tmp1946 = $tmp1944(((frost$collections$Iterable*) $tmp1942));
goto block218;
block218:;
ITable* $tmp1947 = $tmp1946->$class->itable;
while ($tmp1947->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1947 = $tmp1947->next;
}
$fn1949 $tmp1948 = $tmp1947->methods[0];
frost$core$Bit $tmp1950 = $tmp1948($tmp1946);
bool $tmp1951 = $tmp1950.value;
if ($tmp1951) goto block220; else goto block219;
block219:;
*(&local77) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1952 = $tmp1946->$class->itable;
while ($tmp1952->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1952 = $tmp1952->next;
}
$fn1954 $tmp1953 = $tmp1952->methods[1];
frost$core$Object* $tmp1955 = $tmp1953($tmp1946);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1955)));
org$frostlang$frostc$ASTNode* $tmp1956 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
*(&local77) = ((org$frostlang$frostc$ASTNode*) $tmp1955);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:454
frost$core$MutableString* $tmp1957 = *(&local76);
org$frostlang$frostc$ASTNode* $tmp1958 = *(&local77);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:454:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1960 $tmp1959 = ($fn1960) ((frost$core$Object*) $tmp1958)->$class->vtable[0];
frost$core$String* $tmp1961 = $tmp1959(((frost$core$Object*) $tmp1958));
frost$core$String* $tmp1962 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1961, &$s1963);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
frost$core$MutableString$append$frost$core$String($tmp1957, $tmp1962);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
frost$core$Frost$unref$frost$core$Object$Q($tmp1955);
org$frostlang$frostc$ASTNode* $tmp1964 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
*(&local77) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block218;
block220:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:456
frost$core$MutableString* $tmp1965 = *(&local76);
frost$core$MutableString$append$frost$core$String($tmp1965, &$s1966);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:457
frost$core$MutableString* $tmp1967 = *(&local76);
frost$core$String* $tmp1968 = frost$core$MutableString$finish$R$frost$core$String($tmp1967);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
frost$core$MutableString* $tmp1969 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
*(&local76) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1970 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
*(&local75) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1971 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
*(&local74) = ((frost$core$String*) NULL);
return $tmp1968;
block211:;
frost$core$Int $tmp1972 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:459:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1973 = $tmp727.value;
int64_t $tmp1974 = $tmp1972.value;
bool $tmp1975 = $tmp1973 == $tmp1974;
frost$core$Bit $tmp1976 = (frost$core$Bit) {$tmp1975};
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block222; else goto block223;
block222:;
org$frostlang$frostc$Position* $tmp1978 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1979 = *$tmp1978;
org$frostlang$frostc$ASTNode** $tmp1980 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1981 = *$tmp1980;
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
org$frostlang$frostc$ASTNode* $tmp1982 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
*(&local78) = $tmp1981;
org$frostlang$frostc$FixedArray** $tmp1983 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1984 = *$tmp1983;
*(&local79) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
org$frostlang$frostc$FixedArray* $tmp1985 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
*(&local79) = $tmp1984;
org$frostlang$frostc$FixedArray** $tmp1986 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1987 = *$tmp1986;
*(&local80) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
org$frostlang$frostc$FixedArray* $tmp1988 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
*(&local80) = $tmp1987;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:460
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1989 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1990 = *(&local78);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:460:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1992 $tmp1991 = ($fn1992) ((frost$core$Object*) $tmp1990)->$class->vtable[0];
frost$core$String* $tmp1993 = $tmp1991(((frost$core$Object*) $tmp1990));
frost$core$String* $tmp1994 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1995, $tmp1993);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
frost$core$String* $tmp1996 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1994, &$s1997);
frost$core$MutableString$init$frost$core$String($tmp1989, $tmp1996);
*(&local81) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
frost$core$MutableString* $tmp1998 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
*(&local81) = $tmp1989;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:461
org$frostlang$frostc$FixedArray* $tmp1999 = *(&local79);
ITable* $tmp2000 = ((frost$collections$Iterable*) $tmp1999)->$class->itable;
while ($tmp2000->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2000 = $tmp2000->next;
}
$fn2002 $tmp2001 = $tmp2000->methods[0];
frost$collections$Iterator* $tmp2003 = $tmp2001(((frost$collections$Iterable*) $tmp1999));
goto block226;
block226:;
ITable* $tmp2004 = $tmp2003->$class->itable;
while ($tmp2004->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2004 = $tmp2004->next;
}
$fn2006 $tmp2005 = $tmp2004->methods[0];
frost$core$Bit $tmp2007 = $tmp2005($tmp2003);
bool $tmp2008 = $tmp2007.value;
if ($tmp2008) goto block228; else goto block227;
block227:;
*(&local82) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2009 = $tmp2003->$class->itable;
while ($tmp2009->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2009 = $tmp2009->next;
}
$fn2011 $tmp2010 = $tmp2009->methods[1];
frost$core$Object* $tmp2012 = $tmp2010($tmp2003);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2012)));
org$frostlang$frostc$ASTNode* $tmp2013 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
*(&local82) = ((org$frostlang$frostc$ASTNode*) $tmp2012);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:462
frost$core$MutableString* $tmp2014 = *(&local81);
org$frostlang$frostc$ASTNode* $tmp2015 = *(&local82);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:462:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn2017 $tmp2016 = ($fn2017) ((frost$core$Object*) $tmp2015)->$class->vtable[0];
frost$core$String* $tmp2018 = $tmp2016(((frost$core$Object*) $tmp2015));
frost$core$String* $tmp2019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2018, &$s2020);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
frost$core$MutableString$append$frost$core$String($tmp2014, $tmp2019);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
frost$core$Frost$unref$frost$core$Object$Q($tmp2012);
org$frostlang$frostc$ASTNode* $tmp2021 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
*(&local82) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block226;
block228:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:464
org$frostlang$frostc$FixedArray* $tmp2022 = *(&local80);
frost$core$Bit $tmp2023 = (frost$core$Bit) {$tmp2022 != NULL};
bool $tmp2024 = $tmp2023.value;
if ($tmp2024) goto block230; else goto block231;
block230:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:465
frost$core$MutableString* $tmp2025 = *(&local81);
org$frostlang$frostc$FixedArray* $tmp2026 = *(&local80);
frost$core$Bit $tmp2027 = (frost$core$Bit) {$tmp2026 != NULL};
bool $tmp2028 = $tmp2027.value;
if ($tmp2028) goto block232; else goto block233;
block233:;
frost$core$Int $tmp2029 = (frost$core$Int) {465u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2030, $tmp2029, &$s2031);
abort(); // unreachable
block232:;
ITable* $tmp2032 = ((frost$collections$CollectionView*) $tmp2026)->$class->itable;
while ($tmp2032->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2032 = $tmp2032->next;
}
$fn2034 $tmp2033 = $tmp2032->methods[3];
frost$core$String* $tmp2035 = $tmp2033(((frost$collections$CollectionView*) $tmp2026), &$s2036);
frost$core$String* $tmp2037 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2038, $tmp2035);
frost$core$String* $tmp2039 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2037, &$s2040);
frost$core$MutableString$append$frost$core$String($tmp2025, $tmp2039);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
goto block231;
block231:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:467
frost$core$MutableString* $tmp2041 = *(&local81);
frost$core$MutableString$append$frost$core$String($tmp2041, &$s2042);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:468
frost$core$MutableString* $tmp2043 = *(&local81);
frost$core$String* $tmp2044 = frost$core$MutableString$finish$R$frost$core$String($tmp2043);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
frost$core$MutableString* $tmp2045 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
*(&local81) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2046 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2046));
*(&local80) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2047 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
*(&local79) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2048 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2044;
block223:;
frost$core$Int $tmp2049 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:470:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2050 = $tmp727.value;
int64_t $tmp2051 = $tmp2049.value;
bool $tmp2052 = $tmp2050 == $tmp2051;
frost$core$Bit $tmp2053 = (frost$core$Bit) {$tmp2052};
bool $tmp2054 = $tmp2053.value;
if ($tmp2054) goto block234; else goto block235;
block234:;
org$frostlang$frostc$Position* $tmp2055 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2056 = *$tmp2055;
org$frostlang$frostc$ASTNode** $tmp2057 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2058 = *$tmp2057;
*(&local83) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
org$frostlang$frostc$ASTNode* $tmp2059 = *(&local83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
*(&local83) = $tmp2058;
org$frostlang$frostc$FixedArray** $tmp2060 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2061 = *$tmp2060;
*(&local84) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
org$frostlang$frostc$FixedArray* $tmp2062 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
*(&local84) = $tmp2061;
org$frostlang$frostc$MethodDecl$Kind* $tmp2063 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp2064 = *$tmp2063;
*(&local85) = $tmp2064;
frost$core$String** $tmp2065 = (frost$core$String**) (param0->$data + 48);
frost$core$String* $tmp2066 = *$tmp2065;
*(&local86) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
frost$core$String* $tmp2067 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
*(&local86) = $tmp2066;
org$frostlang$frostc$FixedArray** $tmp2068 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2069 = *$tmp2068;
*(&local87) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
org$frostlang$frostc$FixedArray* $tmp2070 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
*(&local87) = $tmp2069;
org$frostlang$frostc$FixedArray** $tmp2071 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2072 = *$tmp2071;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
org$frostlang$frostc$FixedArray* $tmp2073 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
*(&local88) = $tmp2072;
org$frostlang$frostc$ASTNode** $tmp2074 = (org$frostlang$frostc$ASTNode**) (param0->$data + 72);
org$frostlang$frostc$ASTNode* $tmp2075 = *$tmp2074;
*(&local89) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
org$frostlang$frostc$ASTNode* $tmp2076 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
*(&local89) = $tmp2075;
org$frostlang$frostc$FixedArray** $tmp2077 = (org$frostlang$frostc$FixedArray**) (param0->$data + 80);
org$frostlang$frostc$FixedArray* $tmp2078 = *$tmp2077;
*(&local90) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
org$frostlang$frostc$FixedArray* $tmp2079 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
*(&local90) = $tmp2078;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:472
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2080 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2080);
*(&local91) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
frost$core$MutableString* $tmp2081 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
*(&local91) = $tmp2080;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:473
org$frostlang$frostc$ASTNode* $tmp2082 = *(&local83);
frost$core$Bit $tmp2083 = (frost$core$Bit) {$tmp2082 != NULL};
bool $tmp2084 = $tmp2083.value;
if ($tmp2084) goto block237; else goto block238;
block237:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:474
frost$core$MutableString* $tmp2085 = *(&local91);
org$frostlang$frostc$ASTNode* $tmp2086 = *(&local83);
frost$core$Bit $tmp2087 = (frost$core$Bit) {$tmp2086 != NULL};
bool $tmp2088 = $tmp2087.value;
if ($tmp2088) goto block239; else goto block240;
block240:;
frost$core$Int $tmp2089 = (frost$core$Int) {474u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2090, $tmp2089, &$s2091);
abort(); // unreachable
block239:;
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:474:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn2093 $tmp2092 = ($fn2093) ((frost$core$Object*) $tmp2086)->$class->vtable[0];
frost$core$String* $tmp2094 = $tmp2092(((frost$core$Object*) $tmp2086));
frost$core$String* $tmp2095 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2094, &$s2096);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$MutableString$append$frost$core$String($tmp2085, $tmp2095);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
goto block238;
block238:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:476
org$frostlang$frostc$FixedArray* $tmp2097 = *(&local84);
ITable* $tmp2098 = ((frost$collections$Iterable*) $tmp2097)->$class->itable;
while ($tmp2098->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2098 = $tmp2098->next;
}
$fn2100 $tmp2099 = $tmp2098->methods[0];
frost$collections$Iterator* $tmp2101 = $tmp2099(((frost$collections$Iterable*) $tmp2097));
goto block242;
block242:;
ITable* $tmp2102 = $tmp2101->$class->itable;
while ($tmp2102->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2102 = $tmp2102->next;
}
$fn2104 $tmp2103 = $tmp2102->methods[0];
frost$core$Bit $tmp2105 = $tmp2103($tmp2101);
bool $tmp2106 = $tmp2105.value;
if ($tmp2106) goto block244; else goto block243;
block243:;
*(&local92) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2107 = $tmp2101->$class->itable;
while ($tmp2107->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2107 = $tmp2107->next;
}
$fn2109 $tmp2108 = $tmp2107->methods[1];
frost$core$Object* $tmp2110 = $tmp2108($tmp2101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2110)));
org$frostlang$frostc$ASTNode* $tmp2111 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
*(&local92) = ((org$frostlang$frostc$ASTNode*) $tmp2110);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:477
frost$core$MutableString* $tmp2112 = *(&local91);
org$frostlang$frostc$ASTNode* $tmp2113 = *(&local92);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:477:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn2115 $tmp2114 = ($fn2115) ((frost$core$Object*) $tmp2113)->$class->vtable[0];
frost$core$String* $tmp2116 = $tmp2114(((frost$core$Object*) $tmp2113));
frost$core$String* $tmp2117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2116, &$s2118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
frost$core$MutableString$append$frost$core$String($tmp2112, $tmp2117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$core$Frost$unref$frost$core$Object$Q($tmp2110);
org$frostlang$frostc$ASTNode* $tmp2119 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
*(&local92) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block242;
block244:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:479
org$frostlang$frostc$MethodDecl$Kind $tmp2120 = *(&local85);
frost$core$Int $tmp2121 = $tmp2120.$rawValue;
frost$core$Int $tmp2122 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:480:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2123 = $tmp2121.value;
int64_t $tmp2124 = $tmp2122.value;
bool $tmp2125 = $tmp2123 == $tmp2124;
frost$core$Bit $tmp2126 = (frost$core$Bit) {$tmp2125};
bool $tmp2127 = $tmp2126.value;
if ($tmp2127) goto block247; else goto block248;
block247:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:480
frost$core$MutableString* $tmp2128 = *(&local91);
frost$core$MutableString$append$frost$core$String($tmp2128, &$s2129);
goto block246;
block248:;
frost$core$Int $tmp2130 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:481:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2131 = $tmp2121.value;
int64_t $tmp2132 = $tmp2130.value;
bool $tmp2133 = $tmp2131 == $tmp2132;
frost$core$Bit $tmp2134 = (frost$core$Bit) {$tmp2133};
bool $tmp2135 = $tmp2134.value;
if ($tmp2135) goto block250; else goto block251;
block250:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:481
frost$core$MutableString* $tmp2136 = *(&local91);
frost$core$MutableString$append$frost$core$String($tmp2136, &$s2137);
goto block246;
block251:;
frost$core$Int $tmp2138 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:482:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2139 = $tmp2121.value;
int64_t $tmp2140 = $tmp2138.value;
bool $tmp2141 = $tmp2139 == $tmp2140;
frost$core$Bit $tmp2142 = (frost$core$Bit) {$tmp2141};
bool $tmp2143 = $tmp2142.value;
if ($tmp2143) goto block253; else goto block246;
block253:;
goto block246;
block246:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:484
frost$core$MutableString* $tmp2144 = *(&local91);
frost$core$String* $tmp2145 = *(&local86);
frost$core$MutableString$append$frost$core$String($tmp2144, $tmp2145);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:485
org$frostlang$frostc$FixedArray* $tmp2146 = *(&local87);
frost$core$Bit $tmp2147 = (frost$core$Bit) {$tmp2146 != NULL};
bool $tmp2148 = $tmp2147.value;
if ($tmp2148) goto block255; else goto block256;
block255:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:486
frost$core$MutableString* $tmp2149 = *(&local91);
org$frostlang$frostc$FixedArray* $tmp2150 = *(&local87);
frost$core$Bit $tmp2151 = (frost$core$Bit) {$tmp2150 != NULL};
bool $tmp2152 = $tmp2151.value;
if ($tmp2152) goto block257; else goto block258;
block258:;
frost$core$Int $tmp2153 = (frost$core$Int) {486u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2154, $tmp2153, &$s2155);
abort(); // unreachable
block257:;
ITable* $tmp2156 = ((frost$collections$CollectionView*) $tmp2150)->$class->itable;
while ($tmp2156->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2156 = $tmp2156->next;
}
$fn2158 $tmp2157 = $tmp2156->methods[3];
frost$core$String* $tmp2159 = $tmp2157(((frost$collections$CollectionView*) $tmp2150), &$s2160);
frost$core$String* $tmp2161 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2162, $tmp2159);
frost$core$String* $tmp2163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2161, &$s2164);
frost$core$MutableString$append$frost$core$String($tmp2149, $tmp2163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
goto block256;
block256:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:488
frost$core$MutableString* $tmp2165 = *(&local91);
org$frostlang$frostc$FixedArray* $tmp2166 = *(&local88);
ITable* $tmp2167 = ((frost$collections$CollectionView*) $tmp2166)->$class->itable;
while ($tmp2167->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2167 = $tmp2167->next;
}
$fn2169 $tmp2168 = $tmp2167->methods[3];
frost$core$String* $tmp2170 = $tmp2168(((frost$collections$CollectionView*) $tmp2166), &$s2171);
frost$core$String* $tmp2172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2173, $tmp2170);
frost$core$String* $tmp2174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2172, &$s2175);
frost$core$MutableString$append$frost$core$String($tmp2165, $tmp2174);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:489
org$frostlang$frostc$ASTNode* $tmp2176 = *(&local89);
frost$core$Bit $tmp2177 = (frost$core$Bit) {$tmp2176 != NULL};
bool $tmp2178 = $tmp2177.value;
if ($tmp2178) goto block259; else goto block260;
block259:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:490
frost$core$MutableString* $tmp2179 = *(&local91);
org$frostlang$frostc$ASTNode* $tmp2180 = *(&local89);
frost$core$Bit $tmp2181 = (frost$core$Bit) {$tmp2180 != NULL};
bool $tmp2182 = $tmp2181.value;
if ($tmp2182) goto block261; else goto block262;
block262:;
frost$core$Int $tmp2183 = (frost$core$Int) {490u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2184, $tmp2183, &$s2185);
abort(); // unreachable
block261:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:490:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2187 $tmp2186 = ($fn2187) ((frost$core$Object*) $tmp2180)->$class->vtable[0];
frost$core$String* $tmp2188 = $tmp2186(((frost$core$Object*) $tmp2180));
frost$core$String* $tmp2189 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2190, $tmp2188);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
frost$core$String* $tmp2191 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2189, &$s2192);
frost$core$MutableString$append$frost$core$String($tmp2179, $tmp2191);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
goto block260;
block260:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:492
org$frostlang$frostc$FixedArray* $tmp2193 = *(&local90);
frost$core$Bit $tmp2194 = (frost$core$Bit) {$tmp2193 != NULL};
bool $tmp2195 = $tmp2194.value;
if ($tmp2195) goto block264; else goto block265;
block264:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:493
frost$core$MutableString* $tmp2196 = *(&local91);
frost$core$MutableString$append$frost$core$String($tmp2196, &$s2197);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:494
org$frostlang$frostc$FixedArray* $tmp2198 = *(&local90);
frost$core$Bit $tmp2199 = (frost$core$Bit) {$tmp2198 != NULL};
bool $tmp2200 = $tmp2199.value;
if ($tmp2200) goto block266; else goto block267;
block267:;
frost$core$Int $tmp2201 = (frost$core$Int) {494u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2202, $tmp2201, &$s2203);
abort(); // unreachable
block266:;
ITable* $tmp2204 = ((frost$collections$Iterable*) $tmp2198)->$class->itable;
while ($tmp2204->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2204 = $tmp2204->next;
}
$fn2206 $tmp2205 = $tmp2204->methods[0];
frost$collections$Iterator* $tmp2207 = $tmp2205(((frost$collections$Iterable*) $tmp2198));
goto block268;
block268:;
ITable* $tmp2208 = $tmp2207->$class->itable;
while ($tmp2208->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2208 = $tmp2208->next;
}
$fn2210 $tmp2209 = $tmp2208->methods[0];
frost$core$Bit $tmp2211 = $tmp2209($tmp2207);
bool $tmp2212 = $tmp2211.value;
if ($tmp2212) goto block270; else goto block269;
block269:;
*(&local93) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2213 = $tmp2207->$class->itable;
while ($tmp2213->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2213 = $tmp2213->next;
}
$fn2215 $tmp2214 = $tmp2213->methods[1];
frost$core$Object* $tmp2216 = $tmp2214($tmp2207);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2216)));
org$frostlang$frostc$ASTNode* $tmp2217 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
*(&local93) = ((org$frostlang$frostc$ASTNode*) $tmp2216);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:495
frost$core$MutableString* $tmp2218 = *(&local91);
org$frostlang$frostc$ASTNode* $tmp2219 = *(&local93);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:495:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn2221 $tmp2220 = ($fn2221) ((frost$core$Object*) $tmp2219)->$class->vtable[0];
frost$core$String* $tmp2222 = $tmp2220(((frost$core$Object*) $tmp2219));
frost$core$String* $tmp2223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2222, &$s2224);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
frost$core$MutableString$append$frost$core$String($tmp2218, $tmp2223);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
frost$core$Frost$unref$frost$core$Object$Q($tmp2216);
org$frostlang$frostc$ASTNode* $tmp2225 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
*(&local93) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block268;
block270:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:497
frost$core$MutableString* $tmp2226 = *(&local91);
frost$core$MutableString$append$frost$core$String($tmp2226, &$s2227);
goto block265;
block265:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:499
frost$core$MutableString* $tmp2228 = *(&local91);
frost$core$String* $tmp2229 = frost$core$MutableString$finish$R$frost$core$String($tmp2228);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
frost$core$MutableString* $tmp2230 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
*(&local91) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2231 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
*(&local90) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2232 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
*(&local89) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2233 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2234 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
*(&local87) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2235 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
*(&local86) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2236 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
*(&local84) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2237 = *(&local83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
*(&local83) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2229;
block235:;
frost$core$Int $tmp2238 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:501:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2239 = $tmp727.value;
int64_t $tmp2240 = $tmp2238.value;
bool $tmp2241 = $tmp2239 == $tmp2240;
frost$core$Bit $tmp2242 = (frost$core$Bit) {$tmp2241};
bool $tmp2243 = $tmp2242.value;
if ($tmp2243) goto block272; else goto block273;
block272:;
org$frostlang$frostc$Position* $tmp2244 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2245 = *$tmp2244;
org$frostlang$frostc$parser$Token$Kind* $tmp2246 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp2247 = *$tmp2246;
*(&local94) = $tmp2247;
org$frostlang$frostc$FixedArray** $tmp2248 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2249 = *$tmp2248;
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
org$frostlang$frostc$FixedArray* $tmp2250 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
*(&local95) = $tmp2249;
org$frostlang$frostc$ASTNode** $tmp2251 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp2252 = *$tmp2251;
*(&local96) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
org$frostlang$frostc$ASTNode* $tmp2253 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
*(&local96) = $tmp2252;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:502
*(&local97) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:503
org$frostlang$frostc$parser$Token$Kind $tmp2254 = *(&local94);
frost$core$Int $tmp2255 = $tmp2254.$rawValue;
frost$core$Int $tmp2256 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:504:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2257 = $tmp2255.value;
int64_t $tmp2258 = $tmp2256.value;
bool $tmp2259 = $tmp2257 == $tmp2258;
frost$core$Bit $tmp2260 = (frost$core$Bit) {$tmp2259};
bool $tmp2261 = $tmp2260.value;
if ($tmp2261) goto block276; else goto block277;
block276:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:505
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2262));
frost$core$String* $tmp2263 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
*(&local97) = &$s2264;
goto block275;
block277:;
frost$core$Int $tmp2265 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:507:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2266 = $tmp2255.value;
int64_t $tmp2267 = $tmp2265.value;
bool $tmp2268 = $tmp2266 == $tmp2267;
frost$core$Bit $tmp2269 = (frost$core$Bit) {$tmp2268};
bool $tmp2270 = $tmp2269.value;
if ($tmp2270) goto block279; else goto block280;
block279:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:508
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2271));
frost$core$String* $tmp2272 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
*(&local97) = &$s2273;
goto block275;
block280:;
frost$core$Int $tmp2274 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:510:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2275 = $tmp2255.value;
int64_t $tmp2276 = $tmp2274.value;
bool $tmp2277 = $tmp2275 == $tmp2276;
frost$core$Bit $tmp2278 = (frost$core$Bit) {$tmp2277};
bool $tmp2279 = $tmp2278.value;
if ($tmp2279) goto block282; else goto block283;
block282:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:511
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2280));
frost$core$String* $tmp2281 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
*(&local97) = &$s2282;
goto block275;
block283:;
frost$core$Int $tmp2283 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:513:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2284 = $tmp2255.value;
int64_t $tmp2285 = $tmp2283.value;
bool $tmp2286 = $tmp2284 == $tmp2285;
frost$core$Bit $tmp2287 = (frost$core$Bit) {$tmp2286};
bool $tmp2288 = $tmp2287.value;
if ($tmp2288) goto block285; else goto block275;
block285:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:514
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2289));
frost$core$String* $tmp2290 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
*(&local97) = &$s2291;
goto block275;
block275:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:517
org$frostlang$frostc$FixedArray* $tmp2292 = *(&local95);
ITable* $tmp2293 = ((frost$collections$CollectionView*) $tmp2292)->$class->itable;
while ($tmp2293->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2293 = $tmp2293->next;
}
$fn2295 $tmp2294 = $tmp2293->methods[3];
frost$core$String* $tmp2296 = $tmp2294(((frost$collections$CollectionView*) $tmp2292), &$s2297);
frost$core$String* $tmp2298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2299, $tmp2296);
frost$core$String* $tmp2300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2298, &$s2301);
frost$core$String* $tmp2302 = *(&local97);
frost$core$String* $tmp2303 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2300, $tmp2302);
frost$core$String* $tmp2304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2303, &$s2305);
*(&local98) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
frost$core$String* $tmp2306 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
*(&local98) = $tmp2304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:518
org$frostlang$frostc$ASTNode* $tmp2307 = *(&local96);
frost$core$Bit $tmp2308 = (frost$core$Bit) {$tmp2307 != NULL};
bool $tmp2309 = $tmp2308.value;
if ($tmp2309) goto block287; else goto block288;
block287:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:519
frost$core$String* $tmp2310 = *(&local98);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:519:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
frost$core$String* $tmp2311 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2310, &$s2312);
org$frostlang$frostc$ASTNode* $tmp2313 = *(&local96);
frost$core$Bit $tmp2314 = (frost$core$Bit) {$tmp2313 != NULL};
bool $tmp2315 = $tmp2314.value;
if ($tmp2315) goto block290; else goto block291;
block291:;
frost$core$Int $tmp2316 = (frost$core$Int) {519u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2317, $tmp2316, &$s2318);
abort(); // unreachable
block290:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:519:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2320 $tmp2319 = ($fn2320) ((frost$core$Object*) $tmp2313)->$class->vtable[0];
frost$core$String* $tmp2321 = $tmp2319(((frost$core$Object*) $tmp2313));
frost$core$String* $tmp2322 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2311, $tmp2321);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
frost$core$String* $tmp2323 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2322, &$s2324);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
frost$core$String* $tmp2325 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
*(&local98) = ((frost$core$String*) NULL);
frost$core$String* $tmp2326 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
*(&local97) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2327 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
*(&local96) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2328 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2323;
block288:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:521
frost$core$String* $tmp2329 = *(&local98);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:521:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
frost$core$String* $tmp2330 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2329, &$s2331);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
frost$core$String* $tmp2332 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
*(&local98) = ((frost$core$String*) NULL);
frost$core$String* $tmp2333 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
*(&local97) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2334 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
*(&local96) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2335 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2335));
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2330;
block273:;
frost$core$Int $tmp2336 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:523:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2337 = $tmp727.value;
int64_t $tmp2338 = $tmp2336.value;
bool $tmp2339 = $tmp2337 == $tmp2338;
frost$core$Bit $tmp2340 = (frost$core$Bit) {$tmp2339};
bool $tmp2341 = $tmp2340.value;
if ($tmp2341) goto block294; else goto block295;
block294:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:524
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2342));
return &$s2343;
block295:;
frost$core$Int $tmp2344 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:526:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2345 = $tmp727.value;
int64_t $tmp2346 = $tmp2344.value;
bool $tmp2347 = $tmp2345 == $tmp2346;
frost$core$Bit $tmp2348 = (frost$core$Bit) {$tmp2347};
bool $tmp2349 = $tmp2348.value;
if ($tmp2349) goto block297; else goto block298;
block297:;
org$frostlang$frostc$Position* $tmp2350 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2351 = *$tmp2350;
org$frostlang$frostc$ASTNode** $tmp2352 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2353 = *$tmp2352;
*(&local99) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
org$frostlang$frostc$ASTNode* $tmp2354 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
*(&local99) = $tmp2353;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:527
org$frostlang$frostc$ASTNode* $tmp2355 = *(&local99);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:527:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn2357 $tmp2356 = ($fn2357) ((frost$core$Object*) $tmp2355)->$class->vtable[0];
frost$core$String* $tmp2358 = $tmp2356(((frost$core$Object*) $tmp2355));
frost$core$String* $tmp2359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2358, &$s2360);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
org$frostlang$frostc$ASTNode* $tmp2361 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
*(&local99) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2359;
block298:;
frost$core$Int $tmp2362 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:529:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2363 = $tmp727.value;
int64_t $tmp2364 = $tmp2362.value;
bool $tmp2365 = $tmp2363 == $tmp2364;
frost$core$Bit $tmp2366 = (frost$core$Bit) {$tmp2365};
bool $tmp2367 = $tmp2366.value;
if ($tmp2367) goto block301; else goto block302;
block301:;
org$frostlang$frostc$Position* $tmp2368 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2369 = *$tmp2368;
frost$core$String** $tmp2370 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2371 = *$tmp2370;
*(&local100) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
frost$core$String* $tmp2372 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
*(&local100) = $tmp2371;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:530
frost$core$String* $tmp2373 = *(&local100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
frost$core$String* $tmp2374 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
*(&local100) = ((frost$core$String*) NULL);
return $tmp2373;
block302:;
frost$core$Int $tmp2375 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:532:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2376 = $tmp727.value;
int64_t $tmp2377 = $tmp2375.value;
bool $tmp2378 = $tmp2376 == $tmp2377;
frost$core$Bit $tmp2379 = (frost$core$Bit) {$tmp2378};
bool $tmp2380 = $tmp2379.value;
if ($tmp2380) goto block304; else goto block305;
block304:;
org$frostlang$frostc$Position* $tmp2381 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2382 = *$tmp2381;
frost$core$String** $tmp2383 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2384 = *$tmp2383;
*(&local101) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
frost$core$String* $tmp2385 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
*(&local101) = $tmp2384;
org$frostlang$frostc$ASTNode** $tmp2386 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2387 = *$tmp2386;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
org$frostlang$frostc$ASTNode* $tmp2388 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
*(&local102) = $tmp2387;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:533
frost$core$String* $tmp2389 = *(&local101);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:533:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
frost$core$String* $tmp2390 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2389, &$s2391);
org$frostlang$frostc$ASTNode* $tmp2392 = *(&local102);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:533:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2394 $tmp2393 = ($fn2394) ((frost$core$Object*) $tmp2392)->$class->vtable[0];
frost$core$String* $tmp2395 = $tmp2393(((frost$core$Object*) $tmp2392));
frost$core$String* $tmp2396 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2390, $tmp2395);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
frost$core$String* $tmp2397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2396, &$s2398);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
org$frostlang$frostc$ASTNode* $tmp2399 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2400 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
*(&local101) = ((frost$core$String*) NULL);
return $tmp2397;
block305:;
frost$core$Int $tmp2401 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:535:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2402 = $tmp727.value;
int64_t $tmp2403 = $tmp2401.value;
bool $tmp2404 = $tmp2402 == $tmp2403;
frost$core$Bit $tmp2405 = (frost$core$Bit) {$tmp2404};
bool $tmp2406 = $tmp2405.value;
if ($tmp2406) goto block309; else goto block310;
block309:;
org$frostlang$frostc$Position* $tmp2407 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2408 = *$tmp2407;
org$frostlang$frostc$ASTNode** $tmp2409 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2410 = *$tmp2409;
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
org$frostlang$frostc$ASTNode* $tmp2411 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
*(&local103) = $tmp2410;
frost$core$Bit* $tmp2412 = (frost$core$Bit*) (param0->$data + 32);
frost$core$Bit $tmp2413 = *$tmp2412;
*(&local104) = $tmp2413;
org$frostlang$frostc$ASTNode** $tmp2414 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp2415 = *$tmp2414;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
org$frostlang$frostc$ASTNode* $tmp2416 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2416));
*(&local105) = $tmp2415;
org$frostlang$frostc$ASTNode** $tmp2417 = (org$frostlang$frostc$ASTNode**) (param0->$data + 41);
org$frostlang$frostc$ASTNode* $tmp2418 = *$tmp2417;
*(&local106) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
org$frostlang$frostc$ASTNode* $tmp2419 = *(&local106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2419));
*(&local106) = $tmp2418;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:536
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2420 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2420);
*(&local107) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
frost$core$MutableString* $tmp2421 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
*(&local107) = $tmp2420;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:537
org$frostlang$frostc$ASTNode* $tmp2422 = *(&local103);
frost$core$Bit $tmp2423 = (frost$core$Bit) {$tmp2422 != NULL};
bool $tmp2424 = $tmp2423.value;
if ($tmp2424) goto block312; else goto block313;
block312:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:538
frost$core$MutableString* $tmp2425 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp2426 = *(&local103);
frost$core$Bit $tmp2427 = (frost$core$Bit) {$tmp2426 != NULL};
bool $tmp2428 = $tmp2427.value;
if ($tmp2428) goto block314; else goto block315;
block315:;
frost$core$Int $tmp2429 = (frost$core$Int) {538u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2430, $tmp2429, &$s2431);
abort(); // unreachable
block314:;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from ASTNode.frost:538:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn2433 $tmp2432 = ($fn2433) ((frost$core$Object*) $tmp2426)->$class->vtable[0];
frost$core$String* $tmp2434 = $tmp2432(((frost$core$Object*) $tmp2426));
frost$core$MutableString$append$frost$core$String($tmp2425, $tmp2434);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
goto block313;
block313:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:540
frost$core$Bit $tmp2435 = *(&local104);
bool $tmp2436 = $tmp2435.value;
if ($tmp2436) goto block317; else goto block319;
block317:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:541
frost$core$MutableString* $tmp2437 = *(&local107);
frost$core$MutableString$append$frost$core$String($tmp2437, &$s2438);
goto block318;
block319:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:544
frost$core$MutableString* $tmp2439 = *(&local107);
frost$core$MutableString$append$frost$core$String($tmp2439, &$s2440);
goto block318;
block318:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:546
org$frostlang$frostc$ASTNode* $tmp2441 = *(&local105);
frost$core$Bit $tmp2442 = (frost$core$Bit) {$tmp2441 != NULL};
bool $tmp2443 = $tmp2442.value;
if ($tmp2443) goto block320; else goto block321;
block320:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:547
frost$core$MutableString* $tmp2444 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp2445 = *(&local105);
frost$core$Bit $tmp2446 = (frost$core$Bit) {$tmp2445 != NULL};
bool $tmp2447 = $tmp2446.value;
if ($tmp2447) goto block322; else goto block323;
block323:;
frost$core$Int $tmp2448 = (frost$core$Int) {547u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2449, $tmp2448, &$s2450);
abort(); // unreachable
block322:;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from ASTNode.frost:547:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn2452 $tmp2451 = ($fn2452) ((frost$core$Object*) $tmp2445)->$class->vtable[0];
frost$core$String* $tmp2453 = $tmp2451(((frost$core$Object*) $tmp2445));
frost$core$MutableString$append$frost$core$String($tmp2444, $tmp2453);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
goto block321;
block321:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:549
org$frostlang$frostc$ASTNode* $tmp2454 = *(&local106);
frost$core$Bit $tmp2455 = (frost$core$Bit) {$tmp2454 != NULL};
bool $tmp2456 = $tmp2455.value;
if ($tmp2456) goto block325; else goto block326;
block325:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:550
frost$core$MutableString* $tmp2457 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp2458 = *(&local106);
frost$core$Bit $tmp2459 = (frost$core$Bit) {$tmp2458 != NULL};
bool $tmp2460 = $tmp2459.value;
if ($tmp2460) goto block327; else goto block328;
block328:;
frost$core$Int $tmp2461 = (frost$core$Int) {550u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2462, $tmp2461, &$s2463);
abort(); // unreachable
block327:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:550:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2465 $tmp2464 = ($fn2465) ((frost$core$Object*) $tmp2458)->$class->vtable[0];
frost$core$String* $tmp2466 = $tmp2464(((frost$core$Object*) $tmp2458));
frost$core$String* $tmp2467 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2468, $tmp2466);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2466));
frost$core$MutableString$append$frost$core$String($tmp2457, $tmp2467);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
goto block326;
block326:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:552
frost$core$MutableString* $tmp2469 = *(&local107);
frost$core$String* $tmp2470 = frost$core$MutableString$finish$R$frost$core$String($tmp2469);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
frost$core$MutableString* $tmp2471 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
*(&local107) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2472 = *(&local106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
*(&local106) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2473 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2474 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2470;
block310:;
frost$core$Int $tmp2475 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:554:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2476 = $tmp727.value;
int64_t $tmp2477 = $tmp2475.value;
bool $tmp2478 = $tmp2476 == $tmp2477;
frost$core$Bit $tmp2479 = (frost$core$Bit) {$tmp2478};
bool $tmp2480 = $tmp2479.value;
if ($tmp2480) goto block330; else goto block331;
block330:;
org$frostlang$frostc$Position* $tmp2481 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2482 = *$tmp2481;
frost$core$Real64* $tmp2483 = (frost$core$Real64*) (param0->$data + 24);
frost$core$Real64 $tmp2484 = *$tmp2483;
*(&local108) = $tmp2484;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:555
frost$core$Real64 $tmp2485 = *(&local108);
frost$core$Real64$wrapper* $tmp2486;
$tmp2486 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp2486->value = $tmp2485;
$fn2488 $tmp2487 = ($fn2488) ((frost$core$Object*) $tmp2486)->$class->vtable[0];
frost$core$String* $tmp2489 = $tmp2487(((frost$core$Object*) $tmp2486));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
return $tmp2489;
block331:;
frost$core$Int $tmp2490 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:557:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2491 = $tmp727.value;
int64_t $tmp2492 = $tmp2490.value;
bool $tmp2493 = $tmp2491 == $tmp2492;
frost$core$Bit $tmp2494 = (frost$core$Bit) {$tmp2493};
bool $tmp2495 = $tmp2494.value;
if ($tmp2495) goto block333; else goto block334;
block333:;
org$frostlang$frostc$Position* $tmp2496 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2497 = *$tmp2496;
frost$core$String** $tmp2498 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2499 = *$tmp2498;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
frost$core$String* $tmp2500 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
*(&local109) = $tmp2499;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:558
frost$core$String* $tmp2501 = *(&local109);
frost$core$String* $tmp2502 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2503, $tmp2501);
frost$core$String* $tmp2504 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2502, &$s2505);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
frost$core$String* $tmp2506 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
*(&local109) = ((frost$core$String*) NULL);
return $tmp2504;
block334:;
frost$core$Int $tmp2507 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:560:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2508 = $tmp727.value;
int64_t $tmp2509 = $tmp2507.value;
bool $tmp2510 = $tmp2508 == $tmp2509;
frost$core$Bit $tmp2511 = (frost$core$Bit) {$tmp2510};
bool $tmp2512 = $tmp2511.value;
if ($tmp2512) goto block336; else goto block337;
block336:;
org$frostlang$frostc$Position* $tmp2513 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2514 = *$tmp2513;
org$frostlang$frostc$ASTNode** $tmp2515 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2516 = *$tmp2515;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
org$frostlang$frostc$ASTNode* $tmp2517 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
*(&local110) = $tmp2516;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:561
org$frostlang$frostc$ASTNode* $tmp2518 = *(&local110);
frost$core$Bit $tmp2519 = (frost$core$Bit) {$tmp2518 != NULL};
bool $tmp2520 = $tmp2519.value;
if ($tmp2520) goto block339; else goto block340;
block339:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:562
org$frostlang$frostc$ASTNode* $tmp2521 = *(&local110);
frost$core$Bit $tmp2522 = (frost$core$Bit) {$tmp2521 != NULL};
bool $tmp2523 = $tmp2522.value;
if ($tmp2523) goto block341; else goto block342;
block342:;
frost$core$Int $tmp2524 = (frost$core$Int) {562u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2525, $tmp2524, &$s2526);
abort(); // unreachable
block341:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:562:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2528 $tmp2527 = ($fn2528) ((frost$core$Object*) $tmp2521)->$class->vtable[0];
frost$core$String* $tmp2529 = $tmp2527(((frost$core$Object*) $tmp2521));
frost$core$String* $tmp2530 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2531, $tmp2529);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
frost$core$String* $tmp2532 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2530, &$s2533);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
org$frostlang$frostc$ASTNode* $tmp2534 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2532;
block340:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:564
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2535));
org$frostlang$frostc$ASTNode* $tmp2536 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s2537;
block337:;
frost$core$Int $tmp2538 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:566:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2539 = $tmp727.value;
int64_t $tmp2540 = $tmp2538.value;
bool $tmp2541 = $tmp2539 == $tmp2540;
frost$core$Bit $tmp2542 = (frost$core$Bit) {$tmp2541};
bool $tmp2543 = $tmp2542.value;
if ($tmp2543) goto block344; else goto block345;
block344:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:567
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2544));
return &$s2545;
block345:;
frost$core$Int $tmp2546 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:569:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2547 = $tmp727.value;
int64_t $tmp2548 = $tmp2546.value;
bool $tmp2549 = $tmp2547 == $tmp2548;
frost$core$Bit $tmp2550 = (frost$core$Bit) {$tmp2549};
bool $tmp2551 = $tmp2550.value;
if ($tmp2551) goto block347; else goto block348;
block347:;
org$frostlang$frostc$Position* $tmp2552 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2553 = *$tmp2552;
frost$core$String** $tmp2554 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2555 = *$tmp2554;
*(&local111) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
frost$core$String* $tmp2556 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2556));
*(&local111) = $tmp2555;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:570
frost$core$String* $tmp2557 = *(&local111);
frost$core$String* $tmp2558 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp2557, &$s2559);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
frost$core$String* $tmp2560 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
*(&local111) = ((frost$core$String*) NULL);
return $tmp2558;
block348:;
frost$core$Int $tmp2561 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:572:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2562 = $tmp727.value;
int64_t $tmp2563 = $tmp2561.value;
bool $tmp2564 = $tmp2562 == $tmp2563;
frost$core$Bit $tmp2565 = (frost$core$Bit) {$tmp2564};
bool $tmp2566 = $tmp2565.value;
if ($tmp2566) goto block350; else goto block351;
block350:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:573
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2567));
return &$s2568;
block351:;
frost$core$Int $tmp2569 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:575:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2570 = $tmp727.value;
int64_t $tmp2571 = $tmp2569.value;
bool $tmp2572 = $tmp2570 == $tmp2571;
frost$core$Bit $tmp2573 = (frost$core$Bit) {$tmp2572};
bool $tmp2574 = $tmp2573.value;
if ($tmp2574) goto block353; else goto block354;
block353:;
org$frostlang$frostc$Position* $tmp2575 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2576 = *$tmp2575;
org$frostlang$frostc$FixedArray** $tmp2577 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2578 = *$tmp2577;
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
org$frostlang$frostc$FixedArray* $tmp2579 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
*(&local112) = $tmp2578;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:576
org$frostlang$frostc$FixedArray* $tmp2580 = *(&local112);
ITable* $tmp2581 = ((frost$collections$CollectionView*) $tmp2580)->$class->itable;
while ($tmp2581->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2581 = $tmp2581->next;
}
$fn2583 $tmp2582 = $tmp2581->methods[3];
frost$core$String* $tmp2584 = $tmp2582(((frost$collections$CollectionView*) $tmp2580), &$s2585);
frost$core$String* $tmp2586 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2587, $tmp2584);
frost$core$String* $tmp2588 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2586, &$s2589);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
org$frostlang$frostc$FixedArray* $tmp2590 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2588;
block354:;
frost$core$Int $tmp2591 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:578:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2592 = $tmp727.value;
int64_t $tmp2593 = $tmp2591.value;
bool $tmp2594 = $tmp2592 == $tmp2593;
frost$core$Bit $tmp2595 = (frost$core$Bit) {$tmp2594};
bool $tmp2596 = $tmp2595.value;
if ($tmp2596) goto block356; else goto block357;
block356:;
org$frostlang$frostc$Position* $tmp2597 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2598 = *$tmp2597;
org$frostlang$frostc$FixedArray** $tmp2599 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2600 = *$tmp2599;
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2600));
org$frostlang$frostc$FixedArray* $tmp2601 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2601));
*(&local113) = $tmp2600;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:579
org$frostlang$frostc$FixedArray* $tmp2602 = *(&local113);
ITable* $tmp2603 = ((frost$collections$CollectionView*) $tmp2602)->$class->itable;
while ($tmp2603->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2603 = $tmp2603->next;
}
$fn2605 $tmp2604 = $tmp2603->methods[3];
frost$core$String* $tmp2606 = $tmp2604(((frost$collections$CollectionView*) $tmp2602), &$s2607);
frost$core$String* $tmp2608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2609, $tmp2606);
frost$core$String* $tmp2610 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2608, &$s2611);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
org$frostlang$frostc$FixedArray* $tmp2612 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2610;
block357:;
frost$core$Int $tmp2613 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:581:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2614 = $tmp727.value;
int64_t $tmp2615 = $tmp2613.value;
bool $tmp2616 = $tmp2614 == $tmp2615;
frost$core$Bit $tmp2617 = (frost$core$Bit) {$tmp2616};
bool $tmp2618 = $tmp2617.value;
if ($tmp2618) goto block359; else goto block360;
block359:;
org$frostlang$frostc$Position* $tmp2619 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2620 = *$tmp2619;
org$frostlang$frostc$FixedArray** $tmp2621 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2622 = *$tmp2621;
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2622));
org$frostlang$frostc$FixedArray* $tmp2623 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
*(&local114) = $tmp2622;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:582
org$frostlang$frostc$FixedArray* $tmp2624 = *(&local114);
ITable* $tmp2625 = ((frost$collections$CollectionView*) $tmp2624)->$class->itable;
while ($tmp2625->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2625 = $tmp2625->next;
}
$fn2627 $tmp2626 = $tmp2625->methods[3];
frost$core$String* $tmp2628 = $tmp2626(((frost$collections$CollectionView*) $tmp2624), &$s2629);
frost$core$String* $tmp2630 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2631, $tmp2628);
frost$core$String* $tmp2632 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2630, &$s2633);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
org$frostlang$frostc$FixedArray* $tmp2634 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2632;
block360:;
frost$core$Int $tmp2635 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:584:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2636 = $tmp727.value;
int64_t $tmp2637 = $tmp2635.value;
bool $tmp2638 = $tmp2636 == $tmp2637;
frost$core$Bit $tmp2639 = (frost$core$Bit) {$tmp2638};
bool $tmp2640 = $tmp2639.value;
if ($tmp2640) goto block362; else goto block363;
block362:;
org$frostlang$frostc$Position* $tmp2641 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2642 = *$tmp2641;
org$frostlang$frostc$FixedArray** $tmp2643 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2644 = *$tmp2643;
*(&local115) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
org$frostlang$frostc$FixedArray* $tmp2645 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
*(&local115) = $tmp2644;
org$frostlang$frostc$ASTNode** $tmp2646 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2647 = *$tmp2646;
*(&local116) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
org$frostlang$frostc$ASTNode* $tmp2648 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
*(&local116) = $tmp2647;
org$frostlang$frostc$FixedArray** $tmp2649 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2650 = *$tmp2649;
*(&local117) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
org$frostlang$frostc$FixedArray* $tmp2651 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2651));
*(&local117) = $tmp2650;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:585
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2652 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2652, &$s2653);
*(&local118) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
frost$core$MutableString* $tmp2654 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
*(&local118) = $tmp2652;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:586
org$frostlang$frostc$FixedArray* $tmp2655 = *(&local115);
frost$core$MutableString* $tmp2656 = *(&local118);
*(&local119) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
frost$core$MutableString* $tmp2657 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
*(&local119) = $tmp2656;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$ASTNode$_Closure2));
org$frostlang$frostc$ASTNode$_Closure2* $tmp2658 = (org$frostlang$frostc$ASTNode$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ASTNode$_Closure2$class);
frost$core$MutableString* $tmp2659 = *(&local119);
org$frostlang$frostc$ASTNode$_Closure2$init$frost$core$MutableString($tmp2658, $tmp2659);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2661 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from ASTNode.frost:586:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2662 = &$tmp2661->pointer;
*$tmp2662 = ((frost$core$Int8*) org$frostlang$frostc$ASTNode$_Closure2$$anonymous1$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
frost$core$Object** $tmp2663 = &$tmp2661->target;
frost$core$Object* $tmp2664 = *$tmp2663;
frost$core$Frost$unref$frost$core$Object$Q($tmp2664);
frost$core$Object** $tmp2665 = &$tmp2661->target;
*$tmp2665 = ((frost$core$Object*) $tmp2658);
ITable* $tmp2666 = ((frost$collections$CollectionView*) $tmp2655)->$class->itable;
while ($tmp2666->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2666 = $tmp2666->next;
}
$fn2668 $tmp2667 = $tmp2666->methods[8];
$tmp2667(((frost$collections$CollectionView*) $tmp2655), $tmp2661);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:587
org$frostlang$frostc$ASTNode* $tmp2669 = *(&local116);
frost$core$Bit $tmp2670 = (frost$core$Bit) {$tmp2669 != NULL};
bool $tmp2671 = $tmp2670.value;
if ($tmp2671) goto block366; else goto block368;
block366:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:588
frost$core$MutableString* $tmp2672 = *(&local118);
org$frostlang$frostc$ASTNode* $tmp2673 = *(&local116);
frost$core$Bit $tmp2674 = (frost$core$Bit) {$tmp2673 != NULL};
bool $tmp2675 = $tmp2674.value;
if ($tmp2675) goto block369; else goto block370;
block370:;
frost$core$Int $tmp2676 = (frost$core$Int) {588u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2677, $tmp2676, &$s2678);
abort(); // unreachable
block369:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:588:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2680 $tmp2679 = ($fn2680) ((frost$core$Object*) $tmp2673)->$class->vtable[0];
frost$core$String* $tmp2681 = $tmp2679(((frost$core$Object*) $tmp2673));
frost$core$String* $tmp2682 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2683, $tmp2681);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
frost$core$String* $tmp2684 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2682, &$s2685);
frost$core$MutableString$append$frost$core$String($tmp2672, $tmp2684);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
goto block367;
block368:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:591
frost$core$MutableString* $tmp2686 = *(&local118);
frost$core$MutableString$append$frost$core$String($tmp2686, &$s2687);
goto block367;
block367:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:593
org$frostlang$frostc$FixedArray* $tmp2688 = *(&local117);
frost$core$MutableString* $tmp2689 = *(&local118);
*(&local120) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
frost$core$MutableString* $tmp2690 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
*(&local120) = $tmp2689;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$ASTNode$_Closure4));
org$frostlang$frostc$ASTNode$_Closure4* $tmp2691 = (org$frostlang$frostc$ASTNode$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ASTNode$_Closure4$class);
frost$core$MutableString* $tmp2692 = *(&local120);
org$frostlang$frostc$ASTNode$_Closure4$init$frost$core$MutableString($tmp2691, $tmp2692);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2694 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from ASTNode.frost:593:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2695 = &$tmp2694->pointer;
*$tmp2695 = ((frost$core$Int8*) org$frostlang$frostc$ASTNode$_Closure4$$anonymous3$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
frost$core$Object** $tmp2696 = &$tmp2694->target;
frost$core$Object* $tmp2697 = *$tmp2696;
frost$core$Frost$unref$frost$core$Object$Q($tmp2697);
frost$core$Object** $tmp2698 = &$tmp2694->target;
*$tmp2698 = ((frost$core$Object*) $tmp2691);
ITable* $tmp2699 = ((frost$collections$CollectionView*) $tmp2688)->$class->itable;
while ($tmp2699->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2699 = $tmp2699->next;
}
$fn2701 $tmp2700 = $tmp2699->methods[8];
$tmp2700(((frost$collections$CollectionView*) $tmp2688), $tmp2694);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:594
frost$core$MutableString* $tmp2702 = *(&local118);
frost$core$MutableString$append$frost$core$String($tmp2702, &$s2703);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:595
frost$core$MutableString* $tmp2704 = *(&local118);
frost$core$String* $tmp2705 = frost$core$MutableString$finish$R$frost$core$String($tmp2704);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
frost$core$MutableString* $tmp2706 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
*(&local120) = ((frost$core$MutableString*) NULL);
frost$core$MutableString* $tmp2707 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
*(&local119) = ((frost$core$MutableString*) NULL);
frost$core$MutableString* $tmp2708 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
*(&local118) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2709 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
*(&local117) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2710 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
*(&local116) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2711 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2711));
*(&local115) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2705;
block363:;
frost$core$Int $tmp2712 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:597:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2713 = $tmp727.value;
int64_t $tmp2714 = $tmp2712.value;
bool $tmp2715 = $tmp2713 == $tmp2714;
frost$core$Bit $tmp2716 = (frost$core$Bit) {$tmp2715};
bool $tmp2717 = $tmp2716.value;
if ($tmp2717) goto block373; else goto block374;
block373:;
org$frostlang$frostc$Position* $tmp2718 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2719 = *$tmp2718;
frost$core$String** $tmp2720 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2721 = *$tmp2720;
*(&local121) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
frost$core$String* $tmp2722 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
*(&local121) = $tmp2721;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:598
frost$core$String* $tmp2723 = *(&local121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
frost$core$String* $tmp2724 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
*(&local121) = ((frost$core$String*) NULL);
return $tmp2723;
block374:;
frost$core$Int $tmp2725 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:600:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2726 = $tmp727.value;
int64_t $tmp2727 = $tmp2725.value;
bool $tmp2728 = $tmp2726 == $tmp2727;
frost$core$Bit $tmp2729 = (frost$core$Bit) {$tmp2728};
bool $tmp2730 = $tmp2729.value;
if ($tmp2730) goto block376; else goto block377;
block376:;
org$frostlang$frostc$Position* $tmp2731 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2732 = *$tmp2731;
frost$core$String** $tmp2733 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2734 = *$tmp2733;
*(&local122) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
frost$core$String* $tmp2735 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
*(&local122) = $tmp2734;
org$frostlang$frostc$ASTNode** $tmp2736 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2737 = *$tmp2736;
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
org$frostlang$frostc$ASTNode* $tmp2738 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
*(&local123) = $tmp2737;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:601
org$frostlang$frostc$ASTNode* $tmp2739 = *(&local123);
frost$core$Bit $tmp2740 = (frost$core$Bit) {$tmp2739 != NULL};
bool $tmp2741 = $tmp2740.value;
if ($tmp2741) goto block379; else goto block380;
block379:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:602
frost$core$String* $tmp2742 = *(&local122);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:602:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
frost$core$String* $tmp2743 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2742, &$s2744);
org$frostlang$frostc$ASTNode* $tmp2745 = *(&local123);
frost$core$Bit $tmp2746 = (frost$core$Bit) {$tmp2745 != NULL};
bool $tmp2747 = $tmp2746.value;
if ($tmp2747) goto block382; else goto block383;
block383:;
frost$core$Int $tmp2748 = (frost$core$Int) {602u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2749, $tmp2748, &$s2750);
abort(); // unreachable
block382:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:602:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2752 $tmp2751 = ($fn2752) ((frost$core$Object*) $tmp2745)->$class->vtable[0];
frost$core$String* $tmp2753 = $tmp2751(((frost$core$Object*) $tmp2745));
frost$core$String* $tmp2754 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2743, $tmp2753);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
frost$core$String* $tmp2755 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2754, &$s2756);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
org$frostlang$frostc$ASTNode* $tmp2757 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2758 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
*(&local122) = ((frost$core$String*) NULL);
return $tmp2755;
block380:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:604
frost$core$String* $tmp2759 = *(&local122);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
org$frostlang$frostc$ASTNode* $tmp2760 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2761 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
*(&local122) = ((frost$core$String*) NULL);
return $tmp2759;
block377:;
frost$core$Int $tmp2762 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:606:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2763 = $tmp727.value;
int64_t $tmp2764 = $tmp2762.value;
bool $tmp2765 = $tmp2763 == $tmp2764;
frost$core$Bit $tmp2766 = (frost$core$Bit) {$tmp2765};
bool $tmp2767 = $tmp2766.value;
if ($tmp2767) goto block385; else goto block386;
block385:;
org$frostlang$frostc$Position* $tmp2768 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2769 = *$tmp2768;
org$frostlang$frostc$FixedArray** $tmp2770 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2771 = *$tmp2770;
*(&local124) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
org$frostlang$frostc$FixedArray* $tmp2772 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
*(&local124) = $tmp2771;
org$frostlang$frostc$ASTNode** $tmp2773 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2774 = *$tmp2773;
*(&local125) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
org$frostlang$frostc$ASTNode* $tmp2775 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
*(&local125) = $tmp2774;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:607
org$frostlang$frostc$FixedArray* $tmp2776 = *(&local124);
ITable* $tmp2777 = ((frost$collections$CollectionView*) $tmp2776)->$class->itable;
while ($tmp2777->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2777 = $tmp2777->next;
}
$fn2779 $tmp2778 = $tmp2777->methods[3];
frost$core$String* $tmp2780 = $tmp2778(((frost$collections$CollectionView*) $tmp2776), &$s2781);
frost$core$String* $tmp2782 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2783, $tmp2780);
frost$core$String* $tmp2784 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2782, &$s2785);
org$frostlang$frostc$ASTNode* $tmp2786 = *(&local125);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:607:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2788 $tmp2787 = ($fn2788) ((frost$core$Object*) $tmp2786)->$class->vtable[0];
frost$core$String* $tmp2789 = $tmp2787(((frost$core$Object*) $tmp2786));
frost$core$String* $tmp2790 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2784, $tmp2789);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
frost$core$String* $tmp2791 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2790, &$s2792);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
org$frostlang$frostc$ASTNode* $tmp2793 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
*(&local125) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2794 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
*(&local124) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2791;
block386:;
frost$core$Int $tmp2795 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:609:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2796 = $tmp727.value;
int64_t $tmp2797 = $tmp2795.value;
bool $tmp2798 = $tmp2796 == $tmp2797;
frost$core$Bit $tmp2799 = (frost$core$Bit) {$tmp2798};
bool $tmp2800 = $tmp2799.value;
if ($tmp2800) goto block389; else goto block390;
block389:;
org$frostlang$frostc$Position* $tmp2801 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2802 = *$tmp2801;
org$frostlang$frostc$expression$Unary$Operator* $tmp2803 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp2804 = *$tmp2803;
*(&local126) = $tmp2804;
org$frostlang$frostc$ASTNode** $tmp2805 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2806 = *$tmp2805;
*(&local127) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
org$frostlang$frostc$ASTNode* $tmp2807 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
*(&local127) = $tmp2806;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:610
org$frostlang$frostc$expression$Unary$Operator $tmp2808 = *(&local126);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp2809;
$tmp2809 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp2809->value = $tmp2808;
frost$core$Int $tmp2810 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Unary.Operator from ASTNode.frost:610:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int* $tmp2811 = &(&local129)->$rawValue;
*$tmp2811 = $tmp2810;
org$frostlang$frostc$expression$Unary$Operator $tmp2812 = *(&local129);
*(&local128) = $tmp2812;
org$frostlang$frostc$expression$Unary$Operator $tmp2813 = *(&local128);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp2814;
$tmp2814 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp2814->value = $tmp2813;
ITable* $tmp2815 = ((frost$core$Equatable*) $tmp2809)->$class->itable;
while ($tmp2815->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2815 = $tmp2815->next;
}
$fn2817 $tmp2816 = $tmp2815->methods[0];
frost$core$Bit $tmp2818 = $tmp2816(((frost$core$Equatable*) $tmp2809), ((frost$core$Equatable*) $tmp2814));
bool $tmp2819 = $tmp2818.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2814)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2809)));
if ($tmp2819) goto block392; else goto block393;
block392:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:611
org$frostlang$frostc$ASTNode* $tmp2820 = *(&local127);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:611:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn2822 $tmp2821 = ($fn2822) ((frost$core$Object*) $tmp2820)->$class->vtable[0];
frost$core$String* $tmp2823 = $tmp2821(((frost$core$Object*) $tmp2820));
frost$core$String* $tmp2824 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2823, &$s2825);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
org$frostlang$frostc$ASTNode* $tmp2826 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
*(&local127) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2824;
block393:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:613
org$frostlang$frostc$expression$Unary$Operator $tmp2827 = *(&local126);
// begin inline call to function org.frostlang.frostc.expression.Unary.Operator.get_asString():frost.core.String from ASTNode.frost:613:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:26
frost$core$Int $tmp2828 = $tmp2827.$rawValue;
frost$core$Int $tmp2829 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:27:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2830 = $tmp2828.value;
int64_t $tmp2831 = $tmp2829.value;
bool $tmp2832 = $tmp2830 == $tmp2831;
frost$core$Bit $tmp2833 = (frost$core$Bit) {$tmp2832};
bool $tmp2834 = $tmp2833.value;
if ($tmp2834) goto block398; else goto block399;
block398:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:27
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2835));
*(&local130) = &$s2836;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2837));
goto block396;
block399:;
frost$core$Int $tmp2838 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:28:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2839 = $tmp2828.value;
int64_t $tmp2840 = $tmp2838.value;
bool $tmp2841 = $tmp2839 == $tmp2840;
frost$core$Bit $tmp2842 = (frost$core$Bit) {$tmp2841};
bool $tmp2843 = $tmp2842.value;
if ($tmp2843) goto block401; else goto block402;
block401:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2844));
*(&local130) = &$s2845;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2846));
goto block396;
block402:;
frost$core$Int $tmp2847 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:29:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2848 = $tmp2828.value;
int64_t $tmp2849 = $tmp2847.value;
bool $tmp2850 = $tmp2848 == $tmp2849;
frost$core$Bit $tmp2851 = (frost$core$Bit) {$tmp2850};
bool $tmp2852 = $tmp2851.value;
if ($tmp2852) goto block404; else goto block405;
block404:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2853));
*(&local130) = &$s2854;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2855));
goto block396;
block405:;
frost$core$Int $tmp2856 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:30:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2857 = $tmp2828.value;
int64_t $tmp2858 = $tmp2856.value;
bool $tmp2859 = $tmp2857 == $tmp2858;
frost$core$Bit $tmp2860 = (frost$core$Bit) {$tmp2859};
bool $tmp2861 = $tmp2860.value;
if ($tmp2861) goto block407; else goto block408;
block407:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2862));
*(&local130) = &$s2863;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2864));
goto block396;
block408:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:31
frost$core$Int $tmp2865 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2866, $tmp2865);
abort(); // unreachable
block397:;
goto block396;
block396:;
frost$core$String* $tmp2867 = *(&local130);
frost$core$String* $tmp2868 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2867, &$s2869);
org$frostlang$frostc$ASTNode* $tmp2870 = *(&local127);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:613:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2872 $tmp2871 = ($fn2872) ((frost$core$Object*) $tmp2870)->$class->vtable[0];
frost$core$String* $tmp2873 = $tmp2871(((frost$core$Object*) $tmp2870));
frost$core$String* $tmp2874 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2868, $tmp2873);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
frost$core$String* $tmp2875 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2874, &$s2876);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
frost$core$String* $tmp2877 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
*(&local130) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2878 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
*(&local127) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2875;
block390:;
frost$core$Int $tmp2879 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:615:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2880 = $tmp727.value;
int64_t $tmp2881 = $tmp2879.value;
bool $tmp2882 = $tmp2880 == $tmp2881;
frost$core$Bit $tmp2883 = (frost$core$Bit) {$tmp2882};
bool $tmp2884 = $tmp2883.value;
if ($tmp2884) goto block411; else goto block412;
block411:;
org$frostlang$frostc$Position* $tmp2885 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2886 = *$tmp2885;
org$frostlang$frostc$ASTNode** $tmp2887 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2888 = *$tmp2887;
*(&local131) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2888));
org$frostlang$frostc$ASTNode* $tmp2889 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
*(&local131) = $tmp2888;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:616
org$frostlang$frostc$ASTNode* $tmp2890 = *(&local131);
frost$core$Bit $tmp2891 = (frost$core$Bit) {$tmp2890 != NULL};
bool $tmp2892 = $tmp2891.value;
if ($tmp2892) goto block414; else goto block415;
block414:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:617
org$frostlang$frostc$ASTNode* $tmp2893 = *(&local131);
frost$core$Bit $tmp2894 = (frost$core$Bit) {$tmp2893 != NULL};
bool $tmp2895 = $tmp2894.value;
if ($tmp2895) goto block416; else goto block417;
block417:;
frost$core$Int $tmp2896 = (frost$core$Int) {617u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2897, $tmp2896, &$s2898);
abort(); // unreachable
block416:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:617:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2900 $tmp2899 = ($fn2900) ((frost$core$Object*) $tmp2893)->$class->vtable[0];
frost$core$String* $tmp2901 = $tmp2899(((frost$core$Object*) $tmp2893));
frost$core$String* $tmp2902 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2903, $tmp2901);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
frost$core$String* $tmp2904 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2902, &$s2905);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
org$frostlang$frostc$ASTNode* $tmp2906 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
*(&local131) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2904;
block415:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:619
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2907));
org$frostlang$frostc$ASTNode* $tmp2908 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
*(&local131) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s2909;
block412:;
frost$core$Int $tmp2910 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:621:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2911 = $tmp727.value;
int64_t $tmp2912 = $tmp2910.value;
bool $tmp2913 = $tmp2911 == $tmp2912;
frost$core$Bit $tmp2914 = (frost$core$Bit) {$tmp2913};
bool $tmp2915 = $tmp2914.value;
if ($tmp2915) goto block419; else goto block420;
block419:;
org$frostlang$frostc$Position* $tmp2916 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2917 = *$tmp2916;
org$frostlang$frostc$FixedArray** $tmp2918 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2919 = *$tmp2918;
*(&local132) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
org$frostlang$frostc$FixedArray* $tmp2920 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
*(&local132) = $tmp2919;
org$frostlang$frostc$ASTNode** $tmp2921 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2922 = *$tmp2921;
*(&local133) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
org$frostlang$frostc$ASTNode* $tmp2923 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
*(&local133) = $tmp2922;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:622
org$frostlang$frostc$FixedArray* $tmp2924 = *(&local132);
ITable* $tmp2925 = ((frost$collections$CollectionView*) $tmp2924)->$class->itable;
while ($tmp2925->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2925 = $tmp2925->next;
}
$fn2927 $tmp2926 = $tmp2925->methods[3];
frost$core$String* $tmp2928 = $tmp2926(((frost$collections$CollectionView*) $tmp2924), &$s2929);
frost$core$String* $tmp2930 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2931, $tmp2928);
frost$core$String* $tmp2932 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2930, &$s2933);
org$frostlang$frostc$ASTNode* $tmp2934 = *(&local133);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:622:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2936 $tmp2935 = ($fn2936) ((frost$core$Object*) $tmp2934)->$class->vtable[0];
frost$core$String* $tmp2937 = $tmp2935(((frost$core$Object*) $tmp2934));
frost$core$String* $tmp2938 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2932, $tmp2937);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
frost$core$String* $tmp2939 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2938, &$s2940);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
org$frostlang$frostc$ASTNode* $tmp2941 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
*(&local133) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2942 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2942));
*(&local132) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2939;
block420:;
frost$core$Int $tmp2943 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:624:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2944 = $tmp727.value;
int64_t $tmp2945 = $tmp2943.value;
bool $tmp2946 = $tmp2944 == $tmp2945;
frost$core$Bit $tmp2947 = (frost$core$Bit) {$tmp2946};
bool $tmp2948 = $tmp2947.value;
if ($tmp2948) goto block423; else goto block424;
block423:;
org$frostlang$frostc$Position* $tmp2949 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2950 = *$tmp2949;
frost$core$String** $tmp2951 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2952 = *$tmp2951;
*(&local134) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2952));
frost$core$String* $tmp2953 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
*(&local134) = $tmp2952;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:625
frost$core$String* $tmp2954 = *(&local134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
frost$core$String* $tmp2955 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
*(&local134) = ((frost$core$String*) NULL);
return $tmp2954;
block424:;
frost$core$Int $tmp2956 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:627:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2957 = $tmp727.value;
int64_t $tmp2958 = $tmp2956.value;
bool $tmp2959 = $tmp2957 == $tmp2958;
frost$core$Bit $tmp2960 = (frost$core$Bit) {$tmp2959};
bool $tmp2961 = $tmp2960.value;
if ($tmp2961) goto block426; else goto block427;
block426:;
org$frostlang$frostc$Position* $tmp2962 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2963 = *$tmp2962;
org$frostlang$frostc$Variable$Kind* $tmp2964 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp2965 = *$tmp2964;
*(&local135) = $tmp2965;
org$frostlang$frostc$FixedArray** $tmp2966 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2967 = *$tmp2966;
*(&local136) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
org$frostlang$frostc$FixedArray* $tmp2968 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
*(&local136) = $tmp2967;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:628
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2969 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2969);
*(&local137) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
frost$core$MutableString* $tmp2970 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
*(&local137) = $tmp2969;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:629
org$frostlang$frostc$Variable$Kind $tmp2971 = *(&local135);
frost$core$Int $tmp2972 = $tmp2971.$rawValue;
frost$core$Int $tmp2973 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:630:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2974 = $tmp2972.value;
int64_t $tmp2975 = $tmp2973.value;
bool $tmp2976 = $tmp2974 == $tmp2975;
frost$core$Bit $tmp2977 = (frost$core$Bit) {$tmp2976};
bool $tmp2978 = $tmp2977.value;
if ($tmp2978) goto block430; else goto block431;
block430:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:630
frost$core$MutableString* $tmp2979 = *(&local137);
frost$core$MutableString$append$frost$core$String($tmp2979, &$s2980);
goto block429;
block431:;
frost$core$Int $tmp2981 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:631:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2982 = $tmp2972.value;
int64_t $tmp2983 = $tmp2981.value;
bool $tmp2984 = $tmp2982 == $tmp2983;
frost$core$Bit $tmp2985 = (frost$core$Bit) {$tmp2984};
bool $tmp2986 = $tmp2985.value;
if ($tmp2986) goto block433; else goto block434;
block433:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:631
frost$core$MutableString* $tmp2987 = *(&local137);
frost$core$MutableString$append$frost$core$String($tmp2987, &$s2988);
goto block429;
block434:;
frost$core$Int $tmp2989 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:632:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2990 = $tmp2972.value;
int64_t $tmp2991 = $tmp2989.value;
bool $tmp2992 = $tmp2990 == $tmp2991;
frost$core$Bit $tmp2993 = (frost$core$Bit) {$tmp2992};
bool $tmp2994 = $tmp2993.value;
if ($tmp2994) goto block436; else goto block437;
block436:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:632
frost$core$MutableString* $tmp2995 = *(&local137);
frost$core$MutableString$append$frost$core$String($tmp2995, &$s2996);
goto block429;
block437:;
frost$core$Int $tmp2997 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:633:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2998 = $tmp2972.value;
int64_t $tmp2999 = $tmp2997.value;
bool $tmp3000 = $tmp2998 == $tmp2999;
frost$core$Bit $tmp3001 = (frost$core$Bit) {$tmp3000};
bool $tmp3002 = $tmp3001.value;
if ($tmp3002) goto block439; else goto block429;
block439:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:633
frost$core$MutableString* $tmp3003 = *(&local137);
frost$core$MutableString$append$frost$core$String($tmp3003, &$s3004);
goto block429;
block429:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:635
frost$core$MutableString* $tmp3005 = *(&local137);
org$frostlang$frostc$FixedArray* $tmp3006 = *(&local136);
ITable* $tmp3007 = ((frost$collections$CollectionView*) $tmp3006)->$class->itable;
while ($tmp3007->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3007 = $tmp3007->next;
}
$fn3009 $tmp3008 = $tmp3007->methods[3];
frost$core$String* $tmp3010 = $tmp3008(((frost$collections$CollectionView*) $tmp3006), &$s3011);
frost$core$MutableString$append$frost$core$String($tmp3005, $tmp3010);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:636
frost$core$MutableString* $tmp3012 = *(&local137);
frost$core$String* $tmp3013 = frost$core$MutableString$finish$R$frost$core$String($tmp3012);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
frost$core$MutableString* $tmp3014 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
*(&local137) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp3015 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
*(&local136) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3013;
block427:;
frost$core$Int $tmp3016 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:638:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3017 = $tmp727.value;
int64_t $tmp3018 = $tmp3016.value;
bool $tmp3019 = $tmp3017 == $tmp3018;
frost$core$Bit $tmp3020 = (frost$core$Bit) {$tmp3019};
bool $tmp3021 = $tmp3020.value;
if ($tmp3021) goto block441; else goto block442;
block441:;
org$frostlang$frostc$Position* $tmp3022 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3023 = *$tmp3022;
org$frostlang$frostc$FixedArray** $tmp3024 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3025 = *$tmp3024;
*(&local138) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
org$frostlang$frostc$FixedArray* $tmp3026 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
*(&local138) = $tmp3025;
org$frostlang$frostc$FixedArray** $tmp3027 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3028 = *$tmp3027;
*(&local139) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3028));
org$frostlang$frostc$FixedArray* $tmp3029 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
*(&local139) = $tmp3028;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:639
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp3030 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp3030, &$s3031);
*(&local140) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3030));
frost$core$MutableString* $tmp3032 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
*(&local140) = $tmp3030;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3030));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:640
*(&local141) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3033));
frost$core$String* $tmp3034 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
*(&local141) = &$s3035;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:641
org$frostlang$frostc$FixedArray* $tmp3036 = *(&local138);
ITable* $tmp3037 = ((frost$collections$Iterable*) $tmp3036)->$class->itable;
while ($tmp3037->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3037 = $tmp3037->next;
}
$fn3039 $tmp3038 = $tmp3037->methods[0];
frost$collections$Iterator* $tmp3040 = $tmp3038(((frost$collections$Iterable*) $tmp3036));
goto block444;
block444:;
ITable* $tmp3041 = $tmp3040->$class->itable;
while ($tmp3041->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3041 = $tmp3041->next;
}
$fn3043 $tmp3042 = $tmp3041->methods[0];
frost$core$Bit $tmp3044 = $tmp3042($tmp3040);
bool $tmp3045 = $tmp3044.value;
if ($tmp3045) goto block446; else goto block445;
block445:;
*(&local142) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3046 = $tmp3040->$class->itable;
while ($tmp3046->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3046 = $tmp3046->next;
}
$fn3048 $tmp3047 = $tmp3046->methods[1];
frost$core$Object* $tmp3049 = $tmp3047($tmp3040);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3049)));
org$frostlang$frostc$ASTNode* $tmp3050 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3050));
*(&local142) = ((org$frostlang$frostc$ASTNode*) $tmp3049);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:642
frost$core$MutableString* $tmp3051 = *(&local140);
frost$core$String* $tmp3052 = *(&local141);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:642:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3052));
frost$core$String* $tmp3053 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3052, &$s3054);
org$frostlang$frostc$ASTNode* $tmp3055 = *(&local142);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:642:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn3057 $tmp3056 = ($fn3057) ((frost$core$Object*) $tmp3055)->$class->vtable[0];
frost$core$String* $tmp3058 = $tmp3056(((frost$core$Object*) $tmp3055));
frost$core$String* $tmp3059 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3053, $tmp3058);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
frost$core$String* $tmp3060 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3059, &$s3061);
frost$core$MutableString$append$frost$core$String($tmp3051, $tmp3060);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3052));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:643
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3062));
frost$core$String* $tmp3063 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
*(&local141) = &$s3064;
frost$core$Frost$unref$frost$core$Object$Q($tmp3049);
org$frostlang$frostc$ASTNode* $tmp3065 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3065));
*(&local142) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block444;
block446:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:645
frost$core$MutableString* $tmp3066 = *(&local140);
frost$core$MutableString$append$frost$core$String($tmp3066, &$s3067);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:646
org$frostlang$frostc$FixedArray* $tmp3068 = *(&local139);
ITable* $tmp3069 = ((frost$collections$Iterable*) $tmp3068)->$class->itable;
while ($tmp3069->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3069 = $tmp3069->next;
}
$fn3071 $tmp3070 = $tmp3069->methods[0];
frost$collections$Iterator* $tmp3072 = $tmp3070(((frost$collections$Iterable*) $tmp3068));
goto block449;
block449:;
ITable* $tmp3073 = $tmp3072->$class->itable;
while ($tmp3073->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3073 = $tmp3073->next;
}
$fn3075 $tmp3074 = $tmp3073->methods[0];
frost$core$Bit $tmp3076 = $tmp3074($tmp3072);
bool $tmp3077 = $tmp3076.value;
if ($tmp3077) goto block451; else goto block450;
block450:;
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3078 = $tmp3072->$class->itable;
while ($tmp3078->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3078 = $tmp3078->next;
}
$fn3080 $tmp3079 = $tmp3078->methods[1];
frost$core$Object* $tmp3081 = $tmp3079($tmp3072);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3081)));
org$frostlang$frostc$ASTNode* $tmp3082 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
*(&local143) = ((org$frostlang$frostc$ASTNode*) $tmp3081);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:647
frost$core$MutableString* $tmp3083 = *(&local140);
org$frostlang$frostc$ASTNode* $tmp3084 = *(&local143);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:647:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn3086 $tmp3085 = ($fn3086) ((frost$core$Object*) $tmp3084)->$class->vtable[0];
frost$core$String* $tmp3087 = $tmp3085(((frost$core$Object*) $tmp3084));
frost$core$String* $tmp3088 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3089, $tmp3087);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
frost$core$MutableString$append$frost$core$String($tmp3083, $tmp3088);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
frost$core$Frost$unref$frost$core$Object$Q($tmp3081);
org$frostlang$frostc$ASTNode* $tmp3090 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block449;
block451:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:649
frost$core$MutableString* $tmp3091 = *(&local140);
frost$core$MutableString$append$frost$core$String($tmp3091, &$s3092);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:650
frost$core$MutableString* $tmp3093 = *(&local140);
frost$core$String* $tmp3094 = frost$core$MutableString$finish$R$frost$core$String($tmp3093);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
frost$core$String* $tmp3095 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
*(&local141) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp3096 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
*(&local140) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp3097 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
*(&local139) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3098 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
*(&local138) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3094;
block442:;
frost$core$Int $tmp3099 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:652:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3100 = $tmp727.value;
int64_t $tmp3101 = $tmp3099.value;
bool $tmp3102 = $tmp3100 == $tmp3101;
frost$core$Bit $tmp3103 = (frost$core$Bit) {$tmp3102};
bool $tmp3104 = $tmp3103.value;
if ($tmp3104) goto block453; else goto block454;
block453:;
org$frostlang$frostc$Position* $tmp3105 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3106 = *$tmp3105;
frost$core$String** $tmp3107 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3108 = *$tmp3107;
*(&local144) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
frost$core$String* $tmp3109 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
*(&local144) = $tmp3108;
org$frostlang$frostc$ASTNode** $tmp3110 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3111 = *$tmp3110;
*(&local145) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3111));
org$frostlang$frostc$ASTNode* $tmp3112 = *(&local145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
*(&local145) = $tmp3111;
org$frostlang$frostc$FixedArray** $tmp3113 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp3114 = *$tmp3113;
*(&local146) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3114));
org$frostlang$frostc$FixedArray* $tmp3115 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
*(&local146) = $tmp3114;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:653
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp3116 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp3116);
*(&local147) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
frost$core$MutableString* $tmp3117 = *(&local147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
*(&local147) = $tmp3116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:654
frost$core$String* $tmp3118 = *(&local144);
frost$core$Bit $tmp3119 = (frost$core$Bit) {$tmp3118 != NULL};
bool $tmp3120 = $tmp3119.value;
if ($tmp3120) goto block456; else goto block457;
block456:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:655
frost$core$MutableString* $tmp3121 = *(&local147);
frost$core$String* $tmp3122 = *(&local144);
frost$core$Bit $tmp3123 = (frost$core$Bit) {$tmp3122 != NULL};
bool $tmp3124 = $tmp3123.value;
if ($tmp3124) goto block458; else goto block459;
block459:;
frost$core$Int $tmp3125 = (frost$core$Int) {655u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3126, $tmp3125, &$s3127);
abort(); // unreachable
block458:;
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:655:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
frost$core$String* $tmp3128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3122, &$s3129);
frost$core$MutableString$append$frost$core$String($tmp3121, $tmp3128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
goto block457;
block457:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:657
frost$core$MutableString* $tmp3130 = *(&local147);
org$frostlang$frostc$ASTNode* $tmp3131 = *(&local145);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:657:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn3133 $tmp3132 = ($fn3133) ((frost$core$Object*) $tmp3131)->$class->vtable[0];
frost$core$String* $tmp3134 = $tmp3132(((frost$core$Object*) $tmp3131));
frost$core$String* $tmp3135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3136, $tmp3134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3134));
frost$core$String* $tmp3137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3135, &$s3138);
frost$core$MutableString$append$frost$core$String($tmp3130, $tmp3137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:658
org$frostlang$frostc$FixedArray* $tmp3139 = *(&local146);
ITable* $tmp3140 = ((frost$collections$Iterable*) $tmp3139)->$class->itable;
while ($tmp3140->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3140 = $tmp3140->next;
}
$fn3142 $tmp3141 = $tmp3140->methods[0];
frost$collections$Iterator* $tmp3143 = $tmp3141(((frost$collections$Iterable*) $tmp3139));
goto block462;
block462:;
ITable* $tmp3144 = $tmp3143->$class->itable;
while ($tmp3144->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3144 = $tmp3144->next;
}
$fn3146 $tmp3145 = $tmp3144->methods[0];
frost$core$Bit $tmp3147 = $tmp3145($tmp3143);
bool $tmp3148 = $tmp3147.value;
if ($tmp3148) goto block464; else goto block463;
block463:;
*(&local148) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3149 = $tmp3143->$class->itable;
while ($tmp3149->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3149 = $tmp3149->next;
}
$fn3151 $tmp3150 = $tmp3149->methods[1];
frost$core$Object* $tmp3152 = $tmp3150($tmp3143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3152)));
org$frostlang$frostc$ASTNode* $tmp3153 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3153));
*(&local148) = ((org$frostlang$frostc$ASTNode*) $tmp3152);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:659
frost$core$MutableString* $tmp3154 = *(&local147);
org$frostlang$frostc$ASTNode* $tmp3155 = *(&local148);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:659:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn3157 $tmp3156 = ($fn3157) ((frost$core$Object*) $tmp3155)->$class->vtable[0];
frost$core$String* $tmp3158 = $tmp3156(((frost$core$Object*) $tmp3155));
frost$core$String* $tmp3159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3158, &$s3160);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
frost$core$MutableString$append$frost$core$String($tmp3154, $tmp3159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
frost$core$Frost$unref$frost$core$Object$Q($tmp3152);
org$frostlang$frostc$ASTNode* $tmp3161 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3161));
*(&local148) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block462;
block464:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3143));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:661
frost$core$MutableString* $tmp3162 = *(&local147);
frost$core$MutableString$append$frost$core$String($tmp3162, &$s3163);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:662
frost$core$MutableString* $tmp3164 = *(&local147);
frost$core$String* $tmp3165 = frost$core$MutableString$finish$R$frost$core$String($tmp3164);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
frost$core$MutableString* $tmp3166 = *(&local147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3166));
*(&local147) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp3167 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
*(&local146) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3168 = *(&local145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
*(&local145) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3169 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
*(&local144) = ((frost$core$String*) NULL);
return $tmp3165;
block454:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:665
frost$core$Int $tmp3170 = (frost$core$Int) {665u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3171, $tmp3170);
abort(); // unreachable
block1:;
goto block466;
block466:;

}
void org$frostlang$frostc$ASTNode$cleanup(org$frostlang$frostc$ASTNode* param0) {

org$frostlang$frostc$Position local0;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$Position local4;
org$frostlang$frostc$FixedArray* local5 = NULL;
org$frostlang$frostc$Position local6;
org$frostlang$frostc$ASTNode* local7 = NULL;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$Position local9;
org$frostlang$frostc$ASTNode* local10 = NULL;
org$frostlang$frostc$Position local11;
org$frostlang$frostc$Position local12;
org$frostlang$frostc$ASTNode* local13 = NULL;
org$frostlang$frostc$expression$Binary$Operator local14;
org$frostlang$frostc$ASTNode* local15 = NULL;
org$frostlang$frostc$Position local16;
frost$core$Bit local17;
org$frostlang$frostc$Position local18;
org$frostlang$frostc$FixedArray* local19 = NULL;
org$frostlang$frostc$Position local20;
frost$core$String* local21 = NULL;
org$frostlang$frostc$Position local22;
org$frostlang$frostc$ASTNode* local23 = NULL;
org$frostlang$frostc$FixedArray* local24 = NULL;
org$frostlang$frostc$Position local25;
org$frostlang$frostc$ASTNode* local26 = NULL;
frost$core$String* local27 = NULL;
org$frostlang$frostc$FixedArray* local28 = NULL;
org$frostlang$frostc$Position local29;
org$frostlang$frostc$ASTNode* local30 = NULL;
org$frostlang$frostc$ChoiceCase* local31 = NULL;
frost$core$Int local32;
org$frostlang$frostc$Position local33;
org$frostlang$frostc$ASTNode* local34 = NULL;
org$frostlang$frostc$FixedArray* local35 = NULL;
org$frostlang$frostc$ClassDecl$Kind local36;
frost$core$String* local37 = NULL;
org$frostlang$frostc$FixedArray* local38 = NULL;
org$frostlang$frostc$FixedArray* local39 = NULL;
org$frostlang$frostc$FixedArray* local40 = NULL;
org$frostlang$frostc$Position local41;
frost$core$String* local42 = NULL;
org$frostlang$frostc$Position local43;
org$frostlang$frostc$ASTNode* local44 = NULL;
org$frostlang$frostc$ASTNode* local45 = NULL;
org$frostlang$frostc$Position local46;
frost$core$String* local47 = NULL;
org$frostlang$frostc$FixedArray* local48 = NULL;
org$frostlang$frostc$ASTNode* local49 = NULL;
org$frostlang$frostc$Position local50;
org$frostlang$frostc$ASTNode* local51 = NULL;
frost$core$String* local52 = NULL;
org$frostlang$frostc$Position local53;
org$frostlang$frostc$ASTNode* local54 = NULL;
frost$core$String* local55 = NULL;
org$frostlang$frostc$FixedArray* local56 = NULL;
org$frostlang$frostc$Position local57;
org$frostlang$frostc$ASTNode* local58 = NULL;
org$frostlang$frostc$FixedArray* local59 = NULL;
org$frostlang$frostc$ASTNode* local60 = NULL;
org$frostlang$frostc$FixedArray* local61 = NULL;
org$frostlang$frostc$Position local62;
frost$core$String* local63 = NULL;
org$frostlang$frostc$ASTNode* local64 = NULL;
org$frostlang$frostc$ASTNode* local65 = NULL;
org$frostlang$frostc$FixedArray* local66 = NULL;
org$frostlang$frostc$Position local67;
frost$core$String* local68 = NULL;
org$frostlang$frostc$FixedArray* local69 = NULL;
org$frostlang$frostc$Position local70;
frost$core$String* local71 = NULL;
org$frostlang$frostc$Position local72;
frost$core$String* local73 = NULL;
org$frostlang$frostc$FixedArray* local74 = NULL;
org$frostlang$frostc$Position local75;
org$frostlang$frostc$ASTNode* local76 = NULL;
org$frostlang$frostc$FixedArray* local77 = NULL;
org$frostlang$frostc$ASTNode* local78 = NULL;
org$frostlang$frostc$Position local79;
frost$core$UInt64 local80;
org$frostlang$frostc$Position local81;
org$frostlang$frostc$IR$Value* local82 = NULL;
org$frostlang$frostc$Position local83;
frost$core$String* local84 = NULL;
org$frostlang$frostc$FixedArray* local85 = NULL;
org$frostlang$frostc$Position local86;
org$frostlang$frostc$ASTNode* local87 = NULL;
org$frostlang$frostc$FixedArray* local88 = NULL;
org$frostlang$frostc$FixedArray* local89 = NULL;
org$frostlang$frostc$Position local90;
org$frostlang$frostc$ASTNode* local91 = NULL;
org$frostlang$frostc$FixedArray* local92 = NULL;
org$frostlang$frostc$MethodDecl$Kind local93;
frost$core$String* local94 = NULL;
org$frostlang$frostc$FixedArray* local95 = NULL;
org$frostlang$frostc$FixedArray* local96 = NULL;
org$frostlang$frostc$ASTNode* local97 = NULL;
org$frostlang$frostc$FixedArray* local98 = NULL;
org$frostlang$frostc$Position local99;
org$frostlang$frostc$parser$Token$Kind local100;
org$frostlang$frostc$FixedArray* local101 = NULL;
org$frostlang$frostc$ASTNode* local102 = NULL;
org$frostlang$frostc$Position local103;
org$frostlang$frostc$Position local104;
org$frostlang$frostc$ASTNode* local105 = NULL;
org$frostlang$frostc$Position local106;
frost$core$String* local107 = NULL;
org$frostlang$frostc$Position local108;
frost$core$String* local109 = NULL;
org$frostlang$frostc$ASTNode* local110 = NULL;
org$frostlang$frostc$Position local111;
org$frostlang$frostc$ASTNode* local112 = NULL;
frost$core$Bit local113;
org$frostlang$frostc$ASTNode* local114 = NULL;
org$frostlang$frostc$ASTNode* local115 = NULL;
org$frostlang$frostc$Position local116;
frost$core$Real64 local117;
org$frostlang$frostc$Position local118;
frost$core$String* local119 = NULL;
org$frostlang$frostc$Position local120;
org$frostlang$frostc$ASTNode* local121 = NULL;
org$frostlang$frostc$Position local122;
org$frostlang$frostc$Position local123;
frost$core$String* local124 = NULL;
org$frostlang$frostc$Position local125;
org$frostlang$frostc$Position local126;
org$frostlang$frostc$FixedArray* local127 = NULL;
org$frostlang$frostc$ASTNode* local128 = NULL;
org$frostlang$frostc$FixedArray* local129 = NULL;
org$frostlang$frostc$Position local130;
org$frostlang$frostc$FixedArray* local131 = NULL;
org$frostlang$frostc$Position local132;
org$frostlang$frostc$FixedArray* local133 = NULL;
org$frostlang$frostc$Position local134;
org$frostlang$frostc$FixedArray* local135 = NULL;
org$frostlang$frostc$Position local136;
frost$core$String* local137 = NULL;
org$frostlang$frostc$Position local138;
org$frostlang$frostc$FixedArray* local139 = NULL;
org$frostlang$frostc$ASTNode* local140 = NULL;
org$frostlang$frostc$Position local141;
frost$core$String* local142 = NULL;
org$frostlang$frostc$ASTNode* local143 = NULL;
org$frostlang$frostc$Position local144;
org$frostlang$frostc$expression$Unary$Operator local145;
org$frostlang$frostc$ASTNode* local146 = NULL;
org$frostlang$frostc$Position local147;
org$frostlang$frostc$ASTNode* local148 = NULL;
org$frostlang$frostc$Position local149;
org$frostlang$frostc$FixedArray* local150 = NULL;
org$frostlang$frostc$ASTNode* local151 = NULL;
org$frostlang$frostc$Position local152;
frost$core$String* local153 = NULL;
org$frostlang$frostc$Position local154;
org$frostlang$frostc$Variable$Kind local155;
org$frostlang$frostc$FixedArray* local156 = NULL;
org$frostlang$frostc$Position local157;
org$frostlang$frostc$FixedArray* local158 = NULL;
org$frostlang$frostc$FixedArray* local159 = NULL;
org$frostlang$frostc$Position local160;
frost$core$String* local161 = NULL;
org$frostlang$frostc$ASTNode* local162 = NULL;
org$frostlang$frostc$FixedArray* local163 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp3172 = &param0->$rawValue;
frost$core$Int $tmp3173 = *$tmp3172;
frost$core$Int $tmp3174 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3175 = $tmp3173.value;
int64_t $tmp3176 = $tmp3174.value;
bool $tmp3177 = $tmp3175 == $tmp3176;
frost$core$Bit $tmp3178 = (frost$core$Bit) {$tmp3177};
bool $tmp3179 = $tmp3178.value;
if ($tmp3179) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp3180 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3181 = *$tmp3180;
*(&local0) = $tmp3181;
frost$core$String** $tmp3182 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3183 = *$tmp3182;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
frost$core$String* $tmp3184 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
*(&local1) = $tmp3183;
frost$core$String** $tmp3185 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp3186 = *$tmp3185;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
frost$core$String* $tmp3187 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
*(&local2) = $tmp3186;
org$frostlang$frostc$ASTNode** $tmp3188 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3189 = *$tmp3188;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
org$frostlang$frostc$ASTNode* $tmp3190 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
*(&local3) = $tmp3189;
// <no location>
frost$core$String* $tmp3191 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
// <no location>
frost$core$String* $tmp3192 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3193 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
org$frostlang$frostc$ASTNode* $tmp3194 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3195 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3196 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int $tmp3197 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3198 = $tmp3173.value;
int64_t $tmp3199 = $tmp3197.value;
bool $tmp3200 = $tmp3198 == $tmp3199;
frost$core$Bit $tmp3201 = (frost$core$Bit) {$tmp3200};
bool $tmp3202 = $tmp3201.value;
if ($tmp3202) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp3203 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3204 = *$tmp3203;
*(&local4) = $tmp3204;
org$frostlang$frostc$FixedArray** $tmp3205 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3206 = *$tmp3205;
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3206));
org$frostlang$frostc$FixedArray* $tmp3207 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3207));
*(&local5) = $tmp3206;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3208 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
org$frostlang$frostc$FixedArray* $tmp3209 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block6:;
frost$core$Int $tmp3210 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3211 = $tmp3173.value;
int64_t $tmp3212 = $tmp3210.value;
bool $tmp3213 = $tmp3211 == $tmp3212;
frost$core$Bit $tmp3214 = (frost$core$Bit) {$tmp3213};
bool $tmp3215 = $tmp3214.value;
if ($tmp3215) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp3216 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3217 = *$tmp3216;
*(&local6) = $tmp3217;
org$frostlang$frostc$ASTNode** $tmp3218 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3219 = *$tmp3218;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
org$frostlang$frostc$ASTNode* $tmp3220 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
*(&local7) = $tmp3219;
org$frostlang$frostc$ASTNode** $tmp3221 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3222 = *$tmp3221;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
org$frostlang$frostc$ASTNode* $tmp3223 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
*(&local8) = $tmp3222;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3224 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3225 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
org$frostlang$frostc$ASTNode* $tmp3226 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3226));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3227 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int $tmp3228 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3229 = $tmp3173.value;
int64_t $tmp3230 = $tmp3228.value;
bool $tmp3231 = $tmp3229 == $tmp3230;
frost$core$Bit $tmp3232 = (frost$core$Bit) {$tmp3231};
bool $tmp3233 = $tmp3232.value;
if ($tmp3233) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp3234 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3235 = *$tmp3234;
*(&local9) = $tmp3235;
org$frostlang$frostc$ASTNode** $tmp3236 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3237 = *$tmp3236;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3237));
org$frostlang$frostc$ASTNode* $tmp3238 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3238));
*(&local10) = $tmp3237;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3239 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
org$frostlang$frostc$ASTNode* $tmp3240 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block12:;
frost$core$Int $tmp3241 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3242 = $tmp3173.value;
int64_t $tmp3243 = $tmp3241.value;
bool $tmp3244 = $tmp3242 == $tmp3243;
frost$core$Bit $tmp3245 = (frost$core$Bit) {$tmp3244};
bool $tmp3246 = $tmp3245.value;
if ($tmp3246) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp3247 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3248 = *$tmp3247;
*(&local11) = $tmp3248;
goto block1;
block15:;
frost$core$Int $tmp3249 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3250 = $tmp3173.value;
int64_t $tmp3251 = $tmp3249.value;
bool $tmp3252 = $tmp3250 == $tmp3251;
frost$core$Bit $tmp3253 = (frost$core$Bit) {$tmp3252};
bool $tmp3254 = $tmp3253.value;
if ($tmp3254) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp3255 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3256 = *$tmp3255;
*(&local12) = $tmp3256;
org$frostlang$frostc$ASTNode** $tmp3257 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3258 = *$tmp3257;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3258));
org$frostlang$frostc$ASTNode* $tmp3259 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
*(&local13) = $tmp3258;
org$frostlang$frostc$expression$Binary$Operator* $tmp3260 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp3261 = *$tmp3260;
*(&local14) = $tmp3261;
org$frostlang$frostc$ASTNode** $tmp3262 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3263 = *$tmp3262;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
org$frostlang$frostc$ASTNode* $tmp3264 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3264));
*(&local15) = $tmp3263;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3265 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3265));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3266 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
org$frostlang$frostc$ASTNode* $tmp3267 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3267));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3268 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block18:;
frost$core$Int $tmp3269 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3270 = $tmp3173.value;
int64_t $tmp3271 = $tmp3269.value;
bool $tmp3272 = $tmp3270 == $tmp3271;
frost$core$Bit $tmp3273 = (frost$core$Bit) {$tmp3272};
bool $tmp3274 = $tmp3273.value;
if ($tmp3274) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp3275 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3276 = *$tmp3275;
*(&local16) = $tmp3276;
frost$core$Bit* $tmp3277 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp3278 = *$tmp3277;
*(&local17) = $tmp3278;
goto block1;
block21:;
frost$core$Int $tmp3279 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3280 = $tmp3173.value;
int64_t $tmp3281 = $tmp3279.value;
bool $tmp3282 = $tmp3280 == $tmp3281;
frost$core$Bit $tmp3283 = (frost$core$Bit) {$tmp3282};
bool $tmp3284 = $tmp3283.value;
if ($tmp3284) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp3285 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3286 = *$tmp3285;
*(&local18) = $tmp3286;
org$frostlang$frostc$FixedArray** $tmp3287 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3288 = *$tmp3287;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3288));
org$frostlang$frostc$FixedArray* $tmp3289 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3289));
*(&local19) = $tmp3288;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3290 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3290));
org$frostlang$frostc$FixedArray* $tmp3291 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3291));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block24:;
frost$core$Int $tmp3292 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3293 = $tmp3173.value;
int64_t $tmp3294 = $tmp3292.value;
bool $tmp3295 = $tmp3293 == $tmp3294;
frost$core$Bit $tmp3296 = (frost$core$Bit) {$tmp3295};
bool $tmp3297 = $tmp3296.value;
if ($tmp3297) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp3298 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3299 = *$tmp3298;
*(&local20) = $tmp3299;
frost$core$String** $tmp3300 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3301 = *$tmp3300;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3301));
frost$core$String* $tmp3302 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3302));
*(&local21) = $tmp3301;
// <no location>
frost$core$String* $tmp3303 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3303));
frost$core$String* $tmp3304 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3304));
*(&local21) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Int $tmp3305 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3306 = $tmp3173.value;
int64_t $tmp3307 = $tmp3305.value;
bool $tmp3308 = $tmp3306 == $tmp3307;
frost$core$Bit $tmp3309 = (frost$core$Bit) {$tmp3308};
bool $tmp3310 = $tmp3309.value;
if ($tmp3310) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp3311 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3312 = *$tmp3311;
*(&local22) = $tmp3312;
org$frostlang$frostc$ASTNode** $tmp3313 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3314 = *$tmp3313;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3314));
org$frostlang$frostc$ASTNode* $tmp3315 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3315));
*(&local23) = $tmp3314;
org$frostlang$frostc$FixedArray** $tmp3316 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3317 = *$tmp3316;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3317));
org$frostlang$frostc$FixedArray* $tmp3318 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3318));
*(&local24) = $tmp3317;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3319 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3319));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3320 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3320));
org$frostlang$frostc$FixedArray* $tmp3321 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3321));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3322 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3322));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block30:;
frost$core$Int $tmp3323 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3324 = $tmp3173.value;
int64_t $tmp3325 = $tmp3323.value;
bool $tmp3326 = $tmp3324 == $tmp3325;
frost$core$Bit $tmp3327 = (frost$core$Bit) {$tmp3326};
bool $tmp3328 = $tmp3327.value;
if ($tmp3328) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp3329 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3330 = *$tmp3329;
*(&local25) = $tmp3330;
org$frostlang$frostc$ASTNode** $tmp3331 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3332 = *$tmp3331;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3332));
org$frostlang$frostc$ASTNode* $tmp3333 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3333));
*(&local26) = $tmp3332;
frost$core$String** $tmp3334 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp3335 = *$tmp3334;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
frost$core$String* $tmp3336 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
*(&local27) = $tmp3335;
org$frostlang$frostc$FixedArray** $tmp3337 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp3338 = *$tmp3337;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3338));
org$frostlang$frostc$FixedArray* $tmp3339 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3339));
*(&local28) = $tmp3338;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3340 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3340));
// <no location>
frost$core$String* $tmp3341 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3342 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3342));
org$frostlang$frostc$FixedArray* $tmp3343 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3343));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3344 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp3345 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3345));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block33:;
frost$core$Int $tmp3346 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3347 = $tmp3173.value;
int64_t $tmp3348 = $tmp3346.value;
bool $tmp3349 = $tmp3347 == $tmp3348;
frost$core$Bit $tmp3350 = (frost$core$Bit) {$tmp3349};
bool $tmp3351 = $tmp3350.value;
if ($tmp3351) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Position* $tmp3352 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3353 = *$tmp3352;
*(&local29) = $tmp3353;
org$frostlang$frostc$ASTNode** $tmp3354 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3355 = *$tmp3354;
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3355));
org$frostlang$frostc$ASTNode* $tmp3356 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
*(&local30) = $tmp3355;
org$frostlang$frostc$ChoiceCase** $tmp3357 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp3358 = *$tmp3357;
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3358));
org$frostlang$frostc$ChoiceCase* $tmp3359 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3359));
*(&local31) = $tmp3358;
frost$core$Int* $tmp3360 = (frost$core$Int*) (param0->$data + 40);
frost$core$Int $tmp3361 = *$tmp3360;
*(&local32) = $tmp3361;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3362 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3362));
// <no location>
org$frostlang$frostc$ChoiceCase* $tmp3363 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3363));
org$frostlang$frostc$ChoiceCase* $tmp3364 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp3365 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3365));
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block36:;
frost$core$Int $tmp3366 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3367 = $tmp3173.value;
int64_t $tmp3368 = $tmp3366.value;
bool $tmp3369 = $tmp3367 == $tmp3368;
frost$core$Bit $tmp3370 = (frost$core$Bit) {$tmp3369};
bool $tmp3371 = $tmp3370.value;
if ($tmp3371) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp3372 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3373 = *$tmp3372;
*(&local33) = $tmp3373;
org$frostlang$frostc$ASTNode** $tmp3374 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3375 = *$tmp3374;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3375));
org$frostlang$frostc$ASTNode* $tmp3376 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3376));
*(&local34) = $tmp3375;
org$frostlang$frostc$FixedArray** $tmp3377 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3378 = *$tmp3377;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3378));
org$frostlang$frostc$FixedArray* $tmp3379 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3379));
*(&local35) = $tmp3378;
org$frostlang$frostc$ClassDecl$Kind* $tmp3380 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp3381 = *$tmp3380;
*(&local36) = $tmp3381;
frost$core$String** $tmp3382 = (frost$core$String**) (param0->$data + 48);
frost$core$String* $tmp3383 = *$tmp3382;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3383));
frost$core$String* $tmp3384 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3384));
*(&local37) = $tmp3383;
org$frostlang$frostc$FixedArray** $tmp3385 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3386 = *$tmp3385;
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3386));
org$frostlang$frostc$FixedArray* $tmp3387 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3387));
*(&local38) = $tmp3386;
org$frostlang$frostc$FixedArray** $tmp3388 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3389 = *$tmp3388;
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3389));
org$frostlang$frostc$FixedArray* $tmp3390 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3390));
*(&local39) = $tmp3389;
org$frostlang$frostc$FixedArray** $tmp3391 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp3392 = *$tmp3391;
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3392));
org$frostlang$frostc$FixedArray* $tmp3393 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3393));
*(&local40) = $tmp3392;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3394 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3394));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3395 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
// <no location>
frost$core$String* $tmp3396 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3396));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3397 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3397));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3398 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3399 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3399));
org$frostlang$frostc$FixedArray* $tmp3400 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3400));
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3401 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3401));
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3402 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3402));
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3403 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3403));
*(&local37) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3404 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3404));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3405 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3405));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block39:;
frost$core$Int $tmp3406 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3407 = $tmp3173.value;
int64_t $tmp3408 = $tmp3406.value;
bool $tmp3409 = $tmp3407 == $tmp3408;
frost$core$Bit $tmp3410 = (frost$core$Bit) {$tmp3409};
bool $tmp3411 = $tmp3410.value;
if ($tmp3411) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Position* $tmp3412 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3413 = *$tmp3412;
*(&local41) = $tmp3413;
frost$core$String** $tmp3414 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3415 = *$tmp3414;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
frost$core$String* $tmp3416 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
*(&local42) = $tmp3415;
// <no location>
frost$core$String* $tmp3417 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
frost$core$String* $tmp3418 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3418));
*(&local42) = ((frost$core$String*) NULL);
goto block1;
block42:;
frost$core$Int $tmp3419 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3420 = $tmp3173.value;
int64_t $tmp3421 = $tmp3419.value;
bool $tmp3422 = $tmp3420 == $tmp3421;
frost$core$Bit $tmp3423 = (frost$core$Bit) {$tmp3422};
bool $tmp3424 = $tmp3423.value;
if ($tmp3424) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp3425 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3426 = *$tmp3425;
*(&local43) = $tmp3426;
org$frostlang$frostc$ASTNode** $tmp3427 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3428 = *$tmp3427;
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3428));
org$frostlang$frostc$ASTNode* $tmp3429 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3429));
*(&local44) = $tmp3428;
org$frostlang$frostc$ASTNode** $tmp3430 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3431 = *$tmp3430;
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
org$frostlang$frostc$ASTNode* $tmp3432 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3432));
*(&local45) = $tmp3431;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3433 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3433));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3434 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3434));
org$frostlang$frostc$ASTNode* $tmp3435 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3436 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3436));
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block45:;
frost$core$Int $tmp3437 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3438 = $tmp3173.value;
int64_t $tmp3439 = $tmp3437.value;
bool $tmp3440 = $tmp3438 == $tmp3439;
frost$core$Bit $tmp3441 = (frost$core$Bit) {$tmp3440};
bool $tmp3442 = $tmp3441.value;
if ($tmp3442) goto block47; else goto block48;
block47:;
org$frostlang$frostc$Position* $tmp3443 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3444 = *$tmp3443;
*(&local46) = $tmp3444;
frost$core$String** $tmp3445 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3446 = *$tmp3445;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3446));
frost$core$String* $tmp3447 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3447));
*(&local47) = $tmp3446;
org$frostlang$frostc$FixedArray** $tmp3448 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3449 = *$tmp3448;
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3449));
org$frostlang$frostc$FixedArray* $tmp3450 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3450));
*(&local48) = $tmp3449;
org$frostlang$frostc$ASTNode** $tmp3451 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3452 = *$tmp3451;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3452));
org$frostlang$frostc$ASTNode* $tmp3453 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3453));
*(&local49) = $tmp3452;
// <no location>
frost$core$String* $tmp3454 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3454));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3455 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3455));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3456 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3456));
org$frostlang$frostc$ASTNode* $tmp3457 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3458 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3458));
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3459 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
*(&local47) = ((frost$core$String*) NULL);
goto block1;
block48:;
frost$core$Int $tmp3460 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3461 = $tmp3173.value;
int64_t $tmp3462 = $tmp3460.value;
bool $tmp3463 = $tmp3461 == $tmp3462;
frost$core$Bit $tmp3464 = (frost$core$Bit) {$tmp3463};
bool $tmp3465 = $tmp3464.value;
if ($tmp3465) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp3466 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3467 = *$tmp3466;
*(&local50) = $tmp3467;
org$frostlang$frostc$ASTNode** $tmp3468 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3469 = *$tmp3468;
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3469));
org$frostlang$frostc$ASTNode* $tmp3470 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3470));
*(&local51) = $tmp3469;
frost$core$String** $tmp3471 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp3472 = *$tmp3471;
*(&local52) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3472));
frost$core$String* $tmp3473 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3473));
*(&local52) = $tmp3472;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3474 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3474));
// <no location>
frost$core$String* $tmp3475 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
frost$core$String* $tmp3476 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3476));
*(&local52) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp3477 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3477));
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block51:;
frost$core$Int $tmp3478 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3479 = $tmp3173.value;
int64_t $tmp3480 = $tmp3478.value;
bool $tmp3481 = $tmp3479 == $tmp3480;
frost$core$Bit $tmp3482 = (frost$core$Bit) {$tmp3481};
bool $tmp3483 = $tmp3482.value;
if ($tmp3483) goto block53; else goto block54;
block53:;
org$frostlang$frostc$Position* $tmp3484 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3485 = *$tmp3484;
*(&local53) = $tmp3485;
org$frostlang$frostc$ASTNode** $tmp3486 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3487 = *$tmp3486;
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3487));
org$frostlang$frostc$ASTNode* $tmp3488 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3488));
*(&local54) = $tmp3487;
frost$core$String** $tmp3489 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp3490 = *$tmp3489;
*(&local55) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3490));
frost$core$String* $tmp3491 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3491));
*(&local55) = $tmp3490;
org$frostlang$frostc$FixedArray** $tmp3492 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp3493 = *$tmp3492;
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3493));
org$frostlang$frostc$FixedArray* $tmp3494 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3494));
*(&local56) = $tmp3493;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3495 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
// <no location>
frost$core$String* $tmp3496 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3496));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3497 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3497));
org$frostlang$frostc$FixedArray* $tmp3498 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3498));
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3499 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3499));
*(&local55) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp3500 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3500));
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block54:;
frost$core$Int $tmp3501 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3502 = $tmp3173.value;
int64_t $tmp3503 = $tmp3501.value;
bool $tmp3504 = $tmp3502 == $tmp3503;
frost$core$Bit $tmp3505 = (frost$core$Bit) {$tmp3504};
bool $tmp3506 = $tmp3505.value;
if ($tmp3506) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp3507 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3508 = *$tmp3507;
*(&local57) = $tmp3508;
org$frostlang$frostc$ASTNode** $tmp3509 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3510 = *$tmp3509;
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
org$frostlang$frostc$ASTNode* $tmp3511 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
*(&local58) = $tmp3510;
org$frostlang$frostc$FixedArray** $tmp3512 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3513 = *$tmp3512;
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3513));
org$frostlang$frostc$FixedArray* $tmp3514 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3514));
*(&local59) = $tmp3513;
org$frostlang$frostc$ASTNode** $tmp3515 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3516 = *$tmp3515;
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3516));
org$frostlang$frostc$ASTNode* $tmp3517 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3517));
*(&local60) = $tmp3516;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3518 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3518));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3519 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3519));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3520 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3520));
org$frostlang$frostc$ASTNode* $tmp3521 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3521));
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3522 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3522));
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3523 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3523));
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block57:;
frost$core$Int $tmp3524 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3525 = $tmp3173.value;
int64_t $tmp3526 = $tmp3524.value;
bool $tmp3527 = $tmp3525 == $tmp3526;
frost$core$Bit $tmp3528 = (frost$core$Bit) {$tmp3527};
bool $tmp3529 = $tmp3528.value;
if ($tmp3529) goto block59; else goto block60;
block59:;
org$frostlang$frostc$FixedArray** $tmp3530 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp3531 = *$tmp3530;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
org$frostlang$frostc$FixedArray* $tmp3532 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3532));
*(&local61) = $tmp3531;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3533 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3533));
org$frostlang$frostc$FixedArray* $tmp3534 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3534));
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block60:;
frost$core$Int $tmp3535 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3536 = $tmp3173.value;
int64_t $tmp3537 = $tmp3535.value;
bool $tmp3538 = $tmp3536 == $tmp3537;
frost$core$Bit $tmp3539 = (frost$core$Bit) {$tmp3538};
bool $tmp3540 = $tmp3539.value;
if ($tmp3540) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp3541 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3542 = *$tmp3541;
*(&local62) = $tmp3542;
frost$core$String** $tmp3543 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3544 = *$tmp3543;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3544));
frost$core$String* $tmp3545 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3545));
*(&local63) = $tmp3544;
org$frostlang$frostc$ASTNode** $tmp3546 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3547 = *$tmp3546;
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3547));
org$frostlang$frostc$ASTNode* $tmp3548 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3548));
*(&local64) = $tmp3547;
org$frostlang$frostc$ASTNode** $tmp3549 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3550 = *$tmp3549;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3550));
org$frostlang$frostc$ASTNode* $tmp3551 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3551));
*(&local65) = $tmp3550;
org$frostlang$frostc$FixedArray** $tmp3552 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp3553 = *$tmp3552;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3553));
org$frostlang$frostc$FixedArray* $tmp3554 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3554));
*(&local66) = $tmp3553;
// <no location>
frost$core$String* $tmp3555 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3555));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3556 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3556));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3557 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3558 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
org$frostlang$frostc$FixedArray* $tmp3559 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3559));
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3560 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3560));
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3561 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3561));
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3562 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3562));
*(&local63) = ((frost$core$String*) NULL);
goto block1;
block63:;
frost$core$Int $tmp3563 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3564 = $tmp3173.value;
int64_t $tmp3565 = $tmp3563.value;
bool $tmp3566 = $tmp3564 == $tmp3565;
frost$core$Bit $tmp3567 = (frost$core$Bit) {$tmp3566};
bool $tmp3568 = $tmp3567.value;
if ($tmp3568) goto block65; else goto block66;
block65:;
org$frostlang$frostc$Position* $tmp3569 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3570 = *$tmp3569;
*(&local67) = $tmp3570;
frost$core$String** $tmp3571 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3572 = *$tmp3571;
*(&local68) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3572));
frost$core$String* $tmp3573 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
*(&local68) = $tmp3572;
org$frostlang$frostc$FixedArray** $tmp3574 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3575 = *$tmp3574;
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3575));
org$frostlang$frostc$FixedArray* $tmp3576 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3576));
*(&local69) = $tmp3575;
// <no location>
frost$core$String* $tmp3577 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3577));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3578 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3578));
org$frostlang$frostc$FixedArray* $tmp3579 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3579));
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3580 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3580));
*(&local68) = ((frost$core$String*) NULL);
goto block1;
block66:;
frost$core$Int $tmp3581 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3582 = $tmp3173.value;
int64_t $tmp3583 = $tmp3581.value;
bool $tmp3584 = $tmp3582 == $tmp3583;
frost$core$Bit $tmp3585 = (frost$core$Bit) {$tmp3584};
bool $tmp3586 = $tmp3585.value;
if ($tmp3586) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp3587 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3588 = *$tmp3587;
*(&local70) = $tmp3588;
frost$core$String** $tmp3589 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3590 = *$tmp3589;
*(&local71) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3590));
frost$core$String* $tmp3591 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3591));
*(&local71) = $tmp3590;
// <no location>
frost$core$String* $tmp3592 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3592));
frost$core$String* $tmp3593 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3593));
*(&local71) = ((frost$core$String*) NULL);
goto block1;
block69:;
frost$core$Int $tmp3594 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3595 = $tmp3173.value;
int64_t $tmp3596 = $tmp3594.value;
bool $tmp3597 = $tmp3595 == $tmp3596;
frost$core$Bit $tmp3598 = (frost$core$Bit) {$tmp3597};
bool $tmp3599 = $tmp3598.value;
if ($tmp3599) goto block71; else goto block72;
block71:;
org$frostlang$frostc$Position* $tmp3600 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3601 = *$tmp3600;
*(&local72) = $tmp3601;
frost$core$String** $tmp3602 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3603 = *$tmp3602;
*(&local73) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3603));
frost$core$String* $tmp3604 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3604));
*(&local73) = $tmp3603;
org$frostlang$frostc$FixedArray** $tmp3605 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3606 = *$tmp3605;
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3606));
org$frostlang$frostc$FixedArray* $tmp3607 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3607));
*(&local74) = $tmp3606;
// <no location>
frost$core$String* $tmp3608 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3608));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3609 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3609));
org$frostlang$frostc$FixedArray* $tmp3610 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3611 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3611));
*(&local73) = ((frost$core$String*) NULL);
goto block1;
block72:;
frost$core$Int $tmp3612 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3613 = $tmp3173.value;
int64_t $tmp3614 = $tmp3612.value;
bool $tmp3615 = $tmp3613 == $tmp3614;
frost$core$Bit $tmp3616 = (frost$core$Bit) {$tmp3615};
bool $tmp3617 = $tmp3616.value;
if ($tmp3617) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp3618 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3619 = *$tmp3618;
*(&local75) = $tmp3619;
org$frostlang$frostc$ASTNode** $tmp3620 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3621 = *$tmp3620;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3621));
org$frostlang$frostc$ASTNode* $tmp3622 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3622));
*(&local76) = $tmp3621;
org$frostlang$frostc$FixedArray** $tmp3623 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3624 = *$tmp3623;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3624));
org$frostlang$frostc$FixedArray* $tmp3625 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3625));
*(&local77) = $tmp3624;
org$frostlang$frostc$ASTNode** $tmp3626 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3627 = *$tmp3626;
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3627));
org$frostlang$frostc$ASTNode* $tmp3628 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3628));
*(&local78) = $tmp3627;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3629 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3630 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3630));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3631 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3631));
org$frostlang$frostc$ASTNode* $tmp3632 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3632));
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3633 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3633));
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3634 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3634));
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block75:;
frost$core$Int $tmp3635 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3636 = $tmp3173.value;
int64_t $tmp3637 = $tmp3635.value;
bool $tmp3638 = $tmp3636 == $tmp3637;
frost$core$Bit $tmp3639 = (frost$core$Bit) {$tmp3638};
bool $tmp3640 = $tmp3639.value;
if ($tmp3640) goto block77; else goto block78;
block77:;
org$frostlang$frostc$Position* $tmp3641 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3642 = *$tmp3641;
*(&local79) = $tmp3642;
frost$core$UInt64* $tmp3643 = (frost$core$UInt64*) (param0->$data + 24);
frost$core$UInt64 $tmp3644 = *$tmp3643;
*(&local80) = $tmp3644;
goto block1;
block78:;
frost$core$Int $tmp3645 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3646 = $tmp3173.value;
int64_t $tmp3647 = $tmp3645.value;
bool $tmp3648 = $tmp3646 == $tmp3647;
frost$core$Bit $tmp3649 = (frost$core$Bit) {$tmp3648};
bool $tmp3650 = $tmp3649.value;
if ($tmp3650) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp3651 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3652 = *$tmp3651;
*(&local81) = $tmp3652;
org$frostlang$frostc$IR$Value** $tmp3653 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp3654 = *$tmp3653;
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3654));
org$frostlang$frostc$IR$Value* $tmp3655 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3655));
*(&local82) = $tmp3654;
// <no location>
org$frostlang$frostc$IR$Value* $tmp3656 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3656));
org$frostlang$frostc$IR$Value* $tmp3657 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3657));
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block81:;
frost$core$Int $tmp3658 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3659 = $tmp3173.value;
int64_t $tmp3660 = $tmp3658.value;
bool $tmp3661 = $tmp3659 == $tmp3660;
frost$core$Bit $tmp3662 = (frost$core$Bit) {$tmp3661};
bool $tmp3663 = $tmp3662.value;
if ($tmp3663) goto block83; else goto block84;
block83:;
org$frostlang$frostc$Position* $tmp3664 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3665 = *$tmp3664;
*(&local83) = $tmp3665;
frost$core$String** $tmp3666 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3667 = *$tmp3666;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
frost$core$String* $tmp3668 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
*(&local84) = $tmp3667;
org$frostlang$frostc$FixedArray** $tmp3669 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3670 = *$tmp3669;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3670));
org$frostlang$frostc$FixedArray* $tmp3671 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3671));
*(&local85) = $tmp3670;
// <no location>
frost$core$String* $tmp3672 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3672));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3673 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
org$frostlang$frostc$FixedArray* $tmp3674 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3675 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3675));
*(&local84) = ((frost$core$String*) NULL);
goto block1;
block84:;
frost$core$Int $tmp3676 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3677 = $tmp3173.value;
int64_t $tmp3678 = $tmp3676.value;
bool $tmp3679 = $tmp3677 == $tmp3678;
frost$core$Bit $tmp3680 = (frost$core$Bit) {$tmp3679};
bool $tmp3681 = $tmp3680.value;
if ($tmp3681) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp3682 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3683 = *$tmp3682;
*(&local86) = $tmp3683;
org$frostlang$frostc$ASTNode** $tmp3684 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3685 = *$tmp3684;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3685));
org$frostlang$frostc$ASTNode* $tmp3686 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3686));
*(&local87) = $tmp3685;
org$frostlang$frostc$FixedArray** $tmp3687 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3688 = *$tmp3687;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3688));
org$frostlang$frostc$FixedArray* $tmp3689 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3689));
*(&local88) = $tmp3688;
org$frostlang$frostc$FixedArray** $tmp3690 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp3691 = *$tmp3690;
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3691));
org$frostlang$frostc$FixedArray* $tmp3692 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3692));
*(&local89) = $tmp3691;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3693 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3693));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3694 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3694));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3695 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3695));
org$frostlang$frostc$FixedArray* $tmp3696 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3696));
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3697 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3697));
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3698 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3698));
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block87:;
frost$core$Int $tmp3699 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3700 = $tmp3173.value;
int64_t $tmp3701 = $tmp3699.value;
bool $tmp3702 = $tmp3700 == $tmp3701;
frost$core$Bit $tmp3703 = (frost$core$Bit) {$tmp3702};
bool $tmp3704 = $tmp3703.value;
if ($tmp3704) goto block89; else goto block90;
block89:;
org$frostlang$frostc$Position* $tmp3705 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3706 = *$tmp3705;
*(&local90) = $tmp3706;
org$frostlang$frostc$ASTNode** $tmp3707 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3708 = *$tmp3707;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3708));
org$frostlang$frostc$ASTNode* $tmp3709 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3709));
*(&local91) = $tmp3708;
org$frostlang$frostc$FixedArray** $tmp3710 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3711 = *$tmp3710;
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3711));
org$frostlang$frostc$FixedArray* $tmp3712 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3712));
*(&local92) = $tmp3711;
org$frostlang$frostc$MethodDecl$Kind* $tmp3713 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp3714 = *$tmp3713;
*(&local93) = $tmp3714;
frost$core$String** $tmp3715 = (frost$core$String**) (param0->$data + 48);
frost$core$String* $tmp3716 = *$tmp3715;
*(&local94) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3716));
frost$core$String* $tmp3717 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3717));
*(&local94) = $tmp3716;
org$frostlang$frostc$FixedArray** $tmp3718 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3719 = *$tmp3718;
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3719));
org$frostlang$frostc$FixedArray* $tmp3720 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3720));
*(&local95) = $tmp3719;
org$frostlang$frostc$FixedArray** $tmp3721 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3722 = *$tmp3721;
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3722));
org$frostlang$frostc$FixedArray* $tmp3723 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3723));
*(&local96) = $tmp3722;
org$frostlang$frostc$ASTNode** $tmp3724 = (org$frostlang$frostc$ASTNode**) (param0->$data + 72);
org$frostlang$frostc$ASTNode* $tmp3725 = *$tmp3724;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3725));
org$frostlang$frostc$ASTNode* $tmp3726 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3726));
*(&local97) = $tmp3725;
org$frostlang$frostc$FixedArray** $tmp3727 = (org$frostlang$frostc$FixedArray**) (param0->$data + 80);
org$frostlang$frostc$FixedArray* $tmp3728 = *$tmp3727;
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3728));
org$frostlang$frostc$FixedArray* $tmp3729 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3729));
*(&local98) = $tmp3728;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3730 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3730));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3731 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3731));
// <no location>
frost$core$String* $tmp3732 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3732));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3733 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3733));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3734 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3734));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3735 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3735));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3736 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3736));
org$frostlang$frostc$FixedArray* $tmp3737 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3737));
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3738 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3738));
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3739 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3739));
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3740 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3740));
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3741 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3741));
*(&local94) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3742 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3742));
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3743 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3743));
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block90:;
frost$core$Int $tmp3744 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3745 = $tmp3173.value;
int64_t $tmp3746 = $tmp3744.value;
bool $tmp3747 = $tmp3745 == $tmp3746;
frost$core$Bit $tmp3748 = (frost$core$Bit) {$tmp3747};
bool $tmp3749 = $tmp3748.value;
if ($tmp3749) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp3750 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3751 = *$tmp3750;
*(&local99) = $tmp3751;
org$frostlang$frostc$parser$Token$Kind* $tmp3752 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp3753 = *$tmp3752;
*(&local100) = $tmp3753;
org$frostlang$frostc$FixedArray** $tmp3754 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3755 = *$tmp3754;
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3755));
org$frostlang$frostc$FixedArray* $tmp3756 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3756));
*(&local101) = $tmp3755;
org$frostlang$frostc$ASTNode** $tmp3757 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3758 = *$tmp3757;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3758));
org$frostlang$frostc$ASTNode* $tmp3759 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3759));
*(&local102) = $tmp3758;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3760 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3760));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3761 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3761));
org$frostlang$frostc$ASTNode* $tmp3762 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3762));
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3763 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3763));
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block93:;
frost$core$Int $tmp3764 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3765 = $tmp3173.value;
int64_t $tmp3766 = $tmp3764.value;
bool $tmp3767 = $tmp3765 == $tmp3766;
frost$core$Bit $tmp3768 = (frost$core$Bit) {$tmp3767};
bool $tmp3769 = $tmp3768.value;
if ($tmp3769) goto block95; else goto block96;
block95:;
org$frostlang$frostc$Position* $tmp3770 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3771 = *$tmp3770;
*(&local103) = $tmp3771;
goto block1;
block96:;
frost$core$Int $tmp3772 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3773 = $tmp3173.value;
int64_t $tmp3774 = $tmp3772.value;
bool $tmp3775 = $tmp3773 == $tmp3774;
frost$core$Bit $tmp3776 = (frost$core$Bit) {$tmp3775};
bool $tmp3777 = $tmp3776.value;
if ($tmp3777) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp3778 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3779 = *$tmp3778;
*(&local104) = $tmp3779;
org$frostlang$frostc$ASTNode** $tmp3780 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3781 = *$tmp3780;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3781));
org$frostlang$frostc$ASTNode* $tmp3782 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3782));
*(&local105) = $tmp3781;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3783 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3783));
org$frostlang$frostc$ASTNode* $tmp3784 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3784));
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block99:;
frost$core$Int $tmp3785 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3786 = $tmp3173.value;
int64_t $tmp3787 = $tmp3785.value;
bool $tmp3788 = $tmp3786 == $tmp3787;
frost$core$Bit $tmp3789 = (frost$core$Bit) {$tmp3788};
bool $tmp3790 = $tmp3789.value;
if ($tmp3790) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Position* $tmp3791 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3792 = *$tmp3791;
*(&local106) = $tmp3792;
frost$core$String** $tmp3793 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3794 = *$tmp3793;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3794));
frost$core$String* $tmp3795 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3795));
*(&local107) = $tmp3794;
// <no location>
frost$core$String* $tmp3796 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3796));
frost$core$String* $tmp3797 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3797));
*(&local107) = ((frost$core$String*) NULL);
goto block1;
block102:;
frost$core$Int $tmp3798 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3799 = $tmp3173.value;
int64_t $tmp3800 = $tmp3798.value;
bool $tmp3801 = $tmp3799 == $tmp3800;
frost$core$Bit $tmp3802 = (frost$core$Bit) {$tmp3801};
bool $tmp3803 = $tmp3802.value;
if ($tmp3803) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp3804 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3805 = *$tmp3804;
*(&local108) = $tmp3805;
frost$core$String** $tmp3806 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3807 = *$tmp3806;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3807));
frost$core$String* $tmp3808 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3808));
*(&local109) = $tmp3807;
org$frostlang$frostc$ASTNode** $tmp3809 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3810 = *$tmp3809;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3810));
org$frostlang$frostc$ASTNode* $tmp3811 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3811));
*(&local110) = $tmp3810;
// <no location>
frost$core$String* $tmp3812 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3813 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3813));
org$frostlang$frostc$ASTNode* $tmp3814 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3814));
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3815 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3815));
*(&local109) = ((frost$core$String*) NULL);
goto block1;
block105:;
frost$core$Int $tmp3816 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3817 = $tmp3173.value;
int64_t $tmp3818 = $tmp3816.value;
bool $tmp3819 = $tmp3817 == $tmp3818;
frost$core$Bit $tmp3820 = (frost$core$Bit) {$tmp3819};
bool $tmp3821 = $tmp3820.value;
if ($tmp3821) goto block107; else goto block108;
block107:;
org$frostlang$frostc$Position* $tmp3822 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3823 = *$tmp3822;
*(&local111) = $tmp3823;
org$frostlang$frostc$ASTNode** $tmp3824 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3825 = *$tmp3824;
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3825));
org$frostlang$frostc$ASTNode* $tmp3826 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3826));
*(&local112) = $tmp3825;
frost$core$Bit* $tmp3827 = (frost$core$Bit*) (param0->$data + 32);
frost$core$Bit $tmp3828 = *$tmp3827;
*(&local113) = $tmp3828;
org$frostlang$frostc$ASTNode** $tmp3829 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp3830 = *$tmp3829;
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
org$frostlang$frostc$ASTNode* $tmp3831 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
*(&local114) = $tmp3830;
org$frostlang$frostc$ASTNode** $tmp3832 = (org$frostlang$frostc$ASTNode**) (param0->$data + 41);
org$frostlang$frostc$ASTNode* $tmp3833 = *$tmp3832;
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3833));
org$frostlang$frostc$ASTNode* $tmp3834 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3834));
*(&local115) = $tmp3833;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3835 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3835));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3836 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3836));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3837 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3837));
org$frostlang$frostc$ASTNode* $tmp3838 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3838));
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3839 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3839));
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3840 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3840));
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block108:;
frost$core$Int $tmp3841 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3842 = $tmp3173.value;
int64_t $tmp3843 = $tmp3841.value;
bool $tmp3844 = $tmp3842 == $tmp3843;
frost$core$Bit $tmp3845 = (frost$core$Bit) {$tmp3844};
bool $tmp3846 = $tmp3845.value;
if ($tmp3846) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Position* $tmp3847 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3848 = *$tmp3847;
*(&local116) = $tmp3848;
frost$core$Real64* $tmp3849 = (frost$core$Real64*) (param0->$data + 24);
frost$core$Real64 $tmp3850 = *$tmp3849;
*(&local117) = $tmp3850;
goto block1;
block111:;
frost$core$Int $tmp3851 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3852 = $tmp3173.value;
int64_t $tmp3853 = $tmp3851.value;
bool $tmp3854 = $tmp3852 == $tmp3853;
frost$core$Bit $tmp3855 = (frost$core$Bit) {$tmp3854};
bool $tmp3856 = $tmp3855.value;
if ($tmp3856) goto block113; else goto block114;
block113:;
org$frostlang$frostc$Position* $tmp3857 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3858 = *$tmp3857;
*(&local118) = $tmp3858;
frost$core$String** $tmp3859 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3860 = *$tmp3859;
*(&local119) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3860));
frost$core$String* $tmp3861 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3861));
*(&local119) = $tmp3860;
// <no location>
frost$core$String* $tmp3862 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3862));
frost$core$String* $tmp3863 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3863));
*(&local119) = ((frost$core$String*) NULL);
goto block1;
block114:;
frost$core$Int $tmp3864 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3865 = $tmp3173.value;
int64_t $tmp3866 = $tmp3864.value;
bool $tmp3867 = $tmp3865 == $tmp3866;
frost$core$Bit $tmp3868 = (frost$core$Bit) {$tmp3867};
bool $tmp3869 = $tmp3868.value;
if ($tmp3869) goto block116; else goto block117;
block116:;
org$frostlang$frostc$Position* $tmp3870 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3871 = *$tmp3870;
*(&local120) = $tmp3871;
org$frostlang$frostc$ASTNode** $tmp3872 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3873 = *$tmp3872;
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3873));
org$frostlang$frostc$ASTNode* $tmp3874 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3874));
*(&local121) = $tmp3873;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3875 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3875));
org$frostlang$frostc$ASTNode* $tmp3876 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block117:;
frost$core$Int $tmp3877 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3878 = $tmp3173.value;
int64_t $tmp3879 = $tmp3877.value;
bool $tmp3880 = $tmp3878 == $tmp3879;
frost$core$Bit $tmp3881 = (frost$core$Bit) {$tmp3880};
bool $tmp3882 = $tmp3881.value;
if ($tmp3882) goto block119; else goto block120;
block119:;
org$frostlang$frostc$Position* $tmp3883 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3884 = *$tmp3883;
*(&local122) = $tmp3884;
goto block1;
block120:;
frost$core$Int $tmp3885 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3886 = $tmp3173.value;
int64_t $tmp3887 = $tmp3885.value;
bool $tmp3888 = $tmp3886 == $tmp3887;
frost$core$Bit $tmp3889 = (frost$core$Bit) {$tmp3888};
bool $tmp3890 = $tmp3889.value;
if ($tmp3890) goto block122; else goto block123;
block122:;
org$frostlang$frostc$Position* $tmp3891 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3892 = *$tmp3891;
*(&local123) = $tmp3892;
frost$core$String** $tmp3893 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3894 = *$tmp3893;
*(&local124) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3894));
frost$core$String* $tmp3895 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3895));
*(&local124) = $tmp3894;
// <no location>
frost$core$String* $tmp3896 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3896));
frost$core$String* $tmp3897 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3897));
*(&local124) = ((frost$core$String*) NULL);
goto block1;
block123:;
frost$core$Int $tmp3898 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3899 = $tmp3173.value;
int64_t $tmp3900 = $tmp3898.value;
bool $tmp3901 = $tmp3899 == $tmp3900;
frost$core$Bit $tmp3902 = (frost$core$Bit) {$tmp3901};
bool $tmp3903 = $tmp3902.value;
if ($tmp3903) goto block125; else goto block126;
block125:;
org$frostlang$frostc$Position* $tmp3904 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3905 = *$tmp3904;
*(&local125) = $tmp3905;
goto block1;
block126:;
frost$core$Int $tmp3906 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3907 = $tmp3173.value;
int64_t $tmp3908 = $tmp3906.value;
bool $tmp3909 = $tmp3907 == $tmp3908;
frost$core$Bit $tmp3910 = (frost$core$Bit) {$tmp3909};
bool $tmp3911 = $tmp3910.value;
if ($tmp3911) goto block128; else goto block129;
block128:;
org$frostlang$frostc$Position* $tmp3912 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3913 = *$tmp3912;
*(&local126) = $tmp3913;
org$frostlang$frostc$FixedArray** $tmp3914 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3915 = *$tmp3914;
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3915));
org$frostlang$frostc$FixedArray* $tmp3916 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3916));
*(&local127) = $tmp3915;
org$frostlang$frostc$ASTNode** $tmp3917 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3918 = *$tmp3917;
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3918));
org$frostlang$frostc$ASTNode* $tmp3919 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3919));
*(&local128) = $tmp3918;
org$frostlang$frostc$FixedArray** $tmp3920 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp3921 = *$tmp3920;
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3921));
org$frostlang$frostc$FixedArray* $tmp3922 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3922));
*(&local129) = $tmp3921;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3923 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3923));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3924 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3924));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3925 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3925));
org$frostlang$frostc$FixedArray* $tmp3926 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3926));
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3927 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3927));
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3928 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3928));
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block129:;
frost$core$Int $tmp3929 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3930 = $tmp3173.value;
int64_t $tmp3931 = $tmp3929.value;
bool $tmp3932 = $tmp3930 == $tmp3931;
frost$core$Bit $tmp3933 = (frost$core$Bit) {$tmp3932};
bool $tmp3934 = $tmp3933.value;
if ($tmp3934) goto block131; else goto block132;
block131:;
org$frostlang$frostc$Position* $tmp3935 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3936 = *$tmp3935;
*(&local130) = $tmp3936;
org$frostlang$frostc$FixedArray** $tmp3937 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3938 = *$tmp3937;
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3938));
org$frostlang$frostc$FixedArray* $tmp3939 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3939));
*(&local131) = $tmp3938;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3940 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3940));
org$frostlang$frostc$FixedArray* $tmp3941 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3941));
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block132:;
frost$core$Int $tmp3942 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3943 = $tmp3173.value;
int64_t $tmp3944 = $tmp3942.value;
bool $tmp3945 = $tmp3943 == $tmp3944;
frost$core$Bit $tmp3946 = (frost$core$Bit) {$tmp3945};
bool $tmp3947 = $tmp3946.value;
if ($tmp3947) goto block134; else goto block135;
block134:;
org$frostlang$frostc$Position* $tmp3948 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3949 = *$tmp3948;
*(&local132) = $tmp3949;
org$frostlang$frostc$FixedArray** $tmp3950 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3951 = *$tmp3950;
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3951));
org$frostlang$frostc$FixedArray* $tmp3952 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3952));
*(&local133) = $tmp3951;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3953 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3953));
org$frostlang$frostc$FixedArray* $tmp3954 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3954));
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block135:;
frost$core$Int $tmp3955 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3956 = $tmp3173.value;
int64_t $tmp3957 = $tmp3955.value;
bool $tmp3958 = $tmp3956 == $tmp3957;
frost$core$Bit $tmp3959 = (frost$core$Bit) {$tmp3958};
bool $tmp3960 = $tmp3959.value;
if ($tmp3960) goto block137; else goto block138;
block137:;
org$frostlang$frostc$Position* $tmp3961 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3962 = *$tmp3961;
*(&local134) = $tmp3962;
org$frostlang$frostc$FixedArray** $tmp3963 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3964 = *$tmp3963;
*(&local135) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3964));
org$frostlang$frostc$FixedArray* $tmp3965 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3965));
*(&local135) = $tmp3964;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3966 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3966));
org$frostlang$frostc$FixedArray* $tmp3967 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3967));
*(&local135) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block138:;
frost$core$Int $tmp3968 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3969 = $tmp3173.value;
int64_t $tmp3970 = $tmp3968.value;
bool $tmp3971 = $tmp3969 == $tmp3970;
frost$core$Bit $tmp3972 = (frost$core$Bit) {$tmp3971};
bool $tmp3973 = $tmp3972.value;
if ($tmp3973) goto block140; else goto block141;
block140:;
org$frostlang$frostc$Position* $tmp3974 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3975 = *$tmp3974;
*(&local136) = $tmp3975;
frost$core$String** $tmp3976 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3977 = *$tmp3976;
*(&local137) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3977));
frost$core$String* $tmp3978 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3978));
*(&local137) = $tmp3977;
// <no location>
frost$core$String* $tmp3979 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
frost$core$String* $tmp3980 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
*(&local137) = ((frost$core$String*) NULL);
goto block1;
block141:;
frost$core$Int $tmp3981 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3982 = $tmp3173.value;
int64_t $tmp3983 = $tmp3981.value;
bool $tmp3984 = $tmp3982 == $tmp3983;
frost$core$Bit $tmp3985 = (frost$core$Bit) {$tmp3984};
bool $tmp3986 = $tmp3985.value;
if ($tmp3986) goto block143; else goto block144;
block143:;
org$frostlang$frostc$Position* $tmp3987 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3988 = *$tmp3987;
*(&local138) = $tmp3988;
org$frostlang$frostc$FixedArray** $tmp3989 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3990 = *$tmp3989;
*(&local139) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3990));
org$frostlang$frostc$FixedArray* $tmp3991 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3991));
*(&local139) = $tmp3990;
org$frostlang$frostc$ASTNode** $tmp3992 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3993 = *$tmp3992;
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3993));
org$frostlang$frostc$ASTNode* $tmp3994 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3994));
*(&local140) = $tmp3993;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3995 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3995));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3996 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3996));
org$frostlang$frostc$ASTNode* $tmp3997 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3997));
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3998 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3998));
*(&local139) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block144:;
frost$core$Int $tmp3999 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4000 = $tmp3173.value;
int64_t $tmp4001 = $tmp3999.value;
bool $tmp4002 = $tmp4000 == $tmp4001;
frost$core$Bit $tmp4003 = (frost$core$Bit) {$tmp4002};
bool $tmp4004 = $tmp4003.value;
if ($tmp4004) goto block146; else goto block147;
block146:;
org$frostlang$frostc$Position* $tmp4005 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp4006 = *$tmp4005;
*(&local141) = $tmp4006;
frost$core$String** $tmp4007 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp4008 = *$tmp4007;
*(&local142) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4008));
frost$core$String* $tmp4009 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4009));
*(&local142) = $tmp4008;
org$frostlang$frostc$ASTNode** $tmp4010 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp4011 = *$tmp4010;
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4011));
org$frostlang$frostc$ASTNode* $tmp4012 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4012));
*(&local143) = $tmp4011;
// <no location>
frost$core$String* $tmp4013 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4013));
// <no location>
org$frostlang$frostc$ASTNode* $tmp4014 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4014));
org$frostlang$frostc$ASTNode* $tmp4015 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4015));
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4016 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4016));
*(&local142) = ((frost$core$String*) NULL);
goto block1;
block147:;
frost$core$Int $tmp4017 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4018 = $tmp3173.value;
int64_t $tmp4019 = $tmp4017.value;
bool $tmp4020 = $tmp4018 == $tmp4019;
frost$core$Bit $tmp4021 = (frost$core$Bit) {$tmp4020};
bool $tmp4022 = $tmp4021.value;
if ($tmp4022) goto block149; else goto block150;
block149:;
org$frostlang$frostc$Position* $tmp4023 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp4024 = *$tmp4023;
*(&local144) = $tmp4024;
org$frostlang$frostc$expression$Unary$Operator* $tmp4025 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp4026 = *$tmp4025;
*(&local145) = $tmp4026;
org$frostlang$frostc$ASTNode** $tmp4027 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp4028 = *$tmp4027;
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4028));
org$frostlang$frostc$ASTNode* $tmp4029 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4029));
*(&local146) = $tmp4028;
// <no location>
org$frostlang$frostc$ASTNode* $tmp4030 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
org$frostlang$frostc$ASTNode* $tmp4031 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4031));
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block150:;
frost$core$Int $tmp4032 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4033 = $tmp3173.value;
int64_t $tmp4034 = $tmp4032.value;
bool $tmp4035 = $tmp4033 == $tmp4034;
frost$core$Bit $tmp4036 = (frost$core$Bit) {$tmp4035};
bool $tmp4037 = $tmp4036.value;
if ($tmp4037) goto block152; else goto block153;
block152:;
org$frostlang$frostc$Position* $tmp4038 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp4039 = *$tmp4038;
*(&local147) = $tmp4039;
org$frostlang$frostc$ASTNode** $tmp4040 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp4041 = *$tmp4040;
*(&local148) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
org$frostlang$frostc$ASTNode* $tmp4042 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4042));
*(&local148) = $tmp4041;
// <no location>
org$frostlang$frostc$ASTNode* $tmp4043 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4043));
org$frostlang$frostc$ASTNode* $tmp4044 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4044));
*(&local148) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block153:;
frost$core$Int $tmp4045 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4046 = $tmp3173.value;
int64_t $tmp4047 = $tmp4045.value;
bool $tmp4048 = $tmp4046 == $tmp4047;
frost$core$Bit $tmp4049 = (frost$core$Bit) {$tmp4048};
bool $tmp4050 = $tmp4049.value;
if ($tmp4050) goto block155; else goto block156;
block155:;
org$frostlang$frostc$Position* $tmp4051 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp4052 = *$tmp4051;
*(&local149) = $tmp4052;
org$frostlang$frostc$FixedArray** $tmp4053 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp4054 = *$tmp4053;
*(&local150) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4054));
org$frostlang$frostc$FixedArray* $tmp4055 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4055));
*(&local150) = $tmp4054;
org$frostlang$frostc$ASTNode** $tmp4056 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp4057 = *$tmp4056;
*(&local151) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4057));
org$frostlang$frostc$ASTNode* $tmp4058 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4058));
*(&local151) = $tmp4057;
// <no location>
org$frostlang$frostc$FixedArray* $tmp4059 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4059));
// <no location>
org$frostlang$frostc$ASTNode* $tmp4060 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4060));
org$frostlang$frostc$ASTNode* $tmp4061 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4061));
*(&local151) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4062 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4062));
*(&local150) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block156:;
frost$core$Int $tmp4063 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4064 = $tmp3173.value;
int64_t $tmp4065 = $tmp4063.value;
bool $tmp4066 = $tmp4064 == $tmp4065;
frost$core$Bit $tmp4067 = (frost$core$Bit) {$tmp4066};
bool $tmp4068 = $tmp4067.value;
if ($tmp4068) goto block158; else goto block159;
block158:;
org$frostlang$frostc$Position* $tmp4069 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp4070 = *$tmp4069;
*(&local152) = $tmp4070;
frost$core$String** $tmp4071 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp4072 = *$tmp4071;
*(&local153) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4072));
frost$core$String* $tmp4073 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4073));
*(&local153) = $tmp4072;
// <no location>
frost$core$String* $tmp4074 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4074));
frost$core$String* $tmp4075 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4075));
*(&local153) = ((frost$core$String*) NULL);
goto block1;
block159:;
frost$core$Int $tmp4076 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4077 = $tmp3173.value;
int64_t $tmp4078 = $tmp4076.value;
bool $tmp4079 = $tmp4077 == $tmp4078;
frost$core$Bit $tmp4080 = (frost$core$Bit) {$tmp4079};
bool $tmp4081 = $tmp4080.value;
if ($tmp4081) goto block161; else goto block162;
block161:;
org$frostlang$frostc$Position* $tmp4082 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp4083 = *$tmp4082;
*(&local154) = $tmp4083;
org$frostlang$frostc$Variable$Kind* $tmp4084 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp4085 = *$tmp4084;
*(&local155) = $tmp4085;
org$frostlang$frostc$FixedArray** $tmp4086 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp4087 = *$tmp4086;
*(&local156) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4087));
org$frostlang$frostc$FixedArray* $tmp4088 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4088));
*(&local156) = $tmp4087;
// <no location>
org$frostlang$frostc$FixedArray* $tmp4089 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4089));
org$frostlang$frostc$FixedArray* $tmp4090 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4090));
*(&local156) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block162:;
frost$core$Int $tmp4091 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4092 = $tmp3173.value;
int64_t $tmp4093 = $tmp4091.value;
bool $tmp4094 = $tmp4092 == $tmp4093;
frost$core$Bit $tmp4095 = (frost$core$Bit) {$tmp4094};
bool $tmp4096 = $tmp4095.value;
if ($tmp4096) goto block164; else goto block165;
block164:;
org$frostlang$frostc$Position* $tmp4097 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp4098 = *$tmp4097;
*(&local157) = $tmp4098;
org$frostlang$frostc$FixedArray** $tmp4099 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp4100 = *$tmp4099;
*(&local158) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4100));
org$frostlang$frostc$FixedArray* $tmp4101 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4101));
*(&local158) = $tmp4100;
org$frostlang$frostc$FixedArray** $tmp4102 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp4103 = *$tmp4102;
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4103));
org$frostlang$frostc$FixedArray* $tmp4104 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4104));
*(&local159) = $tmp4103;
// <no location>
org$frostlang$frostc$FixedArray* $tmp4105 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4105));
// <no location>
org$frostlang$frostc$FixedArray* $tmp4106 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4106));
org$frostlang$frostc$FixedArray* $tmp4107 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4107));
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4108 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4108));
*(&local158) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block165:;
frost$core$Int $tmp4109 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4110 = $tmp3173.value;
int64_t $tmp4111 = $tmp4109.value;
bool $tmp4112 = $tmp4110 == $tmp4111;
frost$core$Bit $tmp4113 = (frost$core$Bit) {$tmp4112};
bool $tmp4114 = $tmp4113.value;
if ($tmp4114) goto block167; else goto block1;
block167:;
org$frostlang$frostc$Position* $tmp4115 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp4116 = *$tmp4115;
*(&local160) = $tmp4116;
frost$core$String** $tmp4117 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp4118 = *$tmp4117;
*(&local161) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4118));
frost$core$String* $tmp4119 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4119));
*(&local161) = $tmp4118;
org$frostlang$frostc$ASTNode** $tmp4120 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp4121 = *$tmp4120;
*(&local162) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4121));
org$frostlang$frostc$ASTNode* $tmp4122 = *(&local162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4122));
*(&local162) = $tmp4121;
org$frostlang$frostc$FixedArray** $tmp4123 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp4124 = *$tmp4123;
*(&local163) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4124));
org$frostlang$frostc$FixedArray* $tmp4125 = *(&local163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4125));
*(&local163) = $tmp4124;
// <no location>
frost$core$String* $tmp4126 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4126));
// <no location>
org$frostlang$frostc$ASTNode* $tmp4127 = *(&local162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4127));
// <no location>
org$frostlang$frostc$FixedArray* $tmp4128 = *(&local163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4128));
org$frostlang$frostc$FixedArray* $tmp4129 = *(&local163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4129));
*(&local163) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4130 = *(&local162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4130));
*(&local162) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4131 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4131));
*(&local161) = ((frost$core$String*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, frost$core$String* param4, org$frostlang$frostc$ASTNode* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4132 = &param0->$rawValue;
*$tmp4132 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4133 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4133 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4134 = (frost$core$String**) (param0->$data + 24);
*$tmp4134 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp4135 = (frost$core$String**) (param0->$data + 32);
*$tmp4135 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4136 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp4136 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4137 = &param0->$rawValue;
*$tmp4137 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4138 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4138 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp4139 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp4139 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4140 = &param0->$rawValue;
*$tmp4140 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4141 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4141 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4142 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4142 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4143 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4143 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4144 = &param0->$rawValue;
*$tmp4144 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4145 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4145 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4146 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4146 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4147 = &param0->$rawValue;
*$tmp4147 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4148 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4148 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$expression$Binary$Operator param4, org$frostlang$frostc$ASTNode* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4149 = &param0->$rawValue;
*$tmp4149 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4150 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4150 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4151 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4151 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$expression$Binary$Operator* $tmp4152 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 32);
*$tmp4152 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4153 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp4153 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$Bit param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4154 = &param0->$rawValue;
*$tmp4154 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4155 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4155 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Bit* $tmp4156 = (frost$core$Bit*) (param0->$data + 24);
*$tmp4156 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4157 = &param0->$rawValue;
*$tmp4157 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4158 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4158 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4159 = (frost$core$String**) (param0->$data + 24);
*$tmp4159 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4160 = &param0->$rawValue;
*$tmp4160 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4161 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4161 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4162 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4162 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4163 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4163 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4164 = &param0->$rawValue;
*$tmp4164 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4165 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4165 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4166 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4166 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp4167 = (frost$core$String**) (param0->$data + 32);
*$tmp4167 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp4168 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp4168 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ChoiceCase$frost$core$Int(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4169 = &param0->$rawValue;
*$tmp4169 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4170 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4170 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4171 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4171 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp4172 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 32);
*$tmp4172 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4173 = (frost$core$Int*) (param0->$data + 40);
*$tmp4173 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ClassDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$FixedArray* param9) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4174 = &param0->$rawValue;
*$tmp4174 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4175 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4175 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4176 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4176 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4177 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4177 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$ClassDecl$Kind* $tmp4178 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 40);
*$tmp4178 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp4179 = (frost$core$String**) (param0->$data + 48);
*$tmp4179 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp4180 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp4180 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp4181 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
*$tmp4181 = param8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$FixedArray** $tmp4182 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
*$tmp4182 = param9;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4183 = &param0->$rawValue;
*$tmp4183 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4184 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4184 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4185 = (frost$core$String**) (param0->$data + 24);
*$tmp4185 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4186 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4186 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4187 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp4187 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4188 = &param0->$rawValue;
*$tmp4188 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4189 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4189 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4190 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4190 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp4191 = (frost$core$String**) (param0->$data + 32);
*$tmp4191 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4192 = &param0->$rawValue;
*$tmp4192 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4193 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4193 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4194 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4194 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp4195 = (frost$core$String**) (param0->$data + 32);
*$tmp4195 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp4196 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp4196 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4197 = &param0->$rawValue;
*$tmp4197 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4198 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4198 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4199 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4199 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4200 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4200 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4201 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp4201 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$FixedArray* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4202 = &param0->$rawValue;
*$tmp4202 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FixedArray** $tmp4203 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
*$tmp4203 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$FixedArray* param6) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4204 = &param0->$rawValue;
*$tmp4204 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4205 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4205 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4206 = (frost$core$String**) (param0->$data + 24);
*$tmp4206 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4207 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4207 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4208 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp4208 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$FixedArray** $tmp4209 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp4209 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4210 = &param0->$rawValue;
*$tmp4210 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4211 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4211 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4212 = (frost$core$String**) (param0->$data + 24);
*$tmp4212 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4213 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4213 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4214 = &param0->$rawValue;
*$tmp4214 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4215 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4215 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4216 = (frost$core$String**) (param0->$data + 24);
*$tmp4216 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4217 = &param0->$rawValue;
*$tmp4217 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4218 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4218 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4219 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4219 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4220 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4220 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4221 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp4221 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$UInt64 param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4222 = &param0->$rawValue;
*$tmp4222 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4223 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4223 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$UInt64* $tmp4224 = (frost$core$UInt64*) (param0->$data + 24);
*$tmp4224 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4225 = &param0->$rawValue;
*$tmp4225 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4226 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4226 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp4227 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp4227 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4228 = &param0->$rawValue;
*$tmp4228 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4229 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4229 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4230 = (frost$core$String**) (param0->$data + 24);
*$tmp4230 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4231 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4231 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$FixedArray* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4232 = &param0->$rawValue;
*$tmp4232 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4233 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4233 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4234 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4234 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4235 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4235 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp4236 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp4236 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$ASTNode* param9, org$frostlang$frostc$FixedArray* param10) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4237 = &param0->$rawValue;
*$tmp4237 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4238 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4238 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4239 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4239 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4240 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4240 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$MethodDecl$Kind* $tmp4241 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 40);
*$tmp4241 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp4242 = (frost$core$String**) (param0->$data + 48);
*$tmp4242 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp4243 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp4243 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp4244 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
*$tmp4244 = param8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$ASTNode** $tmp4245 = (org$frostlang$frostc$ASTNode**) (param0->$data + 72);
*$tmp4245 = param9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp4246 = (org$frostlang$frostc$FixedArray**) (param0->$data + 80);
*$tmp4246 = param10;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4247 = &param0->$rawValue;
*$tmp4247 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4248 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4248 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$parser$Token$Kind* $tmp4249 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
*$tmp4249 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4250 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4250 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4251 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp4251 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4252 = &param0->$rawValue;
*$tmp4252 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4253 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4253 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4254 = (frost$core$String**) (param0->$data + 24);
*$tmp4254 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4255 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4255 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$Bit param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$ASTNode* param6) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4256 = &param0->$rawValue;
*$tmp4256 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4257 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4257 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4258 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4258 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Bit* $tmp4259 = (frost$core$Bit*) (param0->$data + 32);
*$tmp4259 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4260 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
*$tmp4260 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$ASTNode** $tmp4261 = (org$frostlang$frostc$ASTNode**) (param0->$data + 41);
*$tmp4261 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Real64(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$Real64 param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4262 = &param0->$rawValue;
*$tmp4262 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4263 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4263 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Real64* $tmp4264 = (frost$core$Real64*) (param0->$data + 24);
*$tmp4264 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4265 = &param0->$rawValue;
*$tmp4265 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4266 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4266 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4267 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4267 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4268 = &param0->$rawValue;
*$tmp4268 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4269 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4269 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp4270 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp4270 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4271 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4271 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp4272 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp4272 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4273 = &param0->$rawValue;
*$tmp4273 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4274 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4274 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp4275 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp4275 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4276 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4276 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4277 = &param0->$rawValue;
*$tmp4277 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4278 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4278 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4279 = (frost$core$String**) (param0->$data + 24);
*$tmp4279 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4280 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4280 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$expression$Unary$Operator param3, org$frostlang$frostc$ASTNode* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4281 = &param0->$rawValue;
*$tmp4281 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4282 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4282 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$expression$Unary$Operator* $tmp4283 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 24);
*$tmp4283 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4284 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4284 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable$Kind param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4285 = &param0->$rawValue;
*$tmp4285 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4286 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4286 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Variable$Kind* $tmp4287 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 24);
*$tmp4287 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4288 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4288 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4289 = &param0->$rawValue;
*$tmp4289 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4290 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4290 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp4291 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp4291 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4292 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4292 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4293 = &param0->$rawValue;
*$tmp4293 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4294 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4294 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4295 = (frost$core$String**) (param0->$data + 24);
*$tmp4295 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4296 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4296 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp4297 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp4297 = param5;
return;

}

