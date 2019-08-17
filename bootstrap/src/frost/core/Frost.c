#include "frost/core/Frost.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Maybe.h"
#include "frost/core/Int.h"
#include "frost/core/Error.h"
#include "frost/core/Weak.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Array.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/io/Console.h"
#include "frost/io/OutputStream.h"
#include "frost/core/System.h"
#include "frost/core/UInt64.h"
#include "frost/core/Char32.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt8.h"
#include "frost/core/Char8.h"
#include "frost/core/String/Index.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/collections/ListView.h"
#include "frost/core/String/UTF8List.h"
#include "frost/core/Comparable.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/collections/List.h"
#include "frost/collections/ListWriter.h"
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
frost$core$Frost$class_type frost$core$Frost$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Frost$cleanup} };

typedef frost$collections$Iterator* (*$fn40)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn44)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn49)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn68)(frost$core$Object*);
typedef frost$core$Error* (*$fn74)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn84)(frost$core$Object*);
typedef frost$core$Error* (*$fn93)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn198)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn230)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn234)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn364)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn480)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn592)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn597)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn601)(frost$collections$ListWriter*, frost$core$Int, frost$core$Object*);
typedef void (*$fn605)(frost$collections$ListWriter*, frost$core$Int, frost$core$Object*);
typedef frost$core$Object* (*$fn628)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn657)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn665)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn667)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, 4237142976622831502, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, 7669895969177076905, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, 7669895969177076905, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3a\x20", 3, 48285155966961582, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -6606133885720023461, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 3330193207084279677, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, -1839289420917840067, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 3626147090372997348, NULL };

void frost$core$Frost$init(frost$core$Frost* param0) {

return;

}
frost$core$Maybe* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$Object* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:21
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp2 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp3 = (frost$core$Int) {0u};
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T($tmp2, $tmp3, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return $tmp2;

}
frost$core$Maybe* frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:27
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp4 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp5 = (frost$core$Int) {1u};
FROST_ASSERT(24 == sizeof(frost$core$Error));
frost$core$Error* $tmp6 = (frost$core$Error*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Error$class);
frost$core$Error$init$frost$core$String($tmp6, param0);
frost$core$Maybe$init$frost$core$Int$frost$core$Error($tmp4, $tmp5, $tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
return $tmp4;

}
void frost$core$Frost$_addWeakReference$frost$core$Weak$LTfrost$core$Object$GT$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Weak* param0, frost$collections$HashMap* param1) {

frost$core$Int local0;
frost$collections$Array* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:44
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Frost.frost:44:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp7 = &param0->_valid;
frost$core$Bit $tmp8 = *$tmp7;
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block3; else goto block4;
block4:;
frost$core$Int $tmp10 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s11, $tmp10);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp12 = &param0->value;
frost$core$Object* $tmp13 = *$tmp12;
frost$core$Frost$ref$frost$core$Object$Q($tmp13);
frost$core$Int $tmp14;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&$tmp14, $tmp13);
*(&local0) = $tmp14;
frost$core$Frost$unref$frost$core$Object$Q($tmp13);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:45
frost$core$Int $tmp15 = *(&local0);
frost$core$Int$wrapper* $tmp16;
$tmp16 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp16->value = $tmp15;
frost$core$Object* $tmp17 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, ((frost$collections$Key*) $tmp16));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) $tmp17)));
frost$collections$Array* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local1) = ((frost$collections$Array*) $tmp17);
frost$core$Frost$unref$frost$core$Object$Q($tmp17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp16)));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:46
frost$collections$Array* $tmp19 = *(&local1);
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19 == NULL};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:47
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp22 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$collections$Array* $tmp23 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local1) = $tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:48
frost$core$Int $tmp24 = *(&local0);
frost$core$Int$wrapper* $tmp25;
$tmp25 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp25->value = $tmp24;
frost$collections$Array* $tmp26 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param1, ((frost$collections$Key*) $tmp25), ((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp25)));
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:50
frost$collections$Array* $tmp27 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp27, ((frost$core$Object*) param0));
frost$collections$Array* $tmp28 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local1) = ((frost$collections$Array*) NULL);
return;

}
void frost$core$Frost$weakReferentDestroyed$frost$core$Int$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Int param0, frost$collections$HashMap* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Weak* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:55
frost$core$Int$wrapper* $tmp29;
$tmp29 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp29->value = param0;
frost$core$Object* $tmp30 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, ((frost$collections$Key*) $tmp29));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) $tmp30)));
frost$collections$Array* $tmp31 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local0) = ((frost$collections$Array*) $tmp30);
frost$core$Frost$unref$frost$core$Object$Q($tmp30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp29)));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:56
frost$collections$Array* $tmp32 = *(&local0);
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32 != NULL};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block2;
block2:;
frost$core$Int $tmp35 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s36, $tmp35);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:57
frost$collections$Array* $tmp37 = *(&local0);
ITable* $tmp38 = ((frost$collections$Iterable*) $tmp37)->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp38 = $tmp38->next;
}
$fn40 $tmp39 = $tmp38->methods[0];
frost$collections$Iterator* $tmp41 = $tmp39(((frost$collections$Iterable*) $tmp37));
goto block3;
block3:;
ITable* $tmp42 = $tmp41->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp42 = $tmp42->next;
}
$fn44 $tmp43 = $tmp42->methods[0];
frost$core$Bit $tmp45 = $tmp43($tmp41);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block5; else goto block4;
block4:;
*(&local1) = ((frost$core$Weak*) NULL);
ITable* $tmp47 = $tmp41->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[1];
frost$core$Object* $tmp50 = $tmp48($tmp41);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Weak*) $tmp50)));
frost$core$Weak* $tmp51 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local1) = ((frost$core$Weak*) $tmp50);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:58
frost$core$Weak* $tmp52 = *(&local1);
frost$core$Bit $tmp53 = (frost$core$Bit) {false};
frost$core$Bit* $tmp54 = &$tmp52->_valid;
*$tmp54 = $tmp53;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:59
frost$core$Weak* $tmp55 = *(&local1);
frost$core$Object** $tmp56 = &$tmp55->value;
*$tmp56 = ((frost$core$Object*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp50);
frost$core$Weak* $tmp57 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local1) = ((frost$core$Weak*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:61
frost$core$Int$wrapper* $tmp58;
$tmp58 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp58->value = param0;
frost$collections$HashMap$remove$frost$collections$HashMap$K(param1, ((frost$collections$Key*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp58)));
frost$collections$Array* $tmp59 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
frost$collections$HashMap* frost$core$Frost$createWeakReferenceMap$R$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Object$GT$GT() {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:66
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp60 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
return $tmp60;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(frost$core$String* param0, frost$core$Int param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:83
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:84
frost$io$OutputStream* $tmp61 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp62 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s63, param0);
frost$core$String* $tmp64 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp62, &$s65);
frost$core$Int$wrapper* $tmp66;
$tmp66 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp66->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Frost.frost:84:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn68 $tmp67 = ($fn68) ((frost$core$Object*) $tmp66)->$class->vtable[0];
frost$core$String* $tmp69 = $tmp67(((frost$core$Object*) $tmp66));
frost$core$String* $tmp70 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp64, $tmp69);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$String* $tmp71 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp70, &$s72);
$fn74 $tmp73 = ($fn74) $tmp61->$class->vtable[19];
frost$core$Error* $tmp75 = $tmp73($tmp61, $tmp71);
if ($tmp75 == NULL) goto block4; else goto block5;
block5:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local0) = $tmp75;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
goto block2;
block2:;
frost$core$Error* $tmp76 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:88
frost$core$System$crash();
return;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$String* param2) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:93
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:94
frost$io$OutputStream* $tmp77 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp78 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s79, param0);
frost$core$String* $tmp80 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp78, &$s81);
frost$core$Int$wrapper* $tmp82;
$tmp82 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp82->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Frost.frost:94:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn84 $tmp83 = ($fn84) ((frost$core$Object*) $tmp82)->$class->vtable[0];
frost$core$String* $tmp85 = $tmp83(((frost$core$Object*) $tmp82));
frost$core$String* $tmp86 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp80, $tmp85);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$String* $tmp87 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp86, &$s88);
frost$core$String* $tmp89 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp87, param2);
frost$core$String* $tmp90 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp89, &$s91);
$fn93 $tmp92 = ($fn93) $tmp77->$class->vtable[19];
frost$core$Error* $tmp94 = $tmp92($tmp77, $tmp90);
if ($tmp94 == NULL) goto block4; else goto block5;
block5:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local0) = $tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
goto block2;
block2:;
frost$core$Error* $tmp95 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:98
frost$core$System$crash();
return;

}
frost$core$UInt64$nullable frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q(frost$core$Char32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:103
frost$core$Int32 $tmp96 = (frost$core$Int32) {48u};
frost$core$Char32 $tmp97 = frost$core$Char32$init$frost$core$Int32($tmp96);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:103:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:52
int32_t $tmp98 = param0.value;
int32_t $tmp99 = $tmp97.value;
bool $tmp100 = $tmp98 >= $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block3; else goto block2;
block3:;
frost$core$Int32 $tmp103 = (frost$core$Int32) {57u};
frost$core$Char32 $tmp104 = frost$core$Char32$init$frost$core$Int32($tmp103);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:103:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
int32_t $tmp105 = param0.value;
int32_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 <= $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:104
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:104:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
int32_t $tmp110 = param0.value;
frost$core$UInt64 $tmp111 = (frost$core$UInt64) {((uint64_t) $tmp110)};
frost$core$UInt8 $tmp112 = (frost$core$UInt8) {48u};
frost$core$Char8 $tmp113 = frost$core$Char8$init$frost$core$UInt8($tmp112);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:104:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
uint8_t $tmp114 = $tmp113.value;
frost$core$UInt64 $tmp115 = (frost$core$UInt64) {((uint64_t) $tmp114)};
uint64_t $tmp116 = $tmp111.value;
uint64_t $tmp117 = $tmp115.value;
uint64_t $tmp118 = $tmp116 - $tmp117;
frost$core$UInt64 $tmp119 = (frost$core$UInt64) {$tmp118};
return ((frost$core$UInt64$nullable) { $tmp119, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:106
frost$core$Int32 $tmp120 = (frost$core$Int32) {65u};
frost$core$Char32 $tmp121 = frost$core$Char32$init$frost$core$Int32($tmp120);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:106:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:52
int32_t $tmp122 = param0.value;
int32_t $tmp123 = $tmp121.value;
bool $tmp124 = $tmp122 >= $tmp123;
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124};
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block10; else goto block9;
block10:;
frost$core$Int32 $tmp127 = (frost$core$Int32) {90u};
frost$core$Char32 $tmp128 = frost$core$Char32$init$frost$core$Int32($tmp127);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:106:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
int32_t $tmp129 = param0.value;
int32_t $tmp130 = $tmp128.value;
bool $tmp131 = $tmp129 <= $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:107
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:107:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
int32_t $tmp134 = param0.value;
frost$core$UInt64 $tmp135 = (frost$core$UInt64) {((uint64_t) $tmp134)};
frost$core$UInt8 $tmp136 = (frost$core$UInt8) {65u};
frost$core$Char8 $tmp137 = frost$core$Char8$init$frost$core$UInt8($tmp136);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:107:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
uint8_t $tmp138 = $tmp137.value;
frost$core$UInt64 $tmp139 = (frost$core$UInt64) {((uint64_t) $tmp138)};
uint64_t $tmp140 = $tmp135.value;
uint64_t $tmp141 = $tmp139.value;
uint64_t $tmp142 = $tmp140 - $tmp141;
frost$core$UInt64 $tmp143 = (frost$core$UInt64) {$tmp142};
frost$core$UInt64 $tmp144 = (frost$core$UInt64) {10u};
uint64_t $tmp145 = $tmp143.value;
uint64_t $tmp146 = $tmp144.value;
uint64_t $tmp147 = $tmp145 + $tmp146;
frost$core$UInt64 $tmp148 = (frost$core$UInt64) {$tmp147};
return ((frost$core$UInt64$nullable) { $tmp148, true });
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:109
frost$core$Int32 $tmp149 = (frost$core$Int32) {97u};
frost$core$Char32 $tmp150 = frost$core$Char32$init$frost$core$Int32($tmp149);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:109:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:52
int32_t $tmp151 = param0.value;
int32_t $tmp152 = $tmp150.value;
bool $tmp153 = $tmp151 >= $tmp152;
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153};
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block17; else goto block16;
block17:;
frost$core$Int32 $tmp156 = (frost$core$Int32) {122u};
frost$core$Char32 $tmp157 = frost$core$Char32$init$frost$core$Int32($tmp156);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:109:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
int32_t $tmp158 = param0.value;
int32_t $tmp159 = $tmp157.value;
bool $tmp160 = $tmp158 <= $tmp159;
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160};
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:110
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:110:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
int32_t $tmp163 = param0.value;
frost$core$UInt64 $tmp164 = (frost$core$UInt64) {((uint64_t) $tmp163)};
frost$core$UInt8 $tmp165 = (frost$core$UInt8) {97u};
frost$core$Char8 $tmp166 = frost$core$Char8$init$frost$core$UInt8($tmp165);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:110:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
uint8_t $tmp167 = $tmp166.value;
frost$core$UInt64 $tmp168 = (frost$core$UInt64) {((uint64_t) $tmp167)};
uint64_t $tmp169 = $tmp164.value;
uint64_t $tmp170 = $tmp168.value;
uint64_t $tmp171 = $tmp169 - $tmp170;
frost$core$UInt64 $tmp172 = (frost$core$UInt64) {$tmp171};
frost$core$UInt64 $tmp173 = (frost$core$UInt64) {10u};
uint64_t $tmp174 = $tmp172.value;
uint64_t $tmp175 = $tmp173.value;
uint64_t $tmp176 = $tmp174 + $tmp175;
frost$core$UInt64 $tmp177 = (frost$core$UInt64) {$tmp176};
return ((frost$core$UInt64$nullable) { $tmp177, true });
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:112
return ((frost$core$UInt64$nullable) { .nonnull = false });

}
frost$core$UInt64$nullable frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int param1) {

frost$core$UInt64 local0;
frost$core$UInt64 local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$UInt64$nullable local7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:120
frost$core$Bit $tmp178 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s179);
bool $tmp180 = $tmp178.value;
if ($tmp180) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:121
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:123
frost$core$UInt64 $tmp181 = (frost$core$UInt64) {0u};
*(&local0) = $tmp181;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:124
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Frost.frost:124:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
int64_t $tmp182 = param1.value;
frost$core$UInt64 $tmp183 = (frost$core$UInt64) {((uint64_t) $tmp182)};
*(&local1) = $tmp183;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:125
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:125:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp184 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp185 = &(&local3)->value;
*$tmp185 = $tmp184;
frost$core$String$Index $tmp186 = *(&local3);
*(&local2) = $tmp186;
frost$core$String$Index $tmp187 = *(&local2);
*(&local4) = $tmp187;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:126
goto block6;
block6:;
frost$core$String$Index $tmp188 = *(&local4);
frost$core$String$Index$wrapper* $tmp189;
$tmp189 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp189->value = $tmp188;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Frost.frost:126:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp190 = &param0->_length;
frost$core$Int $tmp191 = *$tmp190;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp192 = &(&local6)->value;
*$tmp192 = $tmp191;
frost$core$String$Index $tmp193 = *(&local6);
*(&local5) = $tmp193;
frost$core$String$Index $tmp194 = *(&local5);
frost$core$String$Index$wrapper* $tmp195;
$tmp195 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp195->value = $tmp194;
ITable* $tmp196 = ((frost$core$Equatable*) $tmp189)->$class->itable;
while ($tmp196->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp196 = $tmp196->next;
}
$fn198 $tmp197 = $tmp196->methods[1];
frost$core$Bit $tmp199 = $tmp197(((frost$core$Equatable*) $tmp189), ((frost$core$Equatable*) $tmp195));
bool $tmp200 = $tmp199.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp195)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp189)));
if ($tmp200) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:127
frost$core$String$Index $tmp201 = *(&local4);
frost$core$Char32 $tmp202 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp201);
frost$core$UInt64$nullable $tmp203 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q($tmp202);
*(&local7) = $tmp203;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:128
frost$core$UInt64$nullable $tmp204 = *(&local7);
frost$core$Bit $tmp205 = (frost$core$Bit) {!$tmp204.nonnull};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block11; else goto block13;
block13:;
frost$core$UInt64$nullable $tmp207 = *(&local7);
frost$core$UInt64 $tmp208 = *(&local1);
uint64_t $tmp209 = ((frost$core$UInt64) $tmp207.value).value;
uint64_t $tmp210 = $tmp208.value;
bool $tmp211 = $tmp209 >= $tmp210;
frost$core$Bit $tmp212 = (frost$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:129
return ((frost$core$UInt64$nullable) { .nonnull = false });
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:131
frost$core$UInt64 $tmp214 = *(&local0);
frost$core$UInt64 $tmp215 = *(&local1);
uint64_t $tmp216 = $tmp214.value;
uint64_t $tmp217 = $tmp215.value;
uint64_t $tmp218 = $tmp216 * $tmp217;
frost$core$UInt64 $tmp219 = (frost$core$UInt64) {$tmp218};
frost$core$UInt64$nullable $tmp220 = *(&local7);
uint64_t $tmp221 = $tmp219.value;
uint64_t $tmp222 = ((frost$core$UInt64) $tmp220.value).value;
uint64_t $tmp223 = $tmp221 + $tmp222;
frost$core$UInt64 $tmp224 = (frost$core$UInt64) {$tmp223};
*(&local0) = $tmp224;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:132
frost$core$String$Index $tmp225 = *(&local4);
frost$core$String$Index $tmp226 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp225);
*(&local4) = $tmp226;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:134
frost$core$UInt64 $tmp227 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp227, true });

}
frost$core$String* frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$Int$nullable local5;
frost$core$Int64$nullable local6;
frost$core$Int$nullable local7;
frost$core$Char32 local8;
frost$core$String$Index local9;
frost$core$String$Index local10;
frost$core$String$Index local11;
frost$core$String$Index local12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:160
// begin inline call to function frost.core.String.get_length():frost.core.Int from Frost.frost:160:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp228 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp228->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp228 = $tmp228->next;
}
$fn230 $tmp229 = $tmp228->methods[0];
frost$collections$Iterator* $tmp231 = $tmp229(((frost$collections$Iterable*) param1));
ITable* $tmp232 = $tmp231->$class->itable;
while ($tmp232->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp232 = $tmp232->next;
}
$fn234 $tmp233 = $tmp232->methods[2];
frost$core$Int $tmp235 = $tmp233($tmp231);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Int $tmp236 = (frost$core$Int) {2u};
int64_t $tmp237 = $tmp235.value;
int64_t $tmp238 = $tmp236.value;
bool $tmp239 = $tmp237 >= $tmp238;
frost$core$Bit $tmp240 = (frost$core$Bit) {$tmp239};
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block2; else goto block3;
block3:;
frost$core$Int $tmp242 = (frost$core$Int) {160u};
frost$core$String* $tmp243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s244, param1);
frost$core$String* $tmp245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp243, &$s246);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s247, $tmp242, $tmp245);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:161
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:161:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp248 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp249 = &(&local1)->value;
*$tmp249 = $tmp248;
frost$core$String$Index $tmp250 = *(&local1);
*(&local0) = $tmp250;
frost$core$String$Index $tmp251 = *(&local0);
frost$core$String$Index $tmp252 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp251);
*(&local2) = $tmp252;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:162
frost$core$String$Index $tmp253 = *(&local2);
frost$core$Char32 $tmp254 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp253);
frost$core$Int32 $tmp255 = (frost$core$Int32) {60u};
frost$core$Char32 $tmp256 = frost$core$Char32$init$frost$core$Int32($tmp255);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:163:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp257 = $tmp254.value;
int32_t $tmp258 = $tmp256.value;
bool $tmp259 = $tmp257 == $tmp258;
frost$core$Bit $tmp260 = (frost$core$Bit) {$tmp259};
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block7; else goto block8;
block8:;
frost$core$Int32 $tmp262 = (frost$core$Int32) {94u};
frost$core$Char32 $tmp263 = frost$core$Char32$init$frost$core$Int32($tmp262);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:163:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp264 = $tmp254.value;
int32_t $tmp265 = $tmp263.value;
bool $tmp266 = $tmp264 == $tmp265;
frost$core$Bit $tmp267 = (frost$core$Bit) {$tmp266};
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block7; else goto block10;
block10:;
frost$core$Int32 $tmp269 = (frost$core$Int32) {62u};
frost$core$Char32 $tmp270 = frost$core$Char32$init$frost$core$Int32($tmp269);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:163:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp271 = $tmp254.value;
int32_t $tmp272 = $tmp270.value;
bool $tmp273 = $tmp271 == $tmp272;
frost$core$Bit $tmp274 = (frost$core$Bit) {$tmp273};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block7; else goto block12;
block7:;
goto block6;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:167
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:167:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp276 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp277 = &(&local4)->value;
*$tmp277 = $tmp276;
frost$core$String$Index $tmp278 = *(&local4);
*(&local3) = $tmp278;
frost$core$String$Index $tmp279 = *(&local3);
*(&local2) = $tmp279;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:170
frost$core$String$Index $tmp280 = *(&local2);
frost$core$String$Index $tmp281 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp280);
frost$core$Bit $tmp282 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp283 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp281, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp282);
frost$core$String* $tmp284 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp283);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Frost.frost:170:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp285 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp284);
*(&local6) = $tmp285;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp286 = *(&local6);
frost$core$Bit $tmp287 = (frost$core$Bit) {$tmp286.nonnull};
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp289 = *(&local6);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp290 = ((frost$core$Int64) $tmp289.value).value;
frost$core$Int $tmp291 = (frost$core$Int) {((int64_t) $tmp290)};
*(&local5) = ((frost$core$Int$nullable) { $tmp291, true });
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local5) = ((frost$core$Int$nullable) { .nonnull = false });
goto block16;
block16:;
frost$core$Int$nullable $tmp292 = *(&local5);
*(&local7) = $tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:171
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:172
frost$core$String$Index $tmp293 = *(&local2);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:172:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp294 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp295 = &(&local10)->value;
*$tmp295 = $tmp294;
frost$core$String$Index $tmp296 = *(&local10);
*(&local9) = $tmp296;
frost$core$String$Index $tmp297 = *(&local9);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from Frost.frost:172:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
frost$core$Int $tmp298 = $tmp293.value;
frost$core$Int $tmp299 = $tmp297.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp300 = $tmp298.value;
int64_t $tmp301 = $tmp299.value;
bool $tmp302 = $tmp300 == $tmp301;
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:173
frost$core$Int32 $tmp305 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp306 = frost$core$Char32$init$frost$core$Int32($tmp305);
*(&local8) = $tmp306;
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:176
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:176:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp307 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp308 = &(&local12)->value;
*$tmp308 = $tmp307;
frost$core$String$Index $tmp309 = *(&local12);
*(&local11) = $tmp309;
frost$core$String$Index $tmp310 = *(&local11);
frost$core$Char32 $tmp311 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp310);
*(&local8) = $tmp311;
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:178
frost$core$String$Index $tmp312 = *(&local2);
frost$core$Char32 $tmp313 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp312);
frost$core$Int32 $tmp314 = (frost$core$Int32) {60u};
frost$core$Char32 $tmp315 = frost$core$Char32$init$frost$core$Int32($tmp314);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:179:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp316 = $tmp313.value;
int32_t $tmp317 = $tmp315.value;
bool $tmp318 = $tmp316 == $tmp317;
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:179
frost$core$Int$nullable $tmp321 = *(&local7);
frost$core$Char32 $tmp322 = *(&local8);
frost$core$String* $tmp323 = frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int) $tmp321.value), $tmp322);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
return $tmp323;
block31:;
frost$core$Int32 $tmp324 = (frost$core$Int32) {94u};
frost$core$Char32 $tmp325 = frost$core$Char32$init$frost$core$Int32($tmp324);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:180:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp326 = $tmp313.value;
int32_t $tmp327 = $tmp325.value;
bool $tmp328 = $tmp326 == $tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:180
frost$core$Int$nullable $tmp331 = *(&local7);
frost$core$Char32 $tmp332 = *(&local8);
frost$core$String* $tmp333 = frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int) $tmp331.value), $tmp332);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
return $tmp333;
block34:;
frost$core$Int32 $tmp334 = (frost$core$Int32) {62u};
frost$core$Char32 $tmp335 = frost$core$Char32$init$frost$core$Int32($tmp334);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:181:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp336 = $tmp313.value;
int32_t $tmp337 = $tmp335.value;
bool $tmp338 = $tmp336 == $tmp337;
frost$core$Bit $tmp339 = (frost$core$Bit) {$tmp338};
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:181
frost$core$Int$nullable $tmp341 = *(&local7);
frost$core$Char32 $tmp342 = *(&local8);
frost$core$String* $tmp343 = frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int) $tmp341.value), $tmp342);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
return $tmp343;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:182
frost$core$Int $tmp344 = (frost$core$Int) {182u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s345, $tmp344);
abort(); // unreachable
block29:;
goto block39;
block39:;

}
frost$core$String* frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(frost$core$Bit param0, frost$core$UInt64 param1, frost$core$UInt64 param2, frost$core$String* param3) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$UInt64 local3;
frost$collections$ListView* local4 = NULL;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$UInt64 local7;
frost$core$Int local8;
frost$core$Char8* local9;
frost$core$Int local10;
frost$core$Int local11;
frost$core$Int local12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:196
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:196:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp346 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp347 = &(&local1)->value;
*$tmp347 = $tmp346;
frost$core$String$Index $tmp348 = *(&local1);
*(&local0) = $tmp348;
frost$core$String$Index $tmp349 = *(&local0);
*(&local2) = $tmp349;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:197
frost$core$UInt64 $tmp350 = (frost$core$UInt64) {10u};
*(&local3) = $tmp350;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:198
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:198:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp351 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp351, &$s352);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp351)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp351)));
frost$collections$ListView* $tmp353 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local4) = ((frost$collections$ListView*) $tmp351);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp351)));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:199
frost$core$String$Index $tmp354 = *(&local2);
frost$core$String$Index$wrapper* $tmp355;
$tmp355 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp355->value = $tmp354;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Frost.frost:199:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp356 = &param3->_length;
frost$core$Int $tmp357 = *$tmp356;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp358 = &(&local6)->value;
*$tmp358 = $tmp357;
frost$core$String$Index $tmp359 = *(&local6);
*(&local5) = $tmp359;
frost$core$String$Index $tmp360 = *(&local5);
frost$core$String$Index$wrapper* $tmp361;
$tmp361 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp361->value = $tmp360;
ITable* $tmp362 = ((frost$core$Comparable*) $tmp355)->$class->itable;
while ($tmp362->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp362 = $tmp362->next;
}
$fn364 $tmp363 = $tmp362->methods[1];
frost$core$Bit $tmp365 = $tmp363(((frost$core$Comparable*) $tmp355), ((frost$core$Comparable*) $tmp361));
bool $tmp366 = $tmp365.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp361)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp355)));
if ($tmp366) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:200
frost$core$String$Index $tmp367 = *(&local2);
frost$core$Char32 $tmp368 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp367);
frost$core$Int32 $tmp369 = (frost$core$Int32) {98u};
frost$core$Char32 $tmp370 = frost$core$Char32$init$frost$core$Int32($tmp369);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:201:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp371 = $tmp368.value;
int32_t $tmp372 = $tmp370.value;
bool $tmp373 = $tmp371 == $tmp372;
frost$core$Bit $tmp374 = (frost$core$Bit) {$tmp373};
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block9; else goto block10;
block10:;
frost$core$Int32 $tmp376 = (frost$core$Int32) {66u};
frost$core$Char32 $tmp377 = frost$core$Char32$init$frost$core$Int32($tmp376);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:201:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp378 = $tmp368.value;
int32_t $tmp379 = $tmp377.value;
bool $tmp380 = $tmp378 == $tmp379;
frost$core$Bit $tmp381 = (frost$core$Bit) {$tmp380};
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block9; else goto block12;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:202
frost$core$UInt64 $tmp383 = (frost$core$UInt64) {2u};
*(&local3) = $tmp383;
goto block8;
block12:;
frost$core$Int32 $tmp384 = (frost$core$Int32) {111u};
frost$core$Char32 $tmp385 = frost$core$Char32$init$frost$core$Int32($tmp384);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:204:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp386 = $tmp368.value;
int32_t $tmp387 = $tmp385.value;
bool $tmp388 = $tmp386 == $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block14; else goto block15;
block15:;
frost$core$Int32 $tmp391 = (frost$core$Int32) {79u};
frost$core$Char32 $tmp392 = frost$core$Char32$init$frost$core$Int32($tmp391);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:204:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp393 = $tmp368.value;
int32_t $tmp394 = $tmp392.value;
bool $tmp395 = $tmp393 == $tmp394;
frost$core$Bit $tmp396 = (frost$core$Bit) {$tmp395};
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block14; else goto block17;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:205
frost$core$UInt64 $tmp398 = (frost$core$UInt64) {8u};
*(&local3) = $tmp398;
goto block8;
block17:;
frost$core$Int32 $tmp399 = (frost$core$Int32) {100u};
frost$core$Char32 $tmp400 = frost$core$Char32$init$frost$core$Int32($tmp399);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:207:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp401 = $tmp368.value;
int32_t $tmp402 = $tmp400.value;
bool $tmp403 = $tmp401 == $tmp402;
frost$core$Bit $tmp404 = (frost$core$Bit) {$tmp403};
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block19; else goto block20;
block20:;
frost$core$Int32 $tmp406 = (frost$core$Int32) {68u};
frost$core$Char32 $tmp407 = frost$core$Char32$init$frost$core$Int32($tmp406);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:207:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp408 = $tmp368.value;
int32_t $tmp409 = $tmp407.value;
bool $tmp410 = $tmp408 == $tmp409;
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block19; else goto block22;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:208
frost$core$UInt64 $tmp413 = (frost$core$UInt64) {10u};
*(&local3) = $tmp413;
goto block8;
block22:;
frost$core$Int32 $tmp414 = (frost$core$Int32) {120u};
frost$core$Char32 $tmp415 = frost$core$Char32$init$frost$core$Int32($tmp414);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:210:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp416 = $tmp368.value;
int32_t $tmp417 = $tmp415.value;
bool $tmp418 = $tmp416 == $tmp417;
frost$core$Bit $tmp419 = (frost$core$Bit) {$tmp418};
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:211
frost$core$UInt64 $tmp421 = (frost$core$UInt64) {16u};
*(&local3) = $tmp421;
goto block8;
block25:;
frost$core$Int32 $tmp422 = (frost$core$Int32) {88u};
frost$core$Char32 $tmp423 = frost$core$Char32$init$frost$core$Int32($tmp422);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:213:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp424 = $tmp368.value;
int32_t $tmp425 = $tmp423.value;
bool $tmp426 = $tmp424 == $tmp425;
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:214
frost$core$UInt64 $tmp429 = (frost$core$UInt64) {16u};
*(&local3) = $tmp429;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:215
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:215:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp430 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp430, &$s431);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp430)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp430)));
frost$collections$ListView* $tmp432 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local4) = ((frost$collections$ListView*) $tmp430);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp430)));
goto block8;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:218
frost$core$Int $tmp433 = (frost$core$Int) {218u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s434, $tmp433, &$s435);
abort(); // unreachable
block8:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:222
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:223
bool $tmp436 = param0.value;
if ($tmp436) goto block34; else goto block33;
block34:;
frost$core$UInt64 $tmp437 = *(&local3);
frost$core$UInt64 $tmp438 = (frost$core$UInt64) {10u};
uint64_t $tmp439 = $tmp437.value;
uint64_t $tmp440 = $tmp438.value;
bool $tmp441 = $tmp439 != $tmp440;
frost$core$Bit $tmp442 = (frost$core$Bit) {$tmp441};
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block31; else goto block33;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:224
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Frost.frost:224:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp444 = param1.value;
frost$core$Int64 $tmp445 = (frost$core$Int64) {((int64_t) $tmp444)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Frost.frost:224:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp446 = $tmp445.value;
int64_t $tmp447 = -$tmp446;
frost$core$Int64 $tmp448 = (frost$core$Int64) {$tmp447};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Frost.frost:224:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp449 = $tmp448.value;
frost$core$UInt64 $tmp450 = (frost$core$UInt64) {((uint64_t) $tmp449)};
// begin inline call to function frost.core.UInt64.&&(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:224:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:166
uint64_t $tmp451 = $tmp450.value;
uint64_t $tmp452 = param2.value;
uint64_t $tmp453 = $tmp451 & $tmp452;
frost$core$UInt64 $tmp454 = (frost$core$UInt64) {$tmp453};
*(&local7) = $tmp454;
goto block32;
block33:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:227
*(&local7) = param1;
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:229
frost$core$Int $tmp455 = (frost$core$Int) {64u};
*(&local8) = $tmp455;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:230
frost$core$Int $tmp456 = *(&local8);
frost$core$Int64 $tmp457 = frost$core$Int64$init$frost$core$Int($tmp456);
int64_t $tmp458 = $tmp457.value;
frost$core$Char8* $tmp459 = ((frost$core$Char8*) frostAlloc($tmp458 * 1));
*(&local9) = $tmp459;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:231
frost$core$Int $tmp460 = *(&local8);
frost$core$Int $tmp461 = (frost$core$Int) {1u};
int64_t $tmp462 = $tmp460.value;
int64_t $tmp463 = $tmp461.value;
int64_t $tmp464 = $tmp462 - $tmp463;
frost$core$Int $tmp465 = (frost$core$Int) {$tmp464};
*(&local10) = $tmp465;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:232
goto block39;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:233
frost$core$Char8* $tmp466 = *(&local9);
frost$core$Int $tmp467 = *(&local10);
frost$core$Int64 $tmp468 = frost$core$Int64$init$frost$core$Int($tmp467);
frost$collections$ListView* $tmp469 = *(&local4);
frost$core$UInt64 $tmp470 = *(&local7);
frost$core$UInt64 $tmp471 = *(&local3);
// begin inline call to function frost.core.UInt64.%(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:233:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:89
uint64_t $tmp472 = $tmp470.value;
uint64_t $tmp473 = $tmp471.value;
uint64_t $tmp474 = $tmp472 % $tmp473;
frost$core$UInt64 $tmp475 = (frost$core$UInt64) {$tmp474};
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Frost.frost:233:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp476 = $tmp475.value;
frost$core$Int $tmp477 = (frost$core$Int) {((int64_t) $tmp476)};
ITable* $tmp478 = $tmp469->$class->itable;
while ($tmp478->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp478 = $tmp478->next;
}
$fn480 $tmp479 = $tmp478->methods[0];
frost$core$Object* $tmp481 = $tmp479($tmp469, $tmp477);
int64_t $tmp482 = $tmp468.value;
$tmp466[$tmp482] = ((frost$core$Char8$wrapper*) $tmp481)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp481);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:234
frost$core$UInt64 $tmp483 = *(&local7);
frost$core$UInt64 $tmp484 = *(&local3);
uint64_t $tmp485 = $tmp483.value;
uint64_t $tmp486 = $tmp484.value;
uint64_t $tmp487 = $tmp485 / $tmp486;
frost$core$UInt64 $tmp488 = (frost$core$UInt64) {$tmp487};
*(&local7) = $tmp488;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:235
frost$core$Int $tmp489 = *(&local10);
frost$core$Int $tmp490 = (frost$core$Int) {1u};
int64_t $tmp491 = $tmp489.value;
int64_t $tmp492 = $tmp490.value;
int64_t $tmp493 = $tmp491 - $tmp492;
frost$core$Int $tmp494 = (frost$core$Int) {$tmp493};
*(&local10) = $tmp494;
frost$core$UInt64 $tmp495 = *(&local7);
frost$core$UInt64 $tmp496 = (frost$core$UInt64) {0u};
uint64_t $tmp497 = $tmp495.value;
uint64_t $tmp498 = $tmp496.value;
bool $tmp499 = $tmp497 > $tmp498;
frost$core$Bit $tmp500 = (frost$core$Bit) {$tmp499};
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block39; else goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:238
bool $tmp502 = param0.value;
if ($tmp502) goto block46; else goto block45;
block46:;
frost$core$UInt64 $tmp503 = *(&local3);
frost$core$UInt64 $tmp504 = (frost$core$UInt64) {10u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Frost.frost:238:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp505 = $tmp503.value;
uint64_t $tmp506 = $tmp504.value;
bool $tmp507 = $tmp505 == $tmp506;
frost$core$Bit $tmp508 = (frost$core$Bit) {$tmp507};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:239
frost$core$Char8* $tmp510 = *(&local9);
frost$core$Int $tmp511 = *(&local10);
frost$core$Int64 $tmp512 = frost$core$Int64$init$frost$core$Int($tmp511);
frost$core$UInt8 $tmp513 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp514 = frost$core$Char8$init$frost$core$UInt8($tmp513);
int64_t $tmp515 = $tmp512.value;
$tmp510[$tmp515] = $tmp514;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:240
frost$core$Int $tmp516 = *(&local10);
frost$core$Int $tmp517 = (frost$core$Int) {1u};
int64_t $tmp518 = $tmp516.value;
int64_t $tmp519 = $tmp517.value;
int64_t $tmp520 = $tmp518 - $tmp519;
frost$core$Int $tmp521 = (frost$core$Int) {$tmp520};
*(&local10) = $tmp521;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:242
frost$core$Int $tmp522 = *(&local10);
frost$core$Int $tmp523 = (frost$core$Int) {1u};
int64_t $tmp524 = $tmp522.value;
int64_t $tmp525 = $tmp523.value;
int64_t $tmp526 = $tmp524 + $tmp525;
frost$core$Int $tmp527 = (frost$core$Int) {$tmp526};
*(&local10) = $tmp527;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:243
frost$core$Int $tmp528 = *(&local8);
frost$core$Int $tmp529 = *(&local10);
int64_t $tmp530 = $tmp528.value;
int64_t $tmp531 = $tmp529.value;
int64_t $tmp532 = $tmp530 - $tmp531;
frost$core$Int $tmp533 = (frost$core$Int) {$tmp532};
*(&local11) = $tmp533;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:244
frost$core$Int $tmp534 = (frost$core$Int) {0u};
frost$core$Int $tmp535 = *(&local11);
frost$core$Bit $tmp536 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp537 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp534, $tmp535, $tmp536);
frost$core$Int $tmp538 = $tmp537.min;
*(&local12) = $tmp538;
frost$core$Int $tmp539 = $tmp537.max;
frost$core$Bit $tmp540 = $tmp537.inclusive;
bool $tmp541 = $tmp540.value;
frost$core$Int $tmp542 = (frost$core$Int) {1u};
if ($tmp541) goto block51; else goto block52;
block51:;
int64_t $tmp543 = $tmp538.value;
int64_t $tmp544 = $tmp539.value;
bool $tmp545 = $tmp543 <= $tmp544;
frost$core$Bit $tmp546 = (frost$core$Bit) {$tmp545};
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block48; else goto block49;
block52:;
int64_t $tmp548 = $tmp538.value;
int64_t $tmp549 = $tmp539.value;
bool $tmp550 = $tmp548 < $tmp549;
frost$core$Bit $tmp551 = (frost$core$Bit) {$tmp550};
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:245
frost$core$Char8* $tmp553 = *(&local9);
frost$core$Int $tmp554 = *(&local12);
frost$core$Int64 $tmp555 = frost$core$Int64$init$frost$core$Int($tmp554);
frost$core$Char8* $tmp556 = *(&local9);
frost$core$Int $tmp557 = *(&local12);
frost$core$Int $tmp558 = *(&local10);
int64_t $tmp559 = $tmp557.value;
int64_t $tmp560 = $tmp558.value;
int64_t $tmp561 = $tmp559 + $tmp560;
frost$core$Int $tmp562 = (frost$core$Int) {$tmp561};
frost$core$Int64 $tmp563 = frost$core$Int64$init$frost$core$Int($tmp562);
int64_t $tmp564 = $tmp563.value;
frost$core$Char8 $tmp565 = $tmp556[$tmp564];
int64_t $tmp566 = $tmp555.value;
$tmp553[$tmp566] = $tmp565;
frost$core$Int $tmp567 = *(&local12);
int64_t $tmp568 = $tmp539.value;
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568 - $tmp569;
frost$core$Int $tmp571 = (frost$core$Int) {$tmp570};
if ($tmp541) goto block54; else goto block55;
block54:;
int64_t $tmp572 = $tmp571.value;
int64_t $tmp573 = $tmp542.value;
bool $tmp574 = $tmp572 >= $tmp573;
frost$core$Bit $tmp575 = (frost$core$Bit) {$tmp574};
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block53; else goto block49;
block55:;
int64_t $tmp577 = $tmp571.value;
int64_t $tmp578 = $tmp542.value;
bool $tmp579 = $tmp577 > $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block53; else goto block49;
block53:;
int64_t $tmp582 = $tmp567.value;
int64_t $tmp583 = $tmp542.value;
int64_t $tmp584 = $tmp582 + $tmp583;
frost$core$Int $tmp585 = (frost$core$Int) {$tmp584};
*(&local12) = $tmp585;
goto block48;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:247
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp586 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp587 = *(&local9);
frost$core$Int $tmp588 = *(&local11);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp586, $tmp587, $tmp588);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$collections$ListView* $tmp589 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local4) = ((frost$collections$ListView*) NULL);
return $tmp586;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(frost$collections$List* param0, frost$core$Int param1, frost$core$Int param2) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:269
ITable* $tmp590 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp590->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp590 = $tmp590->next;
}
$fn592 $tmp591 = $tmp590->methods[0];
frost$core$Object* $tmp593 = $tmp591(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp593);
frost$core$Object* $tmp594 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp594);
*(&local0) = $tmp593;
frost$core$Frost$unref$frost$core$Object$Q($tmp593);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:270
ITable* $tmp595 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp595->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp595 = $tmp595->next;
}
$fn597 $tmp596 = $tmp595->methods[0];
frost$core$Object* $tmp598 = $tmp596(((frost$collections$ListView*) param0), param2);
ITable* $tmp599 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp599->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp599 = $tmp599->next;
}
$fn601 $tmp600 = $tmp599->methods[0];
$tmp600(((frost$collections$ListWriter*) param0), param1, $tmp598);
frost$core$Frost$unref$frost$core$Object$Q($tmp598);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:271
frost$core$Object* $tmp602 = *(&local0);
ITable* $tmp603 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp603->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp603 = $tmp603->next;
}
$fn605 $tmp604 = $tmp603->methods[0];
$tmp604(((frost$collections$ListWriter*) param0), param2, $tmp602);
frost$core$Object* $tmp606 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp606);
*(&local0) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$Int param1, frost$core$Int param2, frost$core$MutableMethod* param3) {

frost$core$Int local0;
frost$core$Object* local1 = NULL;
frost$core$Int local2;
frost$core$Int local3;
frost$core$Bit local4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:278
int64_t $tmp607 = param1.value;
int64_t $tmp608 = param2.value;
bool $tmp609 = $tmp607 >= $tmp608;
frost$core$Bit $tmp610 = (frost$core$Bit) {$tmp609};
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:279
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:281
int64_t $tmp612 = param2.value;
int64_t $tmp613 = param1.value;
int64_t $tmp614 = $tmp612 - $tmp613;
frost$core$Int $tmp615 = (frost$core$Int) {$tmp614};
frost$core$Int $tmp616 = (frost$core$Int) {2u};
int64_t $tmp617 = $tmp615.value;
int64_t $tmp618 = $tmp616.value;
int64_t $tmp619 = $tmp617 / $tmp618;
frost$core$Int $tmp620 = (frost$core$Int) {$tmp619};
int64_t $tmp621 = param1.value;
int64_t $tmp622 = $tmp620.value;
int64_t $tmp623 = $tmp621 + $tmp622;
frost$core$Int $tmp624 = (frost$core$Int) {$tmp623};
*(&local0) = $tmp624;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:282
frost$core$Int $tmp625 = *(&local0);
ITable* $tmp626 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp626->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp626 = $tmp626->next;
}
$fn628 $tmp627 = $tmp626->methods[0];
frost$core$Object* $tmp629 = $tmp627(((frost$collections$ListView*) param0), $tmp625);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp629);
frost$core$Object* $tmp630 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp630);
*(&local1) = $tmp629;
frost$core$Frost$unref$frost$core$Object$Q($tmp629);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:283
frost$core$Int $tmp631 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(param0, param2, $tmp631);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:284
*(&local2) = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:285
frost$core$Int $tmp632 = (frost$core$Int) {1u};
int64_t $tmp633 = param2.value;
int64_t $tmp634 = $tmp632.value;
int64_t $tmp635 = $tmp633 - $tmp634;
frost$core$Int $tmp636 = (frost$core$Int) {$tmp635};
frost$core$Bit $tmp637 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$Int$GT $tmp638 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(param1, $tmp636, $tmp637);
frost$core$Int $tmp639 = $tmp638.min;
*(&local3) = $tmp639;
frost$core$Int $tmp640 = $tmp638.max;
frost$core$Bit $tmp641 = $tmp638.inclusive;
bool $tmp642 = $tmp641.value;
frost$core$Int $tmp643 = (frost$core$Int) {1u};
if ($tmp642) goto block6; else goto block7;
block6:;
int64_t $tmp644 = $tmp639.value;
int64_t $tmp645 = $tmp640.value;
bool $tmp646 = $tmp644 <= $tmp645;
frost$core$Bit $tmp647 = (frost$core$Bit) {$tmp646};
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block3; else goto block4;
block7:;
int64_t $tmp649 = $tmp639.value;
int64_t $tmp650 = $tmp640.value;
bool $tmp651 = $tmp649 < $tmp650;
frost$core$Bit $tmp652 = (frost$core$Bit) {$tmp651};
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:286
frost$core$Int $tmp654 = *(&local3);
ITable* $tmp655 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp655->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp655 = $tmp655->next;
}
$fn657 $tmp656 = $tmp655->methods[0];
frost$core$Object* $tmp658 = $tmp656(((frost$collections$ListView*) param0), $tmp654);
frost$core$Object* $tmp659 = *(&local1);
frost$core$Int8** $tmp660 = &param3->pointer;
frost$core$Int8* $tmp661 = *$tmp660;
frost$core$Object** $tmp662 = &param3->target;
frost$core$Object* $tmp663 = *$tmp662;
bool $tmp664 = $tmp663 != ((frost$core$Object*) NULL);
if ($tmp664) goto block10; else goto block11;
block11:;
frost$core$Bit $tmp666 = (($fn665) $tmp661)($tmp658, $tmp659);
*(&local4) = $tmp666;
goto block12;
block10:;
frost$core$Bit $tmp668 = (($fn667) $tmp661)($tmp663, $tmp658, $tmp659);
*(&local4) = $tmp668;
goto block12;
block12:;
frost$core$Bit $tmp669 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Frost.frost:286:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp670 = $tmp669.value;
bool $tmp671 = !$tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp658);
if ($tmp673) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:287
frost$core$Int $tmp674 = *(&local3);
frost$core$Int $tmp675 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(param0, $tmp674, $tmp675);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:288
frost$core$Int $tmp676 = *(&local2);
frost$core$Int $tmp677 = (frost$core$Int) {1u};
int64_t $tmp678 = $tmp676.value;
int64_t $tmp679 = $tmp677.value;
int64_t $tmp680 = $tmp678 + $tmp679;
frost$core$Int $tmp681 = (frost$core$Int) {$tmp680};
*(&local2) = $tmp681;
goto block9;
block9:;
frost$core$Int $tmp682 = *(&local3);
int64_t $tmp683 = $tmp640.value;
int64_t $tmp684 = $tmp682.value;
int64_t $tmp685 = $tmp683 - $tmp684;
frost$core$Int $tmp686 = (frost$core$Int) {$tmp685};
if ($tmp642) goto block15; else goto block16;
block15:;
int64_t $tmp687 = $tmp686.value;
int64_t $tmp688 = $tmp643.value;
bool $tmp689 = $tmp687 >= $tmp688;
frost$core$Bit $tmp690 = (frost$core$Bit) {$tmp689};
bool $tmp691 = $tmp690.value;
if ($tmp691) goto block14; else goto block4;
block16:;
int64_t $tmp692 = $tmp686.value;
int64_t $tmp693 = $tmp643.value;
bool $tmp694 = $tmp692 > $tmp693;
frost$core$Bit $tmp695 = (frost$core$Bit) {$tmp694};
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block14; else goto block4;
block14:;
int64_t $tmp697 = $tmp682.value;
int64_t $tmp698 = $tmp643.value;
int64_t $tmp699 = $tmp697 + $tmp698;
frost$core$Int $tmp700 = (frost$core$Int) {$tmp699};
*(&local3) = $tmp700;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:291
frost$core$Int $tmp701 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(param0, $tmp701, param2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:292
frost$core$Int $tmp702 = *(&local2);
frost$core$Int $tmp703 = (frost$core$Int) {1u};
int64_t $tmp704 = $tmp702.value;
int64_t $tmp705 = $tmp703.value;
int64_t $tmp706 = $tmp704 - $tmp705;
frost$core$Int $tmp707 = (frost$core$Int) {$tmp706};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, param1, $tmp707, param3);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:293
frost$core$Int $tmp708 = *(&local2);
frost$core$Int $tmp709 = (frost$core$Int) {1u};
int64_t $tmp710 = $tmp708.value;
int64_t $tmp711 = $tmp709.value;
int64_t $tmp712 = $tmp710 + $tmp711;
frost$core$Int $tmp713 = (frost$core$Int) {$tmp712};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp713, param2, param3);
frost$core$Object* $tmp714 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp714);
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

