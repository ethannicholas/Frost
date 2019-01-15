#include "org/frostlanguage/frostc/expression/Binary.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "org/frostlanguage/frostc/Annotations.h"
#include "org/frostlanguage/frostc/Pair.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Type.h"
#include "org/frostlanguage/frostc/parser/Token/Kind.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/IR/Statement/ID.h"
#include "org/frostlanguage/frostc/SymbolTable.h"
#include "org/frostlanguage/frostc/Symbol/Kind.h"
#include "org/frostlanguage/frostc/Position.h"
#include "frost/collections/ListView.h"
#include "org/frostlanguage/frostc/expression/Call.h"
#include "org/frostlanguage/frostc/Methods.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "org/frostlanguage/frostc/expression/Binary/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlanguage/frostc/MethodRef.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/UInt64.h"
#include "frost/core/Equatable.h"
#include "org/frostlanguage/frostc/Scanner.h"
#include "frost/core/Weak.h"
#include "org/frostlanguage/frostc/expression/And.h"
#include "org/frostlanguage/frostc/expression/Or.h"
#include "org/frostlanguage/frostc/IR.h"
#include "org/frostlanguage/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlanguage$frostc$expression$Binary$class_type org$frostlanguage$frostc$expression$Binary$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$expression$Binary$cleanup} };

typedef frost$core$Bit (*$fn77)(org$frostlanguage$frostc$expression$Binary$_Closure2*, org$frostlanguage$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn81)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$core$Bit (*$fn191)(org$frostlanguage$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn195)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn231)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn235)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn240)(frost$collections$Iterator*);
typedef org$frostlanguage$frostc$Position (*$fn259)(org$frostlanguage$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn319)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn323)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn328)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn336)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn340)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn345)(frost$collections$Iterator*);
typedef org$frostlanguage$frostc$Position (*$fn428)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn444)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn460)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn471)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn484)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn495)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn505)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn514)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn525)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn539)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn553)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn567)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn581)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn599)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn612)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn625)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn638)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn651)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn655)(org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn670)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn756)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn777)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn792)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn811)(frost$collections$CollectionView*);
typedef org$frostlanguage$frostc$Type* (*$fn907)(org$frostlanguage$frostc$IR$Value*);
typedef org$frostlanguage$frostc$Type* (*$fn920)(org$frostlanguage$frostc$IR$Value*);
typedef org$frostlanguage$frostc$Type* (*$fn927)(org$frostlanguage$frostc$IR$Value*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn947)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef org$frostlanguage$frostc$Type* (*$fn967)(org$frostlanguage$frostc$IR$Value*);
typedef org$frostlanguage$frostc$Type* (*$fn975)(org$frostlanguage$frostc$IR$Value*);
typedef frost$core$String* (*$fn982)(org$frostlanguage$frostc$Compiler$TypeContext*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79", 42, 9062433169747381129, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x69\x6c\x65\x64\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x63\x61\x73\x74\x20", 21, -924378024990471136, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 138031278, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20", 20, -3867798768884550044, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27\x2c\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 38, 4333428435750879609, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s716 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x66\x6f\x6c\x64\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x6c\x65\x66\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x6f\x70\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64\x2c\x20\x72\x69\x67\x68\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 285, -22222154800612234, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s834 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s867 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27", 14, -1314037361094274531, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x6f\x6e\x20", 5, 14602569225, NULL };
static frost$core$String $s970 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s972 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s992 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s993 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6c\x65\x66\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x6f\x70\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64\x2c\x20\x72\x69\x67\x68\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 383, 3719177701253508283, NULL };

frost$core$Bit org$frostlanguage$frostc$expression$Binary$$anonymous3$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit(org$frostlanguage$frostc$MethodDecl* param0) {

// line 88
org$frostlanguage$frostc$Annotations** $tmp2 = &param0->annotations;
org$frostlanguage$frostc$Annotations* $tmp3 = *$tmp2;
frost$core$Bit $tmp4 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3);
return $tmp4;

}
org$frostlanguage$frostc$Pair* org$frostlanguage$frostc$expression$Binary$findOverloadedOperator$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlanguage$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Type* param1, org$frostlanguage$frostc$parser$Token$Kind param2, org$frostlanguage$frostc$ASTNode* param3, org$frostlanguage$frostc$Compiler$TypeContext* param4) {

org$frostlanguage$frostc$ClassDecl* local0 = NULL;
org$frostlanguage$frostc$IR$Value* local1 = NULL;
org$frostlanguage$frostc$Symbol* local2 = NULL;
frost$collections$Array* local3 = NULL;
frost$core$Bit local4;
frost$collections$Array* local5 = NULL;
org$frostlanguage$frostc$Pair* local6 = NULL;
org$frostlanguage$frostc$Pair* local7 = NULL;
org$frostlanguage$frostc$Type* local8 = NULL;
org$frostlanguage$frostc$ClassDecl* local9 = NULL;
frost$collections$Array* local10 = NULL;
frost$collections$Array* local11 = NULL;
org$frostlanguage$frostc$Pair* local12 = NULL;
org$frostlanguage$frostc$Pair* local13 = NULL;
// line 20
frost$core$Bit $tmp5 = org$frostlanguage$frostc$Type$get_isClass$R$frost$core$Bit(param1);
frost$core$Bit $tmp6 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp5);
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// line 21
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Pair*) NULL)));
return ((org$frostlanguage$frostc$Pair*) NULL);
block2:;
// line 23
org$frostlanguage$frostc$ClassDecl* $tmp8 = org$frostlanguage$frostc$Compiler$getClass$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$ClassDecl$Q(param0, param1);
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
org$frostlanguage$frostc$ClassDecl* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// unreffing REF($10:org.frostlanguage.frostc.ClassDecl?)
// line 24
org$frostlanguage$frostc$ClassDecl* $tmp10 = *(&local0);
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit($tmp10 == NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block3:;
// line 25
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Pair*) NULL)));
org$frostlanguage$frostc$ClassDecl* $tmp13 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing leftCl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((org$frostlanguage$frostc$Pair*) NULL);
block4:;
// line 27
org$frostlanguage$frostc$IR$Value* $tmp14 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp15 = (frost$core$Int64) {7};
frost$core$Int64 $tmp16 = (frost$core$Int64) {18446744073709551615};
org$frostlanguage$frostc$IR$Statement$ID $tmp17 = org$frostlanguage$frostc$IR$Statement$ID$init$frost$core$Int64($tmp16);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Statement$ID$org$frostlanguage$frostc$Type($tmp14, $tmp15, $tmp17, param1);
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlanguage$frostc$IR$Value* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local1) = $tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($37:org.frostlanguage.frostc.IR.Value)
// line 28
org$frostlanguage$frostc$ClassDecl* $tmp19 = *(&local0);
org$frostlanguage$frostc$SymbolTable* $tmp20 = org$frostlanguage$frostc$Compiler$getSymbolTable$org$frostlanguage$frostc$ClassDecl$R$org$frostlanguage$frostc$SymbolTable(param0, $tmp19);
frost$core$String* $tmp21 = org$frostlanguage$frostc$Compiler$operatorName$org$frostlanguage$frostc$parser$Token$Kind$R$frost$core$String(param2);
org$frostlanguage$frostc$Symbol* $tmp22 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp20, $tmp21);
*(&local2) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
org$frostlanguage$frostc$Symbol* $tmp23 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local2) = $tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($57:org.frostlanguage.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($55:org.frostlanguage.frostc.SymbolTable)
// line 29
org$frostlanguage$frostc$Symbol* $tmp24 = *(&local2);
frost$core$Bit $tmp25 = frost$core$Bit$init$builtin_bit($tmp24 != NULL);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block5; else goto block6;
block5:;
// line 30
frost$collections$Array* $tmp27 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp28 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp27, $tmp28);
frost$collections$Array$add$frost$collections$Array$T($tmp27, ((frost$core$Object*) param3));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$collections$Array* $tmp29 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local3) = $tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($81:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 32
org$frostlanguage$frostc$Symbol* $tmp30 = *(&local2);
org$frostlanguage$frostc$Symbol$Kind* $tmp31 = &$tmp30->kind;
org$frostlanguage$frostc$Symbol$Kind $tmp32 = *$tmp31;
frost$core$Int64 $tmp33 = $tmp32.$rawValue;
frost$core$Int64 $tmp34 = (frost$core$Int64) {5};
frost$core$Bit $tmp35 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp33, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block8; else goto block9;
block8:;
// line 34
org$frostlanguage$frostc$Symbol* $tmp37 = *(&local2);
org$frostlanguage$frostc$Annotations** $tmp38 = &((org$frostlanguage$frostc$MethodDecl*) $tmp37)->annotations;
org$frostlanguage$frostc$Annotations* $tmp39 = *$tmp38;
frost$core$Bit $tmp40 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp39);
frost$core$Bit $tmp41 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp40);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block12; else goto block13;
block12:;
*(&local4) = $tmp41;
goto block14;
block13:;
frost$core$Bit $tmp43 = org$frostlanguage$frostc$Type$get_isClassLiteral$R$frost$core$Bit(param1);
*(&local4) = $tmp43;
goto block14;
block14:;
frost$core$Bit $tmp44 = *(&local4);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block10; else goto block11;
block10:;
// line 35
frost$collections$Array* $tmp46 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp46);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$collections$Array* $tmp47 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local5) = $tmp46;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($126:frost.collections.Array<org.frostlanguage.frostc.MethodDecl>)
// line 36
frost$collections$Array* $tmp48 = *(&local5);
org$frostlanguage$frostc$Symbol* $tmp49 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp48, ((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl*) $tmp49)));
// line 37
org$frostlanguage$frostc$Position $tmp50 = org$frostlanguage$frostc$Position$init();
org$frostlanguage$frostc$IR$Value* $tmp51 = *(&local1);
frost$collections$Array* $tmp52 = *(&local5);
frost$collections$Array* $tmp53 = *(&local3);
org$frostlanguage$frostc$Pair* $tmp54 = org$frostlanguage$frostc$expression$Call$findBestMethod$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlanguage$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlanguage$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp50, $tmp51, ((frost$collections$ListView*) $tmp52), ((frost$collections$ListView*) $tmp53), param4);
*(&local6) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlanguage$frostc$Pair* $tmp55 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local6) = $tmp54;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
// unreffing REF($154:org.frostlanguage.frostc.Pair<frost.collections.ListView<org.frostlanguage.frostc.MethodRef>, frost.core.Int64>?)
// line 39
org$frostlanguage$frostc$Pair* $tmp56 = *(&local6);
frost$core$Bit $tmp57 = frost$core$Bit$init$builtin_bit($tmp56 != NULL);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block15; else goto block16;
block15:;
// line 40
org$frostlanguage$frostc$Pair* $tmp59 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
org$frostlanguage$frostc$Pair* $tmp60 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing result
*(&local6) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$collections$Array* $tmp61 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing list
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp62 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing args
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Symbol* $tmp63 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// unreffing methods
*(&local2) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp64 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing leftCl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp59;
block16:;
org$frostlanguage$frostc$Pair* $tmp66 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing result
*(&local6) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$collections$Array* $tmp67 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing list
*(&local5) = ((frost$collections$Array*) NULL);
goto block11;
block11:;
goto block7;
block9:;
frost$core$Int64 $tmp68 = (frost$core$Int64) {6};
frost$core$Bit $tmp69 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp33, $tmp68);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block17; else goto block18;
block17:;
// line 45
org$frostlanguage$frostc$Position $tmp71 = org$frostlanguage$frostc$Position$init();
org$frostlanguage$frostc$IR$Value* $tmp72 = *(&local1);
org$frostlanguage$frostc$Symbol* $tmp73 = *(&local2);
org$frostlanguage$frostc$FixedArray** $tmp74 = &((org$frostlanguage$frostc$Methods*) $tmp73)->methods;
org$frostlanguage$frostc$FixedArray* $tmp75 = *$tmp74;
org$frostlanguage$frostc$expression$Binary$_Closure2* $tmp76 = (org$frostlanguage$frostc$expression$Binary$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$expression$Binary$_Closure2$class);
org$frostlanguage$frostc$expression$Binary$_Closure2$init$org$frostlanguage$frostc$Type($tmp76, param1);
frost$core$MutableMethod* $tmp78 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp78, ((frost$core$Int8*) org$frostlanguage$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit), ((frost$core$Object*) $tmp76));
ITable* $tmp79 = ((frost$collections$ListView*) $tmp75)->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp79 = $tmp79->next;
}
$fn81 $tmp80 = $tmp79->methods[4];
frost$collections$ListView* $tmp82 = $tmp80(((frost$collections$ListView*) $tmp75), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp78)));
frost$collections$Array* $tmp83 = *(&local3);
org$frostlanguage$frostc$Pair* $tmp84 = org$frostlanguage$frostc$expression$Call$findBestMethod$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlanguage$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlanguage$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp71, $tmp72, $tmp82, ((frost$collections$ListView*) $tmp83), param4);
*(&local7) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
org$frostlanguage$frostc$Pair* $tmp85 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local7) = $tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing REF($245:org.frostlanguage.frostc.Pair<frost.collections.ListView<org.frostlanguage.frostc.MethodRef>, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($241:frost.collections.ListView<frost.collections.ListView.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing REF($234:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($231:org.frostlanguage.frostc.expression.Binary._Closure2)
// line 48
org$frostlanguage$frostc$Pair* $tmp86 = *(&local7);
frost$core$Bit $tmp87 = frost$core$Bit$init$builtin_bit($tmp86 != NULL);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block19; else goto block20;
block19:;
// line 49
org$frostlanguage$frostc$Pair* $tmp89 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
org$frostlanguage$frostc$Pair* $tmp90 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing result
*(&local7) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$collections$Array* $tmp91 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing args
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Symbol* $tmp92 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing methods
*(&local2) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp93 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp94 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing leftCl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp89;
block20:;
org$frostlanguage$frostc$Pair* $tmp95 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// unreffing result
*(&local7) = ((org$frostlanguage$frostc$Pair*) NULL);
goto block7;
block18:;
// line 53
frost$core$Bit $tmp96 = frost$core$Bit$init$builtin_bit(false);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp98 = (frost$core$Int64) {53};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s99, $tmp98);
abort(); // unreachable
block21:;
goto block7;
block7:;
frost$collections$Array* $tmp100 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing args
*(&local3) = ((frost$collections$Array*) NULL);
goto block6;
block6:;
// line 59
org$frostlanguage$frostc$Type* $tmp101 = org$frostlanguage$frostc$Compiler$preferredType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type$Q(param0, param3);
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
org$frostlanguage$frostc$Type* $tmp102 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local8) = $tmp101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($322:org.frostlanguage.frostc.Type?)
// line 60
org$frostlanguage$frostc$Type* $tmp103 = *(&local8);
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit($tmp103 == NULL);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block23; else goto block24;
block23:;
// line 61
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Pair*) NULL)));
org$frostlanguage$frostc$Type* $tmp106 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing rightType
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Symbol* $tmp107 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing methods
*(&local2) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp108 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing leftCl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((org$frostlanguage$frostc$Pair*) NULL);
block24:;
// line 63
org$frostlanguage$frostc$Type* $tmp110 = *(&local8);
frost$core$Bit $tmp111 = org$frostlanguage$frostc$Type$get_isClass$R$frost$core$Bit($tmp110);
frost$core$Bit $tmp112 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block25; else goto block26;
block25:;
// line 64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Pair*) NULL)));
org$frostlanguage$frostc$Type* $tmp114 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing rightType
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Symbol* $tmp115 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing methods
*(&local2) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp116 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing leftCl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((org$frostlanguage$frostc$Pair*) NULL);
block26:;
// line 66
org$frostlanguage$frostc$Type* $tmp118 = *(&local8);
org$frostlanguage$frostc$ClassDecl* $tmp119 = org$frostlanguage$frostc$Compiler$getClass$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$ClassDecl$Q(param0, $tmp118);
*(&local9) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
org$frostlanguage$frostc$ClassDecl* $tmp120 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local9) = $tmp119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing REF($397:org.frostlanguage.frostc.ClassDecl?)
// line 67
org$frostlanguage$frostc$ClassDecl* $tmp121 = *(&local9);
frost$core$Bit $tmp122 = frost$core$Bit$init$builtin_bit($tmp121 == NULL);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block27; else goto block28;
block27:;
// line 68
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Pair*) NULL)));
org$frostlanguage$frostc$ClassDecl* $tmp124 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing rightCl
*(&local9) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$Type* $tmp125 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing rightType
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Symbol* $tmp126 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing methods
*(&local2) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp128 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing leftCl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((org$frostlanguage$frostc$Pair*) NULL);
block28:;
// line 70
org$frostlanguage$frostc$ClassDecl* $tmp129 = *(&local9);
org$frostlanguage$frostc$SymbolTable* $tmp130 = org$frostlanguage$frostc$Compiler$getSymbolTable$org$frostlanguage$frostc$ClassDecl$R$org$frostlanguage$frostc$SymbolTable(param0, $tmp129);
frost$core$String* $tmp131 = org$frostlanguage$frostc$Compiler$operatorName$org$frostlanguage$frostc$parser$Token$Kind$R$frost$core$String(param2);
org$frostlanguage$frostc$Symbol* $tmp132 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp130, $tmp131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
org$frostlanguage$frostc$Symbol* $tmp133 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local2) = $tmp132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing REF($448:org.frostlanguage.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($447:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($446:org.frostlanguage.frostc.SymbolTable)
// line 71
org$frostlanguage$frostc$Symbol* $tmp134 = *(&local2);
frost$core$Bit $tmp135 = frost$core$Bit$init$builtin_bit($tmp134 == NULL);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block29; else goto block30;
block29:;
// line 72
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Pair*) NULL)));
org$frostlanguage$frostc$ClassDecl* $tmp137 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// unreffing rightCl
*(&local9) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$Type* $tmp138 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
// unreffing rightType
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Symbol* $tmp139 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
// unreffing methods
*(&local2) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp140 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing leftCl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((org$frostlanguage$frostc$Pair*) NULL);
block30:;
// line 74
frost$collections$Array* $tmp142 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp143 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp142, $tmp143);
org$frostlanguage$frostc$ASTNode* $tmp144 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp145 = (frost$core$Int64) {26};
org$frostlanguage$frostc$Position $tmp146 = org$frostlanguage$frostc$Position$init();
org$frostlanguage$frostc$IR$Value* $tmp147 = *(&local1);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp144, $tmp145, $tmp146, $tmp147);
frost$collections$Array$add$frost$collections$Array$T($tmp142, ((frost$core$Object*) $tmp144));
frost$collections$Array$add$frost$collections$Array$T($tmp142, ((frost$core$Object*) param3));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$collections$Array* $tmp148 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local10) = $tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing REF($505:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($500:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 75
org$frostlanguage$frostc$Symbol* $tmp149 = *(&local2);
org$frostlanguage$frostc$Symbol$Kind* $tmp150 = &$tmp149->kind;
org$frostlanguage$frostc$Symbol$Kind $tmp151 = *$tmp150;
frost$core$Int64 $tmp152 = $tmp151.$rawValue;
frost$core$Int64 $tmp153 = (frost$core$Int64) {5};
frost$core$Bit $tmp154 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp152, $tmp153);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block32; else goto block33;
block32:;
// line 77
org$frostlanguage$frostc$Symbol* $tmp156 = *(&local2);
org$frostlanguage$frostc$Annotations** $tmp157 = &((org$frostlanguage$frostc$MethodDecl*) $tmp156)->annotations;
org$frostlanguage$frostc$Annotations* $tmp158 = *$tmp157;
frost$core$Bit $tmp159 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp158);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block34; else goto block35;
block34:;
// line 78
frost$collections$Array* $tmp161 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp161);
*(&local11) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
frost$collections$Array* $tmp162 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local11) = $tmp161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// unreffing REF($547:frost.collections.Array<org.frostlanguage.frostc.MethodDecl>)
// line 79
frost$collections$Array* $tmp163 = *(&local11);
org$frostlanguage$frostc$Symbol* $tmp164 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp163, ((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl*) $tmp164)));
// line 80
org$frostlanguage$frostc$Position $tmp165 = org$frostlanguage$frostc$Position$init();
frost$collections$Array* $tmp166 = *(&local11);
frost$collections$Array* $tmp167 = *(&local10);
org$frostlanguage$frostc$Pair* $tmp168 = org$frostlanguage$frostc$expression$Call$findBestMethod$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlanguage$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlanguage$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp165, ((org$frostlanguage$frostc$IR$Value*) NULL), ((frost$collections$ListView*) $tmp166), ((frost$collections$ListView*) $tmp167), param4);
*(&local12) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
org$frostlanguage$frostc$Pair* $tmp169 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local12) = $tmp168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
// unreffing REF($573:org.frostlanguage.frostc.Pair<frost.collections.ListView<org.frostlanguage.frostc.MethodRef>, frost.core.Int64>?)
// line 81
org$frostlanguage$frostc$Pair* $tmp170 = *(&local12);
frost$core$Bit $tmp171 = frost$core$Bit$init$builtin_bit($tmp170 != NULL);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block36; else goto block37;
block36:;
// line 82
org$frostlanguage$frostc$Pair* $tmp173 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
org$frostlanguage$frostc$Pair* $tmp174 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// unreffing result
*(&local12) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$collections$Array* $tmp175 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing list
*(&local11) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp176 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// unreffing args
*(&local10) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp177 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing rightCl
*(&local9) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$Type* $tmp178 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
// unreffing rightType
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Symbol* $tmp179 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
// unreffing methods
*(&local2) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp180 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp181 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing leftCl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp173;
block37:;
org$frostlanguage$frostc$Pair* $tmp182 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing result
*(&local12) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$collections$Array* $tmp183 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// unreffing list
*(&local11) = ((frost$collections$Array*) NULL);
goto block35;
block35:;
goto block31;
block33:;
frost$core$Int64 $tmp184 = (frost$core$Int64) {6};
frost$core$Bit $tmp185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp152, $tmp184);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block38; else goto block39;
block38:;
// line 87
org$frostlanguage$frostc$Position $tmp187 = org$frostlanguage$frostc$Position$init();
org$frostlanguage$frostc$Symbol* $tmp188 = *(&local2);
org$frostlanguage$frostc$FixedArray** $tmp189 = &((org$frostlanguage$frostc$Methods*) $tmp188)->methods;
org$frostlanguage$frostc$FixedArray* $tmp190 = *$tmp189;
frost$core$Method* $tmp192 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp192, ((frost$core$Int8*) org$frostlanguage$frostc$expression$Binary$$anonymous3$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit), ((frost$core$Immutable*) NULL));
ITable* $tmp193 = ((frost$collections$ListView*) $tmp190)->$class->itable;
while ($tmp193->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[4];
frost$collections$ListView* $tmp196 = $tmp194(((frost$collections$ListView*) $tmp190), ((frost$core$MutableMethod*) $tmp192));
frost$collections$Array* $tmp197 = *(&local10);
org$frostlanguage$frostc$Pair* $tmp198 = org$frostlanguage$frostc$expression$Call$findBestMethod$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlanguage$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlanguage$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp187, ((org$frostlanguage$frostc$IR$Value*) NULL), $tmp196, ((frost$collections$ListView*) $tmp197), param4);
*(&local13) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
org$frostlanguage$frostc$Pair* $tmp199 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local13) = $tmp198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing REF($669:org.frostlanguage.frostc.Pair<frost.collections.ListView<org.frostlanguage.frostc.MethodRef>, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing REF($665:frost.collections.ListView<frost.collections.ListView.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// unreffing REF($659:frost.core.Method)
// line 89
org$frostlanguage$frostc$Pair* $tmp200 = *(&local13);
frost$core$Bit $tmp201 = frost$core$Bit$init$builtin_bit($tmp200 != NULL);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block40; else goto block41;
block40:;
// line 90
org$frostlanguage$frostc$Pair* $tmp203 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
org$frostlanguage$frostc$Pair* $tmp204 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing result
*(&local13) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$collections$Array* $tmp205 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing args
*(&local10) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp206 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing rightCl
*(&local9) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$Type* $tmp207 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// unreffing rightType
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Symbol* $tmp208 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// unreffing methods
*(&local2) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp209 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp210 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing leftCl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp203;
block41:;
org$frostlanguage$frostc$Pair* $tmp211 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing result
*(&local13) = ((org$frostlanguage$frostc$Pair*) NULL);
goto block31;
block39:;
// line 94
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit(false);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp214 = (frost$core$Int64) {94};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s215, $tmp214);
abort(); // unreachable
block42:;
goto block31;
block31:;
// line 97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Pair*) NULL)));
frost$collections$Array* $tmp216 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// unreffing args
*(&local10) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp217 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing rightCl
*(&local9) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$Type* $tmp218 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing rightType
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Symbol* $tmp219 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing methods
*(&local2) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp220 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp221 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing leftCl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((org$frostlanguage$frostc$Pair*) NULL);

}
org$frostlanguage$frostc$Pair* org$frostlanguage$frostc$expression$Binary$findOverloadedOperator$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlanguage$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$ASTNode* param1, org$frostlanguage$frostc$parser$Token$Kind param2, org$frostlanguage$frostc$ASTNode* param3, org$frostlanguage$frostc$Compiler$TypeContext* param4) {

frost$collections$CollectionView* local0 = NULL;
org$frostlanguage$frostc$Pair* local1 = NULL;
org$frostlanguage$frostc$Type* local2 = NULL;
org$frostlanguage$frostc$Pair* local3 = NULL;
org$frostlanguage$frostc$Pair* local4 = NULL;
frost$core$Int64 local5;
frost$core$Bit local6;
frost$collections$Array* local7 = NULL;
org$frostlanguage$frostc$MethodRef* local8 = NULL;
org$frostlanguage$frostc$MethodRef* local9 = NULL;
// line 103
frost$collections$CollectionView* $tmp222 = org$frostlanguage$frostc$Compiler$possibleTypes$org$frostlanguage$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlanguage$frostc$Type$GT$Q(param0, param1);
*(&local0) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$collections$CollectionView* $tmp223 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local0) = $tmp222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($1:frost.collections.CollectionView<org.frostlanguage.frostc.Type>?)
// line 104
frost$collections$CollectionView* $tmp224 = *(&local0);
frost$core$Bit $tmp225 = frost$core$Bit$init$builtin_bit($tmp224 != NULL);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block1; else goto block2;
block1:;
// line 105
*(&local1) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Pair*) NULL)));
org$frostlanguage$frostc$Pair* $tmp227 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local1) = ((org$frostlanguage$frostc$Pair*) NULL);
// line 106
frost$collections$CollectionView* $tmp228 = *(&local0);
ITable* $tmp229 = ((frost$collections$Iterable*) $tmp228)->$class->itable;
while ($tmp229->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp229 = $tmp229->next;
}
$fn231 $tmp230 = $tmp229->methods[0];
frost$collections$Iterator* $tmp232 = $tmp230(((frost$collections$Iterable*) $tmp228));
goto block3;
block3:;
ITable* $tmp233 = $tmp232->$class->itable;
while ($tmp233->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp233 = $tmp233->next;
}
$fn235 $tmp234 = $tmp233->methods[0];
frost$core$Bit $tmp236 = $tmp234($tmp232);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlanguage$frostc$Type*) NULL);
ITable* $tmp238 = $tmp232->$class->itable;
while ($tmp238->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp238 = $tmp238->next;
}
$fn240 $tmp239 = $tmp238->methods[1];
frost$core$Object* $tmp241 = $tmp239($tmp232);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Type*) $tmp241)));
org$frostlanguage$frostc$Type* $tmp242 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local2) = ((org$frostlanguage$frostc$Type*) $tmp241);
// line 107
org$frostlanguage$frostc$Type* $tmp243 = *(&local2);
org$frostlanguage$frostc$Pair* $tmp244 = org$frostlanguage$frostc$Compiler$coercionCost$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Pair$LTorg$frostlanguage$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param1, $tmp243);
*(&local3) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
org$frostlanguage$frostc$Pair* $tmp245 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local3) = $tmp244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing REF($52:org.frostlanguage.frostc.Pair<org.frostlanguage.frostc.Type, frost.core.Int64>?)
// line 108
org$frostlanguage$frostc$Pair* $tmp246 = *(&local3);
frost$core$Bit $tmp247 = frost$core$Bit$init$builtin_bit($tmp246 != NULL);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp249 = (frost$core$Int64) {108};
frost$core$String* $tmp250 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s251, ((frost$core$Object*) param1));
frost$core$String* $tmp252 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp250, &$s253);
org$frostlanguage$frostc$Type* $tmp254 = *(&local2);
frost$core$String* $tmp255 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp252, ((frost$core$Object*) $tmp254));
frost$core$String* $tmp256 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp255, &$s257);
$fn259 $tmp258 = ($fn259) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp260 = $tmp258(param1);
org$frostlanguage$frostc$Position$wrapper* $tmp261;
$tmp261 = (org$frostlanguage$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Position$wrapperclass);
$tmp261->value = $tmp260;
frost$core$String* $tmp262 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp256, ((frost$core$Object*) $tmp261));
frost$core$String* $tmp263 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp262, &$s264);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s265, $tmp249, $tmp263);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing REF($81:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
// unreffing REF($80:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing REF($79:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($76:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing REF($75:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($72:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// unreffing REF($71:frost.core.String)
abort(); // unreachable
block6:;
// line 110
org$frostlanguage$frostc$Type* $tmp266 = *(&local2);
org$frostlanguage$frostc$Pair* $tmp267 = org$frostlanguage$frostc$expression$Binary$findOverloadedOperator$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlanguage$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp266, param2, param3, param4);
*(&local4) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
org$frostlanguage$frostc$Pair* $tmp268 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local4) = $tmp267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing REF($107:org.frostlanguage.frostc.Pair<frost.collections.ListView<org.frostlanguage.frostc.MethodRef>, frost.core.Int64>?)
// line 111
org$frostlanguage$frostc$Pair* $tmp269 = *(&local4);
frost$core$Bit $tmp270 = frost$core$Bit$init$builtin_bit($tmp269 != NULL);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block8; else goto block9;
block8:;
// line 112
org$frostlanguage$frostc$Pair* $tmp272 = *(&local4);
frost$core$Object** $tmp273 = &$tmp272->second;
frost$core$Object* $tmp274 = *$tmp273;
org$frostlanguage$frostc$Pair* $tmp275 = *(&local3);
frost$core$Object** $tmp276 = &$tmp275->second;
frost$core$Object* $tmp277 = *$tmp276;
int64_t $tmp278 = ((frost$core$Int64$wrapper*) $tmp274)->value.value;
int64_t $tmp279 = ((frost$core$Int64$wrapper*) $tmp277)->value.value;
int64_t $tmp280 = $tmp278 + $tmp279;
frost$core$Int64 $tmp281 = (frost$core$Int64) {$tmp280};
*(&local5) = $tmp281;
// line 113
org$frostlanguage$frostc$Pair* $tmp282 = *(&local1);
frost$core$Bit $tmp283 = frost$core$Bit$init$builtin_bit($tmp282 == NULL);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block12; else goto block13;
block12:;
*(&local6) = $tmp283;
goto block14;
block13:;
frost$core$Int64 $tmp285 = *(&local5);
org$frostlanguage$frostc$Pair* $tmp286 = *(&local1);
frost$core$Object** $tmp287 = &$tmp286->second;
frost$core$Object* $tmp288 = *$tmp287;
int64_t $tmp289 = $tmp285.value;
int64_t $tmp290 = ((frost$core$Int64$wrapper*) $tmp288)->value.value;
bool $tmp291 = $tmp289 < $tmp290;
frost$core$Bit $tmp292 = (frost$core$Bit) {$tmp291};
*(&local6) = $tmp292;
goto block14;
block14:;
frost$core$Bit $tmp293 = *(&local6);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block10; else goto block15;
block10:;
// line 114
org$frostlanguage$frostc$Pair* $tmp295 = (org$frostlanguage$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Pair$class);
org$frostlanguage$frostc$Pair* $tmp296 = *(&local4);
frost$core$Object** $tmp297 = &$tmp296->first;
frost$core$Object* $tmp298 = *$tmp297;
frost$core$Int64 $tmp299 = *(&local5);
frost$core$Int64$wrapper* $tmp300;
$tmp300 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp300->value = $tmp299;
org$frostlanguage$frostc$Pair$init$org$frostlanguage$frostc$Pair$A$org$frostlanguage$frostc$Pair$B($tmp295, ((frost$core$Object*) ((frost$collections$ListView*) $tmp298)), ((frost$core$Object*) $tmp300));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
org$frostlanguage$frostc$Pair* $tmp301 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local1) = $tmp295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
// unreffing REF($173:org.frostlanguage.frostc.Pair.B)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing REF($164:org.frostlanguage.frostc.Pair<frost.collections.ListView<org.frostlanguage.frostc.MethodRef>, frost.core.Int64>)
goto block11;
block15:;
// line 116
frost$core$Int64 $tmp302 = *(&local5);
org$frostlanguage$frostc$Pair* $tmp303 = *(&local1);
frost$core$Object** $tmp304 = &$tmp303->second;
frost$core$Object* $tmp305 = *$tmp304;
frost$core$Bit $tmp306 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp302, ((frost$core$Int64$wrapper*) $tmp305)->value);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block16; else goto block17;
block16:;
// line 117
frost$collections$Array* $tmp308 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp308);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$collections$Array* $tmp309 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local7) = $tmp308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing REF($200:frost.collections.Array<org.frostlanguage.frostc.MethodRef>)
// line 118
frost$collections$Array* $tmp310 = *(&local7);
org$frostlanguage$frostc$Pair* $tmp311 = *(&local1);
frost$core$Object** $tmp312 = &$tmp311->first;
frost$core$Object* $tmp313 = *$tmp312;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp310, ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp313)));
// line 119
org$frostlanguage$frostc$Pair* $tmp314 = *(&local4);
frost$core$Object** $tmp315 = &$tmp314->first;
frost$core$Object* $tmp316 = *$tmp315;
ITable* $tmp317 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp316))->$class->itable;
while ($tmp317->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp317 = $tmp317->next;
}
$fn319 $tmp318 = $tmp317->methods[0];
frost$collections$Iterator* $tmp320 = $tmp318(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp316)));
goto block18;
block18:;
ITable* $tmp321 = $tmp320->$class->itable;
while ($tmp321->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp321 = $tmp321->next;
}
$fn323 $tmp322 = $tmp321->methods[0];
frost$core$Bit $tmp324 = $tmp322($tmp320);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block20; else goto block19;
block19:;
*(&local8) = ((org$frostlanguage$frostc$MethodRef*) NULL);
ITable* $tmp326 = $tmp320->$class->itable;
while ($tmp326->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp326 = $tmp326->next;
}
$fn328 $tmp327 = $tmp326->methods[1];
frost$core$Object* $tmp329 = $tmp327($tmp320);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodRef*) $tmp329)));
org$frostlanguage$frostc$MethodRef* $tmp330 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local8) = ((org$frostlanguage$frostc$MethodRef*) $tmp329);
// line 120
org$frostlanguage$frostc$Pair* $tmp331 = *(&local1);
frost$core$Object** $tmp332 = &$tmp331->first;
frost$core$Object* $tmp333 = *$tmp332;
ITable* $tmp334 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp333))->$class->itable;
while ($tmp334->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp334 = $tmp334->next;
}
$fn336 $tmp335 = $tmp334->methods[0];
frost$collections$Iterator* $tmp337 = $tmp335(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp333)));
goto block21;
block21:;
ITable* $tmp338 = $tmp337->$class->itable;
while ($tmp338->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp338 = $tmp338->next;
}
$fn340 $tmp339 = $tmp338->methods[0];
frost$core$Bit $tmp341 = $tmp339($tmp337);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block23; else goto block22;
block22:;
*(&local9) = ((org$frostlanguage$frostc$MethodRef*) NULL);
ITable* $tmp343 = $tmp337->$class->itable;
while ($tmp343->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp343 = $tmp343->next;
}
$fn345 $tmp344 = $tmp343->methods[1];
frost$core$Object* $tmp346 = $tmp344($tmp337);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodRef*) $tmp346)));
org$frostlanguage$frostc$MethodRef* $tmp347 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local9) = ((org$frostlanguage$frostc$MethodRef*) $tmp346);
// line 121
org$frostlanguage$frostc$MethodRef* $tmp348 = *(&local9);
org$frostlanguage$frostc$MethodDecl** $tmp349 = &$tmp348->value;
org$frostlanguage$frostc$MethodDecl* $tmp350 = *$tmp349;
org$frostlanguage$frostc$MethodRef* $tmp351 = *(&local8);
org$frostlanguage$frostc$MethodDecl** $tmp352 = &$tmp351->value;
org$frostlanguage$frostc$MethodDecl* $tmp353 = *$tmp352;
bool $tmp354 = $tmp350 == $tmp353;
frost$core$Bit $tmp355 = frost$core$Bit$init$builtin_bit($tmp354);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block24; else goto block25;
block24:;
// line 122
frost$core$Frost$unref$frost$core$Object$Q($tmp346);
// unreffing REF($272:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodRef* $tmp357 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
// unreffing old
*(&local9) = ((org$frostlanguage$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($261:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q($tmp329);
// unreffing REF($244:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodRef* $tmp358 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// unreffing op
*(&local8) = ((org$frostlanguage$frostc$MethodRef*) NULL);
goto block18;
block25:;
frost$core$Frost$unref$frost$core$Object$Q($tmp346);
// unreffing REF($272:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodRef* $tmp359 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// unreffing old
*(&local9) = ((org$frostlanguage$frostc$MethodRef*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($261:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 125
frost$collections$Array* $tmp360 = *(&local7);
org$frostlanguage$frostc$MethodRef* $tmp361 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp360, ((frost$core$Object*) $tmp361));
frost$core$Frost$unref$frost$core$Object$Q($tmp329);
// unreffing REF($244:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodRef* $tmp362 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// unreffing op
*(&local8) = ((org$frostlanguage$frostc$MethodRef*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
// unreffing REF($233:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 127
org$frostlanguage$frostc$Pair* $tmp363 = (org$frostlanguage$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Pair$class);
frost$collections$Array* $tmp364 = *(&local7);
frost$core$Int64 $tmp365 = *(&local5);
frost$core$Int64$wrapper* $tmp366;
$tmp366 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp366->value = $tmp365;
org$frostlanguage$frostc$Pair$init$org$frostlanguage$frostc$Pair$A$org$frostlanguage$frostc$Pair$B($tmp363, ((frost$core$Object*) ((frost$collections$ListView*) $tmp364)), ((frost$core$Object*) $tmp366));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
org$frostlanguage$frostc$Pair* $tmp367 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local1) = $tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing REF($349:org.frostlanguage.frostc.Pair.B)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// unreffing REF($343:org.frostlanguage.frostc.Pair<frost.collections.ListView<org.frostlanguage.frostc.MethodRef>, frost.core.Int64>)
frost$collections$Array* $tmp368 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing a
*(&local7) = ((frost$collections$Array*) NULL);
goto block17;
block17:;
goto block11;
block11:;
goto block9;
block9:;
org$frostlanguage$frostc$Pair* $tmp369 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// unreffing ops
*(&local4) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$Pair* $tmp370 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// unreffing compilerCost
*(&local3) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp241);
// unreffing REF($42:frost.collections.Iterator.T)
org$frostlanguage$frostc$Type* $tmp371 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
// unreffing t
*(&local2) = ((org$frostlanguage$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// unreffing REF($31:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 131
org$frostlanguage$frostc$Pair* $tmp372 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
org$frostlanguage$frostc$Pair* $tmp373 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// unreffing best
*(&local1) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$collections$CollectionView* $tmp374 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
// unreffing leftTypes
*(&local0) = ((frost$collections$CollectionView*) NULL);
return $tmp372;
block2:;
// line 133
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp375 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// unreffing leftTypes
*(&local0) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlanguage$frostc$Pair*) NULL);

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$expression$Binary$foldInts$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$ASTNode* param1, org$frostlanguage$frostc$parser$Token$Kind param2, org$frostlanguage$frostc$ASTNode* param3) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$UInt64 local2;
frost$core$UInt64 local3;
frost$core$UInt64 local4;
frost$core$UInt64 local5;
frost$core$UInt64 local6;
frost$core$UInt64 local7;
frost$core$UInt64 local8;
frost$core$UInt64 local9;
frost$core$UInt64 local10;
frost$core$UInt64 local11;
frost$core$UInt64 local12;
frost$core$UInt64 local13;
// line 138
// line 139
// line 141
frost$core$Int64* $tmp376 = &param1->$rawValue;
frost$core$Int64 $tmp377 = *$tmp376;
frost$core$Int64 $tmp378 = (frost$core$Int64) {25};
frost$core$Bit $tmp379 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp377, $tmp378);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block2; else goto block3;
block2:;
org$frostlanguage$frostc$Position* $tmp381 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp382 = *$tmp381;
frost$core$UInt64* $tmp383 = (frost$core$UInt64*) (param1->$data + 16);
frost$core$UInt64 $tmp384 = *$tmp383;
*(&local2) = $tmp384;
// line 143
frost$core$UInt64 $tmp385 = *(&local2);
frost$core$Int64 $tmp386 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp387 = frost$core$Int64$convert$R$frost$core$UInt64($tmp386);
uint64_t $tmp388 = $tmp385.value;
uint64_t $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 > $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block4; else goto block5;
block4:;
// line 144
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block5:;
// line 146
frost$core$UInt64 $tmp393 = *(&local2);
frost$core$Int64 $tmp394 = frost$core$UInt64$convert$R$frost$core$Int64($tmp393);
*(&local0) = $tmp394;
goto block1;
block3:;
// line 149
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block1:;
// line 152
frost$core$Int64* $tmp395 = &param3->$rawValue;
frost$core$Int64 $tmp396 = *$tmp395;
frost$core$Int64 $tmp397 = (frost$core$Int64) {25};
frost$core$Bit $tmp398 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp396, $tmp397);
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block7; else goto block8;
block7:;
org$frostlanguage$frostc$Position* $tmp400 = (org$frostlanguage$frostc$Position*) (param3->$data + 0);
org$frostlanguage$frostc$Position $tmp401 = *$tmp400;
frost$core$UInt64* $tmp402 = (frost$core$UInt64*) (param3->$data + 16);
frost$core$UInt64 $tmp403 = *$tmp402;
*(&local3) = $tmp403;
// line 154
frost$core$UInt64 $tmp404 = *(&local3);
frost$core$Int64 $tmp405 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp406 = frost$core$Int64$convert$R$frost$core$UInt64($tmp405);
uint64_t $tmp407 = $tmp404.value;
uint64_t $tmp408 = $tmp406.value;
bool $tmp409 = $tmp407 > $tmp408;
frost$core$Bit $tmp410 = (frost$core$Bit) {$tmp409};
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block9; else goto block10;
block9:;
// line 155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block10:;
// line 157
frost$core$UInt64 $tmp412 = *(&local3);
frost$core$Int64 $tmp413 = frost$core$UInt64$convert$R$frost$core$Int64($tmp412);
*(&local1) = $tmp413;
goto block6;
block8:;
// line 160
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 163
frost$core$Int64 $tmp414 = param2.$rawValue;
frost$core$Int64 $tmp415 = (frost$core$Int64) {52};
frost$core$Bit $tmp416 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp415);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block12; else goto block13;
block12:;
// line 165
frost$core$Int64 $tmp418 = *(&local0);
frost$core$Int64 $tmp419 = *(&local1);
int64_t $tmp420 = $tmp418.value;
int64_t $tmp421 = $tmp419.value;
int64_t $tmp422 = $tmp420 + $tmp421;
frost$core$Int64 $tmp423 = (frost$core$Int64) {$tmp422};
frost$core$UInt64 $tmp424 = frost$core$Int64$convert$R$frost$core$UInt64($tmp423);
*(&local4) = $tmp424;
// line 166
org$frostlanguage$frostc$ASTNode* $tmp425 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp426 = (frost$core$Int64) {25};
$fn428 $tmp427 = ($fn428) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp429 = $tmp427(param1);
frost$core$UInt64 $tmp430 = *(&local4);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp425, $tmp426, $tmp429, $tmp430);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
// unreffing REF($88:org.frostlanguage.frostc.ASTNode)
return $tmp425;
block13:;
frost$core$Int64 $tmp431 = (frost$core$Int64) {53};
frost$core$Bit $tmp432 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp431);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block14; else goto block15;
block14:;
// line 169
frost$core$Int64 $tmp434 = *(&local0);
frost$core$Int64 $tmp435 = *(&local1);
int64_t $tmp436 = $tmp434.value;
int64_t $tmp437 = $tmp435.value;
int64_t $tmp438 = $tmp436 - $tmp437;
frost$core$Int64 $tmp439 = (frost$core$Int64) {$tmp438};
frost$core$UInt64 $tmp440 = frost$core$Int64$convert$R$frost$core$UInt64($tmp439);
*(&local5) = $tmp440;
// line 170
org$frostlanguage$frostc$ASTNode* $tmp441 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp442 = (frost$core$Int64) {25};
$fn444 $tmp443 = ($fn444) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp445 = $tmp443(param1);
frost$core$UInt64 $tmp446 = *(&local5);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp441, $tmp442, $tmp445, $tmp446);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
// unreffing REF($115:org.frostlanguage.frostc.ASTNode)
return $tmp441;
block15:;
frost$core$Int64 $tmp447 = (frost$core$Int64) {54};
frost$core$Bit $tmp448 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp447);
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block16; else goto block17;
block16:;
// line 173
frost$core$Int64 $tmp450 = *(&local0);
frost$core$Int64 $tmp451 = *(&local1);
int64_t $tmp452 = $tmp450.value;
int64_t $tmp453 = $tmp451.value;
int64_t $tmp454 = $tmp452 * $tmp453;
frost$core$Int64 $tmp455 = (frost$core$Int64) {$tmp454};
frost$core$UInt64 $tmp456 = frost$core$Int64$convert$R$frost$core$UInt64($tmp455);
*(&local6) = $tmp456;
// line 174
org$frostlanguage$frostc$ASTNode* $tmp457 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp458 = (frost$core$Int64) {25};
$fn460 $tmp459 = ($fn460) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp461 = $tmp459(param1);
frost$core$UInt64 $tmp462 = *(&local6);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp457, $tmp458, $tmp461, $tmp462);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// unreffing REF($142:org.frostlanguage.frostc.ASTNode)
return $tmp457;
block17:;
frost$core$Int64 $tmp463 = (frost$core$Int64) {56};
frost$core$Bit $tmp464 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp463);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block18; else goto block19;
block18:;
// line 177
frost$core$Int64 $tmp466 = *(&local1);
frost$core$Int64 $tmp467 = (frost$core$Int64) {0};
frost$core$Bit $tmp468 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp466, $tmp467);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block20; else goto block21;
block20:;
// line 178
$fn471 $tmp470 = ($fn471) param3->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp472 = $tmp470(param3);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp472, &$s473);
// line 179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block21:;
// line 181
frost$core$Int64 $tmp474 = *(&local0);
frost$core$Int64 $tmp475 = *(&local1);
int64_t $tmp476 = $tmp474.value;
int64_t $tmp477 = $tmp475.value;
int64_t $tmp478 = $tmp476 / $tmp477;
frost$core$Int64 $tmp479 = (frost$core$Int64) {$tmp478};
frost$core$UInt64 $tmp480 = frost$core$Int64$convert$R$frost$core$UInt64($tmp479);
*(&local7) = $tmp480;
// line 182
org$frostlanguage$frostc$ASTNode* $tmp481 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp482 = (frost$core$Int64) {25};
$fn484 $tmp483 = ($fn484) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp485 = $tmp483(param1);
frost$core$UInt64 $tmp486 = *(&local7);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp481, $tmp482, $tmp485, $tmp486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
// unreffing REF($183:org.frostlanguage.frostc.ASTNode)
return $tmp481;
block19:;
frost$core$Int64 $tmp487 = (frost$core$Int64) {57};
frost$core$Bit $tmp488 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp487);
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block22; else goto block23;
block22:;
// line 185
frost$core$Int64 $tmp490 = *(&local1);
frost$core$Int64 $tmp491 = (frost$core$Int64) {0};
frost$core$Bit $tmp492 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp490, $tmp491);
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block24; else goto block25;
block24:;
// line 186
$fn495 $tmp494 = ($fn495) param3->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp496 = $tmp494(param3);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp496, &$s497);
// line 187
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block25:;
// line 189
frost$core$Int64 $tmp498 = *(&local0);
frost$core$Int64 $tmp499 = *(&local1);
frost$core$Int64 $tmp500 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp498, $tmp499);
frost$core$UInt64 $tmp501 = frost$core$Int64$convert$R$frost$core$UInt64($tmp500);
*(&local8) = $tmp501;
// line 190
org$frostlanguage$frostc$ASTNode* $tmp502 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp503 = (frost$core$Int64) {25};
$fn505 $tmp504 = ($fn505) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp506 = $tmp504(param1);
frost$core$UInt64 $tmp507 = *(&local8);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp502, $tmp503, $tmp506, $tmp507);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
// unreffing REF($221:org.frostlanguage.frostc.ASTNode)
return $tmp502;
block23:;
frost$core$Int64 $tmp508 = (frost$core$Int64) {59};
frost$core$Bit $tmp509 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp508);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block26; else goto block27;
block26:;
// line 193
org$frostlanguage$frostc$ASTNode* $tmp511 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp512 = (frost$core$Int64) {6};
$fn514 $tmp513 = ($fn514) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp515 = $tmp513(param1);
frost$core$Int64 $tmp516 = *(&local0);
frost$core$Int64 $tmp517 = *(&local1);
frost$core$Bit $tmp518 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp516, $tmp517);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$Bit($tmp511, $tmp512, $tmp515, $tmp518);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
// unreffing REF($239:org.frostlanguage.frostc.ASTNode)
return $tmp511;
block27:;
frost$core$Int64 $tmp519 = (frost$core$Int64) {60};
frost$core$Bit $tmp520 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp519);
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block28; else goto block29;
block28:;
// line 196
org$frostlanguage$frostc$ASTNode* $tmp522 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp523 = (frost$core$Int64) {6};
$fn525 $tmp524 = ($fn525) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp526 = $tmp524(param1);
frost$core$Int64 $tmp527 = *(&local0);
frost$core$Int64 $tmp528 = *(&local1);
int64_t $tmp529 = $tmp527.value;
int64_t $tmp530 = $tmp528.value;
bool $tmp531 = $tmp529 != $tmp530;
frost$core$Bit $tmp532 = (frost$core$Bit) {$tmp531};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$Bit($tmp522, $tmp523, $tmp526, $tmp532);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// unreffing REF($259:org.frostlanguage.frostc.ASTNode)
return $tmp522;
block29:;
frost$core$Int64 $tmp533 = (frost$core$Int64) {63};
frost$core$Bit $tmp534 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp533);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block30; else goto block31;
block30:;
// line 199
org$frostlanguage$frostc$ASTNode* $tmp536 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp537 = (frost$core$Int64) {6};
$fn539 $tmp538 = ($fn539) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp540 = $tmp538(param1);
frost$core$Int64 $tmp541 = *(&local0);
frost$core$Int64 $tmp542 = *(&local1);
int64_t $tmp543 = $tmp541.value;
int64_t $tmp544 = $tmp542.value;
bool $tmp545 = $tmp543 < $tmp544;
frost$core$Bit $tmp546 = (frost$core$Bit) {$tmp545};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$Bit($tmp536, $tmp537, $tmp540, $tmp546);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
// unreffing REF($282:org.frostlanguage.frostc.ASTNode)
return $tmp536;
block31:;
frost$core$Int64 $tmp547 = (frost$core$Int64) {64};
frost$core$Bit $tmp548 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp547);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block32; else goto block33;
block32:;
// line 202
org$frostlanguage$frostc$ASTNode* $tmp550 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp551 = (frost$core$Int64) {6};
$fn553 $tmp552 = ($fn553) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp554 = $tmp552(param1);
frost$core$Int64 $tmp555 = *(&local0);
frost$core$Int64 $tmp556 = *(&local1);
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556.value;
bool $tmp559 = $tmp557 > $tmp558;
frost$core$Bit $tmp560 = (frost$core$Bit) {$tmp559};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$Bit($tmp550, $tmp551, $tmp554, $tmp560);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// unreffing REF($305:org.frostlanguage.frostc.ASTNode)
return $tmp550;
block33:;
frost$core$Int64 $tmp561 = (frost$core$Int64) {65};
frost$core$Bit $tmp562 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp561);
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block34; else goto block35;
block34:;
// line 205
org$frostlanguage$frostc$ASTNode* $tmp564 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp565 = (frost$core$Int64) {6};
$fn567 $tmp566 = ($fn567) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp568 = $tmp566(param1);
frost$core$Int64 $tmp569 = *(&local0);
frost$core$Int64 $tmp570 = *(&local1);
int64_t $tmp571 = $tmp569.value;
int64_t $tmp572 = $tmp570.value;
bool $tmp573 = $tmp571 <= $tmp572;
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$Bit($tmp564, $tmp565, $tmp568, $tmp574);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// unreffing REF($328:org.frostlanguage.frostc.ASTNode)
return $tmp564;
block35:;
frost$core$Int64 $tmp575 = (frost$core$Int64) {66};
frost$core$Bit $tmp576 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp575);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block36; else goto block37;
block36:;
// line 208
org$frostlanguage$frostc$ASTNode* $tmp578 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp579 = (frost$core$Int64) {6};
$fn581 $tmp580 = ($fn581) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp582 = $tmp580(param1);
frost$core$Int64 $tmp583 = *(&local0);
frost$core$Int64 $tmp584 = *(&local1);
int64_t $tmp585 = $tmp583.value;
int64_t $tmp586 = $tmp584.value;
bool $tmp587 = $tmp585 >= $tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$Bit($tmp578, $tmp579, $tmp582, $tmp588);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// unreffing REF($351:org.frostlanguage.frostc.ASTNode)
return $tmp578;
block37:;
frost$core$Int64 $tmp589 = (frost$core$Int64) {68};
frost$core$Bit $tmp590 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block38; else goto block39;
block38:;
// line 211
frost$core$Int64 $tmp592 = *(&local0);
frost$core$Int64 $tmp593 = *(&local1);
frost$core$Int64 $tmp594 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp592, $tmp593);
frost$core$UInt64 $tmp595 = frost$core$Int64$convert$R$frost$core$UInt64($tmp594);
*(&local9) = $tmp595;
// line 212
org$frostlanguage$frostc$ASTNode* $tmp596 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp597 = (frost$core$Int64) {25};
$fn599 $tmp598 = ($fn599) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp600 = $tmp598(param1);
frost$core$UInt64 $tmp601 = *(&local9);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp596, $tmp597, $tmp600, $tmp601);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
// unreffing REF($380:org.frostlanguage.frostc.ASTNode)
return $tmp596;
block39:;
frost$core$Int64 $tmp602 = (frost$core$Int64) {70};
frost$core$Bit $tmp603 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block40; else goto block41;
block40:;
// line 215
frost$core$Int64 $tmp605 = *(&local0);
frost$core$Int64 $tmp606 = *(&local1);
frost$core$Int64 $tmp607 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp605, $tmp606);
frost$core$UInt64 $tmp608 = frost$core$Int64$convert$R$frost$core$UInt64($tmp607);
*(&local10) = $tmp608;
// line 216
org$frostlanguage$frostc$ASTNode* $tmp609 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp610 = (frost$core$Int64) {25};
$fn612 $tmp611 = ($fn612) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp613 = $tmp611(param1);
frost$core$UInt64 $tmp614 = *(&local10);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp609, $tmp610, $tmp613, $tmp614);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
// unreffing REF($404:org.frostlanguage.frostc.ASTNode)
return $tmp609;
block41:;
frost$core$Int64 $tmp615 = (frost$core$Int64) {72};
frost$core$Bit $tmp616 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp615);
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block42; else goto block43;
block42:;
// line 219
frost$core$Int64 $tmp618 = *(&local0);
frost$core$Int64 $tmp619 = *(&local1);
frost$core$Int64 $tmp620 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp618, $tmp619);
frost$core$UInt64 $tmp621 = frost$core$Int64$convert$R$frost$core$UInt64($tmp620);
*(&local11) = $tmp621;
// line 220
org$frostlanguage$frostc$ASTNode* $tmp622 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp623 = (frost$core$Int64) {25};
$fn625 $tmp624 = ($fn625) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp626 = $tmp624(param1);
frost$core$UInt64 $tmp627 = *(&local11);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp622, $tmp623, $tmp626, $tmp627);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
// unreffing REF($428:org.frostlanguage.frostc.ASTNode)
return $tmp622;
block43:;
frost$core$Int64 $tmp628 = (frost$core$Int64) {73};
frost$core$Bit $tmp629 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp628);
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block44; else goto block45;
block44:;
// line 223
frost$core$Int64 $tmp631 = *(&local0);
frost$core$Int64 $tmp632 = *(&local1);
frost$core$Int64 $tmp633 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp631, $tmp632);
frost$core$UInt64 $tmp634 = frost$core$Int64$convert$R$frost$core$UInt64($tmp633);
*(&local12) = $tmp634;
// line 224
org$frostlanguage$frostc$ASTNode* $tmp635 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp636 = (frost$core$Int64) {25};
$fn638 $tmp637 = ($fn638) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp639 = $tmp637(param1);
frost$core$UInt64 $tmp640 = *(&local12);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp635, $tmp636, $tmp639, $tmp640);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
// unreffing REF($452:org.frostlanguage.frostc.ASTNode)
return $tmp635;
block45:;
frost$core$Int64 $tmp641 = (frost$core$Int64) {1};
frost$core$Bit $tmp642 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp641);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block46; else goto block11;
block46:;
// line 227
frost$core$Int64 $tmp644 = *(&local0);
frost$core$Int64 $tmp645 = *(&local1);
frost$core$Int64 $tmp646 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp644, $tmp645);
frost$core$UInt64 $tmp647 = frost$core$Int64$convert$R$frost$core$UInt64($tmp646);
*(&local13) = $tmp647;
// line 228
org$frostlanguage$frostc$ASTNode* $tmp648 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp649 = (frost$core$Int64) {25};
$fn651 $tmp650 = ($fn651) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp652 = $tmp650(param1);
frost$core$UInt64 $tmp653 = *(&local13);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp648, $tmp649, $tmp652, $tmp653);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// unreffing REF($476:org.frostlanguage.frostc.ASTNode)
return $tmp648;
block11:;
// line 231
$fn655 $tmp654 = ($fn655) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp656 = $tmp654(param1);
frost$core$String* $tmp657 = org$frostlanguage$frostc$Compiler$operatorName$org$frostlanguage$frostc$parser$Token$Kind$R$frost$core$String(param2);
frost$core$String* $tmp658 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s659, $tmp657);
frost$core$String* $tmp660 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp658, &$s661);
frost$core$String* $tmp662 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp660, &$s663);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp656, $tmp662);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing REF($495:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
// unreffing REF($494:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
// unreffing REF($493:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
// unreffing REF($492:frost.core.String)
// line 233
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$expression$Binary$foldStrings$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$ASTNode* param1, org$frostlanguage$frostc$parser$Token$Kind param2, org$frostlanguage$frostc$ASTNode* param3) {

org$frostlanguage$frostc$Position local0;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 240
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp664;
$tmp664 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp664->value = param2;
frost$core$Int64 $tmp665 = (frost$core$Int64) {52};
org$frostlanguage$frostc$parser$Token$Kind $tmp666 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp665);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp667;
$tmp667 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp667->value = $tmp666;
ITable* $tmp668 = ((frost$core$Equatable*) $tmp664)->$class->itable;
while ($tmp668->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp668 = $tmp668->next;
}
$fn670 $tmp669 = $tmp668->methods[1];
frost$core$Bit $tmp671 = $tmp669(((frost$core$Equatable*) $tmp664), ((frost$core$Equatable*) $tmp667));
bool $tmp672 = $tmp671.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp667)));
// unreffing REF($5:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp664)));
// unreffing REF($1:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp672) goto block1; else goto block2;
block1:;
// line 241
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 243
frost$core$Int64* $tmp673 = &param1->$rawValue;
frost$core$Int64 $tmp674 = *$tmp673;
frost$core$Int64 $tmp675 = (frost$core$Int64) {41};
frost$core$Bit $tmp676 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp674, $tmp675);
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block4; else goto block3;
block4:;
org$frostlanguage$frostc$Position* $tmp678 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp679 = *$tmp678;
*(&local0) = $tmp679;
frost$core$String** $tmp680 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp681 = *$tmp680;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$String* $tmp682 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local1) = $tmp681;
// line 245
frost$core$Int64* $tmp683 = &param3->$rawValue;
frost$core$Int64 $tmp684 = *$tmp683;
frost$core$Int64 $tmp685 = (frost$core$Int64) {41};
frost$core$Bit $tmp686 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp684, $tmp685);
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block6; else goto block5;
block6:;
org$frostlanguage$frostc$Position* $tmp688 = (org$frostlanguage$frostc$Position*) (param3->$data + 0);
org$frostlanguage$frostc$Position $tmp689 = *$tmp688;
frost$core$String** $tmp690 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp691 = *$tmp690;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
frost$core$String* $tmp692 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local2) = $tmp691;
// line 247
org$frostlanguage$frostc$ASTNode* $tmp693 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp694 = (frost$core$Int64) {41};
org$frostlanguage$frostc$Position $tmp695 = *(&local0);
frost$core$String* $tmp696 = *(&local1);
frost$core$String* $tmp697 = *(&local2);
frost$core$String* $tmp698 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp696, $tmp697);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp693, $tmp694, $tmp695, $tmp698);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
// unreffing REF($63:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
// unreffing REF($58:org.frostlanguage.frostc.ASTNode)
frost$core$String* $tmp699 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
// unreffing s2
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp700 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
// unreffing s1
*(&local1) = ((frost$core$String*) NULL);
return $tmp693;
block5:;
frost$core$String* $tmp701 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// unreffing s1
*(&local1) = ((frost$core$String*) NULL);
goto block3;
block3:;
// line 252
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$expression$Binary$fold$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$ASTNode* param1, org$frostlanguage$frostc$parser$Token$Kind param2, org$frostlanguage$frostc$ASTNode* param3) {

// line 257
frost$core$Int64* $tmp702 = &param1->$rawValue;
frost$core$Int64 $tmp703 = *$tmp702;
frost$core$Int64 $tmp704 = (frost$core$Int64) {25};
frost$core$Bit $tmp705 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp703, $tmp704);
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block2; else goto block3;
block2:;
// line 259
org$frostlanguage$frostc$ASTNode* $tmp707 = org$frostlanguage$frostc$expression$Binary$foldInts$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
// unreffing REF($8:org.frostlanguage.frostc.ASTNode?)
return $tmp707;
block3:;
frost$core$Int64 $tmp708 = (frost$core$Int64) {41};
frost$core$Bit $tmp709 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp703, $tmp708);
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block4; else goto block5;
block4:;
// line 262
org$frostlanguage$frostc$ASTNode* $tmp711 = org$frostlanguage$frostc$expression$Binary$foldStrings$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// unreffing REF($20:org.frostlanguage.frostc.ASTNode?)
return $tmp711;
block5:;
// line 265
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block1:;
frost$core$Bit $tmp712 = frost$core$Bit$init$builtin_bit(false);
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp714 = (frost$core$Int64) {256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s715, $tmp714, &$s716);
abort(); // unreachable
block6:;
abort(); // unreachable

}
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Binary$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$ASTNode* param2, org$frostlanguage$frostc$parser$Token$Kind param3, org$frostlanguage$frostc$ASTNode* param4, org$frostlanguage$frostc$Compiler$TypeContext* param5) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$Type* local1 = NULL;
org$frostlanguage$frostc$Pair* local2 = NULL;
org$frostlanguage$frostc$MethodDecl* local3 = NULL;
org$frostlanguage$frostc$Type* local4 = NULL;
org$frostlanguage$frostc$IR$Value* local5 = NULL;
org$frostlanguage$frostc$IR$Value* local6 = NULL;
org$frostlanguage$frostc$IR$Value* local7 = NULL;
frost$core$Bit local8;
org$frostlanguage$frostc$Type* local9 = NULL;
org$frostlanguage$frostc$IR$Statement$ID local10;
// line 273
org$frostlanguage$frostc$ASTNode* $tmp717 = org$frostlanguage$frostc$expression$Binary$fold$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode$Q(param0, param2, param3, param4);
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
org$frostlanguage$frostc$ASTNode* $tmp718 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local0) = $tmp717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
// unreffing REF($1:org.frostlanguage.frostc.ASTNode?)
// line 274
org$frostlanguage$frostc$ASTNode* $tmp719 = *(&local0);
frost$core$Bit $tmp720 = frost$core$Bit$init$builtin_bit($tmp719 != NULL);
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block1; else goto block2;
block1:;
// line 275
org$frostlanguage$frostc$ASTNode* $tmp722 = *(&local0);
org$frostlanguage$frostc$IR$Value* $tmp723 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, $tmp722, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing REF($21:org.frostlanguage.frostc.IR.Value?)
org$frostlanguage$frostc$ASTNode* $tmp724 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp723;
block2:;
// line 277
frost$core$Int64 $tmp725 = param3.$rawValue;
frost$core$Int64 $tmp726 = (frost$core$Int64) {90};
frost$core$Bit $tmp727 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp725, $tmp726);
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block4; else goto block5;
block4:;
// line 279
org$frostlanguage$frostc$Scanner** $tmp729 = &param0->scanner;
org$frostlanguage$frostc$Scanner* $tmp730 = *$tmp729;
org$frostlanguage$frostc$Type* $tmp731 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type($tmp730, param4);
*(&local1) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
org$frostlanguage$frostc$Type* $tmp732 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local1) = $tmp731;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
// unreffing REF($42:org.frostlanguage.frostc.Type)
// line 280
org$frostlanguage$frostc$Type* $tmp733 = *(&local1);
org$frostlanguage$frostc$IR$Value* $tmp734 = org$frostlanguage$frostc$Compiler$compileCast$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, param2, $tmp733);
org$frostlanguage$frostc$IR$Value* $tmp735 = org$frostlanguage$frostc$Compiler$coerce$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp734, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// unreffing REF($56:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// unreffing REF($55:org.frostlanguage.frostc.IR.Value?)
org$frostlanguage$frostc$Type* $tmp736 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp737 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp735;
block5:;
frost$core$Int64 $tmp738 = (frost$core$Int64) {61};
frost$core$Bit $tmp739 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp725, $tmp738);
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp741 = (frost$core$Int64) {62};
frost$core$Bit $tmp742 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp725, $tmp741);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block6; else goto block8;
block6:;
// line 283
org$frostlanguage$frostc$IR$Value* $tmp744 = org$frostlanguage$frostc$Compiler$compileIdentityComparison$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, param2, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// unreffing REF($85:org.frostlanguage.frostc.IR.Value?)
org$frostlanguage$frostc$ASTNode* $tmp745 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp744;
block8:;
// line 286
org$frostlanguage$frostc$Pair* $tmp746 = org$frostlanguage$frostc$expression$Binary$findOverloadedOperator$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlanguage$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param2, param3, param4, param5);
*(&local2) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
org$frostlanguage$frostc$Pair* $tmp747 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local2) = $tmp746;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
// unreffing REF($98:org.frostlanguage.frostc.Pair<frost.collections.ListView<org.frostlanguage.frostc.MethodRef>, frost.core.Int64>?)
// line 287
org$frostlanguage$frostc$Pair* $tmp748 = *(&local2);
frost$core$Bit $tmp749 = frost$core$Bit$init$builtin_bit($tmp748 != NULL);
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block9; else goto block10;
block9:;
// line 288
org$frostlanguage$frostc$Pair* $tmp751 = *(&local2);
frost$core$Object** $tmp752 = &$tmp751->first;
frost$core$Object* $tmp753 = *$tmp752;
ITable* $tmp754 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp753))->$class->itable;
while ($tmp754->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp754 = $tmp754->next;
}
$fn756 $tmp755 = $tmp754->methods[0];
frost$core$Int64 $tmp757 = $tmp755(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp753)));
frost$core$Int64 $tmp758 = (frost$core$Int64) {1};
int64_t $tmp759 = $tmp757.value;
int64_t $tmp760 = $tmp758.value;
bool $tmp761 = $tmp759 > $tmp760;
frost$core$Bit $tmp762 = (frost$core$Bit) {$tmp761};
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block11; else goto block12;
block11:;
// line 289
org$frostlanguage$frostc$Pair* $tmp764 = *(&local2);
frost$core$Object** $tmp765 = &$tmp764->first;
frost$core$Object* $tmp766 = *$tmp765;
frost$collections$Array* $tmp767 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp768 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp767, $tmp768);
frost$collections$Array$add$frost$collections$Array$T($tmp767, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp767, ((frost$core$Object*) param4));
org$frostlanguage$frostc$Compiler$reportAmbiguousMatch$org$frostlanguage$frostc$Position$frost$collections$ListView$LTorg$frostlanguage$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp766), ((frost$collections$ListView*) $tmp767), param5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
// unreffing REF($137:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$Pair* $tmp769 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// unreffing matches
*(&local2) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp770 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block12:;
// line 292
org$frostlanguage$frostc$Pair* $tmp771 = *(&local2);
frost$core$Object** $tmp772 = &$tmp771->first;
frost$core$Object* $tmp773 = *$tmp772;
frost$core$Int64 $tmp774 = (frost$core$Int64) {0};
ITable* $tmp775 = ((frost$collections$ListView*) $tmp773)->$class->itable;
while ($tmp775->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp775 = $tmp775->next;
}
$fn777 $tmp776 = $tmp775->methods[0];
frost$core$Object* $tmp778 = $tmp776(((frost$collections$ListView*) $tmp773), $tmp774);
org$frostlanguage$frostc$MethodDecl** $tmp779 = &((org$frostlanguage$frostc$MethodRef*) $tmp778)->value;
org$frostlanguage$frostc$MethodDecl* $tmp780 = *$tmp779;
*(&local3) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
org$frostlanguage$frostc$MethodDecl* $tmp781 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local3) = $tmp780;
frost$core$Frost$unref$frost$core$Object$Q($tmp778);
// unreffing REF($175:frost.collections.ListView.T)
// line 293
org$frostlanguage$frostc$MethodDecl* $tmp782 = *(&local3);
org$frostlanguage$frostc$Annotations** $tmp783 = &$tmp782->annotations;
org$frostlanguage$frostc$Annotations* $tmp784 = *$tmp783;
frost$core$Bit $tmp785 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp784);
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block13; else goto block14;
block13:;
// line 294
org$frostlanguage$frostc$MethodDecl* $tmp787 = *(&local3);
frost$collections$Array** $tmp788 = &$tmp787->parameters;
frost$collections$Array* $tmp789 = *$tmp788;
ITable* $tmp790 = ((frost$collections$CollectionView*) $tmp789)->$class->itable;
while ($tmp790->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp790 = $tmp790->next;
}
$fn792 $tmp791 = $tmp790->methods[0];
frost$core$Int64 $tmp793 = $tmp791(((frost$collections$CollectionView*) $tmp789));
frost$core$Int64 $tmp794 = (frost$core$Int64) {2};
frost$core$Bit $tmp795 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp793, $tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block15; else goto block16;
block15:;
// line 295
org$frostlanguage$frostc$IR$Value* $tmp797 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp798 = (frost$core$Int64) {9};
org$frostlanguage$frostc$MethodDecl* $tmp799 = *(&local3);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$MethodDecl($tmp797, $tmp798, ((org$frostlanguage$frostc$IR$Value*) NULL), $tmp799);
frost$collections$Array* $tmp800 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp801 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp800, $tmp801);
frost$collections$Array$add$frost$collections$Array$T($tmp800, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp800, ((frost$core$Object*) param4));
org$frostlanguage$frostc$IR$Value* $tmp802 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp797, ((frost$collections$ListView*) $tmp800), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
// unreffing REF($223:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
// unreffing REF($212:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// unreffing REF($208:org.frostlanguage.frostc.IR.Value)
org$frostlanguage$frostc$MethodDecl* $tmp803 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
// unreffing m
*(&local3) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$Pair* $tmp804 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// unreffing matches
*(&local2) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp805 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp802;
block16:;
// line 298
org$frostlanguage$frostc$MethodDecl* $tmp806 = *(&local3);
frost$collections$Array** $tmp807 = &$tmp806->parameters;
frost$collections$Array* $tmp808 = *$tmp807;
ITable* $tmp809 = ((frost$collections$CollectionView*) $tmp808)->$class->itable;
while ($tmp809->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp809 = $tmp809->next;
}
$fn811 $tmp810 = $tmp809->methods[0];
frost$core$Int64 $tmp812 = $tmp810(((frost$collections$CollectionView*) $tmp808));
frost$core$Int64 $tmp813 = (frost$core$Int64) {1};
frost$core$Bit $tmp814 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp812, $tmp813);
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp816 = (frost$core$Int64) {298};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s817, $tmp816);
abort(); // unreachable
block17:;
// line 299
org$frostlanguage$frostc$IR$Value* $tmp818 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp819 = (frost$core$Int64) {9};
org$frostlanguage$frostc$MethodDecl* $tmp820 = *(&local3);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$MethodDecl($tmp818, $tmp819, ((org$frostlanguage$frostc$IR$Value*) NULL), $tmp820);
frost$collections$Array* $tmp821 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp822 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp821, $tmp822);
frost$collections$Array$add$frost$collections$Array$T($tmp821, ((frost$core$Object*) param4));
org$frostlanguage$frostc$IR$Value* $tmp823 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp818, ((frost$collections$ListView*) $tmp821), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// unreffing REF($278:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
// unreffing REF($270:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
// unreffing REF($266:org.frostlanguage.frostc.IR.Value)
org$frostlanguage$frostc$MethodDecl* $tmp824 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
// unreffing m
*(&local3) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$Pair* $tmp825 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
// unreffing matches
*(&local2) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp826 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp823;
block14:;
// line 302
org$frostlanguage$frostc$MethodDecl* $tmp827 = *(&local3);
frost$core$Weak** $tmp828 = &$tmp827->owner;
frost$core$Weak* $tmp829 = *$tmp828;
frost$core$Object* $tmp830 = frost$core$Weak$get$R$frost$core$Weak$T($tmp829);
frost$core$String** $tmp831 = &((org$frostlanguage$frostc$ClassDecl*) $tmp830)->name;
frost$core$String* $tmp832 = *$tmp831;
frost$core$Bit $tmp833 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp832, &$s834);
bool $tmp835 = $tmp833.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp830);
// unreffing REF($311:frost.core.Weak.T)
if ($tmp835) goto block19; else goto block20;
block19:;
// line 303
org$frostlanguage$frostc$MethodDecl* $tmp836 = *(&local3);
frost$core$String** $tmp837 = &((org$frostlanguage$frostc$Symbol*) $tmp836)->name;
frost$core$String* $tmp838 = *$tmp837;
frost$core$Bit $tmp839 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp838, &$s840);
bool $tmp841 = $tmp839.value;
if ($tmp841) goto block21; else goto block22;
block21:;
// line 304
org$frostlanguage$frostc$IR$Value* $tmp842 = org$frostlanguage$frostc$expression$And$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing REF($330:org.frostlanguage.frostc.IR.Value?)
org$frostlanguage$frostc$MethodDecl* $tmp843 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// unreffing m
*(&local3) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$Pair* $tmp844 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing matches
*(&local2) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp845 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp842;
block22:;
// line 306
org$frostlanguage$frostc$MethodDecl* $tmp846 = *(&local3);
frost$core$String** $tmp847 = &((org$frostlanguage$frostc$Symbol*) $tmp846)->name;
frost$core$String* $tmp848 = *$tmp847;
frost$core$Bit $tmp849 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp848, &$s850);
bool $tmp851 = $tmp849.value;
if ($tmp851) goto block23; else goto block24;
block23:;
// line 307
org$frostlanguage$frostc$IR$Value* $tmp852 = org$frostlanguage$frostc$expression$Or$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// unreffing REF($361:org.frostlanguage.frostc.IR.Value?)
org$frostlanguage$frostc$MethodDecl* $tmp853 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
// unreffing m
*(&local3) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$Pair* $tmp854 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// unreffing matches
*(&local2) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp855 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp852;
block24:;
goto block20;
block20:;
// line 310
frost$collections$CollectionView* $tmp856 = org$frostlanguage$frostc$Compiler$possibleTypes$org$frostlanguage$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlanguage$frostc$Type$GT$Q(param0, param2);
org$frostlanguage$frostc$MethodDecl* $tmp857 = *(&local3);
frost$core$Weak** $tmp858 = &$tmp857->owner;
frost$core$Weak* $tmp859 = *$tmp858;
frost$core$Object* $tmp860 = frost$core$Weak$get$R$frost$core$Weak$T($tmp859);
org$frostlanguage$frostc$Type* $tmp861 = org$frostlanguage$frostc$Compiler$findType$frost$collections$CollectionView$LTorg$frostlanguage$frostc$Type$GT$org$frostlanguage$frostc$ClassDecl$R$org$frostlanguage$frostc$Type$Q(param0, $tmp856, ((org$frostlanguage$frostc$ClassDecl*) $tmp860));
*(&local4) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
org$frostlanguage$frostc$Type* $tmp862 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local4) = $tmp861;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// unreffing REF($393:org.frostlanguage.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp860);
// unreffing REF($391:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
// unreffing REF($385:frost.collections.CollectionView<org.frostlanguage.frostc.Type>?)
// line 311
org$frostlanguage$frostc$Type* $tmp863 = *(&local4);
frost$core$Bit $tmp864 = frost$core$Bit$init$builtin_bit($tmp863 != NULL);
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp866 = (frost$core$Int64) {311};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s867, $tmp866);
abort(); // unreachable
block25:;
// line 312
org$frostlanguage$frostc$Compiler$TypeContext* $tmp868 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp869 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Type* $tmp870 = *(&local4);
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp868, $tmp869, $tmp870);
org$frostlanguage$frostc$IR$Value* $tmp871 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param2, $tmp868);
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
org$frostlanguage$frostc$IR$Value* $tmp872 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local5) = $tmp871;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
// unreffing REF($425:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
// unreffing REF($420:org.frostlanguage.frostc.Compiler.TypeContext)
// line 313
org$frostlanguage$frostc$IR$Value* $tmp873 = *(&local5);
frost$core$Bit $tmp874 = frost$core$Bit$init$builtin_bit($tmp873 == NULL);
bool $tmp875 = $tmp874.value;
if ($tmp875) goto block27; else goto block28;
block27:;
// line 314
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp876 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
// unreffing target
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Type* $tmp877 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
// unreffing found
*(&local4) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$MethodDecl* $tmp878 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
// unreffing m
*(&local3) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$Pair* $tmp879 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
// unreffing matches
*(&local2) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp880 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block28:;
// line 316
org$frostlanguage$frostc$IR$Value* $tmp881 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp882 = (frost$core$Int64) {9};
org$frostlanguage$frostc$IR$Value* $tmp883 = *(&local5);
org$frostlanguage$frostc$MethodDecl* $tmp884 = *(&local3);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$MethodDecl($tmp881, $tmp882, $tmp883, $tmp884);
frost$collections$Array* $tmp885 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp886 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp885, $tmp886);
frost$collections$Array$add$frost$collections$Array$T($tmp885, ((frost$core$Object*) param4));
org$frostlanguage$frostc$IR$Value* $tmp887 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp881, ((frost$collections$ListView*) $tmp885), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// unreffing REF($488:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
// unreffing REF($480:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
// unreffing REF($475:org.frostlanguage.frostc.IR.Value)
org$frostlanguage$frostc$IR$Value* $tmp888 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// unreffing target
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Type* $tmp889 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// unreffing found
*(&local4) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$MethodDecl* $tmp890 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
// unreffing m
*(&local3) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$Pair* $tmp891 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
// unreffing matches
*(&local2) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp892 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp887;
block10:;
// line 319
org$frostlanguage$frostc$Compiler$TypeContext* $tmp893 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp894 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp893, $tmp894);
org$frostlanguage$frostc$IR$Value* $tmp895 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param2, $tmp893);
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
org$frostlanguage$frostc$IR$Value* $tmp896 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
*(&local6) = $tmp895;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
// unreffing REF($530:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// unreffing REF($527:org.frostlanguage.frostc.Compiler.TypeContext)
// line 320
org$frostlanguage$frostc$IR$Value* $tmp897 = *(&local6);
frost$core$Bit $tmp898 = frost$core$Bit$init$builtin_bit($tmp897 == NULL);
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block29; else goto block30;
block29:;
// line 321
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp900 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// unreffing compiledLeft
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Pair* $tmp901 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// unreffing matches
*(&local2) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp902 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block30:;
// line 323
org$frostlanguage$frostc$Compiler$TypeContext* $tmp903 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp904 = (frost$core$Int64) {3};
org$frostlanguage$frostc$IR$Value* $tmp905 = *(&local6);
$fn907 $tmp906 = ($fn907) $tmp905->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp908 = $tmp906($tmp905);
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp903, $tmp904, $tmp908);
org$frostlanguage$frostc$IR$Value* $tmp909 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param4, $tmp903);
*(&local7) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
org$frostlanguage$frostc$IR$Value* $tmp910 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local7) = $tmp909;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
// unreffing REF($577:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
// unreffing REF($575:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
// unreffing REF($570:org.frostlanguage.frostc.Compiler.TypeContext)
// line 325
org$frostlanguage$frostc$IR$Value* $tmp911 = *(&local7);
frost$core$Bit $tmp912 = frost$core$Bit$init$builtin_bit($tmp911 == NULL);
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block31; else goto block32;
block31:;
// line 326
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp914 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// unreffing compiledRight
*(&local7) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp915 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// unreffing compiledLeft
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Pair* $tmp916 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
// unreffing matches
*(&local2) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp917 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block32:;
// line 328
org$frostlanguage$frostc$IR$Value* $tmp918 = *(&local6);
$fn920 $tmp919 = ($fn920) $tmp918->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp921 = $tmp919($tmp918);
org$frostlanguage$frostc$Type* $tmp922 = org$frostlanguage$frostc$Type$BuiltinBit$R$org$frostlanguage$frostc$Type();
frost$core$Bit $tmp923 = org$frostlanguage$frostc$Type$$EQ$org$frostlanguage$frostc$Type$R$frost$core$Bit($tmp921, $tmp922);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block35; else goto block36;
block35:;
*(&local8) = $tmp923;
goto block37;
block36:;
org$frostlanguage$frostc$IR$Value* $tmp925 = *(&local6);
$fn927 $tmp926 = ($fn927) $tmp925->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp928 = $tmp926($tmp925);
frost$core$Bit $tmp929 = org$frostlanguage$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp928);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// unreffing REF($638:org.frostlanguage.frostc.Type)
*(&local8) = $tmp929;
goto block37;
block37:;
frost$core$Bit $tmp930 = *(&local8);
bool $tmp931 = $tmp930.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
// unreffing REF($629:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
// unreffing REF($628:org.frostlanguage.frostc.Type)
if ($tmp931) goto block33; else goto block34;
block33:;
// line 330
org$frostlanguage$frostc$ASTNode* $tmp932 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp933 = (frost$core$Int64) {5};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp932, $tmp933, param1, param2, param3, param4);
org$frostlanguage$frostc$Type* $tmp934 = org$frostlanguage$frostc$Compiler$preferredType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type$Q(param0, $tmp932);
*(&local9) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
org$frostlanguage$frostc$Type* $tmp935 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local9) = $tmp934;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// unreffing REF($658:org.frostlanguage.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// unreffing REF($655:org.frostlanguage.frostc.ASTNode)
// line 332
org$frostlanguage$frostc$Type* $tmp936 = *(&local9);
frost$core$Bit $tmp937 = frost$core$Bit$init$builtin_bit($tmp936 != NULL);
bool $tmp938 = $tmp937.value;
if ($tmp938) goto block38; else goto block39;
block38:;
// line 333
org$frostlanguage$frostc$IR** $tmp939 = &param0->ir;
org$frostlanguage$frostc$IR* $tmp940 = *$tmp939;
org$frostlanguage$frostc$IR$Statement* $tmp941 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp942 = (frost$core$Int64) {0};
org$frostlanguage$frostc$IR$Value* $tmp943 = *(&local6);
org$frostlanguage$frostc$IR$Value* $tmp944 = *(&local7);
org$frostlanguage$frostc$Type* $tmp945 = *(&local9);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$Type($tmp941, $tmp942, param1, $tmp943, param3, $tmp944, $tmp945);
$fn947 $tmp946 = ($fn947) $tmp940->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp948 = $tmp946($tmp940, $tmp941);
*(&local10) = $tmp948;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
// unreffing REF($681:org.frostlanguage.frostc.IR.Statement)
// line 335
org$frostlanguage$frostc$IR$Value* $tmp949 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp950 = (frost$core$Int64) {7};
org$frostlanguage$frostc$IR$Statement$ID $tmp951 = *(&local10);
org$frostlanguage$frostc$Type* $tmp952 = *(&local9);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Statement$ID$org$frostlanguage$frostc$Type($tmp949, $tmp950, $tmp951, $tmp952);
org$frostlanguage$frostc$IR$Value* $tmp953 = org$frostlanguage$frostc$Compiler$coerce$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp949, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
// unreffing REF($704:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
// unreffing REF($697:org.frostlanguage.frostc.IR.Value)
org$frostlanguage$frostc$Type* $tmp954 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
// unreffing resultType
*(&local9) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp955 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// unreffing compiledRight
*(&local7) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp956 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
// unreffing compiledLeft
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Pair* $tmp957 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing matches
*(&local2) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp958 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp953;
block39:;
org$frostlanguage$frostc$Type* $tmp959 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// unreffing resultType
*(&local9) = ((org$frostlanguage$frostc$Type*) NULL);
goto block34;
block34:;
// line 338
frost$core$String* $tmp960 = org$frostlanguage$frostc$Compiler$operatorName$org$frostlanguage$frostc$parser$Token$Kind$R$frost$core$String(param3);
frost$core$String* $tmp961 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s962, $tmp960);
frost$core$String* $tmp963 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp961, &$s964);
org$frostlanguage$frostc$IR$Value* $tmp965 = *(&local6);
$fn967 $tmp966 = ($fn967) $tmp965->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp968 = $tmp966($tmp965);
frost$core$String* $tmp969 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s970, ((frost$core$Object*) $tmp968));
frost$core$String* $tmp971 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp969, &$s972);
org$frostlanguage$frostc$IR$Value* $tmp973 = *(&local7);
$fn975 $tmp974 = ($fn975) $tmp973->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp976 = $tmp974($tmp973);
frost$core$String* $tmp977 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp971, ((frost$core$Object*) $tmp976));
frost$core$String* $tmp978 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp977, &$s979);
frost$core$String* $tmp980 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp963, $tmp978);
$fn982 $tmp981 = ($fn982) param5->$class->vtable[2];
frost$core$String* $tmp983 = $tmp981(param5);
frost$core$String* $tmp984 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp980, $tmp983);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, $tmp984);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
// unreffing REF($766:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// unreffing REF($765:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
// unreffing REF($763:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
// unreffing REF($762:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
// unreffing REF($761:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
// unreffing REF($759:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
// unreffing REF($755:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
// unreffing REF($754:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
// unreffing REF($752:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
// unreffing REF($748:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
// unreffing REF($747:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
// unreffing REF($746:frost.core.String)
// line 341
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp985 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
// unreffing compiledRight
*(&local7) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp986 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
// unreffing compiledLeft
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Pair* $tmp987 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
// unreffing matches
*(&local2) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp988 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
// unreffing folded
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block3:;
frost$core$Bit $tmp989 = frost$core$Bit$init$builtin_bit(false);
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp991 = (frost$core$Int64) {271};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s992, $tmp991, &$s993);
abort(); // unreachable
block40:;
abort(); // unreachable

}
void org$frostlanguage$frostc$expression$Binary$init(org$frostlanguage$frostc$expression$Binary* param0) {

return;

}
void org$frostlanguage$frostc$expression$Binary$cleanup(org$frostlanguage$frostc$expression$Binary* param0) {

// line 16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

