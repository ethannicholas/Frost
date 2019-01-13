#include "org/pandalanguage/pandac/expression/Binary.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/expression/Call.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/expression/Binary/_Closure2.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/UInt64.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/expression/And.h"
#include "org/pandalanguage/pandac/expression/Or.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Statement.h"


static panda$core$String $s1;
org$pandalanguage$pandac$expression$Binary$class_type org$pandalanguage$pandac$expression$Binary$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$expression$Binary$cleanup} };

typedef panda$core$Bit (*$fn77)(org$pandalanguage$pandac$expression$Binary$_Closure2*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$ListView* (*$fn81)(panda$collections$ListView*, panda$core$MutableMethod*);
typedef panda$core$Bit (*$fn191)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$ListView* (*$fn195)(panda$collections$ListView*, panda$core$MutableMethod*);
typedef panda$collections$Iterator* (*$fn231)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn235)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn240)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn259)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn319)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn323)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn328)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn336)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn340)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn345)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn428)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn444)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn460)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn471)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn484)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn495)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn505)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn514)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn525)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn539)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn553)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn567)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn581)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn599)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn612)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn625)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn638)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn651)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn655)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn670)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn756)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn777)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn792)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn811)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn907)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn920)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn927)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn947)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn967)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn975)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$String* (*$fn982)(org$pandalanguage$pandac$Compiler$TypeContext*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79", 42, 927599221097484629, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x70\x61\x6e\x64\x61", 12, -4134813513201119132, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x70\x61\x6e\x64\x61", 12, -4134813513201119132, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x69\x6c\x65\x64\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x63\x61\x73\x74\x20", 21, -924378024990471136, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x74\x20", 4, 138031278, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x70\x61\x6e\x64\x61", 12, -4134813513201119132, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20", 20, -3867798768884550044, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27\x2c\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 38, -7484923523838618715, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x70\x61\x6e\x64\x61", 12, -4134813513201119132, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x66\x6f\x6c\x64\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x6c\x65\x66\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x6f\x70\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64\x2c\x20\x72\x69\x67\x68\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 285, 4817650893138720798, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x70\x61\x6e\x64\x61", 12, -4134813513201119132, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x70\x61\x6e\x64\x61", 12, -4134813513201119132, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27", 14, -1314037361094274531, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x6f\x6e\x20", 5, 14602569225, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x70\x61\x6e\x64\x61", 12, -4134813513201119132, NULL };
static panda$core$String $s993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6c\x65\x66\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x6f\x70\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64\x2c\x20\x72\x69\x67\x68\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 383, -4228319139395084085, NULL };

panda$core$Bit org$pandalanguage$pandac$expression$Binary$$anonymous3$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0) {

// line 88
org$pandalanguage$pandac$Annotations** $tmp2 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp3 = *$tmp2;
panda$core$Bit $tmp4 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp3);
return $tmp4;

}
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Binary$findOverloadedOperator$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Type* param1, org$pandalanguage$pandac$parser$Token$Kind param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$Compiler$TypeContext* param4) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$Symbol* local2 = NULL;
panda$collections$Array* local3 = NULL;
panda$core$Bit local4;
panda$collections$Array* local5 = NULL;
org$pandalanguage$pandac$Pair* local6 = NULL;
org$pandalanguage$pandac$Pair* local7 = NULL;
org$pandalanguage$pandac$Type* local8 = NULL;
org$pandalanguage$pandac$ClassDecl* local9 = NULL;
panda$collections$Array* local10 = NULL;
panda$collections$Array* local11 = NULL;
org$pandalanguage$pandac$Pair* local12 = NULL;
org$pandalanguage$pandac$Pair* local13 = NULL;
// line 20
panda$core$Bit $tmp5 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit(param1);
panda$core$Bit $tmp6 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5);
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// line 21
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
return ((org$pandalanguage$pandac$Pair*) NULL);
block2:;
// line 23
org$pandalanguage$pandac$ClassDecl* $tmp8 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
org$pandalanguage$pandac$ClassDecl* $tmp9 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
*(&local0) = $tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
// unreffing REF($10:org.pandalanguage.pandac.ClassDecl?)
// line 24
org$pandalanguage$pandac$ClassDecl* $tmp10 = *(&local0);
panda$core$Bit $tmp11 = panda$core$Bit$init$builtin_bit($tmp10 == NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block3:;
// line 25
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp13 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$Pair*) NULL);
block4:;
// line 27
org$pandalanguage$pandac$IR$Value* $tmp14 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp15 = (panda$core$Int64) {7};
panda$core$Int64 $tmp16 = (panda$core$Int64) {18446744073709551615};
org$pandalanguage$pandac$IR$Statement$ID $tmp17 = org$pandalanguage$pandac$IR$Statement$ID$init$panda$core$Int64($tmp16);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp14, $tmp15, $tmp17, param1);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
org$pandalanguage$pandac$IR$Value* $tmp18 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
*(&local1) = $tmp14;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($37:org.pandalanguage.pandac.IR.Value)
// line 28
org$pandalanguage$pandac$ClassDecl* $tmp19 = *(&local0);
org$pandalanguage$pandac$SymbolTable* $tmp20 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp19);
panda$core$String* $tmp21 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(param2);
org$pandalanguage$pandac$Symbol* $tmp22 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp20, $tmp21);
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
org$pandalanguage$pandac$Symbol* $tmp23 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
*(&local2) = $tmp22;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
// unreffing REF($57:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($56:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($55:org.pandalanguage.pandac.SymbolTable)
// line 29
org$pandalanguage$pandac$Symbol* $tmp24 = *(&local2);
panda$core$Bit $tmp25 = panda$core$Bit$init$builtin_bit($tmp24 != NULL);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block5; else goto block6;
block5:;
// line 30
panda$collections$Array* $tmp27 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp28 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp27, $tmp28);
panda$collections$Array$add$panda$collections$Array$T($tmp27, ((panda$core$Object*) param3));
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$collections$Array* $tmp29 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
*(&local3) = $tmp27;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($81:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 32
org$pandalanguage$pandac$Symbol* $tmp30 = *(&local2);
org$pandalanguage$pandac$Symbol$Kind* $tmp31 = &$tmp30->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp32 = *$tmp31;
panda$core$Int64 $tmp33 = $tmp32.$rawValue;
panda$core$Int64 $tmp34 = (panda$core$Int64) {5};
panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp33, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block8; else goto block9;
block8:;
// line 34
org$pandalanguage$pandac$Symbol* $tmp37 = *(&local2);
org$pandalanguage$pandac$Annotations** $tmp38 = &((org$pandalanguage$pandac$MethodDecl*) $tmp37)->annotations;
org$pandalanguage$pandac$Annotations* $tmp39 = *$tmp38;
panda$core$Bit $tmp40 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp39);
panda$core$Bit $tmp41 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp40);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block12; else goto block13;
block12:;
*(&local4) = $tmp41;
goto block14;
block13:;
panda$core$Bit $tmp43 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit(param1);
*(&local4) = $tmp43;
goto block14;
block14:;
panda$core$Bit $tmp44 = *(&local4);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block10; else goto block11;
block10:;
// line 35
panda$collections$Array* $tmp46 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp46);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
panda$collections$Array* $tmp47 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
*(&local5) = $tmp46;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing REF($126:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 36
panda$collections$Array* $tmp48 = *(&local5);
org$pandalanguage$pandac$Symbol* $tmp49 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp48, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp49)));
// line 37
org$pandalanguage$pandac$Position $tmp50 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$IR$Value* $tmp51 = *(&local1);
panda$collections$Array* $tmp52 = *(&local5);
panda$collections$Array* $tmp53 = *(&local3);
org$pandalanguage$pandac$Pair* $tmp54 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, $tmp50, $tmp51, ((panda$collections$ListView*) $tmp52), ((panda$collections$ListView*) $tmp53), param4);
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
org$pandalanguage$pandac$Pair* $tmp55 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
*(&local6) = $tmp54;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
// unreffing REF($154:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
// line 39
org$pandalanguage$pandac$Pair* $tmp56 = *(&local6);
panda$core$Bit $tmp57 = panda$core$Bit$init$builtin_bit($tmp56 != NULL);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block15; else goto block16;
block15:;
// line 40
org$pandalanguage$pandac$Pair* $tmp59 = *(&local6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
org$pandalanguage$pandac$Pair* $tmp60 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing result
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp61 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing list
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp62 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing args
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp63 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp64 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp65 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp59;
block16:;
org$pandalanguage$pandac$Pair* $tmp66 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing result
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp67 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing list
*(&local5) = ((panda$collections$Array*) NULL);
goto block11;
block11:;
goto block7;
block9:;
panda$core$Int64 $tmp68 = (panda$core$Int64) {6};
panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp33, $tmp68);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block17; else goto block18;
block17:;
// line 45
org$pandalanguage$pandac$Position $tmp71 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$IR$Value* $tmp72 = *(&local1);
org$pandalanguage$pandac$Symbol* $tmp73 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp74 = &((org$pandalanguage$pandac$Methods*) $tmp73)->methods;
org$pandalanguage$pandac$FixedArray* $tmp75 = *$tmp74;
org$pandalanguage$pandac$expression$Binary$_Closure2* $tmp76 = (org$pandalanguage$pandac$expression$Binary$_Closure2*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$expression$Binary$_Closure2$class);
org$pandalanguage$pandac$expression$Binary$_Closure2$init$org$pandalanguage$pandac$Type($tmp76, param1);
panda$core$MutableMethod* $tmp78 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp78, ((panda$core$Int8*) org$pandalanguage$pandac$expression$Binary$_Closure2$$anonymous1$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit), ((panda$core$Object*) $tmp76));
ITable* $tmp79 = ((panda$collections$ListView*) $tmp75)->$class->itable;
while ($tmp79->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp79 = $tmp79->next;
}
$fn81 $tmp80 = $tmp79->methods[4];
panda$collections$ListView* $tmp82 = $tmp80(((panda$collections$ListView*) $tmp75), ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp78)));
panda$collections$Array* $tmp83 = *(&local3);
org$pandalanguage$pandac$Pair* $tmp84 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, $tmp71, $tmp72, $tmp82, ((panda$collections$ListView*) $tmp83), param4);
*(&local7) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
org$pandalanguage$pandac$Pair* $tmp85 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
*(&local7) = $tmp84;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing REF($245:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($241:panda.collections.ListView<panda.collections.ListView.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing REF($234:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing REF($231:org.pandalanguage.pandac.expression.Binary._Closure2)
// line 48
org$pandalanguage$pandac$Pair* $tmp86 = *(&local7);
panda$core$Bit $tmp87 = panda$core$Bit$init$builtin_bit($tmp86 != NULL);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block19; else goto block20;
block19:;
// line 49
org$pandalanguage$pandac$Pair* $tmp89 = *(&local7);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
org$pandalanguage$pandac$Pair* $tmp90 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing result
*(&local7) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp91 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing args
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp92 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp93 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp94 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp89;
block20:;
org$pandalanguage$pandac$Pair* $tmp95 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
// unreffing result
*(&local7) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block7;
block18:;
// line 53
panda$core$Bit $tmp96 = panda$core$Bit$init$builtin_bit(false);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp98 = (panda$core$Int64) {53};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s99, $tmp98);
abort(); // unreachable
block21:;
goto block7;
block7:;
panda$collections$Array* $tmp100 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
// unreffing args
*(&local3) = ((panda$collections$Array*) NULL);
goto block6;
block6:;
// line 59
org$pandalanguage$pandac$Type* $tmp101 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, param3);
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
org$pandalanguage$pandac$Type* $tmp102 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
*(&local8) = $tmp101;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing REF($322:org.pandalanguage.pandac.Type?)
// line 60
org$pandalanguage$pandac$Type* $tmp103 = *(&local8);
panda$core$Bit $tmp104 = panda$core$Bit$init$builtin_bit($tmp103 == NULL);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block23; else goto block24;
block23:;
// line 61
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
org$pandalanguage$pandac$Type* $tmp106 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp107 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp108 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp109 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$Pair*) NULL);
block24:;
// line 63
org$pandalanguage$pandac$Type* $tmp110 = *(&local8);
panda$core$Bit $tmp111 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp110);
panda$core$Bit $tmp112 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block25; else goto block26;
block25:;
// line 64
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
org$pandalanguage$pandac$Type* $tmp114 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp115 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp116 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp117 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$Pair*) NULL);
block26:;
// line 66
org$pandalanguage$pandac$Type* $tmp118 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp119 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp118);
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
org$pandalanguage$pandac$ClassDecl* $tmp120 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
*(&local9) = $tmp119;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
// unreffing REF($397:org.pandalanguage.pandac.ClassDecl?)
// line 67
org$pandalanguage$pandac$ClassDecl* $tmp121 = *(&local9);
panda$core$Bit $tmp122 = panda$core$Bit$init$builtin_bit($tmp121 == NULL);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block27; else goto block28;
block27:;
// line 68
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp124 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing rightCl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp125 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp126 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp127 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp128 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$Pair*) NULL);
block28:;
// line 70
org$pandalanguage$pandac$ClassDecl* $tmp129 = *(&local9);
org$pandalanguage$pandac$SymbolTable* $tmp130 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp129);
panda$core$String* $tmp131 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(param2);
org$pandalanguage$pandac$Symbol* $tmp132 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp130, $tmp131);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
org$pandalanguage$pandac$Symbol* $tmp133 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
*(&local2) = $tmp132;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing REF($448:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($447:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing REF($446:org.pandalanguage.pandac.SymbolTable)
// line 71
org$pandalanguage$pandac$Symbol* $tmp134 = *(&local2);
panda$core$Bit $tmp135 = panda$core$Bit$init$builtin_bit($tmp134 == NULL);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block29; else goto block30;
block29:;
// line 72
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp137 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing rightCl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp138 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp139 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp140 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp141 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$Pair*) NULL);
block30:;
// line 74
panda$collections$Array* $tmp142 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp143 = (panda$core$Int64) {2};
panda$collections$Array$init$panda$core$Int64($tmp142, $tmp143);
org$pandalanguage$pandac$ASTNode* $tmp144 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp145 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position $tmp146 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$IR$Value* $tmp147 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp144, $tmp145, $tmp146, $tmp147);
panda$collections$Array$add$panda$collections$Array$T($tmp142, ((panda$core$Object*) $tmp144));
panda$collections$Array$add$panda$collections$Array$T($tmp142, ((panda$core$Object*) param3));
*(&local10) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
panda$collections$Array* $tmp148 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
*(&local10) = $tmp142;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing REF($505:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing REF($500:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 75
org$pandalanguage$pandac$Symbol* $tmp149 = *(&local2);
org$pandalanguage$pandac$Symbol$Kind* $tmp150 = &$tmp149->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp151 = *$tmp150;
panda$core$Int64 $tmp152 = $tmp151.$rawValue;
panda$core$Int64 $tmp153 = (panda$core$Int64) {5};
panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp152, $tmp153);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block32; else goto block33;
block32:;
// line 77
org$pandalanguage$pandac$Symbol* $tmp156 = *(&local2);
org$pandalanguage$pandac$Annotations** $tmp157 = &((org$pandalanguage$pandac$MethodDecl*) $tmp156)->annotations;
org$pandalanguage$pandac$Annotations* $tmp158 = *$tmp157;
panda$core$Bit $tmp159 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp158);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block34; else goto block35;
block34:;
// line 78
panda$collections$Array* $tmp161 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp161);
*(&local11) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
panda$collections$Array* $tmp162 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
*(&local11) = $tmp161;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// unreffing REF($547:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 79
panda$collections$Array* $tmp163 = *(&local11);
org$pandalanguage$pandac$Symbol* $tmp164 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp163, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp164)));
// line 80
org$pandalanguage$pandac$Position $tmp165 = org$pandalanguage$pandac$Position$init();
panda$collections$Array* $tmp166 = *(&local11);
panda$collections$Array* $tmp167 = *(&local10);
org$pandalanguage$pandac$Pair* $tmp168 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, $tmp165, ((org$pandalanguage$pandac$IR$Value*) NULL), ((panda$collections$ListView*) $tmp166), ((panda$collections$ListView*) $tmp167), param4);
*(&local12) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
org$pandalanguage$pandac$Pair* $tmp169 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
*(&local12) = $tmp168;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
// unreffing REF($573:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
// line 81
org$pandalanguage$pandac$Pair* $tmp170 = *(&local12);
panda$core$Bit $tmp171 = panda$core$Bit$init$builtin_bit($tmp170 != NULL);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block36; else goto block37;
block36:;
// line 82
org$pandalanguage$pandac$Pair* $tmp173 = *(&local12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
org$pandalanguage$pandac$Pair* $tmp174 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
// unreffing result
*(&local12) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp175 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing list
*(&local11) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp176 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing args
*(&local10) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp177 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing rightCl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp178 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp179 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp180 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp181 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp173;
block37:;
org$pandalanguage$pandac$Pair* $tmp182 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
// unreffing result
*(&local12) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp183 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing list
*(&local11) = ((panda$collections$Array*) NULL);
goto block35;
block35:;
goto block31;
block33:;
panda$core$Int64 $tmp184 = (panda$core$Int64) {6};
panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp152, $tmp184);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block38; else goto block39;
block38:;
// line 87
org$pandalanguage$pandac$Position $tmp187 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Symbol* $tmp188 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp189 = &((org$pandalanguage$pandac$Methods*) $tmp188)->methods;
org$pandalanguage$pandac$FixedArray* $tmp190 = *$tmp189;
panda$core$Method* $tmp192 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp192, ((panda$core$Int8*) org$pandalanguage$pandac$expression$Binary$$anonymous3$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit), ((panda$core$Immutable*) NULL));
ITable* $tmp193 = ((panda$collections$ListView*) $tmp190)->$class->itable;
while ($tmp193->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[4];
panda$collections$ListView* $tmp196 = $tmp194(((panda$collections$ListView*) $tmp190), ((panda$core$MutableMethod*) $tmp192));
panda$collections$Array* $tmp197 = *(&local10);
org$pandalanguage$pandac$Pair* $tmp198 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, $tmp187, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp196, ((panda$collections$ListView*) $tmp197), param4);
*(&local13) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
org$pandalanguage$pandac$Pair* $tmp199 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
*(&local13) = $tmp198;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing REF($669:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing REF($665:panda.collections.ListView<panda.collections.ListView.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
// unreffing REF($659:panda.core.Method)
// line 89
org$pandalanguage$pandac$Pair* $tmp200 = *(&local13);
panda$core$Bit $tmp201 = panda$core$Bit$init$builtin_bit($tmp200 != NULL);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block40; else goto block41;
block40:;
// line 90
org$pandalanguage$pandac$Pair* $tmp203 = *(&local13);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
org$pandalanguage$pandac$Pair* $tmp204 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing result
*(&local13) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp205 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing args
*(&local10) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp206 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing rightCl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp207 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp208 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp209 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp210 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp203;
block41:;
org$pandalanguage$pandac$Pair* $tmp211 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing result
*(&local13) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block31;
block39:;
// line 94
panda$core$Bit $tmp212 = panda$core$Bit$init$builtin_bit(false);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block42; else goto block43;
block43:;
panda$core$Int64 $tmp214 = (panda$core$Int64) {94};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s215, $tmp214);
abort(); // unreachable
block42:;
goto block31;
block31:;
// line 97
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
panda$collections$Array* $tmp216 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
// unreffing args
*(&local10) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp217 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
// unreffing rightCl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp218 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp219 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp220 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp221 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$Pair*) NULL);

}
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Binary$findOverloadedOperator$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$parser$Token$Kind param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$Compiler$TypeContext* param4) {

panda$collections$CollectionView* local0 = NULL;
org$pandalanguage$pandac$Pair* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$Pair* local3 = NULL;
org$pandalanguage$pandac$Pair* local4 = NULL;
panda$core$Int64 local5;
panda$core$Bit local6;
panda$collections$Array* local7 = NULL;
org$pandalanguage$pandac$MethodRef* local8 = NULL;
org$pandalanguage$pandac$MethodRef* local9 = NULL;
// line 103
panda$collections$CollectionView* $tmp222 = org$pandalanguage$pandac$Compiler$possibleTypes$org$pandalanguage$pandac$ASTNode$R$panda$collections$CollectionView$LTorg$pandalanguage$pandac$Type$GT$Q(param0, param1);
*(&local0) = ((panda$collections$CollectionView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
panda$collections$CollectionView* $tmp223 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
*(&local0) = $tmp222;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing REF($1:panda.collections.CollectionView<org.pandalanguage.pandac.Type>?)
// line 104
panda$collections$CollectionView* $tmp224 = *(&local0);
panda$core$Bit $tmp225 = panda$core$Bit$init$builtin_bit($tmp224 != NULL);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block1; else goto block2;
block1:;
// line 105
*(&local1) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
org$pandalanguage$pandac$Pair* $tmp227 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
*(&local1) = ((org$pandalanguage$pandac$Pair*) NULL);
// line 106
panda$collections$CollectionView* $tmp228 = *(&local0);
ITable* $tmp229 = ((panda$collections$Iterable*) $tmp228)->$class->itable;
while ($tmp229->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp229 = $tmp229->next;
}
$fn231 $tmp230 = $tmp229->methods[0];
panda$collections$Iterator* $tmp232 = $tmp230(((panda$collections$Iterable*) $tmp228));
goto block3;
block3:;
ITable* $tmp233 = $tmp232->$class->itable;
while ($tmp233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp233 = $tmp233->next;
}
$fn235 $tmp234 = $tmp233->methods[0];
panda$core$Bit $tmp236 = $tmp234($tmp232);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block5; else goto block4;
block4:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp238 = $tmp232->$class->itable;
while ($tmp238->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp238 = $tmp238->next;
}
$fn240 $tmp239 = $tmp238->methods[1];
panda$core$Object* $tmp241 = $tmp239($tmp232);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp241)));
org$pandalanguage$pandac$Type* $tmp242 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp241);
// line 107
org$pandalanguage$pandac$Type* $tmp243 = *(&local2);
org$pandalanguage$pandac$Pair* $tmp244 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Cpanda$core$Int64$GT$Q(param0, param1, $tmp243);
*(&local3) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
org$pandalanguage$pandac$Pair* $tmp245 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
*(&local3) = $tmp244;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
// unreffing REF($52:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, panda.core.Int64>?)
// line 108
org$pandalanguage$pandac$Pair* $tmp246 = *(&local3);
panda$core$Bit $tmp247 = panda$core$Bit$init$builtin_bit($tmp246 != NULL);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp249 = (panda$core$Int64) {108};
panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s251, ((panda$core$Object*) param1));
panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp250, &$s253);
org$pandalanguage$pandac$Type* $tmp254 = *(&local2);
panda$core$String* $tmp255 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp252, ((panda$core$Object*) $tmp254));
panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp255, &$s257);
$fn259 $tmp258 = ($fn259) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp260 = $tmp258(param1);
org$pandalanguage$pandac$Position$wrapper* $tmp261;
$tmp261 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp261->value = $tmp260;
panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp256, ((panda$core$Object*) $tmp261));
panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp262, &$s264);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s265, $tmp249, $tmp263);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing REF($81:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// unreffing REF($80:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
// unreffing REF($79:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing REF($76:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
// unreffing REF($75:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
// unreffing REF($72:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing REF($71:panda.core.String)
abort(); // unreachable
block6:;
// line 110
org$pandalanguage$pandac$Type* $tmp266 = *(&local2);
org$pandalanguage$pandac$Pair* $tmp267 = org$pandalanguage$pandac$expression$Binary$findOverloadedOperator$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, $tmp266, param2, param3, param4);
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
org$pandalanguage$pandac$Pair* $tmp268 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
*(&local4) = $tmp267;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing REF($107:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
// line 111
org$pandalanguage$pandac$Pair* $tmp269 = *(&local4);
panda$core$Bit $tmp270 = panda$core$Bit$init$builtin_bit($tmp269 != NULL);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block8; else goto block9;
block8:;
// line 112
org$pandalanguage$pandac$Pair* $tmp272 = *(&local4);
panda$core$Object** $tmp273 = &$tmp272->second;
panda$core$Object* $tmp274 = *$tmp273;
org$pandalanguage$pandac$Pair* $tmp275 = *(&local3);
panda$core$Object** $tmp276 = &$tmp275->second;
panda$core$Object* $tmp277 = *$tmp276;
int64_t $tmp278 = ((panda$core$Int64$wrapper*) $tmp274)->value.value;
int64_t $tmp279 = ((panda$core$Int64$wrapper*) $tmp277)->value.value;
int64_t $tmp280 = $tmp278 + $tmp279;
panda$core$Int64 $tmp281 = (panda$core$Int64) {$tmp280};
*(&local5) = $tmp281;
// line 113
org$pandalanguage$pandac$Pair* $tmp282 = *(&local1);
panda$core$Bit $tmp283 = panda$core$Bit$init$builtin_bit($tmp282 == NULL);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block12; else goto block13;
block12:;
*(&local6) = $tmp283;
goto block14;
block13:;
panda$core$Int64 $tmp285 = *(&local5);
org$pandalanguage$pandac$Pair* $tmp286 = *(&local1);
panda$core$Object** $tmp287 = &$tmp286->second;
panda$core$Object* $tmp288 = *$tmp287;
int64_t $tmp289 = $tmp285.value;
int64_t $tmp290 = ((panda$core$Int64$wrapper*) $tmp288)->value.value;
bool $tmp291 = $tmp289 < $tmp290;
panda$core$Bit $tmp292 = (panda$core$Bit) {$tmp291};
*(&local6) = $tmp292;
goto block14;
block14:;
panda$core$Bit $tmp293 = *(&local6);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block10; else goto block15;
block10:;
// line 114
org$pandalanguage$pandac$Pair* $tmp295 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
org$pandalanguage$pandac$Pair* $tmp296 = *(&local4);
panda$core$Object** $tmp297 = &$tmp296->first;
panda$core$Object* $tmp298 = *$tmp297;
panda$core$Int64 $tmp299 = *(&local5);
panda$core$Int64$wrapper* $tmp300;
$tmp300 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp300->value = $tmp299;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp295, ((panda$core$Object*) ((panda$collections$ListView*) $tmp298)), ((panda$core$Object*) $tmp300));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
org$pandalanguage$pandac$Pair* $tmp301 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
*(&local1) = $tmp295;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
// unreffing REF($173:org.pandalanguage.pandac.Pair.B)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing REF($164:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>)
goto block11;
block15:;
// line 116
panda$core$Int64 $tmp302 = *(&local5);
org$pandalanguage$pandac$Pair* $tmp303 = *(&local1);
panda$core$Object** $tmp304 = &$tmp303->second;
panda$core$Object* $tmp305 = *$tmp304;
panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp302, ((panda$core$Int64$wrapper*) $tmp305)->value);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block16; else goto block17;
block16:;
// line 117
panda$collections$Array* $tmp308 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp308);
*(&local7) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
panda$collections$Array* $tmp309 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
*(&local7) = $tmp308;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing REF($200:panda.collections.Array<org.pandalanguage.pandac.MethodRef>)
// line 118
panda$collections$Array* $tmp310 = *(&local7);
org$pandalanguage$pandac$Pair* $tmp311 = *(&local1);
panda$core$Object** $tmp312 = &$tmp311->first;
panda$core$Object* $tmp313 = *$tmp312;
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp310, ((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp313)));
// line 119
org$pandalanguage$pandac$Pair* $tmp314 = *(&local4);
panda$core$Object** $tmp315 = &$tmp314->first;
panda$core$Object* $tmp316 = *$tmp315;
ITable* $tmp317 = ((panda$collections$Iterable*) ((panda$collections$ListView*) $tmp316))->$class->itable;
while ($tmp317->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp317 = $tmp317->next;
}
$fn319 $tmp318 = $tmp317->methods[0];
panda$collections$Iterator* $tmp320 = $tmp318(((panda$collections$Iterable*) ((panda$collections$ListView*) $tmp316)));
goto block18;
block18:;
ITable* $tmp321 = $tmp320->$class->itable;
while ($tmp321->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp321 = $tmp321->next;
}
$fn323 $tmp322 = $tmp321->methods[0];
panda$core$Bit $tmp324 = $tmp322($tmp320);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block20; else goto block19;
block19:;
*(&local8) = ((org$pandalanguage$pandac$MethodRef*) NULL);
ITable* $tmp326 = $tmp320->$class->itable;
while ($tmp326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp326 = $tmp326->next;
}
$fn328 $tmp327 = $tmp326->methods[1];
panda$core$Object* $tmp329 = $tmp327($tmp320);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp329)));
org$pandalanguage$pandac$MethodRef* $tmp330 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
*(&local8) = ((org$pandalanguage$pandac$MethodRef*) $tmp329);
// line 120
org$pandalanguage$pandac$Pair* $tmp331 = *(&local1);
panda$core$Object** $tmp332 = &$tmp331->first;
panda$core$Object* $tmp333 = *$tmp332;
ITable* $tmp334 = ((panda$collections$Iterable*) ((panda$collections$ListView*) $tmp333))->$class->itable;
while ($tmp334->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp334 = $tmp334->next;
}
$fn336 $tmp335 = $tmp334->methods[0];
panda$collections$Iterator* $tmp337 = $tmp335(((panda$collections$Iterable*) ((panda$collections$ListView*) $tmp333)));
goto block21;
block21:;
ITable* $tmp338 = $tmp337->$class->itable;
while ($tmp338->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp338 = $tmp338->next;
}
$fn340 $tmp339 = $tmp338->methods[0];
panda$core$Bit $tmp341 = $tmp339($tmp337);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block23; else goto block22;
block22:;
*(&local9) = ((org$pandalanguage$pandac$MethodRef*) NULL);
ITable* $tmp343 = $tmp337->$class->itable;
while ($tmp343->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp343 = $tmp343->next;
}
$fn345 $tmp344 = $tmp343->methods[1];
panda$core$Object* $tmp346 = $tmp344($tmp337);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp346)));
org$pandalanguage$pandac$MethodRef* $tmp347 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
*(&local9) = ((org$pandalanguage$pandac$MethodRef*) $tmp346);
// line 121
org$pandalanguage$pandac$MethodRef* $tmp348 = *(&local9);
org$pandalanguage$pandac$MethodDecl** $tmp349 = &$tmp348->value;
org$pandalanguage$pandac$MethodDecl* $tmp350 = *$tmp349;
org$pandalanguage$pandac$MethodRef* $tmp351 = *(&local8);
org$pandalanguage$pandac$MethodDecl** $tmp352 = &$tmp351->value;
org$pandalanguage$pandac$MethodDecl* $tmp353 = *$tmp352;
bool $tmp354 = $tmp350 == $tmp353;
panda$core$Bit $tmp355 = panda$core$Bit$init$builtin_bit($tmp354);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block24; else goto block25;
block24:;
// line 122
panda$core$Panda$unref$panda$core$Object$Q($tmp346);
// unreffing REF($272:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodRef* $tmp357 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
// unreffing old
*(&local9) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
// unreffing REF($261:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q($tmp329);
// unreffing REF($244:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodRef* $tmp358 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
// unreffing op
*(&local8) = ((org$pandalanguage$pandac$MethodRef*) NULL);
goto block18;
block25:;
panda$core$Panda$unref$panda$core$Object$Q($tmp346);
// unreffing REF($272:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodRef* $tmp359 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing old
*(&local9) = ((org$pandalanguage$pandac$MethodRef*) NULL);
goto block21;
block23:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
// unreffing REF($261:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 125
panda$collections$Array* $tmp360 = *(&local7);
org$pandalanguage$pandac$MethodRef* $tmp361 = *(&local8);
panda$collections$Array$add$panda$collections$Array$T($tmp360, ((panda$core$Object*) $tmp361));
panda$core$Panda$unref$panda$core$Object$Q($tmp329);
// unreffing REF($244:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodRef* $tmp362 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// unreffing op
*(&local8) = ((org$pandalanguage$pandac$MethodRef*) NULL);
goto block18;
block20:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
// unreffing REF($233:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 127
org$pandalanguage$pandac$Pair* $tmp363 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$collections$Array* $tmp364 = *(&local7);
panda$core$Int64 $tmp365 = *(&local5);
panda$core$Int64$wrapper* $tmp366;
$tmp366 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp366->value = $tmp365;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp363, ((panda$core$Object*) ((panda$collections$ListView*) $tmp364)), ((panda$core$Object*) $tmp366));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
org$pandalanguage$pandac$Pair* $tmp367 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
*(&local1) = $tmp363;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing REF($349:org.pandalanguage.pandac.Pair.B)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
// unreffing REF($343:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>)
panda$collections$Array* $tmp368 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
// unreffing a
*(&local7) = ((panda$collections$Array*) NULL);
goto block17;
block17:;
goto block11;
block11:;
goto block9;
block9:;
org$pandalanguage$pandac$Pair* $tmp369 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
// unreffing ops
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Pair* $tmp370 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
// unreffing compilerCost
*(&local3) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp241);
// unreffing REF($42:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp371 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($31:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 131
org$pandalanguage$pandac$Pair* $tmp372 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
org$pandalanguage$pandac$Pair* $tmp373 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
// unreffing best
*(&local1) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$CollectionView* $tmp374 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
// unreffing leftTypes
*(&local0) = ((panda$collections$CollectionView*) NULL);
return $tmp372;
block2:;
// line 133
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
panda$collections$CollectionView* $tmp375 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
// unreffing leftTypes
*(&local0) = ((panda$collections$CollectionView*) NULL);
return ((org$pandalanguage$pandac$Pair*) NULL);

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$expression$Binary$foldInts$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$parser$Token$Kind param2, org$pandalanguage$pandac$ASTNode* param3) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$UInt64 local2;
panda$core$UInt64 local3;
panda$core$UInt64 local4;
panda$core$UInt64 local5;
panda$core$UInt64 local6;
panda$core$UInt64 local7;
panda$core$UInt64 local8;
panda$core$UInt64 local9;
panda$core$UInt64 local10;
panda$core$UInt64 local11;
panda$core$UInt64 local12;
panda$core$UInt64 local13;
// line 138
// line 139
// line 141
panda$core$Int64* $tmp376 = &param1->$rawValue;
panda$core$Int64 $tmp377 = *$tmp376;
panda$core$Int64 $tmp378 = (panda$core$Int64) {25};
panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp377, $tmp378);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp381 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp382 = *$tmp381;
panda$core$UInt64* $tmp383 = (panda$core$UInt64*) (param1->$data + 16);
panda$core$UInt64 $tmp384 = *$tmp383;
*(&local2) = $tmp384;
// line 143
panda$core$UInt64 $tmp385 = *(&local2);
panda$core$Int64 $tmp386 = (panda$core$Int64) {9223372036854775807};
panda$core$UInt64 $tmp387 = panda$core$Int64$convert$R$panda$core$UInt64($tmp386);
uint64_t $tmp388 = $tmp385.value;
uint64_t $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 > $tmp389;
panda$core$Bit $tmp391 = (panda$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block4; else goto block5;
block4:;
// line 144
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 146
panda$core$UInt64 $tmp393 = *(&local2);
panda$core$Int64 $tmp394 = panda$core$UInt64$convert$R$panda$core$Int64($tmp393);
*(&local0) = $tmp394;
goto block1;
block3:;
// line 149
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
// line 152
panda$core$Int64* $tmp395 = &param3->$rawValue;
panda$core$Int64 $tmp396 = *$tmp395;
panda$core$Int64 $tmp397 = (panda$core$Int64) {25};
panda$core$Bit $tmp398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp396, $tmp397);
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Position* $tmp400 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp401 = *$tmp400;
panda$core$UInt64* $tmp402 = (panda$core$UInt64*) (param3->$data + 16);
panda$core$UInt64 $tmp403 = *$tmp402;
*(&local3) = $tmp403;
// line 154
panda$core$UInt64 $tmp404 = *(&local3);
panda$core$Int64 $tmp405 = (panda$core$Int64) {9223372036854775807};
panda$core$UInt64 $tmp406 = panda$core$Int64$convert$R$panda$core$UInt64($tmp405);
uint64_t $tmp407 = $tmp404.value;
uint64_t $tmp408 = $tmp406.value;
bool $tmp409 = $tmp407 > $tmp408;
panda$core$Bit $tmp410 = (panda$core$Bit) {$tmp409};
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block9; else goto block10;
block9:;
// line 155
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 157
panda$core$UInt64 $tmp412 = *(&local3);
panda$core$Int64 $tmp413 = panda$core$UInt64$convert$R$panda$core$Int64($tmp412);
*(&local1) = $tmp413;
goto block6;
block8:;
// line 160
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 163
panda$core$Int64 $tmp414 = param2.$rawValue;
panda$core$Int64 $tmp415 = (panda$core$Int64) {52};
panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp415);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block12; else goto block13;
block12:;
// line 165
panda$core$Int64 $tmp418 = *(&local0);
panda$core$Int64 $tmp419 = *(&local1);
int64_t $tmp420 = $tmp418.value;
int64_t $tmp421 = $tmp419.value;
int64_t $tmp422 = $tmp420 + $tmp421;
panda$core$Int64 $tmp423 = (panda$core$Int64) {$tmp422};
panda$core$UInt64 $tmp424 = panda$core$Int64$convert$R$panda$core$UInt64($tmp423);
*(&local4) = $tmp424;
// line 166
org$pandalanguage$pandac$ASTNode* $tmp425 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp426 = (panda$core$Int64) {25};
$fn428 $tmp427 = ($fn428) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp429 = $tmp427(param1);
panda$core$UInt64 $tmp430 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp425, $tmp426, $tmp429, $tmp430);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
// unreffing REF($88:org.pandalanguage.pandac.ASTNode)
return $tmp425;
block13:;
panda$core$Int64 $tmp431 = (panda$core$Int64) {53};
panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp431);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block14; else goto block15;
block14:;
// line 169
panda$core$Int64 $tmp434 = *(&local0);
panda$core$Int64 $tmp435 = *(&local1);
int64_t $tmp436 = $tmp434.value;
int64_t $tmp437 = $tmp435.value;
int64_t $tmp438 = $tmp436 - $tmp437;
panda$core$Int64 $tmp439 = (panda$core$Int64) {$tmp438};
panda$core$UInt64 $tmp440 = panda$core$Int64$convert$R$panda$core$UInt64($tmp439);
*(&local5) = $tmp440;
// line 170
org$pandalanguage$pandac$ASTNode* $tmp441 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp442 = (panda$core$Int64) {25};
$fn444 $tmp443 = ($fn444) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp445 = $tmp443(param1);
panda$core$UInt64 $tmp446 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp441, $tmp442, $tmp445, $tmp446);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
// unreffing REF($115:org.pandalanguage.pandac.ASTNode)
return $tmp441;
block15:;
panda$core$Int64 $tmp447 = (panda$core$Int64) {54};
panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp447);
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block16; else goto block17;
block16:;
// line 173
panda$core$Int64 $tmp450 = *(&local0);
panda$core$Int64 $tmp451 = *(&local1);
int64_t $tmp452 = $tmp450.value;
int64_t $tmp453 = $tmp451.value;
int64_t $tmp454 = $tmp452 * $tmp453;
panda$core$Int64 $tmp455 = (panda$core$Int64) {$tmp454};
panda$core$UInt64 $tmp456 = panda$core$Int64$convert$R$panda$core$UInt64($tmp455);
*(&local6) = $tmp456;
// line 174
org$pandalanguage$pandac$ASTNode* $tmp457 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp458 = (panda$core$Int64) {25};
$fn460 $tmp459 = ($fn460) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp461 = $tmp459(param1);
panda$core$UInt64 $tmp462 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp457, $tmp458, $tmp461, $tmp462);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
// unreffing REF($142:org.pandalanguage.pandac.ASTNode)
return $tmp457;
block17:;
panda$core$Int64 $tmp463 = (panda$core$Int64) {56};
panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp463);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block18; else goto block19;
block18:;
// line 177
panda$core$Int64 $tmp466 = *(&local1);
panda$core$Int64 $tmp467 = (panda$core$Int64) {0};
panda$core$Bit $tmp468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp466, $tmp467);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block20; else goto block21;
block20:;
// line 178
$fn471 $tmp470 = ($fn471) param3->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp472 = $tmp470(param3);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp472, &$s473);
// line 179
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 181
panda$core$Int64 $tmp474 = *(&local0);
panda$core$Int64 $tmp475 = *(&local1);
int64_t $tmp476 = $tmp474.value;
int64_t $tmp477 = $tmp475.value;
int64_t $tmp478 = $tmp476 / $tmp477;
panda$core$Int64 $tmp479 = (panda$core$Int64) {$tmp478};
panda$core$UInt64 $tmp480 = panda$core$Int64$convert$R$panda$core$UInt64($tmp479);
*(&local7) = $tmp480;
// line 182
org$pandalanguage$pandac$ASTNode* $tmp481 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp482 = (panda$core$Int64) {25};
$fn484 $tmp483 = ($fn484) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp485 = $tmp483(param1);
panda$core$UInt64 $tmp486 = *(&local7);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp481, $tmp482, $tmp485, $tmp486);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
// unreffing REF($183:org.pandalanguage.pandac.ASTNode)
return $tmp481;
block19:;
panda$core$Int64 $tmp487 = (panda$core$Int64) {57};
panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp487);
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block22; else goto block23;
block22:;
// line 185
panda$core$Int64 $tmp490 = *(&local1);
panda$core$Int64 $tmp491 = (panda$core$Int64) {0};
panda$core$Bit $tmp492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp490, $tmp491);
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block24; else goto block25;
block24:;
// line 186
$fn495 $tmp494 = ($fn495) param3->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp496 = $tmp494(param3);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp496, &$s497);
// line 187
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 189
panda$core$Int64 $tmp498 = *(&local0);
panda$core$Int64 $tmp499 = *(&local1);
panda$core$Int64 $tmp500 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp498, $tmp499);
panda$core$UInt64 $tmp501 = panda$core$Int64$convert$R$panda$core$UInt64($tmp500);
*(&local8) = $tmp501;
// line 190
org$pandalanguage$pandac$ASTNode* $tmp502 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp503 = (panda$core$Int64) {25};
$fn505 $tmp504 = ($fn505) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp506 = $tmp504(param1);
panda$core$UInt64 $tmp507 = *(&local8);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp502, $tmp503, $tmp506, $tmp507);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
// unreffing REF($221:org.pandalanguage.pandac.ASTNode)
return $tmp502;
block23:;
panda$core$Int64 $tmp508 = (panda$core$Int64) {59};
panda$core$Bit $tmp509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp508);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block26; else goto block27;
block26:;
// line 193
org$pandalanguage$pandac$ASTNode* $tmp511 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp512 = (panda$core$Int64) {6};
$fn514 $tmp513 = ($fn514) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp515 = $tmp513(param1);
panda$core$Int64 $tmp516 = *(&local0);
panda$core$Int64 $tmp517 = *(&local1);
panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp517);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp511, $tmp512, $tmp515, $tmp518);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
// unreffing REF($239:org.pandalanguage.pandac.ASTNode)
return $tmp511;
block27:;
panda$core$Int64 $tmp519 = (panda$core$Int64) {60};
panda$core$Bit $tmp520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp519);
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block28; else goto block29;
block28:;
// line 196
org$pandalanguage$pandac$ASTNode* $tmp522 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp523 = (panda$core$Int64) {6};
$fn525 $tmp524 = ($fn525) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp526 = $tmp524(param1);
panda$core$Int64 $tmp527 = *(&local0);
panda$core$Int64 $tmp528 = *(&local1);
int64_t $tmp529 = $tmp527.value;
int64_t $tmp530 = $tmp528.value;
bool $tmp531 = $tmp529 != $tmp530;
panda$core$Bit $tmp532 = (panda$core$Bit) {$tmp531};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp522, $tmp523, $tmp526, $tmp532);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
// unreffing REF($259:org.pandalanguage.pandac.ASTNode)
return $tmp522;
block29:;
panda$core$Int64 $tmp533 = (panda$core$Int64) {63};
panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp533);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block30; else goto block31;
block30:;
// line 199
org$pandalanguage$pandac$ASTNode* $tmp536 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp537 = (panda$core$Int64) {6};
$fn539 $tmp538 = ($fn539) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp540 = $tmp538(param1);
panda$core$Int64 $tmp541 = *(&local0);
panda$core$Int64 $tmp542 = *(&local1);
int64_t $tmp543 = $tmp541.value;
int64_t $tmp544 = $tmp542.value;
bool $tmp545 = $tmp543 < $tmp544;
panda$core$Bit $tmp546 = (panda$core$Bit) {$tmp545};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp536, $tmp537, $tmp540, $tmp546);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
// unreffing REF($282:org.pandalanguage.pandac.ASTNode)
return $tmp536;
block31:;
panda$core$Int64 $tmp547 = (panda$core$Int64) {64};
panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp547);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block32; else goto block33;
block32:;
// line 202
org$pandalanguage$pandac$ASTNode* $tmp550 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp551 = (panda$core$Int64) {6};
$fn553 $tmp552 = ($fn553) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp554 = $tmp552(param1);
panda$core$Int64 $tmp555 = *(&local0);
panda$core$Int64 $tmp556 = *(&local1);
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556.value;
bool $tmp559 = $tmp557 > $tmp558;
panda$core$Bit $tmp560 = (panda$core$Bit) {$tmp559};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp550, $tmp551, $tmp554, $tmp560);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
// unreffing REF($305:org.pandalanguage.pandac.ASTNode)
return $tmp550;
block33:;
panda$core$Int64 $tmp561 = (panda$core$Int64) {65};
panda$core$Bit $tmp562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp561);
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block34; else goto block35;
block34:;
// line 205
org$pandalanguage$pandac$ASTNode* $tmp564 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp565 = (panda$core$Int64) {6};
$fn567 $tmp566 = ($fn567) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp568 = $tmp566(param1);
panda$core$Int64 $tmp569 = *(&local0);
panda$core$Int64 $tmp570 = *(&local1);
int64_t $tmp571 = $tmp569.value;
int64_t $tmp572 = $tmp570.value;
bool $tmp573 = $tmp571 <= $tmp572;
panda$core$Bit $tmp574 = (panda$core$Bit) {$tmp573};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp564, $tmp565, $tmp568, $tmp574);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
// unreffing REF($328:org.pandalanguage.pandac.ASTNode)
return $tmp564;
block35:;
panda$core$Int64 $tmp575 = (panda$core$Int64) {66};
panda$core$Bit $tmp576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp575);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block36; else goto block37;
block36:;
// line 208
org$pandalanguage$pandac$ASTNode* $tmp578 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp579 = (panda$core$Int64) {6};
$fn581 $tmp580 = ($fn581) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp582 = $tmp580(param1);
panda$core$Int64 $tmp583 = *(&local0);
panda$core$Int64 $tmp584 = *(&local1);
int64_t $tmp585 = $tmp583.value;
int64_t $tmp586 = $tmp584.value;
bool $tmp587 = $tmp585 >= $tmp586;
panda$core$Bit $tmp588 = (panda$core$Bit) {$tmp587};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp578, $tmp579, $tmp582, $tmp588);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
// unreffing REF($351:org.pandalanguage.pandac.ASTNode)
return $tmp578;
block37:;
panda$core$Int64 $tmp589 = (panda$core$Int64) {68};
panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block38; else goto block39;
block38:;
// line 211
panda$core$Int64 $tmp592 = *(&local0);
panda$core$Int64 $tmp593 = *(&local1);
panda$core$Int64 $tmp594 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp592, $tmp593);
panda$core$UInt64 $tmp595 = panda$core$Int64$convert$R$panda$core$UInt64($tmp594);
*(&local9) = $tmp595;
// line 212
org$pandalanguage$pandac$ASTNode* $tmp596 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp597 = (panda$core$Int64) {25};
$fn599 $tmp598 = ($fn599) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp600 = $tmp598(param1);
panda$core$UInt64 $tmp601 = *(&local9);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp596, $tmp597, $tmp600, $tmp601);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
// unreffing REF($380:org.pandalanguage.pandac.ASTNode)
return $tmp596;
block39:;
panda$core$Int64 $tmp602 = (panda$core$Int64) {70};
panda$core$Bit $tmp603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block40; else goto block41;
block40:;
// line 215
panda$core$Int64 $tmp605 = *(&local0);
panda$core$Int64 $tmp606 = *(&local1);
panda$core$Int64 $tmp607 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp605, $tmp606);
panda$core$UInt64 $tmp608 = panda$core$Int64$convert$R$panda$core$UInt64($tmp607);
*(&local10) = $tmp608;
// line 216
org$pandalanguage$pandac$ASTNode* $tmp609 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp610 = (panda$core$Int64) {25};
$fn612 $tmp611 = ($fn612) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp613 = $tmp611(param1);
panda$core$UInt64 $tmp614 = *(&local10);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp609, $tmp610, $tmp613, $tmp614);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
// unreffing REF($404:org.pandalanguage.pandac.ASTNode)
return $tmp609;
block41:;
panda$core$Int64 $tmp615 = (panda$core$Int64) {72};
panda$core$Bit $tmp616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp615);
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block42; else goto block43;
block42:;
// line 219
panda$core$Int64 $tmp618 = *(&local0);
panda$core$Int64 $tmp619 = *(&local1);
panda$core$Int64 $tmp620 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp618, $tmp619);
panda$core$UInt64 $tmp621 = panda$core$Int64$convert$R$panda$core$UInt64($tmp620);
*(&local11) = $tmp621;
// line 220
org$pandalanguage$pandac$ASTNode* $tmp622 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp623 = (panda$core$Int64) {25};
$fn625 $tmp624 = ($fn625) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp626 = $tmp624(param1);
panda$core$UInt64 $tmp627 = *(&local11);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp622, $tmp623, $tmp626, $tmp627);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
// unreffing REF($428:org.pandalanguage.pandac.ASTNode)
return $tmp622;
block43:;
panda$core$Int64 $tmp628 = (panda$core$Int64) {73};
panda$core$Bit $tmp629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp628);
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block44; else goto block45;
block44:;
// line 223
panda$core$Int64 $tmp631 = *(&local0);
panda$core$Int64 $tmp632 = *(&local1);
panda$core$Int64 $tmp633 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp631, $tmp632);
panda$core$UInt64 $tmp634 = panda$core$Int64$convert$R$panda$core$UInt64($tmp633);
*(&local12) = $tmp634;
// line 224
org$pandalanguage$pandac$ASTNode* $tmp635 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp636 = (panda$core$Int64) {25};
$fn638 $tmp637 = ($fn638) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp639 = $tmp637(param1);
panda$core$UInt64 $tmp640 = *(&local12);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp635, $tmp636, $tmp639, $tmp640);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
// unreffing REF($452:org.pandalanguage.pandac.ASTNode)
return $tmp635;
block45:;
panda$core$Int64 $tmp641 = (panda$core$Int64) {1};
panda$core$Bit $tmp642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp641);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block46; else goto block11;
block46:;
// line 227
panda$core$Int64 $tmp644 = *(&local0);
panda$core$Int64 $tmp645 = *(&local1);
panda$core$Int64 $tmp646 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64($tmp644, $tmp645);
panda$core$UInt64 $tmp647 = panda$core$Int64$convert$R$panda$core$UInt64($tmp646);
*(&local13) = $tmp647;
// line 228
org$pandalanguage$pandac$ASTNode* $tmp648 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp649 = (panda$core$Int64) {25};
$fn651 $tmp650 = ($fn651) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp652 = $tmp650(param1);
panda$core$UInt64 $tmp653 = *(&local13);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp648, $tmp649, $tmp652, $tmp653);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
// unreffing REF($476:org.pandalanguage.pandac.ASTNode)
return $tmp648;
block11:;
// line 231
$fn655 $tmp654 = ($fn655) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp656 = $tmp654(param1);
panda$core$String* $tmp657 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(param2);
panda$core$String* $tmp658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s659, $tmp657);
panda$core$String* $tmp660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp658, &$s661);
panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp660, &$s663);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp656, $tmp662);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
// unreffing REF($495:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
// unreffing REF($494:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
// unreffing REF($493:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
// unreffing REF($492:panda.core.String)
// line 233
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$expression$Binary$foldStrings$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$parser$Token$Kind param2, org$pandalanguage$pandac$ASTNode* param3) {

org$pandalanguage$pandac$Position local0;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 240
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp664;
$tmp664 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp664->value = param2;
panda$core$Int64 $tmp665 = (panda$core$Int64) {52};
org$pandalanguage$pandac$parser$Token$Kind $tmp666 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp665);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp667;
$tmp667 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp667->value = $tmp666;
ITable* $tmp668 = ((panda$core$Equatable*) $tmp664)->$class->itable;
while ($tmp668->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp668 = $tmp668->next;
}
$fn670 $tmp669 = $tmp668->methods[1];
panda$core$Bit $tmp671 = $tmp669(((panda$core$Equatable*) $tmp664), ((panda$core$Equatable*) $tmp667));
bool $tmp672 = $tmp671.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp667)));
// unreffing REF($5:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp664)));
// unreffing REF($1:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp672) goto block1; else goto block2;
block1:;
// line 241
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 243
panda$core$Int64* $tmp673 = &param1->$rawValue;
panda$core$Int64 $tmp674 = *$tmp673;
panda$core$Int64 $tmp675 = (panda$core$Int64) {41};
panda$core$Bit $tmp676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp674, $tmp675);
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block4; else goto block3;
block4:;
org$pandalanguage$pandac$Position* $tmp678 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp679 = *$tmp678;
*(&local0) = $tmp679;
panda$core$String** $tmp680 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp681 = *$tmp680;
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp681));
panda$core$String* $tmp682 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp682));
*(&local1) = $tmp681;
// line 245
panda$core$Int64* $tmp683 = &param3->$rawValue;
panda$core$Int64 $tmp684 = *$tmp683;
panda$core$Int64 $tmp685 = (panda$core$Int64) {41};
panda$core$Bit $tmp686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp684, $tmp685);
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block6; else goto block5;
block6:;
org$pandalanguage$pandac$Position* $tmp688 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp689 = *$tmp688;
panda$core$String** $tmp690 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp691 = *$tmp690;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp691));
panda$core$String* $tmp692 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
*(&local2) = $tmp691;
// line 247
org$pandalanguage$pandac$ASTNode* $tmp693 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp694 = (panda$core$Int64) {41};
org$pandalanguage$pandac$Position $tmp695 = *(&local0);
panda$core$String* $tmp696 = *(&local1);
panda$core$String* $tmp697 = *(&local2);
panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp696, $tmp697);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp693, $tmp694, $tmp695, $tmp698);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
// unreffing REF($63:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
// unreffing REF($58:org.pandalanguage.pandac.ASTNode)
panda$core$String* $tmp699 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
// unreffing s2
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp700 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
// unreffing s1
*(&local1) = ((panda$core$String*) NULL);
return $tmp693;
block5:;
panda$core$String* $tmp701 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
// unreffing s1
*(&local1) = ((panda$core$String*) NULL);
goto block3;
block3:;
// line 252
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$expression$Binary$fold$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$parser$Token$Kind param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 257
panda$core$Int64* $tmp702 = &param1->$rawValue;
panda$core$Int64 $tmp703 = *$tmp702;
panda$core$Int64 $tmp704 = (panda$core$Int64) {25};
panda$core$Bit $tmp705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp703, $tmp704);
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block2; else goto block3;
block2:;
// line 259
org$pandalanguage$pandac$ASTNode* $tmp707 = org$pandalanguage$pandac$expression$Binary$foldInts$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1, param2, param3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
// unreffing REF($8:org.pandalanguage.pandac.ASTNode?)
return $tmp707;
block3:;
panda$core$Int64 $tmp708 = (panda$core$Int64) {41};
panda$core$Bit $tmp709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp703, $tmp708);
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block4; else goto block5;
block4:;
// line 262
org$pandalanguage$pandac$ASTNode* $tmp711 = org$pandalanguage$pandac$expression$Binary$foldStrings$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1, param2, param3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
// unreffing REF($20:org.pandalanguage.pandac.ASTNode?)
return $tmp711;
block5:;
// line 265
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp712 = panda$core$Bit$init$builtin_bit(false);
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp714 = (panda$core$Int64) {256};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s715, $tmp714, &$s716);
abort(); // unreachable
block6:;
abort(); // unreachable

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Binary$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$ASTNode* param4, org$pandalanguage$pandac$Compiler$TypeContext* param5) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
org$pandalanguage$pandac$Pair* local2 = NULL;
org$pandalanguage$pandac$MethodDecl* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
org$pandalanguage$pandac$IR$Value* local5 = NULL;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
org$pandalanguage$pandac$IR$Value* local7 = NULL;
panda$core$Bit local8;
org$pandalanguage$pandac$Type* local9 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local10;
// line 273
org$pandalanguage$pandac$ASTNode* $tmp717 = org$pandalanguage$pandac$expression$Binary$fold$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(param0, param2, param3, param4);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
org$pandalanguage$pandac$ASTNode* $tmp718 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp718));
*(&local0) = $tmp717;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 274
org$pandalanguage$pandac$ASTNode* $tmp719 = *(&local0);
panda$core$Bit $tmp720 = panda$core$Bit$init$builtin_bit($tmp719 != NULL);
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block1; else goto block2;
block1:;
// line 275
org$pandalanguage$pandac$ASTNode* $tmp722 = *(&local0);
org$pandalanguage$pandac$IR$Value* $tmp723 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp722, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
// unreffing REF($21:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$ASTNode* $tmp724 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp723;
block2:;
// line 277
panda$core$Int64 $tmp725 = param3.$rawValue;
panda$core$Int64 $tmp726 = (panda$core$Int64) {90};
panda$core$Bit $tmp727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp725, $tmp726);
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block4; else goto block5;
block4:;
// line 279
org$pandalanguage$pandac$Scanner** $tmp729 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp730 = *$tmp729;
org$pandalanguage$pandac$Type* $tmp731 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp730, param4);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
org$pandalanguage$pandac$Type* $tmp732 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp732));
*(&local1) = $tmp731;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
// unreffing REF($42:org.pandalanguage.pandac.Type)
// line 280
org$pandalanguage$pandac$Type* $tmp733 = *(&local1);
org$pandalanguage$pandac$IR$Value* $tmp734 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, $tmp733);
org$pandalanguage$pandac$IR$Value* $tmp735 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp734, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
// unreffing REF($56:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
// unreffing REF($55:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Type* $tmp736 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp736));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp737 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp735;
block5:;
panda$core$Int64 $tmp738 = (panda$core$Int64) {61};
panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp725, $tmp738);
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp741 = (panda$core$Int64) {62};
panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp725, $tmp741);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block6; else goto block8;
block6:;
// line 283
org$pandalanguage$pandac$IR$Value* $tmp744 = org$pandalanguage$pandac$Compiler$compileIdentityComparison$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param3, param4, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp744));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp744));
// unreffing REF($85:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$ASTNode* $tmp745 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp744;
block8:;
// line 286
org$pandalanguage$pandac$Pair* $tmp746 = org$pandalanguage$pandac$expression$Binary$findOverloadedOperator$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, param2, param3, param4, param5);
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
org$pandalanguage$pandac$Pair* $tmp747 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp747));
*(&local2) = $tmp746;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
// unreffing REF($98:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
// line 287
org$pandalanguage$pandac$Pair* $tmp748 = *(&local2);
panda$core$Bit $tmp749 = panda$core$Bit$init$builtin_bit($tmp748 != NULL);
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block9; else goto block10;
block9:;
// line 288
org$pandalanguage$pandac$Pair* $tmp751 = *(&local2);
panda$core$Object** $tmp752 = &$tmp751->first;
panda$core$Object* $tmp753 = *$tmp752;
ITable* $tmp754 = ((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp753))->$class->itable;
while ($tmp754->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp754 = $tmp754->next;
}
$fn756 $tmp755 = $tmp754->methods[0];
panda$core$Int64 $tmp757 = $tmp755(((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp753)));
panda$core$Int64 $tmp758 = (panda$core$Int64) {1};
int64_t $tmp759 = $tmp757.value;
int64_t $tmp760 = $tmp758.value;
bool $tmp761 = $tmp759 > $tmp760;
panda$core$Bit $tmp762 = (panda$core$Bit) {$tmp761};
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block11; else goto block12;
block11:;
// line 289
org$pandalanguage$pandac$Pair* $tmp764 = *(&local2);
panda$core$Object** $tmp765 = &$tmp764->first;
panda$core$Object* $tmp766 = *$tmp765;
panda$collections$Array* $tmp767 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp768 = (panda$core$Int64) {2};
panda$collections$Array$init$panda$core$Int64($tmp767, $tmp768);
panda$collections$Array$add$panda$collections$Array$T($tmp767, ((panda$core$Object*) param2));
panda$collections$Array$add$panda$collections$Array$T($tmp767, ((panda$core$Object*) param4));
org$pandalanguage$pandac$Compiler$reportAmbiguousMatch$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext(param0, param1, ((panda$collections$ListView*) $tmp766), ((panda$collections$ListView*) $tmp767), param5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
// unreffing REF($137:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 290
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Pair* $tmp769 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp770 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block12:;
// line 292
org$pandalanguage$pandac$Pair* $tmp771 = *(&local2);
panda$core$Object** $tmp772 = &$tmp771->first;
panda$core$Object* $tmp773 = *$tmp772;
panda$core$Int64 $tmp774 = (panda$core$Int64) {0};
ITable* $tmp775 = ((panda$collections$ListView*) $tmp773)->$class->itable;
while ($tmp775->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp775 = $tmp775->next;
}
$fn777 $tmp776 = $tmp775->methods[0];
panda$core$Object* $tmp778 = $tmp776(((panda$collections$ListView*) $tmp773), $tmp774);
org$pandalanguage$pandac$MethodDecl** $tmp779 = &((org$pandalanguage$pandac$MethodRef*) $tmp778)->value;
org$pandalanguage$pandac$MethodDecl* $tmp780 = *$tmp779;
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
org$pandalanguage$pandac$MethodDecl* $tmp781 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
*(&local3) = $tmp780;
panda$core$Panda$unref$panda$core$Object$Q($tmp778);
// unreffing REF($175:panda.collections.ListView.T)
// line 293
org$pandalanguage$pandac$MethodDecl* $tmp782 = *(&local3);
org$pandalanguage$pandac$Annotations** $tmp783 = &$tmp782->annotations;
org$pandalanguage$pandac$Annotations* $tmp784 = *$tmp783;
panda$core$Bit $tmp785 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp784);
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block13; else goto block14;
block13:;
// line 294
org$pandalanguage$pandac$MethodDecl* $tmp787 = *(&local3);
panda$collections$Array** $tmp788 = &$tmp787->parameters;
panda$collections$Array* $tmp789 = *$tmp788;
ITable* $tmp790 = ((panda$collections$CollectionView*) $tmp789)->$class->itable;
while ($tmp790->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp790 = $tmp790->next;
}
$fn792 $tmp791 = $tmp790->methods[0];
panda$core$Int64 $tmp793 = $tmp791(((panda$collections$CollectionView*) $tmp789));
panda$core$Int64 $tmp794 = (panda$core$Int64) {2};
panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp793, $tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block15; else goto block16;
block15:;
// line 295
org$pandalanguage$pandac$IR$Value* $tmp797 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp798 = (panda$core$Int64) {9};
org$pandalanguage$pandac$MethodDecl* $tmp799 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl($tmp797, $tmp798, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp799);
panda$collections$Array* $tmp800 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp801 = (panda$core$Int64) {2};
panda$collections$Array$init$panda$core$Int64($tmp800, $tmp801);
panda$collections$Array$add$panda$collections$Array$T($tmp800, ((panda$core$Object*) param2));
panda$collections$Array$add$panda$collections$Array$T($tmp800, ((panda$core$Object*) param4));
org$pandalanguage$pandac$IR$Value* $tmp802 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp797, ((panda$collections$ListView*) $tmp800), param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp802));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp802));
// unreffing REF($223:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
// unreffing REF($212:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
// unreffing REF($208:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$MethodDecl* $tmp803 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Pair* $tmp804 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp805 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp805));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp802;
block16:;
// line 298
org$pandalanguage$pandac$MethodDecl* $tmp806 = *(&local3);
panda$collections$Array** $tmp807 = &$tmp806->parameters;
panda$collections$Array* $tmp808 = *$tmp807;
ITable* $tmp809 = ((panda$collections$CollectionView*) $tmp808)->$class->itable;
while ($tmp809->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp809 = $tmp809->next;
}
$fn811 $tmp810 = $tmp809->methods[0];
panda$core$Int64 $tmp812 = $tmp810(((panda$collections$CollectionView*) $tmp808));
panda$core$Int64 $tmp813 = (panda$core$Int64) {1};
panda$core$Bit $tmp814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp812, $tmp813);
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp816 = (panda$core$Int64) {298};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s817, $tmp816);
abort(); // unreachable
block17:;
// line 299
org$pandalanguage$pandac$IR$Value* $tmp818 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp819 = (panda$core$Int64) {9};
org$pandalanguage$pandac$MethodDecl* $tmp820 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl($tmp818, $tmp819, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp820);
panda$collections$Array* $tmp821 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp822 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp821, $tmp822);
panda$collections$Array$add$panda$collections$Array$T($tmp821, ((panda$core$Object*) param4));
org$pandalanguage$pandac$IR$Value* $tmp823 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp818, ((panda$collections$ListView*) $tmp821), param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
// unreffing REF($278:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
// unreffing REF($270:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp818));
// unreffing REF($266:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$MethodDecl* $tmp824 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Pair* $tmp825 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp826 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp823;
block14:;
// line 302
org$pandalanguage$pandac$MethodDecl* $tmp827 = *(&local3);
panda$core$Weak** $tmp828 = &$tmp827->owner;
panda$core$Weak* $tmp829 = *$tmp828;
panda$core$Object* $tmp830 = panda$core$Weak$get$R$panda$core$Weak$T($tmp829);
panda$core$String** $tmp831 = &((org$pandalanguage$pandac$ClassDecl*) $tmp830)->name;
panda$core$String* $tmp832 = *$tmp831;
panda$core$Bit $tmp833 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp832, &$s834);
bool $tmp835 = $tmp833.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp830);
// unreffing REF($311:panda.core.Weak.T)
if ($tmp835) goto block19; else goto block20;
block19:;
// line 303
org$pandalanguage$pandac$MethodDecl* $tmp836 = *(&local3);
panda$core$String** $tmp837 = &((org$pandalanguage$pandac$Symbol*) $tmp836)->name;
panda$core$String* $tmp838 = *$tmp837;
panda$core$Bit $tmp839 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp838, &$s840);
bool $tmp841 = $tmp839.value;
if ($tmp841) goto block21; else goto block22;
block21:;
// line 304
org$pandalanguage$pandac$IR$Value* $tmp842 = org$pandalanguage$pandac$expression$And$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param4, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
// unreffing REF($330:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$MethodDecl* $tmp843 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp843));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Pair* $tmp844 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp845 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp845));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp842;
block22:;
// line 306
org$pandalanguage$pandac$MethodDecl* $tmp846 = *(&local3);
panda$core$String** $tmp847 = &((org$pandalanguage$pandac$Symbol*) $tmp846)->name;
panda$core$String* $tmp848 = *$tmp847;
panda$core$Bit $tmp849 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp848, &$s850);
bool $tmp851 = $tmp849.value;
if ($tmp851) goto block23; else goto block24;
block23:;
// line 307
org$pandalanguage$pandac$IR$Value* $tmp852 = org$pandalanguage$pandac$expression$Or$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param4, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp852));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp852));
// unreffing REF($361:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$MethodDecl* $tmp853 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp853));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Pair* $tmp854 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp854));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp855 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp852;
block24:;
goto block20;
block20:;
// line 310
panda$collections$CollectionView* $tmp856 = org$pandalanguage$pandac$Compiler$possibleTypes$org$pandalanguage$pandac$ASTNode$R$panda$collections$CollectionView$LTorg$pandalanguage$pandac$Type$GT$Q(param0, param2);
org$pandalanguage$pandac$MethodDecl* $tmp857 = *(&local3);
panda$core$Weak** $tmp858 = &$tmp857->owner;
panda$core$Weak* $tmp859 = *$tmp858;
panda$core$Object* $tmp860 = panda$core$Weak$get$R$panda$core$Weak$T($tmp859);
org$pandalanguage$pandac$Type* $tmp861 = org$pandalanguage$pandac$Compiler$findType$panda$collections$CollectionView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param0, $tmp856, ((org$pandalanguage$pandac$ClassDecl*) $tmp860));
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
org$pandalanguage$pandac$Type* $tmp862 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp862));
*(&local4) = $tmp861;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
// unreffing REF($393:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp860);
// unreffing REF($391:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
// unreffing REF($385:panda.collections.CollectionView<org.pandalanguage.pandac.Type>?)
// line 311
org$pandalanguage$pandac$Type* $tmp863 = *(&local4);
panda$core$Bit $tmp864 = panda$core$Bit$init$builtin_bit($tmp863 != NULL);
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp866 = (panda$core$Int64) {311};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s867, $tmp866);
abort(); // unreachable
block25:;
// line 312
org$pandalanguage$pandac$Compiler$TypeContext* $tmp868 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp869 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp870 = *(&local4);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp868, $tmp869, $tmp870);
org$pandalanguage$pandac$IR$Value* $tmp871 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp868);
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
org$pandalanguage$pandac$IR$Value* $tmp872 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
*(&local5) = $tmp871;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
// unreffing REF($425:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp868));
// unreffing REF($420:org.pandalanguage.pandac.Compiler.TypeContext)
// line 313
org$pandalanguage$pandac$IR$Value* $tmp873 = *(&local5);
panda$core$Bit $tmp874 = panda$core$Bit$init$builtin_bit($tmp873 == NULL);
bool $tmp875 = $tmp874.value;
if ($tmp875) goto block27; else goto block28;
block27:;
// line 314
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp876 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp876));
// unreffing target
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp877 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp877));
// unreffing found
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp878 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp878));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Pair* $tmp879 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp880 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp880));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block28:;
// line 316
org$pandalanguage$pandac$IR$Value* $tmp881 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp882 = (panda$core$Int64) {9};
org$pandalanguage$pandac$IR$Value* $tmp883 = *(&local5);
org$pandalanguage$pandac$MethodDecl* $tmp884 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl($tmp881, $tmp882, $tmp883, $tmp884);
panda$collections$Array* $tmp885 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp886 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp885, $tmp886);
panda$collections$Array$add$panda$collections$Array$T($tmp885, ((panda$core$Object*) param4));
org$pandalanguage$pandac$IR$Value* $tmp887 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp881, ((panda$collections$ListView*) $tmp885), param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
// unreffing REF($488:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
// unreffing REF($480:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp881));
// unreffing REF($475:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$IR$Value* $tmp888 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp888));
// unreffing target
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp889 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp889));
// unreffing found
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp890 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Pair* $tmp891 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp892 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp887;
block10:;
// line 319
org$pandalanguage$pandac$Compiler$TypeContext* $tmp893 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp894 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp893, $tmp894);
org$pandalanguage$pandac$IR$Value* $tmp895 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp893);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
org$pandalanguage$pandac$IR$Value* $tmp896 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
*(&local6) = $tmp895;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
// unreffing REF($530:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
// unreffing REF($527:org.pandalanguage.pandac.Compiler.TypeContext)
// line 320
org$pandalanguage$pandac$IR$Value* $tmp897 = *(&local6);
panda$core$Bit $tmp898 = panda$core$Bit$init$builtin_bit($tmp897 == NULL);
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block29; else goto block30;
block29:;
// line 321
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp900 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp900));
// unreffing compiledLeft
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp901 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp901));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp902 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp902));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block30:;
// line 323
org$pandalanguage$pandac$Compiler$TypeContext* $tmp903 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp904 = (panda$core$Int64) {3};
org$pandalanguage$pandac$IR$Value* $tmp905 = *(&local6);
$fn907 $tmp906 = ($fn907) $tmp905->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp908 = $tmp906($tmp905);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp903, $tmp904, $tmp908);
org$pandalanguage$pandac$IR$Value* $tmp909 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param4, $tmp903);
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
org$pandalanguage$pandac$IR$Value* $tmp910 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp910));
*(&local7) = $tmp909;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
// unreffing REF($577:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp908));
// unreffing REF($575:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
// unreffing REF($570:org.pandalanguage.pandac.Compiler.TypeContext)
// line 325
org$pandalanguage$pandac$IR$Value* $tmp911 = *(&local7);
panda$core$Bit $tmp912 = panda$core$Bit$init$builtin_bit($tmp911 == NULL);
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block31; else goto block32;
block31:;
// line 326
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp914 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
// unreffing compiledRight
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp915 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
// unreffing compiledLeft
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp916 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp917 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp917));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block32:;
// line 328
org$pandalanguage$pandac$IR$Value* $tmp918 = *(&local6);
$fn920 $tmp919 = ($fn920) $tmp918->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp921 = $tmp919($tmp918);
org$pandalanguage$pandac$Type* $tmp922 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp923 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp921, $tmp922);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block35; else goto block36;
block35:;
*(&local8) = $tmp923;
goto block37;
block36:;
org$pandalanguage$pandac$IR$Value* $tmp925 = *(&local6);
$fn927 $tmp926 = ($fn927) $tmp925->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp928 = $tmp926($tmp925);
panda$core$Bit $tmp929 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit($tmp928);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp928));
// unreffing REF($638:org.pandalanguage.pandac.Type)
*(&local8) = $tmp929;
goto block37;
block37:;
panda$core$Bit $tmp930 = *(&local8);
bool $tmp931 = $tmp930.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp922));
// unreffing REF($629:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp921));
// unreffing REF($628:org.pandalanguage.pandac.Type)
if ($tmp931) goto block33; else goto block34;
block33:;
// line 330
org$pandalanguage$pandac$ASTNode* $tmp932 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp933 = (panda$core$Int64) {5};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp932, $tmp933, param1, param2, param3, param4);
org$pandalanguage$pandac$Type* $tmp934 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, $tmp932);
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
org$pandalanguage$pandac$Type* $tmp935 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
*(&local9) = $tmp934;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
// unreffing REF($658:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
// unreffing REF($655:org.pandalanguage.pandac.ASTNode)
// line 332
org$pandalanguage$pandac$Type* $tmp936 = *(&local9);
panda$core$Bit $tmp937 = panda$core$Bit$init$builtin_bit($tmp936 != NULL);
bool $tmp938 = $tmp937.value;
if ($tmp938) goto block38; else goto block39;
block38:;
// line 333
org$pandalanguage$pandac$IR** $tmp939 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp940 = *$tmp939;
org$pandalanguage$pandac$IR$Statement* $tmp941 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp942 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Value* $tmp943 = *(&local6);
org$pandalanguage$pandac$IR$Value* $tmp944 = *(&local7);
org$pandalanguage$pandac$Type* $tmp945 = *(&local9);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type($tmp941, $tmp942, param1, $tmp943, param3, $tmp944, $tmp945);
$fn947 $tmp946 = ($fn947) $tmp940->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp948 = $tmp946($tmp940, $tmp941);
*(&local10) = $tmp948;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
// unreffing REF($681:org.pandalanguage.pandac.IR.Statement)
// line 335
org$pandalanguage$pandac$IR$Value* $tmp949 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp950 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp951 = *(&local10);
org$pandalanguage$pandac$Type* $tmp952 = *(&local9);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp949, $tmp950, $tmp951, $tmp952);
org$pandalanguage$pandac$IR$Value* $tmp953 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp949, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
// unreffing REF($704:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp949));
// unreffing REF($697:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$Type* $tmp954 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp954));
// unreffing resultType
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp955 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
// unreffing compiledRight
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp956 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp956));
// unreffing compiledLeft
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp957 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp957));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp958 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp958));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp953;
block39:;
org$pandalanguage$pandac$Type* $tmp959 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp959));
// unreffing resultType
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
goto block34;
block34:;
// line 338
panda$core$String* $tmp960 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(param3);
panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s962, $tmp960);
panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp961, &$s964);
org$pandalanguage$pandac$IR$Value* $tmp965 = *(&local6);
$fn967 $tmp966 = ($fn967) $tmp965->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp968 = $tmp966($tmp965);
panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s970, ((panda$core$Object*) $tmp968));
panda$core$String* $tmp971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp969, &$s972);
org$pandalanguage$pandac$IR$Value* $tmp973 = *(&local7);
$fn975 $tmp974 = ($fn975) $tmp973->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp976 = $tmp974($tmp973);
panda$core$String* $tmp977 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp971, ((panda$core$Object*) $tmp976));
panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp977, &$s979);
panda$core$String* $tmp980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp963, $tmp978);
$fn982 $tmp981 = ($fn982) param5->$class->vtable[2];
panda$core$String* $tmp983 = $tmp981(param5);
panda$core$String* $tmp984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp980, $tmp983);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp984);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
// unreffing REF($766:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
// unreffing REF($765:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
// unreffing REF($763:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp978));
// unreffing REF($762:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp977));
// unreffing REF($761:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp976));
// unreffing REF($759:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp971));
// unreffing REF($755:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
// unreffing REF($754:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp968));
// unreffing REF($752:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
// unreffing REF($748:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp961));
// unreffing REF($747:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp960));
// unreffing REF($746:panda.core.String)
// line 341
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp985 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
// unreffing compiledRight
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp986 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
// unreffing compiledLeft
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp987 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp988 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block3:;
panda$core$Bit $tmp989 = panda$core$Bit$init$builtin_bit(false);
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block40; else goto block41;
block41:;
panda$core$Int64 $tmp991 = (panda$core$Int64) {271};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s992, $tmp991, &$s993);
abort(); // unreachable
block40:;
abort(); // unreachable

}
void org$pandalanguage$pandac$expression$Binary$init(org$pandalanguage$pandac$expression$Binary* param0) {

return;

}
void org$pandalanguage$pandac$expression$Binary$cleanup(org$pandalanguage$pandac$expression$Binary* param0) {

// line 16
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

