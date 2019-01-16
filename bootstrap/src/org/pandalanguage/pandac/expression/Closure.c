#include "org/pandalanguage/pandac/expression/Closure.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/Stack.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Bit.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Compiler/Capture.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/io/File.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/MapView.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/Compiler/AutoScope.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/Scanner.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "panda/collections/HashSet.h"
#include "panda/core/MutableString.h"
#include "panda/threads/MessageQueue.h"
#include "panda/collections/IdentityMap.h"
#include "panda/core/Immutable.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/core/Equatable.h"
#include "panda/collections/Map.h"
#include "org/pandalanguage/pandac/expression/Call.h"


static panda$core$String $s1;
org$pandalanguage$pandac$expression$Closure$class_type org$pandalanguage$pandac$expression$Closure$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$expression$Closure$cleanup} };

typedef panda$collections$Iterator* (*$fn79)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn83)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn88)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn124)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn170)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn174)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn179)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn330)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn334)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn339)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn432)(panda$core$Object*);
typedef panda$core$Int64 (*$fn473)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn496)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn718)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn741)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn851)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn873)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn877)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn882)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn946)(panda$collections$Iterable*);
typedef panda$core$Object* (*$fn950)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn976)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn980)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn985)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1065)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1126)(panda$collections$MapView*);
typedef panda$collections$Iterator* (*$fn1140)(panda$collections$MapView*);
typedef panda$collections$Array* (*$fn1144)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1155)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn1159)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1164)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65", 43, 1453802055471277369, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6e\x6f\x6e\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x20\x6f\x77\x6e\x65\x72\x20\x66\x6f\x72\x20", 27, -299203061613670049, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65\x2e\x63\x61\x70\x74\x75\x72\x65\x64\x53\x65\x6c\x66\x54\x79\x70\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 168, 2670359335133534881, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65", 9, 1602056911729632975, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 146, 3347040154052538814, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, -8865909723025372911, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 4248843021992149759, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 127, 1809455410068643383, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, -6960542561056411676, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 152, -7825832975451095283, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, 7783089566661782278, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a", 2, 14198, NULL };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 8939304453205542054, NULL };
static panda$core$String $s908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, 1410335929809, NULL };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x20", 5, 22706926183, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x27", 121, 8918528546707942888, NULL };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -43704296328153041, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 3323213258965972710, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static panda$core$String $s1243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static panda$core$String $s1315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };

org$pandalanguage$pandac$Type* org$pandalanguage$pandac$expression$Closure$capturedSelfType$org$pandalanguage$pandac$Compiler$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* param0) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 26
panda$collections$Stack** $tmp2 = &param0->currentClass;
panda$collections$Stack* $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Object* $tmp5 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp3, $tmp4);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp5)));
org$pandalanguage$pandac$ClassDecl* $tmp6 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) $tmp5);
panda$core$Panda$unref$panda$core$Object$Q($tmp5);
// unreffing REF($5:panda.collections.Stack.T)
// line 27
goto block1;
block1:;
// line 28
org$pandalanguage$pandac$ClassDecl* $tmp7 = *(&local0);
org$pandalanguage$pandac$Annotations** $tmp8 = &$tmp7->annotations;
org$pandalanguage$pandac$Annotations* $tmp9 = *$tmp8;
panda$core$Bit $tmp10 = org$pandalanguage$pandac$Annotations$get_isSynthetic$R$panda$core$Bit($tmp9);
panda$core$Bit $tmp11 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp10);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block3:;
// line 29
org$pandalanguage$pandac$ClassDecl* $tmp13 = *(&local0);
org$pandalanguage$pandac$Type** $tmp14 = &$tmp13->type;
org$pandalanguage$pandac$Type* $tmp15 = *$tmp14;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
org$pandalanguage$pandac$ClassDecl* $tmp16 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp15;
block4:;
// line 31
org$pandalanguage$pandac$ClassDecl* $tmp17 = *(&local0);
panda$core$Weak** $tmp18 = &$tmp17->owner;
panda$core$Weak* $tmp19 = *$tmp18;
panda$core$Object* $tmp20 = panda$core$Weak$get$R$panda$core$Weak$T($tmp19);
panda$core$Bit $tmp21 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$ClassDecl*) $tmp20) != NULL);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp23 = (panda$core$Int64) {31};
panda$collections$Stack** $tmp24 = &param0->currentClass;
panda$collections$Stack* $tmp25 = *$tmp24;
panda$core$Int64 $tmp26 = (panda$core$Int64) {0};
panda$core$Object* $tmp27 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp25, $tmp26);
panda$core$String** $tmp28 = &((org$pandalanguage$pandac$ClassDecl*) $tmp27)->name;
panda$core$String* $tmp29 = *$tmp28;
panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s31, $tmp29);
panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s33);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s34, $tmp23, $tmp32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing REF($60:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($59:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp27);
// unreffing REF($55:panda.collections.Stack.T)
abort(); // unreachable
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp20);
// unreffing REF($44:panda.core.Weak.T)
// line 32
org$pandalanguage$pandac$ClassDecl* $tmp35 = *(&local0);
panda$core$Weak** $tmp36 = &$tmp35->owner;
panda$core$Weak* $tmp37 = *$tmp36;
panda$core$Object* $tmp38 = panda$core$Weak$get$R$panda$core$Weak$T($tmp37);
panda$core$Bit $tmp39 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$ClassDecl*) $tmp38) != NULL);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp41 = (panda$core$Int64) {32};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s42, $tmp41, &$s43);
abort(); // unreachable
block7:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp38)));
org$pandalanguage$pandac$ClassDecl* $tmp44 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) $tmp38);
panda$core$Panda$unref$panda$core$Object$Q($tmp38);
// unreffing REF($80:panda.core.Weak.T)
goto block1;
block2:;
panda$core$Bit $tmp45 = panda$core$Bit$init$builtin_bit(false);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp47 = (panda$core$Int64) {25};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s48, $tmp47, &$s49);
abort(); // unreachable
block9:;
abort(); // unreachable

}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$expression$Closure$createClosureClass$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$MethodDecl$panda$collections$CollectionView$LTorg$pandalanguage$pandac$Compiler$Capture$GT$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$MethodDecl* param1, panda$collections$CollectionView* param2) {

org$pandalanguage$pandac$Position local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$Compiler$Capture* local2 = NULL;
org$pandalanguage$pandac$Variable* local3 = NULL;
org$pandalanguage$pandac$ClassDecl* local4 = NULL;
panda$collections$Array* local5 = NULL;
panda$collections$Array* local6 = NULL;
org$pandalanguage$pandac$Compiler$Capture* local7 = NULL;
org$pandalanguage$pandac$Variable* local8 = NULL;
org$pandalanguage$pandac$FieldDecl* local9 = NULL;
org$pandalanguage$pandac$MethodDecl* local10 = NULL;
org$pandalanguage$pandac$MethodDecl* local11 = NULL;
org$pandalanguage$pandac$Compiler$Capture* local12 = NULL;
org$pandalanguage$pandac$Variable* local13 = NULL;
org$pandalanguage$pandac$FieldDecl* local14 = NULL;
org$pandalanguage$pandac$FieldDecl* local15 = NULL;
org$pandalanguage$pandac$FieldDecl* local16 = NULL;
org$pandalanguage$pandac$FieldDecl* local17 = NULL;
// line 39
org$pandalanguage$pandac$Position* $tmp50 = &((org$pandalanguage$pandac$Symbol*) param1)->position;
org$pandalanguage$pandac$Position $tmp51 = *$tmp50;
*(&local0) = $tmp51;
// line 40
org$pandalanguage$pandac$Annotations* $tmp52 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp53 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp52, $tmp53);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
org$pandalanguage$pandac$Annotations** $tmp54 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp55 = *$tmp54;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
org$pandalanguage$pandac$Annotations** $tmp56 = &param1->annotations;
*$tmp56 = $tmp52;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing REF($6:org.pandalanguage.pandac.Annotations)
// line 41
panda$core$Int64* $tmp57 = &param0->closureCount;
panda$core$Int64 $tmp58 = *$tmp57;
panda$core$Int64 $tmp59 = (panda$core$Int64) {1};
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60 + $tmp61;
panda$core$Int64 $tmp63 = (panda$core$Int64) {$tmp62};
panda$core$Int64* $tmp64 = &param0->closureCount;
*$tmp64 = $tmp63;
// line 42
panda$collections$Array* $tmp65 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp65);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
panda$collections$Array* $tmp66 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
*(&local1) = $tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing REF($31:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 43
panda$collections$Stack** $tmp67 = &param0->currentClass;
panda$collections$Stack* $tmp68 = *$tmp67;
panda$core$Int64 $tmp69 = (panda$core$Int64) {0};
panda$core$Object* $tmp70 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp68, $tmp69);
org$pandalanguage$pandac$Type** $tmp71 = &((org$pandalanguage$pandac$ClassDecl*) $tmp70)->type;
org$pandalanguage$pandac$Type* $tmp72 = *$tmp71;
panda$core$Bit $tmp73 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp72);
bool $tmp74 = $tmp73.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp70);
// unreffing REF($49:panda.collections.Stack.T)
if ($tmp74) goto block1; else goto block2;
block1:;
// line 44
panda$collections$Array* $tmp75 = *(&local1);
org$pandalanguage$pandac$Type* $tmp76 = org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp75, ((panda$core$Object*) $tmp76));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing REF($62:org.pandalanguage.pandac.Type)
// line 45
ITable* $tmp77 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp77->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[0];
panda$collections$Iterator* $tmp80 = $tmp78(((panda$collections$Iterable*) param2));
goto block3;
block3:;
ITable* $tmp81 = $tmp80->$class->itable;
while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[0];
panda$core$Bit $tmp84 = $tmp82($tmp80);
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block5; else goto block4;
block4:;
*(&local2) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
ITable* $tmp86 = $tmp80->$class->itable;
while ($tmp86->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[1];
panda$core$Object* $tmp89 = $tmp87($tmp80);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Capture*) $tmp89)));
org$pandalanguage$pandac$Compiler$Capture* $tmp90 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
*(&local2) = ((org$pandalanguage$pandac$Compiler$Capture*) $tmp89);
// line 46
org$pandalanguage$pandac$Compiler$Capture* $tmp91 = *(&local2);
panda$core$Int64* $tmp92 = &$tmp91->$rawValue;
panda$core$Int64 $tmp93 = *$tmp92;
panda$core$Int64 $tmp94 = (panda$core$Int64) {0};
panda$core$Bit $tmp95 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp93, $tmp94);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Variable** $tmp97 = (org$pandalanguage$pandac$Variable**) ($tmp91->$data + 0);
org$pandalanguage$pandac$Variable* $tmp98 = *$tmp97;
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
org$pandalanguage$pandac$Variable* $tmp99 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
*(&local3) = $tmp98;
// line 48
org$pandalanguage$pandac$Variable* $tmp100 = *(&local3);
org$pandalanguage$pandac$Type** $tmp101 = &$tmp100->type;
org$pandalanguage$pandac$Type* $tmp102 = *$tmp101;
panda$core$Bit $tmp103 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp102);
panda$core$Bit $tmp104 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block9; else goto block10;
block9:;
// line 49
panda$collections$Array* $tmp106 = *(&local1);
panda$collections$Array$clear($tmp106);
// line 50
org$pandalanguage$pandac$Variable* $tmp107 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing v
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp89);
// unreffing REF($83:panda.collections.Iterator.T)
org$pandalanguage$pandac$Compiler$Capture* $tmp108 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing c
*(&local2) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
goto block5;
block10:;
org$pandalanguage$pandac$Variable* $tmp109 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing v
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block6;
block8:;
panda$core$Int64 $tmp110 = (panda$core$Int64) {2};
panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp93, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block11; else goto block12;
block11:;
// line 54
org$pandalanguage$pandac$Type* $tmp113 = org$pandalanguage$pandac$expression$Closure$capturedSelfType$org$pandalanguage$pandac$Compiler$R$org$pandalanguage$pandac$Type(param0);
panda$core$Bit $tmp114 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp113);
panda$core$Bit $tmp115 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp114);
bool $tmp116 = $tmp115.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
// unreffing REF($146:org.pandalanguage.pandac.Type)
if ($tmp116) goto block13; else goto block14;
block13:;
// line 55
panda$collections$Array* $tmp117 = *(&local1);
panda$collections$Array$clear($tmp117);
// line 56
panda$core$Panda$unref$panda$core$Object$Q($tmp89);
// unreffing REF($83:panda.collections.Iterator.T)
org$pandalanguage$pandac$Compiler$Capture* $tmp118 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing c
*(&local2) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
goto block5;
block14:;
goto block6;
block12:;
// line 60
panda$core$Bit $tmp119 = panda$core$Bit$init$builtin_bit(false);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp121 = (panda$core$Int64) {60};
org$pandalanguage$pandac$Compiler$Capture* $tmp122 = *(&local2);
$fn124 $tmp123 = ($fn124) ((panda$core$Object*) $tmp122)->$class->vtable[0];
panda$core$String* $tmp125 = $tmp123(((panda$core$Object*) $tmp122));
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s126, $tmp121, $tmp125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing REF($177:panda.core.String)
abort(); // unreachable
block15:;
goto block6;
block6:;
panda$core$Panda$unref$panda$core$Object$Q($tmp89);
// unreffing REF($83:panda.collections.Iterator.T)
org$pandalanguage$pandac$Compiler$Capture* $tmp127 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing c
*(&local2) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing REF($72:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block2;
block2:;
// line 65
org$pandalanguage$pandac$ClassDecl* $tmp128 = (org$pandalanguage$pandac$ClassDecl*) frostObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
panda$collections$Stack** $tmp129 = &param0->currentClass;
panda$collections$Stack* $tmp130 = *$tmp129;
panda$core$Int64 $tmp131 = (panda$core$Int64) {0};
panda$core$Object* $tmp132 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp130, $tmp131);
panda$io$File** $tmp133 = &((org$pandalanguage$pandac$ClassDecl*) $tmp132)->source;
panda$io$File* $tmp134 = *$tmp133;
org$pandalanguage$pandac$Position $tmp135 = *(&local0);
panda$collections$HashMap* $tmp136 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp136);
org$pandalanguage$pandac$Annotations* $tmp137 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp138 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp137, $tmp138);
panda$core$Int64 $tmp139 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp140 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp139);
panda$collections$Stack** $tmp141 = &param0->currentClass;
panda$collections$Stack* $tmp142 = *$tmp141;
panda$core$Int64 $tmp143 = (panda$core$Int64) {0};
panda$core$Object* $tmp144 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp142, $tmp143);
panda$core$String** $tmp145 = &((org$pandalanguage$pandac$ClassDecl*) $tmp144)->name;
panda$core$String* $tmp146 = *$tmp145;
panda$core$String* $tmp147 = panda$core$String$convert$R$panda$core$String($tmp146);
panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp147, &$s149);
panda$core$Int64* $tmp150 = &param0->closureCount;
panda$core$Int64 $tmp151 = *$tmp150;
panda$core$Int64$wrapper* $tmp152;
$tmp152 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp152->value = $tmp151;
panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp148, ((panda$core$Object*) $tmp152));
panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp153, &$s155);
panda$collections$Array* $tmp156 = *(&local1);
panda$collections$Array* $tmp157 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp157);
org$pandalanguage$pandac$SymbolTable** $tmp158 = &param0->root;
org$pandalanguage$pandac$SymbolTable* $tmp159 = *$tmp158;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp128, $tmp134, $tmp135, ((panda$collections$MapView*) $tmp136), ((panda$core$String*) NULL), $tmp137, $tmp140, $tmp154, ((panda$collections$ListView*) $tmp156), $tmp157, $tmp159);
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
org$pandalanguage$pandac$ClassDecl* $tmp160 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
*(&local4) = $tmp128;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing REF($234:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
// unreffing REF($231:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing REF($230:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing REF($229:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
// unreffing REF($226:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// unreffing REF($225:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp144);
// unreffing REF($221:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing REF($212:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing REF($208:panda.collections.HashMap<panda.core.String, panda.core.String>)
panda$core$Panda$unref$panda$core$Object$Q($tmp132);
// unreffing REF($203:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($198:org.pandalanguage.pandac.ClassDecl)
// line 69
org$pandalanguage$pandac$ClassDecl* $tmp161 = *(&local4);
panda$core$Bit $tmp162 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp163 = &$tmp161->external;
*$tmp163 = $tmp162;
// line 72
panda$collections$Array* $tmp164 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp164);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
panda$collections$Array* $tmp165 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
*(&local5) = $tmp164;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
// unreffing REF($286:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 73
panda$collections$Array* $tmp166 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp166);
*(&local6) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
panda$collections$Array* $tmp167 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
*(&local6) = $tmp166;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
// unreffing REF($300:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
// line 74
ITable* $tmp168 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp168->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
panda$collections$Iterator* $tmp171 = $tmp169(((panda$collections$Iterable*) param2));
goto block17;
block17:;
ITable* $tmp172 = $tmp171->$class->itable;
while ($tmp172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp172 = $tmp172->next;
}
$fn174 $tmp173 = $tmp172->methods[0];
panda$core$Bit $tmp175 = $tmp173($tmp171);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block19; else goto block18;
block18:;
*(&local7) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
ITable* $tmp177 = $tmp171->$class->itable;
while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp177 = $tmp177->next;
}
$fn179 $tmp178 = $tmp177->methods[1];
panda$core$Object* $tmp180 = $tmp178($tmp171);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Capture*) $tmp180)));
org$pandalanguage$pandac$Compiler$Capture* $tmp181 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
*(&local7) = ((org$pandalanguage$pandac$Compiler$Capture*) $tmp180);
// line 75
org$pandalanguage$pandac$Compiler$Capture* $tmp182 = *(&local7);
panda$core$Int64* $tmp183 = &$tmp182->$rawValue;
panda$core$Int64 $tmp184 = *$tmp183;
panda$core$Int64 $tmp185 = (panda$core$Int64) {0};
panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp184, $tmp185);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block21; else goto block22;
block21:;
org$pandalanguage$pandac$Variable** $tmp188 = (org$pandalanguage$pandac$Variable**) ($tmp182->$data + 0);
org$pandalanguage$pandac$Variable* $tmp189 = *$tmp188;
*(&local8) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
org$pandalanguage$pandac$Variable* $tmp190 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
*(&local8) = $tmp189;
// line 77
panda$collections$Array* $tmp191 = *(&local6);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp192 = (org$pandalanguage$pandac$MethodDecl$Parameter*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
org$pandalanguage$pandac$Variable* $tmp193 = *(&local8);
panda$core$String** $tmp194 = &((org$pandalanguage$pandac$Symbol*) $tmp193)->name;
panda$core$String* $tmp195 = *$tmp194;
org$pandalanguage$pandac$Variable* $tmp196 = *(&local8);
org$pandalanguage$pandac$Type** $tmp197 = &$tmp196->type;
org$pandalanguage$pandac$Type* $tmp198 = *$tmp197;
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp192, $tmp195, $tmp198);
panda$collections$Array$add$panda$collections$Array$T($tmp191, ((panda$core$Object*) $tmp192));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
// unreffing REF($356:org.pandalanguage.pandac.MethodDecl.Parameter)
// line 79
panda$collections$Array* $tmp199 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp200 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp201 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Position $tmp202 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp203 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp204 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Position $tmp205 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp206 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp207 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp208 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp206, $tmp207, $tmp208, &$s209);
org$pandalanguage$pandac$Variable* $tmp210 = *(&local8);
panda$core$String** $tmp211 = &((org$pandalanguage$pandac$Symbol*) $tmp210)->name;
panda$core$String* $tmp212 = *$tmp211;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp203, $tmp204, $tmp205, $tmp206, $tmp212);
panda$core$Int64 $tmp213 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp214 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp213);
org$pandalanguage$pandac$ASTNode* $tmp215 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp216 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp217 = *(&local0);
org$pandalanguage$pandac$Variable* $tmp218 = *(&local8);
panda$core$String** $tmp219 = &((org$pandalanguage$pandac$Symbol*) $tmp218)->name;
panda$core$String* $tmp220 = *$tmp219;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp215, $tmp216, $tmp217, $tmp220);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp200, $tmp201, $tmp202, $tmp203, $tmp214, $tmp215);
panda$collections$Array$add$panda$collections$Array$T($tmp199, ((panda$core$Object*) $tmp200));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
// unreffing REF($390:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing REF($379:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing REF($376:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
// unreffing REF($373:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$Variable* $tmp221 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
// unreffing v
*(&local8) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block20;
block22:;
panda$core$Int64 $tmp222 = (panda$core$Int64) {1};
panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp184, $tmp222);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block23; else goto block24;
block23:;
org$pandalanguage$pandac$FieldDecl** $tmp225 = (org$pandalanguage$pandac$FieldDecl**) ($tmp182->$data + 0);
org$pandalanguage$pandac$FieldDecl* $tmp226 = *$tmp225;
*(&local9) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
org$pandalanguage$pandac$FieldDecl* $tmp227 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
*(&local9) = $tmp226;
// line 85
panda$collections$Array* $tmp228 = *(&local6);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp229 = (org$pandalanguage$pandac$MethodDecl$Parameter*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
org$pandalanguage$pandac$FieldDecl* $tmp230 = *(&local9);
panda$core$String** $tmp231 = &((org$pandalanguage$pandac$Symbol*) $tmp230)->name;
panda$core$String* $tmp232 = *$tmp231;
org$pandalanguage$pandac$FieldDecl* $tmp233 = *(&local9);
org$pandalanguage$pandac$Type** $tmp234 = &$tmp233->type;
org$pandalanguage$pandac$Type* $tmp235 = *$tmp234;
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp229, $tmp232, $tmp235);
panda$collections$Array$add$panda$collections$Array$T($tmp228, ((panda$core$Object*) $tmp229));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
// unreffing REF($435:org.pandalanguage.pandac.MethodDecl.Parameter)
// line 87
panda$collections$Array* $tmp236 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp237 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp238 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Position $tmp239 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp240 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp241 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Position $tmp242 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp243 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp244 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp245 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp243, $tmp244, $tmp245, &$s246);
org$pandalanguage$pandac$FieldDecl* $tmp247 = *(&local9);
panda$core$String** $tmp248 = &((org$pandalanguage$pandac$Symbol*) $tmp247)->name;
panda$core$String* $tmp249 = *$tmp248;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp240, $tmp241, $tmp242, $tmp243, $tmp249);
panda$core$Int64 $tmp250 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp251 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp250);
org$pandalanguage$pandac$ASTNode* $tmp252 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp253 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp254 = *(&local0);
org$pandalanguage$pandac$FieldDecl* $tmp255 = *(&local9);
panda$core$String** $tmp256 = &((org$pandalanguage$pandac$Symbol*) $tmp255)->name;
panda$core$String* $tmp257 = *$tmp256;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp252, $tmp253, $tmp254, $tmp257);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp237, $tmp238, $tmp239, $tmp240, $tmp251, $tmp252);
panda$collections$Array$add$panda$collections$Array$T($tmp236, ((panda$core$Object*) $tmp237));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
// unreffing REF($469:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing REF($458:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing REF($455:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing REF($452:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FieldDecl* $tmp258 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing f
*(&local9) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block20;
block24:;
panda$core$Int64 $tmp259 = (panda$core$Int64) {2};
panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp184, $tmp259);
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block25; else goto block20;
block25:;
// line 93
panda$collections$Array* $tmp262 = *(&local6);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp263 = (org$pandalanguage$pandac$MethodDecl$Parameter*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
org$pandalanguage$pandac$Type* $tmp264 = org$pandalanguage$pandac$expression$Closure$capturedSelfType$org$pandalanguage$pandac$Compiler$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp263, &$s265, $tmp264);
panda$collections$Array$add$panda$collections$Array$T($tmp262, ((panda$core$Object*) $tmp263));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing REF($506:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing REF($505:org.pandalanguage.pandac.MethodDecl.Parameter)
// line 96
panda$collections$Array* $tmp266 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp267 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp268 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Position $tmp269 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp270 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp271 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Position $tmp272 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp273 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp274 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp275 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp273, $tmp274, $tmp275, &$s276);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp270, $tmp271, $tmp272, $tmp273, &$s277);
panda$core$Int64 $tmp278 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp279 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp278);
org$pandalanguage$pandac$ASTNode* $tmp280 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp281 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp282 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp280, $tmp281, $tmp282, &$s283);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp267, $tmp268, $tmp269, $tmp270, $tmp279, $tmp280);
panda$collections$Array$add$panda$collections$Array$T($tmp266, ((panda$core$Object*) $tmp267));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
// unreffing REF($532:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
// unreffing REF($525:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($522:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing REF($519:org.pandalanguage.pandac.ASTNode)
goto block20;
block20:;
panda$core$Panda$unref$panda$core$Object$Q($tmp180);
// unreffing REF($328:panda.collections.Iterator.T)
org$pandalanguage$pandac$Compiler$Capture* $tmp284 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
// unreffing c
*(&local7) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
goto block17;
block19:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
// unreffing REF($317:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 104
org$pandalanguage$pandac$MethodDecl* $tmp285 = (org$pandalanguage$pandac$MethodDecl*) frostObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp286 = *(&local4);
org$pandalanguage$pandac$Position $tmp287 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp288 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp289 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp288, $tmp289);
panda$core$Int64 $tmp290 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp291 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp290);
panda$collections$Array* $tmp292 = *(&local6);
org$pandalanguage$pandac$Type* $tmp293 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$Array* $tmp294 = *(&local5);
org$pandalanguage$pandac$FixedArray* $tmp295 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp294);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp285, $tmp286, $tmp287, ((panda$core$String*) NULL), $tmp288, $tmp291, &$s296, ((panda$collections$Array*) NULL), $tmp292, $tmp293, $tmp295);
*(&local10) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
org$pandalanguage$pandac$MethodDecl* $tmp297 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
*(&local10) = $tmp285;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing REF($577:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
// unreffing REF($574:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
// unreffing REF($568:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
// unreffing REF($565:org.pandalanguage.pandac.MethodDecl)
// line 108
org$pandalanguage$pandac$ClassDecl* $tmp298 = *(&local4);
panda$collections$Array** $tmp299 = &$tmp298->methods;
panda$collections$Array* $tmp300 = *$tmp299;
org$pandalanguage$pandac$MethodDecl* $tmp301 = *(&local10);
panda$collections$Array$add$panda$collections$Array$T($tmp300, ((panda$core$Object*) $tmp301));
// line 109
org$pandalanguage$pandac$ClassDecl* $tmp302 = *(&local4);
org$pandalanguage$pandac$SymbolTable** $tmp303 = &$tmp302->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp304 = *$tmp303;
org$pandalanguage$pandac$MethodDecl* $tmp305 = *(&local10);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp304, ((org$pandalanguage$pandac$Symbol*) $tmp305));
// line 112
org$pandalanguage$pandac$MethodDecl* $tmp306 = (org$pandalanguage$pandac$MethodDecl*) frostObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp307 = *(&local4);
org$pandalanguage$pandac$Position $tmp308 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp309 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp310 = (panda$core$Int64) {32};
panda$core$Int64 $tmp311 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp312 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp310, $tmp311);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp309, $tmp312);
panda$core$Int64 $tmp313 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp314 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp313);
panda$collections$Array* $tmp315 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp315);
org$pandalanguage$pandac$Type* $tmp316 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FixedArray* $tmp317 = (org$pandalanguage$pandac$FixedArray*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp317);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp306, $tmp307, $tmp308, ((panda$core$String*) NULL), $tmp309, $tmp314, &$s318, ((panda$collections$Array*) NULL), $tmp315, $tmp316, $tmp317);
*(&local11) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
org$pandalanguage$pandac$MethodDecl* $tmp319 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
*(&local11) = $tmp306;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
// unreffing REF($630:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
// unreffing REF($629:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
// unreffing REF($626:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing REF($619:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
// unreffing REF($616:org.pandalanguage.pandac.MethodDecl)
// line 116
org$pandalanguage$pandac$ClassDecl* $tmp320 = *(&local4);
panda$collections$Array** $tmp321 = &$tmp320->methods;
panda$collections$Array* $tmp322 = *$tmp321;
org$pandalanguage$pandac$MethodDecl* $tmp323 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp322, ((panda$core$Object*) $tmp323));
// line 117
org$pandalanguage$pandac$ClassDecl* $tmp324 = *(&local4);
org$pandalanguage$pandac$SymbolTable** $tmp325 = &$tmp324->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp326 = *$tmp325;
org$pandalanguage$pandac$MethodDecl* $tmp327 = *(&local11);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp326, ((org$pandalanguage$pandac$Symbol*) $tmp327));
// line 120
ITable* $tmp328 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp328->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp328 = $tmp328->next;
}
$fn330 $tmp329 = $tmp328->methods[0];
panda$collections$Iterator* $tmp331 = $tmp329(((panda$collections$Iterable*) param2));
goto block26;
block26:;
ITable* $tmp332 = $tmp331->$class->itable;
while ($tmp332->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp332 = $tmp332->next;
}
$fn334 $tmp333 = $tmp332->methods[0];
panda$core$Bit $tmp335 = $tmp333($tmp331);
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block28; else goto block27;
block27:;
*(&local12) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
ITable* $tmp337 = $tmp331->$class->itable;
while ($tmp337->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp337 = $tmp337->next;
}
$fn339 $tmp338 = $tmp337->methods[1];
panda$core$Object* $tmp340 = $tmp338($tmp331);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Capture*) $tmp340)));
org$pandalanguage$pandac$Compiler$Capture* $tmp341 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
*(&local12) = ((org$pandalanguage$pandac$Compiler$Capture*) $tmp340);
// line 121
org$pandalanguage$pandac$Compiler$Capture* $tmp342 = *(&local12);
panda$core$Int64* $tmp343 = &$tmp342->$rawValue;
panda$core$Int64 $tmp344 = *$tmp343;
panda$core$Int64 $tmp345 = (panda$core$Int64) {0};
panda$core$Bit $tmp346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp344, $tmp345);
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Variable** $tmp348 = (org$pandalanguage$pandac$Variable**) ($tmp342->$data + 0);
org$pandalanguage$pandac$Variable* $tmp349 = *$tmp348;
*(&local13) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
org$pandalanguage$pandac$Variable* $tmp350 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
*(&local13) = $tmp349;
// line 123
org$pandalanguage$pandac$FieldDecl* $tmp351 = (org$pandalanguage$pandac$FieldDecl*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp352 = *(&local4);
org$pandalanguage$pandac$Position $tmp353 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp354 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp355 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp354, $tmp355);
panda$core$Int64 $tmp356 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp357 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp356);
org$pandalanguage$pandac$Variable* $tmp358 = *(&local13);
panda$core$String** $tmp359 = &((org$pandalanguage$pandac$Symbol*) $tmp358)->name;
panda$core$String* $tmp360 = *$tmp359;
org$pandalanguage$pandac$Variable* $tmp361 = *(&local13);
org$pandalanguage$pandac$Type** $tmp362 = &$tmp361->type;
org$pandalanguage$pandac$Type* $tmp363 = *$tmp362;
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp351, $tmp352, $tmp353, ((panda$core$String*) NULL), $tmp354, $tmp357, $tmp360, $tmp363, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
org$pandalanguage$pandac$FieldDecl* $tmp364 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
*(&local14) = $tmp351;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
// unreffing REF($716:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
// unreffing REF($713:org.pandalanguage.pandac.FieldDecl)
// line 126
org$pandalanguage$pandac$ClassDecl* $tmp365 = *(&local4);
org$pandalanguage$pandac$SymbolTable** $tmp366 = &$tmp365->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp367 = *$tmp366;
org$pandalanguage$pandac$FieldDecl* $tmp368 = *(&local14);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp367, ((org$pandalanguage$pandac$Symbol*) $tmp368));
// line 127
org$pandalanguage$pandac$ClassDecl* $tmp369 = *(&local4);
panda$collections$Array** $tmp370 = &$tmp369->fields;
panda$collections$Array* $tmp371 = *$tmp370;
org$pandalanguage$pandac$FieldDecl* $tmp372 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp371, ((panda$core$Object*) $tmp372));
org$pandalanguage$pandac$FieldDecl* $tmp373 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
// unreffing field
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$Variable* $tmp374 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
// unreffing v
*(&local13) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block29;
block31:;
panda$core$Int64 $tmp375 = (panda$core$Int64) {1};
panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp344, $tmp375);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$FieldDecl** $tmp378 = (org$pandalanguage$pandac$FieldDecl**) ($tmp342->$data + 0);
org$pandalanguage$pandac$FieldDecl* $tmp379 = *$tmp378;
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
org$pandalanguage$pandac$FieldDecl* $tmp380 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
*(&local15) = $tmp379;
// line 130
org$pandalanguage$pandac$FieldDecl* $tmp381 = (org$pandalanguage$pandac$FieldDecl*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp382 = *(&local4);
org$pandalanguage$pandac$Position $tmp383 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp384 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp385 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp384, $tmp385);
panda$core$Int64 $tmp386 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp387 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp386);
org$pandalanguage$pandac$FieldDecl* $tmp388 = *(&local15);
panda$core$String** $tmp389 = &((org$pandalanguage$pandac$Symbol*) $tmp388)->name;
panda$core$String* $tmp390 = *$tmp389;
org$pandalanguage$pandac$FieldDecl* $tmp391 = *(&local15);
org$pandalanguage$pandac$Type** $tmp392 = &$tmp391->type;
org$pandalanguage$pandac$Type* $tmp393 = *$tmp392;
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp381, $tmp382, $tmp383, ((panda$core$String*) NULL), $tmp384, $tmp387, $tmp390, $tmp393, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
org$pandalanguage$pandac$FieldDecl* $tmp394 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
*(&local16) = $tmp381;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
// unreffing REF($785:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
// unreffing REF($782:org.pandalanguage.pandac.FieldDecl)
// line 133
org$pandalanguage$pandac$ClassDecl* $tmp395 = *(&local4);
org$pandalanguage$pandac$SymbolTable** $tmp396 = &$tmp395->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp397 = *$tmp396;
org$pandalanguage$pandac$FieldDecl* $tmp398 = *(&local16);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp397, ((org$pandalanguage$pandac$Symbol*) $tmp398));
// line 134
org$pandalanguage$pandac$ClassDecl* $tmp399 = *(&local4);
panda$collections$Array** $tmp400 = &$tmp399->fields;
panda$collections$Array* $tmp401 = *$tmp400;
org$pandalanguage$pandac$FieldDecl* $tmp402 = *(&local16);
panda$collections$Array$add$panda$collections$Array$T($tmp401, ((panda$core$Object*) $tmp402));
org$pandalanguage$pandac$FieldDecl* $tmp403 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing field
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp404 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
// unreffing f
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block29;
block33:;
panda$core$Int64 $tmp405 = (panda$core$Int64) {2};
panda$core$Bit $tmp406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp344, $tmp405);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block34; else goto block35;
block34:;
// line 137
org$pandalanguage$pandac$FieldDecl* $tmp408 = (org$pandalanguage$pandac$FieldDecl*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp409 = *(&local4);
org$pandalanguage$pandac$Position $tmp410 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp411 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp412 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp411, $tmp412);
panda$core$Int64 $tmp413 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp414 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp413);
org$pandalanguage$pandac$Type* $tmp415 = org$pandalanguage$pandac$expression$Closure$capturedSelfType$org$pandalanguage$pandac$Compiler$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp408, $tmp409, $tmp410, ((panda$core$String*) NULL), $tmp411, $tmp414, &$s416, $tmp415, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local17) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
org$pandalanguage$pandac$FieldDecl* $tmp417 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
*(&local17) = $tmp408;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
// unreffing REF($850:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
// unreffing REF($845:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
// unreffing REF($842:org.pandalanguage.pandac.FieldDecl)
// line 140
org$pandalanguage$pandac$ClassDecl* $tmp418 = *(&local4);
org$pandalanguage$pandac$SymbolTable** $tmp419 = &$tmp418->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp420 = *$tmp419;
org$pandalanguage$pandac$FieldDecl* $tmp421 = *(&local17);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp420, ((org$pandalanguage$pandac$Symbol*) $tmp421));
// line 141
org$pandalanguage$pandac$ClassDecl* $tmp422 = *(&local4);
panda$collections$Array** $tmp423 = &$tmp422->fields;
panda$collections$Array* $tmp424 = *$tmp423;
org$pandalanguage$pandac$FieldDecl* $tmp425 = *(&local17);
panda$collections$Array$add$panda$collections$Array$T($tmp424, ((panda$core$Object*) $tmp425));
org$pandalanguage$pandac$FieldDecl* $tmp426 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
// unreffing field
*(&local17) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block29;
block35:;
// line 144
panda$core$Bit $tmp427 = panda$core$Bit$init$builtin_bit(false);
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp429 = (panda$core$Int64) {144};
org$pandalanguage$pandac$Compiler$Capture* $tmp430 = *(&local12);
$fn432 $tmp431 = ($fn432) ((panda$core$Object*) $tmp430)->$class->vtable[0];
panda$core$String* $tmp433 = $tmp431(((panda$core$Object*) $tmp430));
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s434, $tmp429, $tmp433);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
// unreffing REF($897:panda.core.String)
abort(); // unreachable
block36:;
goto block29;
block29:;
panda$core$Panda$unref$panda$core$Object$Q($tmp340);
// unreffing REF($687:panda.collections.Iterator.T)
org$pandalanguage$pandac$Compiler$Capture* $tmp435 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
// unreffing c
*(&local12) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
goto block26;
block28:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing REF($676:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 148
org$pandalanguage$pandac$ClassDecl* $tmp436 = *(&local4);
panda$core$Weak* $tmp437 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp437, ((panda$core$Object*) $tmp436));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
panda$core$Weak** $tmp438 = &param1->owner;
panda$core$Weak* $tmp439 = *$tmp438;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp439));
panda$core$Weak** $tmp440 = &param1->owner;
*$tmp440 = $tmp437;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
// unreffing REF($918:panda.core.Weak<org.pandalanguage.pandac.ClassDecl>)
// line 149
org$pandalanguage$pandac$ClassDecl* $tmp441 = *(&local4);
panda$collections$Array** $tmp442 = &$tmp441->methods;
panda$collections$Array* $tmp443 = *$tmp442;
panda$collections$Array$add$panda$collections$Array$T($tmp443, ((panda$core$Object*) param1));
// line 150
panda$collections$HashMap** $tmp444 = &param0->classes;
panda$collections$HashMap* $tmp445 = *$tmp444;
org$pandalanguage$pandac$ClassDecl* $tmp446 = *(&local4);
panda$core$String** $tmp447 = &$tmp446->name;
panda$core$String* $tmp448 = *$tmp447;
org$pandalanguage$pandac$ClassDecl* $tmp449 = *(&local4);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp445, ((panda$collections$Key*) $tmp448), ((panda$core$Object*) $tmp449));
// line 151
org$pandalanguage$pandac$ClassDecl* $tmp450 = *(&local4);
panda$collections$Stack** $tmp451 = &param0->currentClass;
panda$collections$Stack* $tmp452 = *$tmp451;
panda$core$Int64 $tmp453 = (panda$core$Int64) {0};
panda$core$Object* $tmp454 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp452, $tmp453);
panda$core$Weak* $tmp455 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp455, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp454)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
panda$core$Weak** $tmp456 = &$tmp450->owner;
panda$core$Weak* $tmp457 = *$tmp456;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
panda$core$Weak** $tmp458 = &$tmp450->owner;
*$tmp458 = $tmp455;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
// unreffing REF($960:panda.core.Weak<org.pandalanguage.pandac.ClassDecl?>)
panda$core$Panda$unref$panda$core$Object$Q($tmp454);
// unreffing REF($957:panda.collections.Stack.T)
// line 152
org$pandalanguage$pandac$ClassDecl* $tmp459 = *(&local4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
org$pandalanguage$pandac$MethodDecl* $tmp460 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
// unreffing defaultCleanup
*(&local11) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp461 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
// unreffing initMethod
*(&local10) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$collections$Array* $tmp462 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
// unreffing parameters
*(&local6) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp463 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
// unreffing statements
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp464 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
// unreffing result
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp465 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
// unreffing supers
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp459;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$expression$Closure$typedLambdaType$org$pandalanguage$pandac$Compiler$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* param0, panda$collections$ListView* param1, org$pandalanguage$pandac$ASTNode* param2, org$pandalanguage$pandac$Compiler$TypeContext* param3) {

org$pandalanguage$pandac$Compiler$AutoScope* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$core$Int64 local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$Position local4;
panda$core$String* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
org$pandalanguage$pandac$Type* local7 = NULL;
org$pandalanguage$pandac$Type* local8 = NULL;
org$pandalanguage$pandac$Type* local9 = NULL;
org$pandalanguage$pandac$Type* local10 = NULL;
panda$collections$HashMap* local11 = NULL;
org$pandalanguage$pandac$Pair* local12 = NULL;
// line 158
org$pandalanguage$pandac$Compiler$AutoScope* $tmp466 = (org$pandalanguage$pandac$Compiler$AutoScope*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp466, param0);
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp467 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
*(&local0) = $tmp466;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
// unreffing REF($1:org.pandalanguage.pandac.Compiler.AutoScope)
// line 159
panda$collections$Array* $tmp468 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp468);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
panda$collections$Array* $tmp469 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
*(&local1) = $tmp468;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
// unreffing REF($14:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 160
panda$core$Int64 $tmp470 = (panda$core$Int64) {0};
ITable* $tmp471 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp471->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp471 = $tmp471->next;
}
$fn473 $tmp472 = $tmp471->methods[0];
panda$core$Int64 $tmp474 = $tmp472(((panda$collections$CollectionView*) param1));
panda$core$Bit $tmp475 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp476 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp470, $tmp474, $tmp475);
panda$core$Int64 $tmp477 = $tmp476.min;
*(&local2) = $tmp477;
panda$core$Int64 $tmp478 = $tmp476.max;
panda$core$Bit $tmp479 = $tmp476.inclusive;
bool $tmp480 = $tmp479.value;
panda$core$Int64 $tmp481 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp482 = panda$core$Int64$convert$R$panda$core$UInt64($tmp481);
if ($tmp480) goto block4; else goto block5;
block4:;
int64_t $tmp483 = $tmp477.value;
int64_t $tmp484 = $tmp478.value;
bool $tmp485 = $tmp483 <= $tmp484;
panda$core$Bit $tmp486 = (panda$core$Bit) {$tmp485};
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block1; else goto block2;
block5:;
int64_t $tmp488 = $tmp477.value;
int64_t $tmp489 = $tmp478.value;
bool $tmp490 = $tmp488 < $tmp489;
panda$core$Bit $tmp491 = (panda$core$Bit) {$tmp490};
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block1; else goto block2;
block1:;
// line 161
panda$core$Int64 $tmp493 = *(&local2);
ITable* $tmp494 = param1->$class->itable;
while ($tmp494->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp494 = $tmp494->next;
}
$fn496 $tmp495 = $tmp494->methods[0];
panda$core$Object* $tmp497 = $tmp495(param1, $tmp493);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp497)));
org$pandalanguage$pandac$ASTNode* $tmp498 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) $tmp497);
panda$core$Panda$unref$panda$core$Object$Q($tmp497);
// unreffing REF($58:panda.collections.ListView.T)
// line 162
org$pandalanguage$pandac$ASTNode* $tmp499 = *(&local3);
panda$core$Int64* $tmp500 = &$tmp499->$rawValue;
panda$core$Int64 $tmp501 = *$tmp500;
panda$core$Int64 $tmp502 = (panda$core$Int64) {34};
panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp501, $tmp502);
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block7; else goto block6;
block7:;
org$pandalanguage$pandac$Position* $tmp505 = (org$pandalanguage$pandac$Position*) ($tmp499->$data + 0);
org$pandalanguage$pandac$Position $tmp506 = *$tmp505;
*(&local4) = $tmp506;
panda$core$String** $tmp507 = (panda$core$String**) ($tmp499->$data + 16);
panda$core$String* $tmp508 = *$tmp507;
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
panda$core$String* $tmp509 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
*(&local5) = $tmp508;
org$pandalanguage$pandac$ASTNode** $tmp510 = (org$pandalanguage$pandac$ASTNode**) ($tmp499->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp511 = *$tmp510;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
org$pandalanguage$pandac$ASTNode* $tmp512 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
*(&local6) = $tmp511;
// line 164
org$pandalanguage$pandac$Scanner** $tmp513 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp514 = *$tmp513;
org$pandalanguage$pandac$ASTNode* $tmp515 = *(&local6);
org$pandalanguage$pandac$Type* $tmp516 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp514, $tmp515);
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
org$pandalanguage$pandac$Type* $tmp517 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
*(&local7) = $tmp516;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
// unreffing REF($103:org.pandalanguage.pandac.Type)
// line 165
org$pandalanguage$pandac$Type* $tmp518 = *(&local7);
panda$core$Bit $tmp519 = panda$core$Bit$init$builtin_bit(false);
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block8; else goto block9;
block8:;
// line 166
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) NULL)));
org$pandalanguage$pandac$Type* $tmp521 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
// unreffing type
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp522 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
// unreffing rawType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp523 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp524 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
// unreffing p
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp525 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp525));
// unreffing parameterTypes
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp526 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
// unreffing scope
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
return ((org$pandalanguage$pandac$Type*) NULL);
block9:;
// line 168
org$pandalanguage$pandac$Type* $tmp527 = *(&local7);
org$pandalanguage$pandac$Type* $tmp528 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, $tmp527);
panda$core$Bit $tmp529 = panda$core$Bit$init$builtin_bit($tmp528 != NULL);
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp531 = (panda$core$Int64) {168};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s532, $tmp531, &$s533);
abort(); // unreachable
block10:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
org$pandalanguage$pandac$Type* $tmp534 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
*(&local7) = $tmp528;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
// unreffing REF($155:org.pandalanguage.pandac.Type?)
// line 169
org$pandalanguage$pandac$Type* $tmp535 = *(&local7);
panda$core$Bit $tmp536 = panda$core$Bit$init$builtin_bit(false);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block12; else goto block13;
block12:;
// line 170
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) NULL)));
org$pandalanguage$pandac$Type* $tmp538 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
// unreffing type
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp539 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
// unreffing rawType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp540 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp541 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing p
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp542 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// unreffing parameterTypes
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp543 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
// unreffing scope
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
return ((org$pandalanguage$pandac$Type*) NULL);
block13:;
// line 172
panda$collections$Array* $tmp544 = *(&local1);
org$pandalanguage$pandac$Type* $tmp545 = *(&local7);
panda$collections$Array$add$panda$collections$Array$T($tmp544, ((panda$core$Object*) $tmp545));
// line 173
org$pandalanguage$pandac$SymbolTable** $tmp546 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp547 = *$tmp546;
org$pandalanguage$pandac$Variable* $tmp548 = (org$pandalanguage$pandac$Variable*) frostObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Variable$class);
org$pandalanguage$pandac$Position $tmp549 = *(&local4);
panda$core$Int64 $tmp550 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp551 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp550);
panda$core$String* $tmp552 = *(&local5);
org$pandalanguage$pandac$Type* $tmp553 = *(&local7);
org$pandalanguage$pandac$Variable$Storage* $tmp554 = (org$pandalanguage$pandac$Variable$Storage*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Variable$Storage$class);
panda$core$Int64 $tmp555 = (panda$core$Int64) {1};
panda$core$Int64 $tmp556 = (panda$core$Int64) {18446744073709551615};
org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64$panda$core$Int64($tmp554, $tmp555, $tmp556);
org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage($tmp548, $tmp549, $tmp551, $tmp552, $tmp553, $tmp554);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp547, ((org$pandalanguage$pandac$Symbol*) $tmp548));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp554));
// unreffing REF($227:org.pandalanguage.pandac.Variable.Storage)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
// unreffing REF($221:org.pandalanguage.pandac.Variable)
org$pandalanguage$pandac$Type* $tmp557 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
// unreffing type
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp558 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp558));
// unreffing rawType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp559 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block6;
block6:;
org$pandalanguage$pandac$ASTNode* $tmp560 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
// unreffing p
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block3:;
panda$core$Int64 $tmp561 = *(&local2);
int64_t $tmp562 = $tmp478.value;
int64_t $tmp563 = $tmp561.value;
int64_t $tmp564 = $tmp562 - $tmp563;
panda$core$Int64 $tmp565 = (panda$core$Int64) {$tmp564};
panda$core$UInt64 $tmp566 = panda$core$Int64$convert$R$panda$core$UInt64($tmp565);
if ($tmp480) goto block15; else goto block16;
block15:;
uint64_t $tmp567 = $tmp566.value;
uint64_t $tmp568 = $tmp482.value;
bool $tmp569 = $tmp567 >= $tmp568;
panda$core$Bit $tmp570 = (panda$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block14; else goto block2;
block16:;
uint64_t $tmp572 = $tmp566.value;
uint64_t $tmp573 = $tmp482.value;
bool $tmp574 = $tmp572 > $tmp573;
panda$core$Bit $tmp575 = (panda$core$Bit) {$tmp574};
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block14; else goto block2;
block14:;
int64_t $tmp577 = $tmp561.value;
int64_t $tmp578 = $tmp481.value;
int64_t $tmp579 = $tmp577 + $tmp578;
panda$core$Int64 $tmp580 = (panda$core$Int64) {$tmp579};
*(&local2) = $tmp580;
goto block1;
block2:;
// line 178
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
// line 179
panda$core$Int64* $tmp581 = &param3->$rawValue;
panda$core$Int64 $tmp582 = *$tmp581;
panda$core$Int64 $tmp583 = (panda$core$Int64) {3};
panda$core$Bit $tmp584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp582, $tmp583);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Type** $tmp586 = (org$pandalanguage$pandac$Type**) (param3->$data + 0);
org$pandalanguage$pandac$Type* $tmp587 = *$tmp586;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp587));
org$pandalanguage$pandac$Type* $tmp588 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
*(&local9) = $tmp587;
// line 181
org$pandalanguage$pandac$Type* $tmp589 = *(&local9);
org$pandalanguage$pandac$Type* $tmp590 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp589);
panda$core$Bit $tmp591 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit($tmp590);
bool $tmp592 = $tmp591.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp590));
// unreffing REF($307:org.pandalanguage.pandac.Type)
if ($tmp592) goto block20; else goto block21;
block20:;
// line 182
org$pandalanguage$pandac$Type* $tmp593 = *(&local9);
org$pandalanguage$pandac$Type* $tmp594 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp593);
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
org$pandalanguage$pandac$Type* $tmp595 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
*(&local10) = $tmp594;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
// unreffing REF($316:org.pandalanguage.pandac.Type)
// line 186
panda$collections$HashMap** $tmp596 = &param0->binaryTypes;
panda$collections$HashMap* $tmp597 = *$tmp596;
*(&local11) = ((panda$collections$HashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
panda$collections$HashMap* $tmp598 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
*(&local11) = $tmp597;
// line 187
panda$collections$HashMap* $tmp599 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp599);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
panda$collections$HashMap** $tmp600 = &param0->binaryTypes;
panda$collections$HashMap* $tmp601 = *$tmp600;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
panda$collections$HashMap** $tmp602 = &param0->binaryTypes;
*$tmp602 = $tmp599;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
// unreffing REF($338:panda.collections.HashMap<org.pandalanguage.pandac.Compiler.BinaryKey, panda.collections.ListView<org.pandalanguage.pandac.Type>?>)
// line 188
org$pandalanguage$pandac$Type* $tmp603 = *(&local10);
org$pandalanguage$pandac$Pair* $tmp604 = org$pandalanguage$pandac$Compiler$computeCoercionCost$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Cpanda$core$Int64$GT$Q(param0, param2, $tmp603);
*(&local12) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
org$pandalanguage$pandac$Pair* $tmp605 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
*(&local12) = $tmp604;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
// unreffing REF($354:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, panda.core.Int64>?)
// line 189
panda$collections$HashMap* $tmp606 = *(&local11);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
panda$collections$HashMap** $tmp607 = &param0->binaryTypes;
panda$collections$HashMap* $tmp608 = *$tmp607;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
panda$collections$HashMap** $tmp609 = &param0->binaryTypes;
*$tmp609 = $tmp606;
// line 190
org$pandalanguage$pandac$Pair* $tmp610 = *(&local12);
panda$core$Bit $tmp611 = panda$core$Bit$init$builtin_bit($tmp610 == NULL);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block22; else goto block23;
block22:;
// line 191
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) NULL)));
org$pandalanguage$pandac$Pair* $tmp613 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
// unreffing cost
*(&local12) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$HashMap* $tmp614 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
// unreffing oldBinaryTypes
*(&local11) = ((panda$collections$HashMap*) NULL);
org$pandalanguage$pandac$Type* $tmp615 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
// unreffing target
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp616 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp617 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
// unreffing returnType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp618 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
// unreffing parameterTypes
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp619 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
// unreffing scope
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
return ((org$pandalanguage$pandac$Type*) NULL);
block23:;
// line 193
org$pandalanguage$pandac$Pair* $tmp620 = *(&local12);
panda$core$Bit $tmp621 = panda$core$Bit$init$builtin_bit($tmp620 != NULL);
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp623 = (panda$core$Int64) {193};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s624, $tmp623, &$s625);
abort(); // unreachable
block24:;
panda$core$Object** $tmp626 = &$tmp620->first;
panda$core$Object* $tmp627 = *$tmp626;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp627)));
org$pandalanguage$pandac$Type* $tmp628 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
*(&local8) = ((org$pandalanguage$pandac$Type*) $tmp627);
org$pandalanguage$pandac$Pair* $tmp629 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
// unreffing cost
*(&local12) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$HashMap* $tmp630 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp630));
// unreffing oldBinaryTypes
*(&local11) = ((panda$collections$HashMap*) NULL);
org$pandalanguage$pandac$Type* $tmp631 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
// unreffing target
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
goto block21;
block21:;
org$pandalanguage$pandac$Type* $tmp632 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
goto block17;
block19:;
// line 197
org$pandalanguage$pandac$Type* $tmp633 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp633));
org$pandalanguage$pandac$Type* $tmp634 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
*(&local8) = $tmp633;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp633));
// unreffing REF($463:org.pandalanguage.pandac.Type?)
goto block17;
block17:;
// line 200
org$pandalanguage$pandac$Type* $tmp635 = *(&local8);
panda$core$Bit $tmp636 = panda$core$Bit$init$builtin_bit($tmp635 == NULL);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block26; else goto block27;
block26:;
// line 201
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) NULL)));
org$pandalanguage$pandac$Type* $tmp638 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
// unreffing returnType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp639 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
// unreffing parameterTypes
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp640 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp640));
// unreffing scope
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
return ((org$pandalanguage$pandac$Type*) NULL);
block27:;
// line 203
org$pandalanguage$pandac$Position $tmp641 = org$pandalanguage$pandac$Position$init();
panda$core$Int64 $tmp642 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp643 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp642);
panda$collections$Array* $tmp644 = *(&local1);
org$pandalanguage$pandac$Type* $tmp645 = *(&local8);
panda$core$Bit $tmp646 = panda$core$Bit$init$builtin_bit($tmp645 != NULL);
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp648 = (panda$core$Int64) {203};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s649, $tmp648, &$s650);
abort(); // unreachable
block28:;
panda$core$Int64 $tmp651 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp652 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp641, $tmp643, ((panda$collections$ListView*) $tmp644), $tmp645, $tmp651);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
// unreffing REF($515:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$Type* $tmp653 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
// unreffing returnType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp654 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
// unreffing parameterTypes
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp655 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
// unreffing scope
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
return $tmp652;

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Closure$compileTypedLambda$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$FixedArray* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$Compiler$TypeContext* param4) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
// line 211
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
// line 212
org$pandalanguage$pandac$Type* $tmp656 = org$pandalanguage$pandac$expression$Closure$typedLambdaType$org$pandalanguage$pandac$Compiler$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Type$Q(param0, ((panda$collections$ListView*) param2), param3, param4);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
org$pandalanguage$pandac$Type* $tmp657 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
*(&local1) = $tmp656;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
// unreffing REF($4:org.pandalanguage.pandac.Type?)
// line 213
org$pandalanguage$pandac$Type* $tmp658 = *(&local1);
panda$core$Bit $tmp659 = panda$core$Bit$init$builtin_bit($tmp658 != NULL);
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block1; else goto block3;
block1:;
// line 214
org$pandalanguage$pandac$Type* $tmp661 = *(&local1);
panda$core$Bit $tmp662 = panda$core$Bit$init$builtin_bit($tmp661 != NULL);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp664 = (panda$core$Int64) {214};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s665, $tmp664, &$s666);
abort(); // unreachable
block4:;
org$pandalanguage$pandac$Type* $tmp667 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp661);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
org$pandalanguage$pandac$Type* $tmp668 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
*(&local0) = $tmp667;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
// unreffing REF($31:org.pandalanguage.pandac.Type)
goto block2;
block3:;
// line 1
// line 219
org$pandalanguage$pandac$Type* $tmp669 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
org$pandalanguage$pandac$Type* $tmp670 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
*(&local0) = $tmp669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing REF($44:org.pandalanguage.pandac.Type)
// line 220
panda$core$Int64* $tmp671 = &param4->$rawValue;
panda$core$Int64 $tmp672 = *$tmp671;
panda$core$Int64 $tmp673 = (panda$core$Int64) {3};
panda$core$Bit $tmp674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp672, $tmp673);
bool $tmp675 = $tmp674.value;
if ($tmp675) goto block7; else goto block6;
block7:;
org$pandalanguage$pandac$Type** $tmp676 = (org$pandalanguage$pandac$Type**) (param4->$data + 0);
org$pandalanguage$pandac$Type* $tmp677 = *$tmp676;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
org$pandalanguage$pandac$Type* $tmp678 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
*(&local2) = $tmp677;
// line 222
org$pandalanguage$pandac$Type* $tmp679 = *(&local2);
org$pandalanguage$pandac$Type* $tmp680 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp679);
panda$core$Bit $tmp681 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit($tmp680);
bool $tmp682 = $tmp681.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
// unreffing REF($72:org.pandalanguage.pandac.Type)
if ($tmp682) goto block8; else goto block9;
block8:;
// line 223
org$pandalanguage$pandac$Type* $tmp683 = *(&local2);
org$pandalanguage$pandac$Type* $tmp684 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp683);
org$pandalanguage$pandac$Type* $tmp685 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp684);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp685));
org$pandalanguage$pandac$Type* $tmp686 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
*(&local0) = $tmp685;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp685));
// unreffing REF($82:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
// unreffing REF($81:org.pandalanguage.pandac.Type)
goto block9;
block9:;
org$pandalanguage$pandac$Type* $tmp687 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp687));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block6;
block6:;
goto block2;
block2:;
// line 228
panda$core$Int64 $tmp688 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp689 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp688);
org$pandalanguage$pandac$ASTNode* $tmp690 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp691 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp692 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp693 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp694 = *(&local0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp692, $tmp693, $tmp694);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp690, $tmp691, param1, $tmp692);
panda$collections$Array* $tmp695 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp696 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp695, $tmp696);
org$pandalanguage$pandac$ASTNode* $tmp697 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp698 = (panda$core$Int64) {39};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp697, $tmp698, param1, param3);
panda$collections$Array$add$panda$collections$Array$T($tmp695, ((panda$core$Object*) $tmp697));
org$pandalanguage$pandac$IR$Value* $tmp699 = org$pandalanguage$pandac$expression$Closure$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp689, param2, $tmp690, ((org$pandalanguage$pandac$FixedArray*) $tmp695), param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
// unreffing REF($126:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
// unreffing REF($119:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
// unreffing REF($114:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
// unreffing REF($108:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
// unreffing REF($106:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$Type* $tmp700 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
// unreffing lambdaType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp701 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
// unreffing returnType
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp699;

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Closure$compileUntypedLambda$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$FixedArray* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$Compiler$TypeContext* param4) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$Int64 local3;
org$pandalanguage$pandac$Position local4;
panda$core$String* local5 = NULL;
org$pandalanguage$pandac$Type* local6 = NULL;
panda$collections$HashSet* local7 = NULL;
panda$core$MutableString* local8 = NULL;
panda$threads$MessageQueue* local9 = NULL;
org$pandalanguage$pandac$Type* local10 = NULL;
// line 237
panda$core$Int64* $tmp702 = &param4->$rawValue;
panda$core$Int64 $tmp703 = *$tmp702;
panda$core$Int64 $tmp704 = (panda$core$Int64) {3};
panda$core$Bit $tmp705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp703, $tmp704);
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block2; else goto block1;
block2:;
org$pandalanguage$pandac$Type** $tmp707 = (org$pandalanguage$pandac$Type**) (param4->$data + 0);
org$pandalanguage$pandac$Type* $tmp708 = *$tmp707;
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
org$pandalanguage$pandac$Type* $tmp709 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp709));
*(&local0) = $tmp708;
// line 239
org$pandalanguage$pandac$Type* $tmp710 = *(&local0);
org$pandalanguage$pandac$Type* $tmp711 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp710);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
org$pandalanguage$pandac$Type* $tmp712 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
*(&local1) = $tmp711;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
// unreffing REF($18:org.pandalanguage.pandac.Type)
// line 240
org$pandalanguage$pandac$Type* $tmp713 = *(&local1);
panda$core$Bit $tmp714 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit($tmp713);
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block3; else goto block4;
block3:;
// line 241
ITable* $tmp716 = ((panda$collections$CollectionView*) param2)->$class->itable;
while ($tmp716->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp716 = $tmp716->next;
}
$fn718 $tmp717 = $tmp716->methods[0];
panda$core$Int64 $tmp719 = $tmp717(((panda$collections$CollectionView*) param2));
org$pandalanguage$pandac$Type* $tmp720 = *(&local1);
panda$core$Int64 $tmp721 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp720);
int64_t $tmp722 = $tmp719.value;
int64_t $tmp723 = $tmp721.value;
bool $tmp724 = $tmp722 != $tmp723;
panda$core$Bit $tmp725 = (panda$core$Bit) {$tmp724};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block5; else goto block6;
block5:;
// line 242
org$pandalanguage$pandac$Type* $tmp727 = *(&local0);
panda$core$String* $tmp728 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s729, ((panda$core$Object*) $tmp727));
panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp728, &$s731);
panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp730, &$s733);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp732);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp732));
// unreffing REF($51:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp730));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
// unreffing REF($49:panda.core.String)
// line 244
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp734 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
// unreffing methodType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp735 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block6:;
// line 246
panda$collections$Array* $tmp736 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp736);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp736));
panda$collections$Array* $tmp737 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
*(&local2) = $tmp736;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp736));
// unreffing REF($77:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 247
panda$core$Int64 $tmp738 = (panda$core$Int64) {0};
ITable* $tmp739 = ((panda$collections$CollectionView*) param2)->$class->itable;
while ($tmp739->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp739 = $tmp739->next;
}
$fn741 $tmp740 = $tmp739->methods[0];
panda$core$Int64 $tmp742 = $tmp740(((panda$collections$CollectionView*) param2));
panda$core$Bit $tmp743 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp744 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp738, $tmp742, $tmp743);
panda$core$Int64 $tmp745 = $tmp744.min;
*(&local3) = $tmp745;
panda$core$Int64 $tmp746 = $tmp744.max;
panda$core$Bit $tmp747 = $tmp744.inclusive;
bool $tmp748 = $tmp747.value;
panda$core$Int64 $tmp749 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp750 = panda$core$Int64$convert$R$panda$core$UInt64($tmp749);
if ($tmp748) goto block10; else goto block11;
block10:;
int64_t $tmp751 = $tmp745.value;
int64_t $tmp752 = $tmp746.value;
bool $tmp753 = $tmp751 <= $tmp752;
panda$core$Bit $tmp754 = (panda$core$Bit) {$tmp753};
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block7; else goto block8;
block11:;
int64_t $tmp756 = $tmp745.value;
int64_t $tmp757 = $tmp746.value;
bool $tmp758 = $tmp756 < $tmp757;
panda$core$Bit $tmp759 = (panda$core$Bit) {$tmp758};
bool $tmp760 = $tmp759.value;
if ($tmp760) goto block7; else goto block8;
block7:;
// line 248
panda$core$Int64 $tmp761 = *(&local3);
panda$core$Object* $tmp762 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T(param2, $tmp761);
panda$core$Int64* $tmp763 = &((org$pandalanguage$pandac$ASTNode*) $tmp762)->$rawValue;
panda$core$Int64 $tmp764 = *$tmp763;
panda$core$Int64 $tmp765 = (panda$core$Int64) {22};
panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp764, $tmp765);
bool $tmp767 = $tmp766.value;
if ($tmp767) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$Position* $tmp768 = (org$pandalanguage$pandac$Position*) (((org$pandalanguage$pandac$ASTNode*) $tmp762)->$data + 0);
org$pandalanguage$pandac$Position $tmp769 = *$tmp768;
*(&local4) = $tmp769;
panda$core$String** $tmp770 = (panda$core$String**) (((org$pandalanguage$pandac$ASTNode*) $tmp762)->$data + 16);
panda$core$String* $tmp771 = *$tmp770;
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp771));
panda$core$String* $tmp772 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
*(&local5) = $tmp771;
// line 250
panda$collections$Array* $tmp773 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp774 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp775 = (panda$core$Int64) {34};
org$pandalanguage$pandac$Position $tmp776 = *(&local4);
panda$core$String* $tmp777 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp778 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp779 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position $tmp780 = *(&local4);
org$pandalanguage$pandac$IR$Value* $tmp781 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp782 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp783 = *(&local1);
panda$core$Int64 $tmp784 = *(&local3);
org$pandalanguage$pandac$Type* $tmp785 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp783, $tmp784);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp781, $tmp782, $tmp785);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp778, $tmp779, $tmp780, $tmp781);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp774, $tmp775, $tmp776, $tmp777, $tmp778);
panda$collections$Array$add$panda$collections$Array$T($tmp773, ((panda$core$Object*) $tmp774));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
// unreffing REF($154:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
// unreffing REF($150:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp778));
// unreffing REF($147:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
// unreffing REF($143:org.pandalanguage.pandac.ASTNode)
panda$core$String* $tmp786 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block12;
block14:;
// line 255
panda$core$Bit $tmp787 = panda$core$Bit$init$builtin_bit(false);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp789 = (panda$core$Int64) {255};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s790, $tmp789);
abort(); // unreachable
block15:;
goto block12;
block12:;
panda$core$Panda$unref$panda$core$Object$Q($tmp762);
// unreffing REF($120:org.pandalanguage.pandac.FixedArray.T)
goto block9;
block9:;
panda$core$Int64 $tmp791 = *(&local3);
int64_t $tmp792 = $tmp746.value;
int64_t $tmp793 = $tmp791.value;
int64_t $tmp794 = $tmp792 - $tmp793;
panda$core$Int64 $tmp795 = (panda$core$Int64) {$tmp794};
panda$core$UInt64 $tmp796 = panda$core$Int64$convert$R$panda$core$UInt64($tmp795);
if ($tmp748) goto block18; else goto block19;
block18:;
uint64_t $tmp797 = $tmp796.value;
uint64_t $tmp798 = $tmp750.value;
bool $tmp799 = $tmp797 >= $tmp798;
panda$core$Bit $tmp800 = (panda$core$Bit) {$tmp799};
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block17; else goto block8;
block19:;
uint64_t $tmp802 = $tmp796.value;
uint64_t $tmp803 = $tmp750.value;
bool $tmp804 = $tmp802 > $tmp803;
panda$core$Bit $tmp805 = (panda$core$Bit) {$tmp804};
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block17; else goto block8;
block17:;
int64_t $tmp807 = $tmp791.value;
int64_t $tmp808 = $tmp749.value;
int64_t $tmp809 = $tmp807 + $tmp808;
panda$core$Int64 $tmp810 = (panda$core$Int64) {$tmp809};
*(&local3) = $tmp810;
goto block7;
block8:;
// line 259
org$pandalanguage$pandac$Type* $tmp811 = *(&local0);
org$pandalanguage$pandac$Type* $tmp812 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp811);
org$pandalanguage$pandac$Type* $tmp813 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp812);
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp813));
org$pandalanguage$pandac$Type* $tmp814 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
*(&local6) = $tmp813;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp813));
// unreffing REF($218:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
// unreffing REF($217:org.pandalanguage.pandac.Type)
// line 260
panda$core$Int64 $tmp815 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp816 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp815);
panda$collections$Array* $tmp817 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp818 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp817);
org$pandalanguage$pandac$ASTNode* $tmp819 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp820 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp821 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp822 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp823 = *(&local6);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp821, $tmp822, $tmp823);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp819, $tmp820, param1, $tmp821);
panda$collections$Array* $tmp824 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp825 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp824, $tmp825);
org$pandalanguage$pandac$ASTNode* $tmp826 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp827 = (panda$core$Int64) {39};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp826, $tmp827, param1, param3);
panda$collections$Array$add$panda$collections$Array$T($tmp824, ((panda$core$Object*) $tmp826));
org$pandalanguage$pandac$FixedArray* $tmp828 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp824);
org$pandalanguage$pandac$IR$Value* $tmp829 = org$pandalanguage$pandac$expression$Closure$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp816, $tmp818, $tmp819, $tmp828, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
// unreffing REF($261:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
// unreffing REF($259:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
// unreffing REF($252:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
// unreffing REF($247:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
// unreffing REF($241:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
// unreffing REF($239:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp818));
// unreffing REF($237:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
org$pandalanguage$pandac$Type* $tmp830 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp830));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp831 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp831));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp832 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
// unreffing methodType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp833 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp829;
block4:;
org$pandalanguage$pandac$Type* $tmp834 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
// unreffing methodType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp835 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block1:;
// line 268
panda$collections$IdentityMap** $tmp836 = &param0->lambdaTypes;
panda$collections$IdentityMap* $tmp837 = *$tmp836;
panda$core$Object* $tmp838 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q($tmp837, ((panda$core$Object*) param3));
*(&local7) = ((panda$collections$HashSet*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$HashSet*) $tmp838)));
panda$collections$HashSet* $tmp839 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
*(&local7) = ((panda$collections$HashSet*) $tmp838);
panda$core$Panda$unref$panda$core$Object$Q($tmp838);
// unreffing REF($322:panda.collections.IdentityMap.V?)
// line 269
panda$collections$HashSet* $tmp840 = *(&local7);
panda$core$Bit $tmp841 = panda$core$Bit$init$builtin_bit($tmp840 != NULL);
bool $tmp842 = $tmp841.value;
if ($tmp842) goto block20; else goto block21;
block20:;
// line 270
panda$collections$HashSet* $tmp843 = *(&local7);
panda$core$Bit $tmp844 = panda$core$Bit$init$builtin_bit($tmp843 != NULL);
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp846 = (panda$core$Int64) {270};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s847, $tmp846, &$s848);
abort(); // unreachable
block24:;
ITable* $tmp849 = ((panda$collections$CollectionView*) $tmp843)->$class->itable;
while ($tmp849->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp849 = $tmp849->next;
}
$fn851 $tmp850 = $tmp849->methods[0];
panda$core$Int64 $tmp852 = $tmp850(((panda$collections$CollectionView*) $tmp843));
panda$core$Int64 $tmp853 = (panda$core$Int64) {1};
int64_t $tmp854 = $tmp852.value;
int64_t $tmp855 = $tmp853.value;
bool $tmp856 = $tmp854 > $tmp855;
panda$core$Bit $tmp857 = (panda$core$Bit) {$tmp856};
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block22; else goto block26;
block22:;
// line 271
panda$core$MutableString* $tmp859 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp859, &$s860);
*(&local8) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
panda$core$MutableString* $tmp861 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
*(&local8) = $tmp859;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing REF($360:panda.core.MutableString)
// line 272
panda$threads$MessageQueue** $tmp862 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp863 = *$tmp862;
*(&local9) = ((panda$threads$MessageQueue*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
panda$threads$MessageQueue* $tmp864 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
*(&local9) = $tmp863;
// line 273
panda$collections$HashSet* $tmp865 = *(&local7);
panda$core$Bit $tmp866 = panda$core$Bit$init$builtin_bit($tmp865 != NULL);
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp868 = (panda$core$Int64) {273};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s869, $tmp868, &$s870);
abort(); // unreachable
block27:;
ITable* $tmp871 = ((panda$collections$Iterable*) $tmp865)->$class->itable;
while ($tmp871->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp871 = $tmp871->next;
}
$fn873 $tmp872 = $tmp871->methods[0];
panda$collections$Iterator* $tmp874 = $tmp872(((panda$collections$Iterable*) $tmp865));
goto block29;
block29:;
ITable* $tmp875 = $tmp874->$class->itable;
while ($tmp875->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp875 = $tmp875->next;
}
$fn877 $tmp876 = $tmp875->methods[0];
panda$core$Bit $tmp878 = $tmp876($tmp874);
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block31; else goto block30;
block30:;
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp880 = $tmp874->$class->itable;
while ($tmp880->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp880 = $tmp880->next;
}
$fn882 $tmp881 = $tmp880->methods[1];
panda$core$Object* $tmp883 = $tmp881($tmp874);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp883)));
org$pandalanguage$pandac$Type* $tmp884 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp884));
*(&local10) = ((org$pandalanguage$pandac$Type*) $tmp883);
// line 274
panda$core$MutableString* $tmp885 = *(&local8);
org$pandalanguage$pandac$Type* $tmp886 = *(&local10);
panda$core$String* $tmp887 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s888, ((panda$core$Object*) $tmp886));
panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp887, &$s890);
panda$core$MutableString$append$panda$core$String($tmp885, $tmp889);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp889));
// unreffing REF($418:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
// unreffing REF($417:panda.core.String)
// line 275
panda$threads$MessageQueue* $tmp891 = (panda$threads$MessageQueue*) frostObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
panda$threads$MessageQueue$init($tmp891);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
panda$threads$MessageQueue** $tmp892 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp893 = *$tmp892;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
panda$threads$MessageQueue** $tmp894 = &param0->errorQueue;
*$tmp894 = $tmp891;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
// unreffing REF($427:panda.threads.MessageQueue<org.pandalanguage.pandac.Compiler.Error>)
// line 276
org$pandalanguage$pandac$Compiler$TypeContext* $tmp895 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp896 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp897 = *(&local10);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp895, $tmp896, $tmp897);
org$pandalanguage$pandac$IR$Value* $tmp898 = org$pandalanguage$pandac$expression$Closure$compileUntypedLambda$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param3, $tmp895);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp898));
// unreffing REF($446:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
// unreffing REF($442:org.pandalanguage.pandac.Compiler.TypeContext)
// line 278
panda$threads$MessageQueue** $tmp899 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp900 = *$tmp899;
panda$core$Bit $tmp901 = panda$threads$MessageQueue$hasMessage$R$panda$core$Bit($tmp900);
bool $tmp902 = $tmp901.value;
if ($tmp902) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp903 = (panda$core$Int64) {278};
org$pandalanguage$pandac$Position$wrapper* $tmp904;
$tmp904 = (org$pandalanguage$pandac$Position$wrapper*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp904->value = param1;
panda$core$String* $tmp905 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s906, ((panda$core$Object*) $tmp904));
panda$core$String* $tmp907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp905, &$s908);
org$pandalanguage$pandac$Type* $tmp909 = *(&local10);
panda$core$String* $tmp910 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s911, ((panda$core$Object*) $tmp909));
panda$core$String* $tmp912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp910, &$s913);
panda$core$String* $tmp914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp907, $tmp912);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s915, $tmp903, $tmp914);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
// unreffing REF($468:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp912));
// unreffing REF($467:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp910));
// unreffing REF($466:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp907));
// unreffing REF($463:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp905));
// unreffing REF($462:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
// unreffing REF($461:panda.core.Object)
abort(); // unreachable
block32:;
// line 281
panda$core$MutableString* $tmp916 = *(&local8);
panda$threads$MessageQueue** $tmp917 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp918 = *$tmp917;
panda$core$Immutable* $tmp919 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T($tmp918);
panda$core$String** $tmp920 = &((org$pandalanguage$pandac$Compiler$Error*) $tmp919)->message;
panda$core$String* $tmp921 = *$tmp920;
panda$core$String* $tmp922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s923, $tmp921);
panda$core$String* $tmp924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp922, &$s925);
panda$core$MutableString$append$panda$core$String($tmp916, $tmp924);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
// unreffing REF($499:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp922));
// unreffing REF($498:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp919));
// unreffing REF($494:panda.threads.MessageQueue.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp883);
// unreffing REF($405:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp926 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
// unreffing t
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
goto block29;
block31:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp874));
// unreffing REF($394:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 283
panda$threads$MessageQueue* $tmp927 = *(&local9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
panda$threads$MessageQueue** $tmp928 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp929 = *$tmp928;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
panda$threads$MessageQueue** $tmp930 = &param0->errorQueue;
*$tmp930 = $tmp927;
// line 284
panda$core$MutableString* $tmp931 = *(&local8);
panda$core$String* $tmp932 = panda$core$MutableString$finish$R$panda$core$String($tmp931);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp932);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
// unreffing REF($534:panda.core.String)
// line 285
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$threads$MessageQueue* $tmp933 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
// unreffing old
*(&local9) = ((panda$threads$MessageQueue*) NULL);
panda$core$MutableString* $tmp934 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
// unreffing msg
*(&local8) = ((panda$core$MutableString*) NULL);
panda$collections$HashSet* $tmp935 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
// unreffing attempts
*(&local7) = ((panda$collections$HashSet*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block26:;
// line 1
// line 288
org$pandalanguage$pandac$Compiler$TypeContext* $tmp936 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp937 = (panda$core$Int64) {3};
panda$collections$HashSet* $tmp938 = *(&local7);
panda$core$Bit $tmp939 = panda$core$Bit$init$builtin_bit($tmp938 != NULL);
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp941 = (panda$core$Int64) {289};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s942, $tmp941, &$s943);
abort(); // unreachable
block34:;
ITable* $tmp944 = ((panda$collections$Iterable*) $tmp938)->$class->itable;
while ($tmp944->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp944 = $tmp944->next;
}
$fn946 $tmp945 = $tmp944->methods[0];
panda$collections$Iterator* $tmp947 = $tmp945(((panda$collections$Iterable*) $tmp938));
ITable* $tmp948 = $tmp947->$class->itable;
while ($tmp948->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp948 = $tmp948->next;
}
$fn950 $tmp949 = $tmp948->methods[1];
panda$core$Object* $tmp951 = $tmp949($tmp947);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp936, $tmp937, ((org$pandalanguage$pandac$Type*) $tmp951));
org$pandalanguage$pandac$IR$Value* $tmp952 = org$pandalanguage$pandac$expression$Closure$compileUntypedLambda$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param3, $tmp936);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
// unreffing REF($579:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp951);
// unreffing REF($576:panda.collections.Iterator.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
// unreffing REF($572:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp936));
// unreffing REF($560:org.pandalanguage.pandac.Compiler.TypeContext)
// line 290
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$collections$HashSet* $tmp953 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
// unreffing attempts
*(&local7) = ((panda$collections$HashSet*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block23:;
goto block21;
block21:;
// line 293
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s954);
// line 295
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$collections$HashSet* $tmp955 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
// unreffing attempts
*(&local7) = ((panda$collections$HashSet*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Closure$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$MethodDecl$Kind param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$ASTNode* param4, org$pandalanguage$pandac$FixedArray* param5, org$pandalanguage$pandac$Compiler$TypeContext* param6) {

panda$core$String* local0 = NULL;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
panda$core$String* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
org$pandalanguage$pandac$Type* local5 = NULL;
org$pandalanguage$pandac$Type* local6 = NULL;
org$pandalanguage$pandac$Pair* local7 = NULL;
org$pandalanguage$pandac$Annotations* local8 = NULL;
org$pandalanguage$pandac$MethodDecl* local9 = NULL;
panda$core$Bit local10;
panda$core$Bit local11;
panda$collections$Stack* local12 = NULL;
panda$core$Bit local13;
org$pandalanguage$pandac$ASTNode* local14 = NULL;
org$pandalanguage$pandac$ClassDecl* local15 = NULL;
panda$collections$Array* local16 = NULL;
org$pandalanguage$pandac$Compiler$Capture* local17 = NULL;
org$pandalanguage$pandac$Variable* local18 = NULL;
org$pandalanguage$pandac$FieldDecl* local19 = NULL;
org$pandalanguage$pandac$IR$Value* local20 = NULL;
panda$collections$Array* local21 = NULL;
org$pandalanguage$pandac$Type* local22 = NULL;
org$pandalanguage$pandac$Type* local23 = NULL;
org$pandalanguage$pandac$Type* local24 = NULL;
org$pandalanguage$pandac$IR$Value* local25 = NULL;
// line 302
panda$core$Int64* $tmp956 = &param0->closureCount;
panda$core$Int64 $tmp957 = *$tmp956;
panda$core$Int64 $tmp958 = (panda$core$Int64) {1};
int64_t $tmp959 = $tmp957.value;
int64_t $tmp960 = $tmp958.value;
int64_t $tmp961 = $tmp959 + $tmp960;
panda$core$Int64 $tmp962 = (panda$core$Int64) {$tmp961};
panda$core$Int64* $tmp963 = &param0->closureCount;
*$tmp963 = $tmp962;
// line 303
panda$core$Int64* $tmp964 = &param0->closureCount;
panda$core$Int64 $tmp965 = *$tmp964;
panda$core$Int64$wrapper* $tmp966;
$tmp966 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp966->value = $tmp965;
panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s968, ((panda$core$Object*) $tmp966));
panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp967, &$s970);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
panda$core$String* $tmp971 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp971));
*(&local0) = $tmp969;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
// unreffing REF($15:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp967));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
// unreffing REF($13:panda.core.Object)
// line 304
panda$collections$Array* $tmp972 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp972);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp972));
panda$collections$Array* $tmp973 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp973));
*(&local1) = $tmp972;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp972));
// unreffing REF($33:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
// line 305
ITable* $tmp974 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp974->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp974 = $tmp974->next;
}
$fn976 $tmp975 = $tmp974->methods[0];
panda$collections$Iterator* $tmp977 = $tmp975(((panda$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp978 = $tmp977->$class->itable;
while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp978 = $tmp978->next;
}
$fn980 $tmp979 = $tmp978->methods[0];
panda$core$Bit $tmp981 = $tmp979($tmp977);
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp983 = $tmp977->$class->itable;
while ($tmp983->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp983 = $tmp983->next;
}
$fn985 $tmp984 = $tmp983->methods[1];
panda$core$Object* $tmp986 = $tmp984($tmp977);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp986)));
org$pandalanguage$pandac$ASTNode* $tmp987 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) $tmp986);
// line 306
org$pandalanguage$pandac$ASTNode* $tmp988 = *(&local2);
panda$core$Int64* $tmp989 = &$tmp988->$rawValue;
panda$core$Int64 $tmp990 = *$tmp989;
panda$core$Int64 $tmp991 = (panda$core$Int64) {34};
panda$core$Bit $tmp992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp990, $tmp991);
bool $tmp993 = $tmp992.value;
if ($tmp993) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp994 = (org$pandalanguage$pandac$Position*) ($tmp988->$data + 0);
org$pandalanguage$pandac$Position $tmp995 = *$tmp994;
panda$core$String** $tmp996 = (panda$core$String**) ($tmp988->$data + 16);
panda$core$String* $tmp997 = *$tmp996;
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
panda$core$String* $tmp998 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
*(&local3) = $tmp997;
org$pandalanguage$pandac$ASTNode** $tmp999 = (org$pandalanguage$pandac$ASTNode**) ($tmp988->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1000 = *$tmp999;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
org$pandalanguage$pandac$ASTNode* $tmp1001 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
*(&local4) = $tmp1000;
// line 308
org$pandalanguage$pandac$Scanner** $tmp1002 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp1003 = *$tmp1002;
org$pandalanguage$pandac$ASTNode* $tmp1004 = *(&local4);
org$pandalanguage$pandac$Type* $tmp1005 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp1003, $tmp1004);
org$pandalanguage$pandac$Type* $tmp1006 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, $tmp1005);
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1006));
org$pandalanguage$pandac$Type* $tmp1007 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
*(&local5) = $tmp1006;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1006));
// unreffing REF($102:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1005));
// unreffing REF($101:org.pandalanguage.pandac.Type)
// line 309
org$pandalanguage$pandac$Type* $tmp1008 = *(&local5);
panda$core$Bit $tmp1009 = panda$core$Bit$init$builtin_bit($tmp1008 == NULL);
bool $tmp1010 = $tmp1009.value;
if ($tmp1010) goto block7; else goto block8;
block7:;
// line 310
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp1011 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1011));
// unreffing resolved
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1012 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1012));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1013 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
// unreffing name
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp986);
// unreffing REF($61:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1014 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp977));
// unreffing REF($50:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$Array* $tmp1015 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
// unreffing parameters
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1016 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block8:;
// line 312
panda$collections$Array* $tmp1017 = *(&local1);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1018 = (org$pandalanguage$pandac$MethodDecl$Parameter*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp1019 = *(&local3);
org$pandalanguage$pandac$Type* $tmp1020 = *(&local5);
panda$core$Bit $tmp1021 = panda$core$Bit$init$builtin_bit($tmp1020 != NULL);
bool $tmp1022 = $tmp1021.value;
if ($tmp1022) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp1023 = (panda$core$Int64) {312};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1024, $tmp1023, &$s1025);
abort(); // unreachable
block9:;
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1018, $tmp1019, $tmp1020);
panda$collections$Array$add$panda$collections$Array$T($tmp1017, ((panda$core$Object*) $tmp1018));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
// unreffing REF($165:org.pandalanguage.pandac.MethodDecl.Parameter)
org$pandalanguage$pandac$Type* $tmp1026 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
// unreffing resolved
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1027 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1028 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// unreffing name
*(&local3) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 315
panda$core$Bit $tmp1029 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1030 = $tmp1029.value;
if ($tmp1030) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp1031 = (panda$core$Int64) {315};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1032, $tmp1031);
abort(); // unreachable
block11:;
goto block4;
block4:;
panda$core$Panda$unref$panda$core$Object$Q($tmp986);
// unreffing REF($61:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1033 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1033));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp977));
// unreffing REF($50:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 319
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
// line 320
panda$core$Bit $tmp1034 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp1035 = $tmp1034.value;
if ($tmp1035) goto block13; else goto block15;
block13:;
// line 321
org$pandalanguage$pandac$Scanner** $tmp1036 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp1037 = *$tmp1036;
panda$core$Bit $tmp1038 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp1040 = (panda$core$Int64) {321};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1041, $tmp1040, &$s1042);
abort(); // unreachable
block16:;
org$pandalanguage$pandac$Type* $tmp1043 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp1037, param4);
org$pandalanguage$pandac$Type* $tmp1044 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, $tmp1043);
panda$core$Bit $tmp1045 = panda$core$Bit$init$builtin_bit($tmp1044 != NULL);
bool $tmp1046 = $tmp1045.value;
if ($tmp1046) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp1047 = (panda$core$Int64) {321};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1048, $tmp1047, &$s1049);
abort(); // unreachable
block18:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1044));
org$pandalanguage$pandac$Type* $tmp1050 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
*(&local6) = $tmp1044;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1044));
// unreffing REF($237:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1043));
// unreffing REF($236:org.pandalanguage.pandac.Type)
// line 322
org$pandalanguage$pandac$Type* $tmp1051 = *(&local6);
panda$core$Bit $tmp1052 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block20; else goto block21;
block20:;
// line 323
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp1054 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1054));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1055 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
// unreffing parameters
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1056 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1056));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block21:;
goto block14;
block15:;
// line 1
// line 327
org$pandalanguage$pandac$Type* $tmp1057 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
org$pandalanguage$pandac$Type* $tmp1058 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1058));
*(&local6) = $tmp1057;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
// unreffing REF($285:org.pandalanguage.pandac.Type)
// line 328
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1059;
$tmp1059 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1059->value = param2;
panda$core$Int64 $tmp1060 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1061 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1060);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1062;
$tmp1062 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1062->value = $tmp1061;
ITable* $tmp1063 = ((panda$core$Equatable*) $tmp1059)->$class->itable;
while ($tmp1063->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1063 = $tmp1063->next;
}
$fn1065 $tmp1064 = $tmp1063->methods[0];
panda$core$Bit $tmp1066 = $tmp1064(((panda$core$Equatable*) $tmp1059), ((panda$core$Equatable*) $tmp1062));
bool $tmp1067 = $tmp1066.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1062)));
// unreffing REF($300:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1059)));
// unreffing REF($296:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp1067) goto block22; else goto block23;
block22:;
// line 329
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s1068);
// line 330
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp1069 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1069));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1070 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1070));
// unreffing parameters
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1071 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1071));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block23:;
goto block14;
block14:;
// line 333
org$pandalanguage$pandac$Pair* $tmp1072 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$collections$Stack** $tmp1073 = &param0->currentMethod;
panda$collections$Stack* $tmp1074 = *$tmp1073;
panda$core$Int64 $tmp1075 = (panda$core$Int64) {0};
panda$core$Object* $tmp1076 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp1074, $tmp1075);
panda$collections$HashMap* $tmp1077 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp1077);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp1072, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1076)), ((panda$core$Object*) ((panda$collections$Map*) $tmp1077)));
*(&local7) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1072));
org$pandalanguage$pandac$Pair* $tmp1078 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1078));
*(&local7) = $tmp1072;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
// unreffing REF($343:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.Compiler.Capture>)
panda$core$Panda$unref$panda$core$Object$Q($tmp1076);
// unreffing REF($340:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1072));
// unreffing REF($334:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.MethodDecl, panda.collections.Map<panda.core.String, org.pandalanguage.pandac.Compiler.Capture>>)
// line 335
panda$collections$Stack** $tmp1079 = &param0->captures;
panda$collections$Stack* $tmp1080 = *$tmp1079;
org$pandalanguage$pandac$Pair* $tmp1081 = *(&local7);
panda$collections$Stack$push$panda$collections$Stack$T($tmp1080, ((panda$core$Object*) $tmp1081));
// line 336
org$pandalanguage$pandac$Annotations* $tmp1082 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp1083 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1082, $tmp1083);
*(&local8) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
org$pandalanguage$pandac$Annotations* $tmp1084 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1084));
*(&local8) = $tmp1082;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
// unreffing REF($373:org.pandalanguage.pandac.Annotations)
// line 337
org$pandalanguage$pandac$MethodDecl* $tmp1085 = (org$pandalanguage$pandac$MethodDecl*) frostObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
panda$collections$Stack** $tmp1086 = &param0->currentClass;
panda$collections$Stack* $tmp1087 = *$tmp1086;
panda$core$Int64 $tmp1088 = (panda$core$Int64) {0};
panda$core$Object* $tmp1089 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp1087, $tmp1088);
org$pandalanguage$pandac$Annotations* $tmp1090 = *(&local8);
panda$core$String* $tmp1091 = *(&local0);
panda$collections$Array* $tmp1092 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1093 = *(&local6);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1085, ((org$pandalanguage$pandac$ClassDecl*) $tmp1089), param1, ((panda$core$String*) NULL), $tmp1090, param2, $tmp1091, ((panda$collections$Array*) NULL), $tmp1092, $tmp1093, param5);
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1085));
org$pandalanguage$pandac$MethodDecl* $tmp1094 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1094));
*(&local9) = $tmp1085;
panda$core$Panda$unref$panda$core$Object$Q($tmp1089);
// unreffing REF($392:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1085));
// unreffing REF($387:org.pandalanguage.pandac.MethodDecl)
// line 341
panda$core$Bit* $tmp1095 = &param0->writeCode;
panda$core$Bit $tmp1096 = *$tmp1095;
*(&local10) = $tmp1096;
// line 342
panda$core$Bit* $tmp1097 = &param0->reportErrors;
panda$core$Bit $tmp1098 = *$tmp1097;
*(&local11) = $tmp1098;
// line 343
panda$core$Bit $tmp1099 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp1100 = &param0->writeCode;
*$tmp1100 = $tmp1099;
// line 344
panda$core$Bit $tmp1101 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp1102 = &param0->reportErrors;
*$tmp1102 = $tmp1101;
// line 345
panda$collections$Stack** $tmp1103 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1104 = *$tmp1103;
*(&local12) = ((panda$collections$Stack*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1104));
panda$collections$Stack* $tmp1105 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1105));
*(&local12) = $tmp1104;
// line 346
panda$collections$Stack* $tmp1106 = (panda$collections$Stack*) frostObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
panda$collections$Stack$init($tmp1106);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1106));
panda$collections$Stack** $tmp1107 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1108 = *$tmp1107;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
panda$collections$Stack** $tmp1109 = &param0->enclosingContexts;
*$tmp1109 = $tmp1106;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1106));
// unreffing REF($440:panda.collections.Stack<org.pandalanguage.pandac.Compiler.EnclosingContext>)
// line 347
org$pandalanguage$pandac$MethodDecl* $tmp1110 = *(&local9);
org$pandalanguage$pandac$SymbolTable** $tmp1111 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1112 = *$tmp1111;
org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$SymbolTable$Q(param0, $tmp1110, $tmp1112);
// line 348
panda$collections$Stack* $tmp1113 = *(&local12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
panda$collections$Stack** $tmp1114 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1115 = *$tmp1114;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1115));
panda$collections$Stack** $tmp1116 = &param0->enclosingContexts;
*$tmp1116 = $tmp1113;
// line 349
panda$core$Bit $tmp1117 = *(&local10);
panda$core$Bit* $tmp1118 = &param0->writeCode;
*$tmp1118 = $tmp1117;
// line 350
panda$core$Bit $tmp1119 = *(&local11);
panda$core$Bit* $tmp1120 = &param0->reportErrors;
*$tmp1120 = $tmp1119;
// line 352
// line 353
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 354
org$pandalanguage$pandac$Pair* $tmp1121 = *(&local7);
panda$core$Object** $tmp1122 = &$tmp1121->second;
panda$core$Object* $tmp1123 = *$tmp1122;
ITable* $tmp1124 = ((panda$collections$MapView*) ((panda$collections$Map*) $tmp1123))->$class->itable;
while ($tmp1124->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp1124 = $tmp1124->next;
}
$fn1126 $tmp1125 = $tmp1124->methods[0];
panda$core$Int64 $tmp1127 = $tmp1125(((panda$collections$MapView*) ((panda$collections$Map*) $tmp1123)));
panda$core$Int64 $tmp1128 = (panda$core$Int64) {0};
int64_t $tmp1129 = $tmp1127.value;
int64_t $tmp1130 = $tmp1128.value;
bool $tmp1131 = $tmp1129 != $tmp1130;
panda$core$Bit $tmp1132 = (panda$core$Bit) {$tmp1131};
bool $tmp1133 = $tmp1132.value;
if ($tmp1133) goto block24; else goto block26;
block24:;
// line 356
org$pandalanguage$pandac$MethodDecl* $tmp1134 = *(&local9);
org$pandalanguage$pandac$Pair* $tmp1135 = *(&local7);
panda$core$Object** $tmp1136 = &$tmp1135->second;
panda$core$Object* $tmp1137 = *$tmp1136;
ITable* $tmp1138 = ((panda$collections$MapView*) ((panda$collections$Map*) $tmp1137))->$class->itable;
while ($tmp1138->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp1138 = $tmp1138->next;
}
$fn1140 $tmp1139 = $tmp1138->methods[4];
panda$collections$Iterator* $tmp1141 = $tmp1139(((panda$collections$MapView*) ((panda$collections$Map*) $tmp1137)));
ITable* $tmp1142 = $tmp1141->$class->itable;
while ($tmp1142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1142 = $tmp1142->next;
}
$fn1144 $tmp1143 = $tmp1142->methods[6];
panda$collections$Array* $tmp1145 = $tmp1143($tmp1141);
org$pandalanguage$pandac$ClassDecl* $tmp1146 = org$pandalanguage$pandac$expression$Closure$createClosureClass$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$MethodDecl$panda$collections$CollectionView$LTorg$pandalanguage$pandac$Compiler$Capture$GT$R$org$pandalanguage$pandac$ClassDecl(param0, $tmp1134, ((panda$collections$CollectionView*) $tmp1145));
*(&local15) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
org$pandalanguage$pandac$ClassDecl* $tmp1147 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1147));
*(&local15) = $tmp1146;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
// unreffing REF($513:org.pandalanguage.pandac.ClassDecl)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
// unreffing REF($510:panda.collections.Array<panda.collections.Iterator.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
// unreffing REF($506:panda.collections.Iterator<panda.collections.MapView.V>)
// line 357
panda$collections$Array* $tmp1148 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1148);
*(&local16) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1148));
panda$collections$Array* $tmp1149 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
*(&local16) = $tmp1148;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1148));
// unreffing REF($531:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 358
org$pandalanguage$pandac$Pair* $tmp1150 = *(&local7);
panda$core$Object** $tmp1151 = &$tmp1150->second;
panda$core$Object* $tmp1152 = *$tmp1151;
ITable* $tmp1153 = ((panda$collections$MapView*) ((panda$collections$Map*) $tmp1152))->$class->itable;
while ($tmp1153->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp1153 = $tmp1153->next;
}
$fn1155 $tmp1154 = $tmp1153->methods[4];
panda$collections$Iterator* $tmp1156 = $tmp1154(((panda$collections$MapView*) ((panda$collections$Map*) $tmp1152)));
goto block27;
block27:;
ITable* $tmp1157 = $tmp1156->$class->itable;
while ($tmp1157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1157 = $tmp1157->next;
}
$fn1159 $tmp1158 = $tmp1157->methods[0];
panda$core$Bit $tmp1160 = $tmp1158($tmp1156);
bool $tmp1161 = $tmp1160.value;
if ($tmp1161) goto block29; else goto block28;
block28:;
*(&local17) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
ITable* $tmp1162 = $tmp1156->$class->itable;
while ($tmp1162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1162 = $tmp1162->next;
}
$fn1164 $tmp1163 = $tmp1162->methods[1];
panda$core$Object* $tmp1165 = $tmp1163($tmp1156);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Capture*) $tmp1165)));
org$pandalanguage$pandac$Compiler$Capture* $tmp1166 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
*(&local17) = ((org$pandalanguage$pandac$Compiler$Capture*) $tmp1165);
// line 359
org$pandalanguage$pandac$Compiler$Capture* $tmp1167 = *(&local17);
panda$core$Int64* $tmp1168 = &$tmp1167->$rawValue;
panda$core$Int64 $tmp1169 = *$tmp1168;
panda$core$Int64 $tmp1170 = (panda$core$Int64) {0};
panda$core$Bit $tmp1171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1169, $tmp1170);
bool $tmp1172 = $tmp1171.value;
if ($tmp1172) goto block31; else goto block32;
block31:;
org$pandalanguage$pandac$Variable** $tmp1173 = (org$pandalanguage$pandac$Variable**) ($tmp1167->$data + 0);
org$pandalanguage$pandac$Variable* $tmp1174 = *$tmp1173;
*(&local18) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1174));
org$pandalanguage$pandac$Variable* $tmp1175 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1175));
*(&local18) = $tmp1174;
// line 361
panda$collections$Array* $tmp1176 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1177 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1178 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Variable* $tmp1179 = *(&local18);
panda$core$String** $tmp1180 = &((org$pandalanguage$pandac$Symbol*) $tmp1179)->name;
panda$core$String* $tmp1181 = *$tmp1180;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1177, $tmp1178, param1, $tmp1181);
panda$collections$Array$add$panda$collections$Array$T($tmp1176, ((panda$core$Object*) $tmp1177));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1177));
// unreffing REF($591:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$Variable* $tmp1182 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
// unreffing v
*(&local18) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block30;
block32:;
panda$core$Int64 $tmp1183 = (panda$core$Int64) {2};
panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1169, $tmp1183);
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block33; else goto block34;
block33:;
// line 364
panda$collections$Array* $tmp1186 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1187 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1188 = (panda$core$Int64) {40};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1187, $tmp1188, param1);
panda$collections$Array$add$panda$collections$Array$T($tmp1186, ((panda$core$Object*) $tmp1187));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1187));
// unreffing REF($616:org.pandalanguage.pandac.ASTNode)
goto block30;
block34:;
panda$core$Int64 $tmp1189 = (panda$core$Int64) {1};
panda$core$Bit $tmp1190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1169, $tmp1189);
bool $tmp1191 = $tmp1190.value;
if ($tmp1191) goto block35; else goto block30;
block35:;
org$pandalanguage$pandac$FieldDecl** $tmp1192 = (org$pandalanguage$pandac$FieldDecl**) ($tmp1167->$data + 0);
org$pandalanguage$pandac$FieldDecl* $tmp1193 = *$tmp1192;
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
org$pandalanguage$pandac$FieldDecl* $tmp1194 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
*(&local19) = $tmp1193;
// line 367
panda$collections$Array* $tmp1195 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1196 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1197 = (panda$core$Int64) {16};
org$pandalanguage$pandac$ASTNode* $tmp1198 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1199 = (panda$core$Int64) {22};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1198, $tmp1199, param1, &$s1200);
org$pandalanguage$pandac$FieldDecl* $tmp1201 = *(&local19);
panda$core$String** $tmp1202 = &((org$pandalanguage$pandac$Symbol*) $tmp1201)->name;
panda$core$String* $tmp1203 = *$tmp1202;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1196, $tmp1197, param1, $tmp1198, $tmp1203);
panda$collections$Array$add$panda$collections$Array$T($tmp1195, ((panda$core$Object*) $tmp1196));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
// unreffing REF($643:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
// unreffing REF($641:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FieldDecl* $tmp1204 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
// unreffing f
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block30;
block30:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1165);
// unreffing REF($563:panda.collections.Iterator.T)
org$pandalanguage$pandac$Compiler$Capture* $tmp1205 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1205));
// unreffing capture
*(&local17) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
goto block27;
block29:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
// unreffing REF($552:panda.collections.Iterator<panda.collections.MapView.V>)
// line 373
panda$collections$Stack** $tmp1206 = &param0->captures;
panda$collections$Stack* $tmp1207 = *$tmp1206;
panda$core$Object* $tmp1208 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp1207);
panda$core$Panda$unref$panda$core$Object$Q($tmp1208);
// unreffing REF($681:panda.collections.Stack.T)
// line 374
panda$collections$Array** $tmp1209 = &param0->pendingClasses;
panda$collections$Array* $tmp1210 = *$tmp1209;
org$pandalanguage$pandac$ClassDecl* $tmp1211 = *(&local15);
panda$collections$Array$add$panda$collections$Array$T($tmp1210, ((panda$core$Object*) $tmp1211));
// line 375
org$pandalanguage$pandac$IR$Value* $tmp1212 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1213 = (panda$core$Int64) {14};
org$pandalanguage$pandac$ClassDecl* $tmp1214 = *(&local15);
org$pandalanguage$pandac$Type** $tmp1215 = &$tmp1214->type;
org$pandalanguage$pandac$Type* $tmp1216 = *$tmp1215;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1212, $tmp1213, $tmp1216);
panda$collections$Array* $tmp1217 = *(&local16);
org$pandalanguage$pandac$FixedArray* $tmp1218 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp1217);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1219 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1220 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp1219, $tmp1220);
org$pandalanguage$pandac$IR$Value* $tmp1221 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1212, ((panda$collections$ListView*) $tmp1218), $tmp1219);
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1221));
org$pandalanguage$pandac$IR$Value* $tmp1222 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1222));
*(&local20) = $tmp1221;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1221));
// unreffing REF($708:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1219));
// unreffing REF($705:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1218));
// unreffing REF($702:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1212));
// unreffing REF($694:org.pandalanguage.pandac.IR.Value)
// line 377
org$pandalanguage$pandac$IR$Value* $tmp1223 = *(&local20);
panda$core$Bit $tmp1224 = panda$core$Bit$init$builtin_bit($tmp1223 == NULL);
bool $tmp1225 = $tmp1224.value;
if ($tmp1225) goto block36; else goto block37;
block36:;
// line 378
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp1226 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1226));
// unreffing rawTarget
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp1227 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
// unreffing args
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1228 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
// unreffing cl
*(&local15) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1229 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Stack* $tmp1230 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
// unreffing oldContexts
*(&local12) = ((panda$collections$Stack*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp1231 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1231));
// unreffing methodDecl
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1232 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
// unreffing annotations
*(&local8) = ((org$pandalanguage$pandac$Annotations*) NULL);
org$pandalanguage$pandac$Pair* $tmp1233 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
// unreffing currentCaptures
*(&local7) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Type* $tmp1234 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1234));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1235 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1235));
// unreffing parameters
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1236 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1236));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block37:;
// line 380
org$pandalanguage$pandac$ASTNode* $tmp1237 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1238 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp1239 = *(&local20);
panda$core$Bit $tmp1240 = panda$core$Bit$init$builtin_bit($tmp1239 != NULL);
bool $tmp1241 = $tmp1240.value;
if ($tmp1241) goto block38; else goto block39;
block39:;
panda$core$Int64 $tmp1242 = (panda$core$Int64) {380};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1243, $tmp1242, &$s1244);
abort(); // unreachable
block38:;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp1237, $tmp1238, param1, $tmp1239);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1237));
org$pandalanguage$pandac$ASTNode* $tmp1245 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1245));
*(&local14) = $tmp1237;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1237));
// unreffing REF($794:org.pandalanguage.pandac.ASTNode)
// line 381
org$pandalanguage$pandac$ClassDecl* $tmp1246 = *(&local15);
org$pandalanguage$pandac$Type** $tmp1247 = &$tmp1246->type;
org$pandalanguage$pandac$Type* $tmp1248 = *$tmp1247;
panda$core$Bit $tmp1249 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1248);
*(&local13) = $tmp1249;
org$pandalanguage$pandac$IR$Value* $tmp1250 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1250));
// unreffing rawTarget
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp1251 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1251));
// unreffing args
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1252 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1252));
// unreffing cl
*(&local15) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block25;
block26:;
// line 1
// line 385
panda$collections$Stack** $tmp1253 = &param0->captures;
panda$collections$Stack* $tmp1254 = *$tmp1253;
panda$core$Object* $tmp1255 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp1254);
panda$core$Panda$unref$panda$core$Object$Q($tmp1255);
// unreffing REF($843:panda.collections.Stack.T)
// line 386
panda$collections$Stack* $tmp1256 = (panda$collections$Stack*) frostObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
panda$collections$Stack$init($tmp1256);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
panda$collections$Stack** $tmp1257 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1258 = *$tmp1257;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1258));
panda$collections$Stack** $tmp1259 = &param0->enclosingContexts;
*$tmp1259 = $tmp1256;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
// unreffing REF($849:panda.collections.Stack<org.pandalanguage.pandac.Compiler.EnclosingContext>)
// line 387
org$pandalanguage$pandac$MethodDecl* $tmp1260 = *(&local9);
org$pandalanguage$pandac$SymbolTable** $tmp1261 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1262 = *$tmp1261;
org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$SymbolTable$Q(param0, $tmp1260, $tmp1262);
// line 388
panda$collections$Stack* $tmp1263 = *(&local12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
panda$collections$Stack** $tmp1264 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1265 = *$tmp1264;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1265));
panda$collections$Stack** $tmp1266 = &param0->enclosingContexts;
*$tmp1266 = $tmp1263;
// line 389
org$pandalanguage$pandac$ASTNode* $tmp1267 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1268 = (panda$core$Int64) {31};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1267, $tmp1268, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
org$pandalanguage$pandac$ASTNode* $tmp1269 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
*(&local14) = $tmp1267;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
// unreffing REF($880:org.pandalanguage.pandac.ASTNode)
// line 390
panda$core$Bit $tmp1270 = panda$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp1270;
goto block25;
block25:;
// line 392
panda$collections$Array* $tmp1271 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1271);
*(&local21) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1271));
panda$collections$Array* $tmp1272 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1272));
*(&local21) = $tmp1271;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1271));
// unreffing REF($898:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 393
*(&local22) = ((org$pandalanguage$pandac$Type*) NULL);
// line 394
org$pandalanguage$pandac$MethodDecl* $tmp1273 = *(&local9);
org$pandalanguage$pandac$Annotations** $tmp1274 = &$tmp1273->annotations;
org$pandalanguage$pandac$Annotations* $tmp1275 = *$tmp1274;
panda$core$Bit $tmp1276 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp1275);
bool $tmp1277 = $tmp1276.value;
if ($tmp1277) goto block40; else goto block42;
block40:;
// line 395
org$pandalanguage$pandac$MethodDecl* $tmp1278 = *(&local9);
org$pandalanguage$pandac$Type* $tmp1279 = org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type($tmp1278);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1279));
org$pandalanguage$pandac$Type* $tmp1280 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1280));
*(&local22) = $tmp1279;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1279));
// unreffing REF($922:org.pandalanguage.pandac.Type)
goto block41;
block42:;
// line 1
// line 398
org$pandalanguage$pandac$MethodDecl* $tmp1281 = *(&local9);
org$pandalanguage$pandac$MethodDecl* $tmp1282 = *(&local9);
panda$core$Weak** $tmp1283 = &$tmp1282->owner;
panda$core$Weak* $tmp1284 = *$tmp1283;
panda$core$Object* $tmp1285 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1284);
org$pandalanguage$pandac$Type** $tmp1286 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1285)->type;
org$pandalanguage$pandac$Type* $tmp1287 = *$tmp1286;
panda$core$Bit $tmp1288 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp1289 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp1281, $tmp1287, $tmp1288);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1289));
org$pandalanguage$pandac$Type* $tmp1290 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1290));
*(&local22) = $tmp1289;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1289));
// unreffing REF($945:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1285);
// unreffing REF($940:panda.core.Weak.T)
goto block41;
block41:;
// line 400
org$pandalanguage$pandac$Type* $tmp1291 = *(&local22);
org$pandalanguage$pandac$Type* $tmp1292 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1291);
*(&local23) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1292));
org$pandalanguage$pandac$Type* $tmp1293 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1293));
*(&local23) = $tmp1292;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1292));
// unreffing REF($961:org.pandalanguage.pandac.Type)
// line 401
panda$collections$Array* $tmp1294 = *(&local21);
org$pandalanguage$pandac$ASTNode* $tmp1295 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1296 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp1297 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1298 = (panda$core$Int64) {3};
org$pandalanguage$pandac$MethodDecl* $tmp1299 = *(&local9);
org$pandalanguage$pandac$Type* $tmp1300 = *(&local23);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type($tmp1297, $tmp1298, $tmp1299, $tmp1300);
org$pandalanguage$pandac$Type* $tmp1301 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp1302 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1301);
org$pandalanguage$pandac$IR$Value* $tmp1303 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1297, $tmp1302);
panda$core$Bit $tmp1304 = panda$core$Bit$init$builtin_bit($tmp1303 != NULL);
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block43; else goto block44;
block44:;
panda$core$Int64 $tmp1306 = (panda$core$Int64) {401};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1307, $tmp1306, &$s1308);
abort(); // unreachable
block43:;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp1295, $tmp1296, param1, $tmp1303);
panda$collections$Array$add$panda$collections$Array$T($tmp1294, ((panda$core$Object*) $tmp1295));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1303));
// unreffing REF($985:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1302));
// unreffing REF($984:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1301));
// unreffing REF($983:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1297));
// unreffing REF($977:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1295));
// unreffing REF($975:org.pandalanguage.pandac.ASTNode)
// line 403
panda$collections$Array* $tmp1309 = *(&local21);
org$pandalanguage$pandac$ASTNode* $tmp1310 = *(&local14);
panda$core$Bit $tmp1311 = panda$core$Bit$init$builtin_bit($tmp1310 != NULL);
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block45; else goto block46;
block46:;
panda$core$Int64 $tmp1313 = (panda$core$Int64) {403};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1314, $tmp1313, &$s1315);
abort(); // unreachable
block45:;
panda$collections$Array$add$panda$collections$Array$T($tmp1309, ((panda$core$Object*) $tmp1310));
// line 404
*(&local24) = ((org$pandalanguage$pandac$Type*) NULL);
// line 405
panda$core$Bit $tmp1316 = *(&local13);
bool $tmp1317 = $tmp1316.value;
if ($tmp1317) goto block47; else goto block49;
block47:;
// line 406
org$pandalanguage$pandac$Type* $tmp1318 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
org$pandalanguage$pandac$Type* $tmp1319 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
*(&local24) = $tmp1318;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
// unreffing REF($1033:org.pandalanguage.pandac.Type)
goto block48;
block49:;
// line 1
// line 409
org$pandalanguage$pandac$Type* $tmp1320 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1320));
org$pandalanguage$pandac$Type* $tmp1321 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1321));
*(&local24) = $tmp1320;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1320));
// unreffing REF($1046:org.pandalanguage.pandac.Type)
goto block48;
block48:;
// line 411
org$pandalanguage$pandac$IR$Value* $tmp1322 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1323 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp1324 = *(&local24);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1322, $tmp1323, $tmp1324);
panda$collections$Array* $tmp1325 = *(&local21);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1326 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1327 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp1326, $tmp1327);
org$pandalanguage$pandac$IR$Value* $tmp1328 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1322, ((panda$collections$ListView*) $tmp1325), $tmp1326);
org$pandalanguage$pandac$MethodDecl* $tmp1329 = *(&local9);
org$pandalanguage$pandac$Type* $tmp1330 = org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type($tmp1329);
org$pandalanguage$pandac$IR$Value* $tmp1331 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1328, $tmp1330);
*(&local25) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1331));
org$pandalanguage$pandac$IR$Value* $tmp1332 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
*(&local25) = $tmp1331;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1331));
// unreffing REF($1070:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1330));
// unreffing REF($1069:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
// unreffing REF($1067:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1326));
// unreffing REF($1064:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1322));
// unreffing REF($1058:org.pandalanguage.pandac.IR.Value)
// line 413
org$pandalanguage$pandac$IR$Value* $tmp1333 = *(&local25);
org$pandalanguage$pandac$IR$Value* $tmp1334 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1333, param6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1334));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1334));
// unreffing REF($1095:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp1335 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1335));
// unreffing construct
*(&local25) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp1336 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1336));
// unreffing methodType
*(&local24) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1337 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1337));
// unreffing irType
*(&local23) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1338 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1338));
// unreffing pandaType
*(&local22) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1339 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1339));
// unreffing args
*(&local21) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1340 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1340));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Stack* $tmp1341 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1341));
// unreffing oldContexts
*(&local12) = ((panda$collections$Stack*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp1342 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1342));
// unreffing methodDecl
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1343 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1343));
// unreffing annotations
*(&local8) = ((org$pandalanguage$pandac$Annotations*) NULL);
org$pandalanguage$pandac$Pair* $tmp1344 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1344));
// unreffing currentCaptures
*(&local7) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Type* $tmp1345 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1345));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1346 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1346));
// unreffing parameters
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1347 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1347));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp1334;

}
void org$pandalanguage$pandac$expression$Closure$init(org$pandalanguage$pandac$expression$Closure* param0) {

return;

}
void org$pandalanguage$pandac$expression$Closure$cleanup(org$pandalanguage$pandac$expression$Closure* param0) {

// line 23
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

