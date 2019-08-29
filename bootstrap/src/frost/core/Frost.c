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
typedef frost$core$String* (*$fn92)(frost$core$Object*);
typedef frost$core$Error* (*$fn101)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn214)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn246)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn250)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn389)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn505)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn617)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn622)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn626)(frost$collections$ListWriter*, frost$core$Int, frost$core$Object*);
typedef void (*$fn630)(frost$collections$ListWriter*, frost$core$Int, frost$core$Object*);
typedef frost$core$Object* (*$fn653)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn682)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn690)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn692)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, 4237142976622831502, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, 7669895969177076905, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, 7669895969177076905, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3a\x20", 3, 48285155966961582, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -6606133885720023461, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -6606133885720023461, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 3330193207084279677, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, -1839289420917840067, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 3626147090372997348, NULL };

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
frost$core$Bit $tmp76 = (frost$core$Bit) {$tmp75 != NULL};
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block6; else goto block7;
block7:;
frost$core$Int $tmp78 = (frost$core$Int) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s79, $tmp78, &$s80);
abort(); // unreachable
block6:;
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
frost$core$Error* $tmp81 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:88
frost$core$System$crash();
frost$core$Int $tmp82 = (frost$core$Int) {88u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s83, $tmp82, &$s84);
abort(); // unreachable

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$String* param2) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:93
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:94
frost$io$OutputStream* $tmp85 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp86 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s87, param0);
frost$core$String* $tmp88 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp86, &$s89);
frost$core$Int$wrapper* $tmp90;
$tmp90 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp90->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Frost.frost:94:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn92 $tmp91 = ($fn92) ((frost$core$Object*) $tmp90)->$class->vtable[0];
frost$core$String* $tmp93 = $tmp91(((frost$core$Object*) $tmp90));
frost$core$String* $tmp94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp88, $tmp93);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$String* $tmp95 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp94, &$s96);
frost$core$String* $tmp97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp95, param2);
frost$core$String* $tmp98 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp97, &$s99);
$fn101 $tmp100 = ($fn101) $tmp85->$class->vtable[19];
frost$core$Error* $tmp102 = $tmp100($tmp85, $tmp98);
if ($tmp102 == NULL) goto block4; else goto block5;
block5:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102 != NULL};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block6; else goto block7;
block7:;
frost$core$Int $tmp105 = (frost$core$Int) {94u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s106, $tmp105, &$s107);
abort(); // unreachable
block6:;
*(&local0) = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
goto block2;
block2:;
frost$core$Error* $tmp108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:98
frost$core$System$crash();
frost$core$Int $tmp109 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s110, $tmp109, &$s111);
abort(); // unreachable

}
frost$core$UInt64$nullable frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q(frost$core$Char32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:103
frost$core$Int32 $tmp112 = (frost$core$Int32) {48u};
frost$core$Char32 $tmp113 = frost$core$Char32$init$frost$core$Int32($tmp112);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:103:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:52
int32_t $tmp114 = param0.value;
int32_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 >= $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block3; else goto block2;
block3:;
frost$core$Int32 $tmp119 = (frost$core$Int32) {57u};
frost$core$Char32 $tmp120 = frost$core$Char32$init$frost$core$Int32($tmp119);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:103:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
int32_t $tmp121 = param0.value;
int32_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 <= $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:104
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:104:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
int32_t $tmp126 = param0.value;
frost$core$UInt64 $tmp127 = (frost$core$UInt64) {((uint64_t) $tmp126)};
frost$core$UInt8 $tmp128 = (frost$core$UInt8) {48u};
frost$core$Char8 $tmp129 = frost$core$Char8$init$frost$core$UInt8($tmp128);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:104:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
uint8_t $tmp130 = $tmp129.value;
frost$core$UInt64 $tmp131 = (frost$core$UInt64) {((uint64_t) $tmp130)};
uint64_t $tmp132 = $tmp127.value;
uint64_t $tmp133 = $tmp131.value;
uint64_t $tmp134 = $tmp132 - $tmp133;
frost$core$UInt64 $tmp135 = (frost$core$UInt64) {$tmp134};
return ((frost$core$UInt64$nullable) { $tmp135, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:106
frost$core$Int32 $tmp136 = (frost$core$Int32) {65u};
frost$core$Char32 $tmp137 = frost$core$Char32$init$frost$core$Int32($tmp136);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:106:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:52
int32_t $tmp138 = param0.value;
int32_t $tmp139 = $tmp137.value;
bool $tmp140 = $tmp138 >= $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block10; else goto block9;
block10:;
frost$core$Int32 $tmp143 = (frost$core$Int32) {90u};
frost$core$Char32 $tmp144 = frost$core$Char32$init$frost$core$Int32($tmp143);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:106:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
int32_t $tmp145 = param0.value;
int32_t $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 <= $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:107
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:107:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
int32_t $tmp150 = param0.value;
frost$core$UInt64 $tmp151 = (frost$core$UInt64) {((uint64_t) $tmp150)};
frost$core$UInt8 $tmp152 = (frost$core$UInt8) {65u};
frost$core$Char8 $tmp153 = frost$core$Char8$init$frost$core$UInt8($tmp152);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:107:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
uint8_t $tmp154 = $tmp153.value;
frost$core$UInt64 $tmp155 = (frost$core$UInt64) {((uint64_t) $tmp154)};
uint64_t $tmp156 = $tmp151.value;
uint64_t $tmp157 = $tmp155.value;
uint64_t $tmp158 = $tmp156 - $tmp157;
frost$core$UInt64 $tmp159 = (frost$core$UInt64) {$tmp158};
frost$core$UInt64 $tmp160 = (frost$core$UInt64) {10u};
uint64_t $tmp161 = $tmp159.value;
uint64_t $tmp162 = $tmp160.value;
uint64_t $tmp163 = $tmp161 + $tmp162;
frost$core$UInt64 $tmp164 = (frost$core$UInt64) {$tmp163};
return ((frost$core$UInt64$nullable) { $tmp164, true });
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:109
frost$core$Int32 $tmp165 = (frost$core$Int32) {97u};
frost$core$Char32 $tmp166 = frost$core$Char32$init$frost$core$Int32($tmp165);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:109:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:52
int32_t $tmp167 = param0.value;
int32_t $tmp168 = $tmp166.value;
bool $tmp169 = $tmp167 >= $tmp168;
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169};
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block17; else goto block16;
block17:;
frost$core$Int32 $tmp172 = (frost$core$Int32) {122u};
frost$core$Char32 $tmp173 = frost$core$Char32$init$frost$core$Int32($tmp172);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:109:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
int32_t $tmp174 = param0.value;
int32_t $tmp175 = $tmp173.value;
bool $tmp176 = $tmp174 <= $tmp175;
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176};
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:110
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:110:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
int32_t $tmp179 = param0.value;
frost$core$UInt64 $tmp180 = (frost$core$UInt64) {((uint64_t) $tmp179)};
frost$core$UInt8 $tmp181 = (frost$core$UInt8) {97u};
frost$core$Char8 $tmp182 = frost$core$Char8$init$frost$core$UInt8($tmp181);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:110:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
uint8_t $tmp183 = $tmp182.value;
frost$core$UInt64 $tmp184 = (frost$core$UInt64) {((uint64_t) $tmp183)};
uint64_t $tmp185 = $tmp180.value;
uint64_t $tmp186 = $tmp184.value;
uint64_t $tmp187 = $tmp185 - $tmp186;
frost$core$UInt64 $tmp188 = (frost$core$UInt64) {$tmp187};
frost$core$UInt64 $tmp189 = (frost$core$UInt64) {10u};
uint64_t $tmp190 = $tmp188.value;
uint64_t $tmp191 = $tmp189.value;
uint64_t $tmp192 = $tmp190 + $tmp191;
frost$core$UInt64 $tmp193 = (frost$core$UInt64) {$tmp192};
return ((frost$core$UInt64$nullable) { $tmp193, true });
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
frost$core$Bit $tmp194 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s195);
bool $tmp196 = $tmp194.value;
if ($tmp196) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:121
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:123
frost$core$UInt64 $tmp197 = (frost$core$UInt64) {0u};
*(&local0) = $tmp197;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:124
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Frost.frost:124:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
int64_t $tmp198 = param1.value;
frost$core$UInt64 $tmp199 = (frost$core$UInt64) {((uint64_t) $tmp198)};
*(&local1) = $tmp199;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:125
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:125:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp200 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp201 = &(&local3)->value;
*$tmp201 = $tmp200;
frost$core$String$Index $tmp202 = *(&local3);
*(&local2) = $tmp202;
frost$core$String$Index $tmp203 = *(&local2);
*(&local4) = $tmp203;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:126
goto block6;
block6:;
frost$core$String$Index $tmp204 = *(&local4);
frost$core$String$Index$wrapper* $tmp205;
$tmp205 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp205->value = $tmp204;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Frost.frost:126:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp206 = &param0->_length;
frost$core$Int $tmp207 = *$tmp206;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp208 = &(&local6)->value;
*$tmp208 = $tmp207;
frost$core$String$Index $tmp209 = *(&local6);
*(&local5) = $tmp209;
frost$core$String$Index $tmp210 = *(&local5);
frost$core$String$Index$wrapper* $tmp211;
$tmp211 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp211->value = $tmp210;
ITable* $tmp212 = ((frost$core$Equatable*) $tmp205)->$class->itable;
while ($tmp212->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp212 = $tmp212->next;
}
$fn214 $tmp213 = $tmp212->methods[1];
frost$core$Bit $tmp215 = $tmp213(((frost$core$Equatable*) $tmp205), ((frost$core$Equatable*) $tmp211));
bool $tmp216 = $tmp215.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp211)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp205)));
if ($tmp216) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:127
frost$core$String$Index $tmp217 = *(&local4);
frost$core$Char32 $tmp218 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp217);
frost$core$UInt64$nullable $tmp219 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q($tmp218);
*(&local7) = $tmp219;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:128
frost$core$UInt64$nullable $tmp220 = *(&local7);
frost$core$Bit $tmp221 = (frost$core$Bit) {!$tmp220.nonnull};
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block11; else goto block13;
block13:;
frost$core$UInt64$nullable $tmp223 = *(&local7);
frost$core$UInt64 $tmp224 = *(&local1);
uint64_t $tmp225 = ((frost$core$UInt64) $tmp223.value).value;
uint64_t $tmp226 = $tmp224.value;
bool $tmp227 = $tmp225 >= $tmp226;
frost$core$Bit $tmp228 = (frost$core$Bit) {$tmp227};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:129
return ((frost$core$UInt64$nullable) { .nonnull = false });
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:131
frost$core$UInt64 $tmp230 = *(&local0);
frost$core$UInt64 $tmp231 = *(&local1);
uint64_t $tmp232 = $tmp230.value;
uint64_t $tmp233 = $tmp231.value;
uint64_t $tmp234 = $tmp232 * $tmp233;
frost$core$UInt64 $tmp235 = (frost$core$UInt64) {$tmp234};
frost$core$UInt64$nullable $tmp236 = *(&local7);
uint64_t $tmp237 = $tmp235.value;
uint64_t $tmp238 = ((frost$core$UInt64) $tmp236.value).value;
uint64_t $tmp239 = $tmp237 + $tmp238;
frost$core$UInt64 $tmp240 = (frost$core$UInt64) {$tmp239};
*(&local0) = $tmp240;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:132
frost$core$String$Index $tmp241 = *(&local4);
frost$core$String$Index $tmp242 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp241);
*(&local4) = $tmp242;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:134
frost$core$UInt64 $tmp243 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp243, true });

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
ITable* $tmp244 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp244->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp244 = $tmp244->next;
}
$fn246 $tmp245 = $tmp244->methods[0];
frost$collections$Iterator* $tmp247 = $tmp245(((frost$collections$Iterable*) param1));
ITable* $tmp248 = $tmp247->$class->itable;
while ($tmp248->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp248 = $tmp248->next;
}
$fn250 $tmp249 = $tmp248->methods[2];
frost$core$Int $tmp251 = $tmp249($tmp247);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$Int $tmp252 = (frost$core$Int) {2u};
int64_t $tmp253 = $tmp251.value;
int64_t $tmp254 = $tmp252.value;
bool $tmp255 = $tmp253 >= $tmp254;
frost$core$Bit $tmp256 = (frost$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block2; else goto block3;
block3:;
frost$core$Int $tmp258 = (frost$core$Int) {160u};
frost$core$String* $tmp259 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s260, param1);
frost$core$String* $tmp261 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp259, &$s262);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s263, $tmp258, $tmp261);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:161
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:161:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp264 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp265 = &(&local1)->value;
*$tmp265 = $tmp264;
frost$core$String$Index $tmp266 = *(&local1);
*(&local0) = $tmp266;
frost$core$String$Index $tmp267 = *(&local0);
frost$core$String$Index $tmp268 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp267);
*(&local2) = $tmp268;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:162
frost$core$String$Index $tmp269 = *(&local2);
frost$core$Char32 $tmp270 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp269);
frost$core$Int32 $tmp271 = (frost$core$Int32) {60u};
frost$core$Char32 $tmp272 = frost$core$Char32$init$frost$core$Int32($tmp271);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:163:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp273 = $tmp270.value;
int32_t $tmp274 = $tmp272.value;
bool $tmp275 = $tmp273 == $tmp274;
frost$core$Bit $tmp276 = (frost$core$Bit) {$tmp275};
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block7; else goto block8;
block8:;
frost$core$Int32 $tmp278 = (frost$core$Int32) {94u};
frost$core$Char32 $tmp279 = frost$core$Char32$init$frost$core$Int32($tmp278);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:163:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp280 = $tmp270.value;
int32_t $tmp281 = $tmp279.value;
bool $tmp282 = $tmp280 == $tmp281;
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block7; else goto block10;
block10:;
frost$core$Int32 $tmp285 = (frost$core$Int32) {62u};
frost$core$Char32 $tmp286 = frost$core$Char32$init$frost$core$Int32($tmp285);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:163:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp287 = $tmp270.value;
int32_t $tmp288 = $tmp286.value;
bool $tmp289 = $tmp287 == $tmp288;
frost$core$Bit $tmp290 = (frost$core$Bit) {$tmp289};
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block7; else goto block12;
block7:;
goto block6;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:167
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:167:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp292 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp293 = &(&local4)->value;
*$tmp293 = $tmp292;
frost$core$String$Index $tmp294 = *(&local4);
*(&local3) = $tmp294;
frost$core$String$Index $tmp295 = *(&local3);
*(&local2) = $tmp295;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:170
frost$core$String$Index $tmp296 = *(&local2);
frost$core$String$Index $tmp297 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp296);
frost$core$Bit $tmp298 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp299 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp297, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp298);
frost$core$String* $tmp300 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp299);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Frost.frost:170:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp301 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp300);
*(&local6) = $tmp301;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp302 = *(&local6);
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302.nonnull};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp305 = *(&local6);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp306 = ((frost$core$Int64) $tmp305.value).value;
frost$core$Int $tmp307 = (frost$core$Int) {((int64_t) $tmp306)};
*(&local5) = ((frost$core$Int$nullable) { $tmp307, true });
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local5) = ((frost$core$Int$nullable) { .nonnull = false });
goto block16;
block16:;
frost$core$Int$nullable $tmp308 = *(&local5);
*(&local7) = $tmp308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:171
frost$core$Int$nullable $tmp309 = *(&local7);
frost$core$Bit $tmp310 = (frost$core$Bit) {$tmp309.nonnull};
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block20; else goto block21;
block21:;
frost$core$Int $tmp312 = (frost$core$Int) {171u};
frost$core$String* $tmp313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s314, param1);
frost$core$String* $tmp315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp313, &$s316);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s317, $tmp312, $tmp315);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:172
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:173
frost$core$String$Index $tmp318 = *(&local2);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:173:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp319 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp320 = &(&local10)->value;
*$tmp320 = $tmp319;
frost$core$String$Index $tmp321 = *(&local10);
*(&local9) = $tmp321;
frost$core$String$Index $tmp322 = *(&local9);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from Frost.frost:173:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
frost$core$Int $tmp323 = $tmp318.value;
frost$core$Int $tmp324 = $tmp322.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp325 = $tmp323.value;
int64_t $tmp326 = $tmp324.value;
bool $tmp327 = $tmp325 == $tmp326;
frost$core$Bit $tmp328 = (frost$core$Bit) {$tmp327};
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:174
frost$core$Int32 $tmp330 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp331 = frost$core$Char32$init$frost$core$Int32($tmp330);
*(&local8) = $tmp331;
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:177
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:177:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp332 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp333 = &(&local12)->value;
*$tmp333 = $tmp332;
frost$core$String$Index $tmp334 = *(&local12);
*(&local11) = $tmp334;
frost$core$String$Index $tmp335 = *(&local11);
frost$core$Char32 $tmp336 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp335);
*(&local8) = $tmp336;
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:179
frost$core$String$Index $tmp337 = *(&local2);
frost$core$Char32 $tmp338 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp337);
frost$core$Int32 $tmp339 = (frost$core$Int32) {60u};
frost$core$Char32 $tmp340 = frost$core$Char32$init$frost$core$Int32($tmp339);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:180:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp341 = $tmp338.value;
int32_t $tmp342 = $tmp340.value;
bool $tmp343 = $tmp341 == $tmp342;
frost$core$Bit $tmp344 = (frost$core$Bit) {$tmp343};
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:180
frost$core$Int$nullable $tmp346 = *(&local7);
frost$core$Char32 $tmp347 = *(&local8);
frost$core$String* $tmp348 = frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int) $tmp346.value), $tmp347);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
return $tmp348;
block33:;
frost$core$Int32 $tmp349 = (frost$core$Int32) {94u};
frost$core$Char32 $tmp350 = frost$core$Char32$init$frost$core$Int32($tmp349);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:181:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp351 = $tmp338.value;
int32_t $tmp352 = $tmp350.value;
bool $tmp353 = $tmp351 == $tmp352;
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:181
frost$core$Int$nullable $tmp356 = *(&local7);
frost$core$Char32 $tmp357 = *(&local8);
frost$core$String* $tmp358 = frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int) $tmp356.value), $tmp357);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
return $tmp358;
block36:;
frost$core$Int32 $tmp359 = (frost$core$Int32) {62u};
frost$core$Char32 $tmp360 = frost$core$Char32$init$frost$core$Int32($tmp359);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:182:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp361 = $tmp338.value;
int32_t $tmp362 = $tmp360.value;
bool $tmp363 = $tmp361 == $tmp362;
frost$core$Bit $tmp364 = (frost$core$Bit) {$tmp363};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:182
frost$core$Int$nullable $tmp366 = *(&local7);
frost$core$Char32 $tmp367 = *(&local8);
frost$core$String* $tmp368 = frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int) $tmp366.value), $tmp367);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
return $tmp368;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:183
frost$core$Int $tmp369 = (frost$core$Int) {183u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s370, $tmp369);
abort(); // unreachable
block31:;
goto block41;
block41:;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:197
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:197:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp371 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp372 = &(&local1)->value;
*$tmp372 = $tmp371;
frost$core$String$Index $tmp373 = *(&local1);
*(&local0) = $tmp373;
frost$core$String$Index $tmp374 = *(&local0);
*(&local2) = $tmp374;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:198
frost$core$UInt64 $tmp375 = (frost$core$UInt64) {10u};
*(&local3) = $tmp375;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:199
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:199:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp376 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp376, &$s377);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp376)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp376)));
frost$collections$ListView* $tmp378 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local4) = ((frost$collections$ListView*) $tmp376);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp376)));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:200
frost$core$String$Index $tmp379 = *(&local2);
frost$core$String$Index$wrapper* $tmp380;
$tmp380 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp380->value = $tmp379;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Frost.frost:200:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp381 = &param3->_length;
frost$core$Int $tmp382 = *$tmp381;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp383 = &(&local6)->value;
*$tmp383 = $tmp382;
frost$core$String$Index $tmp384 = *(&local6);
*(&local5) = $tmp384;
frost$core$String$Index $tmp385 = *(&local5);
frost$core$String$Index$wrapper* $tmp386;
$tmp386 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp386->value = $tmp385;
ITable* $tmp387 = ((frost$core$Comparable*) $tmp380)->$class->itable;
while ($tmp387->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp387 = $tmp387->next;
}
$fn389 $tmp388 = $tmp387->methods[1];
frost$core$Bit $tmp390 = $tmp388(((frost$core$Comparable*) $tmp380), ((frost$core$Comparable*) $tmp386));
bool $tmp391 = $tmp390.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp386)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp380)));
if ($tmp391) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:201
frost$core$String$Index $tmp392 = *(&local2);
frost$core$Char32 $tmp393 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp392);
frost$core$Int32 $tmp394 = (frost$core$Int32) {98u};
frost$core$Char32 $tmp395 = frost$core$Char32$init$frost$core$Int32($tmp394);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:202:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp396 = $tmp393.value;
int32_t $tmp397 = $tmp395.value;
bool $tmp398 = $tmp396 == $tmp397;
frost$core$Bit $tmp399 = (frost$core$Bit) {$tmp398};
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block9; else goto block10;
block10:;
frost$core$Int32 $tmp401 = (frost$core$Int32) {66u};
frost$core$Char32 $tmp402 = frost$core$Char32$init$frost$core$Int32($tmp401);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:202:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp403 = $tmp393.value;
int32_t $tmp404 = $tmp402.value;
bool $tmp405 = $tmp403 == $tmp404;
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp405};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block9; else goto block12;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:203
frost$core$UInt64 $tmp408 = (frost$core$UInt64) {2u};
*(&local3) = $tmp408;
goto block8;
block12:;
frost$core$Int32 $tmp409 = (frost$core$Int32) {111u};
frost$core$Char32 $tmp410 = frost$core$Char32$init$frost$core$Int32($tmp409);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:205:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp411 = $tmp393.value;
int32_t $tmp412 = $tmp410.value;
bool $tmp413 = $tmp411 == $tmp412;
frost$core$Bit $tmp414 = (frost$core$Bit) {$tmp413};
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block14; else goto block15;
block15:;
frost$core$Int32 $tmp416 = (frost$core$Int32) {79u};
frost$core$Char32 $tmp417 = frost$core$Char32$init$frost$core$Int32($tmp416);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:205:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp418 = $tmp393.value;
int32_t $tmp419 = $tmp417.value;
bool $tmp420 = $tmp418 == $tmp419;
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp420};
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block14; else goto block17;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:206
frost$core$UInt64 $tmp423 = (frost$core$UInt64) {8u};
*(&local3) = $tmp423;
goto block8;
block17:;
frost$core$Int32 $tmp424 = (frost$core$Int32) {100u};
frost$core$Char32 $tmp425 = frost$core$Char32$init$frost$core$Int32($tmp424);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:208:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp426 = $tmp393.value;
int32_t $tmp427 = $tmp425.value;
bool $tmp428 = $tmp426 == $tmp427;
frost$core$Bit $tmp429 = (frost$core$Bit) {$tmp428};
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block19; else goto block20;
block20:;
frost$core$Int32 $tmp431 = (frost$core$Int32) {68u};
frost$core$Char32 $tmp432 = frost$core$Char32$init$frost$core$Int32($tmp431);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:208:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp433 = $tmp393.value;
int32_t $tmp434 = $tmp432.value;
bool $tmp435 = $tmp433 == $tmp434;
frost$core$Bit $tmp436 = (frost$core$Bit) {$tmp435};
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block19; else goto block22;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:209
frost$core$UInt64 $tmp438 = (frost$core$UInt64) {10u};
*(&local3) = $tmp438;
goto block8;
block22:;
frost$core$Int32 $tmp439 = (frost$core$Int32) {120u};
frost$core$Char32 $tmp440 = frost$core$Char32$init$frost$core$Int32($tmp439);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:211:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp441 = $tmp393.value;
int32_t $tmp442 = $tmp440.value;
bool $tmp443 = $tmp441 == $tmp442;
frost$core$Bit $tmp444 = (frost$core$Bit) {$tmp443};
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:212
frost$core$UInt64 $tmp446 = (frost$core$UInt64) {16u};
*(&local3) = $tmp446;
goto block8;
block25:;
frost$core$Int32 $tmp447 = (frost$core$Int32) {88u};
frost$core$Char32 $tmp448 = frost$core$Char32$init$frost$core$Int32($tmp447);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:214:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp449 = $tmp393.value;
int32_t $tmp450 = $tmp448.value;
bool $tmp451 = $tmp449 == $tmp450;
frost$core$Bit $tmp452 = (frost$core$Bit) {$tmp451};
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:215
frost$core$UInt64 $tmp454 = (frost$core$UInt64) {16u};
*(&local3) = $tmp454;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:216
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:216:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp455 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp455, &$s456);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp455)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp455)));
frost$collections$ListView* $tmp457 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local4) = ((frost$collections$ListView*) $tmp455);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp455)));
goto block8;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:219
frost$core$Int $tmp458 = (frost$core$Int) {219u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s459, $tmp458, &$s460);
abort(); // unreachable
block8:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:223
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:224
bool $tmp461 = param0.value;
if ($tmp461) goto block34; else goto block33;
block34:;
frost$core$UInt64 $tmp462 = *(&local3);
frost$core$UInt64 $tmp463 = (frost$core$UInt64) {10u};
uint64_t $tmp464 = $tmp462.value;
uint64_t $tmp465 = $tmp463.value;
bool $tmp466 = $tmp464 != $tmp465;
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp466};
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block31; else goto block33;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:225
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Frost.frost:225:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp469 = param1.value;
frost$core$Int64 $tmp470 = (frost$core$Int64) {((int64_t) $tmp469)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Frost.frost:225:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp471 = $tmp470.value;
int64_t $tmp472 = -$tmp471;
frost$core$Int64 $tmp473 = (frost$core$Int64) {$tmp472};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Frost.frost:225:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp474 = $tmp473.value;
frost$core$UInt64 $tmp475 = (frost$core$UInt64) {((uint64_t) $tmp474)};
// begin inline call to function frost.core.UInt64.&&(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:225:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:166
uint64_t $tmp476 = $tmp475.value;
uint64_t $tmp477 = param2.value;
uint64_t $tmp478 = $tmp476 & $tmp477;
frost$core$UInt64 $tmp479 = (frost$core$UInt64) {$tmp478};
*(&local7) = $tmp479;
goto block32;
block33:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:228
*(&local7) = param1;
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:230
frost$core$Int $tmp480 = (frost$core$Int) {64u};
*(&local8) = $tmp480;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:231
frost$core$Int $tmp481 = *(&local8);
frost$core$Int64 $tmp482 = frost$core$Int64$init$frost$core$Int($tmp481);
int64_t $tmp483 = $tmp482.value;
frost$core$Char8* $tmp484 = ((frost$core$Char8*) frostAlloc($tmp483 * 1));
*(&local9) = $tmp484;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:232
frost$core$Int $tmp485 = *(&local8);
frost$core$Int $tmp486 = (frost$core$Int) {1u};
int64_t $tmp487 = $tmp485.value;
int64_t $tmp488 = $tmp486.value;
int64_t $tmp489 = $tmp487 - $tmp488;
frost$core$Int $tmp490 = (frost$core$Int) {$tmp489};
*(&local10) = $tmp490;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:233
goto block39;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:234
frost$core$Char8* $tmp491 = *(&local9);
frost$core$Int $tmp492 = *(&local10);
frost$core$Int64 $tmp493 = frost$core$Int64$init$frost$core$Int($tmp492);
frost$collections$ListView* $tmp494 = *(&local4);
frost$core$UInt64 $tmp495 = *(&local7);
frost$core$UInt64 $tmp496 = *(&local3);
// begin inline call to function frost.core.UInt64.%(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:234:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:89
uint64_t $tmp497 = $tmp495.value;
uint64_t $tmp498 = $tmp496.value;
uint64_t $tmp499 = $tmp497 % $tmp498;
frost$core$UInt64 $tmp500 = (frost$core$UInt64) {$tmp499};
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Frost.frost:234:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp501 = $tmp500.value;
frost$core$Int $tmp502 = (frost$core$Int) {((int64_t) $tmp501)};
ITable* $tmp503 = $tmp494->$class->itable;
while ($tmp503->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp503 = $tmp503->next;
}
$fn505 $tmp504 = $tmp503->methods[0];
frost$core$Object* $tmp506 = $tmp504($tmp494, $tmp502);
int64_t $tmp507 = $tmp493.value;
$tmp491[$tmp507] = ((frost$core$Char8$wrapper*) $tmp506)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp506);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:235
frost$core$UInt64 $tmp508 = *(&local7);
frost$core$UInt64 $tmp509 = *(&local3);
uint64_t $tmp510 = $tmp508.value;
uint64_t $tmp511 = $tmp509.value;
uint64_t $tmp512 = $tmp510 / $tmp511;
frost$core$UInt64 $tmp513 = (frost$core$UInt64) {$tmp512};
*(&local7) = $tmp513;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:236
frost$core$Int $tmp514 = *(&local10);
frost$core$Int $tmp515 = (frost$core$Int) {1u};
int64_t $tmp516 = $tmp514.value;
int64_t $tmp517 = $tmp515.value;
int64_t $tmp518 = $tmp516 - $tmp517;
frost$core$Int $tmp519 = (frost$core$Int) {$tmp518};
*(&local10) = $tmp519;
frost$core$UInt64 $tmp520 = *(&local7);
frost$core$UInt64 $tmp521 = (frost$core$UInt64) {0u};
uint64_t $tmp522 = $tmp520.value;
uint64_t $tmp523 = $tmp521.value;
bool $tmp524 = $tmp522 > $tmp523;
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block39; else goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:239
bool $tmp527 = param0.value;
if ($tmp527) goto block46; else goto block45;
block46:;
frost$core$UInt64 $tmp528 = *(&local3);
frost$core$UInt64 $tmp529 = (frost$core$UInt64) {10u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Frost.frost:239:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp530 = $tmp528.value;
uint64_t $tmp531 = $tmp529.value;
bool $tmp532 = $tmp530 == $tmp531;
frost$core$Bit $tmp533 = (frost$core$Bit) {$tmp532};
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:240
frost$core$Char8* $tmp535 = *(&local9);
frost$core$Int $tmp536 = *(&local10);
frost$core$Int64 $tmp537 = frost$core$Int64$init$frost$core$Int($tmp536);
frost$core$UInt8 $tmp538 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp539 = frost$core$Char8$init$frost$core$UInt8($tmp538);
int64_t $tmp540 = $tmp537.value;
$tmp535[$tmp540] = $tmp539;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:241
frost$core$Int $tmp541 = *(&local10);
frost$core$Int $tmp542 = (frost$core$Int) {1u};
int64_t $tmp543 = $tmp541.value;
int64_t $tmp544 = $tmp542.value;
int64_t $tmp545 = $tmp543 - $tmp544;
frost$core$Int $tmp546 = (frost$core$Int) {$tmp545};
*(&local10) = $tmp546;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:243
frost$core$Int $tmp547 = *(&local10);
frost$core$Int $tmp548 = (frost$core$Int) {1u};
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 + $tmp550;
frost$core$Int $tmp552 = (frost$core$Int) {$tmp551};
*(&local10) = $tmp552;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:244
frost$core$Int $tmp553 = *(&local8);
frost$core$Int $tmp554 = *(&local10);
int64_t $tmp555 = $tmp553.value;
int64_t $tmp556 = $tmp554.value;
int64_t $tmp557 = $tmp555 - $tmp556;
frost$core$Int $tmp558 = (frost$core$Int) {$tmp557};
*(&local11) = $tmp558;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:245
frost$core$Int $tmp559 = (frost$core$Int) {0u};
frost$core$Int $tmp560 = *(&local11);
frost$core$Bit $tmp561 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp562 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp559, $tmp560, $tmp561);
frost$core$Int $tmp563 = $tmp562.min;
*(&local12) = $tmp563;
frost$core$Int $tmp564 = $tmp562.max;
frost$core$Bit $tmp565 = $tmp562.inclusive;
bool $tmp566 = $tmp565.value;
frost$core$Int $tmp567 = (frost$core$Int) {1u};
if ($tmp566) goto block51; else goto block52;
block51:;
int64_t $tmp568 = $tmp563.value;
int64_t $tmp569 = $tmp564.value;
bool $tmp570 = $tmp568 <= $tmp569;
frost$core$Bit $tmp571 = (frost$core$Bit) {$tmp570};
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block48; else goto block49;
block52:;
int64_t $tmp573 = $tmp563.value;
int64_t $tmp574 = $tmp564.value;
bool $tmp575 = $tmp573 < $tmp574;
frost$core$Bit $tmp576 = (frost$core$Bit) {$tmp575};
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:246
frost$core$Char8* $tmp578 = *(&local9);
frost$core$Int $tmp579 = *(&local12);
frost$core$Int64 $tmp580 = frost$core$Int64$init$frost$core$Int($tmp579);
frost$core$Char8* $tmp581 = *(&local9);
frost$core$Int $tmp582 = *(&local12);
frost$core$Int $tmp583 = *(&local10);
int64_t $tmp584 = $tmp582.value;
int64_t $tmp585 = $tmp583.value;
int64_t $tmp586 = $tmp584 + $tmp585;
frost$core$Int $tmp587 = (frost$core$Int) {$tmp586};
frost$core$Int64 $tmp588 = frost$core$Int64$init$frost$core$Int($tmp587);
int64_t $tmp589 = $tmp588.value;
frost$core$Char8 $tmp590 = $tmp581[$tmp589];
int64_t $tmp591 = $tmp580.value;
$tmp578[$tmp591] = $tmp590;
frost$core$Int $tmp592 = *(&local12);
int64_t $tmp593 = $tmp564.value;
int64_t $tmp594 = $tmp592.value;
int64_t $tmp595 = $tmp593 - $tmp594;
frost$core$Int $tmp596 = (frost$core$Int) {$tmp595};
if ($tmp566) goto block54; else goto block55;
block54:;
int64_t $tmp597 = $tmp596.value;
int64_t $tmp598 = $tmp567.value;
bool $tmp599 = $tmp597 >= $tmp598;
frost$core$Bit $tmp600 = (frost$core$Bit) {$tmp599};
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block53; else goto block49;
block55:;
int64_t $tmp602 = $tmp596.value;
int64_t $tmp603 = $tmp567.value;
bool $tmp604 = $tmp602 > $tmp603;
frost$core$Bit $tmp605 = (frost$core$Bit) {$tmp604};
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block53; else goto block49;
block53:;
int64_t $tmp607 = $tmp592.value;
int64_t $tmp608 = $tmp567.value;
int64_t $tmp609 = $tmp607 + $tmp608;
frost$core$Int $tmp610 = (frost$core$Int) {$tmp609};
*(&local12) = $tmp610;
goto block48;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:248
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp611 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp612 = *(&local9);
frost$core$Int $tmp613 = *(&local11);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp611, $tmp612, $tmp613);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$collections$ListView* $tmp614 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local4) = ((frost$collections$ListView*) NULL);
return $tmp611;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(frost$collections$List* param0, frost$core$Int param1, frost$core$Int param2) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:270
ITable* $tmp615 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp615->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp615 = $tmp615->next;
}
$fn617 $tmp616 = $tmp615->methods[0];
frost$core$Object* $tmp618 = $tmp616(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp618);
frost$core$Object* $tmp619 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp619);
*(&local0) = $tmp618;
frost$core$Frost$unref$frost$core$Object$Q($tmp618);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:271
ITable* $tmp620 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp620->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp620 = $tmp620->next;
}
$fn622 $tmp621 = $tmp620->methods[0];
frost$core$Object* $tmp623 = $tmp621(((frost$collections$ListView*) param0), param2);
ITable* $tmp624 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp624->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp624 = $tmp624->next;
}
$fn626 $tmp625 = $tmp624->methods[0];
$tmp625(((frost$collections$ListWriter*) param0), param1, $tmp623);
frost$core$Frost$unref$frost$core$Object$Q($tmp623);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:272
frost$core$Object* $tmp627 = *(&local0);
ITable* $tmp628 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp628->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp628 = $tmp628->next;
}
$fn630 $tmp629 = $tmp628->methods[0];
$tmp629(((frost$collections$ListWriter*) param0), param2, $tmp627);
frost$core$Object* $tmp631 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp631);
*(&local0) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$Int param1, frost$core$Int param2, frost$core$MutableMethod* param3) {

frost$core$Int local0;
frost$core$Object* local1 = NULL;
frost$core$Int local2;
frost$core$Int local3;
frost$core$Bit local4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:279
int64_t $tmp632 = param1.value;
int64_t $tmp633 = param2.value;
bool $tmp634 = $tmp632 >= $tmp633;
frost$core$Bit $tmp635 = (frost$core$Bit) {$tmp634};
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:280
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:282
int64_t $tmp637 = param2.value;
int64_t $tmp638 = param1.value;
int64_t $tmp639 = $tmp637 - $tmp638;
frost$core$Int $tmp640 = (frost$core$Int) {$tmp639};
frost$core$Int $tmp641 = (frost$core$Int) {2u};
int64_t $tmp642 = $tmp640.value;
int64_t $tmp643 = $tmp641.value;
int64_t $tmp644 = $tmp642 / $tmp643;
frost$core$Int $tmp645 = (frost$core$Int) {$tmp644};
int64_t $tmp646 = param1.value;
int64_t $tmp647 = $tmp645.value;
int64_t $tmp648 = $tmp646 + $tmp647;
frost$core$Int $tmp649 = (frost$core$Int) {$tmp648};
*(&local0) = $tmp649;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:283
frost$core$Int $tmp650 = *(&local0);
ITable* $tmp651 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp651->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp651 = $tmp651->next;
}
$fn653 $tmp652 = $tmp651->methods[0];
frost$core$Object* $tmp654 = $tmp652(((frost$collections$ListView*) param0), $tmp650);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp654);
frost$core$Object* $tmp655 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp655);
*(&local1) = $tmp654;
frost$core$Frost$unref$frost$core$Object$Q($tmp654);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:284
frost$core$Int $tmp656 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(param0, param2, $tmp656);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:285
*(&local2) = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:286
frost$core$Int $tmp657 = (frost$core$Int) {1u};
int64_t $tmp658 = param2.value;
int64_t $tmp659 = $tmp657.value;
int64_t $tmp660 = $tmp658 - $tmp659;
frost$core$Int $tmp661 = (frost$core$Int) {$tmp660};
frost$core$Bit $tmp662 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$Int$GT $tmp663 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(param1, $tmp661, $tmp662);
frost$core$Int $tmp664 = $tmp663.min;
*(&local3) = $tmp664;
frost$core$Int $tmp665 = $tmp663.max;
frost$core$Bit $tmp666 = $tmp663.inclusive;
bool $tmp667 = $tmp666.value;
frost$core$Int $tmp668 = (frost$core$Int) {1u};
if ($tmp667) goto block6; else goto block7;
block6:;
int64_t $tmp669 = $tmp664.value;
int64_t $tmp670 = $tmp665.value;
bool $tmp671 = $tmp669 <= $tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block3; else goto block4;
block7:;
int64_t $tmp674 = $tmp664.value;
int64_t $tmp675 = $tmp665.value;
bool $tmp676 = $tmp674 < $tmp675;
frost$core$Bit $tmp677 = (frost$core$Bit) {$tmp676};
bool $tmp678 = $tmp677.value;
if ($tmp678) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:287
frost$core$Int $tmp679 = *(&local3);
ITable* $tmp680 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp680->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp680 = $tmp680->next;
}
$fn682 $tmp681 = $tmp680->methods[0];
frost$core$Object* $tmp683 = $tmp681(((frost$collections$ListView*) param0), $tmp679);
frost$core$Object* $tmp684 = *(&local1);
frost$core$Int8** $tmp685 = &param3->pointer;
frost$core$Int8* $tmp686 = *$tmp685;
frost$core$Object** $tmp687 = &param3->target;
frost$core$Object* $tmp688 = *$tmp687;
bool $tmp689 = $tmp688 != ((frost$core$Object*) NULL);
if ($tmp689) goto block10; else goto block11;
block11:;
frost$core$Bit $tmp691 = (($fn690) $tmp686)($tmp683, $tmp684);
*(&local4) = $tmp691;
goto block12;
block10:;
frost$core$Bit $tmp693 = (($fn692) $tmp686)($tmp688, $tmp683, $tmp684);
*(&local4) = $tmp693;
goto block12;
block12:;
frost$core$Bit $tmp694 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Frost.frost:287:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp695 = $tmp694.value;
bool $tmp696 = !$tmp695;
frost$core$Bit $tmp697 = (frost$core$Bit) {$tmp696};
bool $tmp698 = $tmp697.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp683);
if ($tmp698) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:288
frost$core$Int $tmp699 = *(&local3);
frost$core$Int $tmp700 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(param0, $tmp699, $tmp700);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:289
frost$core$Int $tmp701 = *(&local2);
frost$core$Int $tmp702 = (frost$core$Int) {1u};
int64_t $tmp703 = $tmp701.value;
int64_t $tmp704 = $tmp702.value;
int64_t $tmp705 = $tmp703 + $tmp704;
frost$core$Int $tmp706 = (frost$core$Int) {$tmp705};
*(&local2) = $tmp706;
goto block9;
block9:;
frost$core$Int $tmp707 = *(&local3);
int64_t $tmp708 = $tmp665.value;
int64_t $tmp709 = $tmp707.value;
int64_t $tmp710 = $tmp708 - $tmp709;
frost$core$Int $tmp711 = (frost$core$Int) {$tmp710};
if ($tmp667) goto block15; else goto block16;
block15:;
int64_t $tmp712 = $tmp711.value;
int64_t $tmp713 = $tmp668.value;
bool $tmp714 = $tmp712 >= $tmp713;
frost$core$Bit $tmp715 = (frost$core$Bit) {$tmp714};
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block14; else goto block4;
block16:;
int64_t $tmp717 = $tmp711.value;
int64_t $tmp718 = $tmp668.value;
bool $tmp719 = $tmp717 > $tmp718;
frost$core$Bit $tmp720 = (frost$core$Bit) {$tmp719};
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block14; else goto block4;
block14:;
int64_t $tmp722 = $tmp707.value;
int64_t $tmp723 = $tmp668.value;
int64_t $tmp724 = $tmp722 + $tmp723;
frost$core$Int $tmp725 = (frost$core$Int) {$tmp724};
*(&local3) = $tmp725;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:292
frost$core$Int $tmp726 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(param0, $tmp726, param2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:293
frost$core$Int $tmp727 = *(&local2);
frost$core$Int $tmp728 = (frost$core$Int) {1u};
int64_t $tmp729 = $tmp727.value;
int64_t $tmp730 = $tmp728.value;
int64_t $tmp731 = $tmp729 - $tmp730;
frost$core$Int $tmp732 = (frost$core$Int) {$tmp731};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, param1, $tmp732, param3);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:294
frost$core$Int $tmp733 = *(&local2);
frost$core$Int $tmp734 = (frost$core$Int) {1u};
int64_t $tmp735 = $tmp733.value;
int64_t $tmp736 = $tmp734.value;
int64_t $tmp737 = $tmp735 + $tmp736;
frost$core$Int $tmp738 = (frost$core$Int) {$tmp737};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp738, param2, param3);
frost$core$Object* $tmp739 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp739);
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

