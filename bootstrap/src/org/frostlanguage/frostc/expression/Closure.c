#include "org/frostlanguage/frostc/expression/Closure.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Type.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlanguage/frostc/Annotations.h"
#include "frost/core/Bit.h"
#include "frost/core/Weak.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlanguage/frostc/Position.h"
#include "frost/collections/Array.h"
#include "org/frostlanguage/frostc/Compiler/Capture.h"
#include "org/frostlanguage/frostc/Variable.h"
#include "org/frostlanguage/frostc/FieldDecl.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/io/File.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/MapView.h"
#include "org/frostlanguage/frostc/ClassDecl/Kind.h"
#include "frost/collections/ListView.h"
#include "org/frostlanguage/frostc/SymbolTable.h"
#include "org/frostlanguage/frostc/MethodDecl/Parameter.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/parser/Token/Kind.h"
#include "org/frostlanguage/frostc/MethodDecl/Kind.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "org/frostlanguage/frostc/FieldDecl/Kind.h"
#include "frost/collections/Key.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "org/frostlanguage/frostc/Compiler/AutoScope.h"
#include "org/frostlanguage/frostc/Pair.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlanguage/frostc/Scanner.h"
#include "org/frostlanguage/frostc/Variable/Kind.h"
#include "org/frostlanguage/frostc/Variable/Storage.h"
#include "org/frostlanguage/frostc/Type/Kind.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "frost/collections/HashSet.h"
#include "frost/core/MutableString.h"
#include "frost/threads/MessageQueue.h"
#include "frost/collections/IdentityMap.h"
#include "frost/core/Immutable.h"
#include "org/frostlanguage/frostc/Compiler/Error.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Map.h"
#include "org/frostlanguage/frostc/expression/Call.h"


static frost$core$String $s1;
org$frostlanguage$frostc$expression$Closure$class_type org$frostlanguage$frostc$expression$Closure$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$expression$Closure$cleanup} };

typedef frost$collections$Iterator* (*$fn74)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn78)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn83)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn119)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn165)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn169)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn174)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn325)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn329)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn334)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn427)(frost$core$Object*);
typedef frost$core$Int64 (*$fn468)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn491)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn693)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn716)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn821)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn838)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn842)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn847)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn906)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn910)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn936)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn940)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn945)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1010)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1071)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn1085)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn1089)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1100)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn1104)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1109)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65", 43, -7031452447818998851, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6e\x6f\x6e\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x20\x6f\x77\x6e\x65\x72\x20\x66\x6f\x72\x20", 27, -299203061613670049, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65\x2e\x63\x61\x70\x74\x75\x72\x65\x64\x53\x65\x6c\x66\x54\x79\x70\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 168, 6299858400025046909, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65", 9, 1602056911729632975, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, -8865909723025372911, NULL };
static frost$core$String $s708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 4248843021992149759, NULL };
static frost$core$String $s765 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s830 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, -6960542561056411676, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, 7783089566661782278, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a", 2, 14198, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 8939304453205542054, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, 1410335929809, NULL };
static frost$core$String $s876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, 22706926183, NULL };
static frost$core$String $s878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s914 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -43704296328153041, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 3323213258965972710, NULL };
static frost$core$String $s930 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s987 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };

org$frostlanguage$frostc$Type* org$frostlanguage$frostc$expression$Closure$capturedSelfType$org$frostlanguage$frostc$Compiler$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Compiler* param0) {

org$frostlanguage$frostc$ClassDecl* local0 = NULL;
// line 26
frost$collections$Stack** $tmp2 = &param0->currentClass;
frost$collections$Stack* $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Object* $tmp5 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3, $tmp4);
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ClassDecl*) $tmp5)));
org$frostlanguage$frostc$ClassDecl* $tmp6 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) $tmp5);
frost$core$Frost$unref$frost$core$Object$Q($tmp5);
// unreffing REF($5:frost.collections.Stack.T)
// line 27
goto block1;
block1:;
// line 28
org$frostlanguage$frostc$ClassDecl* $tmp7 = *(&local0);
org$frostlanguage$frostc$Annotations** $tmp8 = &$tmp7->annotations;
org$frostlanguage$frostc$Annotations* $tmp9 = *$tmp8;
frost$core$Bit $tmp10 = org$frostlanguage$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp9);
frost$core$Bit $tmp11 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp10);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block3:;
// line 29
org$frostlanguage$frostc$ClassDecl* $tmp13 = *(&local0);
org$frostlanguage$frostc$Type** $tmp14 = &$tmp13->type;
org$frostlanguage$frostc$Type* $tmp15 = *$tmp14;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlanguage$frostc$ClassDecl* $tmp16 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// unreffing cl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp15;
block4:;
// line 31
org$frostlanguage$frostc$ClassDecl* $tmp17 = *(&local0);
frost$core$Weak** $tmp18 = &$tmp17->owner;
frost$core$Weak* $tmp19 = *$tmp18;
frost$core$Object* $tmp20 = frost$core$Weak$get$R$frost$core$Weak$T($tmp19);
frost$core$Bit $tmp21 = frost$core$Bit$init$builtin_bit(((org$frostlanguage$frostc$ClassDecl*) $tmp20) != NULL);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp23 = (frost$core$Int64) {31};
frost$collections$Stack** $tmp24 = &param0->currentClass;
frost$collections$Stack* $tmp25 = *$tmp24;
frost$core$Int64 $tmp26 = (frost$core$Int64) {0};
frost$core$Object* $tmp27 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp25, $tmp26);
frost$core$String** $tmp28 = &((org$frostlanguage$frostc$ClassDecl*) $tmp27)->name;
frost$core$String* $tmp29 = *$tmp28;
frost$core$String* $tmp30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s31, $tmp29);
frost$core$String* $tmp32 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp30, &$s33);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s34, $tmp23, $tmp32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing REF($60:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing REF($59:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp27);
// unreffing REF($55:frost.collections.Stack.T)
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp20);
// unreffing REF($44:frost.core.Weak.T)
// line 32
org$frostlanguage$frostc$ClassDecl* $tmp35 = *(&local0);
frost$core$Weak** $tmp36 = &$tmp35->owner;
frost$core$Weak* $tmp37 = *$tmp36;
frost$core$Object* $tmp38 = frost$core$Weak$get$R$frost$core$Weak$T($tmp37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ClassDecl*) $tmp38)));
org$frostlanguage$frostc$ClassDecl* $tmp39 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) $tmp38);
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
// unreffing REF($80:frost.core.Weak.T)
goto block1;
block2:;
frost$core$Bit $tmp40 = frost$core$Bit$init$builtin_bit(false);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp42 = (frost$core$Int64) {25};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s43, $tmp42, &$s44);
abort(); // unreachable
block7:;
abort(); // unreachable

}
org$frostlanguage$frostc$ClassDecl* org$frostlanguage$frostc$expression$Closure$createClosureClass$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlanguage$frostc$Compiler$Capture$GT$R$org$frostlanguage$frostc$ClassDecl(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$MethodDecl* param1, frost$collections$CollectionView* param2) {

org$frostlanguage$frostc$Position local0;
frost$collections$Array* local1 = NULL;
org$frostlanguage$frostc$Compiler$Capture* local2 = NULL;
org$frostlanguage$frostc$Variable* local3 = NULL;
org$frostlanguage$frostc$ClassDecl* local4 = NULL;
frost$collections$Array* local5 = NULL;
frost$collections$Array* local6 = NULL;
org$frostlanguage$frostc$Compiler$Capture* local7 = NULL;
org$frostlanguage$frostc$Variable* local8 = NULL;
org$frostlanguage$frostc$FieldDecl* local9 = NULL;
org$frostlanguage$frostc$MethodDecl* local10 = NULL;
org$frostlanguage$frostc$MethodDecl* local11 = NULL;
org$frostlanguage$frostc$Compiler$Capture* local12 = NULL;
org$frostlanguage$frostc$Variable* local13 = NULL;
org$frostlanguage$frostc$FieldDecl* local14 = NULL;
org$frostlanguage$frostc$FieldDecl* local15 = NULL;
org$frostlanguage$frostc$FieldDecl* local16 = NULL;
org$frostlanguage$frostc$FieldDecl* local17 = NULL;
// line 39
org$frostlanguage$frostc$Position* $tmp45 = &((org$frostlanguage$frostc$Symbol*) param1)->position;
org$frostlanguage$frostc$Position $tmp46 = *$tmp45;
*(&local0) = $tmp46;
// line 40
org$frostlanguage$frostc$Annotations* $tmp47 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp48 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp47, $tmp48);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
org$frostlanguage$frostc$Annotations** $tmp49 = &param1->annotations;
org$frostlanguage$frostc$Annotations* $tmp50 = *$tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
org$frostlanguage$frostc$Annotations** $tmp51 = &param1->annotations;
*$tmp51 = $tmp47;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing REF($6:org.frostlanguage.frostc.Annotations)
// line 41
frost$core$Int64* $tmp52 = &param0->closureCount;
frost$core$Int64 $tmp53 = *$tmp52;
frost$core$Int64 $tmp54 = (frost$core$Int64) {1};
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54.value;
int64_t $tmp57 = $tmp55 + $tmp56;
frost$core$Int64 $tmp58 = (frost$core$Int64) {$tmp57};
frost$core$Int64* $tmp59 = &param0->closureCount;
*$tmp59 = $tmp58;
// line 42
frost$collections$Array* $tmp60 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp60);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$collections$Array* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local1) = $tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing REF($31:frost.collections.Array<org.frostlanguage.frostc.Type>)
// line 43
frost$collections$Stack** $tmp62 = &param0->currentClass;
frost$collections$Stack* $tmp63 = *$tmp62;
frost$core$Int64 $tmp64 = (frost$core$Int64) {0};
frost$core$Object* $tmp65 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp63, $tmp64);
org$frostlanguage$frostc$Type** $tmp66 = &((org$frostlanguage$frostc$ClassDecl*) $tmp65)->type;
org$frostlanguage$frostc$Type* $tmp67 = *$tmp66;
frost$core$Bit $tmp68 = org$frostlanguage$frostc$Compiler$isImmutable$org$frostlanguage$frostc$Type$R$frost$core$Bit(param0, $tmp67);
bool $tmp69 = $tmp68.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp65);
// unreffing REF($49:frost.collections.Stack.T)
if ($tmp69) goto block1; else goto block2;
block1:;
// line 44
frost$collections$Array* $tmp70 = *(&local1);
org$frostlanguage$frostc$Type* $tmp71 = org$frostlanguage$frostc$Type$Immutable$R$org$frostlanguage$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp70, ((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($62:org.frostlanguage.frostc.Type)
// line 45
ITable* $tmp72 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[0];
frost$collections$Iterator* $tmp75 = $tmp73(((frost$collections$Iterable*) param2));
goto block3;
block3:;
ITable* $tmp76 = $tmp75->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp76 = $tmp76->next;
}
$fn78 $tmp77 = $tmp76->methods[0];
frost$core$Bit $tmp79 = $tmp77($tmp75);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlanguage$frostc$Compiler$Capture*) NULL);
ITable* $tmp81 = $tmp75->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[1];
frost$core$Object* $tmp84 = $tmp82($tmp75);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Compiler$Capture*) $tmp84)));
org$frostlanguage$frostc$Compiler$Capture* $tmp85 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local2) = ((org$frostlanguage$frostc$Compiler$Capture*) $tmp84);
// line 46
org$frostlanguage$frostc$Compiler$Capture* $tmp86 = *(&local2);
frost$core$Int64* $tmp87 = &$tmp86->$rawValue;
frost$core$Int64 $tmp88 = *$tmp87;
frost$core$Int64 $tmp89 = (frost$core$Int64) {0};
frost$core$Bit $tmp90 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp88, $tmp89);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block7; else goto block8;
block7:;
org$frostlanguage$frostc$Variable** $tmp92 = (org$frostlanguage$frostc$Variable**) ($tmp86->$data + 0);
org$frostlanguage$frostc$Variable* $tmp93 = *$tmp92;
*(&local3) = ((org$frostlanguage$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
org$frostlanguage$frostc$Variable* $tmp94 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local3) = $tmp93;
// line 48
org$frostlanguage$frostc$Variable* $tmp95 = *(&local3);
org$frostlanguage$frostc$Type** $tmp96 = &$tmp95->type;
org$frostlanguage$frostc$Type* $tmp97 = *$tmp96;
frost$core$Bit $tmp98 = org$frostlanguage$frostc$Compiler$isImmutable$org$frostlanguage$frostc$Type$R$frost$core$Bit(param0, $tmp97);
frost$core$Bit $tmp99 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp98);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block9; else goto block10;
block9:;
// line 49
frost$collections$Array* $tmp101 = *(&local1);
frost$collections$Array$clear($tmp101);
// line 50
org$frostlanguage$frostc$Variable* $tmp102 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing v
*(&local3) = ((org$frostlanguage$frostc$Variable*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp84);
// unreffing REF($83:frost.collections.Iterator.T)
org$frostlanguage$frostc$Compiler$Capture* $tmp103 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing c
*(&local2) = ((org$frostlanguage$frostc$Compiler$Capture*) NULL);
goto block5;
block10:;
org$frostlanguage$frostc$Variable* $tmp104 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing v
*(&local3) = ((org$frostlanguage$frostc$Variable*) NULL);
goto block6;
block8:;
frost$core$Int64 $tmp105 = (frost$core$Int64) {2};
frost$core$Bit $tmp106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp88, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block11; else goto block12;
block11:;
// line 54
org$frostlanguage$frostc$Type* $tmp108 = org$frostlanguage$frostc$expression$Closure$capturedSelfType$org$frostlanguage$frostc$Compiler$R$org$frostlanguage$frostc$Type(param0);
frost$core$Bit $tmp109 = org$frostlanguage$frostc$Compiler$isImmutable$org$frostlanguage$frostc$Type$R$frost$core$Bit(param0, $tmp108);
frost$core$Bit $tmp110 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp109);
bool $tmp111 = $tmp110.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($146:org.frostlanguage.frostc.Type)
if ($tmp111) goto block13; else goto block14;
block13:;
// line 55
frost$collections$Array* $tmp112 = *(&local1);
frost$collections$Array$clear($tmp112);
// line 56
frost$core$Frost$unref$frost$core$Object$Q($tmp84);
// unreffing REF($83:frost.collections.Iterator.T)
org$frostlanguage$frostc$Compiler$Capture* $tmp113 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing c
*(&local2) = ((org$frostlanguage$frostc$Compiler$Capture*) NULL);
goto block5;
block14:;
goto block6;
block12:;
// line 60
frost$core$Bit $tmp114 = frost$core$Bit$init$builtin_bit(false);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {60};
org$frostlanguage$frostc$Compiler$Capture* $tmp117 = *(&local2);
$fn119 $tmp118 = ($fn119) ((frost$core$Object*) $tmp117)->$class->vtable[0];
frost$core$String* $tmp120 = $tmp118(((frost$core$Object*) $tmp117));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s121, $tmp116, $tmp120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($177:frost.core.String)
abort(); // unreachable
block15:;
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp84);
// unreffing REF($83:frost.collections.Iterator.T)
org$frostlanguage$frostc$Compiler$Capture* $tmp122 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing c
*(&local2) = ((org$frostlanguage$frostc$Compiler$Capture*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing REF($72:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block2;
block2:;
// line 65
org$frostlanguage$frostc$ClassDecl* $tmp123 = (org$frostlanguage$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$class);
frost$collections$Stack** $tmp124 = &param0->currentClass;
frost$collections$Stack* $tmp125 = *$tmp124;
frost$core$Int64 $tmp126 = (frost$core$Int64) {0};
frost$core$Object* $tmp127 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp125, $tmp126);
frost$io$File** $tmp128 = &((org$frostlanguage$frostc$ClassDecl*) $tmp127)->source;
frost$io$File* $tmp129 = *$tmp128;
org$frostlanguage$frostc$Position $tmp130 = *(&local0);
frost$collections$HashMap* $tmp131 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp131);
org$frostlanguage$frostc$Annotations* $tmp132 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp133 = (frost$core$Int64) {8192};
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp132, $tmp133);
frost$core$Int64 $tmp134 = (frost$core$Int64) {0};
org$frostlanguage$frostc$ClassDecl$Kind $tmp135 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp134);
frost$collections$Stack** $tmp136 = &param0->currentClass;
frost$collections$Stack* $tmp137 = *$tmp136;
frost$core$Int64 $tmp138 = (frost$core$Int64) {0};
frost$core$Object* $tmp139 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp137, $tmp138);
frost$core$String** $tmp140 = &((org$frostlanguage$frostc$ClassDecl*) $tmp139)->name;
frost$core$String* $tmp141 = *$tmp140;
frost$core$String* $tmp142 = frost$core$String$convert$R$frost$core$String($tmp141);
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp142, &$s144);
frost$core$Int64* $tmp145 = &param0->closureCount;
frost$core$Int64 $tmp146 = *$tmp145;
frost$core$Int64$wrapper* $tmp147;
$tmp147 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp147->value = $tmp146;
frost$core$String* $tmp148 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp143, ((frost$core$Object*) $tmp147));
frost$core$String* $tmp149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp148, &$s150);
frost$collections$Array* $tmp151 = *(&local1);
frost$collections$Array* $tmp152 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp152);
org$frostlanguage$frostc$SymbolTable** $tmp153 = &param0->root;
org$frostlanguage$frostc$SymbolTable* $tmp154 = *$tmp153;
org$frostlanguage$frostc$ClassDecl$init$frost$io$File$org$frostlanguage$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$frost$collections$Array$LTorg$frostlanguage$frostc$ClassDecl$GenericParameter$GT$org$frostlanguage$frostc$SymbolTable($tmp123, $tmp129, $tmp130, ((frost$collections$MapView*) $tmp131), ((frost$core$String*) NULL), $tmp132, $tmp135, $tmp149, ((frost$collections$ListView*) $tmp151), $tmp152, $tmp154);
*(&local4) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
org$frostlanguage$frostc$ClassDecl* $tmp155 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local4) = $tmp123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing REF($234:frost.collections.Array<org.frostlanguage.frostc.ClassDecl.GenericParameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing REF($231:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing REF($230:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing REF($229:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
// unreffing REF($226:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($225:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp139);
// unreffing REF($221:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing REF($212:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($208:frost.collections.HashMap<frost.core.String, frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
// unreffing REF($203:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// unreffing REF($198:org.frostlanguage.frostc.ClassDecl)
// line 69
org$frostlanguage$frostc$ClassDecl* $tmp156 = *(&local4);
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp158 = &$tmp156->external;
*$tmp158 = $tmp157;
// line 72
frost$collections$Array* $tmp159 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp159);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
frost$collections$Array* $tmp160 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
*(&local5) = $tmp159;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
// unreffing REF($286:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 73
frost$collections$Array* $tmp161 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp161);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
frost$collections$Array* $tmp162 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local6) = $tmp161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// unreffing REF($300:frost.collections.Array<org.frostlanguage.frostc.MethodDecl.Parameter>)
// line 74
ITable* $tmp163 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp163->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[0];
frost$collections$Iterator* $tmp166 = $tmp164(((frost$collections$Iterable*) param2));
goto block17;
block17:;
ITable* $tmp167 = $tmp166->$class->itable;
while ($tmp167->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp167 = $tmp167->next;
}
$fn169 $tmp168 = $tmp167->methods[0];
frost$core$Bit $tmp170 = $tmp168($tmp166);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block19; else goto block18;
block18:;
*(&local7) = ((org$frostlanguage$frostc$Compiler$Capture*) NULL);
ITable* $tmp172 = $tmp166->$class->itable;
while ($tmp172->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp172 = $tmp172->next;
}
$fn174 $tmp173 = $tmp172->methods[1];
frost$core$Object* $tmp175 = $tmp173($tmp166);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Compiler$Capture*) $tmp175)));
org$frostlanguage$frostc$Compiler$Capture* $tmp176 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local7) = ((org$frostlanguage$frostc$Compiler$Capture*) $tmp175);
// line 75
org$frostlanguage$frostc$Compiler$Capture* $tmp177 = *(&local7);
frost$core$Int64* $tmp178 = &$tmp177->$rawValue;
frost$core$Int64 $tmp179 = *$tmp178;
frost$core$Int64 $tmp180 = (frost$core$Int64) {0};
frost$core$Bit $tmp181 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp179, $tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block21; else goto block22;
block21:;
org$frostlanguage$frostc$Variable** $tmp183 = (org$frostlanguage$frostc$Variable**) ($tmp177->$data + 0);
org$frostlanguage$frostc$Variable* $tmp184 = *$tmp183;
*(&local8) = ((org$frostlanguage$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
org$frostlanguage$frostc$Variable* $tmp185 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local8) = $tmp184;
// line 77
frost$collections$Array* $tmp186 = *(&local6);
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp187 = (org$frostlanguage$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Parameter$class);
org$frostlanguage$frostc$Variable* $tmp188 = *(&local8);
frost$core$String** $tmp189 = &((org$frostlanguage$frostc$Symbol*) $tmp188)->name;
frost$core$String* $tmp190 = *$tmp189;
org$frostlanguage$frostc$Variable* $tmp191 = *(&local8);
org$frostlanguage$frostc$Type** $tmp192 = &$tmp191->type;
org$frostlanguage$frostc$Type* $tmp193 = *$tmp192;
org$frostlanguage$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlanguage$frostc$Type($tmp187, $tmp190, $tmp193);
frost$collections$Array$add$frost$collections$Array$T($tmp186, ((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// unreffing REF($356:org.frostlanguage.frostc.MethodDecl.Parameter)
// line 79
frost$collections$Array* $tmp194 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp195 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp196 = (frost$core$Int64) {5};
org$frostlanguage$frostc$Position $tmp197 = *(&local0);
org$frostlanguage$frostc$ASTNode* $tmp198 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp199 = (frost$core$Int64) {16};
org$frostlanguage$frostc$Position $tmp200 = *(&local0);
org$frostlanguage$frostc$ASTNode* $tmp201 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp202 = (frost$core$Int64) {22};
org$frostlanguage$frostc$Position $tmp203 = *(&local0);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp201, $tmp202, $tmp203, &$s204);
org$frostlanguage$frostc$Variable* $tmp205 = *(&local8);
frost$core$String** $tmp206 = &((org$frostlanguage$frostc$Symbol*) $tmp205)->name;
frost$core$String* $tmp207 = *$tmp206;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String($tmp198, $tmp199, $tmp200, $tmp201, $tmp207);
frost$core$Int64 $tmp208 = (frost$core$Int64) {74};
org$frostlanguage$frostc$parser$Token$Kind $tmp209 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp208);
org$frostlanguage$frostc$ASTNode* $tmp210 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp211 = (frost$core$Int64) {22};
org$frostlanguage$frostc$Position $tmp212 = *(&local0);
org$frostlanguage$frostc$Variable* $tmp213 = *(&local8);
frost$core$String** $tmp214 = &((org$frostlanguage$frostc$Symbol*) $tmp213)->name;
frost$core$String* $tmp215 = *$tmp214;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp210, $tmp211, $tmp212, $tmp215);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp195, $tmp196, $tmp197, $tmp198, $tmp209, $tmp210);
frost$collections$Array$add$frost$collections$Array$T($tmp194, ((frost$core$Object*) $tmp195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing REF($390:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing REF($379:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing REF($376:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// unreffing REF($373:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$Variable* $tmp216 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// unreffing v
*(&local8) = ((org$frostlanguage$frostc$Variable*) NULL);
goto block20;
block22:;
frost$core$Int64 $tmp217 = (frost$core$Int64) {1};
frost$core$Bit $tmp218 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp179, $tmp217);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block23; else goto block24;
block23:;
org$frostlanguage$frostc$FieldDecl** $tmp220 = (org$frostlanguage$frostc$FieldDecl**) ($tmp177->$data + 0);
org$frostlanguage$frostc$FieldDecl* $tmp221 = *$tmp220;
*(&local9) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
org$frostlanguage$frostc$FieldDecl* $tmp222 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local9) = $tmp221;
// line 85
frost$collections$Array* $tmp223 = *(&local6);
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp224 = (org$frostlanguage$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Parameter$class);
org$frostlanguage$frostc$FieldDecl* $tmp225 = *(&local9);
frost$core$String** $tmp226 = &((org$frostlanguage$frostc$Symbol*) $tmp225)->name;
frost$core$String* $tmp227 = *$tmp226;
org$frostlanguage$frostc$FieldDecl* $tmp228 = *(&local9);
org$frostlanguage$frostc$Type** $tmp229 = &$tmp228->type;
org$frostlanguage$frostc$Type* $tmp230 = *$tmp229;
org$frostlanguage$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlanguage$frostc$Type($tmp224, $tmp227, $tmp230);
frost$collections$Array$add$frost$collections$Array$T($tmp223, ((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing REF($435:org.frostlanguage.frostc.MethodDecl.Parameter)
// line 87
frost$collections$Array* $tmp231 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp232 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp233 = (frost$core$Int64) {5};
org$frostlanguage$frostc$Position $tmp234 = *(&local0);
org$frostlanguage$frostc$ASTNode* $tmp235 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp236 = (frost$core$Int64) {16};
org$frostlanguage$frostc$Position $tmp237 = *(&local0);
org$frostlanguage$frostc$ASTNode* $tmp238 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp239 = (frost$core$Int64) {22};
org$frostlanguage$frostc$Position $tmp240 = *(&local0);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp238, $tmp239, $tmp240, &$s241);
org$frostlanguage$frostc$FieldDecl* $tmp242 = *(&local9);
frost$core$String** $tmp243 = &((org$frostlanguage$frostc$Symbol*) $tmp242)->name;
frost$core$String* $tmp244 = *$tmp243;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String($tmp235, $tmp236, $tmp237, $tmp238, $tmp244);
frost$core$Int64 $tmp245 = (frost$core$Int64) {74};
org$frostlanguage$frostc$parser$Token$Kind $tmp246 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp245);
org$frostlanguage$frostc$ASTNode* $tmp247 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp248 = (frost$core$Int64) {22};
org$frostlanguage$frostc$Position $tmp249 = *(&local0);
org$frostlanguage$frostc$FieldDecl* $tmp250 = *(&local9);
frost$core$String** $tmp251 = &((org$frostlanguage$frostc$Symbol*) $tmp250)->name;
frost$core$String* $tmp252 = *$tmp251;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp247, $tmp248, $tmp249, $tmp252);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp232, $tmp233, $tmp234, $tmp235, $tmp246, $tmp247);
frost$collections$Array$add$frost$collections$Array$T($tmp231, ((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing REF($469:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing REF($458:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($455:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// unreffing REF($452:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FieldDecl* $tmp253 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing f
*(&local9) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
goto block20;
block24:;
frost$core$Int64 $tmp254 = (frost$core$Int64) {2};
frost$core$Bit $tmp255 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp179, $tmp254);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block25; else goto block20;
block25:;
// line 93
frost$collections$Array* $tmp257 = *(&local6);
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp258 = (org$frostlanguage$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Parameter$class);
org$frostlanguage$frostc$Type* $tmp259 = org$frostlanguage$frostc$expression$Closure$capturedSelfType$org$frostlanguage$frostc$Compiler$R$org$frostlanguage$frostc$Type(param0);
org$frostlanguage$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlanguage$frostc$Type($tmp258, &$s260, $tmp259);
frost$collections$Array$add$frost$collections$Array$T($tmp257, ((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing REF($506:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($505:org.frostlanguage.frostc.MethodDecl.Parameter)
// line 96
frost$collections$Array* $tmp261 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp262 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp263 = (frost$core$Int64) {5};
org$frostlanguage$frostc$Position $tmp264 = *(&local0);
org$frostlanguage$frostc$ASTNode* $tmp265 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp266 = (frost$core$Int64) {16};
org$frostlanguage$frostc$Position $tmp267 = *(&local0);
org$frostlanguage$frostc$ASTNode* $tmp268 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp269 = (frost$core$Int64) {22};
org$frostlanguage$frostc$Position $tmp270 = *(&local0);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp268, $tmp269, $tmp270, &$s271);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String($tmp265, $tmp266, $tmp267, $tmp268, &$s272);
frost$core$Int64 $tmp273 = (frost$core$Int64) {74};
org$frostlanguage$frostc$parser$Token$Kind $tmp274 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp273);
org$frostlanguage$frostc$ASTNode* $tmp275 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp276 = (frost$core$Int64) {22};
org$frostlanguage$frostc$Position $tmp277 = *(&local0);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp275, $tmp276, $tmp277, &$s278);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp262, $tmp263, $tmp264, $tmp265, $tmp274, $tmp275);
frost$collections$Array$add$frost$collections$Array$T($tmp261, ((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// unreffing REF($532:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing REF($525:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing REF($522:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
// unreffing REF($519:org.frostlanguage.frostc.ASTNode)
goto block20;
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp175);
// unreffing REF($328:frost.collections.Iterator.T)
org$frostlanguage$frostc$Compiler$Capture* $tmp279 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
// unreffing c
*(&local7) = ((org$frostlanguage$frostc$Compiler$Capture*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// unreffing REF($317:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 104
org$frostlanguage$frostc$MethodDecl* $tmp280 = (org$frostlanguage$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$class);
org$frostlanguage$frostc$ClassDecl* $tmp281 = *(&local4);
org$frostlanguage$frostc$Position $tmp282 = *(&local0);
org$frostlanguage$frostc$Annotations* $tmp283 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp284 = (frost$core$Int64) {8192};
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp283, $tmp284);
frost$core$Int64 $tmp285 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp286 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp285);
frost$collections$Array* $tmp287 = *(&local6);
org$frostlanguage$frostc$Type* $tmp288 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
frost$collections$Array* $tmp289 = *(&local5);
org$frostlanguage$frostc$FixedArray* $tmp290 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp289);
org$frostlanguage$frostc$MethodDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$Parameter$GT$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp280, $tmp281, $tmp282, ((frost$core$String*) NULL), $tmp283, $tmp286, &$s291, ((frost$collections$Array*) NULL), $tmp287, $tmp288, $tmp290);
*(&local10) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
org$frostlanguage$frostc$MethodDecl* $tmp292 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local10) = $tmp280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// unreffing REF($577:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing REF($574:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// unreffing REF($568:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing REF($565:org.frostlanguage.frostc.MethodDecl)
// line 108
org$frostlanguage$frostc$ClassDecl* $tmp293 = *(&local4);
frost$collections$Array** $tmp294 = &$tmp293->methods;
frost$collections$Array* $tmp295 = *$tmp294;
org$frostlanguage$frostc$MethodDecl* $tmp296 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp295, ((frost$core$Object*) $tmp296));
// line 109
org$frostlanguage$frostc$ClassDecl* $tmp297 = *(&local4);
org$frostlanguage$frostc$SymbolTable** $tmp298 = &$tmp297->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp299 = *$tmp298;
org$frostlanguage$frostc$MethodDecl* $tmp300 = *(&local10);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp299, ((org$frostlanguage$frostc$Symbol*) $tmp300));
// line 112
org$frostlanguage$frostc$MethodDecl* $tmp301 = (org$frostlanguage$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$class);
org$frostlanguage$frostc$ClassDecl* $tmp302 = *(&local4);
org$frostlanguage$frostc$Position $tmp303 = *(&local0);
org$frostlanguage$frostc$Annotations* $tmp304 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp305 = (frost$core$Int64) {32};
frost$core$Int64 $tmp306 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp307 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp305, $tmp306);
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp304, $tmp307);
frost$core$Int64 $tmp308 = (frost$core$Int64) {0};
org$frostlanguage$frostc$MethodDecl$Kind $tmp309 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp308);
frost$collections$Array* $tmp310 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp310);
org$frostlanguage$frostc$Type* $tmp311 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$FixedArray* $tmp312 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp312);
org$frostlanguage$frostc$MethodDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$Parameter$GT$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp301, $tmp302, $tmp303, ((frost$core$String*) NULL), $tmp304, $tmp309, &$s313, ((frost$collections$Array*) NULL), $tmp310, $tmp311, $tmp312);
*(&local11) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
org$frostlanguage$frostc$MethodDecl* $tmp314 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local11) = $tmp301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing REF($630:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// unreffing REF($629:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// unreffing REF($626:frost.collections.Array<org.frostlanguage.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing REF($619:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// unreffing REF($616:org.frostlanguage.frostc.MethodDecl)
// line 116
org$frostlanguage$frostc$ClassDecl* $tmp315 = *(&local4);
frost$collections$Array** $tmp316 = &$tmp315->methods;
frost$collections$Array* $tmp317 = *$tmp316;
org$frostlanguage$frostc$MethodDecl* $tmp318 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp317, ((frost$core$Object*) $tmp318));
// line 117
org$frostlanguage$frostc$ClassDecl* $tmp319 = *(&local4);
org$frostlanguage$frostc$SymbolTable** $tmp320 = &$tmp319->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp321 = *$tmp320;
org$frostlanguage$frostc$MethodDecl* $tmp322 = *(&local11);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp321, ((org$frostlanguage$frostc$Symbol*) $tmp322));
// line 120
ITable* $tmp323 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp323->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp323 = $tmp323->next;
}
$fn325 $tmp324 = $tmp323->methods[0];
frost$collections$Iterator* $tmp326 = $tmp324(((frost$collections$Iterable*) param2));
goto block26;
block26:;
ITable* $tmp327 = $tmp326->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[0];
frost$core$Bit $tmp330 = $tmp328($tmp326);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block28; else goto block27;
block27:;
*(&local12) = ((org$frostlanguage$frostc$Compiler$Capture*) NULL);
ITable* $tmp332 = $tmp326->$class->itable;
while ($tmp332->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp332 = $tmp332->next;
}
$fn334 $tmp333 = $tmp332->methods[1];
frost$core$Object* $tmp335 = $tmp333($tmp326);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Compiler$Capture*) $tmp335)));
org$frostlanguage$frostc$Compiler$Capture* $tmp336 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local12) = ((org$frostlanguage$frostc$Compiler$Capture*) $tmp335);
// line 121
org$frostlanguage$frostc$Compiler$Capture* $tmp337 = *(&local12);
frost$core$Int64* $tmp338 = &$tmp337->$rawValue;
frost$core$Int64 $tmp339 = *$tmp338;
frost$core$Int64 $tmp340 = (frost$core$Int64) {0};
frost$core$Bit $tmp341 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp339, $tmp340);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block30; else goto block31;
block30:;
org$frostlanguage$frostc$Variable** $tmp343 = (org$frostlanguage$frostc$Variable**) ($tmp337->$data + 0);
org$frostlanguage$frostc$Variable* $tmp344 = *$tmp343;
*(&local13) = ((org$frostlanguage$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
org$frostlanguage$frostc$Variable* $tmp345 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local13) = $tmp344;
// line 123
org$frostlanguage$frostc$FieldDecl* $tmp346 = (org$frostlanguage$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlanguage$frostc$FieldDecl$class);
org$frostlanguage$frostc$ClassDecl* $tmp347 = *(&local4);
org$frostlanguage$frostc$Position $tmp348 = *(&local0);
org$frostlanguage$frostc$Annotations* $tmp349 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp350 = (frost$core$Int64) {8192};
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp349, $tmp350);
frost$core$Int64 $tmp351 = (frost$core$Int64) {1};
org$frostlanguage$frostc$FieldDecl$Kind $tmp352 = org$frostlanguage$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp351);
org$frostlanguage$frostc$Variable* $tmp353 = *(&local13);
frost$core$String** $tmp354 = &((org$frostlanguage$frostc$Symbol*) $tmp353)->name;
frost$core$String* $tmp355 = *$tmp354;
org$frostlanguage$frostc$Variable* $tmp356 = *(&local13);
org$frostlanguage$frostc$Type** $tmp357 = &$tmp356->type;
org$frostlanguage$frostc$Type* $tmp358 = *$tmp357;
org$frostlanguage$frostc$FieldDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$FieldDecl$Kind$frost$core$String$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$ASTNode$Q($tmp346, $tmp347, $tmp348, ((frost$core$String*) NULL), $tmp349, $tmp352, $tmp355, $tmp358, ((org$frostlanguage$frostc$ASTNode*) NULL));
*(&local14) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
org$frostlanguage$frostc$FieldDecl* $tmp359 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local14) = $tmp346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// unreffing REF($716:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// unreffing REF($713:org.frostlanguage.frostc.FieldDecl)
// line 126
org$frostlanguage$frostc$ClassDecl* $tmp360 = *(&local4);
org$frostlanguage$frostc$SymbolTable** $tmp361 = &$tmp360->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp362 = *$tmp361;
org$frostlanguage$frostc$FieldDecl* $tmp363 = *(&local14);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp362, ((org$frostlanguage$frostc$Symbol*) $tmp363));
// line 127
org$frostlanguage$frostc$ClassDecl* $tmp364 = *(&local4);
frost$collections$Array** $tmp365 = &$tmp364->fields;
frost$collections$Array* $tmp366 = *$tmp365;
org$frostlanguage$frostc$FieldDecl* $tmp367 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp366, ((frost$core$Object*) $tmp367));
org$frostlanguage$frostc$FieldDecl* $tmp368 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing field
*(&local14) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
org$frostlanguage$frostc$Variable* $tmp369 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// unreffing v
*(&local13) = ((org$frostlanguage$frostc$Variable*) NULL);
goto block29;
block31:;
frost$core$Int64 $tmp370 = (frost$core$Int64) {1};
frost$core$Bit $tmp371 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp339, $tmp370);
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block32; else goto block33;
block32:;
org$frostlanguage$frostc$FieldDecl** $tmp373 = (org$frostlanguage$frostc$FieldDecl**) ($tmp337->$data + 0);
org$frostlanguage$frostc$FieldDecl* $tmp374 = *$tmp373;
*(&local15) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
org$frostlanguage$frostc$FieldDecl* $tmp375 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local15) = $tmp374;
// line 130
org$frostlanguage$frostc$FieldDecl* $tmp376 = (org$frostlanguage$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlanguage$frostc$FieldDecl$class);
org$frostlanguage$frostc$ClassDecl* $tmp377 = *(&local4);
org$frostlanguage$frostc$Position $tmp378 = *(&local0);
org$frostlanguage$frostc$Annotations* $tmp379 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp380 = (frost$core$Int64) {8192};
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp379, $tmp380);
frost$core$Int64 $tmp381 = (frost$core$Int64) {1};
org$frostlanguage$frostc$FieldDecl$Kind $tmp382 = org$frostlanguage$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp381);
org$frostlanguage$frostc$FieldDecl* $tmp383 = *(&local15);
frost$core$String** $tmp384 = &((org$frostlanguage$frostc$Symbol*) $tmp383)->name;
frost$core$String* $tmp385 = *$tmp384;
org$frostlanguage$frostc$FieldDecl* $tmp386 = *(&local15);
org$frostlanguage$frostc$Type** $tmp387 = &$tmp386->type;
org$frostlanguage$frostc$Type* $tmp388 = *$tmp387;
org$frostlanguage$frostc$FieldDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$FieldDecl$Kind$frost$core$String$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$ASTNode$Q($tmp376, $tmp377, $tmp378, ((frost$core$String*) NULL), $tmp379, $tmp382, $tmp385, $tmp388, ((org$frostlanguage$frostc$ASTNode*) NULL));
*(&local16) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
org$frostlanguage$frostc$FieldDecl* $tmp389 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local16) = $tmp376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// unreffing REF($785:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// unreffing REF($782:org.frostlanguage.frostc.FieldDecl)
// line 133
org$frostlanguage$frostc$ClassDecl* $tmp390 = *(&local4);
org$frostlanguage$frostc$SymbolTable** $tmp391 = &$tmp390->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp392 = *$tmp391;
org$frostlanguage$frostc$FieldDecl* $tmp393 = *(&local16);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp392, ((org$frostlanguage$frostc$Symbol*) $tmp393));
// line 134
org$frostlanguage$frostc$ClassDecl* $tmp394 = *(&local4);
frost$collections$Array** $tmp395 = &$tmp394->fields;
frost$collections$Array* $tmp396 = *$tmp395;
org$frostlanguage$frostc$FieldDecl* $tmp397 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp396, ((frost$core$Object*) $tmp397));
org$frostlanguage$frostc$FieldDecl* $tmp398 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
// unreffing field
*(&local16) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
org$frostlanguage$frostc$FieldDecl* $tmp399 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
// unreffing f
*(&local15) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
goto block29;
block33:;
frost$core$Int64 $tmp400 = (frost$core$Int64) {2};
frost$core$Bit $tmp401 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp339, $tmp400);
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block34; else goto block35;
block34:;
// line 137
org$frostlanguage$frostc$FieldDecl* $tmp403 = (org$frostlanguage$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlanguage$frostc$FieldDecl$class);
org$frostlanguage$frostc$ClassDecl* $tmp404 = *(&local4);
org$frostlanguage$frostc$Position $tmp405 = *(&local0);
org$frostlanguage$frostc$Annotations* $tmp406 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp407 = (frost$core$Int64) {8192};
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp406, $tmp407);
frost$core$Int64 $tmp408 = (frost$core$Int64) {1};
org$frostlanguage$frostc$FieldDecl$Kind $tmp409 = org$frostlanguage$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp408);
org$frostlanguage$frostc$Type* $tmp410 = org$frostlanguage$frostc$expression$Closure$capturedSelfType$org$frostlanguage$frostc$Compiler$R$org$frostlanguage$frostc$Type(param0);
org$frostlanguage$frostc$FieldDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$FieldDecl$Kind$frost$core$String$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$ASTNode$Q($tmp403, $tmp404, $tmp405, ((frost$core$String*) NULL), $tmp406, $tmp409, &$s411, $tmp410, ((org$frostlanguage$frostc$ASTNode*) NULL));
*(&local17) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
org$frostlanguage$frostc$FieldDecl* $tmp412 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local17) = $tmp403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
// unreffing REF($850:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing REF($845:org.frostlanguage.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing REF($842:org.frostlanguage.frostc.FieldDecl)
// line 140
org$frostlanguage$frostc$ClassDecl* $tmp413 = *(&local4);
org$frostlanguage$frostc$SymbolTable** $tmp414 = &$tmp413->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp415 = *$tmp414;
org$frostlanguage$frostc$FieldDecl* $tmp416 = *(&local17);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp415, ((org$frostlanguage$frostc$Symbol*) $tmp416));
// line 141
org$frostlanguage$frostc$ClassDecl* $tmp417 = *(&local4);
frost$collections$Array** $tmp418 = &$tmp417->fields;
frost$collections$Array* $tmp419 = *$tmp418;
org$frostlanguage$frostc$FieldDecl* $tmp420 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp419, ((frost$core$Object*) $tmp420));
org$frostlanguage$frostc$FieldDecl* $tmp421 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
// unreffing field
*(&local17) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
goto block29;
block35:;
// line 144
frost$core$Bit $tmp422 = frost$core$Bit$init$builtin_bit(false);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp424 = (frost$core$Int64) {144};
org$frostlanguage$frostc$Compiler$Capture* $tmp425 = *(&local12);
$fn427 $tmp426 = ($fn427) ((frost$core$Object*) $tmp425)->$class->vtable[0];
frost$core$String* $tmp428 = $tmp426(((frost$core$Object*) $tmp425));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s429, $tmp424, $tmp428);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
// unreffing REF($897:frost.core.String)
abort(); // unreachable
block36:;
goto block29;
block29:;
frost$core$Frost$unref$frost$core$Object$Q($tmp335);
// unreffing REF($687:frost.collections.Iterator.T)
org$frostlanguage$frostc$Compiler$Capture* $tmp430 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
// unreffing c
*(&local12) = ((org$frostlanguage$frostc$Compiler$Capture*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
// unreffing REF($676:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 148
org$frostlanguage$frostc$ClassDecl* $tmp431 = *(&local4);
frost$core$Weak* $tmp432 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp432, ((frost$core$Object*) $tmp431));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$Weak** $tmp433 = &param1->owner;
frost$core$Weak* $tmp434 = *$tmp433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$Weak** $tmp435 = &param1->owner;
*$tmp435 = $tmp432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// unreffing REF($918:frost.core.Weak<org.frostlanguage.frostc.ClassDecl>)
// line 149
org$frostlanguage$frostc$ClassDecl* $tmp436 = *(&local4);
frost$collections$Array** $tmp437 = &$tmp436->methods;
frost$collections$Array* $tmp438 = *$tmp437;
frost$collections$Array$add$frost$collections$Array$T($tmp438, ((frost$core$Object*) param1));
// line 150
frost$collections$HashMap** $tmp439 = &param0->classes;
frost$collections$HashMap* $tmp440 = *$tmp439;
org$frostlanguage$frostc$ClassDecl* $tmp441 = *(&local4);
frost$core$String** $tmp442 = &$tmp441->name;
frost$core$String* $tmp443 = *$tmp442;
org$frostlanguage$frostc$ClassDecl* $tmp444 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp440, ((frost$collections$Key*) $tmp443), ((frost$core$Object*) $tmp444));
// line 151
org$frostlanguage$frostc$ClassDecl* $tmp445 = *(&local4);
frost$collections$Stack** $tmp446 = &param0->currentClass;
frost$collections$Stack* $tmp447 = *$tmp446;
frost$core$Int64 $tmp448 = (frost$core$Int64) {0};
frost$core$Object* $tmp449 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp447, $tmp448);
frost$core$Weak* $tmp450 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp450, ((frost$core$Object*) ((org$frostlanguage$frostc$ClassDecl*) $tmp449)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$Weak** $tmp451 = &$tmp445->owner;
frost$core$Weak* $tmp452 = *$tmp451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Weak** $tmp453 = &$tmp445->owner;
*$tmp453 = $tmp450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
// unreffing REF($960:frost.core.Weak<org.frostlanguage.frostc.ClassDecl?>)
frost$core$Frost$unref$frost$core$Object$Q($tmp449);
// unreffing REF($957:frost.collections.Stack.T)
// line 152
org$frostlanguage$frostc$ClassDecl* $tmp454 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
org$frostlanguage$frostc$MethodDecl* $tmp455 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
// unreffing defaultCleanup
*(&local11) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$MethodDecl* $tmp456 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// unreffing initMethod
*(&local10) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$collections$Array* $tmp457 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// unreffing parameters
*(&local6) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp458 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
// unreffing statements
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp459 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// unreffing result
*(&local4) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp460 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// unreffing supers
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp454;

}
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$expression$Closure$typedLambdaType$org$frostlanguage$frostc$Compiler$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Type$Q(org$frostlanguage$frostc$Compiler* param0, frost$collections$ListView* param1, org$frostlanguage$frostc$ASTNode* param2, org$frostlanguage$frostc$Compiler$TypeContext* param3) {

org$frostlanguage$frostc$Compiler$AutoScope* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
org$frostlanguage$frostc$Position local4;
frost$core$String* local5 = NULL;
org$frostlanguage$frostc$ASTNode* local6 = NULL;
org$frostlanguage$frostc$Type* local7 = NULL;
org$frostlanguage$frostc$Type* local8 = NULL;
org$frostlanguage$frostc$Type* local9 = NULL;
org$frostlanguage$frostc$Type* local10 = NULL;
frost$collections$HashMap* local11 = NULL;
org$frostlanguage$frostc$Pair* local12 = NULL;
// line 158
org$frostlanguage$frostc$Compiler$AutoScope* $tmp461 = (org$frostlanguage$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$AutoScope$class);
org$frostlanguage$frostc$Compiler$AutoScope$init$org$frostlanguage$frostc$Compiler($tmp461, param0);
*(&local0) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
org$frostlanguage$frostc$Compiler$AutoScope* $tmp462 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
*(&local0) = $tmp461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
// unreffing REF($1:org.frostlanguage.frostc.Compiler.AutoScope)
// line 159
frost$collections$Array* $tmp463 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp463);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$collections$Array* $tmp464 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local1) = $tmp463;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// unreffing REF($14:frost.collections.Array<org.frostlanguage.frostc.Type>)
// line 160
frost$core$Int64 $tmp465 = (frost$core$Int64) {0};
ITable* $tmp466 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp466->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp466 = $tmp466->next;
}
$fn468 $tmp467 = $tmp466->methods[0];
frost$core$Int64 $tmp469 = $tmp467(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp470 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp471 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp465, $tmp469, $tmp470);
frost$core$Int64 $tmp472 = $tmp471.min;
*(&local2) = $tmp472;
frost$core$Int64 $tmp473 = $tmp471.max;
frost$core$Bit $tmp474 = $tmp471.inclusive;
bool $tmp475 = $tmp474.value;
frost$core$Int64 $tmp476 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp477 = frost$core$Int64$convert$R$frost$core$UInt64($tmp476);
if ($tmp475) goto block4; else goto block5;
block4:;
int64_t $tmp478 = $tmp472.value;
int64_t $tmp479 = $tmp473.value;
bool $tmp480 = $tmp478 <= $tmp479;
frost$core$Bit $tmp481 = (frost$core$Bit) {$tmp480};
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block1; else goto block2;
block5:;
int64_t $tmp483 = $tmp472.value;
int64_t $tmp484 = $tmp473.value;
bool $tmp485 = $tmp483 < $tmp484;
frost$core$Bit $tmp486 = (frost$core$Bit) {$tmp485};
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block1; else goto block2;
block1:;
// line 161
frost$core$Int64 $tmp488 = *(&local2);
ITable* $tmp489 = param1->$class->itable;
while ($tmp489->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp489 = $tmp489->next;
}
$fn491 $tmp490 = $tmp489->methods[0];
frost$core$Object* $tmp492 = $tmp490(param1, $tmp488);
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp492)));
org$frostlanguage$frostc$ASTNode* $tmp493 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) $tmp492);
frost$core$Frost$unref$frost$core$Object$Q($tmp492);
// unreffing REF($58:frost.collections.ListView.T)
// line 162
org$frostlanguage$frostc$ASTNode* $tmp494 = *(&local3);
frost$core$Int64* $tmp495 = &$tmp494->$rawValue;
frost$core$Int64 $tmp496 = *$tmp495;
frost$core$Int64 $tmp497 = (frost$core$Int64) {34};
frost$core$Bit $tmp498 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp496, $tmp497);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block7; else goto block6;
block7:;
org$frostlanguage$frostc$Position* $tmp500 = (org$frostlanguage$frostc$Position*) ($tmp494->$data + 0);
org$frostlanguage$frostc$Position $tmp501 = *$tmp500;
*(&local4) = $tmp501;
frost$core$String** $tmp502 = (frost$core$String**) ($tmp494->$data + 16);
frost$core$String* $tmp503 = *$tmp502;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$String* $tmp504 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local5) = $tmp503;
org$frostlanguage$frostc$ASTNode** $tmp505 = (org$frostlanguage$frostc$ASTNode**) ($tmp494->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp506 = *$tmp505;
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
org$frostlanguage$frostc$ASTNode* $tmp507 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local6) = $tmp506;
// line 164
org$frostlanguage$frostc$Scanner** $tmp508 = &param0->scanner;
org$frostlanguage$frostc$Scanner* $tmp509 = *$tmp508;
org$frostlanguage$frostc$ASTNode* $tmp510 = *(&local6);
org$frostlanguage$frostc$Type* $tmp511 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type($tmp509, $tmp510);
*(&local7) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
org$frostlanguage$frostc$Type* $tmp512 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local7) = $tmp511;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
// unreffing REF($103:org.frostlanguage.frostc.Type)
// line 165
org$frostlanguage$frostc$Type* $tmp513 = *(&local7);
frost$core$Bit $tmp514 = frost$core$Bit$init$builtin_bit(false);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block8; else goto block9;
block8:;
// line 166
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Type*) NULL)));
org$frostlanguage$frostc$Type* $tmp516 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// unreffing type
*(&local7) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp517 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// unreffing rawType
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp518 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp519 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// unreffing p
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp520 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Compiler$AutoScope* $tmp521 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
// unreffing scope
*(&local0) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlanguage$frostc$Type*) NULL);
block9:;
// line 168
org$frostlanguage$frostc$Type* $tmp522 = *(&local7);
org$frostlanguage$frostc$Type* $tmp523 = org$frostlanguage$frostc$Compiler$resolve$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type$Q(param0, $tmp522);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
org$frostlanguage$frostc$Type* $tmp524 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local7) = $tmp523;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
// unreffing REF($155:org.frostlanguage.frostc.Type?)
// line 169
org$frostlanguage$frostc$Type* $tmp525 = *(&local7);
frost$core$Bit $tmp526 = frost$core$Bit$init$builtin_bit(false);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block10; else goto block11;
block10:;
// line 170
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Type*) NULL)));
org$frostlanguage$frostc$Type* $tmp528 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// unreffing type
*(&local7) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp529 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
// unreffing rawType
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp530 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp531 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
// unreffing p
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp532 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Compiler$AutoScope* $tmp533 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
// unreffing scope
*(&local0) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlanguage$frostc$Type*) NULL);
block11:;
// line 172
frost$collections$Array* $tmp534 = *(&local1);
org$frostlanguage$frostc$Type* $tmp535 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp534, ((frost$core$Object*) $tmp535));
// line 173
org$frostlanguage$frostc$SymbolTable** $tmp536 = &param0->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp537 = *$tmp536;
org$frostlanguage$frostc$Variable* $tmp538 = (org$frostlanguage$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlanguage$frostc$Variable$class);
org$frostlanguage$frostc$Position $tmp539 = *(&local4);
frost$core$Int64 $tmp540 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Variable$Kind $tmp541 = org$frostlanguage$frostc$Variable$Kind$init$frost$core$Int64($tmp540);
frost$core$String* $tmp542 = *(&local5);
org$frostlanguage$frostc$Type* $tmp543 = *(&local7);
org$frostlanguage$frostc$Variable$Storage* $tmp544 = (org$frostlanguage$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Variable$Storage$class);
frost$core$Int64 $tmp545 = (frost$core$Int64) {1};
frost$core$Int64 $tmp546 = (frost$core$Int64) {18446744073709551615};
org$frostlanguage$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64($tmp544, $tmp545, $tmp546);
org$frostlanguage$frostc$Variable$init$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Variable$Kind$frost$core$String$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$Variable$Storage($tmp538, $tmp539, $tmp541, $tmp542, $tmp543, $tmp544);
org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol($tmp537, ((org$frostlanguage$frostc$Symbol*) $tmp538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
// unreffing REF($220:org.frostlanguage.frostc.Variable.Storage)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
// unreffing REF($214:org.frostlanguage.frostc.Variable)
org$frostlanguage$frostc$Type* $tmp547 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// unreffing type
*(&local7) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp548 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// unreffing rawType
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp549 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block6;
block6:;
org$frostlanguage$frostc$ASTNode* $tmp550 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// unreffing p
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp551 = *(&local2);
int64_t $tmp552 = $tmp473.value;
int64_t $tmp553 = $tmp551.value;
int64_t $tmp554 = $tmp552 - $tmp553;
frost$core$Int64 $tmp555 = (frost$core$Int64) {$tmp554};
frost$core$UInt64 $tmp556 = frost$core$Int64$convert$R$frost$core$UInt64($tmp555);
if ($tmp475) goto block13; else goto block14;
block13:;
uint64_t $tmp557 = $tmp556.value;
uint64_t $tmp558 = $tmp477.value;
bool $tmp559 = $tmp557 >= $tmp558;
frost$core$Bit $tmp560 = (frost$core$Bit) {$tmp559};
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block12; else goto block2;
block14:;
uint64_t $tmp562 = $tmp556.value;
uint64_t $tmp563 = $tmp477.value;
bool $tmp564 = $tmp562 > $tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block12; else goto block2;
block12:;
int64_t $tmp567 = $tmp551.value;
int64_t $tmp568 = $tmp476.value;
int64_t $tmp569 = $tmp567 + $tmp568;
frost$core$Int64 $tmp570 = (frost$core$Int64) {$tmp569};
*(&local2) = $tmp570;
goto block1;
block2:;
// line 178
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
// line 179
frost$core$Int64* $tmp571 = &param3->$rawValue;
frost$core$Int64 $tmp572 = *$tmp571;
frost$core$Int64 $tmp573 = (frost$core$Int64) {3};
frost$core$Bit $tmp574 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp572, $tmp573);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block16; else goto block17;
block16:;
org$frostlanguage$frostc$Type** $tmp576 = (org$frostlanguage$frostc$Type**) (param3->$data + 0);
org$frostlanguage$frostc$Type* $tmp577 = *$tmp576;
*(&local9) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
org$frostlanguage$frostc$Type* $tmp578 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local9) = $tmp577;
// line 181
org$frostlanguage$frostc$Type* $tmp579 = *(&local9);
org$frostlanguage$frostc$Type* $tmp580 = org$frostlanguage$frostc$Type$nonnullable$R$org$frostlanguage$frostc$Type($tmp579);
frost$core$Bit $tmp581 = org$frostlanguage$frostc$Type$get_isMethod$R$frost$core$Bit($tmp580);
bool $tmp582 = $tmp581.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
// unreffing REF($300:org.frostlanguage.frostc.Type)
if ($tmp582) goto block18; else goto block19;
block18:;
// line 182
org$frostlanguage$frostc$Type* $tmp583 = *(&local9);
org$frostlanguage$frostc$Type* $tmp584 = org$frostlanguage$frostc$Type$get_returnType$R$org$frostlanguage$frostc$Type($tmp583);
*(&local10) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
org$frostlanguage$frostc$Type* $tmp585 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local10) = $tmp584;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// unreffing REF($309:org.frostlanguage.frostc.Type)
// line 186
frost$collections$HashMap** $tmp586 = &param0->binaryTypes;
frost$collections$HashMap* $tmp587 = *$tmp586;
*(&local11) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$collections$HashMap* $tmp588 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local11) = $tmp587;
// line 187
frost$collections$HashMap* $tmp589 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp589);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$collections$HashMap** $tmp590 = &param0->binaryTypes;
frost$collections$HashMap* $tmp591 = *$tmp590;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$collections$HashMap** $tmp592 = &param0->binaryTypes;
*$tmp592 = $tmp589;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
// unreffing REF($331:frost.collections.HashMap<org.frostlanguage.frostc.Compiler.BinaryKey, frost.collections.ListView<org.frostlanguage.frostc.Type>?>)
// line 188
org$frostlanguage$frostc$Type* $tmp593 = *(&local10);
org$frostlanguage$frostc$Pair* $tmp594 = org$frostlanguage$frostc$Compiler$computeCoercionCost$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Pair$LTorg$frostlanguage$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param2, $tmp593);
*(&local12) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
org$frostlanguage$frostc$Pair* $tmp595 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local12) = $tmp594;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
// unreffing REF($347:org.frostlanguage.frostc.Pair<org.frostlanguage.frostc.Type, frost.core.Int64>?)
// line 189
frost$collections$HashMap* $tmp596 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$collections$HashMap** $tmp597 = &param0->binaryTypes;
frost$collections$HashMap* $tmp598 = *$tmp597;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
frost$collections$HashMap** $tmp599 = &param0->binaryTypes;
*$tmp599 = $tmp596;
// line 190
org$frostlanguage$frostc$Pair* $tmp600 = *(&local12);
frost$core$Bit $tmp601 = frost$core$Bit$init$builtin_bit($tmp600 == NULL);
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block20; else goto block21;
block20:;
// line 191
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Type*) NULL)));
org$frostlanguage$frostc$Pair* $tmp603 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
// unreffing cost
*(&local12) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp604 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing oldBinaryTypes
*(&local11) = ((frost$collections$HashMap*) NULL);
org$frostlanguage$frostc$Type* $tmp605 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
// unreffing target
*(&local10) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp606 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing t
*(&local9) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp607 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
// unreffing returnType
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
frost$collections$Array* $tmp608 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Compiler$AutoScope* $tmp609 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
// unreffing scope
*(&local0) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlanguage$frostc$Type*) NULL);
block21:;
// line 193
org$frostlanguage$frostc$Pair* $tmp610 = *(&local12);
frost$core$Object** $tmp611 = &$tmp610->first;
frost$core$Object* $tmp612 = *$tmp611;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Type*) $tmp612)));
org$frostlanguage$frostc$Type* $tmp613 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local8) = ((org$frostlanguage$frostc$Type*) $tmp612);
org$frostlanguage$frostc$Pair* $tmp614 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
// unreffing cost
*(&local12) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp615 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing oldBinaryTypes
*(&local11) = ((frost$collections$HashMap*) NULL);
org$frostlanguage$frostc$Type* $tmp616 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
// unreffing target
*(&local10) = ((org$frostlanguage$frostc$Type*) NULL);
goto block19;
block19:;
org$frostlanguage$frostc$Type* $tmp617 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// unreffing t
*(&local9) = ((org$frostlanguage$frostc$Type*) NULL);
goto block15;
block17:;
// line 197
org$frostlanguage$frostc$Type* $tmp618 = org$frostlanguage$frostc$Compiler$preferredType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type$Q(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
org$frostlanguage$frostc$Type* $tmp619 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local8) = $tmp618;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
// unreffing REF($449:org.frostlanguage.frostc.Type?)
goto block15;
block15:;
// line 200
org$frostlanguage$frostc$Type* $tmp620 = *(&local8);
frost$core$Bit $tmp621 = frost$core$Bit$init$builtin_bit($tmp620 == NULL);
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block22; else goto block23;
block22:;
// line 201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Type*) NULL)));
org$frostlanguage$frostc$Type* $tmp623 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
// unreffing returnType
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
frost$collections$Array* $tmp624 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Compiler$AutoScope* $tmp625 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
// unreffing scope
*(&local0) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlanguage$frostc$Type*) NULL);
block23:;
// line 203
org$frostlanguage$frostc$Position $tmp626 = org$frostlanguage$frostc$Position$init();
frost$core$Int64 $tmp627 = (frost$core$Int64) {17};
org$frostlanguage$frostc$Type$Kind $tmp628 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp627);
frost$collections$Array* $tmp629 = *(&local1);
org$frostlanguage$frostc$Type* $tmp630 = *(&local8);
frost$core$Int64 $tmp631 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Type* $tmp632 = org$frostlanguage$frostc$Type$methodType$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$org$frostlanguage$frostc$Type$frost$core$Int64$R$org$frostlanguage$frostc$Type($tmp626, $tmp628, ((frost$collections$ListView*) $tmp629), $tmp630, $tmp631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// unreffing REF($494:org.frostlanguage.frostc.Type)
org$frostlanguage$frostc$Type* $tmp633 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// unreffing returnType
*(&local8) = ((org$frostlanguage$frostc$Type*) NULL);
frost$collections$Array* $tmp634 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Compiler$AutoScope* $tmp635 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
// unreffing scope
*(&local0) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
return $tmp632;

}
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Closure$compileTypedLambda$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$FixedArray* param2, org$frostlanguage$frostc$ASTNode* param3, org$frostlanguage$frostc$Compiler$TypeContext* param4) {

org$frostlanguage$frostc$Type* local0 = NULL;
org$frostlanguage$frostc$Type* local1 = NULL;
org$frostlanguage$frostc$Type* local2 = NULL;
// line 211
*(&local0) = ((org$frostlanguage$frostc$Type*) NULL);
// line 212
org$frostlanguage$frostc$Type* $tmp636 = org$frostlanguage$frostc$expression$Closure$typedLambdaType$org$frostlanguage$frostc$Compiler$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Type$Q(param0, ((frost$collections$ListView*) param2), param3, param4);
*(&local1) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
org$frostlanguage$frostc$Type* $tmp637 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local1) = $tmp636;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
// unreffing REF($4:org.frostlanguage.frostc.Type?)
// line 213
org$frostlanguage$frostc$Type* $tmp638 = *(&local1);
frost$core$Bit $tmp639 = frost$core$Bit$init$builtin_bit($tmp638 != NULL);
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block1; else goto block3;
block1:;
// line 214
org$frostlanguage$frostc$Type* $tmp641 = *(&local1);
org$frostlanguage$frostc$Type* $tmp642 = org$frostlanguage$frostc$Type$get_returnType$R$org$frostlanguage$frostc$Type($tmp641);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
org$frostlanguage$frostc$Type* $tmp643 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local0) = $tmp642;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
// unreffing REF($24:org.frostlanguage.frostc.Type)
goto block2;
block3:;
// line 1
// line 219
org$frostlanguage$frostc$Type* $tmp644 = org$frostlanguage$frostc$Type$Any$R$org$frostlanguage$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
org$frostlanguage$frostc$Type* $tmp645 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
*(&local0) = $tmp644;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// unreffing REF($37:org.frostlanguage.frostc.Type)
// line 220
frost$core$Int64* $tmp646 = &param4->$rawValue;
frost$core$Int64 $tmp647 = *$tmp646;
frost$core$Int64 $tmp648 = (frost$core$Int64) {3};
frost$core$Bit $tmp649 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp647, $tmp648);
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block5; else goto block4;
block5:;
org$frostlanguage$frostc$Type** $tmp651 = (org$frostlanguage$frostc$Type**) (param4->$data + 0);
org$frostlanguage$frostc$Type* $tmp652 = *$tmp651;
*(&local2) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
org$frostlanguage$frostc$Type* $tmp653 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local2) = $tmp652;
// line 222
org$frostlanguage$frostc$Type* $tmp654 = *(&local2);
org$frostlanguage$frostc$Type* $tmp655 = org$frostlanguage$frostc$Type$nonnullable$R$org$frostlanguage$frostc$Type($tmp654);
frost$core$Bit $tmp656 = org$frostlanguage$frostc$Type$get_isMethod$R$frost$core$Bit($tmp655);
bool $tmp657 = $tmp656.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing REF($65:org.frostlanguage.frostc.Type)
if ($tmp657) goto block6; else goto block7;
block6:;
// line 223
org$frostlanguage$frostc$Type* $tmp658 = *(&local2);
org$frostlanguage$frostc$Type* $tmp659 = org$frostlanguage$frostc$Type$nonnullable$R$org$frostlanguage$frostc$Type($tmp658);
org$frostlanguage$frostc$Type* $tmp660 = org$frostlanguage$frostc$Type$get_returnType$R$org$frostlanguage$frostc$Type($tmp659);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
org$frostlanguage$frostc$Type* $tmp661 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local0) = $tmp660;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
// unreffing REF($75:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
// unreffing REF($74:org.frostlanguage.frostc.Type)
goto block7;
block7:;
org$frostlanguage$frostc$Type* $tmp662 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing t
*(&local2) = ((org$frostlanguage$frostc$Type*) NULL);
goto block4;
block4:;
goto block2;
block2:;
// line 228
frost$core$Int64 $tmp663 = (frost$core$Int64) {1};
org$frostlanguage$frostc$MethodDecl$Kind $tmp664 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp663);
org$frostlanguage$frostc$ASTNode* $tmp665 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp666 = (frost$core$Int64) {26};
org$frostlanguage$frostc$IR$Value* $tmp667 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp668 = (frost$core$Int64) {14};
org$frostlanguage$frostc$Type* $tmp669 = *(&local0);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp667, $tmp668, $tmp669);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp665, $tmp666, param1, $tmp667);
frost$collections$Array* $tmp670 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp671 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp670, $tmp671);
org$frostlanguage$frostc$ASTNode* $tmp672 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp673 = (frost$core$Int64) {39};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q($tmp672, $tmp673, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp670, ((frost$core$Object*) $tmp672));
org$frostlanguage$frostc$IR$Value* $tmp674 = org$frostlanguage$frostc$expression$Closure$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$MethodDecl$Kind$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp664, param2, $tmp665, ((org$frostlanguage$frostc$FixedArray*) $tmp670), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
// unreffing REF($119:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
// unreffing REF($112:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// unreffing REF($107:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
// unreffing REF($101:org.frostlanguage.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
// unreffing REF($99:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$Type* $tmp675 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing lambdaType
*(&local1) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp676 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// unreffing returnType
*(&local0) = ((org$frostlanguage$frostc$Type*) NULL);
return $tmp674;

}
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Closure$compileUntypedLambda$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$FixedArray* param2, org$frostlanguage$frostc$ASTNode* param3, org$frostlanguage$frostc$Compiler$TypeContext* param4) {

org$frostlanguage$frostc$Type* local0 = NULL;
org$frostlanguage$frostc$Type* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
org$frostlanguage$frostc$Position local4;
frost$core$String* local5 = NULL;
org$frostlanguage$frostc$Type* local6 = NULL;
frost$collections$HashSet* local7 = NULL;
frost$core$MutableString* local8 = NULL;
frost$threads$MessageQueue* local9 = NULL;
org$frostlanguage$frostc$Type* local10 = NULL;
// line 237
frost$core$Int64* $tmp677 = &param4->$rawValue;
frost$core$Int64 $tmp678 = *$tmp677;
frost$core$Int64 $tmp679 = (frost$core$Int64) {3};
frost$core$Bit $tmp680 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp678, $tmp679);
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block2; else goto block1;
block2:;
org$frostlanguage$frostc$Type** $tmp682 = (org$frostlanguage$frostc$Type**) (param4->$data + 0);
org$frostlanguage$frostc$Type* $tmp683 = *$tmp682;
*(&local0) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
org$frostlanguage$frostc$Type* $tmp684 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local0) = $tmp683;
// line 239
org$frostlanguage$frostc$Type* $tmp685 = *(&local0);
org$frostlanguage$frostc$Type* $tmp686 = org$frostlanguage$frostc$Type$nonnullable$R$org$frostlanguage$frostc$Type($tmp685);
*(&local1) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
org$frostlanguage$frostc$Type* $tmp687 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local1) = $tmp686;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
// unreffing REF($18:org.frostlanguage.frostc.Type)
// line 240
org$frostlanguage$frostc$Type* $tmp688 = *(&local1);
frost$core$Bit $tmp689 = org$frostlanguage$frostc$Type$get_isMethod$R$frost$core$Bit($tmp688);
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block3; else goto block4;
block3:;
// line 241
ITable* $tmp691 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp691->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp691 = $tmp691->next;
}
$fn693 $tmp692 = $tmp691->methods[0];
frost$core$Int64 $tmp694 = $tmp692(((frost$collections$CollectionView*) param2));
org$frostlanguage$frostc$Type* $tmp695 = *(&local1);
frost$core$Int64 $tmp696 = org$frostlanguage$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp695);
int64_t $tmp697 = $tmp694.value;
int64_t $tmp698 = $tmp696.value;
bool $tmp699 = $tmp697 != $tmp698;
frost$core$Bit $tmp700 = (frost$core$Bit) {$tmp699};
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block5; else goto block6;
block5:;
// line 242
org$frostlanguage$frostc$Type* $tmp702 = *(&local0);
frost$core$String* $tmp703 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s704, ((frost$core$Object*) $tmp702));
frost$core$String* $tmp705 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp703, &$s706);
frost$core$String* $tmp707 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp705, &$s708);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, $tmp707);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
// unreffing REF($51:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
// unreffing REF($50:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
// unreffing REF($49:frost.core.String)
// line 244
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$Type* $tmp709 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
// unreffing methodType
*(&local1) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp710 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
// unreffing t
*(&local0) = ((org$frostlanguage$frostc$Type*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block6:;
// line 246
frost$collections$Array* $tmp711 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp711);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$collections$Array* $tmp712 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local2) = $tmp711;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// unreffing REF($77:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 247
frost$core$Int64 $tmp713 = (frost$core$Int64) {0};
ITable* $tmp714 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp714->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp714 = $tmp714->next;
}
$fn716 $tmp715 = $tmp714->methods[0];
frost$core$Int64 $tmp717 = $tmp715(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp718 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp719 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp713, $tmp717, $tmp718);
frost$core$Int64 $tmp720 = $tmp719.min;
*(&local3) = $tmp720;
frost$core$Int64 $tmp721 = $tmp719.max;
frost$core$Bit $tmp722 = $tmp719.inclusive;
bool $tmp723 = $tmp722.value;
frost$core$Int64 $tmp724 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp725 = frost$core$Int64$convert$R$frost$core$UInt64($tmp724);
if ($tmp723) goto block10; else goto block11;
block10:;
int64_t $tmp726 = $tmp720.value;
int64_t $tmp727 = $tmp721.value;
bool $tmp728 = $tmp726 <= $tmp727;
frost$core$Bit $tmp729 = (frost$core$Bit) {$tmp728};
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block7; else goto block8;
block11:;
int64_t $tmp731 = $tmp720.value;
int64_t $tmp732 = $tmp721.value;
bool $tmp733 = $tmp731 < $tmp732;
frost$core$Bit $tmp734 = (frost$core$Bit) {$tmp733};
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block7; else goto block8;
block7:;
// line 248
frost$core$Int64 $tmp736 = *(&local3);
frost$core$Object* $tmp737 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T(param2, $tmp736);
frost$core$Int64* $tmp738 = &((org$frostlanguage$frostc$ASTNode*) $tmp737)->$rawValue;
frost$core$Int64 $tmp739 = *$tmp738;
frost$core$Int64 $tmp740 = (frost$core$Int64) {22};
frost$core$Bit $tmp741 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp739, $tmp740);
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block13; else goto block14;
block13:;
org$frostlanguage$frostc$Position* $tmp743 = (org$frostlanguage$frostc$Position*) (((org$frostlanguage$frostc$ASTNode*) $tmp737)->$data + 0);
org$frostlanguage$frostc$Position $tmp744 = *$tmp743;
*(&local4) = $tmp744;
frost$core$String** $tmp745 = (frost$core$String**) (((org$frostlanguage$frostc$ASTNode*) $tmp737)->$data + 16);
frost$core$String* $tmp746 = *$tmp745;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$String* $tmp747 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local5) = $tmp746;
// line 250
frost$collections$Array* $tmp748 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp749 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp750 = (frost$core$Int64) {34};
org$frostlanguage$frostc$Position $tmp751 = *(&local4);
frost$core$String* $tmp752 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp753 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp754 = (frost$core$Int64) {26};
org$frostlanguage$frostc$Position $tmp755 = *(&local4);
org$frostlanguage$frostc$IR$Value* $tmp756 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp757 = (frost$core$Int64) {14};
org$frostlanguage$frostc$Type* $tmp758 = *(&local1);
frost$core$Int64 $tmp759 = *(&local3);
org$frostlanguage$frostc$Type* $tmp760 = org$frostlanguage$frostc$Type$parameterType$frost$core$Int64$R$org$frostlanguage$frostc$Type($tmp758, $tmp759);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp756, $tmp757, $tmp760);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp753, $tmp754, $tmp755, $tmp756);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$org$frostlanguage$frostc$ASTNode($tmp749, $tmp750, $tmp751, $tmp752, $tmp753);
frost$collections$Array$add$frost$collections$Array$T($tmp748, ((frost$core$Object*) $tmp749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
// unreffing REF($154:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
// unreffing REF($150:org.frostlanguage.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
// unreffing REF($147:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// unreffing REF($143:org.frostlanguage.frostc.ASTNode)
frost$core$String* $tmp761 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block12;
block14:;
// line 255
frost$core$Bit $tmp762 = frost$core$Bit$init$builtin_bit(false);
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp764 = (frost$core$Int64) {255};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s765, $tmp764);
abort(); // unreachable
block15:;
goto block12;
block12:;
frost$core$Frost$unref$frost$core$Object$Q($tmp737);
// unreffing REF($120:org.frostlanguage.frostc.FixedArray.T)
goto block9;
block9:;
frost$core$Int64 $tmp766 = *(&local3);
int64_t $tmp767 = $tmp721.value;
int64_t $tmp768 = $tmp766.value;
int64_t $tmp769 = $tmp767 - $tmp768;
frost$core$Int64 $tmp770 = (frost$core$Int64) {$tmp769};
frost$core$UInt64 $tmp771 = frost$core$Int64$convert$R$frost$core$UInt64($tmp770);
if ($tmp723) goto block18; else goto block19;
block18:;
uint64_t $tmp772 = $tmp771.value;
uint64_t $tmp773 = $tmp725.value;
bool $tmp774 = $tmp772 >= $tmp773;
frost$core$Bit $tmp775 = (frost$core$Bit) {$tmp774};
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block17; else goto block8;
block19:;
uint64_t $tmp777 = $tmp771.value;
uint64_t $tmp778 = $tmp725.value;
bool $tmp779 = $tmp777 > $tmp778;
frost$core$Bit $tmp780 = (frost$core$Bit) {$tmp779};
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block17; else goto block8;
block17:;
int64_t $tmp782 = $tmp766.value;
int64_t $tmp783 = $tmp724.value;
int64_t $tmp784 = $tmp782 + $tmp783;
frost$core$Int64 $tmp785 = (frost$core$Int64) {$tmp784};
*(&local3) = $tmp785;
goto block7;
block8:;
// line 259
org$frostlanguage$frostc$Type* $tmp786 = *(&local0);
org$frostlanguage$frostc$Type* $tmp787 = org$frostlanguage$frostc$Type$nonnullable$R$org$frostlanguage$frostc$Type($tmp786);
org$frostlanguage$frostc$Type* $tmp788 = org$frostlanguage$frostc$Type$get_returnType$R$org$frostlanguage$frostc$Type($tmp787);
*(&local6) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
org$frostlanguage$frostc$Type* $tmp789 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local6) = $tmp788;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
// unreffing REF($218:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
// unreffing REF($217:org.frostlanguage.frostc.Type)
// line 260
frost$core$Int64 $tmp790 = (frost$core$Int64) {1};
org$frostlanguage$frostc$MethodDecl$Kind $tmp791 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp790);
frost$collections$Array* $tmp792 = *(&local2);
org$frostlanguage$frostc$FixedArray* $tmp793 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp792);
org$frostlanguage$frostc$ASTNode* $tmp794 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp795 = (frost$core$Int64) {26};
org$frostlanguage$frostc$IR$Value* $tmp796 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp797 = (frost$core$Int64) {14};
org$frostlanguage$frostc$Type* $tmp798 = *(&local6);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp796, $tmp797, $tmp798);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp794, $tmp795, param1, $tmp796);
frost$collections$Array* $tmp799 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp800 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp799, $tmp800);
org$frostlanguage$frostc$ASTNode* $tmp801 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp802 = (frost$core$Int64) {39};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q($tmp801, $tmp802, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp799, ((frost$core$Object*) $tmp801));
org$frostlanguage$frostc$FixedArray* $tmp803 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp799);
org$frostlanguage$frostc$IR$Value* $tmp804 = org$frostlanguage$frostc$expression$Closure$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$MethodDecl$Kind$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp791, $tmp793, $tmp794, $tmp803, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// unreffing REF($261:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
// unreffing REF($259:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
// unreffing REF($252:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
// unreffing REF($247:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// unreffing REF($241:org.frostlanguage.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
// unreffing REF($239:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
// unreffing REF($237:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
org$frostlanguage$frostc$Type* $tmp805 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
// unreffing returnType
*(&local6) = ((org$frostlanguage$frostc$Type*) NULL);
frost$collections$Array* $tmp806 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
// unreffing parameters
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Type* $tmp807 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// unreffing methodType
*(&local1) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp808 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
// unreffing t
*(&local0) = ((org$frostlanguage$frostc$Type*) NULL);
return $tmp804;
block4:;
org$frostlanguage$frostc$Type* $tmp809 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// unreffing methodType
*(&local1) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp810 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
// unreffing t
*(&local0) = ((org$frostlanguage$frostc$Type*) NULL);
goto block1;
block1:;
// line 268
frost$collections$IdentityMap** $tmp811 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp812 = *$tmp811;
frost$core$Object* $tmp813 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp812, ((frost$core$Object*) param3));
*(&local7) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp813)));
frost$collections$HashSet* $tmp814 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
*(&local7) = ((frost$collections$HashSet*) $tmp813);
frost$core$Frost$unref$frost$core$Object$Q($tmp813);
// unreffing REF($322:frost.collections.IdentityMap.V?)
// line 269
frost$collections$HashSet* $tmp815 = *(&local7);
frost$core$Bit $tmp816 = frost$core$Bit$init$builtin_bit($tmp815 != NULL);
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block20; else goto block21;
block20:;
// line 270
frost$collections$HashSet* $tmp818 = *(&local7);
ITable* $tmp819 = ((frost$collections$CollectionView*) $tmp818)->$class->itable;
while ($tmp819->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp819 = $tmp819->next;
}
$fn821 $tmp820 = $tmp819->methods[0];
frost$core$Int64 $tmp822 = $tmp820(((frost$collections$CollectionView*) $tmp818));
frost$core$Int64 $tmp823 = (frost$core$Int64) {1};
int64_t $tmp824 = $tmp822.value;
int64_t $tmp825 = $tmp823.value;
bool $tmp826 = $tmp824 > $tmp825;
frost$core$Bit $tmp827 = (frost$core$Bit) {$tmp826};
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block22; else goto block24;
block22:;
// line 271
frost$core$MutableString* $tmp829 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp829, &$s830);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$MutableString* $tmp831 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local8) = $tmp829;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
// unreffing REF($353:frost.core.MutableString)
// line 272
frost$threads$MessageQueue** $tmp832 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp833 = *$tmp832;
*(&local9) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$threads$MessageQueue* $tmp834 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local9) = $tmp833;
// line 273
frost$collections$HashSet* $tmp835 = *(&local7);
ITable* $tmp836 = ((frost$collections$Iterable*) $tmp835)->$class->itable;
while ($tmp836->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp836 = $tmp836->next;
}
$fn838 $tmp837 = $tmp836->methods[0];
frost$collections$Iterator* $tmp839 = $tmp837(((frost$collections$Iterable*) $tmp835));
goto block25;
block25:;
ITable* $tmp840 = $tmp839->$class->itable;
while ($tmp840->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp840 = $tmp840->next;
}
$fn842 $tmp841 = $tmp840->methods[0];
frost$core$Bit $tmp843 = $tmp841($tmp839);
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block27; else goto block26;
block26:;
*(&local10) = ((org$frostlanguage$frostc$Type*) NULL);
ITable* $tmp845 = $tmp839->$class->itable;
while ($tmp845->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp845 = $tmp845->next;
}
$fn847 $tmp846 = $tmp845->methods[1];
frost$core$Object* $tmp848 = $tmp846($tmp839);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Type*) $tmp848)));
org$frostlanguage$frostc$Type* $tmp849 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local10) = ((org$frostlanguage$frostc$Type*) $tmp848);
// line 274
frost$core$MutableString* $tmp850 = *(&local8);
org$frostlanguage$frostc$Type* $tmp851 = *(&local10);
frost$core$String* $tmp852 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s853, ((frost$core$Object*) $tmp851));
frost$core$String* $tmp854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp852, &$s855);
frost$core$MutableString$append$frost$core$String($tmp850, $tmp854);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// unreffing REF($404:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// unreffing REF($403:frost.core.String)
// line 275
frost$threads$MessageQueue* $tmp856 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp856);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$threads$MessageQueue** $tmp857 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp858 = *$tmp857;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$threads$MessageQueue** $tmp859 = &param0->errorQueue;
*$tmp859 = $tmp856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
// unreffing REF($413:frost.threads.MessageQueue<org.frostlanguage.frostc.Compiler.Error>)
// line 276
org$frostlanguage$frostc$Compiler$TypeContext* $tmp860 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp861 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Type* $tmp862 = *(&local10);
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp860, $tmp861, $tmp862);
org$frostlanguage$frostc$IR$Value* $tmp863 = org$frostlanguage$frostc$expression$Closure$compileUntypedLambda$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp860);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
// unreffing REF($432:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
// unreffing REF($428:org.frostlanguage.frostc.Compiler.TypeContext)
// line 278
frost$threads$MessageQueue** $tmp864 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp865 = *$tmp864;
frost$core$Bit $tmp866 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp865);
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp868 = (frost$core$Int64) {278};
org$frostlanguage$frostc$Position$wrapper* $tmp869;
$tmp869 = (org$frostlanguage$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Position$wrapperclass);
$tmp869->value = param1;
frost$core$String* $tmp870 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s871, ((frost$core$Object*) $tmp869));
frost$core$String* $tmp872 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp870, &$s873);
org$frostlanguage$frostc$Type* $tmp874 = *(&local10);
frost$core$String* $tmp875 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s876, ((frost$core$Object*) $tmp874));
frost$core$String* $tmp877 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp875, &$s878);
frost$core$String* $tmp879 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp872, $tmp877);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s880, $tmp868, $tmp879);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
// unreffing REF($454:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
// unreffing REF($453:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
// unreffing REF($452:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// unreffing REF($449:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
// unreffing REF($448:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// unreffing REF($447:frost.core.Object)
abort(); // unreachable
block28:;
// line 281
frost$core$MutableString* $tmp881 = *(&local8);
frost$threads$MessageQueue** $tmp882 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp883 = *$tmp882;
frost$core$Immutable* $tmp884 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp883);
frost$core$String** $tmp885 = &((org$frostlanguage$frostc$Compiler$Error*) $tmp884)->message;
frost$core$String* $tmp886 = *$tmp885;
frost$core$String* $tmp887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s888, $tmp886);
frost$core$String* $tmp889 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp887, &$s890);
frost$core$MutableString$append$frost$core$String($tmp881, $tmp889);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// unreffing REF($485:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// unreffing REF($484:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// unreffing REF($480:frost.threads.MessageQueue.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp848);
// unreffing REF($391:frost.collections.Iterator.T)
org$frostlanguage$frostc$Type* $tmp891 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
// unreffing t
*(&local10) = ((org$frostlanguage$frostc$Type*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing REF($380:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 283
frost$threads$MessageQueue* $tmp892 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$threads$MessageQueue** $tmp893 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp894 = *$tmp893;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$threads$MessageQueue** $tmp895 = &param0->errorQueue;
*$tmp895 = $tmp892;
// line 284
frost$core$MutableString* $tmp896 = *(&local8);
frost$core$String* $tmp897 = frost$core$MutableString$finish$R$frost$core$String($tmp896);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, $tmp897);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
// unreffing REF($520:frost.core.String)
// line 285
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp898 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
// unreffing old
*(&local9) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp899 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// unreffing msg
*(&local8) = ((frost$core$MutableString*) NULL);
frost$collections$HashSet* $tmp900 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// unreffing attempts
*(&local7) = ((frost$collections$HashSet*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block24:;
// line 1
// line 288
org$frostlanguage$frostc$Compiler$TypeContext* $tmp901 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp902 = (frost$core$Int64) {3};
frost$collections$HashSet* $tmp903 = *(&local7);
ITable* $tmp904 = ((frost$collections$Iterable*) $tmp903)->$class->itable;
while ($tmp904->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp904 = $tmp904->next;
}
$fn906 $tmp905 = $tmp904->methods[0];
frost$collections$Iterator* $tmp907 = $tmp905(((frost$collections$Iterable*) $tmp903));
ITable* $tmp908 = $tmp907->$class->itable;
while ($tmp908->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp908 = $tmp908->next;
}
$fn910 $tmp909 = $tmp908->methods[1];
frost$core$Object* $tmp911 = $tmp909($tmp907);
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp901, $tmp902, ((org$frostlanguage$frostc$Type*) $tmp911));
org$frostlanguage$frostc$IR$Value* $tmp912 = org$frostlanguage$frostc$expression$Closure$compileUntypedLambda$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp901);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// unreffing REF($558:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp911);
// unreffing REF($555:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
// unreffing REF($551:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// unreffing REF($546:org.frostlanguage.frostc.Compiler.TypeContext)
// line 290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp913 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// unreffing attempts
*(&local7) = ((frost$collections$HashSet*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block23:;
goto block21;
block21:;
// line 293
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, &$s914);
// line 295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp915 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// unreffing attempts
*(&local7) = ((frost$collections$HashSet*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);

}
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Closure$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$MethodDecl$Kind$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$MethodDecl$Kind param2, org$frostlanguage$frostc$FixedArray* param3, org$frostlanguage$frostc$ASTNode* param4, org$frostlanguage$frostc$FixedArray* param5, org$frostlanguage$frostc$Compiler$TypeContext* param6) {

frost$core$String* local0 = NULL;
frost$collections$Array* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlanguage$frostc$ASTNode* local4 = NULL;
org$frostlanguage$frostc$Type* local5 = NULL;
org$frostlanguage$frostc$Type* local6 = NULL;
org$frostlanguage$frostc$Pair* local7 = NULL;
org$frostlanguage$frostc$Annotations* local8 = NULL;
org$frostlanguage$frostc$MethodDecl* local9 = NULL;
frost$core$Bit local10;
frost$core$Bit local11;
frost$collections$Stack* local12 = NULL;
frost$core$Bit local13;
org$frostlanguage$frostc$ASTNode* local14 = NULL;
org$frostlanguage$frostc$ClassDecl* local15 = NULL;
frost$collections$Array* local16 = NULL;
org$frostlanguage$frostc$Compiler$Capture* local17 = NULL;
org$frostlanguage$frostc$Variable* local18 = NULL;
org$frostlanguage$frostc$FieldDecl* local19 = NULL;
org$frostlanguage$frostc$IR$Value* local20 = NULL;
frost$collections$Array* local21 = NULL;
org$frostlanguage$frostc$Type* local22 = NULL;
org$frostlanguage$frostc$Type* local23 = NULL;
org$frostlanguage$frostc$Type* local24 = NULL;
org$frostlanguage$frostc$IR$Value* local25 = NULL;
// line 302
frost$core$Int64* $tmp916 = &param0->closureCount;
frost$core$Int64 $tmp917 = *$tmp916;
frost$core$Int64 $tmp918 = (frost$core$Int64) {1};
int64_t $tmp919 = $tmp917.value;
int64_t $tmp920 = $tmp918.value;
int64_t $tmp921 = $tmp919 + $tmp920;
frost$core$Int64 $tmp922 = (frost$core$Int64) {$tmp921};
frost$core$Int64* $tmp923 = &param0->closureCount;
*$tmp923 = $tmp922;
// line 303
frost$core$Int64* $tmp924 = &param0->closureCount;
frost$core$Int64 $tmp925 = *$tmp924;
frost$core$Int64$wrapper* $tmp926;
$tmp926 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp926->value = $tmp925;
frost$core$String* $tmp927 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s928, ((frost$core$Object*) $tmp926));
frost$core$String* $tmp929 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp927, &$s930);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$core$String* $tmp931 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
*(&local0) = $tmp929;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
// unreffing REF($15:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// unreffing REF($13:frost.core.Object)
// line 304
frost$collections$Array* $tmp932 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp932);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
frost$collections$Array* $tmp933 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local1) = $tmp932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// unreffing REF($33:frost.collections.Array<org.frostlanguage.frostc.MethodDecl.Parameter>)
// line 305
ITable* $tmp934 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp934->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp934 = $tmp934->next;
}
$fn936 $tmp935 = $tmp934->methods[0];
frost$collections$Iterator* $tmp937 = $tmp935(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp938 = $tmp937->$class->itable;
while ($tmp938->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp938 = $tmp938->next;
}
$fn940 $tmp939 = $tmp938->methods[0];
frost$core$Bit $tmp941 = $tmp939($tmp937);
bool $tmp942 = $tmp941.value;
if ($tmp942) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp943 = $tmp937->$class->itable;
while ($tmp943->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp943 = $tmp943->next;
}
$fn945 $tmp944 = $tmp943->methods[1];
frost$core$Object* $tmp946 = $tmp944($tmp937);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp946)));
org$frostlanguage$frostc$ASTNode* $tmp947 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) $tmp946);
// line 306
org$frostlanguage$frostc$ASTNode* $tmp948 = *(&local2);
frost$core$Int64* $tmp949 = &$tmp948->$rawValue;
frost$core$Int64 $tmp950 = *$tmp949;
frost$core$Int64 $tmp951 = (frost$core$Int64) {34};
frost$core$Bit $tmp952 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp950, $tmp951);
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block5; else goto block6;
block5:;
org$frostlanguage$frostc$Position* $tmp954 = (org$frostlanguage$frostc$Position*) ($tmp948->$data + 0);
org$frostlanguage$frostc$Position $tmp955 = *$tmp954;
frost$core$String** $tmp956 = (frost$core$String**) ($tmp948->$data + 16);
frost$core$String* $tmp957 = *$tmp956;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
frost$core$String* $tmp958 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
*(&local3) = $tmp957;
org$frostlanguage$frostc$ASTNode** $tmp959 = (org$frostlanguage$frostc$ASTNode**) ($tmp948->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp960 = *$tmp959;
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
org$frostlanguage$frostc$ASTNode* $tmp961 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
*(&local4) = $tmp960;
// line 308
org$frostlanguage$frostc$Scanner** $tmp962 = &param0->scanner;
org$frostlanguage$frostc$Scanner* $tmp963 = *$tmp962;
org$frostlanguage$frostc$ASTNode* $tmp964 = *(&local4);
org$frostlanguage$frostc$Type* $tmp965 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type($tmp963, $tmp964);
org$frostlanguage$frostc$Type* $tmp966 = org$frostlanguage$frostc$Compiler$resolve$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type$Q(param0, $tmp965);
*(&local5) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
org$frostlanguage$frostc$Type* $tmp967 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
*(&local5) = $tmp966;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
// unreffing REF($102:org.frostlanguage.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
// unreffing REF($101:org.frostlanguage.frostc.Type)
// line 309
org$frostlanguage$frostc$Type* $tmp968 = *(&local5);
frost$core$Bit $tmp969 = frost$core$Bit$init$builtin_bit($tmp968 == NULL);
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block7; else goto block8;
block7:;
// line 310
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$Type* $tmp971 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
// unreffing resolved
*(&local5) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp972 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
// unreffing type
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp973 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp946);
// unreffing REF($61:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp974 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
// unreffing p
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
// unreffing REF($50:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$Array* $tmp975 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp976 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block8:;
// line 312
frost$collections$Array* $tmp977 = *(&local1);
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp978 = (org$frostlanguage$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp979 = *(&local3);
org$frostlanguage$frostc$Type* $tmp980 = *(&local5);
org$frostlanguage$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlanguage$frostc$Type($tmp978, $tmp979, $tmp980);
frost$collections$Array$add$frost$collections$Array$T($tmp977, ((frost$core$Object*) $tmp978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
// unreffing REF($165:org.frostlanguage.frostc.MethodDecl.Parameter)
org$frostlanguage$frostc$Type* $tmp981 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
// unreffing resolved
*(&local5) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp982 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// unreffing type
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp983 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 315
frost$core$Bit $tmp984 = frost$core$Bit$init$builtin_bit(false);
bool $tmp985 = $tmp984.value;
if ($tmp985) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp986 = (frost$core$Int64) {315};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s987, $tmp986);
abort(); // unreachable
block9:;
goto block4;
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp946);
// unreffing REF($61:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp988 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
// unreffing p
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
// unreffing REF($50:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 319
*(&local6) = ((org$frostlanguage$frostc$Type*) NULL);
// line 320
frost$core$Bit $tmp989 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block11; else goto block13;
block11:;
// line 321
org$frostlanguage$frostc$Scanner** $tmp991 = &param0->scanner;
org$frostlanguage$frostc$Scanner* $tmp992 = *$tmp991;
org$frostlanguage$frostc$Type* $tmp993 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type($tmp992, param4);
org$frostlanguage$frostc$Type* $tmp994 = org$frostlanguage$frostc$Compiler$resolve$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type$Q(param0, $tmp993);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
org$frostlanguage$frostc$Type* $tmp995 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
*(&local6) = $tmp994;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
// unreffing REF($223:org.frostlanguage.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
// unreffing REF($222:org.frostlanguage.frostc.Type)
// line 322
org$frostlanguage$frostc$Type* $tmp996 = *(&local6);
frost$core$Bit $tmp997 = frost$core$Bit$init$builtin_bit(false);
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block14; else goto block15;
block14:;
// line 323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$Type* $tmp999 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// unreffing returnType
*(&local6) = ((org$frostlanguage$frostc$Type*) NULL);
frost$collections$Array* $tmp1000 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1001 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block15:;
goto block12;
block13:;
// line 1
// line 327
org$frostlanguage$frostc$Type* $tmp1002 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
org$frostlanguage$frostc$Type* $tmp1003 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local6) = $tmp1002;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
// unreffing REF($264:org.frostlanguage.frostc.Type)
// line 328
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp1004;
$tmp1004 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp1004->value = param2;
frost$core$Int64 $tmp1005 = (frost$core$Int64) {1};
org$frostlanguage$frostc$MethodDecl$Kind $tmp1006 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1005);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp1007;
$tmp1007 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp1007->value = $tmp1006;
ITable* $tmp1008 = ((frost$core$Equatable*) $tmp1004)->$class->itable;
while ($tmp1008->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1008 = $tmp1008->next;
}
$fn1010 $tmp1009 = $tmp1008->methods[0];
frost$core$Bit $tmp1011 = $tmp1009(((frost$core$Equatable*) $tmp1004), ((frost$core$Equatable*) $tmp1007));
bool $tmp1012 = $tmp1011.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1007)));
// unreffing REF($279:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1004)));
// unreffing REF($275:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
if ($tmp1012) goto block16; else goto block17;
block16:;
// line 329
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, &$s1013);
// line 330
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$Type* $tmp1014 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
// unreffing returnType
*(&local6) = ((org$frostlanguage$frostc$Type*) NULL);
frost$collections$Array* $tmp1015 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1016 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block17:;
goto block12;
block12:;
// line 333
org$frostlanguage$frostc$Pair* $tmp1017 = (org$frostlanguage$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Pair$class);
frost$collections$Stack** $tmp1018 = &param0->currentMethod;
frost$collections$Stack* $tmp1019 = *$tmp1018;
frost$core$Int64 $tmp1020 = (frost$core$Int64) {0};
frost$core$Object* $tmp1021 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1019, $tmp1020);
frost$collections$HashMap* $tmp1022 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1022);
org$frostlanguage$frostc$Pair$init$org$frostlanguage$frostc$Pair$A$org$frostlanguage$frostc$Pair$B($tmp1017, ((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl*) $tmp1021)), ((frost$core$Object*) ((frost$collections$Map*) $tmp1022)));
*(&local7) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
org$frostlanguage$frostc$Pair* $tmp1023 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
*(&local7) = $tmp1017;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
// unreffing REF($322:frost.collections.HashMap<frost.core.String, org.frostlanguage.frostc.Compiler.Capture>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1021);
// unreffing REF($319:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
// unreffing REF($313:org.frostlanguage.frostc.Pair<org.frostlanguage.frostc.MethodDecl, frost.collections.Map<frost.core.String, org.frostlanguage.frostc.Compiler.Capture>>)
// line 335
frost$collections$Stack** $tmp1024 = &param0->captures;
frost$collections$Stack* $tmp1025 = *$tmp1024;
org$frostlanguage$frostc$Pair* $tmp1026 = *(&local7);
frost$collections$Stack$push$frost$collections$Stack$T($tmp1025, ((frost$core$Object*) $tmp1026));
// line 336
org$frostlanguage$frostc$Annotations* $tmp1027 = (org$frostlanguage$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Annotations$class);
frost$core$Int64 $tmp1028 = (frost$core$Int64) {16};
org$frostlanguage$frostc$Annotations$init$frost$core$Int64($tmp1027, $tmp1028);
*(&local8) = ((org$frostlanguage$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
org$frostlanguage$frostc$Annotations* $tmp1029 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local8) = $tmp1027;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing REF($352:org.frostlanguage.frostc.Annotations)
// line 337
org$frostlanguage$frostc$MethodDecl* $tmp1030 = (org$frostlanguage$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$class);
frost$collections$Stack** $tmp1031 = &param0->currentClass;
frost$collections$Stack* $tmp1032 = *$tmp1031;
frost$core$Int64 $tmp1033 = (frost$core$Int64) {0};
frost$core$Object* $tmp1034 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1032, $tmp1033);
org$frostlanguage$frostc$Annotations* $tmp1035 = *(&local8);
frost$core$String* $tmp1036 = *(&local0);
frost$collections$Array* $tmp1037 = *(&local1);
org$frostlanguage$frostc$Type* $tmp1038 = *(&local6);
org$frostlanguage$frostc$MethodDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$Parameter$GT$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp1030, ((org$frostlanguage$frostc$ClassDecl*) $tmp1034), param1, ((frost$core$String*) NULL), $tmp1035, param2, $tmp1036, ((frost$collections$Array*) NULL), $tmp1037, $tmp1038, param5);
*(&local9) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
org$frostlanguage$frostc$MethodDecl* $tmp1039 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local9) = $tmp1030;
frost$core$Frost$unref$frost$core$Object$Q($tmp1034);
// unreffing REF($371:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
// unreffing REF($366:org.frostlanguage.frostc.MethodDecl)
// line 341
frost$core$Bit* $tmp1040 = &param0->writeCode;
frost$core$Bit $tmp1041 = *$tmp1040;
*(&local10) = $tmp1041;
// line 342
frost$core$Bit* $tmp1042 = &param0->reportErrors;
frost$core$Bit $tmp1043 = *$tmp1042;
*(&local11) = $tmp1043;
// line 343
frost$core$Bit $tmp1044 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1045 = &param0->writeCode;
*$tmp1045 = $tmp1044;
// line 344
frost$core$Bit $tmp1046 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1047 = &param0->reportErrors;
*$tmp1047 = $tmp1046;
// line 345
frost$collections$Stack** $tmp1048 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1049 = *$tmp1048;
*(&local12) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
frost$collections$Stack* $tmp1050 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
*(&local12) = $tmp1049;
// line 346
frost$collections$Stack* $tmp1051 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1051);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
frost$collections$Stack** $tmp1052 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1053 = *$tmp1052;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
frost$collections$Stack** $tmp1054 = &param0->enclosingContexts;
*$tmp1054 = $tmp1051;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
// unreffing REF($419:frost.collections.Stack<org.frostlanguage.frostc.Compiler.EnclosingContext>)
// line 347
org$frostlanguage$frostc$MethodDecl* $tmp1055 = *(&local9);
org$frostlanguage$frostc$SymbolTable** $tmp1056 = &param0->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp1057 = *$tmp1056;
org$frostlanguage$frostc$Compiler$compile$org$frostlanguage$frostc$MethodDecl$org$frostlanguage$frostc$SymbolTable$Q(param0, $tmp1055, $tmp1057);
// line 348
frost$collections$Stack* $tmp1058 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
frost$collections$Stack** $tmp1059 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1060 = *$tmp1059;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$collections$Stack** $tmp1061 = &param0->enclosingContexts;
*$tmp1061 = $tmp1058;
// line 349
frost$core$Bit $tmp1062 = *(&local10);
frost$core$Bit* $tmp1063 = &param0->writeCode;
*$tmp1063 = $tmp1062;
// line 350
frost$core$Bit $tmp1064 = *(&local11);
frost$core$Bit* $tmp1065 = &param0->reportErrors;
*$tmp1065 = $tmp1064;
// line 352
// line 353
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 354
org$frostlanguage$frostc$Pair* $tmp1066 = *(&local7);
frost$core$Object** $tmp1067 = &$tmp1066->second;
frost$core$Object* $tmp1068 = *$tmp1067;
ITable* $tmp1069 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1068))->$class->itable;
while ($tmp1069->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1069 = $tmp1069->next;
}
$fn1071 $tmp1070 = $tmp1069->methods[0];
frost$core$Int64 $tmp1072 = $tmp1070(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1068)));
frost$core$Int64 $tmp1073 = (frost$core$Int64) {0};
int64_t $tmp1074 = $tmp1072.value;
int64_t $tmp1075 = $tmp1073.value;
bool $tmp1076 = $tmp1074 != $tmp1075;
frost$core$Bit $tmp1077 = (frost$core$Bit) {$tmp1076};
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block18; else goto block20;
block18:;
// line 356
org$frostlanguage$frostc$MethodDecl* $tmp1079 = *(&local9);
org$frostlanguage$frostc$Pair* $tmp1080 = *(&local7);
frost$core$Object** $tmp1081 = &$tmp1080->second;
frost$core$Object* $tmp1082 = *$tmp1081;
ITable* $tmp1083 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1082))->$class->itable;
while ($tmp1083->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1083 = $tmp1083->next;
}
$fn1085 $tmp1084 = $tmp1083->methods[4];
frost$collections$Iterator* $tmp1086 = $tmp1084(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1082)));
ITable* $tmp1087 = $tmp1086->$class->itable;
while ($tmp1087->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1087 = $tmp1087->next;
}
$fn1089 $tmp1088 = $tmp1087->methods[6];
frost$collections$Array* $tmp1090 = $tmp1088($tmp1086);
org$frostlanguage$frostc$ClassDecl* $tmp1091 = org$frostlanguage$frostc$expression$Closure$createClosureClass$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlanguage$frostc$Compiler$Capture$GT$R$org$frostlanguage$frostc$ClassDecl(param0, $tmp1079, ((frost$collections$CollectionView*) $tmp1090));
*(&local15) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
org$frostlanguage$frostc$ClassDecl* $tmp1092 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local15) = $tmp1091;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
// unreffing REF($492:org.frostlanguage.frostc.ClassDecl)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
// unreffing REF($489:frost.collections.Array<frost.collections.Iterator.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
// unreffing REF($485:frost.collections.Iterator<frost.collections.MapView.V>)
// line 357
frost$collections$Array* $tmp1093 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1093);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
frost$collections$Array* $tmp1094 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local16) = $tmp1093;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
// unreffing REF($510:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 358
org$frostlanguage$frostc$Pair* $tmp1095 = *(&local7);
frost$core$Object** $tmp1096 = &$tmp1095->second;
frost$core$Object* $tmp1097 = *$tmp1096;
ITable* $tmp1098 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1097))->$class->itable;
while ($tmp1098->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1098 = $tmp1098->next;
}
$fn1100 $tmp1099 = $tmp1098->methods[4];
frost$collections$Iterator* $tmp1101 = $tmp1099(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1097)));
goto block21;
block21:;
ITable* $tmp1102 = $tmp1101->$class->itable;
while ($tmp1102->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1102 = $tmp1102->next;
}
$fn1104 $tmp1103 = $tmp1102->methods[0];
frost$core$Bit $tmp1105 = $tmp1103($tmp1101);
bool $tmp1106 = $tmp1105.value;
if ($tmp1106) goto block23; else goto block22;
block22:;
*(&local17) = ((org$frostlanguage$frostc$Compiler$Capture*) NULL);
ITable* $tmp1107 = $tmp1101->$class->itable;
while ($tmp1107->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1107 = $tmp1107->next;
}
$fn1109 $tmp1108 = $tmp1107->methods[1];
frost$core$Object* $tmp1110 = $tmp1108($tmp1101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Compiler$Capture*) $tmp1110)));
org$frostlanguage$frostc$Compiler$Capture* $tmp1111 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
*(&local17) = ((org$frostlanguage$frostc$Compiler$Capture*) $tmp1110);
// line 359
org$frostlanguage$frostc$Compiler$Capture* $tmp1112 = *(&local17);
frost$core$Int64* $tmp1113 = &$tmp1112->$rawValue;
frost$core$Int64 $tmp1114 = *$tmp1113;
frost$core$Int64 $tmp1115 = (frost$core$Int64) {0};
frost$core$Bit $tmp1116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1114, $tmp1115);
bool $tmp1117 = $tmp1116.value;
if ($tmp1117) goto block25; else goto block26;
block25:;
org$frostlanguage$frostc$Variable** $tmp1118 = (org$frostlanguage$frostc$Variable**) ($tmp1112->$data + 0);
org$frostlanguage$frostc$Variable* $tmp1119 = *$tmp1118;
*(&local18) = ((org$frostlanguage$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
org$frostlanguage$frostc$Variable* $tmp1120 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
*(&local18) = $tmp1119;
// line 361
frost$collections$Array* $tmp1121 = *(&local16);
org$frostlanguage$frostc$ASTNode* $tmp1122 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1123 = (frost$core$Int64) {22};
org$frostlanguage$frostc$Variable* $tmp1124 = *(&local18);
frost$core$String** $tmp1125 = &((org$frostlanguage$frostc$Symbol*) $tmp1124)->name;
frost$core$String* $tmp1126 = *$tmp1125;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp1122, $tmp1123, param1, $tmp1126);
frost$collections$Array$add$frost$collections$Array$T($tmp1121, ((frost$core$Object*) $tmp1122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
// unreffing REF($570:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$Variable* $tmp1127 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
// unreffing v
*(&local18) = ((org$frostlanguage$frostc$Variable*) NULL);
goto block24;
block26:;
frost$core$Int64 $tmp1128 = (frost$core$Int64) {2};
frost$core$Bit $tmp1129 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1114, $tmp1128);
bool $tmp1130 = $tmp1129.value;
if ($tmp1130) goto block27; else goto block28;
block27:;
// line 364
frost$collections$Array* $tmp1131 = *(&local16);
org$frostlanguage$frostc$ASTNode* $tmp1132 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1133 = (frost$core$Int64) {40};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position($tmp1132, $tmp1133, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1131, ((frost$core$Object*) $tmp1132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// unreffing REF($595:org.frostlanguage.frostc.ASTNode)
goto block24;
block28:;
frost$core$Int64 $tmp1134 = (frost$core$Int64) {1};
frost$core$Bit $tmp1135 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1114, $tmp1134);
bool $tmp1136 = $tmp1135.value;
if ($tmp1136) goto block29; else goto block24;
block29:;
org$frostlanguage$frostc$FieldDecl** $tmp1137 = (org$frostlanguage$frostc$FieldDecl**) ($tmp1112->$data + 0);
org$frostlanguage$frostc$FieldDecl* $tmp1138 = *$tmp1137;
*(&local19) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
org$frostlanguage$frostc$FieldDecl* $tmp1139 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local19) = $tmp1138;
// line 367
frost$collections$Array* $tmp1140 = *(&local16);
org$frostlanguage$frostc$ASTNode* $tmp1141 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1142 = (frost$core$Int64) {16};
org$frostlanguage$frostc$ASTNode* $tmp1143 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1144 = (frost$core$Int64) {22};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp1143, $tmp1144, param1, &$s1145);
org$frostlanguage$frostc$FieldDecl* $tmp1146 = *(&local19);
frost$core$String** $tmp1147 = &((org$frostlanguage$frostc$Symbol*) $tmp1146)->name;
frost$core$String* $tmp1148 = *$tmp1147;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String($tmp1141, $tmp1142, param1, $tmp1143, $tmp1148);
frost$collections$Array$add$frost$collections$Array$T($tmp1140, ((frost$core$Object*) $tmp1141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
// unreffing REF($622:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
// unreffing REF($620:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FieldDecl* $tmp1149 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// unreffing f
*(&local19) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
goto block24;
block24:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1110);
// unreffing REF($542:frost.collections.Iterator.T)
org$frostlanguage$frostc$Compiler$Capture* $tmp1150 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
// unreffing capture
*(&local17) = ((org$frostlanguage$frostc$Compiler$Capture*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
// unreffing REF($531:frost.collections.Iterator<frost.collections.MapView.V>)
// line 373
frost$collections$Stack** $tmp1151 = &param0->captures;
frost$collections$Stack* $tmp1152 = *$tmp1151;
frost$core$Object* $tmp1153 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1152);
frost$core$Frost$unref$frost$core$Object$Q($tmp1153);
// unreffing REF($660:frost.collections.Stack.T)
// line 374
frost$collections$Array** $tmp1154 = &param0->pendingClasses;
frost$collections$Array* $tmp1155 = *$tmp1154;
org$frostlanguage$frostc$ClassDecl* $tmp1156 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp1155, ((frost$core$Object*) $tmp1156));
// line 375
org$frostlanguage$frostc$IR$Value* $tmp1157 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp1158 = (frost$core$Int64) {14};
org$frostlanguage$frostc$ClassDecl* $tmp1159 = *(&local15);
org$frostlanguage$frostc$Type** $tmp1160 = &$tmp1159->type;
org$frostlanguage$frostc$Type* $tmp1161 = *$tmp1160;
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp1157, $tmp1158, $tmp1161);
frost$collections$Array* $tmp1162 = *(&local16);
org$frostlanguage$frostc$FixedArray* $tmp1163 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp1162);
org$frostlanguage$frostc$Compiler$TypeContext* $tmp1164 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1165 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1164, $tmp1165);
org$frostlanguage$frostc$IR$Value* $tmp1166 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp1157, ((frost$collections$ListView*) $tmp1163), $tmp1164);
*(&local20) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
org$frostlanguage$frostc$IR$Value* $tmp1167 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local20) = $tmp1166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
// unreffing REF($687:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
// unreffing REF($684:org.frostlanguage.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
// unreffing REF($681:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
// unreffing REF($673:org.frostlanguage.frostc.IR.Value)
// line 377
org$frostlanguage$frostc$IR$Value* $tmp1168 = *(&local20);
frost$core$Bit $tmp1169 = frost$core$Bit$init$builtin_bit($tmp1168 == NULL);
bool $tmp1170 = $tmp1169.value;
if ($tmp1170) goto block30; else goto block31;
block30:;
// line 378
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp1171 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
// unreffing rawTarget
*(&local20) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1172 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
// unreffing args
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp1173 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
// unreffing cl
*(&local15) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1174 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
// unreffing target
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1175 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
// unreffing oldContexts
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlanguage$frostc$MethodDecl* $tmp1176 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
// unreffing methodDecl
*(&local9) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$Annotations* $tmp1177 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
// unreffing annotations
*(&local8) = ((org$frostlanguage$frostc$Annotations*) NULL);
org$frostlanguage$frostc$Pair* $tmp1178 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
// unreffing currentCaptures
*(&local7) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$Type* $tmp1179 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
// unreffing returnType
*(&local6) = ((org$frostlanguage$frostc$Type*) NULL);
frost$collections$Array* $tmp1180 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1181 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block31:;
// line 380
org$frostlanguage$frostc$ASTNode* $tmp1182 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1183 = (frost$core$Int64) {26};
org$frostlanguage$frostc$IR$Value* $tmp1184 = *(&local20);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp1182, $tmp1183, param1, $tmp1184);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
org$frostlanguage$frostc$ASTNode* $tmp1185 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
*(&local14) = $tmp1182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
// unreffing REF($773:org.frostlanguage.frostc.ASTNode)
// line 381
org$frostlanguage$frostc$ClassDecl* $tmp1186 = *(&local15);
org$frostlanguage$frostc$Type** $tmp1187 = &$tmp1186->type;
org$frostlanguage$frostc$Type* $tmp1188 = *$tmp1187;
frost$core$Bit $tmp1189 = org$frostlanguage$frostc$Compiler$isImmutable$org$frostlanguage$frostc$Type$R$frost$core$Bit(param0, $tmp1188);
*(&local13) = $tmp1189;
org$frostlanguage$frostc$IR$Value* $tmp1190 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
// unreffing rawTarget
*(&local20) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1191 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
// unreffing args
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp1192 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
// unreffing cl
*(&local15) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
goto block19;
block20:;
// line 1
// line 385
frost$collections$Stack** $tmp1193 = &param0->captures;
frost$collections$Stack* $tmp1194 = *$tmp1193;
frost$core$Object* $tmp1195 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1194);
frost$core$Frost$unref$frost$core$Object$Q($tmp1195);
// unreffing REF($815:frost.collections.Stack.T)
// line 386
frost$collections$Stack* $tmp1196 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1196);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
frost$collections$Stack** $tmp1197 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1198 = *$tmp1197;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$collections$Stack** $tmp1199 = &param0->enclosingContexts;
*$tmp1199 = $tmp1196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
// unreffing REF($821:frost.collections.Stack<org.frostlanguage.frostc.Compiler.EnclosingContext>)
// line 387
org$frostlanguage$frostc$MethodDecl* $tmp1200 = *(&local9);
org$frostlanguage$frostc$SymbolTable** $tmp1201 = &param0->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp1202 = *$tmp1201;
org$frostlanguage$frostc$Compiler$compile$org$frostlanguage$frostc$MethodDecl$org$frostlanguage$frostc$SymbolTable$Q(param0, $tmp1200, $tmp1202);
// line 388
frost$collections$Stack* $tmp1203 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
frost$collections$Stack** $tmp1204 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1205 = *$tmp1204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$collections$Stack** $tmp1206 = &param0->enclosingContexts;
*$tmp1206 = $tmp1203;
// line 389
org$frostlanguage$frostc$ASTNode* $tmp1207 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1208 = (frost$core$Int64) {31};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position($tmp1207, $tmp1208, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
org$frostlanguage$frostc$ASTNode* $tmp1209 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
*(&local14) = $tmp1207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
// unreffing REF($852:org.frostlanguage.frostc.ASTNode)
// line 390
frost$core$Bit $tmp1210 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp1210;
goto block19;
block19:;
// line 392
frost$collections$Array* $tmp1211 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1211);
*(&local21) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
frost$collections$Array* $tmp1212 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local21) = $tmp1211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
// unreffing REF($870:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 393
*(&local22) = ((org$frostlanguage$frostc$Type*) NULL);
// line 394
org$frostlanguage$frostc$MethodDecl* $tmp1213 = *(&local9);
org$frostlanguage$frostc$Annotations** $tmp1214 = &$tmp1213->annotations;
org$frostlanguage$frostc$Annotations* $tmp1215 = *$tmp1214;
frost$core$Bit $tmp1216 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1215);
bool $tmp1217 = $tmp1216.value;
if ($tmp1217) goto block32; else goto block34;
block32:;
// line 395
org$frostlanguage$frostc$MethodDecl* $tmp1218 = *(&local9);
org$frostlanguage$frostc$Type* $tmp1219 = org$frostlanguage$frostc$MethodDecl$get_type$R$org$frostlanguage$frostc$Type($tmp1218);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
org$frostlanguage$frostc$Type* $tmp1220 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
*(&local22) = $tmp1219;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
// unreffing REF($894:org.frostlanguage.frostc.Type)
goto block33;
block34:;
// line 1
// line 398
org$frostlanguage$frostc$MethodDecl* $tmp1221 = *(&local9);
org$frostlanguage$frostc$MethodDecl* $tmp1222 = *(&local9);
frost$core$Weak** $tmp1223 = &$tmp1222->owner;
frost$core$Weak* $tmp1224 = *$tmp1223;
frost$core$Object* $tmp1225 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1224);
org$frostlanguage$frostc$Type** $tmp1226 = &((org$frostlanguage$frostc$ClassDecl*) $tmp1225)->type;
org$frostlanguage$frostc$Type* $tmp1227 = *$tmp1226;
frost$core$Bit $tmp1228 = frost$core$Bit$init$builtin_bit(false);
org$frostlanguage$frostc$Type* $tmp1229 = org$frostlanguage$frostc$Compiler$declaredTypeWithSelf$org$frostlanguage$frostc$MethodDecl$org$frostlanguage$frostc$Type$frost$core$Bit$R$org$frostlanguage$frostc$Type(param0, $tmp1221, $tmp1227, $tmp1228);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
org$frostlanguage$frostc$Type* $tmp1230 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local22) = $tmp1229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
// unreffing REF($917:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1225);
// unreffing REF($912:frost.core.Weak.T)
goto block33;
block33:;
// line 400
org$frostlanguage$frostc$Type* $tmp1231 = *(&local22);
org$frostlanguage$frostc$Type* $tmp1232 = org$frostlanguage$frostc$Type$pointerTo$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type($tmp1231);
*(&local23) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
org$frostlanguage$frostc$Type* $tmp1233 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local23) = $tmp1232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
// unreffing REF($933:org.frostlanguage.frostc.Type)
// line 401
frost$collections$Array* $tmp1234 = *(&local21);
org$frostlanguage$frostc$ASTNode* $tmp1235 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1236 = (frost$core$Int64) {26};
org$frostlanguage$frostc$IR$Value* $tmp1237 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp1238 = (frost$core$Int64) {3};
org$frostlanguage$frostc$MethodDecl* $tmp1239 = *(&local9);
org$frostlanguage$frostc$Type* $tmp1240 = *(&local23);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$MethodDecl$org$frostlanguage$frostc$Type($tmp1237, $tmp1238, $tmp1239, $tmp1240);
org$frostlanguage$frostc$Type* $tmp1241 = org$frostlanguage$frostc$Type$Int8$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* $tmp1242 = org$frostlanguage$frostc$Type$pointerTo$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type($tmp1241);
org$frostlanguage$frostc$IR$Value* $tmp1243 = org$frostlanguage$frostc$Compiler$cast$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp1237, $tmp1242);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp1235, $tmp1236, param1, $tmp1243);
frost$collections$Array$add$frost$collections$Array$T($tmp1234, ((frost$core$Object*) $tmp1235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
// unreffing REF($957:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
// unreffing REF($956:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
// unreffing REF($955:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
// unreffing REF($949:org.frostlanguage.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
// unreffing REF($947:org.frostlanguage.frostc.ASTNode)
// line 403
frost$collections$Array* $tmp1244 = *(&local21);
org$frostlanguage$frostc$ASTNode* $tmp1245 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp1244, ((frost$core$Object*) $tmp1245));
// line 404
*(&local24) = ((org$frostlanguage$frostc$Type*) NULL);
// line 405
frost$core$Bit $tmp1246 = *(&local13);
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block35; else goto block37;
block35:;
// line 406
org$frostlanguage$frostc$Type* $tmp1248 = org$frostlanguage$frostc$Type$Method$R$org$frostlanguage$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
org$frostlanguage$frostc$Type* $tmp1249 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local24) = $tmp1248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
// unreffing REF($991:org.frostlanguage.frostc.Type)
goto block36;
block37:;
// line 1
// line 409
org$frostlanguage$frostc$Type* $tmp1250 = org$frostlanguage$frostc$Type$MutableMethod$R$org$frostlanguage$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
org$frostlanguage$frostc$Type* $tmp1251 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
*(&local24) = $tmp1250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
// unreffing REF($1004:org.frostlanguage.frostc.Type)
goto block36;
block36:;
// line 411
org$frostlanguage$frostc$IR$Value* $tmp1252 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp1253 = (frost$core$Int64) {14};
org$frostlanguage$frostc$Type* $tmp1254 = *(&local24);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp1252, $tmp1253, $tmp1254);
frost$collections$Array* $tmp1255 = *(&local21);
org$frostlanguage$frostc$Compiler$TypeContext* $tmp1256 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1257 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1256, $tmp1257);
org$frostlanguage$frostc$IR$Value* $tmp1258 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp1252, ((frost$collections$ListView*) $tmp1255), $tmp1256);
org$frostlanguage$frostc$MethodDecl* $tmp1259 = *(&local9);
org$frostlanguage$frostc$Type* $tmp1260 = org$frostlanguage$frostc$MethodDecl$get_type$R$org$frostlanguage$frostc$Type($tmp1259);
org$frostlanguage$frostc$IR$Value* $tmp1261 = org$frostlanguage$frostc$Compiler$cast$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp1258, $tmp1260);
*(&local25) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
org$frostlanguage$frostc$IR$Value* $tmp1262 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local25) = $tmp1261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
// unreffing REF($1028:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
// unreffing REF($1027:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
// unreffing REF($1025:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// unreffing REF($1022:org.frostlanguage.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
// unreffing REF($1016:org.frostlanguage.frostc.IR.Value)
// line 413
org$frostlanguage$frostc$IR$Value* $tmp1263 = *(&local25);
org$frostlanguage$frostc$IR$Value* $tmp1264 = org$frostlanguage$frostc$Compiler$coerce$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp1263, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
// unreffing REF($1053:org.frostlanguage.frostc.IR.Value?)
org$frostlanguage$frostc$IR$Value* $tmp1265 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
// unreffing construct
*(&local25) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Type* $tmp1266 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
// unreffing methodType
*(&local24) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp1267 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
// unreffing irType
*(&local23) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp1268 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
// unreffing frostType
*(&local22) = ((org$frostlanguage$frostc$Type*) NULL);
frost$collections$Array* $tmp1269 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
// unreffing args
*(&local21) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1270 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
// unreffing target
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1271 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
// unreffing oldContexts
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlanguage$frostc$MethodDecl* $tmp1272 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
// unreffing methodDecl
*(&local9) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$Annotations* $tmp1273 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
// unreffing annotations
*(&local8) = ((org$frostlanguage$frostc$Annotations*) NULL);
org$frostlanguage$frostc$Pair* $tmp1274 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
// unreffing currentCaptures
*(&local7) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$Type* $tmp1275 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
// unreffing returnType
*(&local6) = ((org$frostlanguage$frostc$Type*) NULL);
frost$collections$Array* $tmp1276 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1277 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp1264;

}
void org$frostlanguage$frostc$expression$Closure$init(org$frostlanguage$frostc$expression$Closure* param0) {

return;

}
void org$frostlanguage$frostc$expression$Closure$cleanup(org$frostlanguage$frostc$expression$Closure* param0) {

// line 23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

