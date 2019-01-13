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

typedef panda$collections$Iterator* (*$fn74)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn78)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn83)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn119)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn165)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn169)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn174)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn325)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn329)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn334)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn427)(panda$core$Object*);
typedef panda$core$Int64 (*$fn468)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn491)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn693)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn716)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn821)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn838)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn842)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn847)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn906)(panda$collections$Iterable*);
typedef panda$core$Object* (*$fn910)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn936)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn940)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn945)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1010)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1071)(panda$collections$MapView*);
typedef panda$collections$Iterator* (*$fn1085)(panda$collections$MapView*);
typedef panda$collections$Array* (*$fn1089)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1100)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn1104)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1109)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65", 43, 1453802055471277369, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6e\x6f\x6e\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x20\x6f\x77\x6e\x65\x72\x20\x66\x6f\x72\x20", 27, -299203061613670049, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x70\x61\x6e\x64\x61", 13, 2590376291811040844, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x70\x61\x6e\x64\x61", 13, 2590376291811040844, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65\x2e\x63\x61\x70\x74\x75\x72\x65\x64\x53\x65\x6c\x66\x54\x79\x70\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 168, 2670359335133534881, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x70\x61\x6e\x64\x61", 13, 2590376291811040844, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65", 9, 1602056911729632975, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x70\x61\x6e\x64\x61", 13, 2590376291811040844, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, -8865909723025372911, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 4248843021992149759, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x70\x61\x6e\x64\x61", 13, 2590376291811040844, NULL };
static panda$core$String $s830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, -6960542561056411676, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, 7783089566661782278, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a", 2, 14198, NULL };
static panda$core$String $s871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 8939304453205542054, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, 1410335929809, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x20", 5, 22706926183, NULL };
static panda$core$String $s878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x70\x61\x6e\x64\x61", 13, 2590376291811040844, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -43704296328153041, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 3323213258965972710, NULL };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x70\x61\x6e\x64\x61", 13, 2590376291811040844, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };

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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp38)));
org$pandalanguage$pandac$ClassDecl* $tmp39 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) $tmp38);
panda$core$Panda$unref$panda$core$Object$Q($tmp38);
// unreffing REF($80:panda.core.Weak.T)
goto block1;
block2:;
panda$core$Bit $tmp40 = panda$core$Bit$init$builtin_bit(false);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp42 = (panda$core$Int64) {25};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s43, $tmp42, &$s44);
abort(); // unreachable
block7:;
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
org$pandalanguage$pandac$Position* $tmp45 = &((org$pandalanguage$pandac$Symbol*) param1)->position;
org$pandalanguage$pandac$Position $tmp46 = *$tmp45;
*(&local0) = $tmp46;
// line 40
org$pandalanguage$pandac$Annotations* $tmp47 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp48 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp47, $tmp48);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
org$pandalanguage$pandac$Annotations** $tmp49 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp50 = *$tmp49;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
org$pandalanguage$pandac$Annotations** $tmp51 = &param1->annotations;
*$tmp51 = $tmp47;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing REF($6:org.pandalanguage.pandac.Annotations)
// line 41
panda$core$Int64* $tmp52 = &param0->closureCount;
panda$core$Int64 $tmp53 = *$tmp52;
panda$core$Int64 $tmp54 = (panda$core$Int64) {1};
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54.value;
int64_t $tmp57 = $tmp55 + $tmp56;
panda$core$Int64 $tmp58 = (panda$core$Int64) {$tmp57};
panda$core$Int64* $tmp59 = &param0->closureCount;
*$tmp59 = $tmp58;
// line 42
panda$collections$Array* $tmp60 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp60);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
panda$collections$Array* $tmp61 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
*(&local1) = $tmp60;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing REF($31:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 43
panda$collections$Stack** $tmp62 = &param0->currentClass;
panda$collections$Stack* $tmp63 = *$tmp62;
panda$core$Int64 $tmp64 = (panda$core$Int64) {0};
panda$core$Object* $tmp65 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp63, $tmp64);
org$pandalanguage$pandac$Type** $tmp66 = &((org$pandalanguage$pandac$ClassDecl*) $tmp65)->type;
org$pandalanguage$pandac$Type* $tmp67 = *$tmp66;
panda$core$Bit $tmp68 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp67);
bool $tmp69 = $tmp68.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp65);
// unreffing REF($49:panda.collections.Stack.T)
if ($tmp69) goto block1; else goto block2;
block1:;
// line 44
panda$collections$Array* $tmp70 = *(&local1);
org$pandalanguage$pandac$Type* $tmp71 = org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp70, ((panda$core$Object*) $tmp71));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing REF($62:org.pandalanguage.pandac.Type)
// line 45
ITable* $tmp72 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp72->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[0];
panda$collections$Iterator* $tmp75 = $tmp73(((panda$collections$Iterable*) param2));
goto block3;
block3:;
ITable* $tmp76 = $tmp75->$class->itable;
while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp76 = $tmp76->next;
}
$fn78 $tmp77 = $tmp76->methods[0];
panda$core$Bit $tmp79 = $tmp77($tmp75);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block5; else goto block4;
block4:;
*(&local2) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
ITable* $tmp81 = $tmp75->$class->itable;
while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[1];
panda$core$Object* $tmp84 = $tmp82($tmp75);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Capture*) $tmp84)));
org$pandalanguage$pandac$Compiler$Capture* $tmp85 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
*(&local2) = ((org$pandalanguage$pandac$Compiler$Capture*) $tmp84);
// line 46
org$pandalanguage$pandac$Compiler$Capture* $tmp86 = *(&local2);
panda$core$Int64* $tmp87 = &$tmp86->$rawValue;
panda$core$Int64 $tmp88 = *$tmp87;
panda$core$Int64 $tmp89 = (panda$core$Int64) {0};
panda$core$Bit $tmp90 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp88, $tmp89);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Variable** $tmp92 = (org$pandalanguage$pandac$Variable**) ($tmp86->$data + 0);
org$pandalanguage$pandac$Variable* $tmp93 = *$tmp92;
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
org$pandalanguage$pandac$Variable* $tmp94 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
*(&local3) = $tmp93;
// line 48
org$pandalanguage$pandac$Variable* $tmp95 = *(&local3);
org$pandalanguage$pandac$Type** $tmp96 = &$tmp95->type;
org$pandalanguage$pandac$Type* $tmp97 = *$tmp96;
panda$core$Bit $tmp98 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp97);
panda$core$Bit $tmp99 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp98);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block9; else goto block10;
block9:;
// line 49
panda$collections$Array* $tmp101 = *(&local1);
panda$collections$Array$clear($tmp101);
// line 50
org$pandalanguage$pandac$Variable* $tmp102 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing v
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp84);
// unreffing REF($83:panda.collections.Iterator.T)
org$pandalanguage$pandac$Compiler$Capture* $tmp103 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing c
*(&local2) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
goto block5;
block10:;
org$pandalanguage$pandac$Variable* $tmp104 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing v
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block6;
block8:;
panda$core$Int64 $tmp105 = (panda$core$Int64) {2};
panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp88, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block11; else goto block12;
block11:;
// line 54
org$pandalanguage$pandac$Type* $tmp108 = org$pandalanguage$pandac$expression$Closure$capturedSelfType$org$pandalanguage$pandac$Compiler$R$org$pandalanguage$pandac$Type(param0);
panda$core$Bit $tmp109 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp108);
panda$core$Bit $tmp110 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp109);
bool $tmp111 = $tmp110.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing REF($146:org.pandalanguage.pandac.Type)
if ($tmp111) goto block13; else goto block14;
block13:;
// line 55
panda$collections$Array* $tmp112 = *(&local1);
panda$collections$Array$clear($tmp112);
// line 56
panda$core$Panda$unref$panda$core$Object$Q($tmp84);
// unreffing REF($83:panda.collections.Iterator.T)
org$pandalanguage$pandac$Compiler$Capture* $tmp113 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
// unreffing c
*(&local2) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
goto block5;
block14:;
goto block6;
block12:;
// line 60
panda$core$Bit $tmp114 = panda$core$Bit$init$builtin_bit(false);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp116 = (panda$core$Int64) {60};
org$pandalanguage$pandac$Compiler$Capture* $tmp117 = *(&local2);
$fn119 $tmp118 = ($fn119) ((panda$core$Object*) $tmp117)->$class->vtable[0];
panda$core$String* $tmp120 = $tmp118(((panda$core$Object*) $tmp117));
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s121, $tmp116, $tmp120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing REF($177:panda.core.String)
abort(); // unreachable
block15:;
goto block6;
block6:;
panda$core$Panda$unref$panda$core$Object$Q($tmp84);
// unreffing REF($83:panda.collections.Iterator.T)
org$pandalanguage$pandac$Compiler$Capture* $tmp122 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
// unreffing c
*(&local2) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($72:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block2;
block2:;
// line 65
org$pandalanguage$pandac$ClassDecl* $tmp123 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
panda$collections$Stack** $tmp124 = &param0->currentClass;
panda$collections$Stack* $tmp125 = *$tmp124;
panda$core$Int64 $tmp126 = (panda$core$Int64) {0};
panda$core$Object* $tmp127 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp125, $tmp126);
panda$io$File** $tmp128 = &((org$pandalanguage$pandac$ClassDecl*) $tmp127)->source;
panda$io$File* $tmp129 = *$tmp128;
org$pandalanguage$pandac$Position $tmp130 = *(&local0);
panda$collections$HashMap* $tmp131 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp131);
org$pandalanguage$pandac$Annotations* $tmp132 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp133 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp132, $tmp133);
panda$core$Int64 $tmp134 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp135 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp134);
panda$collections$Stack** $tmp136 = &param0->currentClass;
panda$collections$Stack* $tmp137 = *$tmp136;
panda$core$Int64 $tmp138 = (panda$core$Int64) {0};
panda$core$Object* $tmp139 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp137, $tmp138);
panda$core$String** $tmp140 = &((org$pandalanguage$pandac$ClassDecl*) $tmp139)->name;
panda$core$String* $tmp141 = *$tmp140;
panda$core$String* $tmp142 = panda$core$String$convert$R$panda$core$String($tmp141);
panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp142, &$s144);
panda$core$Int64* $tmp145 = &param0->closureCount;
panda$core$Int64 $tmp146 = *$tmp145;
panda$core$Int64$wrapper* $tmp147;
$tmp147 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp147->value = $tmp146;
panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp143, ((panda$core$Object*) $tmp147));
panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp148, &$s150);
panda$collections$Array* $tmp151 = *(&local1);
panda$collections$Array* $tmp152 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp152);
org$pandalanguage$pandac$SymbolTable** $tmp153 = &param0->root;
org$pandalanguage$pandac$SymbolTable* $tmp154 = *$tmp153;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp123, $tmp129, $tmp130, ((panda$collections$MapView*) $tmp131), ((panda$core$String*) NULL), $tmp132, $tmp135, $tmp149, ((panda$collections$ListView*) $tmp151), $tmp152, $tmp154);
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
org$pandalanguage$pandac$ClassDecl* $tmp155 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
*(&local4) = $tmp123;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing REF($234:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
// unreffing REF($231:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
// unreffing REF($230:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// unreffing REF($229:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
// unreffing REF($226:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing REF($225:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp139);
// unreffing REF($221:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing REF($212:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($208:panda.collections.HashMap<panda.core.String, panda.core.String>)
panda$core$Panda$unref$panda$core$Object$Q($tmp127);
// unreffing REF($203:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
// unreffing REF($198:org.pandalanguage.pandac.ClassDecl)
// line 69
org$pandalanguage$pandac$ClassDecl* $tmp156 = *(&local4);
panda$core$Bit $tmp157 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp158 = &$tmp156->external;
*$tmp158 = $tmp157;
// line 72
panda$collections$Array* $tmp159 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp159);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
panda$collections$Array* $tmp160 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
*(&local5) = $tmp159;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
// unreffing REF($286:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 73
panda$collections$Array* $tmp161 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp161);
*(&local6) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
panda$collections$Array* $tmp162 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
*(&local6) = $tmp161;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// unreffing REF($300:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
// line 74
ITable* $tmp163 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[0];
panda$collections$Iterator* $tmp166 = $tmp164(((panda$collections$Iterable*) param2));
goto block17;
block17:;
ITable* $tmp167 = $tmp166->$class->itable;
while ($tmp167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp167 = $tmp167->next;
}
$fn169 $tmp168 = $tmp167->methods[0];
panda$core$Bit $tmp170 = $tmp168($tmp166);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block19; else goto block18;
block18:;
*(&local7) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
ITable* $tmp172 = $tmp166->$class->itable;
while ($tmp172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp172 = $tmp172->next;
}
$fn174 $tmp173 = $tmp172->methods[1];
panda$core$Object* $tmp175 = $tmp173($tmp166);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Capture*) $tmp175)));
org$pandalanguage$pandac$Compiler$Capture* $tmp176 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
*(&local7) = ((org$pandalanguage$pandac$Compiler$Capture*) $tmp175);
// line 75
org$pandalanguage$pandac$Compiler$Capture* $tmp177 = *(&local7);
panda$core$Int64* $tmp178 = &$tmp177->$rawValue;
panda$core$Int64 $tmp179 = *$tmp178;
panda$core$Int64 $tmp180 = (panda$core$Int64) {0};
panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp179, $tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block21; else goto block22;
block21:;
org$pandalanguage$pandac$Variable** $tmp183 = (org$pandalanguage$pandac$Variable**) ($tmp177->$data + 0);
org$pandalanguage$pandac$Variable* $tmp184 = *$tmp183;
*(&local8) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
org$pandalanguage$pandac$Variable* $tmp185 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
*(&local8) = $tmp184;
// line 77
panda$collections$Array* $tmp186 = *(&local6);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp187 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
org$pandalanguage$pandac$Variable* $tmp188 = *(&local8);
panda$core$String** $tmp189 = &((org$pandalanguage$pandac$Symbol*) $tmp188)->name;
panda$core$String* $tmp190 = *$tmp189;
org$pandalanguage$pandac$Variable* $tmp191 = *(&local8);
org$pandalanguage$pandac$Type** $tmp192 = &$tmp191->type;
org$pandalanguage$pandac$Type* $tmp193 = *$tmp192;
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp187, $tmp190, $tmp193);
panda$collections$Array$add$panda$collections$Array$T($tmp186, ((panda$core$Object*) $tmp187));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
// unreffing REF($356:org.pandalanguage.pandac.MethodDecl.Parameter)
// line 79
panda$collections$Array* $tmp194 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp195 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp196 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Position $tmp197 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp198 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp199 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Position $tmp200 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp201 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp202 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp203 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp201, $tmp202, $tmp203, &$s204);
org$pandalanguage$pandac$Variable* $tmp205 = *(&local8);
panda$core$String** $tmp206 = &((org$pandalanguage$pandac$Symbol*) $tmp205)->name;
panda$core$String* $tmp207 = *$tmp206;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp198, $tmp199, $tmp200, $tmp201, $tmp207);
panda$core$Int64 $tmp208 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp209 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp208);
org$pandalanguage$pandac$ASTNode* $tmp210 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp211 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp212 = *(&local0);
org$pandalanguage$pandac$Variable* $tmp213 = *(&local8);
panda$core$String** $tmp214 = &((org$pandalanguage$pandac$Symbol*) $tmp213)->name;
panda$core$String* $tmp215 = *$tmp214;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp210, $tmp211, $tmp212, $tmp215);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp195, $tmp196, $tmp197, $tmp198, $tmp209, $tmp210);
panda$collections$Array$add$panda$collections$Array$T($tmp194, ((panda$core$Object*) $tmp195));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
// unreffing REF($390:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing REF($379:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing REF($376:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing REF($373:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$Variable* $tmp216 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
// unreffing v
*(&local8) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block20;
block22:;
panda$core$Int64 $tmp217 = (panda$core$Int64) {1};
panda$core$Bit $tmp218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp179, $tmp217);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block23; else goto block24;
block23:;
org$pandalanguage$pandac$FieldDecl** $tmp220 = (org$pandalanguage$pandac$FieldDecl**) ($tmp177->$data + 0);
org$pandalanguage$pandac$FieldDecl* $tmp221 = *$tmp220;
*(&local9) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
org$pandalanguage$pandac$FieldDecl* $tmp222 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
*(&local9) = $tmp221;
// line 85
panda$collections$Array* $tmp223 = *(&local6);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp224 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
org$pandalanguage$pandac$FieldDecl* $tmp225 = *(&local9);
panda$core$String** $tmp226 = &((org$pandalanguage$pandac$Symbol*) $tmp225)->name;
panda$core$String* $tmp227 = *$tmp226;
org$pandalanguage$pandac$FieldDecl* $tmp228 = *(&local9);
org$pandalanguage$pandac$Type** $tmp229 = &$tmp228->type;
org$pandalanguage$pandac$Type* $tmp230 = *$tmp229;
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp224, $tmp227, $tmp230);
panda$collections$Array$add$panda$collections$Array$T($tmp223, ((panda$core$Object*) $tmp224));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
// unreffing REF($435:org.pandalanguage.pandac.MethodDecl.Parameter)
// line 87
panda$collections$Array* $tmp231 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp232 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp233 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Position $tmp234 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp235 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp236 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Position $tmp237 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp238 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp239 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp240 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp238, $tmp239, $tmp240, &$s241);
org$pandalanguage$pandac$FieldDecl* $tmp242 = *(&local9);
panda$core$String** $tmp243 = &((org$pandalanguage$pandac$Symbol*) $tmp242)->name;
panda$core$String* $tmp244 = *$tmp243;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp235, $tmp236, $tmp237, $tmp238, $tmp244);
panda$core$Int64 $tmp245 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp246 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp245);
org$pandalanguage$pandac$ASTNode* $tmp247 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp248 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp249 = *(&local0);
org$pandalanguage$pandac$FieldDecl* $tmp250 = *(&local9);
panda$core$String** $tmp251 = &((org$pandalanguage$pandac$Symbol*) $tmp250)->name;
panda$core$String* $tmp252 = *$tmp251;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp247, $tmp248, $tmp249, $tmp252);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp232, $tmp233, $tmp234, $tmp235, $tmp246, $tmp247);
panda$collections$Array$add$panda$collections$Array$T($tmp231, ((panda$core$Object*) $tmp232));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// unreffing REF($469:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing REF($458:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// unreffing REF($455:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($452:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FieldDecl* $tmp253 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
// unreffing f
*(&local9) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block20;
block24:;
panda$core$Int64 $tmp254 = (panda$core$Int64) {2};
panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp179, $tmp254);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block25; else goto block20;
block25:;
// line 93
panda$collections$Array* $tmp257 = *(&local6);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp258 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
org$pandalanguage$pandac$Type* $tmp259 = org$pandalanguage$pandac$expression$Closure$capturedSelfType$org$pandalanguage$pandac$Compiler$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp258, &$s260, $tmp259);
panda$collections$Array$add$panda$collections$Array$T($tmp257, ((panda$core$Object*) $tmp258));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
// unreffing REF($506:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing REF($505:org.pandalanguage.pandac.MethodDecl.Parameter)
// line 96
panda$collections$Array* $tmp261 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp262 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp263 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Position $tmp264 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp265 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp266 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Position $tmp267 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp268 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp269 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp270 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp268, $tmp269, $tmp270, &$s271);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp265, $tmp266, $tmp267, $tmp268, &$s272);
panda$core$Int64 $tmp273 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp274 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp273);
org$pandalanguage$pandac$ASTNode* $tmp275 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp276 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp277 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp275, $tmp276, $tmp277, &$s278);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp262, $tmp263, $tmp264, $tmp265, $tmp274, $tmp275);
panda$collections$Array$add$panda$collections$Array$T($tmp261, ((panda$core$Object*) $tmp262));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
// unreffing REF($532:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing REF($525:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing REF($522:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// unreffing REF($519:org.pandalanguage.pandac.ASTNode)
goto block20;
block20:;
panda$core$Panda$unref$panda$core$Object$Q($tmp175);
// unreffing REF($328:panda.collections.Iterator.T)
org$pandalanguage$pandac$Compiler$Capture* $tmp279 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
// unreffing c
*(&local7) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
goto block17;
block19:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
// unreffing REF($317:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 104
org$pandalanguage$pandac$MethodDecl* $tmp280 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp281 = *(&local4);
org$pandalanguage$pandac$Position $tmp282 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp283 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp284 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp283, $tmp284);
panda$core$Int64 $tmp285 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp286 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp285);
panda$collections$Array* $tmp287 = *(&local6);
org$pandalanguage$pandac$Type* $tmp288 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$Array* $tmp289 = *(&local5);
org$pandalanguage$pandac$FixedArray* $tmp290 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp289);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp280, $tmp281, $tmp282, ((panda$core$String*) NULL), $tmp283, $tmp286, &$s291, ((panda$collections$Array*) NULL), $tmp287, $tmp288, $tmp290);
*(&local10) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
org$pandalanguage$pandac$MethodDecl* $tmp292 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
*(&local10) = $tmp280;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
// unreffing REF($577:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
// unreffing REF($574:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
// unreffing REF($568:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
// unreffing REF($565:org.pandalanguage.pandac.MethodDecl)
// line 108
org$pandalanguage$pandac$ClassDecl* $tmp293 = *(&local4);
panda$collections$Array** $tmp294 = &$tmp293->methods;
panda$collections$Array* $tmp295 = *$tmp294;
org$pandalanguage$pandac$MethodDecl* $tmp296 = *(&local10);
panda$collections$Array$add$panda$collections$Array$T($tmp295, ((panda$core$Object*) $tmp296));
// line 109
org$pandalanguage$pandac$ClassDecl* $tmp297 = *(&local4);
org$pandalanguage$pandac$SymbolTable** $tmp298 = &$tmp297->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp299 = *$tmp298;
org$pandalanguage$pandac$MethodDecl* $tmp300 = *(&local10);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp299, ((org$pandalanguage$pandac$Symbol*) $tmp300));
// line 112
org$pandalanguage$pandac$MethodDecl* $tmp301 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp302 = *(&local4);
org$pandalanguage$pandac$Position $tmp303 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp304 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp305 = (panda$core$Int64) {32};
panda$core$Int64 $tmp306 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp307 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp305, $tmp306);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp304, $tmp307);
panda$core$Int64 $tmp308 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp309 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp308);
panda$collections$Array* $tmp310 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp310);
org$pandalanguage$pandac$Type* $tmp311 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FixedArray* $tmp312 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp312);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp301, $tmp302, $tmp303, ((panda$core$String*) NULL), $tmp304, $tmp309, &$s313, ((panda$collections$Array*) NULL), $tmp310, $tmp311, $tmp312);
*(&local11) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
org$pandalanguage$pandac$MethodDecl* $tmp314 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
*(&local11) = $tmp301;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
// unreffing REF($630:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
// unreffing REF($629:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
// unreffing REF($626:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
// unreffing REF($619:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
// unreffing REF($616:org.pandalanguage.pandac.MethodDecl)
// line 116
org$pandalanguage$pandac$ClassDecl* $tmp315 = *(&local4);
panda$collections$Array** $tmp316 = &$tmp315->methods;
panda$collections$Array* $tmp317 = *$tmp316;
org$pandalanguage$pandac$MethodDecl* $tmp318 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp317, ((panda$core$Object*) $tmp318));
// line 117
org$pandalanguage$pandac$ClassDecl* $tmp319 = *(&local4);
org$pandalanguage$pandac$SymbolTable** $tmp320 = &$tmp319->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp321 = *$tmp320;
org$pandalanguage$pandac$MethodDecl* $tmp322 = *(&local11);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp321, ((org$pandalanguage$pandac$Symbol*) $tmp322));
// line 120
ITable* $tmp323 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp323->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp323 = $tmp323->next;
}
$fn325 $tmp324 = $tmp323->methods[0];
panda$collections$Iterator* $tmp326 = $tmp324(((panda$collections$Iterable*) param2));
goto block26;
block26:;
ITable* $tmp327 = $tmp326->$class->itable;
while ($tmp327->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[0];
panda$core$Bit $tmp330 = $tmp328($tmp326);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block28; else goto block27;
block27:;
*(&local12) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
ITable* $tmp332 = $tmp326->$class->itable;
while ($tmp332->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp332 = $tmp332->next;
}
$fn334 $tmp333 = $tmp332->methods[1];
panda$core$Object* $tmp335 = $tmp333($tmp326);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Capture*) $tmp335)));
org$pandalanguage$pandac$Compiler$Capture* $tmp336 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
*(&local12) = ((org$pandalanguage$pandac$Compiler$Capture*) $tmp335);
// line 121
org$pandalanguage$pandac$Compiler$Capture* $tmp337 = *(&local12);
panda$core$Int64* $tmp338 = &$tmp337->$rawValue;
panda$core$Int64 $tmp339 = *$tmp338;
panda$core$Int64 $tmp340 = (panda$core$Int64) {0};
panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp339, $tmp340);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Variable** $tmp343 = (org$pandalanguage$pandac$Variable**) ($tmp337->$data + 0);
org$pandalanguage$pandac$Variable* $tmp344 = *$tmp343;
*(&local13) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
org$pandalanguage$pandac$Variable* $tmp345 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
*(&local13) = $tmp344;
// line 123
org$pandalanguage$pandac$FieldDecl* $tmp346 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp347 = *(&local4);
org$pandalanguage$pandac$Position $tmp348 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp349 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp350 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp349, $tmp350);
panda$core$Int64 $tmp351 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp352 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp351);
org$pandalanguage$pandac$Variable* $tmp353 = *(&local13);
panda$core$String** $tmp354 = &((org$pandalanguage$pandac$Symbol*) $tmp353)->name;
panda$core$String* $tmp355 = *$tmp354;
org$pandalanguage$pandac$Variable* $tmp356 = *(&local13);
org$pandalanguage$pandac$Type** $tmp357 = &$tmp356->type;
org$pandalanguage$pandac$Type* $tmp358 = *$tmp357;
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp346, $tmp347, $tmp348, ((panda$core$String*) NULL), $tmp349, $tmp352, $tmp355, $tmp358, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
org$pandalanguage$pandac$FieldDecl* $tmp359 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
*(&local14) = $tmp346;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
// unreffing REF($716:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
// unreffing REF($713:org.pandalanguage.pandac.FieldDecl)
// line 126
org$pandalanguage$pandac$ClassDecl* $tmp360 = *(&local4);
org$pandalanguage$pandac$SymbolTable** $tmp361 = &$tmp360->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp362 = *$tmp361;
org$pandalanguage$pandac$FieldDecl* $tmp363 = *(&local14);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp362, ((org$pandalanguage$pandac$Symbol*) $tmp363));
// line 127
org$pandalanguage$pandac$ClassDecl* $tmp364 = *(&local4);
panda$collections$Array** $tmp365 = &$tmp364->fields;
panda$collections$Array* $tmp366 = *$tmp365;
org$pandalanguage$pandac$FieldDecl* $tmp367 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp366, ((panda$core$Object*) $tmp367));
org$pandalanguage$pandac$FieldDecl* $tmp368 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
// unreffing field
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$Variable* $tmp369 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
// unreffing v
*(&local13) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block29;
block31:;
panda$core$Int64 $tmp370 = (panda$core$Int64) {1};
panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp339, $tmp370);
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$FieldDecl** $tmp373 = (org$pandalanguage$pandac$FieldDecl**) ($tmp337->$data + 0);
org$pandalanguage$pandac$FieldDecl* $tmp374 = *$tmp373;
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
org$pandalanguage$pandac$FieldDecl* $tmp375 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
*(&local15) = $tmp374;
// line 130
org$pandalanguage$pandac$FieldDecl* $tmp376 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp377 = *(&local4);
org$pandalanguage$pandac$Position $tmp378 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp379 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp380 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp379, $tmp380);
panda$core$Int64 $tmp381 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp382 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp381);
org$pandalanguage$pandac$FieldDecl* $tmp383 = *(&local15);
panda$core$String** $tmp384 = &((org$pandalanguage$pandac$Symbol*) $tmp383)->name;
panda$core$String* $tmp385 = *$tmp384;
org$pandalanguage$pandac$FieldDecl* $tmp386 = *(&local15);
org$pandalanguage$pandac$Type** $tmp387 = &$tmp386->type;
org$pandalanguage$pandac$Type* $tmp388 = *$tmp387;
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp376, $tmp377, $tmp378, ((panda$core$String*) NULL), $tmp379, $tmp382, $tmp385, $tmp388, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
org$pandalanguage$pandac$FieldDecl* $tmp389 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
*(&local16) = $tmp376;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
// unreffing REF($785:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
// unreffing REF($782:org.pandalanguage.pandac.FieldDecl)
// line 133
org$pandalanguage$pandac$ClassDecl* $tmp390 = *(&local4);
org$pandalanguage$pandac$SymbolTable** $tmp391 = &$tmp390->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp392 = *$tmp391;
org$pandalanguage$pandac$FieldDecl* $tmp393 = *(&local16);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp392, ((org$pandalanguage$pandac$Symbol*) $tmp393));
// line 134
org$pandalanguage$pandac$ClassDecl* $tmp394 = *(&local4);
panda$collections$Array** $tmp395 = &$tmp394->fields;
panda$collections$Array* $tmp396 = *$tmp395;
org$pandalanguage$pandac$FieldDecl* $tmp397 = *(&local16);
panda$collections$Array$add$panda$collections$Array$T($tmp396, ((panda$core$Object*) $tmp397));
org$pandalanguage$pandac$FieldDecl* $tmp398 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
// unreffing field
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp399 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
// unreffing f
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block29;
block33:;
panda$core$Int64 $tmp400 = (panda$core$Int64) {2};
panda$core$Bit $tmp401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp339, $tmp400);
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block34; else goto block35;
block34:;
// line 137
org$pandalanguage$pandac$FieldDecl* $tmp403 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp404 = *(&local4);
org$pandalanguage$pandac$Position $tmp405 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp406 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp407 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp406, $tmp407);
panda$core$Int64 $tmp408 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp409 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp408);
org$pandalanguage$pandac$Type* $tmp410 = org$pandalanguage$pandac$expression$Closure$capturedSelfType$org$pandalanguage$pandac$Compiler$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp403, $tmp404, $tmp405, ((panda$core$String*) NULL), $tmp406, $tmp409, &$s411, $tmp410, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local17) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
org$pandalanguage$pandac$FieldDecl* $tmp412 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp412));
*(&local17) = $tmp403;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
// unreffing REF($850:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
// unreffing REF($845:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing REF($842:org.pandalanguage.pandac.FieldDecl)
// line 140
org$pandalanguage$pandac$ClassDecl* $tmp413 = *(&local4);
org$pandalanguage$pandac$SymbolTable** $tmp414 = &$tmp413->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp415 = *$tmp414;
org$pandalanguage$pandac$FieldDecl* $tmp416 = *(&local17);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp415, ((org$pandalanguage$pandac$Symbol*) $tmp416));
// line 141
org$pandalanguage$pandac$ClassDecl* $tmp417 = *(&local4);
panda$collections$Array** $tmp418 = &$tmp417->fields;
panda$collections$Array* $tmp419 = *$tmp418;
org$pandalanguage$pandac$FieldDecl* $tmp420 = *(&local17);
panda$collections$Array$add$panda$collections$Array$T($tmp419, ((panda$core$Object*) $tmp420));
org$pandalanguage$pandac$FieldDecl* $tmp421 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp421));
// unreffing field
*(&local17) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block29;
block35:;
// line 144
panda$core$Bit $tmp422 = panda$core$Bit$init$builtin_bit(false);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp424 = (panda$core$Int64) {144};
org$pandalanguage$pandac$Compiler$Capture* $tmp425 = *(&local12);
$fn427 $tmp426 = ($fn427) ((panda$core$Object*) $tmp425)->$class->vtable[0];
panda$core$String* $tmp428 = $tmp426(((panda$core$Object*) $tmp425));
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s429, $tmp424, $tmp428);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
// unreffing REF($897:panda.core.String)
abort(); // unreachable
block36:;
goto block29;
block29:;
panda$core$Panda$unref$panda$core$Object$Q($tmp335);
// unreffing REF($687:panda.collections.Iterator.T)
org$pandalanguage$pandac$Compiler$Capture* $tmp430 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
// unreffing c
*(&local12) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
goto block26;
block28:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
// unreffing REF($676:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 148
org$pandalanguage$pandac$ClassDecl* $tmp431 = *(&local4);
panda$core$Weak* $tmp432 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp432, ((panda$core$Object*) $tmp431));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
panda$core$Weak** $tmp433 = &param1->owner;
panda$core$Weak* $tmp434 = *$tmp433;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
panda$core$Weak** $tmp435 = &param1->owner;
*$tmp435 = $tmp432;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
// unreffing REF($918:panda.core.Weak<org.pandalanguage.pandac.ClassDecl>)
// line 149
org$pandalanguage$pandac$ClassDecl* $tmp436 = *(&local4);
panda$collections$Array** $tmp437 = &$tmp436->methods;
panda$collections$Array* $tmp438 = *$tmp437;
panda$collections$Array$add$panda$collections$Array$T($tmp438, ((panda$core$Object*) param1));
// line 150
panda$collections$HashMap** $tmp439 = &param0->classes;
panda$collections$HashMap* $tmp440 = *$tmp439;
org$pandalanguage$pandac$ClassDecl* $tmp441 = *(&local4);
panda$core$String** $tmp442 = &$tmp441->name;
panda$core$String* $tmp443 = *$tmp442;
org$pandalanguage$pandac$ClassDecl* $tmp444 = *(&local4);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp440, ((panda$collections$Key*) $tmp443), ((panda$core$Object*) $tmp444));
// line 151
org$pandalanguage$pandac$ClassDecl* $tmp445 = *(&local4);
panda$collections$Stack** $tmp446 = &param0->currentClass;
panda$collections$Stack* $tmp447 = *$tmp446;
panda$core$Int64 $tmp448 = (panda$core$Int64) {0};
panda$core$Object* $tmp449 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp447, $tmp448);
panda$core$Weak* $tmp450 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp450, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp449)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
panda$core$Weak** $tmp451 = &$tmp445->owner;
panda$core$Weak* $tmp452 = *$tmp451;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
panda$core$Weak** $tmp453 = &$tmp445->owner;
*$tmp453 = $tmp450;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
// unreffing REF($960:panda.core.Weak<org.pandalanguage.pandac.ClassDecl?>)
panda$core$Panda$unref$panda$core$Object$Q($tmp449);
// unreffing REF($957:panda.collections.Stack.T)
// line 152
org$pandalanguage$pandac$ClassDecl* $tmp454 = *(&local4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
org$pandalanguage$pandac$MethodDecl* $tmp455 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
// unreffing defaultCleanup
*(&local11) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp456 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
// unreffing initMethod
*(&local10) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$collections$Array* $tmp457 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
// unreffing parameters
*(&local6) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp458 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp458));
// unreffing statements
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp459 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing result
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp460 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
// unreffing supers
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp454;

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
org$pandalanguage$pandac$Compiler$AutoScope* $tmp461 = (org$pandalanguage$pandac$Compiler$AutoScope*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp461, param0);
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp462 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
*(&local0) = $tmp461;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
// unreffing REF($1:org.pandalanguage.pandac.Compiler.AutoScope)
// line 159
panda$collections$Array* $tmp463 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp463);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
panda$collections$Array* $tmp464 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
*(&local1) = $tmp463;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
// unreffing REF($14:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 160
panda$core$Int64 $tmp465 = (panda$core$Int64) {0};
ITable* $tmp466 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp466->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp466 = $tmp466->next;
}
$fn468 $tmp467 = $tmp466->methods[0];
panda$core$Int64 $tmp469 = $tmp467(((panda$collections$CollectionView*) param1));
panda$core$Bit $tmp470 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp471 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp465, $tmp469, $tmp470);
panda$core$Int64 $tmp472 = $tmp471.min;
*(&local2) = $tmp472;
panda$core$Int64 $tmp473 = $tmp471.max;
panda$core$Bit $tmp474 = $tmp471.inclusive;
bool $tmp475 = $tmp474.value;
panda$core$Int64 $tmp476 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp477 = panda$core$Int64$convert$R$panda$core$UInt64($tmp476);
if ($tmp475) goto block4; else goto block5;
block4:;
int64_t $tmp478 = $tmp472.value;
int64_t $tmp479 = $tmp473.value;
bool $tmp480 = $tmp478 <= $tmp479;
panda$core$Bit $tmp481 = (panda$core$Bit) {$tmp480};
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block1; else goto block2;
block5:;
int64_t $tmp483 = $tmp472.value;
int64_t $tmp484 = $tmp473.value;
bool $tmp485 = $tmp483 < $tmp484;
panda$core$Bit $tmp486 = (panda$core$Bit) {$tmp485};
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block1; else goto block2;
block1:;
// line 161
panda$core$Int64 $tmp488 = *(&local2);
ITable* $tmp489 = param1->$class->itable;
while ($tmp489->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp489 = $tmp489->next;
}
$fn491 $tmp490 = $tmp489->methods[0];
panda$core$Object* $tmp492 = $tmp490(param1, $tmp488);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp492)));
org$pandalanguage$pandac$ASTNode* $tmp493 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) $tmp492);
panda$core$Panda$unref$panda$core$Object$Q($tmp492);
// unreffing REF($58:panda.collections.ListView.T)
// line 162
org$pandalanguage$pandac$ASTNode* $tmp494 = *(&local3);
panda$core$Int64* $tmp495 = &$tmp494->$rawValue;
panda$core$Int64 $tmp496 = *$tmp495;
panda$core$Int64 $tmp497 = (panda$core$Int64) {34};
panda$core$Bit $tmp498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp496, $tmp497);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block7; else goto block6;
block7:;
org$pandalanguage$pandac$Position* $tmp500 = (org$pandalanguage$pandac$Position*) ($tmp494->$data + 0);
org$pandalanguage$pandac$Position $tmp501 = *$tmp500;
*(&local4) = $tmp501;
panda$core$String** $tmp502 = (panda$core$String**) ($tmp494->$data + 16);
panda$core$String* $tmp503 = *$tmp502;
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
panda$core$String* $tmp504 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
*(&local5) = $tmp503;
org$pandalanguage$pandac$ASTNode** $tmp505 = (org$pandalanguage$pandac$ASTNode**) ($tmp494->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp506 = *$tmp505;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp506));
org$pandalanguage$pandac$ASTNode* $tmp507 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
*(&local6) = $tmp506;
// line 164
org$pandalanguage$pandac$Scanner** $tmp508 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp509 = *$tmp508;
org$pandalanguage$pandac$ASTNode* $tmp510 = *(&local6);
org$pandalanguage$pandac$Type* $tmp511 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp509, $tmp510);
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
org$pandalanguage$pandac$Type* $tmp512 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
*(&local7) = $tmp511;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
// unreffing REF($103:org.pandalanguage.pandac.Type)
// line 165
org$pandalanguage$pandac$Type* $tmp513 = *(&local7);
panda$core$Bit $tmp514 = panda$core$Bit$init$builtin_bit(false);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block8; else goto block9;
block8:;
// line 166
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) NULL)));
org$pandalanguage$pandac$Type* $tmp516 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
// unreffing type
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp517 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
// unreffing rawType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp518 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp519 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
// unreffing p
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp520 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
// unreffing parameterTypes
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp521 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
// unreffing scope
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
return ((org$pandalanguage$pandac$Type*) NULL);
block9:;
// line 168
org$pandalanguage$pandac$Type* $tmp522 = *(&local7);
org$pandalanguage$pandac$Type* $tmp523 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, $tmp522);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
org$pandalanguage$pandac$Type* $tmp524 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
*(&local7) = $tmp523;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing REF($155:org.pandalanguage.pandac.Type?)
// line 169
org$pandalanguage$pandac$Type* $tmp525 = *(&local7);
panda$core$Bit $tmp526 = panda$core$Bit$init$builtin_bit(false);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block10; else goto block11;
block10:;
// line 170
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) NULL)));
org$pandalanguage$pandac$Type* $tmp528 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
// unreffing type
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp529 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
// unreffing rawType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp530 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp531 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
// unreffing p
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp532 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
// unreffing parameterTypes
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp533 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
// unreffing scope
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
return ((org$pandalanguage$pandac$Type*) NULL);
block11:;
// line 172
panda$collections$Array* $tmp534 = *(&local1);
org$pandalanguage$pandac$Type* $tmp535 = *(&local7);
panda$collections$Array$add$panda$collections$Array$T($tmp534, ((panda$core$Object*) $tmp535));
// line 173
org$pandalanguage$pandac$SymbolTable** $tmp536 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp537 = *$tmp536;
org$pandalanguage$pandac$Variable* $tmp538 = (org$pandalanguage$pandac$Variable*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Variable$class);
org$pandalanguage$pandac$Position $tmp539 = *(&local4);
panda$core$Int64 $tmp540 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp541 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp540);
panda$core$String* $tmp542 = *(&local5);
org$pandalanguage$pandac$Type* $tmp543 = *(&local7);
org$pandalanguage$pandac$Variable$Storage* $tmp544 = (org$pandalanguage$pandac$Variable$Storage*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Variable$Storage$class);
panda$core$Int64 $tmp545 = (panda$core$Int64) {1};
panda$core$Int64 $tmp546 = (panda$core$Int64) {18446744073709551615};
org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64$panda$core$Int64($tmp544, $tmp545, $tmp546);
org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage($tmp538, $tmp539, $tmp541, $tmp542, $tmp543, $tmp544);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp537, ((org$pandalanguage$pandac$Symbol*) $tmp538));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
// unreffing REF($220:org.pandalanguage.pandac.Variable.Storage)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
// unreffing REF($214:org.pandalanguage.pandac.Variable)
org$pandalanguage$pandac$Type* $tmp547 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing type
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp548 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
// unreffing rawType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp549 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block6;
block6:;
org$pandalanguage$pandac$ASTNode* $tmp550 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
// unreffing p
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block3:;
panda$core$Int64 $tmp551 = *(&local2);
int64_t $tmp552 = $tmp473.value;
int64_t $tmp553 = $tmp551.value;
int64_t $tmp554 = $tmp552 - $tmp553;
panda$core$Int64 $tmp555 = (panda$core$Int64) {$tmp554};
panda$core$UInt64 $tmp556 = panda$core$Int64$convert$R$panda$core$UInt64($tmp555);
if ($tmp475) goto block13; else goto block14;
block13:;
uint64_t $tmp557 = $tmp556.value;
uint64_t $tmp558 = $tmp477.value;
bool $tmp559 = $tmp557 >= $tmp558;
panda$core$Bit $tmp560 = (panda$core$Bit) {$tmp559};
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block12; else goto block2;
block14:;
uint64_t $tmp562 = $tmp556.value;
uint64_t $tmp563 = $tmp477.value;
bool $tmp564 = $tmp562 > $tmp563;
panda$core$Bit $tmp565 = (panda$core$Bit) {$tmp564};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block12; else goto block2;
block12:;
int64_t $tmp567 = $tmp551.value;
int64_t $tmp568 = $tmp476.value;
int64_t $tmp569 = $tmp567 + $tmp568;
panda$core$Int64 $tmp570 = (panda$core$Int64) {$tmp569};
*(&local2) = $tmp570;
goto block1;
block2:;
// line 178
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
// line 179
panda$core$Int64* $tmp571 = &param3->$rawValue;
panda$core$Int64 $tmp572 = *$tmp571;
panda$core$Int64 $tmp573 = (panda$core$Int64) {3};
panda$core$Bit $tmp574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp572, $tmp573);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Type** $tmp576 = (org$pandalanguage$pandac$Type**) (param3->$data + 0);
org$pandalanguage$pandac$Type* $tmp577 = *$tmp576;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
org$pandalanguage$pandac$Type* $tmp578 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
*(&local9) = $tmp577;
// line 181
org$pandalanguage$pandac$Type* $tmp579 = *(&local9);
org$pandalanguage$pandac$Type* $tmp580 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp579);
panda$core$Bit $tmp581 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit($tmp580);
bool $tmp582 = $tmp581.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
// unreffing REF($300:org.pandalanguage.pandac.Type)
if ($tmp582) goto block18; else goto block19;
block18:;
// line 182
org$pandalanguage$pandac$Type* $tmp583 = *(&local9);
org$pandalanguage$pandac$Type* $tmp584 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp583);
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
org$pandalanguage$pandac$Type* $tmp585 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
*(&local10) = $tmp584;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// unreffing REF($309:org.pandalanguage.pandac.Type)
// line 186
panda$collections$HashMap** $tmp586 = &param0->binaryTypes;
panda$collections$HashMap* $tmp587 = *$tmp586;
*(&local11) = ((panda$collections$HashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp587));
panda$collections$HashMap* $tmp588 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
*(&local11) = $tmp587;
// line 187
panda$collections$HashMap* $tmp589 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp589);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp589));
panda$collections$HashMap** $tmp590 = &param0->binaryTypes;
panda$collections$HashMap* $tmp591 = *$tmp590;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
panda$collections$HashMap** $tmp592 = &param0->binaryTypes;
*$tmp592 = $tmp589;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp589));
// unreffing REF($331:panda.collections.HashMap<org.pandalanguage.pandac.Compiler.BinaryKey, panda.collections.ListView<org.pandalanguage.pandac.Type>?>)
// line 188
org$pandalanguage$pandac$Type* $tmp593 = *(&local10);
org$pandalanguage$pandac$Pair* $tmp594 = org$pandalanguage$pandac$Compiler$computeCoercionCost$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Cpanda$core$Int64$GT$Q(param0, param2, $tmp593);
*(&local12) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
org$pandalanguage$pandac$Pair* $tmp595 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
*(&local12) = $tmp594;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
// unreffing REF($347:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, panda.core.Int64>?)
// line 189
panda$collections$HashMap* $tmp596 = *(&local11);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
panda$collections$HashMap** $tmp597 = &param0->binaryTypes;
panda$collections$HashMap* $tmp598 = *$tmp597;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
panda$collections$HashMap** $tmp599 = &param0->binaryTypes;
*$tmp599 = $tmp596;
// line 190
org$pandalanguage$pandac$Pair* $tmp600 = *(&local12);
panda$core$Bit $tmp601 = panda$core$Bit$init$builtin_bit($tmp600 == NULL);
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block20; else goto block21;
block20:;
// line 191
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) NULL)));
org$pandalanguage$pandac$Pair* $tmp603 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
// unreffing cost
*(&local12) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$HashMap* $tmp604 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
// unreffing oldBinaryTypes
*(&local11) = ((panda$collections$HashMap*) NULL);
org$pandalanguage$pandac$Type* $tmp605 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
// unreffing target
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp606 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp607 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
// unreffing returnType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp608 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
// unreffing parameterTypes
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp609 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
// unreffing scope
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
return ((org$pandalanguage$pandac$Type*) NULL);
block21:;
// line 193
org$pandalanguage$pandac$Pair* $tmp610 = *(&local12);
panda$core$Object** $tmp611 = &$tmp610->first;
panda$core$Object* $tmp612 = *$tmp611;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp612)));
org$pandalanguage$pandac$Type* $tmp613 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
*(&local8) = ((org$pandalanguage$pandac$Type*) $tmp612);
org$pandalanguage$pandac$Pair* $tmp614 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
// unreffing cost
*(&local12) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$HashMap* $tmp615 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
// unreffing oldBinaryTypes
*(&local11) = ((panda$collections$HashMap*) NULL);
org$pandalanguage$pandac$Type* $tmp616 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
// unreffing target
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
goto block19;
block19:;
org$pandalanguage$pandac$Type* $tmp617 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
goto block15;
block17:;
// line 197
org$pandalanguage$pandac$Type* $tmp618 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
org$pandalanguage$pandac$Type* $tmp619 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
*(&local8) = $tmp618;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
// unreffing REF($449:org.pandalanguage.pandac.Type?)
goto block15;
block15:;
// line 200
org$pandalanguage$pandac$Type* $tmp620 = *(&local8);
panda$core$Bit $tmp621 = panda$core$Bit$init$builtin_bit($tmp620 == NULL);
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block22; else goto block23;
block22:;
// line 201
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) NULL)));
org$pandalanguage$pandac$Type* $tmp623 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp623));
// unreffing returnType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp624 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
// unreffing parameterTypes
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp625 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp625));
// unreffing scope
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
return ((org$pandalanguage$pandac$Type*) NULL);
block23:;
// line 203
org$pandalanguage$pandac$Position $tmp626 = org$pandalanguage$pandac$Position$init();
panda$core$Int64 $tmp627 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp628 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp627);
panda$collections$Array* $tmp629 = *(&local1);
org$pandalanguage$pandac$Type* $tmp630 = *(&local8);
panda$core$Int64 $tmp631 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp632 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp626, $tmp628, ((panda$collections$ListView*) $tmp629), $tmp630, $tmp631);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
// unreffing REF($494:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$Type* $tmp633 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp633));
// unreffing returnType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp634 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
// unreffing parameterTypes
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp635 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
// unreffing scope
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
return $tmp632;

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Closure$compileTypedLambda$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$FixedArray* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$Compiler$TypeContext* param4) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
// line 211
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
// line 212
org$pandalanguage$pandac$Type* $tmp636 = org$pandalanguage$pandac$expression$Closure$typedLambdaType$org$pandalanguage$pandac$Compiler$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Type$Q(param0, ((panda$collections$ListView*) param2), param3, param4);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp636));
org$pandalanguage$pandac$Type* $tmp637 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
*(&local1) = $tmp636;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp636));
// unreffing REF($4:org.pandalanguage.pandac.Type?)
// line 213
org$pandalanguage$pandac$Type* $tmp638 = *(&local1);
panda$core$Bit $tmp639 = panda$core$Bit$init$builtin_bit($tmp638 != NULL);
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block1; else goto block3;
block1:;
// line 214
org$pandalanguage$pandac$Type* $tmp641 = *(&local1);
org$pandalanguage$pandac$Type* $tmp642 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp641);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
org$pandalanguage$pandac$Type* $tmp643 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp643));
*(&local0) = $tmp642;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
// unreffing REF($24:org.pandalanguage.pandac.Type)
goto block2;
block3:;
// line 1
// line 219
org$pandalanguage$pandac$Type* $tmp644 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
org$pandalanguage$pandac$Type* $tmp645 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp645));
*(&local0) = $tmp644;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
// unreffing REF($37:org.pandalanguage.pandac.Type)
// line 220
panda$core$Int64* $tmp646 = &param4->$rawValue;
panda$core$Int64 $tmp647 = *$tmp646;
panda$core$Int64 $tmp648 = (panda$core$Int64) {3};
panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, $tmp648);
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block5; else goto block4;
block5:;
org$pandalanguage$pandac$Type** $tmp651 = (org$pandalanguage$pandac$Type**) (param4->$data + 0);
org$pandalanguage$pandac$Type* $tmp652 = *$tmp651;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
org$pandalanguage$pandac$Type* $tmp653 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
*(&local2) = $tmp652;
// line 222
org$pandalanguage$pandac$Type* $tmp654 = *(&local2);
org$pandalanguage$pandac$Type* $tmp655 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp654);
panda$core$Bit $tmp656 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit($tmp655);
bool $tmp657 = $tmp656.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
// unreffing REF($65:org.pandalanguage.pandac.Type)
if ($tmp657) goto block6; else goto block7;
block6:;
// line 223
org$pandalanguage$pandac$Type* $tmp658 = *(&local2);
org$pandalanguage$pandac$Type* $tmp659 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp658);
org$pandalanguage$pandac$Type* $tmp660 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp659);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
org$pandalanguage$pandac$Type* $tmp661 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
*(&local0) = $tmp660;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
// unreffing REF($75:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
// unreffing REF($74:org.pandalanguage.pandac.Type)
goto block7;
block7:;
org$pandalanguage$pandac$Type* $tmp662 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block4;
block4:;
goto block2;
block2:;
// line 228
panda$core$Int64 $tmp663 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp664 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp663);
org$pandalanguage$pandac$ASTNode* $tmp665 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp666 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp667 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp668 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp669 = *(&local0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp667, $tmp668, $tmp669);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp665, $tmp666, param1, $tmp667);
panda$collections$Array* $tmp670 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp671 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp670, $tmp671);
org$pandalanguage$pandac$ASTNode* $tmp672 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp673 = (panda$core$Int64) {39};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp672, $tmp673, param1, param3);
panda$collections$Array$add$panda$collections$Array$T($tmp670, ((panda$core$Object*) $tmp672));
org$pandalanguage$pandac$IR$Value* $tmp674 = org$pandalanguage$pandac$expression$Closure$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp664, param2, $tmp665, ((org$pandalanguage$pandac$FixedArray*) $tmp670), param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
// unreffing REF($119:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
// unreffing REF($112:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
// unreffing REF($107:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
// unreffing REF($101:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
// unreffing REF($99:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$Type* $tmp675 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
// unreffing lambdaType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp676 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
// unreffing returnType
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp674;

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
panda$core$Int64* $tmp677 = &param4->$rawValue;
panda$core$Int64 $tmp678 = *$tmp677;
panda$core$Int64 $tmp679 = (panda$core$Int64) {3};
panda$core$Bit $tmp680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp678, $tmp679);
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block2; else goto block1;
block2:;
org$pandalanguage$pandac$Type** $tmp682 = (org$pandalanguage$pandac$Type**) (param4->$data + 0);
org$pandalanguage$pandac$Type* $tmp683 = *$tmp682;
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
org$pandalanguage$pandac$Type* $tmp684 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
*(&local0) = $tmp683;
// line 239
org$pandalanguage$pandac$Type* $tmp685 = *(&local0);
org$pandalanguage$pandac$Type* $tmp686 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp685);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
org$pandalanguage$pandac$Type* $tmp687 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp687));
*(&local1) = $tmp686;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
// unreffing REF($18:org.pandalanguage.pandac.Type)
// line 240
org$pandalanguage$pandac$Type* $tmp688 = *(&local1);
panda$core$Bit $tmp689 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit($tmp688);
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block3; else goto block4;
block3:;
// line 241
ITable* $tmp691 = ((panda$collections$CollectionView*) param2)->$class->itable;
while ($tmp691->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp691 = $tmp691->next;
}
$fn693 $tmp692 = $tmp691->methods[0];
panda$core$Int64 $tmp694 = $tmp692(((panda$collections$CollectionView*) param2));
org$pandalanguage$pandac$Type* $tmp695 = *(&local1);
panda$core$Int64 $tmp696 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp695);
int64_t $tmp697 = $tmp694.value;
int64_t $tmp698 = $tmp696.value;
bool $tmp699 = $tmp697 != $tmp698;
panda$core$Bit $tmp700 = (panda$core$Bit) {$tmp699};
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block5; else goto block6;
block5:;
// line 242
org$pandalanguage$pandac$Type* $tmp702 = *(&local0);
panda$core$String* $tmp703 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s704, ((panda$core$Object*) $tmp702));
panda$core$String* $tmp705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp703, &$s706);
panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp705, &$s708);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp707);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
// unreffing REF($51:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp705));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
// unreffing REF($49:panda.core.String)
// line 244
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp709 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp709));
// unreffing methodType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp710 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block6:;
// line 246
panda$collections$Array* $tmp711 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp711);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
panda$collections$Array* $tmp712 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
*(&local2) = $tmp711;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
// unreffing REF($77:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 247
panda$core$Int64 $tmp713 = (panda$core$Int64) {0};
ITable* $tmp714 = ((panda$collections$CollectionView*) param2)->$class->itable;
while ($tmp714->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp714 = $tmp714->next;
}
$fn716 $tmp715 = $tmp714->methods[0];
panda$core$Int64 $tmp717 = $tmp715(((panda$collections$CollectionView*) param2));
panda$core$Bit $tmp718 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp719 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp713, $tmp717, $tmp718);
panda$core$Int64 $tmp720 = $tmp719.min;
*(&local3) = $tmp720;
panda$core$Int64 $tmp721 = $tmp719.max;
panda$core$Bit $tmp722 = $tmp719.inclusive;
bool $tmp723 = $tmp722.value;
panda$core$Int64 $tmp724 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp725 = panda$core$Int64$convert$R$panda$core$UInt64($tmp724);
if ($tmp723) goto block10; else goto block11;
block10:;
int64_t $tmp726 = $tmp720.value;
int64_t $tmp727 = $tmp721.value;
bool $tmp728 = $tmp726 <= $tmp727;
panda$core$Bit $tmp729 = (panda$core$Bit) {$tmp728};
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block7; else goto block8;
block11:;
int64_t $tmp731 = $tmp720.value;
int64_t $tmp732 = $tmp721.value;
bool $tmp733 = $tmp731 < $tmp732;
panda$core$Bit $tmp734 = (panda$core$Bit) {$tmp733};
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block7; else goto block8;
block7:;
// line 248
panda$core$Int64 $tmp736 = *(&local3);
panda$core$Object* $tmp737 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T(param2, $tmp736);
panda$core$Int64* $tmp738 = &((org$pandalanguage$pandac$ASTNode*) $tmp737)->$rawValue;
panda$core$Int64 $tmp739 = *$tmp738;
panda$core$Int64 $tmp740 = (panda$core$Int64) {22};
panda$core$Bit $tmp741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp739, $tmp740);
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$Position* $tmp743 = (org$pandalanguage$pandac$Position*) (((org$pandalanguage$pandac$ASTNode*) $tmp737)->$data + 0);
org$pandalanguage$pandac$Position $tmp744 = *$tmp743;
*(&local4) = $tmp744;
panda$core$String** $tmp745 = (panda$core$String**) (((org$pandalanguage$pandac$ASTNode*) $tmp737)->$data + 16);
panda$core$String* $tmp746 = *$tmp745;
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
panda$core$String* $tmp747 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp747));
*(&local5) = $tmp746;
// line 250
panda$collections$Array* $tmp748 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp749 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp750 = (panda$core$Int64) {34};
org$pandalanguage$pandac$Position $tmp751 = *(&local4);
panda$core$String* $tmp752 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp753 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp754 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position $tmp755 = *(&local4);
org$pandalanguage$pandac$IR$Value* $tmp756 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp757 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp758 = *(&local1);
panda$core$Int64 $tmp759 = *(&local3);
org$pandalanguage$pandac$Type* $tmp760 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp758, $tmp759);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp756, $tmp757, $tmp760);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp753, $tmp754, $tmp755, $tmp756);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp749, $tmp750, $tmp751, $tmp752, $tmp753);
panda$collections$Array$add$panda$collections$Array$T($tmp748, ((panda$core$Object*) $tmp749));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp760));
// unreffing REF($154:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp756));
// unreffing REF($150:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
// unreffing REF($147:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp749));
// unreffing REF($143:org.pandalanguage.pandac.ASTNode)
panda$core$String* $tmp761 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp761));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block12;
block14:;
// line 255
panda$core$Bit $tmp762 = panda$core$Bit$init$builtin_bit(false);
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp764 = (panda$core$Int64) {255};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s765, $tmp764);
abort(); // unreachable
block15:;
goto block12;
block12:;
panda$core$Panda$unref$panda$core$Object$Q($tmp737);
// unreffing REF($120:org.pandalanguage.pandac.FixedArray.T)
goto block9;
block9:;
panda$core$Int64 $tmp766 = *(&local3);
int64_t $tmp767 = $tmp721.value;
int64_t $tmp768 = $tmp766.value;
int64_t $tmp769 = $tmp767 - $tmp768;
panda$core$Int64 $tmp770 = (panda$core$Int64) {$tmp769};
panda$core$UInt64 $tmp771 = panda$core$Int64$convert$R$panda$core$UInt64($tmp770);
if ($tmp723) goto block18; else goto block19;
block18:;
uint64_t $tmp772 = $tmp771.value;
uint64_t $tmp773 = $tmp725.value;
bool $tmp774 = $tmp772 >= $tmp773;
panda$core$Bit $tmp775 = (panda$core$Bit) {$tmp774};
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block17; else goto block8;
block19:;
uint64_t $tmp777 = $tmp771.value;
uint64_t $tmp778 = $tmp725.value;
bool $tmp779 = $tmp777 > $tmp778;
panda$core$Bit $tmp780 = (panda$core$Bit) {$tmp779};
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block17; else goto block8;
block17:;
int64_t $tmp782 = $tmp766.value;
int64_t $tmp783 = $tmp724.value;
int64_t $tmp784 = $tmp782 + $tmp783;
panda$core$Int64 $tmp785 = (panda$core$Int64) {$tmp784};
*(&local3) = $tmp785;
goto block7;
block8:;
// line 259
org$pandalanguage$pandac$Type* $tmp786 = *(&local0);
org$pandalanguage$pandac$Type* $tmp787 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp786);
org$pandalanguage$pandac$Type* $tmp788 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp787);
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp788));
org$pandalanguage$pandac$Type* $tmp789 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp789));
*(&local6) = $tmp788;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp788));
// unreffing REF($218:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp787));
// unreffing REF($217:org.pandalanguage.pandac.Type)
// line 260
panda$core$Int64 $tmp790 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp791 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp790);
panda$collections$Array* $tmp792 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp793 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp792);
org$pandalanguage$pandac$ASTNode* $tmp794 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp795 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp796 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp797 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp798 = *(&local6);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp796, $tmp797, $tmp798);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp794, $tmp795, param1, $tmp796);
panda$collections$Array* $tmp799 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp800 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp799, $tmp800);
org$pandalanguage$pandac$ASTNode* $tmp801 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp802 = (panda$core$Int64) {39};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp801, $tmp802, param1, param3);
panda$collections$Array$add$panda$collections$Array$T($tmp799, ((panda$core$Object*) $tmp801));
org$pandalanguage$pandac$FixedArray* $tmp803 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp799);
org$pandalanguage$pandac$IR$Value* $tmp804 = org$pandalanguage$pandac$expression$Closure$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp791, $tmp793, $tmp794, $tmp803, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
// unreffing REF($261:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
// unreffing REF($259:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp801));
// unreffing REF($252:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp799));
// unreffing REF($247:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
// unreffing REF($241:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
// unreffing REF($239:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp793));
// unreffing REF($237:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
org$pandalanguage$pandac$Type* $tmp805 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp805));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp806 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp806));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp807 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp807));
// unreffing methodType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp808 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp804;
block4:;
org$pandalanguage$pandac$Type* $tmp809 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp809));
// unreffing methodType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp810 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block1:;
// line 268
panda$collections$IdentityMap** $tmp811 = &param0->lambdaTypes;
panda$collections$IdentityMap* $tmp812 = *$tmp811;
panda$core$Object* $tmp813 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q($tmp812, ((panda$core$Object*) param3));
*(&local7) = ((panda$collections$HashSet*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$HashSet*) $tmp813)));
panda$collections$HashSet* $tmp814 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
*(&local7) = ((panda$collections$HashSet*) $tmp813);
panda$core$Panda$unref$panda$core$Object$Q($tmp813);
// unreffing REF($322:panda.collections.IdentityMap.V?)
// line 269
panda$collections$HashSet* $tmp815 = *(&local7);
panda$core$Bit $tmp816 = panda$core$Bit$init$builtin_bit($tmp815 != NULL);
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block20; else goto block21;
block20:;
// line 270
panda$collections$HashSet* $tmp818 = *(&local7);
ITable* $tmp819 = ((panda$collections$CollectionView*) $tmp818)->$class->itable;
while ($tmp819->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp819 = $tmp819->next;
}
$fn821 $tmp820 = $tmp819->methods[0];
panda$core$Int64 $tmp822 = $tmp820(((panda$collections$CollectionView*) $tmp818));
panda$core$Int64 $tmp823 = (panda$core$Int64) {1};
int64_t $tmp824 = $tmp822.value;
int64_t $tmp825 = $tmp823.value;
bool $tmp826 = $tmp824 > $tmp825;
panda$core$Bit $tmp827 = (panda$core$Bit) {$tmp826};
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block22; else goto block24;
block22:;
// line 271
panda$core$MutableString* $tmp829 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp829, &$s830);
*(&local8) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
panda$core$MutableString* $tmp831 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp831));
*(&local8) = $tmp829;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
// unreffing REF($353:panda.core.MutableString)
// line 272
panda$threads$MessageQueue** $tmp832 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp833 = *$tmp832;
*(&local9) = ((panda$threads$MessageQueue*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
panda$threads$MessageQueue* $tmp834 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
*(&local9) = $tmp833;
// line 273
panda$collections$HashSet* $tmp835 = *(&local7);
ITable* $tmp836 = ((panda$collections$Iterable*) $tmp835)->$class->itable;
while ($tmp836->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp836 = $tmp836->next;
}
$fn838 $tmp837 = $tmp836->methods[0];
panda$collections$Iterator* $tmp839 = $tmp837(((panda$collections$Iterable*) $tmp835));
goto block25;
block25:;
ITable* $tmp840 = $tmp839->$class->itable;
while ($tmp840->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp840 = $tmp840->next;
}
$fn842 $tmp841 = $tmp840->methods[0];
panda$core$Bit $tmp843 = $tmp841($tmp839);
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block27; else goto block26;
block26:;
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp845 = $tmp839->$class->itable;
while ($tmp845->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp845 = $tmp845->next;
}
$fn847 $tmp846 = $tmp845->methods[1];
panda$core$Object* $tmp848 = $tmp846($tmp839);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp848)));
org$pandalanguage$pandac$Type* $tmp849 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
*(&local10) = ((org$pandalanguage$pandac$Type*) $tmp848);
// line 274
panda$core$MutableString* $tmp850 = *(&local8);
org$pandalanguage$pandac$Type* $tmp851 = *(&local10);
panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s853, ((panda$core$Object*) $tmp851));
panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp852, &$s855);
panda$core$MutableString$append$panda$core$String($tmp850, $tmp854);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp854));
// unreffing REF($404:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp852));
// unreffing REF($403:panda.core.String)
// line 275
panda$threads$MessageQueue* $tmp856 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
panda$threads$MessageQueue$init($tmp856);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
panda$threads$MessageQueue** $tmp857 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp858 = *$tmp857;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
panda$threads$MessageQueue** $tmp859 = &param0->errorQueue;
*$tmp859 = $tmp856;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
// unreffing REF($413:panda.threads.MessageQueue<org.pandalanguage.pandac.Compiler.Error>)
// line 276
org$pandalanguage$pandac$Compiler$TypeContext* $tmp860 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp861 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp862 = *(&local10);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp860, $tmp861, $tmp862);
org$pandalanguage$pandac$IR$Value* $tmp863 = org$pandalanguage$pandac$expression$Closure$compileUntypedLambda$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param3, $tmp860);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
// unreffing REF($432:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
// unreffing REF($428:org.pandalanguage.pandac.Compiler.TypeContext)
// line 278
panda$threads$MessageQueue** $tmp864 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp865 = *$tmp864;
panda$core$Bit $tmp866 = panda$threads$MessageQueue$hasMessage$R$panda$core$Bit($tmp865);
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp868 = (panda$core$Int64) {278};
org$pandalanguage$pandac$Position$wrapper* $tmp869;
$tmp869 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp869->value = param1;
panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s871, ((panda$core$Object*) $tmp869));
panda$core$String* $tmp872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp870, &$s873);
org$pandalanguage$pandac$Type* $tmp874 = *(&local10);
panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s876, ((panda$core$Object*) $tmp874));
panda$core$String* $tmp877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp875, &$s878);
panda$core$String* $tmp879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp872, $tmp877);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s880, $tmp868, $tmp879);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
// unreffing REF($454:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp877));
// unreffing REF($453:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp875));
// unreffing REF($452:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
// unreffing REF($449:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
// unreffing REF($448:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp869));
// unreffing REF($447:panda.core.Object)
abort(); // unreachable
block28:;
// line 281
panda$core$MutableString* $tmp881 = *(&local8);
panda$threads$MessageQueue** $tmp882 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp883 = *$tmp882;
panda$core$Immutable* $tmp884 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T($tmp883);
panda$core$String** $tmp885 = &((org$pandalanguage$pandac$Compiler$Error*) $tmp884)->message;
panda$core$String* $tmp886 = *$tmp885;
panda$core$String* $tmp887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s888, $tmp886);
panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp887, &$s890);
panda$core$MutableString$append$panda$core$String($tmp881, $tmp889);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp889));
// unreffing REF($485:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
// unreffing REF($484:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp884));
// unreffing REF($480:panda.threads.MessageQueue.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp848);
// unreffing REF($391:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp891 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
// unreffing t
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
goto block25;
block27:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
// unreffing REF($380:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 283
panda$threads$MessageQueue* $tmp892 = *(&local9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
panda$threads$MessageQueue** $tmp893 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp894 = *$tmp893;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
panda$threads$MessageQueue** $tmp895 = &param0->errorQueue;
*$tmp895 = $tmp892;
// line 284
panda$core$MutableString* $tmp896 = *(&local8);
panda$core$String* $tmp897 = panda$core$MutableString$finish$R$panda$core$String($tmp896);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp897);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp897));
// unreffing REF($520:panda.core.String)
// line 285
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$threads$MessageQueue* $tmp898 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp898));
// unreffing old
*(&local9) = ((panda$threads$MessageQueue*) NULL);
panda$core$MutableString* $tmp899 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp899));
// unreffing msg
*(&local8) = ((panda$core$MutableString*) NULL);
panda$collections$HashSet* $tmp900 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp900));
// unreffing attempts
*(&local7) = ((panda$collections$HashSet*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block24:;
// line 1
// line 288
org$pandalanguage$pandac$Compiler$TypeContext* $tmp901 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp902 = (panda$core$Int64) {3};
panda$collections$HashSet* $tmp903 = *(&local7);
ITable* $tmp904 = ((panda$collections$Iterable*) $tmp903)->$class->itable;
while ($tmp904->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp904 = $tmp904->next;
}
$fn906 $tmp905 = $tmp904->methods[0];
panda$collections$Iterator* $tmp907 = $tmp905(((panda$collections$Iterable*) $tmp903));
ITable* $tmp908 = $tmp907->$class->itable;
while ($tmp908->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp908 = $tmp908->next;
}
$fn910 $tmp909 = $tmp908->methods[1];
panda$core$Object* $tmp911 = $tmp909($tmp907);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp901, $tmp902, ((org$pandalanguage$pandac$Type*) $tmp911));
org$pandalanguage$pandac$IR$Value* $tmp912 = org$pandalanguage$pandac$expression$Closure$compileUntypedLambda$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param3, $tmp901);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp912));
// unreffing REF($558:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp911);
// unreffing REF($555:panda.collections.Iterator.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp907));
// unreffing REF($551:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp901));
// unreffing REF($546:org.pandalanguage.pandac.Compiler.TypeContext)
// line 290
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$collections$HashSet* $tmp913 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp913));
// unreffing attempts
*(&local7) = ((panda$collections$HashSet*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block23:;
goto block21;
block21:;
// line 293
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s914);
// line 295
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$collections$HashSet* $tmp915 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
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
panda$core$Int64* $tmp916 = &param0->closureCount;
panda$core$Int64 $tmp917 = *$tmp916;
panda$core$Int64 $tmp918 = (panda$core$Int64) {1};
int64_t $tmp919 = $tmp917.value;
int64_t $tmp920 = $tmp918.value;
int64_t $tmp921 = $tmp919 + $tmp920;
panda$core$Int64 $tmp922 = (panda$core$Int64) {$tmp921};
panda$core$Int64* $tmp923 = &param0->closureCount;
*$tmp923 = $tmp922;
// line 303
panda$core$Int64* $tmp924 = &param0->closureCount;
panda$core$Int64 $tmp925 = *$tmp924;
panda$core$Int64$wrapper* $tmp926;
$tmp926 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp926->value = $tmp925;
panda$core$String* $tmp927 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s928, ((panda$core$Object*) $tmp926));
panda$core$String* $tmp929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp927, &$s930);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
panda$core$String* $tmp931 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
*(&local0) = $tmp929;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
// unreffing REF($15:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
// unreffing REF($13:panda.core.Object)
// line 304
panda$collections$Array* $tmp932 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp932);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
panda$collections$Array* $tmp933 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
*(&local1) = $tmp932;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
// unreffing REF($33:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
// line 305
ITable* $tmp934 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp934->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp934 = $tmp934->next;
}
$fn936 $tmp935 = $tmp934->methods[0];
panda$collections$Iterator* $tmp937 = $tmp935(((panda$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp938 = $tmp937->$class->itable;
while ($tmp938->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp938 = $tmp938->next;
}
$fn940 $tmp939 = $tmp938->methods[0];
panda$core$Bit $tmp941 = $tmp939($tmp937);
bool $tmp942 = $tmp941.value;
if ($tmp942) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp943 = $tmp937->$class->itable;
while ($tmp943->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp943 = $tmp943->next;
}
$fn945 $tmp944 = $tmp943->methods[1];
panda$core$Object* $tmp946 = $tmp944($tmp937);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp946)));
org$pandalanguage$pandac$ASTNode* $tmp947 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) $tmp946);
// line 306
org$pandalanguage$pandac$ASTNode* $tmp948 = *(&local2);
panda$core$Int64* $tmp949 = &$tmp948->$rawValue;
panda$core$Int64 $tmp950 = *$tmp949;
panda$core$Int64 $tmp951 = (panda$core$Int64) {34};
panda$core$Bit $tmp952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp950, $tmp951);
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp954 = (org$pandalanguage$pandac$Position*) ($tmp948->$data + 0);
org$pandalanguage$pandac$Position $tmp955 = *$tmp954;
panda$core$String** $tmp956 = (panda$core$String**) ($tmp948->$data + 16);
panda$core$String* $tmp957 = *$tmp956;
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp957));
panda$core$String* $tmp958 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp958));
*(&local3) = $tmp957;
org$pandalanguage$pandac$ASTNode** $tmp959 = (org$pandalanguage$pandac$ASTNode**) ($tmp948->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp960 = *$tmp959;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp960));
org$pandalanguage$pandac$ASTNode* $tmp961 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp961));
*(&local4) = $tmp960;
// line 308
org$pandalanguage$pandac$Scanner** $tmp962 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp963 = *$tmp962;
org$pandalanguage$pandac$ASTNode* $tmp964 = *(&local4);
org$pandalanguage$pandac$Type* $tmp965 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp963, $tmp964);
org$pandalanguage$pandac$Type* $tmp966 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, $tmp965);
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
org$pandalanguage$pandac$Type* $tmp967 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp967));
*(&local5) = $tmp966;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
// unreffing REF($102:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp965));
// unreffing REF($101:org.pandalanguage.pandac.Type)
// line 309
org$pandalanguage$pandac$Type* $tmp968 = *(&local5);
panda$core$Bit $tmp969 = panda$core$Bit$init$builtin_bit($tmp968 == NULL);
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block7; else goto block8;
block7:;
// line 310
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp971 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp971));
// unreffing resolved
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp972 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp972));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp973 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp973));
// unreffing name
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp946);
// unreffing REF($61:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp974 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp974));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp937));
// unreffing REF($50:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$Array* $tmp975 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp975));
// unreffing parameters
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp976 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp976));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block8:;
// line 312
panda$collections$Array* $tmp977 = *(&local1);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp978 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp979 = *(&local3);
org$pandalanguage$pandac$Type* $tmp980 = *(&local5);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp978, $tmp979, $tmp980);
panda$collections$Array$add$panda$collections$Array$T($tmp977, ((panda$core$Object*) $tmp978));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp978));
// unreffing REF($165:org.pandalanguage.pandac.MethodDecl.Parameter)
org$pandalanguage$pandac$Type* $tmp981 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
// unreffing resolved
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp982 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp982));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp983 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
// unreffing name
*(&local3) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 315
panda$core$Bit $tmp984 = panda$core$Bit$init$builtin_bit(false);
bool $tmp985 = $tmp984.value;
if ($tmp985) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp986 = (panda$core$Int64) {315};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s987, $tmp986);
abort(); // unreachable
block9:;
goto block4;
block4:;
panda$core$Panda$unref$panda$core$Object$Q($tmp946);
// unreffing REF($61:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp988 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp937));
// unreffing REF($50:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 319
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
// line 320
panda$core$Bit $tmp989 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block11; else goto block13;
block11:;
// line 321
org$pandalanguage$pandac$Scanner** $tmp991 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp992 = *$tmp991;
org$pandalanguage$pandac$Type* $tmp993 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp992, param4);
org$pandalanguage$pandac$Type* $tmp994 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, $tmp993);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
org$pandalanguage$pandac$Type* $tmp995 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
*(&local6) = $tmp994;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
// unreffing REF($223:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
// unreffing REF($222:org.pandalanguage.pandac.Type)
// line 322
org$pandalanguage$pandac$Type* $tmp996 = *(&local6);
panda$core$Bit $tmp997 = panda$core$Bit$init$builtin_bit(false);
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block14; else goto block15;
block14:;
// line 323
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp999 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp999));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1000 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
// unreffing parameters
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1001 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block15:;
goto block12;
block13:;
// line 1
// line 327
org$pandalanguage$pandac$Type* $tmp1002 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1002));
org$pandalanguage$pandac$Type* $tmp1003 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1003));
*(&local6) = $tmp1002;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1002));
// unreffing REF($264:org.pandalanguage.pandac.Type)
// line 328
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1004;
$tmp1004 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1004->value = param2;
panda$core$Int64 $tmp1005 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1006 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1005);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1007;
$tmp1007 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1007->value = $tmp1006;
ITable* $tmp1008 = ((panda$core$Equatable*) $tmp1004)->$class->itable;
while ($tmp1008->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1008 = $tmp1008->next;
}
$fn1010 $tmp1009 = $tmp1008->methods[0];
panda$core$Bit $tmp1011 = $tmp1009(((panda$core$Equatable*) $tmp1004), ((panda$core$Equatable*) $tmp1007));
bool $tmp1012 = $tmp1011.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1007)));
// unreffing REF($279:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1004)));
// unreffing REF($275:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp1012) goto block16; else goto block17;
block16:;
// line 329
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s1013);
// line 330
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp1014 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1015 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
// unreffing parameters
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1016 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block17:;
goto block12;
block12:;
// line 333
org$pandalanguage$pandac$Pair* $tmp1017 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$collections$Stack** $tmp1018 = &param0->currentMethod;
panda$collections$Stack* $tmp1019 = *$tmp1018;
panda$core$Int64 $tmp1020 = (panda$core$Int64) {0};
panda$core$Object* $tmp1021 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp1019, $tmp1020);
panda$collections$HashMap* $tmp1022 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp1022);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp1017, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1021)), ((panda$core$Object*) ((panda$collections$Map*) $tmp1022)));
*(&local7) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
org$pandalanguage$pandac$Pair* $tmp1023 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1023));
*(&local7) = $tmp1017;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
// unreffing REF($322:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.Compiler.Capture>)
panda$core$Panda$unref$panda$core$Object$Q($tmp1021);
// unreffing REF($319:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
// unreffing REF($313:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.MethodDecl, panda.collections.Map<panda.core.String, org.pandalanguage.pandac.Compiler.Capture>>)
// line 335
panda$collections$Stack** $tmp1024 = &param0->captures;
panda$collections$Stack* $tmp1025 = *$tmp1024;
org$pandalanguage$pandac$Pair* $tmp1026 = *(&local7);
panda$collections$Stack$push$panda$collections$Stack$T($tmp1025, ((panda$core$Object*) $tmp1026));
// line 336
org$pandalanguage$pandac$Annotations* $tmp1027 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp1028 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1027, $tmp1028);
*(&local8) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
org$pandalanguage$pandac$Annotations* $tmp1029 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
*(&local8) = $tmp1027;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
// unreffing REF($352:org.pandalanguage.pandac.Annotations)
// line 337
org$pandalanguage$pandac$MethodDecl* $tmp1030 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
panda$collections$Stack** $tmp1031 = &param0->currentClass;
panda$collections$Stack* $tmp1032 = *$tmp1031;
panda$core$Int64 $tmp1033 = (panda$core$Int64) {0};
panda$core$Object* $tmp1034 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp1032, $tmp1033);
org$pandalanguage$pandac$Annotations* $tmp1035 = *(&local8);
panda$core$String* $tmp1036 = *(&local0);
panda$collections$Array* $tmp1037 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1038 = *(&local6);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1030, ((org$pandalanguage$pandac$ClassDecl*) $tmp1034), param1, ((panda$core$String*) NULL), $tmp1035, param2, $tmp1036, ((panda$collections$Array*) NULL), $tmp1037, $tmp1038, param5);
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1030));
org$pandalanguage$pandac$MethodDecl* $tmp1039 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1039));
*(&local9) = $tmp1030;
panda$core$Panda$unref$panda$core$Object$Q($tmp1034);
// unreffing REF($371:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1030));
// unreffing REF($366:org.pandalanguage.pandac.MethodDecl)
// line 341
panda$core$Bit* $tmp1040 = &param0->writeCode;
panda$core$Bit $tmp1041 = *$tmp1040;
*(&local10) = $tmp1041;
// line 342
panda$core$Bit* $tmp1042 = &param0->reportErrors;
panda$core$Bit $tmp1043 = *$tmp1042;
*(&local11) = $tmp1043;
// line 343
panda$core$Bit $tmp1044 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp1045 = &param0->writeCode;
*$tmp1045 = $tmp1044;
// line 344
panda$core$Bit $tmp1046 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp1047 = &param0->reportErrors;
*$tmp1047 = $tmp1046;
// line 345
panda$collections$Stack** $tmp1048 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1049 = *$tmp1048;
*(&local12) = ((panda$collections$Stack*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
panda$collections$Stack* $tmp1050 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
*(&local12) = $tmp1049;
// line 346
panda$collections$Stack* $tmp1051 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
panda$collections$Stack$init($tmp1051);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
panda$collections$Stack** $tmp1052 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1053 = *$tmp1052;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
panda$collections$Stack** $tmp1054 = &param0->enclosingContexts;
*$tmp1054 = $tmp1051;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
// unreffing REF($419:panda.collections.Stack<org.pandalanguage.pandac.Compiler.EnclosingContext>)
// line 347
org$pandalanguage$pandac$MethodDecl* $tmp1055 = *(&local9);
org$pandalanguage$pandac$SymbolTable** $tmp1056 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1057 = *$tmp1056;
org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$SymbolTable$Q(param0, $tmp1055, $tmp1057);
// line 348
panda$collections$Stack* $tmp1058 = *(&local12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1058));
panda$collections$Stack** $tmp1059 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1060 = *$tmp1059;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1060));
panda$collections$Stack** $tmp1061 = &param0->enclosingContexts;
*$tmp1061 = $tmp1058;
// line 349
panda$core$Bit $tmp1062 = *(&local10);
panda$core$Bit* $tmp1063 = &param0->writeCode;
*$tmp1063 = $tmp1062;
// line 350
panda$core$Bit $tmp1064 = *(&local11);
panda$core$Bit* $tmp1065 = &param0->reportErrors;
*$tmp1065 = $tmp1064;
// line 352
// line 353
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 354
org$pandalanguage$pandac$Pair* $tmp1066 = *(&local7);
panda$core$Object** $tmp1067 = &$tmp1066->second;
panda$core$Object* $tmp1068 = *$tmp1067;
ITable* $tmp1069 = ((panda$collections$MapView*) ((panda$collections$Map*) $tmp1068))->$class->itable;
while ($tmp1069->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp1069 = $tmp1069->next;
}
$fn1071 $tmp1070 = $tmp1069->methods[0];
panda$core$Int64 $tmp1072 = $tmp1070(((panda$collections$MapView*) ((panda$collections$Map*) $tmp1068)));
panda$core$Int64 $tmp1073 = (panda$core$Int64) {0};
int64_t $tmp1074 = $tmp1072.value;
int64_t $tmp1075 = $tmp1073.value;
bool $tmp1076 = $tmp1074 != $tmp1075;
panda$core$Bit $tmp1077 = (panda$core$Bit) {$tmp1076};
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block18; else goto block20;
block18:;
// line 356
org$pandalanguage$pandac$MethodDecl* $tmp1079 = *(&local9);
org$pandalanguage$pandac$Pair* $tmp1080 = *(&local7);
panda$core$Object** $tmp1081 = &$tmp1080->second;
panda$core$Object* $tmp1082 = *$tmp1081;
ITable* $tmp1083 = ((panda$collections$MapView*) ((panda$collections$Map*) $tmp1082))->$class->itable;
while ($tmp1083->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp1083 = $tmp1083->next;
}
$fn1085 $tmp1084 = $tmp1083->methods[4];
panda$collections$Iterator* $tmp1086 = $tmp1084(((panda$collections$MapView*) ((panda$collections$Map*) $tmp1082)));
ITable* $tmp1087 = $tmp1086->$class->itable;
while ($tmp1087->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1087 = $tmp1087->next;
}
$fn1089 $tmp1088 = $tmp1087->methods[6];
panda$collections$Array* $tmp1090 = $tmp1088($tmp1086);
org$pandalanguage$pandac$ClassDecl* $tmp1091 = org$pandalanguage$pandac$expression$Closure$createClosureClass$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$MethodDecl$panda$collections$CollectionView$LTorg$pandalanguage$pandac$Compiler$Capture$GT$R$org$pandalanguage$pandac$ClassDecl(param0, $tmp1079, ((panda$collections$CollectionView*) $tmp1090));
*(&local15) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1091));
org$pandalanguage$pandac$ClassDecl* $tmp1092 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
*(&local15) = $tmp1091;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1091));
// unreffing REF($492:org.pandalanguage.pandac.ClassDecl)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
// unreffing REF($489:panda.collections.Array<panda.collections.Iterator.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1086));
// unreffing REF($485:panda.collections.Iterator<panda.collections.MapView.V>)
// line 357
panda$collections$Array* $tmp1093 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1093);
*(&local16) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1093));
panda$collections$Array* $tmp1094 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1094));
*(&local16) = $tmp1093;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1093));
// unreffing REF($510:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 358
org$pandalanguage$pandac$Pair* $tmp1095 = *(&local7);
panda$core$Object** $tmp1096 = &$tmp1095->second;
panda$core$Object* $tmp1097 = *$tmp1096;
ITable* $tmp1098 = ((panda$collections$MapView*) ((panda$collections$Map*) $tmp1097))->$class->itable;
while ($tmp1098->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp1098 = $tmp1098->next;
}
$fn1100 $tmp1099 = $tmp1098->methods[4];
panda$collections$Iterator* $tmp1101 = $tmp1099(((panda$collections$MapView*) ((panda$collections$Map*) $tmp1097)));
goto block21;
block21:;
ITable* $tmp1102 = $tmp1101->$class->itable;
while ($tmp1102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1102 = $tmp1102->next;
}
$fn1104 $tmp1103 = $tmp1102->methods[0];
panda$core$Bit $tmp1105 = $tmp1103($tmp1101);
bool $tmp1106 = $tmp1105.value;
if ($tmp1106) goto block23; else goto block22;
block22:;
*(&local17) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
ITable* $tmp1107 = $tmp1101->$class->itable;
while ($tmp1107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1107 = $tmp1107->next;
}
$fn1109 $tmp1108 = $tmp1107->methods[1];
panda$core$Object* $tmp1110 = $tmp1108($tmp1101);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Capture*) $tmp1110)));
org$pandalanguage$pandac$Compiler$Capture* $tmp1111 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1111));
*(&local17) = ((org$pandalanguage$pandac$Compiler$Capture*) $tmp1110);
// line 359
org$pandalanguage$pandac$Compiler$Capture* $tmp1112 = *(&local17);
panda$core$Int64* $tmp1113 = &$tmp1112->$rawValue;
panda$core$Int64 $tmp1114 = *$tmp1113;
panda$core$Int64 $tmp1115 = (panda$core$Int64) {0};
panda$core$Bit $tmp1116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1114, $tmp1115);
bool $tmp1117 = $tmp1116.value;
if ($tmp1117) goto block25; else goto block26;
block25:;
org$pandalanguage$pandac$Variable** $tmp1118 = (org$pandalanguage$pandac$Variable**) ($tmp1112->$data + 0);
org$pandalanguage$pandac$Variable* $tmp1119 = *$tmp1118;
*(&local18) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
org$pandalanguage$pandac$Variable* $tmp1120 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1120));
*(&local18) = $tmp1119;
// line 361
panda$collections$Array* $tmp1121 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1122 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1123 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Variable* $tmp1124 = *(&local18);
panda$core$String** $tmp1125 = &((org$pandalanguage$pandac$Symbol*) $tmp1124)->name;
panda$core$String* $tmp1126 = *$tmp1125;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1122, $tmp1123, param1, $tmp1126);
panda$collections$Array$add$panda$collections$Array$T($tmp1121, ((panda$core$Object*) $tmp1122));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1122));
// unreffing REF($570:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$Variable* $tmp1127 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1127));
// unreffing v
*(&local18) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block24;
block26:;
panda$core$Int64 $tmp1128 = (panda$core$Int64) {2};
panda$core$Bit $tmp1129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1114, $tmp1128);
bool $tmp1130 = $tmp1129.value;
if ($tmp1130) goto block27; else goto block28;
block27:;
// line 364
panda$collections$Array* $tmp1131 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1132 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1133 = (panda$core$Int64) {40};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1132, $tmp1133, param1);
panda$collections$Array$add$panda$collections$Array$T($tmp1131, ((panda$core$Object*) $tmp1132));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
// unreffing REF($595:org.pandalanguage.pandac.ASTNode)
goto block24;
block28:;
panda$core$Int64 $tmp1134 = (panda$core$Int64) {1};
panda$core$Bit $tmp1135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1114, $tmp1134);
bool $tmp1136 = $tmp1135.value;
if ($tmp1136) goto block29; else goto block24;
block29:;
org$pandalanguage$pandac$FieldDecl** $tmp1137 = (org$pandalanguage$pandac$FieldDecl**) ($tmp1112->$data + 0);
org$pandalanguage$pandac$FieldDecl* $tmp1138 = *$tmp1137;
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1138));
org$pandalanguage$pandac$FieldDecl* $tmp1139 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
*(&local19) = $tmp1138;
// line 367
panda$collections$Array* $tmp1140 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1141 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1142 = (panda$core$Int64) {16};
org$pandalanguage$pandac$ASTNode* $tmp1143 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1144 = (panda$core$Int64) {22};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1143, $tmp1144, param1, &$s1145);
org$pandalanguage$pandac$FieldDecl* $tmp1146 = *(&local19);
panda$core$String** $tmp1147 = &((org$pandalanguage$pandac$Symbol*) $tmp1146)->name;
panda$core$String* $tmp1148 = *$tmp1147;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1141, $tmp1142, param1, $tmp1143, $tmp1148);
panda$collections$Array$add$panda$collections$Array$T($tmp1140, ((panda$core$Object*) $tmp1141));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1143));
// unreffing REF($622:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
// unreffing REF($620:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FieldDecl* $tmp1149 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
// unreffing f
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block24;
block24:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1110);
// unreffing REF($542:panda.collections.Iterator.T)
org$pandalanguage$pandac$Compiler$Capture* $tmp1150 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1150));
// unreffing capture
*(&local17) = ((org$pandalanguage$pandac$Compiler$Capture*) NULL);
goto block21;
block23:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1101));
// unreffing REF($531:panda.collections.Iterator<panda.collections.MapView.V>)
// line 373
panda$collections$Stack** $tmp1151 = &param0->captures;
panda$collections$Stack* $tmp1152 = *$tmp1151;
panda$core$Object* $tmp1153 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp1152);
panda$core$Panda$unref$panda$core$Object$Q($tmp1153);
// unreffing REF($660:panda.collections.Stack.T)
// line 374
panda$collections$Array** $tmp1154 = &param0->pendingClasses;
panda$collections$Array* $tmp1155 = *$tmp1154;
org$pandalanguage$pandac$ClassDecl* $tmp1156 = *(&local15);
panda$collections$Array$add$panda$collections$Array$T($tmp1155, ((panda$core$Object*) $tmp1156));
// line 375
org$pandalanguage$pandac$IR$Value* $tmp1157 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1158 = (panda$core$Int64) {14};
org$pandalanguage$pandac$ClassDecl* $tmp1159 = *(&local15);
org$pandalanguage$pandac$Type** $tmp1160 = &$tmp1159->type;
org$pandalanguage$pandac$Type* $tmp1161 = *$tmp1160;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1157, $tmp1158, $tmp1161);
panda$collections$Array* $tmp1162 = *(&local16);
org$pandalanguage$pandac$FixedArray* $tmp1163 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp1162);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1164 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1165 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp1164, $tmp1165);
org$pandalanguage$pandac$IR$Value* $tmp1166 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1157, ((panda$collections$ListView*) $tmp1163), $tmp1164);
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
org$pandalanguage$pandac$IR$Value* $tmp1167 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
*(&local20) = $tmp1166;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
// unreffing REF($687:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
// unreffing REF($684:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
// unreffing REF($681:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
// unreffing REF($673:org.pandalanguage.pandac.IR.Value)
// line 377
org$pandalanguage$pandac$IR$Value* $tmp1168 = *(&local20);
panda$core$Bit $tmp1169 = panda$core$Bit$init$builtin_bit($tmp1168 == NULL);
bool $tmp1170 = $tmp1169.value;
if ($tmp1170) goto block30; else goto block31;
block30:;
// line 378
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp1171 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1171));
// unreffing rawTarget
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp1172 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
// unreffing args
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1173 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
// unreffing cl
*(&local15) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1174 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1174));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Stack* $tmp1175 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1175));
// unreffing oldContexts
*(&local12) = ((panda$collections$Stack*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp1176 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1176));
// unreffing methodDecl
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1177 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1177));
// unreffing annotations
*(&local8) = ((org$pandalanguage$pandac$Annotations*) NULL);
org$pandalanguage$pandac$Pair* $tmp1178 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1178));
// unreffing currentCaptures
*(&local7) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Type* $tmp1179 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1179));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1180 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1180));
// unreffing parameters
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1181 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1181));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block31:;
// line 380
org$pandalanguage$pandac$ASTNode* $tmp1182 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1183 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp1184 = *(&local20);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp1182, $tmp1183, param1, $tmp1184);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
org$pandalanguage$pandac$ASTNode* $tmp1185 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
*(&local14) = $tmp1182;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
// unreffing REF($773:org.pandalanguage.pandac.ASTNode)
// line 381
org$pandalanguage$pandac$ClassDecl* $tmp1186 = *(&local15);
org$pandalanguage$pandac$Type** $tmp1187 = &$tmp1186->type;
org$pandalanguage$pandac$Type* $tmp1188 = *$tmp1187;
panda$core$Bit $tmp1189 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1188);
*(&local13) = $tmp1189;
org$pandalanguage$pandac$IR$Value* $tmp1190 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1190));
// unreffing rawTarget
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp1191 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
// unreffing args
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1192 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
// unreffing cl
*(&local15) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block19;
block20:;
// line 1
// line 385
panda$collections$Stack** $tmp1193 = &param0->captures;
panda$collections$Stack* $tmp1194 = *$tmp1193;
panda$core$Object* $tmp1195 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp1194);
panda$core$Panda$unref$panda$core$Object$Q($tmp1195);
// unreffing REF($815:panda.collections.Stack.T)
// line 386
panda$collections$Stack* $tmp1196 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
panda$collections$Stack$init($tmp1196);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
panda$collections$Stack** $tmp1197 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1198 = *$tmp1197;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
panda$collections$Stack** $tmp1199 = &param0->enclosingContexts;
*$tmp1199 = $tmp1196;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
// unreffing REF($821:panda.collections.Stack<org.pandalanguage.pandac.Compiler.EnclosingContext>)
// line 387
org$pandalanguage$pandac$MethodDecl* $tmp1200 = *(&local9);
org$pandalanguage$pandac$SymbolTable** $tmp1201 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1202 = *$tmp1201;
org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$SymbolTable$Q(param0, $tmp1200, $tmp1202);
// line 388
panda$collections$Stack* $tmp1203 = *(&local12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
panda$collections$Stack** $tmp1204 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1205 = *$tmp1204;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1205));
panda$collections$Stack** $tmp1206 = &param0->enclosingContexts;
*$tmp1206 = $tmp1203;
// line 389
org$pandalanguage$pandac$ASTNode* $tmp1207 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1208 = (panda$core$Int64) {31};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1207, $tmp1208, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1207));
org$pandalanguage$pandac$ASTNode* $tmp1209 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
*(&local14) = $tmp1207;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1207));
// unreffing REF($852:org.pandalanguage.pandac.ASTNode)
// line 390
panda$core$Bit $tmp1210 = panda$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp1210;
goto block19;
block19:;
// line 392
panda$collections$Array* $tmp1211 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1211);
*(&local21) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1211));
panda$collections$Array* $tmp1212 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1212));
*(&local21) = $tmp1211;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1211));
// unreffing REF($870:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 393
*(&local22) = ((org$pandalanguage$pandac$Type*) NULL);
// line 394
org$pandalanguage$pandac$MethodDecl* $tmp1213 = *(&local9);
org$pandalanguage$pandac$Annotations** $tmp1214 = &$tmp1213->annotations;
org$pandalanguage$pandac$Annotations* $tmp1215 = *$tmp1214;
panda$core$Bit $tmp1216 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp1215);
bool $tmp1217 = $tmp1216.value;
if ($tmp1217) goto block32; else goto block34;
block32:;
// line 395
org$pandalanguage$pandac$MethodDecl* $tmp1218 = *(&local9);
org$pandalanguage$pandac$Type* $tmp1219 = org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type($tmp1218);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1219));
org$pandalanguage$pandac$Type* $tmp1220 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1220));
*(&local22) = $tmp1219;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1219));
// unreffing REF($894:org.pandalanguage.pandac.Type)
goto block33;
block34:;
// line 1
// line 398
org$pandalanguage$pandac$MethodDecl* $tmp1221 = *(&local9);
org$pandalanguage$pandac$MethodDecl* $tmp1222 = *(&local9);
panda$core$Weak** $tmp1223 = &$tmp1222->owner;
panda$core$Weak* $tmp1224 = *$tmp1223;
panda$core$Object* $tmp1225 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1224);
org$pandalanguage$pandac$Type** $tmp1226 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1225)->type;
org$pandalanguage$pandac$Type* $tmp1227 = *$tmp1226;
panda$core$Bit $tmp1228 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp1229 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp1221, $tmp1227, $tmp1228);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
org$pandalanguage$pandac$Type* $tmp1230 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
*(&local22) = $tmp1229;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
// unreffing REF($917:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1225);
// unreffing REF($912:panda.core.Weak.T)
goto block33;
block33:;
// line 400
org$pandalanguage$pandac$Type* $tmp1231 = *(&local22);
org$pandalanguage$pandac$Type* $tmp1232 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1231);
*(&local23) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
org$pandalanguage$pandac$Type* $tmp1233 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
*(&local23) = $tmp1232;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
// unreffing REF($933:org.pandalanguage.pandac.Type)
// line 401
panda$collections$Array* $tmp1234 = *(&local21);
org$pandalanguage$pandac$ASTNode* $tmp1235 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1236 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp1237 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1238 = (panda$core$Int64) {3};
org$pandalanguage$pandac$MethodDecl* $tmp1239 = *(&local9);
org$pandalanguage$pandac$Type* $tmp1240 = *(&local23);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type($tmp1237, $tmp1238, $tmp1239, $tmp1240);
org$pandalanguage$pandac$Type* $tmp1241 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp1242 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1241);
org$pandalanguage$pandac$IR$Value* $tmp1243 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1237, $tmp1242);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp1235, $tmp1236, param1, $tmp1243);
panda$collections$Array$add$panda$collections$Array$T($tmp1234, ((panda$core$Object*) $tmp1235));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1243));
// unreffing REF($957:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1242));
// unreffing REF($956:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1241));
// unreffing REF($955:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1237));
// unreffing REF($949:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1235));
// unreffing REF($947:org.pandalanguage.pandac.ASTNode)
// line 403
panda$collections$Array* $tmp1244 = *(&local21);
org$pandalanguage$pandac$ASTNode* $tmp1245 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp1244, ((panda$core$Object*) $tmp1245));
// line 404
*(&local24) = ((org$pandalanguage$pandac$Type*) NULL);
// line 405
panda$core$Bit $tmp1246 = *(&local13);
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block35; else goto block37;
block35:;
// line 406
org$pandalanguage$pandac$Type* $tmp1248 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1248));
org$pandalanguage$pandac$Type* $tmp1249 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1249));
*(&local24) = $tmp1248;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1248));
// unreffing REF($991:org.pandalanguage.pandac.Type)
goto block36;
block37:;
// line 1
// line 409
org$pandalanguage$pandac$Type* $tmp1250 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1250));
org$pandalanguage$pandac$Type* $tmp1251 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1251));
*(&local24) = $tmp1250;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1250));
// unreffing REF($1004:org.pandalanguage.pandac.Type)
goto block36;
block36:;
// line 411
org$pandalanguage$pandac$IR$Value* $tmp1252 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1253 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp1254 = *(&local24);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1252, $tmp1253, $tmp1254);
panda$collections$Array* $tmp1255 = *(&local21);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1256 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1257 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp1256, $tmp1257);
org$pandalanguage$pandac$IR$Value* $tmp1258 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1252, ((panda$collections$ListView*) $tmp1255), $tmp1256);
org$pandalanguage$pandac$MethodDecl* $tmp1259 = *(&local9);
org$pandalanguage$pandac$Type* $tmp1260 = org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type($tmp1259);
org$pandalanguage$pandac$IR$Value* $tmp1261 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1258, $tmp1260);
*(&local25) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1261));
org$pandalanguage$pandac$IR$Value* $tmp1262 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
*(&local25) = $tmp1261;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1261));
// unreffing REF($1028:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1260));
// unreffing REF($1027:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1258));
// unreffing REF($1025:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
// unreffing REF($1022:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1252));
// unreffing REF($1016:org.pandalanguage.pandac.IR.Value)
// line 413
org$pandalanguage$pandac$IR$Value* $tmp1263 = *(&local25);
org$pandalanguage$pandac$IR$Value* $tmp1264 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1263, param6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1264));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1264));
// unreffing REF($1053:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp1265 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1265));
// unreffing construct
*(&local25) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp1266 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
// unreffing methodType
*(&local24) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1267 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
// unreffing irType
*(&local23) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1268 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1268));
// unreffing pandaType
*(&local22) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1269 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
// unreffing args
*(&local21) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1270 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Stack* $tmp1271 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1271));
// unreffing oldContexts
*(&local12) = ((panda$collections$Stack*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp1272 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1272));
// unreffing methodDecl
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1273 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1273));
// unreffing annotations
*(&local8) = ((org$pandalanguage$pandac$Annotations*) NULL);
org$pandalanguage$pandac$Pair* $tmp1274 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1274));
// unreffing currentCaptures
*(&local7) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Type* $tmp1275 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1275));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1276 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1276));
// unreffing parameters
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1277 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1277));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp1264;

}
void org$pandalanguage$pandac$expression$Closure$init(org$pandalanguage$pandac$expression$Closure* param0) {

return;

}
void org$pandalanguage$pandac$expression$Closure$cleanup(org$pandalanguage$pandac$expression$Closure* param0) {

// line 23
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

