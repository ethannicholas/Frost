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

typedef panda$core$Bit (*$fn87)(org$pandalanguage$pandac$expression$Binary$_Closure2*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$ListView* (*$fn91)(panda$collections$ListView*, panda$core$MutableMethod*);
typedef panda$core$Bit (*$fn221)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$ListView* (*$fn225)(panda$collections$ListView*, panda$core$MutableMethod*);
typedef panda$collections$Iterator* (*$fn266)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn270)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn275)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn294)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn389)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn393)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn398)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn411)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn415)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn420)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn503)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn519)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn535)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn546)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn559)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn570)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn580)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn589)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn600)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn614)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn628)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn642)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn656)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn674)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn687)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn700)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn713)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn726)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn730)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn745)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn841)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn872)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn887)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn906)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn1017)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1035)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1047)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1082)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn1112)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1125)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$String* (*$fn1132)(org$pandalanguage$pandac$Compiler$TypeContext*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79", 42, 927599221097484629, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 159, 2233785329373253080, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x69\x6c\x65\x64\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x63\x61\x73\x74\x20", 21, -924378024990471136, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x74\x20", 4, 138031278, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 146, 3347040154052538814, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20", 20, -3867798768884550044, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27\x2c\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 38, -7484923523838618715, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x66\x6f\x6c\x64\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x6c\x65\x66\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x6f\x70\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64\x2c\x20\x72\x69\x67\x68\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 285, 4817650893138720798, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 165, -6451366314572174829, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s1068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s1074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27", 14, -1314037361094274531, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x6f\x6e\x20", 5, 14602569225, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6c\x65\x66\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x6f\x70\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64\x2c\x20\x72\x69\x67\x68\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 383, -4228319139395084085, NULL };

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
org$pandalanguage$pandac$IR$Value* $tmp14 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
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
panda$core$Bit $tmp20 = panda$core$Bit$init$builtin_bit($tmp19 != NULL);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp22 = (panda$core$Int64) {28};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block5:;
org$pandalanguage$pandac$SymbolTable* $tmp25 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp19);
panda$core$String* $tmp26 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(param2);
org$pandalanguage$pandac$Symbol* $tmp27 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp25, $tmp26);
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
org$pandalanguage$pandac$Symbol* $tmp28 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
*(&local2) = $tmp27;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($64:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($63:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// unreffing REF($62:org.pandalanguage.pandac.SymbolTable)
// line 29
org$pandalanguage$pandac$Symbol* $tmp29 = *(&local2);
panda$core$Bit $tmp30 = panda$core$Bit$init$builtin_bit($tmp29 != NULL);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block7; else goto block8;
block7:;
// line 30
panda$collections$Array* $tmp32 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp33 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp32, $tmp33);
panda$collections$Array$add$panda$collections$Array$T($tmp32, ((panda$core$Object*) param3));
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
panda$collections$Array* $tmp34 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
*(&local3) = $tmp32;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing REF($88:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 32
org$pandalanguage$pandac$Symbol* $tmp35 = *(&local2);
panda$core$Bit $tmp36 = panda$core$Bit$init$builtin_bit($tmp35 != NULL);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp38 = (panda$core$Int64) {32};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s39, $tmp38, &$s40);
abort(); // unreachable
block9:;
org$pandalanguage$pandac$Symbol$Kind* $tmp41 = &$tmp35->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp42 = *$tmp41;
panda$core$Int64 $tmp43 = $tmp42.$rawValue;
panda$core$Int64 $tmp44 = (panda$core$Int64) {5};
panda$core$Bit $tmp45 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp44);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block12; else goto block13;
block12:;
// line 34
org$pandalanguage$pandac$Symbol* $tmp47 = *(&local2);
org$pandalanguage$pandac$Annotations** $tmp48 = &((org$pandalanguage$pandac$MethodDecl*) $tmp47)->annotations;
org$pandalanguage$pandac$Annotations* $tmp49 = *$tmp48;
panda$core$Bit $tmp50 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp49);
panda$core$Bit $tmp51 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block16; else goto block17;
block16:;
*(&local4) = $tmp51;
goto block18;
block17:;
panda$core$Bit $tmp53 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit(param1);
*(&local4) = $tmp53;
goto block18;
block18:;
panda$core$Bit $tmp54 = *(&local4);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block14; else goto block15;
block14:;
// line 35
panda$collections$Array* $tmp56 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp56);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$collections$Array* $tmp57 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
*(&local5) = $tmp56;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing REF($140:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 36
panda$collections$Array* $tmp58 = *(&local5);
org$pandalanguage$pandac$Symbol* $tmp59 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp58, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp59)));
// line 37
org$pandalanguage$pandac$Position $tmp60 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$IR$Value* $tmp61 = *(&local1);
panda$collections$Array* $tmp62 = *(&local5);
panda$collections$Array* $tmp63 = *(&local3);
org$pandalanguage$pandac$Pair* $tmp64 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, $tmp60, $tmp61, ((panda$collections$ListView*) $tmp62), ((panda$collections$ListView*) $tmp63), param4);
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
org$pandalanguage$pandac$Pair* $tmp65 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
*(&local6) = $tmp64;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($168:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
// line 39
org$pandalanguage$pandac$Pair* $tmp66 = *(&local6);
panda$core$Bit $tmp67 = panda$core$Bit$init$builtin_bit($tmp66 != NULL);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block19; else goto block20;
block19:;
// line 40
org$pandalanguage$pandac$Pair* $tmp69 = *(&local6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
org$pandalanguage$pandac$Pair* $tmp70 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing result
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp71 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing list
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp72 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing args
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp73 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp74 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp75 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp69;
block20:;
org$pandalanguage$pandac$Pair* $tmp76 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing result
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp77 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing list
*(&local5) = ((panda$collections$Array*) NULL);
goto block15;
block15:;
goto block11;
block13:;
panda$core$Int64 $tmp78 = (panda$core$Int64) {6};
panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp78);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block21; else goto block22;
block21:;
// line 45
org$pandalanguage$pandac$Position $tmp81 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$IR$Value* $tmp82 = *(&local1);
org$pandalanguage$pandac$Symbol* $tmp83 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp84 = &((org$pandalanguage$pandac$Methods*) $tmp83)->methods;
org$pandalanguage$pandac$FixedArray* $tmp85 = *$tmp84;
org$pandalanguage$pandac$expression$Binary$_Closure2* $tmp86 = (org$pandalanguage$pandac$expression$Binary$_Closure2*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$expression$Binary$_Closure2$class);
org$pandalanguage$pandac$expression$Binary$_Closure2$init$org$pandalanguage$pandac$Type($tmp86, param1);
panda$core$MutableMethod* $tmp88 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp88, ((panda$core$Int8*) org$pandalanguage$pandac$expression$Binary$_Closure2$$anonymous1$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit), ((panda$core$Object*) $tmp86));
ITable* $tmp89 = ((panda$collections$ListView*) $tmp85)->$class->itable;
while ($tmp89->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[4];
panda$collections$ListView* $tmp92 = $tmp90(((panda$collections$ListView*) $tmp85), ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp88)));
panda$collections$Array* $tmp93 = *(&local3);
org$pandalanguage$pandac$Pair* $tmp94 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, $tmp81, $tmp82, $tmp92, ((panda$collections$ListView*) $tmp93), param4);
*(&local7) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
org$pandalanguage$pandac$Pair* $tmp95 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
*(&local7) = $tmp94;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($259:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing REF($255:panda.collections.ListView<panda.collections.ListView.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
// unreffing REF($248:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
// unreffing REF($245:org.pandalanguage.pandac.expression.Binary._Closure2)
// line 48
org$pandalanguage$pandac$Pair* $tmp96 = *(&local7);
panda$core$Bit $tmp97 = panda$core$Bit$init$builtin_bit($tmp96 != NULL);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block23; else goto block24;
block23:;
// line 49
org$pandalanguage$pandac$Pair* $tmp99 = *(&local7);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
org$pandalanguage$pandac$Pair* $tmp100 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
// unreffing result
*(&local7) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp101 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing args
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp102 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp103 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp104 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp99;
block24:;
org$pandalanguage$pandac$Pair* $tmp105 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
// unreffing result
*(&local7) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block11;
block22:;
// line 53
panda$core$Bit $tmp106 = panda$core$Bit$init$builtin_bit(false);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp108 = (panda$core$Int64) {53};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s109, $tmp108);
abort(); // unreachable
block25:;
goto block11;
block11:;
panda$collections$Array* $tmp110 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing args
*(&local3) = ((panda$collections$Array*) NULL);
goto block8;
block8:;
// line 59
org$pandalanguage$pandac$Type* $tmp111 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, param3);
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
org$pandalanguage$pandac$Type* $tmp112 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
*(&local8) = $tmp111;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($336:org.pandalanguage.pandac.Type?)
// line 60
org$pandalanguage$pandac$Type* $tmp113 = *(&local8);
panda$core$Bit $tmp114 = panda$core$Bit$init$builtin_bit($tmp113 == NULL);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block27; else goto block28;
block27:;
// line 61
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
org$pandalanguage$pandac$Type* $tmp116 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp117 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp118 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp119 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$Pair*) NULL);
block28:;
// line 63
org$pandalanguage$pandac$Type* $tmp120 = *(&local8);
panda$core$Bit $tmp121 = panda$core$Bit$init$builtin_bit($tmp120 != NULL);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp123 = (panda$core$Int64) {63};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s124, $tmp123, &$s125);
abort(); // unreachable
block31:;
panda$core$Bit $tmp126 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp120);
panda$core$Bit $tmp127 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp126);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block29; else goto block30;
block29:;
// line 64
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
org$pandalanguage$pandac$Type* $tmp129 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp130 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp131 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp132 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$Pair*) NULL);
block30:;
// line 66
org$pandalanguage$pandac$Type* $tmp133 = *(&local8);
panda$core$Bit $tmp134 = panda$core$Bit$init$builtin_bit($tmp133 != NULL);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block33; else goto block34;
block34:;
panda$core$Int64 $tmp136 = (panda$core$Int64) {66};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s137, $tmp136, &$s138);
abort(); // unreachable
block33:;
org$pandalanguage$pandac$ClassDecl* $tmp139 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp133);
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
org$pandalanguage$pandac$ClassDecl* $tmp140 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
*(&local9) = $tmp139;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing REF($425:org.pandalanguage.pandac.ClassDecl?)
// line 67
org$pandalanguage$pandac$ClassDecl* $tmp141 = *(&local9);
panda$core$Bit $tmp142 = panda$core$Bit$init$builtin_bit($tmp141 == NULL);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block35; else goto block36;
block35:;
// line 68
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp144 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing rightCl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp145 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp146 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp147 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp148 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$Pair*) NULL);
block36:;
// line 70
org$pandalanguage$pandac$ClassDecl* $tmp149 = *(&local9);
panda$core$Bit $tmp150 = panda$core$Bit$init$builtin_bit($tmp149 != NULL);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp152 = (panda$core$Int64) {70};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s153, $tmp152, &$s154);
abort(); // unreachable
block37:;
org$pandalanguage$pandac$SymbolTable* $tmp155 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp149);
panda$core$String* $tmp156 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(param2);
org$pandalanguage$pandac$Symbol* $tmp157 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp155, $tmp156);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
org$pandalanguage$pandac$Symbol* $tmp158 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
*(&local2) = $tmp157;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing REF($483:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
// unreffing REF($482:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
// unreffing REF($481:org.pandalanguage.pandac.SymbolTable)
// line 71
org$pandalanguage$pandac$Symbol* $tmp159 = *(&local2);
panda$core$Bit $tmp160 = panda$core$Bit$init$builtin_bit($tmp159 == NULL);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block39; else goto block40;
block39:;
// line 72
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp162 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
// unreffing rightCl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp163 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp164 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp165 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp166 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$Pair*) NULL);
block40:;
// line 74
panda$collections$Array* $tmp167 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp168 = (panda$core$Int64) {2};
panda$collections$Array$init$panda$core$Int64($tmp167, $tmp168);
org$pandalanguage$pandac$ASTNode* $tmp169 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp170 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position $tmp171 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$IR$Value* $tmp172 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp169, $tmp170, $tmp171, $tmp172);
panda$collections$Array$add$panda$collections$Array$T($tmp167, ((panda$core$Object*) $tmp169));
panda$collections$Array$add$panda$collections$Array$T($tmp167, ((panda$core$Object*) param3));
*(&local10) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
panda$collections$Array* $tmp173 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
*(&local10) = $tmp167;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
// unreffing REF($540:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// unreffing REF($535:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 75
org$pandalanguage$pandac$Symbol* $tmp174 = *(&local2);
panda$core$Bit $tmp175 = panda$core$Bit$init$builtin_bit($tmp174 != NULL);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block41; else goto block42;
block42:;
panda$core$Int64 $tmp177 = (panda$core$Int64) {75};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s178, $tmp177, &$s179);
abort(); // unreachable
block41:;
org$pandalanguage$pandac$Symbol$Kind* $tmp180 = &$tmp174->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp181 = *$tmp180;
panda$core$Int64 $tmp182 = $tmp181.$rawValue;
panda$core$Int64 $tmp183 = (panda$core$Int64) {5};
panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp182, $tmp183);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block44; else goto block45;
block44:;
// line 77
org$pandalanguage$pandac$Symbol* $tmp186 = *(&local2);
org$pandalanguage$pandac$Annotations** $tmp187 = &((org$pandalanguage$pandac$MethodDecl*) $tmp186)->annotations;
org$pandalanguage$pandac$Annotations* $tmp188 = *$tmp187;
panda$core$Bit $tmp189 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp188);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block46; else goto block47;
block46:;
// line 78
panda$collections$Array* $tmp191 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp191);
*(&local11) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
panda$collections$Array* $tmp192 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
*(&local11) = $tmp191;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing REF($589:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 79
panda$collections$Array* $tmp193 = *(&local11);
org$pandalanguage$pandac$Symbol* $tmp194 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp193, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp194)));
// line 80
org$pandalanguage$pandac$Position $tmp195 = org$pandalanguage$pandac$Position$init();
panda$collections$Array* $tmp196 = *(&local11);
panda$collections$Array* $tmp197 = *(&local10);
org$pandalanguage$pandac$Pair* $tmp198 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, $tmp195, ((org$pandalanguage$pandac$IR$Value*) NULL), ((panda$collections$ListView*) $tmp196), ((panda$collections$ListView*) $tmp197), param4);
*(&local12) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
org$pandalanguage$pandac$Pair* $tmp199 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
*(&local12) = $tmp198;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing REF($615:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
// line 81
org$pandalanguage$pandac$Pair* $tmp200 = *(&local12);
panda$core$Bit $tmp201 = panda$core$Bit$init$builtin_bit($tmp200 != NULL);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block48; else goto block49;
block48:;
// line 82
org$pandalanguage$pandac$Pair* $tmp203 = *(&local12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
org$pandalanguage$pandac$Pair* $tmp204 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing result
*(&local12) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp205 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing list
*(&local11) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp206 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing args
*(&local10) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp207 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
// unreffing rightCl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp208 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp209 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp210 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp211 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp203;
block49:;
org$pandalanguage$pandac$Pair* $tmp212 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
// unreffing result
*(&local12) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp213 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
// unreffing list
*(&local11) = ((panda$collections$Array*) NULL);
goto block47;
block47:;
goto block43;
block45:;
panda$core$Int64 $tmp214 = (panda$core$Int64) {6};
panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp182, $tmp214);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block50; else goto block51;
block50:;
// line 87
org$pandalanguage$pandac$Position $tmp217 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Symbol* $tmp218 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp219 = &((org$pandalanguage$pandac$Methods*) $tmp218)->methods;
org$pandalanguage$pandac$FixedArray* $tmp220 = *$tmp219;
panda$core$Method* $tmp222 = (panda$core$Method*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp222, ((panda$core$Int8*) org$pandalanguage$pandac$expression$Binary$$anonymous3$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit), ((panda$core$Immutable*) NULL));
ITable* $tmp223 = ((panda$collections$ListView*) $tmp220)->$class->itable;
while ($tmp223->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp223 = $tmp223->next;
}
$fn225 $tmp224 = $tmp223->methods[4];
panda$collections$ListView* $tmp226 = $tmp224(((panda$collections$ListView*) $tmp220), ((panda$core$MutableMethod*) $tmp222));
panda$collections$Array* $tmp227 = *(&local10);
org$pandalanguage$pandac$Pair* $tmp228 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, $tmp217, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp226, ((panda$collections$ListView*) $tmp227), param4);
*(&local13) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp228));
org$pandalanguage$pandac$Pair* $tmp229 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
*(&local13) = $tmp228;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp228));
// unreffing REF($711:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
// unreffing REF($707:panda.collections.ListView<panda.collections.ListView.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing REF($701:panda.core.Method)
// line 89
org$pandalanguage$pandac$Pair* $tmp230 = *(&local13);
panda$core$Bit $tmp231 = panda$core$Bit$init$builtin_bit($tmp230 != NULL);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block52; else goto block53;
block52:;
// line 90
org$pandalanguage$pandac$Pair* $tmp233 = *(&local13);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
org$pandalanguage$pandac$Pair* $tmp234 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
// unreffing result
*(&local13) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp235 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// unreffing args
*(&local10) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp236 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// unreffing rightCl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp237 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp238 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp239 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp240 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing leftCl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp233;
block53:;
org$pandalanguage$pandac$Pair* $tmp241 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
// unreffing result
*(&local13) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block43;
block51:;
// line 94
panda$core$Bit $tmp242 = panda$core$Bit$init$builtin_bit(false);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp244 = (panda$core$Int64) {94};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s245, $tmp244);
abort(); // unreachable
block54:;
goto block43;
block43:;
// line 97
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
panda$collections$Array* $tmp246 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
// unreffing args
*(&local10) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp247 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// unreffing rightCl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp248 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
// unreffing rightType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Symbol* $tmp249 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp249));
// unreffing methods
*(&local2) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp250 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp251 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
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
panda$collections$CollectionView* $tmp252 = org$pandalanguage$pandac$Compiler$possibleTypes$org$pandalanguage$pandac$ASTNode$R$panda$collections$CollectionView$LTorg$pandalanguage$pandac$Type$GT$Q(param0, param1);
*(&local0) = ((panda$collections$CollectionView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
panda$collections$CollectionView* $tmp253 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
*(&local0) = $tmp252;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
// unreffing REF($1:panda.collections.CollectionView<org.pandalanguage.pandac.Type>?)
// line 104
panda$collections$CollectionView* $tmp254 = *(&local0);
panda$core$Bit $tmp255 = panda$core$Bit$init$builtin_bit($tmp254 != NULL);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block1; else goto block2;
block1:;
// line 105
*(&local1) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
org$pandalanguage$pandac$Pair* $tmp257 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
*(&local1) = ((org$pandalanguage$pandac$Pair*) NULL);
// line 106
panda$collections$CollectionView* $tmp258 = *(&local0);
panda$core$Bit $tmp259 = panda$core$Bit$init$builtin_bit($tmp258 != NULL);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp261 = (panda$core$Int64) {106};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s262, $tmp261, &$s263);
abort(); // unreachable
block3:;
ITable* $tmp264 = ((panda$collections$Iterable*) $tmp258)->$class->itable;
while ($tmp264->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[0];
panda$collections$Iterator* $tmp267 = $tmp265(((panda$collections$Iterable*) $tmp258));
goto block5;
block5:;
ITable* $tmp268 = $tmp267->$class->itable;
while ($tmp268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp268 = $tmp268->next;
}
$fn270 $tmp269 = $tmp268->methods[0];
panda$core$Bit $tmp271 = $tmp269($tmp267);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block7; else goto block6;
block6:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp273 = $tmp267->$class->itable;
while ($tmp273->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp273 = $tmp273->next;
}
$fn275 $tmp274 = $tmp273->methods[1];
panda$core$Object* $tmp276 = $tmp274($tmp267);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp276)));
org$pandalanguage$pandac$Type* $tmp277 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp276);
// line 107
org$pandalanguage$pandac$Type* $tmp278 = *(&local2);
org$pandalanguage$pandac$Pair* $tmp279 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Cpanda$core$Int64$GT$Q(param0, param1, $tmp278);
*(&local3) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
org$pandalanguage$pandac$Pair* $tmp280 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
*(&local3) = $tmp279;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
// unreffing REF($59:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, panda.core.Int64>?)
// line 108
org$pandalanguage$pandac$Pair* $tmp281 = *(&local3);
panda$core$Bit $tmp282 = panda$core$Bit$init$builtin_bit($tmp281 != NULL);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp284 = (panda$core$Int64) {108};
panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s286, ((panda$core$Object*) param1));
panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp285, &$s288);
org$pandalanguage$pandac$Type* $tmp289 = *(&local2);
panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp287, ((panda$core$Object*) $tmp289));
panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp290, &$s292);
$fn294 $tmp293 = ($fn294) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp295 = $tmp293(param1);
org$pandalanguage$pandac$Position$wrapper* $tmp296;
$tmp296 = (org$pandalanguage$pandac$Position$wrapper*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp296->value = $tmp295;
panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp291, ((panda$core$Object*) $tmp296));
panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp297, &$s299);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s300, $tmp284, $tmp298);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// unreffing REF($88:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
// unreffing REF($87:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
// unreffing REF($86:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
// unreffing REF($83:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
// unreffing REF($82:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing REF($79:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
// unreffing REF($78:panda.core.String)
abort(); // unreachable
block8:;
// line 110
org$pandalanguage$pandac$Type* $tmp301 = *(&local2);
org$pandalanguage$pandac$Pair* $tmp302 = org$pandalanguage$pandac$expression$Binary$findOverloadedOperator$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, $tmp301, param2, param3, param4);
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
org$pandalanguage$pandac$Pair* $tmp303 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
*(&local4) = $tmp302;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing REF($114:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
// line 111
org$pandalanguage$pandac$Pair* $tmp304 = *(&local4);
panda$core$Bit $tmp305 = panda$core$Bit$init$builtin_bit($tmp304 != NULL);
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block10; else goto block11;
block10:;
// line 112
org$pandalanguage$pandac$Pair* $tmp307 = *(&local4);
panda$core$Bit $tmp308 = panda$core$Bit$init$builtin_bit($tmp307 != NULL);
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp310 = (panda$core$Int64) {112};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s311, $tmp310, &$s312);
abort(); // unreachable
block12:;
panda$core$Object** $tmp313 = &$tmp307->second;
panda$core$Object* $tmp314 = *$tmp313;
org$pandalanguage$pandac$Pair* $tmp315 = *(&local3);
panda$core$Bit $tmp316 = panda$core$Bit$init$builtin_bit($tmp315 != NULL);
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp318 = (panda$core$Int64) {112};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s319, $tmp318, &$s320);
abort(); // unreachable
block14:;
panda$core$Object** $tmp321 = &$tmp315->second;
panda$core$Object* $tmp322 = *$tmp321;
int64_t $tmp323 = ((panda$core$Int64$wrapper*) $tmp314)->value.value;
int64_t $tmp324 = ((panda$core$Int64$wrapper*) $tmp322)->value.value;
int64_t $tmp325 = $tmp323 + $tmp324;
panda$core$Int64 $tmp326 = (panda$core$Int64) {$tmp325};
*(&local5) = $tmp326;
// line 113
org$pandalanguage$pandac$Pair* $tmp327 = *(&local1);
panda$core$Bit $tmp328 = panda$core$Bit$init$builtin_bit($tmp327 == NULL);
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block18; else goto block19;
block18:;
*(&local6) = $tmp328;
goto block20;
block19:;
panda$core$Int64 $tmp330 = *(&local5);
org$pandalanguage$pandac$Pair* $tmp331 = *(&local1);
panda$core$Bit $tmp332 = panda$core$Bit$init$builtin_bit($tmp331 != NULL);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp334 = (panda$core$Int64) {113};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s335, $tmp334, &$s336);
abort(); // unreachable
block21:;
panda$core$Object** $tmp337 = &$tmp331->second;
panda$core$Object* $tmp338 = *$tmp337;
int64_t $tmp339 = $tmp330.value;
int64_t $tmp340 = ((panda$core$Int64$wrapper*) $tmp338)->value.value;
bool $tmp341 = $tmp339 < $tmp340;
panda$core$Bit $tmp342 = (panda$core$Bit) {$tmp341};
*(&local6) = $tmp342;
goto block20;
block20:;
panda$core$Bit $tmp343 = *(&local6);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block16; else goto block23;
block16:;
// line 114
org$pandalanguage$pandac$Pair* $tmp345 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
org$pandalanguage$pandac$Pair* $tmp346 = *(&local4);
panda$core$Bit $tmp347 = panda$core$Bit$init$builtin_bit($tmp346 != NULL);
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp349 = (panda$core$Int64) {114};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s350, $tmp349, &$s351);
abort(); // unreachable
block24:;
panda$core$Object** $tmp352 = &$tmp346->first;
panda$core$Object* $tmp353 = *$tmp352;
panda$core$Int64 $tmp354 = *(&local5);
panda$core$Int64$wrapper* $tmp355;
$tmp355 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp355->value = $tmp354;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp345, ((panda$core$Object*) ((panda$collections$ListView*) $tmp353)), ((panda$core$Object*) $tmp355));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
org$pandalanguage$pandac$Pair* $tmp356 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
*(&local1) = $tmp345;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
// unreffing REF($208:org.pandalanguage.pandac.Pair.B)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
// unreffing REF($192:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>)
goto block17;
block23:;
// line 116
panda$core$Int64 $tmp357 = *(&local5);
org$pandalanguage$pandac$Pair* $tmp358 = *(&local1);
panda$core$Bit $tmp359 = panda$core$Bit$init$builtin_bit($tmp358 != NULL);
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp361 = (panda$core$Int64) {116};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s362, $tmp361, &$s363);
abort(); // unreachable
block28:;
panda$core$Object** $tmp364 = &$tmp358->second;
panda$core$Object* $tmp365 = *$tmp364;
panda$core$Bit $tmp366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp357, ((panda$core$Int64$wrapper*) $tmp365)->value);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block26; else goto block27;
block26:;
// line 117
panda$collections$Array* $tmp368 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp368);
*(&local7) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
panda$collections$Array* $tmp369 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
*(&local7) = $tmp368;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
// unreffing REF($242:panda.collections.Array<org.pandalanguage.pandac.MethodRef>)
// line 118
panda$collections$Array* $tmp370 = *(&local7);
org$pandalanguage$pandac$Pair* $tmp371 = *(&local1);
panda$core$Bit $tmp372 = panda$core$Bit$init$builtin_bit($tmp371 != NULL);
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block30; else goto block31;
block31:;
panda$core$Int64 $tmp374 = (panda$core$Int64) {118};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s375, $tmp374, &$s376);
abort(); // unreachable
block30:;
panda$core$Object** $tmp377 = &$tmp371->first;
panda$core$Object* $tmp378 = *$tmp377;
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp370, ((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp378)));
// line 119
org$pandalanguage$pandac$Pair* $tmp379 = *(&local4);
panda$core$Bit $tmp380 = panda$core$Bit$init$builtin_bit($tmp379 != NULL);
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp382 = (panda$core$Int64) {119};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s383, $tmp382, &$s384);
abort(); // unreachable
block32:;
panda$core$Object** $tmp385 = &$tmp379->first;
panda$core$Object* $tmp386 = *$tmp385;
ITable* $tmp387 = ((panda$collections$Iterable*) ((panda$collections$ListView*) $tmp386))->$class->itable;
while ($tmp387->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp387 = $tmp387->next;
}
$fn389 $tmp388 = $tmp387->methods[0];
panda$collections$Iterator* $tmp390 = $tmp388(((panda$collections$Iterable*) ((panda$collections$ListView*) $tmp386)));
goto block34;
block34:;
ITable* $tmp391 = $tmp390->$class->itable;
while ($tmp391->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp391 = $tmp391->next;
}
$fn393 $tmp392 = $tmp391->methods[0];
panda$core$Bit $tmp394 = $tmp392($tmp390);
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block36; else goto block35;
block35:;
*(&local8) = ((org$pandalanguage$pandac$MethodRef*) NULL);
ITable* $tmp396 = $tmp390->$class->itable;
while ($tmp396->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp396 = $tmp396->next;
}
$fn398 $tmp397 = $tmp396->methods[1];
panda$core$Object* $tmp399 = $tmp397($tmp390);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp399)));
org$pandalanguage$pandac$MethodRef* $tmp400 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp400));
*(&local8) = ((org$pandalanguage$pandac$MethodRef*) $tmp399);
// line 120
org$pandalanguage$pandac$Pair* $tmp401 = *(&local1);
panda$core$Bit $tmp402 = panda$core$Bit$init$builtin_bit($tmp401 != NULL);
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp404 = (panda$core$Int64) {120};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s405, $tmp404, &$s406);
abort(); // unreachable
block37:;
panda$core$Object** $tmp407 = &$tmp401->first;
panda$core$Object* $tmp408 = *$tmp407;
ITable* $tmp409 = ((panda$collections$Iterable*) ((panda$collections$ListView*) $tmp408))->$class->itable;
while ($tmp409->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp409 = $tmp409->next;
}
$fn411 $tmp410 = $tmp409->methods[0];
panda$collections$Iterator* $tmp412 = $tmp410(((panda$collections$Iterable*) ((panda$collections$ListView*) $tmp408)));
goto block39;
block39:;
ITable* $tmp413 = $tmp412->$class->itable;
while ($tmp413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp413 = $tmp413->next;
}
$fn415 $tmp414 = $tmp413->methods[0];
panda$core$Bit $tmp416 = $tmp414($tmp412);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block41; else goto block40;
block40:;
*(&local9) = ((org$pandalanguage$pandac$MethodRef*) NULL);
ITable* $tmp418 = $tmp412->$class->itable;
while ($tmp418->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp418 = $tmp418->next;
}
$fn420 $tmp419 = $tmp418->methods[1];
panda$core$Object* $tmp421 = $tmp419($tmp412);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp421)));
org$pandalanguage$pandac$MethodRef* $tmp422 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
*(&local9) = ((org$pandalanguage$pandac$MethodRef*) $tmp421);
// line 121
org$pandalanguage$pandac$MethodRef* $tmp423 = *(&local9);
org$pandalanguage$pandac$MethodDecl** $tmp424 = &$tmp423->value;
org$pandalanguage$pandac$MethodDecl* $tmp425 = *$tmp424;
org$pandalanguage$pandac$MethodRef* $tmp426 = *(&local8);
org$pandalanguage$pandac$MethodDecl** $tmp427 = &$tmp426->value;
org$pandalanguage$pandac$MethodDecl* $tmp428 = *$tmp427;
bool $tmp429 = $tmp425 == $tmp428;
panda$core$Bit $tmp430 = panda$core$Bit$init$builtin_bit($tmp429);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block42; else goto block43;
block42:;
// line 122
panda$core$Panda$unref$panda$core$Object$Q($tmp421);
// unreffing REF($335:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodRef* $tmp432 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
// unreffing old
*(&local9) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp412));
// unreffing REF($324:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q($tmp399);
// unreffing REF($300:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodRef* $tmp433 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
// unreffing op
*(&local8) = ((org$pandalanguage$pandac$MethodRef*) NULL);
goto block34;
block43:;
panda$core$Panda$unref$panda$core$Object$Q($tmp421);
// unreffing REF($335:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodRef* $tmp434 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
// unreffing old
*(&local9) = ((org$pandalanguage$pandac$MethodRef*) NULL);
goto block39;
block41:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp412));
// unreffing REF($324:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 125
panda$collections$Array* $tmp435 = *(&local7);
org$pandalanguage$pandac$MethodRef* $tmp436 = *(&local8);
panda$collections$Array$add$panda$collections$Array$T($tmp435, ((panda$core$Object*) $tmp436));
panda$core$Panda$unref$panda$core$Object$Q($tmp399);
// unreffing REF($300:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodRef* $tmp437 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
// unreffing op
*(&local8) = ((org$pandalanguage$pandac$MethodRef*) NULL);
goto block34;
block36:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
// unreffing REF($289:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 127
org$pandalanguage$pandac$Pair* $tmp438 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$collections$Array* $tmp439 = *(&local7);
panda$core$Int64 $tmp440 = *(&local5);
panda$core$Int64$wrapper* $tmp441;
$tmp441 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp441->value = $tmp440;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp438, ((panda$core$Object*) ((panda$collections$ListView*) $tmp439)), ((panda$core$Object*) $tmp441));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
org$pandalanguage$pandac$Pair* $tmp442 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
*(&local1) = $tmp438;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
// unreffing REF($412:org.pandalanguage.pandac.Pair.B)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
// unreffing REF($406:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>)
panda$collections$Array* $tmp443 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
// unreffing a
*(&local7) = ((panda$collections$Array*) NULL);
goto block27;
block27:;
goto block17;
block17:;
goto block11;
block11:;
org$pandalanguage$pandac$Pair* $tmp444 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
// unreffing ops
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Pair* $tmp445 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
// unreffing compilerCost
*(&local3) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp276);
// unreffing REF($49:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp446 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block5;
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing REF($38:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 131
org$pandalanguage$pandac$Pair* $tmp447 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
org$pandalanguage$pandac$Pair* $tmp448 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
// unreffing best
*(&local1) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$CollectionView* $tmp449 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
// unreffing leftTypes
*(&local0) = ((panda$collections$CollectionView*) NULL);
return $tmp447;
block2:;
// line 133
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
panda$collections$CollectionView* $tmp450 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
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
panda$core$Int64* $tmp451 = &param1->$rawValue;
panda$core$Int64 $tmp452 = *$tmp451;
panda$core$Int64 $tmp453 = (panda$core$Int64) {25};
panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp452, $tmp453);
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp456 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp457 = *$tmp456;
panda$core$UInt64* $tmp458 = (panda$core$UInt64*) (param1->$data + 16);
panda$core$UInt64 $tmp459 = *$tmp458;
*(&local2) = $tmp459;
// line 143
panda$core$UInt64 $tmp460 = *(&local2);
panda$core$Int64 $tmp461 = (panda$core$Int64) {9223372036854775807};
panda$core$UInt64 $tmp462 = panda$core$Int64$convert$R$panda$core$UInt64($tmp461);
uint64_t $tmp463 = $tmp460.value;
uint64_t $tmp464 = $tmp462.value;
bool $tmp465 = $tmp463 > $tmp464;
panda$core$Bit $tmp466 = (panda$core$Bit) {$tmp465};
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block4; else goto block5;
block4:;
// line 144
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 146
panda$core$UInt64 $tmp468 = *(&local2);
panda$core$Int64 $tmp469 = panda$core$UInt64$convert$R$panda$core$Int64($tmp468);
*(&local0) = $tmp469;
goto block1;
block3:;
// line 149
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
// line 152
panda$core$Int64* $tmp470 = &param3->$rawValue;
panda$core$Int64 $tmp471 = *$tmp470;
panda$core$Int64 $tmp472 = (panda$core$Int64) {25};
panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp471, $tmp472);
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Position* $tmp475 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp476 = *$tmp475;
panda$core$UInt64* $tmp477 = (panda$core$UInt64*) (param3->$data + 16);
panda$core$UInt64 $tmp478 = *$tmp477;
*(&local3) = $tmp478;
// line 154
panda$core$UInt64 $tmp479 = *(&local3);
panda$core$Int64 $tmp480 = (panda$core$Int64) {9223372036854775807};
panda$core$UInt64 $tmp481 = panda$core$Int64$convert$R$panda$core$UInt64($tmp480);
uint64_t $tmp482 = $tmp479.value;
uint64_t $tmp483 = $tmp481.value;
bool $tmp484 = $tmp482 > $tmp483;
panda$core$Bit $tmp485 = (panda$core$Bit) {$tmp484};
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block9; else goto block10;
block9:;
// line 155
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 157
panda$core$UInt64 $tmp487 = *(&local3);
panda$core$Int64 $tmp488 = panda$core$UInt64$convert$R$panda$core$Int64($tmp487);
*(&local1) = $tmp488;
goto block6;
block8:;
// line 160
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 163
panda$core$Int64 $tmp489 = param2.$rawValue;
panda$core$Int64 $tmp490 = (panda$core$Int64) {52};
panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp490);
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block12; else goto block13;
block12:;
// line 165
panda$core$Int64 $tmp493 = *(&local0);
panda$core$Int64 $tmp494 = *(&local1);
int64_t $tmp495 = $tmp493.value;
int64_t $tmp496 = $tmp494.value;
int64_t $tmp497 = $tmp495 + $tmp496;
panda$core$Int64 $tmp498 = (panda$core$Int64) {$tmp497};
panda$core$UInt64 $tmp499 = panda$core$Int64$convert$R$panda$core$UInt64($tmp498);
*(&local4) = $tmp499;
// line 166
org$pandalanguage$pandac$ASTNode* $tmp500 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp501 = (panda$core$Int64) {25};
$fn503 $tmp502 = ($fn503) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp504 = $tmp502(param1);
panda$core$UInt64 $tmp505 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp500, $tmp501, $tmp504, $tmp505);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
// unreffing REF($88:org.pandalanguage.pandac.ASTNode)
return $tmp500;
block13:;
panda$core$Int64 $tmp506 = (panda$core$Int64) {53};
panda$core$Bit $tmp507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp506);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block14; else goto block15;
block14:;
// line 169
panda$core$Int64 $tmp509 = *(&local0);
panda$core$Int64 $tmp510 = *(&local1);
int64_t $tmp511 = $tmp509.value;
int64_t $tmp512 = $tmp510.value;
int64_t $tmp513 = $tmp511 - $tmp512;
panda$core$Int64 $tmp514 = (panda$core$Int64) {$tmp513};
panda$core$UInt64 $tmp515 = panda$core$Int64$convert$R$panda$core$UInt64($tmp514);
*(&local5) = $tmp515;
// line 170
org$pandalanguage$pandac$ASTNode* $tmp516 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp517 = (panda$core$Int64) {25};
$fn519 $tmp518 = ($fn519) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp520 = $tmp518(param1);
panda$core$UInt64 $tmp521 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp516, $tmp517, $tmp520, $tmp521);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
// unreffing REF($115:org.pandalanguage.pandac.ASTNode)
return $tmp516;
block15:;
panda$core$Int64 $tmp522 = (panda$core$Int64) {54};
panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp522);
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block16; else goto block17;
block16:;
// line 173
panda$core$Int64 $tmp525 = *(&local0);
panda$core$Int64 $tmp526 = *(&local1);
int64_t $tmp527 = $tmp525.value;
int64_t $tmp528 = $tmp526.value;
int64_t $tmp529 = $tmp527 * $tmp528;
panda$core$Int64 $tmp530 = (panda$core$Int64) {$tmp529};
panda$core$UInt64 $tmp531 = panda$core$Int64$convert$R$panda$core$UInt64($tmp530);
*(&local6) = $tmp531;
// line 174
org$pandalanguage$pandac$ASTNode* $tmp532 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp533 = (panda$core$Int64) {25};
$fn535 $tmp534 = ($fn535) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp536 = $tmp534(param1);
panda$core$UInt64 $tmp537 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp532, $tmp533, $tmp536, $tmp537);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
// unreffing REF($142:org.pandalanguage.pandac.ASTNode)
return $tmp532;
block17:;
panda$core$Int64 $tmp538 = (panda$core$Int64) {56};
panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp538);
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block18; else goto block19;
block18:;
// line 177
panda$core$Int64 $tmp541 = *(&local1);
panda$core$Int64 $tmp542 = (panda$core$Int64) {0};
panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp541, $tmp542);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block20; else goto block21;
block20:;
// line 178
$fn546 $tmp545 = ($fn546) param3->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp547 = $tmp545(param3);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp547, &$s548);
// line 179
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 181
panda$core$Int64 $tmp549 = *(&local0);
panda$core$Int64 $tmp550 = *(&local1);
int64_t $tmp551 = $tmp549.value;
int64_t $tmp552 = $tmp550.value;
int64_t $tmp553 = $tmp551 / $tmp552;
panda$core$Int64 $tmp554 = (panda$core$Int64) {$tmp553};
panda$core$UInt64 $tmp555 = panda$core$Int64$convert$R$panda$core$UInt64($tmp554);
*(&local7) = $tmp555;
// line 182
org$pandalanguage$pandac$ASTNode* $tmp556 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp557 = (panda$core$Int64) {25};
$fn559 $tmp558 = ($fn559) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp560 = $tmp558(param1);
panda$core$UInt64 $tmp561 = *(&local7);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp556, $tmp557, $tmp560, $tmp561);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// unreffing REF($183:org.pandalanguage.pandac.ASTNode)
return $tmp556;
block19:;
panda$core$Int64 $tmp562 = (panda$core$Int64) {57};
panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block22; else goto block23;
block22:;
// line 185
panda$core$Int64 $tmp565 = *(&local1);
panda$core$Int64 $tmp566 = (panda$core$Int64) {0};
panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp565, $tmp566);
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block24; else goto block25;
block24:;
// line 186
$fn570 $tmp569 = ($fn570) param3->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp571 = $tmp569(param3);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp571, &$s572);
// line 187
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 189
panda$core$Int64 $tmp573 = *(&local0);
panda$core$Int64 $tmp574 = *(&local1);
panda$core$Int64 $tmp575 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp573, $tmp574);
panda$core$UInt64 $tmp576 = panda$core$Int64$convert$R$panda$core$UInt64($tmp575);
*(&local8) = $tmp576;
// line 190
org$pandalanguage$pandac$ASTNode* $tmp577 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp578 = (panda$core$Int64) {25};
$fn580 $tmp579 = ($fn580) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp581 = $tmp579(param1);
panda$core$UInt64 $tmp582 = *(&local8);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp577, $tmp578, $tmp581, $tmp582);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
// unreffing REF($221:org.pandalanguage.pandac.ASTNode)
return $tmp577;
block23:;
panda$core$Int64 $tmp583 = (panda$core$Int64) {59};
panda$core$Bit $tmp584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp583);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block26; else goto block27;
block26:;
// line 193
org$pandalanguage$pandac$ASTNode* $tmp586 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp587 = (panda$core$Int64) {6};
$fn589 $tmp588 = ($fn589) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp590 = $tmp588(param1);
panda$core$Int64 $tmp591 = *(&local0);
panda$core$Int64 $tmp592 = *(&local1);
panda$core$Bit $tmp593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp591, $tmp592);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp586, $tmp587, $tmp590, $tmp593);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
// unreffing REF($239:org.pandalanguage.pandac.ASTNode)
return $tmp586;
block27:;
panda$core$Int64 $tmp594 = (panda$core$Int64) {60};
panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block28; else goto block29;
block28:;
// line 196
org$pandalanguage$pandac$ASTNode* $tmp597 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp598 = (panda$core$Int64) {6};
$fn600 $tmp599 = ($fn600) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp601 = $tmp599(param1);
panda$core$Int64 $tmp602 = *(&local0);
panda$core$Int64 $tmp603 = *(&local1);
int64_t $tmp604 = $tmp602.value;
int64_t $tmp605 = $tmp603.value;
bool $tmp606 = $tmp604 != $tmp605;
panda$core$Bit $tmp607 = (panda$core$Bit) {$tmp606};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp597, $tmp598, $tmp601, $tmp607);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
// unreffing REF($259:org.pandalanguage.pandac.ASTNode)
return $tmp597;
block29:;
panda$core$Int64 $tmp608 = (panda$core$Int64) {63};
panda$core$Bit $tmp609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp608);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block30; else goto block31;
block30:;
// line 199
org$pandalanguage$pandac$ASTNode* $tmp611 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp612 = (panda$core$Int64) {6};
$fn614 $tmp613 = ($fn614) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp615 = $tmp613(param1);
panda$core$Int64 $tmp616 = *(&local0);
panda$core$Int64 $tmp617 = *(&local1);
int64_t $tmp618 = $tmp616.value;
int64_t $tmp619 = $tmp617.value;
bool $tmp620 = $tmp618 < $tmp619;
panda$core$Bit $tmp621 = (panda$core$Bit) {$tmp620};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp611, $tmp612, $tmp615, $tmp621);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
// unreffing REF($282:org.pandalanguage.pandac.ASTNode)
return $tmp611;
block31:;
panda$core$Int64 $tmp622 = (panda$core$Int64) {64};
panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp622);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block32; else goto block33;
block32:;
// line 202
org$pandalanguage$pandac$ASTNode* $tmp625 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp626 = (panda$core$Int64) {6};
$fn628 $tmp627 = ($fn628) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp629 = $tmp627(param1);
panda$core$Int64 $tmp630 = *(&local0);
panda$core$Int64 $tmp631 = *(&local1);
int64_t $tmp632 = $tmp630.value;
int64_t $tmp633 = $tmp631.value;
bool $tmp634 = $tmp632 > $tmp633;
panda$core$Bit $tmp635 = (panda$core$Bit) {$tmp634};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp625, $tmp626, $tmp629, $tmp635);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp625));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp625));
// unreffing REF($305:org.pandalanguage.pandac.ASTNode)
return $tmp625;
block33:;
panda$core$Int64 $tmp636 = (panda$core$Int64) {65};
panda$core$Bit $tmp637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp636);
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block34; else goto block35;
block34:;
// line 205
org$pandalanguage$pandac$ASTNode* $tmp639 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp640 = (panda$core$Int64) {6};
$fn642 $tmp641 = ($fn642) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp643 = $tmp641(param1);
panda$core$Int64 $tmp644 = *(&local0);
panda$core$Int64 $tmp645 = *(&local1);
int64_t $tmp646 = $tmp644.value;
int64_t $tmp647 = $tmp645.value;
bool $tmp648 = $tmp646 <= $tmp647;
panda$core$Bit $tmp649 = (panda$core$Bit) {$tmp648};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp639, $tmp640, $tmp643, $tmp649);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
// unreffing REF($328:org.pandalanguage.pandac.ASTNode)
return $tmp639;
block35:;
panda$core$Int64 $tmp650 = (panda$core$Int64) {66};
panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp650);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block36; else goto block37;
block36:;
// line 208
org$pandalanguage$pandac$ASTNode* $tmp653 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp654 = (panda$core$Int64) {6};
$fn656 $tmp655 = ($fn656) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp657 = $tmp655(param1);
panda$core$Int64 $tmp658 = *(&local0);
panda$core$Int64 $tmp659 = *(&local1);
int64_t $tmp660 = $tmp658.value;
int64_t $tmp661 = $tmp659.value;
bool $tmp662 = $tmp660 >= $tmp661;
panda$core$Bit $tmp663 = (panda$core$Bit) {$tmp662};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp653, $tmp654, $tmp657, $tmp663);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
// unreffing REF($351:org.pandalanguage.pandac.ASTNode)
return $tmp653;
block37:;
panda$core$Int64 $tmp664 = (panda$core$Int64) {68};
panda$core$Bit $tmp665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp664);
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block38; else goto block39;
block38:;
// line 211
panda$core$Int64 $tmp667 = *(&local0);
panda$core$Int64 $tmp668 = *(&local1);
panda$core$Int64 $tmp669 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp667, $tmp668);
panda$core$UInt64 $tmp670 = panda$core$Int64$convert$R$panda$core$UInt64($tmp669);
*(&local9) = $tmp670;
// line 212
org$pandalanguage$pandac$ASTNode* $tmp671 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp672 = (panda$core$Int64) {25};
$fn674 $tmp673 = ($fn674) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp675 = $tmp673(param1);
panda$core$UInt64 $tmp676 = *(&local9);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp671, $tmp672, $tmp675, $tmp676);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
// unreffing REF($380:org.pandalanguage.pandac.ASTNode)
return $tmp671;
block39:;
panda$core$Int64 $tmp677 = (panda$core$Int64) {70};
panda$core$Bit $tmp678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp677);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block40; else goto block41;
block40:;
// line 215
panda$core$Int64 $tmp680 = *(&local0);
panda$core$Int64 $tmp681 = *(&local1);
panda$core$Int64 $tmp682 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp680, $tmp681);
panda$core$UInt64 $tmp683 = panda$core$Int64$convert$R$panda$core$UInt64($tmp682);
*(&local10) = $tmp683;
// line 216
org$pandalanguage$pandac$ASTNode* $tmp684 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp685 = (panda$core$Int64) {25};
$fn687 $tmp686 = ($fn687) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp688 = $tmp686(param1);
panda$core$UInt64 $tmp689 = *(&local10);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp684, $tmp685, $tmp688, $tmp689);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
// unreffing REF($404:org.pandalanguage.pandac.ASTNode)
return $tmp684;
block41:;
panda$core$Int64 $tmp690 = (panda$core$Int64) {72};
panda$core$Bit $tmp691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp690);
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block42; else goto block43;
block42:;
// line 219
panda$core$Int64 $tmp693 = *(&local0);
panda$core$Int64 $tmp694 = *(&local1);
panda$core$Int64 $tmp695 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp693, $tmp694);
panda$core$UInt64 $tmp696 = panda$core$Int64$convert$R$panda$core$UInt64($tmp695);
*(&local11) = $tmp696;
// line 220
org$pandalanguage$pandac$ASTNode* $tmp697 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp698 = (panda$core$Int64) {25};
$fn700 $tmp699 = ($fn700) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp701 = $tmp699(param1);
panda$core$UInt64 $tmp702 = *(&local11);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp697, $tmp698, $tmp701, $tmp702);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
// unreffing REF($428:org.pandalanguage.pandac.ASTNode)
return $tmp697;
block43:;
panda$core$Int64 $tmp703 = (panda$core$Int64) {73};
panda$core$Bit $tmp704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp703);
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block44; else goto block45;
block44:;
// line 223
panda$core$Int64 $tmp706 = *(&local0);
panda$core$Int64 $tmp707 = *(&local1);
panda$core$Int64 $tmp708 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp706, $tmp707);
panda$core$UInt64 $tmp709 = panda$core$Int64$convert$R$panda$core$UInt64($tmp708);
*(&local12) = $tmp709;
// line 224
org$pandalanguage$pandac$ASTNode* $tmp710 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp711 = (panda$core$Int64) {25};
$fn713 $tmp712 = ($fn713) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp714 = $tmp712(param1);
panda$core$UInt64 $tmp715 = *(&local12);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp710, $tmp711, $tmp714, $tmp715);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
// unreffing REF($452:org.pandalanguage.pandac.ASTNode)
return $tmp710;
block45:;
panda$core$Int64 $tmp716 = (panda$core$Int64) {1};
panda$core$Bit $tmp717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp716);
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block46; else goto block11;
block46:;
// line 227
panda$core$Int64 $tmp719 = *(&local0);
panda$core$Int64 $tmp720 = *(&local1);
panda$core$Int64 $tmp721 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64($tmp719, $tmp720);
panda$core$UInt64 $tmp722 = panda$core$Int64$convert$R$panda$core$UInt64($tmp721);
*(&local13) = $tmp722;
// line 228
org$pandalanguage$pandac$ASTNode* $tmp723 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp724 = (panda$core$Int64) {25};
$fn726 $tmp725 = ($fn726) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp727 = $tmp725(param1);
panda$core$UInt64 $tmp728 = *(&local13);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp723, $tmp724, $tmp727, $tmp728);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
// unreffing REF($476:org.pandalanguage.pandac.ASTNode)
return $tmp723;
block11:;
// line 231
$fn730 $tmp729 = ($fn730) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp731 = $tmp729(param1);
panda$core$String* $tmp732 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(param2);
panda$core$String* $tmp733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s734, $tmp732);
panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp733, &$s736);
panda$core$String* $tmp737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp735, &$s738);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp731, $tmp737);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
// unreffing REF($495:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
// unreffing REF($494:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
// unreffing REF($493:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp732));
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
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp739;
$tmp739 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp739->value = param2;
panda$core$Int64 $tmp740 = (panda$core$Int64) {52};
org$pandalanguage$pandac$parser$Token$Kind $tmp741 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp740);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp742;
$tmp742 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp742->value = $tmp741;
ITable* $tmp743 = ((panda$core$Equatable*) $tmp739)->$class->itable;
while ($tmp743->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp743 = $tmp743->next;
}
$fn745 $tmp744 = $tmp743->methods[1];
panda$core$Bit $tmp746 = $tmp744(((panda$core$Equatable*) $tmp739), ((panda$core$Equatable*) $tmp742));
bool $tmp747 = $tmp746.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp742)));
// unreffing REF($5:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp739)));
// unreffing REF($1:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp747) goto block1; else goto block2;
block1:;
// line 241
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 243
panda$core$Int64* $tmp748 = &param1->$rawValue;
panda$core$Int64 $tmp749 = *$tmp748;
panda$core$Int64 $tmp750 = (panda$core$Int64) {41};
panda$core$Bit $tmp751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp749, $tmp750);
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block4; else goto block3;
block4:;
org$pandalanguage$pandac$Position* $tmp753 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp754 = *$tmp753;
*(&local0) = $tmp754;
panda$core$String** $tmp755 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp756 = *$tmp755;
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp756));
panda$core$String* $tmp757 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp757));
*(&local1) = $tmp756;
// line 245
panda$core$Int64* $tmp758 = &param3->$rawValue;
panda$core$Int64 $tmp759 = *$tmp758;
panda$core$Int64 $tmp760 = (panda$core$Int64) {41};
panda$core$Bit $tmp761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp759, $tmp760);
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block6; else goto block5;
block6:;
org$pandalanguage$pandac$Position* $tmp763 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp764 = *$tmp763;
panda$core$String** $tmp765 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp766 = *$tmp765;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
panda$core$String* $tmp767 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
*(&local2) = $tmp766;
// line 247
org$pandalanguage$pandac$ASTNode* $tmp768 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp769 = (panda$core$Int64) {41};
org$pandalanguage$pandac$Position $tmp770 = *(&local0);
panda$core$String* $tmp771 = *(&local1);
panda$core$String* $tmp772 = *(&local2);
panda$core$String* $tmp773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp771, $tmp772);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp768, $tmp769, $tmp770, $tmp773);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp773));
// unreffing REF($63:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
// unreffing REF($58:org.pandalanguage.pandac.ASTNode)
panda$core$String* $tmp774 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
// unreffing s2
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp775 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp775));
// unreffing s1
*(&local1) = ((panda$core$String*) NULL);
return $tmp768;
block5:;
panda$core$String* $tmp776 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp776));
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
panda$core$Int64* $tmp777 = &param1->$rawValue;
panda$core$Int64 $tmp778 = *$tmp777;
panda$core$Int64 $tmp779 = (panda$core$Int64) {25};
panda$core$Bit $tmp780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp778, $tmp779);
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block2; else goto block3;
block2:;
// line 259
org$pandalanguage$pandac$ASTNode* $tmp782 = org$pandalanguage$pandac$expression$Binary$foldInts$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1, param2, param3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
// unreffing REF($8:org.pandalanguage.pandac.ASTNode?)
return $tmp782;
block3:;
panda$core$Int64 $tmp783 = (panda$core$Int64) {41};
panda$core$Bit $tmp784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp778, $tmp783);
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block4; else goto block5;
block4:;
// line 262
org$pandalanguage$pandac$ASTNode* $tmp786 = org$pandalanguage$pandac$expression$Binary$foldStrings$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1, param2, param3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
// unreffing REF($20:org.pandalanguage.pandac.ASTNode?)
return $tmp786;
block5:;
// line 265
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp787 = panda$core$Bit$init$builtin_bit(false);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp789 = (panda$core$Int64) {256};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s790, $tmp789, &$s791);
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
org$pandalanguage$pandac$ASTNode* $tmp792 = org$pandalanguage$pandac$expression$Binary$fold$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(param0, param2, param3, param4);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
org$pandalanguage$pandac$ASTNode* $tmp793 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp793));
*(&local0) = $tmp792;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 274
org$pandalanguage$pandac$ASTNode* $tmp794 = *(&local0);
panda$core$Bit $tmp795 = panda$core$Bit$init$builtin_bit($tmp794 != NULL);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block1; else goto block2;
block1:;
// line 275
org$pandalanguage$pandac$ASTNode* $tmp797 = *(&local0);
panda$core$Bit $tmp798 = panda$core$Bit$init$builtin_bit($tmp797 != NULL);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp800 = (panda$core$Int64) {275};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s801, $tmp800, &$s802);
abort(); // unreachable
block3:;
org$pandalanguage$pandac$IR$Value* $tmp803 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp797, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
// unreffing REF($28:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$ASTNode* $tmp804 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp803;
block2:;
// line 277
panda$core$Int64 $tmp805 = param3.$rawValue;
panda$core$Int64 $tmp806 = (panda$core$Int64) {90};
panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp805, $tmp806);
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block6; else goto block7;
block6:;
// line 279
org$pandalanguage$pandac$Scanner** $tmp809 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp810 = *$tmp809;
org$pandalanguage$pandac$Type* $tmp811 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp810, param4);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
org$pandalanguage$pandac$Type* $tmp812 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
*(&local1) = $tmp811;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
// unreffing REF($49:org.pandalanguage.pandac.Type)
// line 280
org$pandalanguage$pandac$Type* $tmp813 = *(&local1);
org$pandalanguage$pandac$IR$Value* $tmp814 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, $tmp813);
org$pandalanguage$pandac$IR$Value* $tmp815 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp814, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp815));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp815));
// unreffing REF($63:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
// unreffing REF($62:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Type* $tmp816 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp817 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp817));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp815;
block7:;
panda$core$Int64 $tmp818 = (panda$core$Int64) {61};
panda$core$Bit $tmp819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp805, $tmp818);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp821 = (panda$core$Int64) {62};
panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp805, $tmp821);
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block8; else goto block10;
block8:;
// line 283
org$pandalanguage$pandac$IR$Value* $tmp824 = org$pandalanguage$pandac$Compiler$compileIdentityComparison$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param3, param4, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
// unreffing REF($92:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$ASTNode* $tmp825 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp824;
block10:;
// line 286
org$pandalanguage$pandac$Pair* $tmp826 = org$pandalanguage$pandac$expression$Binary$findOverloadedOperator$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, param2, param3, param4, param5);
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
org$pandalanguage$pandac$Pair* $tmp827 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
*(&local2) = $tmp826;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
// unreffing REF($105:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
// line 287
org$pandalanguage$pandac$Pair* $tmp828 = *(&local2);
panda$core$Bit $tmp829 = panda$core$Bit$init$builtin_bit($tmp828 != NULL);
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block11; else goto block12;
block11:;
// line 288
org$pandalanguage$pandac$Pair* $tmp831 = *(&local2);
panda$core$Bit $tmp832 = panda$core$Bit$init$builtin_bit($tmp831 != NULL);
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp834 = (panda$core$Int64) {288};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s835, $tmp834, &$s836);
abort(); // unreachable
block15:;
panda$core$Object** $tmp837 = &$tmp831->first;
panda$core$Object* $tmp838 = *$tmp837;
ITable* $tmp839 = ((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp838))->$class->itable;
while ($tmp839->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp839 = $tmp839->next;
}
$fn841 $tmp840 = $tmp839->methods[0];
panda$core$Int64 $tmp842 = $tmp840(((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp838)));
panda$core$Int64 $tmp843 = (panda$core$Int64) {1};
int64_t $tmp844 = $tmp842.value;
int64_t $tmp845 = $tmp843.value;
bool $tmp846 = $tmp844 > $tmp845;
panda$core$Bit $tmp847 = (panda$core$Bit) {$tmp846};
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block13; else goto block14;
block13:;
// line 289
org$pandalanguage$pandac$Pair* $tmp849 = *(&local2);
panda$core$Bit $tmp850 = panda$core$Bit$init$builtin_bit($tmp849 != NULL);
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp852 = (panda$core$Int64) {289};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s853, $tmp852, &$s854);
abort(); // unreachable
block17:;
panda$core$Object** $tmp855 = &$tmp849->first;
panda$core$Object* $tmp856 = *$tmp855;
panda$collections$Array* $tmp857 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp858 = (panda$core$Int64) {2};
panda$collections$Array$init$panda$core$Int64($tmp857, $tmp858);
panda$collections$Array$add$panda$collections$Array$T($tmp857, ((panda$core$Object*) param2));
panda$collections$Array$add$panda$collections$Array$T($tmp857, ((panda$core$Object*) param4));
org$pandalanguage$pandac$Compiler$reportAmbiguousMatch$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext(param0, param1, ((panda$collections$ListView*) $tmp856), ((panda$collections$ListView*) $tmp857), param5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp857));
// unreffing REF($158:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 290
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Pair* $tmp859 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp860 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block14:;
// line 292
org$pandalanguage$pandac$Pair* $tmp861 = *(&local2);
panda$core$Bit $tmp862 = panda$core$Bit$init$builtin_bit($tmp861 != NULL);
bool $tmp863 = $tmp862.value;
if ($tmp863) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp864 = (panda$core$Int64) {292};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s865, $tmp864, &$s866);
abort(); // unreachable
block19:;
panda$core$Object** $tmp867 = &$tmp861->first;
panda$core$Object* $tmp868 = *$tmp867;
panda$core$Int64 $tmp869 = (panda$core$Int64) {0};
ITable* $tmp870 = ((panda$collections$ListView*) $tmp868)->$class->itable;
while ($tmp870->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp870 = $tmp870->next;
}
$fn872 $tmp871 = $tmp870->methods[0];
panda$core$Object* $tmp873 = $tmp871(((panda$collections$ListView*) $tmp868), $tmp869);
org$pandalanguage$pandac$MethodDecl** $tmp874 = &((org$pandalanguage$pandac$MethodRef*) $tmp873)->value;
org$pandalanguage$pandac$MethodDecl* $tmp875 = *$tmp874;
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp875));
org$pandalanguage$pandac$MethodDecl* $tmp876 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp876));
*(&local3) = $tmp875;
panda$core$Panda$unref$panda$core$Object$Q($tmp873);
// unreffing REF($203:panda.collections.ListView.T)
// line 293
org$pandalanguage$pandac$MethodDecl* $tmp877 = *(&local3);
org$pandalanguage$pandac$Annotations** $tmp878 = &$tmp877->annotations;
org$pandalanguage$pandac$Annotations* $tmp879 = *$tmp878;
panda$core$Bit $tmp880 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp879);
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block21; else goto block22;
block21:;
// line 294
org$pandalanguage$pandac$MethodDecl* $tmp882 = *(&local3);
panda$collections$Array** $tmp883 = &$tmp882->parameters;
panda$collections$Array* $tmp884 = *$tmp883;
ITable* $tmp885 = ((panda$collections$CollectionView*) $tmp884)->$class->itable;
while ($tmp885->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp885 = $tmp885->next;
}
$fn887 $tmp886 = $tmp885->methods[0];
panda$core$Int64 $tmp888 = $tmp886(((panda$collections$CollectionView*) $tmp884));
panda$core$Int64 $tmp889 = (panda$core$Int64) {2};
panda$core$Bit $tmp890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp888, $tmp889);
bool $tmp891 = $tmp890.value;
if ($tmp891) goto block23; else goto block24;
block23:;
// line 295
org$pandalanguage$pandac$IR$Value* $tmp892 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp893 = (panda$core$Int64) {9};
org$pandalanguage$pandac$MethodDecl* $tmp894 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl($tmp892, $tmp893, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp894);
panda$collections$Array* $tmp895 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp896 = (panda$core$Int64) {2};
panda$collections$Array$init$panda$core$Int64($tmp895, $tmp896);
panda$collections$Array$add$panda$collections$Array$T($tmp895, ((panda$core$Object*) param2));
panda$collections$Array$add$panda$collections$Array$T($tmp895, ((panda$core$Object*) param4));
org$pandalanguage$pandac$IR$Value* $tmp897 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp892, ((panda$collections$ListView*) $tmp895), param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp897));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp897));
// unreffing REF($251:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
// unreffing REF($240:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
// unreffing REF($236:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$MethodDecl* $tmp898 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp898));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Pair* $tmp899 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp899));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp900 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp900));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp897;
block24:;
// line 298
org$pandalanguage$pandac$MethodDecl* $tmp901 = *(&local3);
panda$collections$Array** $tmp902 = &$tmp901->parameters;
panda$collections$Array* $tmp903 = *$tmp902;
ITable* $tmp904 = ((panda$collections$CollectionView*) $tmp903)->$class->itable;
while ($tmp904->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp904 = $tmp904->next;
}
$fn906 $tmp905 = $tmp904->methods[0];
panda$core$Int64 $tmp907 = $tmp905(((panda$collections$CollectionView*) $tmp903));
panda$core$Int64 $tmp908 = (panda$core$Int64) {1};
panda$core$Bit $tmp909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp907, $tmp908);
bool $tmp910 = $tmp909.value;
if ($tmp910) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp911 = (panda$core$Int64) {298};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s912, $tmp911);
abort(); // unreachable
block25:;
// line 299
org$pandalanguage$pandac$IR$Value* $tmp913 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp914 = (panda$core$Int64) {9};
org$pandalanguage$pandac$MethodDecl* $tmp915 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl($tmp913, $tmp914, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp915);
panda$collections$Array* $tmp916 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp917 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp916, $tmp917);
panda$collections$Array$add$panda$collections$Array$T($tmp916, ((panda$core$Object*) param4));
org$pandalanguage$pandac$IR$Value* $tmp918 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp913, ((panda$collections$ListView*) $tmp916), param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp918));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp918));
// unreffing REF($306:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
// unreffing REF($298:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp913));
// unreffing REF($294:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$MethodDecl* $tmp919 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp919));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Pair* $tmp920 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp920));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp921 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp921));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp918;
block22:;
// line 302
org$pandalanguage$pandac$MethodDecl* $tmp922 = *(&local3);
panda$core$Weak** $tmp923 = &$tmp922->owner;
panda$core$Weak* $tmp924 = *$tmp923;
panda$core$Object* $tmp925 = panda$core$Weak$get$R$panda$core$Weak$T($tmp924);
panda$core$String** $tmp926 = &((org$pandalanguage$pandac$ClassDecl*) $tmp925)->name;
panda$core$String* $tmp927 = *$tmp926;
panda$core$Bit $tmp928 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp927, &$s929);
bool $tmp930 = $tmp928.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp925);
// unreffing REF($339:panda.core.Weak.T)
if ($tmp930) goto block27; else goto block28;
block27:;
// line 303
org$pandalanguage$pandac$MethodDecl* $tmp931 = *(&local3);
panda$core$String** $tmp932 = &((org$pandalanguage$pandac$Symbol*) $tmp931)->name;
panda$core$String* $tmp933 = *$tmp932;
panda$core$Bit $tmp934 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp933, &$s935);
bool $tmp936 = $tmp934.value;
if ($tmp936) goto block29; else goto block30;
block29:;
// line 304
org$pandalanguage$pandac$IR$Value* $tmp937 = org$pandalanguage$pandac$expression$And$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param4, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp937));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp937));
// unreffing REF($358:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$MethodDecl* $tmp938 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp938));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Pair* $tmp939 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp939));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp940 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp937;
block30:;
// line 306
org$pandalanguage$pandac$MethodDecl* $tmp941 = *(&local3);
panda$core$String** $tmp942 = &((org$pandalanguage$pandac$Symbol*) $tmp941)->name;
panda$core$String* $tmp943 = *$tmp942;
panda$core$Bit $tmp944 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp943, &$s945);
bool $tmp946 = $tmp944.value;
if ($tmp946) goto block31; else goto block32;
block31:;
// line 307
org$pandalanguage$pandac$IR$Value* $tmp947 = org$pandalanguage$pandac$expression$Or$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param4, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
// unreffing REF($389:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$MethodDecl* $tmp948 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp948));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Pair* $tmp949 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp949));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp950 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp947;
block32:;
goto block28;
block28:;
// line 310
panda$collections$CollectionView* $tmp951 = org$pandalanguage$pandac$Compiler$possibleTypes$org$pandalanguage$pandac$ASTNode$R$panda$collections$CollectionView$LTorg$pandalanguage$pandac$Type$GT$Q(param0, param2);
panda$core$Bit $tmp952 = panda$core$Bit$init$builtin_bit($tmp951 != NULL);
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block33; else goto block34;
block34:;
panda$core$Int64 $tmp954 = (panda$core$Int64) {310};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s955, $tmp954, &$s956);
abort(); // unreachable
block33:;
org$pandalanguage$pandac$MethodDecl* $tmp957 = *(&local3);
panda$core$Weak** $tmp958 = &$tmp957->owner;
panda$core$Weak* $tmp959 = *$tmp958;
panda$core$Object* $tmp960 = panda$core$Weak$get$R$panda$core$Weak$T($tmp959);
org$pandalanguage$pandac$Type* $tmp961 = org$pandalanguage$pandac$Compiler$findType$panda$collections$CollectionView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param0, $tmp951, ((org$pandalanguage$pandac$ClassDecl*) $tmp960));
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp961));
org$pandalanguage$pandac$Type* $tmp962 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp962));
*(&local4) = $tmp961;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp961));
// unreffing REF($428:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp960);
// unreffing REF($426:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp951));
// unreffing REF($413:panda.collections.CollectionView<org.pandalanguage.pandac.Type>?)
// line 311
org$pandalanguage$pandac$Type* $tmp963 = *(&local4);
panda$core$Bit $tmp964 = panda$core$Bit$init$builtin_bit($tmp963 != NULL);
bool $tmp965 = $tmp964.value;
if ($tmp965) goto block35; else goto block36;
block36:;
panda$core$Int64 $tmp966 = (panda$core$Int64) {311};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s967, $tmp966);
abort(); // unreachable
block35:;
// line 312
org$pandalanguage$pandac$Compiler$TypeContext* $tmp968 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp969 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp970 = *(&local4);
panda$core$Bit $tmp971 = panda$core$Bit$init$builtin_bit($tmp970 != NULL);
bool $tmp972 = $tmp971.value;
if ($tmp972) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp973 = (panda$core$Int64) {312};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s974, $tmp973, &$s975);
abort(); // unreachable
block37:;
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp968, $tmp969, $tmp970);
org$pandalanguage$pandac$IR$Value* $tmp976 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp968);
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp976));
org$pandalanguage$pandac$IR$Value* $tmp977 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp977));
*(&local5) = $tmp976;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp976));
// unreffing REF($467:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp968));
// unreffing REF($455:org.pandalanguage.pandac.Compiler.TypeContext)
// line 313
org$pandalanguage$pandac$IR$Value* $tmp978 = *(&local5);
panda$core$Bit $tmp979 = panda$core$Bit$init$builtin_bit($tmp978 == NULL);
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block39; else goto block40;
block39:;
// line 314
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp981 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
// unreffing target
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp982 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp982));
// unreffing found
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp983 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Pair* $tmp984 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp985 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block40:;
// line 316
org$pandalanguage$pandac$IR$Value* $tmp986 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp987 = (panda$core$Int64) {9};
org$pandalanguage$pandac$IR$Value* $tmp988 = *(&local5);
org$pandalanguage$pandac$MethodDecl* $tmp989 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl($tmp986, $tmp987, $tmp988, $tmp989);
panda$collections$Array* $tmp990 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp991 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp990, $tmp991);
panda$collections$Array$add$panda$collections$Array$T($tmp990, ((panda$core$Object*) param4));
org$pandalanguage$pandac$IR$Value* $tmp992 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp986, ((panda$collections$ListView*) $tmp990), param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
// unreffing REF($530:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
// unreffing REF($522:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
// unreffing REF($517:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$IR$Value* $tmp993 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
// unreffing target
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp994 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
// unreffing found
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp995 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Pair* $tmp996 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp996));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp997 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp992;
block12:;
// line 319
org$pandalanguage$pandac$Compiler$TypeContext* $tmp998 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp999 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp998, $tmp999);
org$pandalanguage$pandac$IR$Value* $tmp1000 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp998);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
org$pandalanguage$pandac$IR$Value* $tmp1001 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
*(&local6) = $tmp1000;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
// unreffing REF($572:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
// unreffing REF($569:org.pandalanguage.pandac.Compiler.TypeContext)
// line 320
org$pandalanguage$pandac$IR$Value* $tmp1002 = *(&local6);
panda$core$Bit $tmp1003 = panda$core$Bit$init$builtin_bit($tmp1002 == NULL);
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block41; else goto block42;
block41:;
// line 321
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp1005 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1005));
// unreffing compiledLeft
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp1006 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1006));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1007 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block42:;
// line 323
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1008 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1009 = (panda$core$Int64) {3};
org$pandalanguage$pandac$IR$Value* $tmp1010 = *(&local6);
panda$core$Bit $tmp1011 = panda$core$Bit$init$builtin_bit($tmp1010 != NULL);
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block43; else goto block44;
block44:;
panda$core$Int64 $tmp1013 = (panda$core$Int64) {324};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1014, $tmp1013, &$s1015);
abort(); // unreachable
block43:;
$fn1017 $tmp1016 = ($fn1017) $tmp1010->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1018 = $tmp1016($tmp1010);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1008, $tmp1009, $tmp1018);
org$pandalanguage$pandac$IR$Value* $tmp1019 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param4, $tmp1008);
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
org$pandalanguage$pandac$IR$Value* $tmp1020 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
*(&local7) = $tmp1019;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
// unreffing REF($626:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
// unreffing REF($624:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1008));
// unreffing REF($612:org.pandalanguage.pandac.Compiler.TypeContext)
// line 325
org$pandalanguage$pandac$IR$Value* $tmp1021 = *(&local7);
panda$core$Bit $tmp1022 = panda$core$Bit$init$builtin_bit($tmp1021 == NULL);
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block45; else goto block46;
block45:;
// line 326
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp1024 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
// unreffing compiledRight
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1025 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
// unreffing compiledLeft
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp1026 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1027 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block46:;
// line 328
org$pandalanguage$pandac$IR$Value* $tmp1028 = *(&local6);
panda$core$Bit $tmp1029 = panda$core$Bit$init$builtin_bit($tmp1028 != NULL);
bool $tmp1030 = $tmp1029.value;
if ($tmp1030) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp1031 = (panda$core$Int64) {328};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1032, $tmp1031, &$s1033);
abort(); // unreachable
block49:;
$fn1035 $tmp1034 = ($fn1035) $tmp1028->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1036 = $tmp1034($tmp1028);
org$pandalanguage$pandac$Type* $tmp1037 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1038 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1036, $tmp1037);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block51; else goto block52;
block51:;
*(&local8) = $tmp1038;
goto block53;
block52:;
org$pandalanguage$pandac$IR$Value* $tmp1040 = *(&local6);
panda$core$Bit $tmp1041 = panda$core$Bit$init$builtin_bit($tmp1040 != NULL);
bool $tmp1042 = $tmp1041.value;
if ($tmp1042) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp1043 = (panda$core$Int64) {329};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1044, $tmp1043, &$s1045);
abort(); // unreachable
block54:;
$fn1047 $tmp1046 = ($fn1047) $tmp1040->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1048 = $tmp1046($tmp1040);
panda$core$Bit $tmp1049 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit($tmp1048);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
// unreffing REF($701:org.pandalanguage.pandac.Type)
*(&local8) = $tmp1049;
goto block53;
block53:;
panda$core$Bit $tmp1050 = *(&local8);
bool $tmp1051 = $tmp1050.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1037));
// unreffing REF($685:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1036));
// unreffing REF($684:org.pandalanguage.pandac.Type)
if ($tmp1051) goto block47; else goto block48;
block47:;
// line 330
org$pandalanguage$pandac$ASTNode* $tmp1052 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1053 = (panda$core$Int64) {5};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1052, $tmp1053, param1, param2, param3, param4);
org$pandalanguage$pandac$Type* $tmp1054 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, $tmp1052);
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1054));
org$pandalanguage$pandac$Type* $tmp1055 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
*(&local9) = $tmp1054;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1054));
// unreffing REF($721:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
// unreffing REF($718:org.pandalanguage.pandac.ASTNode)
// line 332
org$pandalanguage$pandac$Type* $tmp1056 = *(&local9);
panda$core$Bit $tmp1057 = panda$core$Bit$init$builtin_bit($tmp1056 != NULL);
bool $tmp1058 = $tmp1057.value;
if ($tmp1058) goto block56; else goto block57;
block56:;
// line 333
org$pandalanguage$pandac$IR** $tmp1059 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp1060 = *$tmp1059;
org$pandalanguage$pandac$IR$Statement* $tmp1061 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1062 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Value* $tmp1063 = *(&local6);
panda$core$Bit $tmp1064 = panda$core$Bit$init$builtin_bit($tmp1063 != NULL);
bool $tmp1065 = $tmp1064.value;
if ($tmp1065) goto block58; else goto block59;
block59:;
panda$core$Int64 $tmp1066 = (panda$core$Int64) {333};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1067, $tmp1066, &$s1068);
abort(); // unreachable
block58:;
org$pandalanguage$pandac$IR$Value* $tmp1069 = *(&local7);
panda$core$Bit $tmp1070 = panda$core$Bit$init$builtin_bit($tmp1069 != NULL);
bool $tmp1071 = $tmp1070.value;
if ($tmp1071) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp1072 = (panda$core$Int64) {334};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1073, $tmp1072, &$s1074);
abort(); // unreachable
block60:;
org$pandalanguage$pandac$Type* $tmp1075 = *(&local9);
panda$core$Bit $tmp1076 = panda$core$Bit$init$builtin_bit($tmp1075 != NULL);
bool $tmp1077 = $tmp1076.value;
if ($tmp1077) goto block62; else goto block63;
block63:;
panda$core$Int64 $tmp1078 = (panda$core$Int64) {334};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1079, $tmp1078, &$s1080);
abort(); // unreachable
block62:;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type($tmp1061, $tmp1062, param1, $tmp1063, param3, $tmp1069, $tmp1075);
$fn1082 $tmp1081 = ($fn1082) $tmp1060->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1083 = $tmp1081($tmp1060, $tmp1061);
*(&local10) = $tmp1083;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1061));
// unreffing REF($744:org.pandalanguage.pandac.IR.Statement)
// line 335
org$pandalanguage$pandac$IR$Value* $tmp1084 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1085 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp1086 = *(&local10);
org$pandalanguage$pandac$Type* $tmp1087 = *(&local9);
panda$core$Bit $tmp1088 = panda$core$Bit$init$builtin_bit($tmp1087 != NULL);
bool $tmp1089 = $tmp1088.value;
if ($tmp1089) goto block64; else goto block65;
block65:;
panda$core$Int64 $tmp1090 = (panda$core$Int64) {335};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1091, $tmp1090, &$s1092);
abort(); // unreachable
block64:;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1084, $tmp1085, $tmp1086, $tmp1087);
org$pandalanguage$pandac$IR$Value* $tmp1093 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1084, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1093));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1093));
// unreffing REF($795:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1084));
// unreffing REF($781:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$Type* $tmp1094 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1094));
// unreffing resultType
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1095 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1095));
// unreffing compiledRight
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1096 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1096));
// unreffing compiledLeft
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp1097 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1097));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1098 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1098));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1093;
block57:;
org$pandalanguage$pandac$Type* $tmp1099 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
// unreffing resultType
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
goto block48;
block48:;
// line 338
panda$core$String* $tmp1100 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(param3);
panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1102, $tmp1100);
panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1101, &$s1104);
org$pandalanguage$pandac$IR$Value* $tmp1105 = *(&local6);
panda$core$Bit $tmp1106 = panda$core$Bit$init$builtin_bit($tmp1105 != NULL);
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block66; else goto block67;
block67:;
panda$core$Int64 $tmp1108 = (panda$core$Int64) {339};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1109, $tmp1108, &$s1110);
abort(); // unreachable
block66:;
$fn1112 $tmp1111 = ($fn1112) $tmp1105->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1113 = $tmp1111($tmp1105);
panda$core$String* $tmp1114 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1115, ((panda$core$Object*) $tmp1113));
panda$core$String* $tmp1116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1114, &$s1117);
org$pandalanguage$pandac$IR$Value* $tmp1118 = *(&local7);
panda$core$Bit $tmp1119 = panda$core$Bit$init$builtin_bit($tmp1118 != NULL);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block68; else goto block69;
block69:;
panda$core$Int64 $tmp1121 = (panda$core$Int64) {339};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1122, $tmp1121, &$s1123);
abort(); // unreachable
block68:;
$fn1125 $tmp1124 = ($fn1125) $tmp1118->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1126 = $tmp1124($tmp1118);
panda$core$String* $tmp1127 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1116, ((panda$core$Object*) $tmp1126));
panda$core$String* $tmp1128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1127, &$s1129);
panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1103, $tmp1128);
$fn1132 $tmp1131 = ($fn1132) param5->$class->vtable[2];
panda$core$String* $tmp1133 = $tmp1131(param5);
panda$core$String* $tmp1134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1130, $tmp1133);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp1134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
// unreffing REF($871:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
// unreffing REF($870:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
// unreffing REF($868:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1128));
// unreffing REF($867:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1127));
// unreffing REF($866:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1126));
// unreffing REF($864:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1116));
// unreffing REF($853:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
// unreffing REF($852:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
// unreffing REF($850:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1103));
// unreffing REF($839:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1101));
// unreffing REF($838:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
// unreffing REF($837:panda.core.String)
// line 341
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp1135 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
// unreffing compiledRight
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1136 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
// unreffing compiledLeft
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp1137 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1137));
// unreffing matches
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1138 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1138));
// unreffing folded
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block5:;
panda$core$Bit $tmp1139 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1140 = $tmp1139.value;
if ($tmp1140) goto block70; else goto block71;
block71:;
panda$core$Int64 $tmp1141 = (panda$core$Int64) {271};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1142, $tmp1141, &$s1143);
abort(); // unreachable
block70:;
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

