#include "org/frostlang/frostc/expression/Tuple.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Frost.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/expression/Tuple/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/expression/Tuple/_Closure4.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Tuple$class_type org$frostlang$frostc$expression$Tuple$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Tuple$cleanup} };

typedef frost$core$Int (*$fn24)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn34)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn37)(frost$core$Object*);
typedef frost$core$String* (*$fn44)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn68)(org$frostlang$frostc$expression$Tuple$_Closure2*, org$frostlang$frostc$Type*, org$frostlang$frostc$Type*);
typedef frost$core$Object* (*$fn76)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn82)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn86)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn122)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn134)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn138)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn149)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn225)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn238)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn242)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn270)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn283)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn287)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn332)(org$frostlang$frostc$expression$Tuple$_Closure4*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Array* (*$fn340)(frost$collections$CollectionView*, frost$core$MutableMethod*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x54\x75\x70\x6c\x65", 37, -2192914147627931606, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x69\x6e\x64\x65\x78\x20\x27", 13, -2835249030150575212, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x66\x6f\x72\x20\x27", 24, -5834575264800361726, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Tuple$indexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$ASTNode* param2) {

frost$core$UInt64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:15
frost$core$Int* $tmp2 = &param2->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:16:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Position* $tmp10 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp11 = *$tmp10;
frost$core$UInt64* $tmp12 = (frost$core$UInt64*) (param2->$data + 24);
frost$core$UInt64 $tmp13 = *$tmp12;
*(&local0) = $tmp13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:17
frost$core$UInt64 $tmp14 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:17:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp15 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp16 = *$tmp15;
frost$core$Bit $tmp17 = (frost$core$Bit) {$tmp16 != NULL};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block7; else goto block8;
block8:;
frost$core$Int $tmp19 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, $tmp19, &$s21);
abort(); // unreachable
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
ITable* $tmp22 = ((frost$collections$CollectionView*) $tmp16)->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp22 = $tmp22->next;
}
$fn24 $tmp23 = $tmp22->methods[0];
frost$core$Int $tmp25 = $tmp23(((frost$collections$CollectionView*) $tmp16));
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Tuple.frost:17:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
int64_t $tmp26 = $tmp25.value;
frost$core$UInt64 $tmp27 = (frost$core$UInt64) {((uint64_t) $tmp26)};
uint64_t $tmp28 = $tmp14.value;
uint64_t $tmp29 = $tmp27.value;
bool $tmp30 = $tmp28 > $tmp29;
frost$core$Bit $tmp31 = (frost$core$Bit) {$tmp30};
bool $tmp32 = $tmp31.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
if ($tmp32) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:18
$fn34 $tmp33 = ($fn34) param2->$class->vtable[2];
org$frostlang$frostc$Position $tmp35 = $tmp33(param2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple.frost:19:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn37 $tmp36 = ($fn37) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp38 = $tmp36(((frost$core$Object*) param2));
frost$core$String* $tmp39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s40, $tmp38);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$String* $tmp41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp39, &$s42);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple.frost:19:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn44 $tmp43 = ($fn44) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp45 = $tmp43(((frost$core$Object*) param1));
frost$core$String* $tmp46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp41, $tmp45);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$String* $tmp47 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp46, &$s48);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp35, $tmp47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:21
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:21:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp49 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp50 = *$tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50 != NULL};
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block13; else goto block14;
block14:;
frost$core$Int $tmp53 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$UInt64 $tmp56 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Tuple.frost:21:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp57 = $tmp56.value;
frost$core$Int $tmp58 = (frost$core$Int) {((int64_t) $tmp57)};
frost$core$Object* $tmp59 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp50, $tmp58);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp59)));
frost$core$Frost$unref$frost$core$Object$Q($tmp59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
return ((org$frostlang$frostc$Type*) $tmp59);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:24
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:24:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp60 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp61 = *$tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61 != NULL};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block17; else goto block18;
block18:;
frost$core$Int $tmp64 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s65, $tmp64, &$s66);
abort(); // unreachable
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Tuple$_Closure2));
org$frostlang$frostc$expression$Tuple$_Closure2* $tmp67 = (org$frostlang$frostc$expression$Tuple$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Tuple$_Closure2$class);
org$frostlang$frostc$expression$Tuple$_Closure2$init$org$frostlang$frostc$Compiler($tmp67, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp69 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Tuple.frost:24:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp70 = &$tmp69->pointer;
*$tmp70 = ((frost$core$Int8*) org$frostlang$frostc$expression$Tuple$_Closure2$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Object** $tmp71 = &$tmp69->target;
frost$core$Object* $tmp72 = *$tmp71;
frost$core$Frost$unref$frost$core$Object$Q($tmp72);
frost$core$Object** $tmp73 = &$tmp69->target;
*$tmp73 = ((frost$core$Object*) $tmp67);
ITable* $tmp74 = ((frost$collections$CollectionView*) $tmp61)->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp74 = $tmp74->next;
}
$fn76 $tmp75 = $tmp74->methods[4];
frost$core$Object* $tmp77 = $tmp75(((frost$collections$CollectionView*) $tmp61), $tmp69);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp77)));
frost$core$Frost$unref$frost$core$Object$Q($tmp77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
return ((org$frostlang$frostc$Type*) $tmp77);

}
frost$collections$CollectionView* org$frostlang$frostc$expression$Tuple$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$FixedArray* param1) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:29
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp78 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp78);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$collections$Array* $tmp79 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local0) = $tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:30
ITable* $tmp80 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[0];
frost$collections$Iterator* $tmp83 = $tmp81(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp84 = $tmp83->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp84 = $tmp84->next;
}
$fn86 $tmp85 = $tmp84->methods[0];
frost$core$Bit $tmp87 = $tmp85($tmp83);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp89 = $tmp83->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[1];
frost$core$Object* $tmp92 = $tmp90($tmp83);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp92)));
org$frostlang$frostc$ASTNode* $tmp93 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local1) = ((org$frostlang$frostc$ASTNode*) $tmp92);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:31
org$frostlang$frostc$ASTNode* $tmp94 = *(&local1);
org$frostlang$frostc$Type* $tmp95 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp94);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
org$frostlang$frostc$Type* $tmp96 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local2) = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:32
org$frostlang$frostc$Type* $tmp97 = *(&local2);
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97 == NULL};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) NULL)));
org$frostlang$frostc$Type* $tmp100 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp92);
org$frostlang$frostc$ASTNode* $tmp101 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$collections$Array* $tmp102 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$CollectionView*) NULL);
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:35
frost$collections$Array* $tmp103 = *(&local0);
org$frostlang$frostc$Type* $tmp104 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp103, ((frost$core$Object*) $tmp104));
org$frostlang$frostc$Type* $tmp105 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp92);
org$frostlang$frostc$ASTNode* $tmp106 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:37
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp107 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp108 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp107, $tmp108);
frost$collections$Array* $tmp109 = *(&local0);
org$frostlang$frostc$Type* $tmp110 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp109));
frost$collections$Array$add$frost$collections$Array$T($tmp107, ((frost$core$Object*) $tmp110));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp107)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$collections$Array* $tmp111 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$CollectionView*) $tmp107);

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Tuple$coercionCost$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$FixedArray* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
frost$core$Int local2;
frost$core$Int local3;
org$frostlang$frostc$Pair* local4 = NULL;
frost$collections$CollectionView* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:43
org$frostlang$frostc$Type$Kind* $tmp112 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp113 = *$tmp112;
org$frostlang$frostc$Type$Kind$wrapper* $tmp114;
$tmp114 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp114->value = $tmp113;
frost$core$Int $tmp115 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Tuple.frost:43:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp116 = &(&local1)->$rawValue;
*$tmp116 = $tmp115;
org$frostlang$frostc$Type$Kind $tmp117 = *(&local1);
*(&local0) = $tmp117;
org$frostlang$frostc$Type$Kind $tmp118 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp119;
$tmp119 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp119->value = $tmp118;
ITable* $tmp120 = ((frost$core$Equatable*) $tmp114)->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp120 = $tmp120->next;
}
$fn122 $tmp121 = $tmp120->methods[0];
frost$core$Bit $tmp123 = $tmp121(((frost$core$Equatable*) $tmp114), ((frost$core$Equatable*) $tmp119));
bool $tmp124 = $tmp123.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp119)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp114)));
if ($tmp124) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:43:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp125 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp126 = *$tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126 != NULL};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block6; else goto block7;
block7:;
frost$core$Int $tmp129 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s130, $tmp129, &$s131);
abort(); // unreachable
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
ITable* $tmp132 = ((frost$collections$CollectionView*) $tmp126)->$class->itable;
while ($tmp132->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[0];
frost$core$Int $tmp135 = $tmp133(((frost$collections$CollectionView*) $tmp126));
ITable* $tmp136 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[0];
frost$core$Int $tmp139 = $tmp137(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:43:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp140 = $tmp135.value;
int64_t $tmp141 = $tmp139.value;
bool $tmp142 = $tmp140 == $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
if ($tmp144) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:44
frost$core$Int $tmp145 = (frost$core$Int) {0u};
*(&local2) = $tmp145;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:45
frost$core$Int $tmp146 = (frost$core$Int) {0u};
ITable* $tmp147 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[0];
frost$core$Int $tmp150 = $tmp148(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp151 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp152 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp146, $tmp150, $tmp151);
frost$core$Int $tmp153 = $tmp152.min;
*(&local3) = $tmp153;
frost$core$Int $tmp154 = $tmp152.max;
frost$core$Bit $tmp155 = $tmp152.inclusive;
bool $tmp156 = $tmp155.value;
frost$core$Int $tmp157 = (frost$core$Int) {1u};
if ($tmp156) goto block12; else goto block13;
block12:;
int64_t $tmp158 = $tmp153.value;
int64_t $tmp159 = $tmp154.value;
bool $tmp160 = $tmp158 <= $tmp159;
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160};
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block9; else goto block10;
block13:;
int64_t $tmp163 = $tmp153.value;
int64_t $tmp164 = $tmp154.value;
bool $tmp165 = $tmp163 < $tmp164;
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:46
frost$core$Int $tmp168 = *(&local3);
frost$core$Object* $tmp169 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param1, $tmp168);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:46:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp170 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp171 = *$tmp170;
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171 != NULL};
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block15; else goto block16;
block16:;
frost$core$Int $tmp174 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s175, $tmp174, &$s176);
abort(); // unreachable
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Int $tmp177 = *(&local3);
frost$core$Object* $tmp178 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp171, $tmp177);
org$frostlang$frostc$Pair* $tmp179 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp169), ((org$frostlang$frostc$Type*) $tmp178));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
org$frostlang$frostc$Pair* $tmp180 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local4) = $tmp179;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q($tmp178);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q($tmp169);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:47
org$frostlang$frostc$Pair* $tmp181 = *(&local4);
frost$core$Bit $tmp182 = (frost$core$Bit) {$tmp181 == NULL};
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:48
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp184 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:50
frost$core$Int $tmp185 = *(&local2);
org$frostlang$frostc$Pair* $tmp186 = *(&local4);
frost$core$Object** $tmp187 = &$tmp186->second;
frost$core$Object* $tmp188 = *$tmp187;
int64_t $tmp189 = $tmp185.value;
int64_t $tmp190 = ((frost$core$Int$wrapper*) $tmp188)->value.value;
int64_t $tmp191 = $tmp189 + $tmp190;
frost$core$Int $tmp192 = (frost$core$Int) {$tmp191};
*(&local2) = $tmp192;
org$frostlang$frostc$Pair* $tmp193 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Int $tmp194 = *(&local3);
int64_t $tmp195 = $tmp154.value;
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195 - $tmp196;
frost$core$Int $tmp198 = (frost$core$Int) {$tmp197};
if ($tmp156) goto block20; else goto block21;
block20:;
int64_t $tmp199 = $tmp198.value;
int64_t $tmp200 = $tmp157.value;
bool $tmp201 = $tmp199 >= $tmp200;
frost$core$Bit $tmp202 = (frost$core$Bit) {$tmp201};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block19; else goto block10;
block21:;
int64_t $tmp204 = $tmp198.value;
int64_t $tmp205 = $tmp157.value;
bool $tmp206 = $tmp204 > $tmp205;
frost$core$Bit $tmp207 = (frost$core$Bit) {$tmp206};
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block19; else goto block10;
block19:;
int64_t $tmp209 = $tmp194.value;
int64_t $tmp210 = $tmp157.value;
int64_t $tmp211 = $tmp209 + $tmp210;
frost$core$Int $tmp212 = (frost$core$Int) {$tmp211};
*(&local3) = $tmp212;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:52
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp213 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Int $tmp214 = *(&local2);
frost$core$Int$wrapper* $tmp215;
$tmp215 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp215->value = $tmp214;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp213, ((frost$core$Object*) param2), ((frost$core$Object*) $tmp215));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
return $tmp213;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:54
frost$collections$CollectionView* $tmp216 = org$frostlang$frostc$expression$Tuple$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local5) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$collections$CollectionView* $tmp217 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local5) = $tmp216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:55
frost$collections$CollectionView* $tmp218 = *(&local5);
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218 == NULL};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:56
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp221 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local5) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:58
frost$collections$CollectionView* $tmp222 = *(&local5);
ITable* $tmp223 = $tmp222->$class->itable;
while ($tmp223->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp223 = $tmp223->next;
}
$fn225 $tmp224 = $tmp223->methods[0];
frost$core$Int $tmp226 = $tmp224($tmp222);
frost$core$Int $tmp227 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:58:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp228 = $tmp226.value;
int64_t $tmp229 = $tmp227.value;
bool $tmp230 = $tmp228 == $tmp229;
frost$core$Bit $tmp231 = (frost$core$Bit) {$tmp230};
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block25; else goto block26;
block26:;
frost$core$Int $tmp233 = (frost$core$Int) {58u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s234, $tmp233);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:59
frost$collections$CollectionView* $tmp235 = *(&local5);
ITable* $tmp236 = ((frost$collections$Iterable*) $tmp235)->$class->itable;
while ($tmp236->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp236 = $tmp236->next;
}
$fn238 $tmp237 = $tmp236->methods[0];
frost$collections$Iterator* $tmp239 = $tmp237(((frost$collections$Iterable*) $tmp235));
ITable* $tmp240 = $tmp239->$class->itable;
while ($tmp240->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp240 = $tmp240->next;
}
$fn242 $tmp241 = $tmp240->methods[1];
frost$core$Object* $tmp243 = $tmp241($tmp239);
org$frostlang$frostc$Pair* $tmp244 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, ((org$frostlang$frostc$Type*) $tmp243), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$Frost$unref$frost$core$Object$Q($tmp243);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$collections$CollectionView* $tmp245 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local5) = ((frost$collections$CollectionView*) NULL);
return $tmp244;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Tuple$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:65
frost$core$Int* $tmp246 = &param3->$rawValue;
frost$core$Int $tmp247 = *$tmp246;
frost$core$Int $tmp248 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:66:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp249 = $tmp247.value;
int64_t $tmp250 = $tmp248.value;
bool $tmp251 = $tmp249 == $tmp250;
frost$core$Bit $tmp252 = (frost$core$Bit) {$tmp251};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp254 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp255 = *$tmp254;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$Type* $tmp256 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local0) = $tmp255;
frost$core$Bit* $tmp257 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp258 = *$tmp257;
*(&local1) = $tmp258;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:67
org$frostlang$frostc$Type* $tmp259 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_isTuple():frost.core.Bit from Tuple.frost:67:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:373
org$frostlang$frostc$Type$Kind* $tmp260 = &$tmp259->typeKind;
org$frostlang$frostc$Type$Kind $tmp261 = *$tmp260;
org$frostlang$frostc$Type$Kind$wrapper* $tmp262;
$tmp262 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp262->value = $tmp261;
frost$core$Int $tmp263 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:373:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp264 = &(&local3)->$rawValue;
*$tmp264 = $tmp263;
org$frostlang$frostc$Type$Kind $tmp265 = *(&local3);
*(&local2) = $tmp265;
org$frostlang$frostc$Type$Kind $tmp266 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp267;
$tmp267 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp267->value = $tmp266;
ITable* $tmp268 = ((frost$core$Equatable*) $tmp262)->$class->itable;
while ($tmp268->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp268 = $tmp268->next;
}
$fn270 $tmp269 = $tmp268->methods[0];
frost$core$Bit $tmp271 = $tmp269(((frost$core$Equatable*) $tmp262), ((frost$core$Equatable*) $tmp267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp267)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp262)));
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Type* $tmp273 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:67:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp274 = &$tmp273->_subtypes;
org$frostlang$frostc$FixedArray* $tmp275 = *$tmp274;
frost$core$Bit $tmp276 = (frost$core$Bit) {$tmp275 != NULL};
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block10; else goto block11;
block11:;
frost$core$Int $tmp278 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s279, $tmp278, &$s280);
abort(); // unreachable
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
ITable* $tmp281 = ((frost$collections$CollectionView*) $tmp275)->$class->itable;
while ($tmp281->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp281 = $tmp281->next;
}
$fn283 $tmp282 = $tmp281->methods[0];
frost$core$Int $tmp284 = $tmp282(((frost$collections$CollectionView*) $tmp275));
ITable* $tmp285 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp285->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp285 = $tmp285->next;
}
$fn287 $tmp286 = $tmp285->methods[0];
frost$core$Int $tmp288 = $tmp286(((frost$collections$CollectionView*) param2));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:67:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp289 = $tmp284.value;
int64_t $tmp290 = $tmp288.value;
bool $tmp291 = $tmp289 == $tmp290;
frost$core$Bit $tmp292 = (frost$core$Bit) {$tmp291};
bool $tmp293 = $tmp292.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
if ($tmp293) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:68
org$frostlang$frostc$Type* $tmp294 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp295 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp294);
org$frostlang$frostc$Type** $tmp296 = &$tmp295->type;
org$frostlang$frostc$Type* $tmp297 = *$tmp296;
org$frostlang$frostc$Type* $tmp298 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:68:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp299 = &$tmp298->_subtypes;
org$frostlang$frostc$FixedArray* $tmp300 = *$tmp299;
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300 != NULL};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block14; else goto block15;
block15:;
frost$core$Int $tmp303 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s304, $tmp303, &$s305);
abort(); // unreachable
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
org$frostlang$frostc$Type* $tmp306 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp297, ((frost$collections$ListView*) $tmp300));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
org$frostlang$frostc$Type* $tmp307 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local4) = $tmp306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:69
org$frostlang$frostc$Type* $tmp308 = *(&local4);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Tuple.frost:70:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3686
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp309 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp310 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3686:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp311 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp312 = *$tmp311;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp313 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp314 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp313, $tmp314);
frost$collections$Array$add$frost$collections$Array$T($tmp313, ((frost$core$Object*) $tmp308));
org$frostlang$frostc$Type* $tmp315 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp312, ((frost$collections$ListView*) $tmp313));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp309, $tmp310, $tmp308, $tmp315);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp316 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp317 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp316, $tmp317);
org$frostlang$frostc$IR$Value* $tmp318 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp309, ((frost$collections$ListView*) param2), $tmp316);
org$frostlang$frostc$Type* $tmp319 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp320 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp318, $tmp319);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
org$frostlang$frostc$Type* $tmp321 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp322 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp320;
block5:;
org$frostlang$frostc$Type* $tmp323 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:74
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp324 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp325 = (frost$core$Int) {43u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp324, $tmp325, param1, param2);
org$frostlang$frostc$Type* $tmp326 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp324);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
org$frostlang$frostc$Type* $tmp327 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local5) = $tmp326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:75
org$frostlang$frostc$Type* $tmp328 = *(&local5);
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328 == NULL};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:76
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Tuple$_Closure4));
org$frostlang$frostc$expression$Tuple$_Closure4* $tmp331 = (org$frostlang$frostc$expression$Tuple$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Tuple$_Closure4$class);
org$frostlang$frostc$expression$Tuple$_Closure4$init$org$frostlang$frostc$Compiler($tmp331, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp333 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Tuple.frost:76:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp334 = &$tmp333->pointer;
*$tmp334 = ((frost$core$Int8*) org$frostlang$frostc$expression$Tuple$_Closure4$$anonymous3$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Object** $tmp335 = &$tmp333->target;
frost$core$Object* $tmp336 = *$tmp335;
frost$core$Frost$unref$frost$core$Object$Q($tmp336);
frost$core$Object** $tmp337 = &$tmp333->target;
*$tmp337 = ((frost$core$Object*) $tmp331);
ITable* $tmp338 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp338->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp338 = $tmp338->next;
}
$fn340 $tmp339 = $tmp338->methods[9];
frost$collections$Array* $tmp341 = $tmp339(((frost$collections$CollectionView*) param2), $tmp333);
org$frostlang$frostc$Type* $tmp342 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp341));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
org$frostlang$frostc$Type* $tmp343 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local5) = $tmp342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:78
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp344 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp345 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp346 = *(&local5);
frost$core$Bit $tmp347 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp344, $tmp345, $tmp346, $tmp347);
org$frostlang$frostc$IR$Value* $tmp348 = org$frostlang$frostc$expression$Tuple$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp344);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
org$frostlang$frostc$IR$Value* $tmp349 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local6) = $tmp348;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:79
org$frostlang$frostc$IR$Value* $tmp350 = *(&local6);
frost$core$Bit $tmp351 = (frost$core$Bit) {$tmp350 == NULL};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:80
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp353 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp354 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:82
org$frostlang$frostc$IR$Value* $tmp355 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp356 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp355, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
org$frostlang$frostc$IR$Value* $tmp357 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp358 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp356;

}
void org$frostlang$frostc$expression$Tuple$init(org$frostlang$frostc$expression$Tuple* param0) {

return;

}
void org$frostlang$frostc$expression$Tuple$cleanup(org$frostlang$frostc$expression$Tuple* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

