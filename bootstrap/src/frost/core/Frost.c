#include "frost/core/Frost.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Maybe.h"
#include "frost/core/Int.h"
#include "frost/core/Error.h"
#include "frost/core/Weak.h"
#include "frost/collections/IdentityMap.h"
#include "frost/collections/Array.h"
#include "frost/core/Bit.h"
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

typedef frost$collections$Iterator* (*$fn39)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn43)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn48)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn66)(frost$core$Object*);
typedef frost$core$Error* (*$fn72)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn82)(frost$core$Object*);
typedef frost$core$Error* (*$fn91)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn196)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn228)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn232)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn362)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn478)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn590)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn595)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn599)(frost$collections$ListWriter*, frost$core$Int, frost$core$Object*);
typedef void (*$fn603)(frost$collections$ListWriter*, frost$core$Int, frost$core$Object*);
typedef frost$core$Object* (*$fn626)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn655)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn663)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn665)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, 4237142976622831502, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, 7669895969177076905, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, 7669895969177076905, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3a\x20", 3, 48285155966961582, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -6606133885720023461, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 3330193207084279677, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, -1839289420917840067, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 3626147090372997348, NULL };

void frost$core$Frost$init(frost$core$Frost* param0) {

return;

}
frost$core$Maybe* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$Object* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:21
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp2 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp3 = (frost$core$Int) {0u};
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T($tmp2, $tmp3, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return $tmp2;

}
frost$core$Maybe* frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:27
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
void frost$core$Frost$_addWeakReference$frost$core$Weak$LTfrost$core$Object$GT$frost$collections$IdentityMap$LTfrost$core$Object$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Weak* param0, frost$collections$IdentityMap* param1) {

frost$core$Object* local0 = NULL;
frost$collections$Array* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:44
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Frost.frost:44:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp7 = &param0->_valid;
frost$core$Bit $tmp8 = *$tmp7;
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block3; else goto block4;
block4:;
frost$core$Int $tmp10 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s11, $tmp10);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp12 = &param0->value;
frost$core$Object* $tmp13 = *$tmp12;
frost$core$Frost$ref$frost$core$Object$Q($tmp13);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp13);
frost$core$Object* $tmp14 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp14);
*(&local0) = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q($tmp13);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:45
frost$core$Object* $tmp15 = *(&local0);
frost$core$Object* $tmp16 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(param1, $tmp15);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) $tmp16)));
frost$collections$Array* $tmp17 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local1) = ((frost$collections$Array*) $tmp16);
frost$core$Frost$unref$frost$core$Object$Q($tmp16);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:46
frost$collections$Array* $tmp18 = *(&local1);
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18 == NULL};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:47
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp21 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$collections$Array* $tmp22 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local1) = $tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:48
frost$core$Object* $tmp23 = *(&local0);
frost$collections$Array* $tmp24 = *(&local1);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(param1, $tmp23, ((frost$core$Object*) $tmp24));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:49
frost$core$Object* $tmp25 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp25);
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:51
frost$collections$Array* $tmp26 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp26, ((frost$core$Object*) param0));
frost$collections$Array* $tmp27 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Object* $tmp28 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp28);
*(&local0) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$weakReferentDestroyed$frost$core$Object$frost$collections$IdentityMap$LTfrost$core$Object$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Object* param0, frost$collections$IdentityMap* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Weak* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:56
frost$core$Frost$ref$frost$core$Object$Q(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:57
frost$core$Object* $tmp29 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(param1, param0);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) $tmp29)));
frost$collections$Array* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local0) = ((frost$collections$Array*) $tmp29);
frost$core$Frost$unref$frost$core$Object$Q($tmp29);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:58
frost$collections$Array* $tmp31 = *(&local0);
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31 != NULL};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block1; else goto block2;
block2:;
frost$core$Int $tmp34 = (frost$core$Int) {58u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s35, $tmp34);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:59
frost$collections$Array* $tmp36 = *(&local0);
ITable* $tmp37 = ((frost$collections$Iterable*) $tmp36)->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[0];
frost$collections$Iterator* $tmp40 = $tmp38(((frost$collections$Iterable*) $tmp36));
goto block3;
block3:;
ITable* $tmp41 = $tmp40->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[0];
frost$core$Bit $tmp44 = $tmp42($tmp40);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block5; else goto block4;
block4:;
*(&local1) = ((frost$core$Weak*) NULL);
ITable* $tmp46 = $tmp40->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[1];
frost$core$Object* $tmp49 = $tmp47($tmp40);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Weak*) $tmp49)));
frost$core$Weak* $tmp50 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local1) = ((frost$core$Weak*) $tmp49);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:60
frost$core$Weak* $tmp51 = *(&local1);
frost$core$Bit $tmp52 = (frost$core$Bit) {false};
frost$core$Bit* $tmp53 = &$tmp51->_valid;
*$tmp53 = $tmp52;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:61
frost$core$Weak* $tmp54 = *(&local1);
frost$core$Object** $tmp55 = &$tmp54->value;
*$tmp55 = ((frost$core$Object*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp49);
frost$core$Weak* $tmp56 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local1) = ((frost$core$Weak*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:63
frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(param1, param0);
frost$collections$Array* $tmp57 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
frost$collections$IdentityMap* frost$core$Frost$createWeakReferenceMap$R$frost$collections$IdentityMap$LTfrost$core$Object$Cfrost$collections$Array$LTfrost$core$Object$GT$GT() {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:68
FROST_ASSERT(56 == sizeof(frost$collections$IdentityMap));
frost$collections$IdentityMap* $tmp58 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp58);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
return $tmp58;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(frost$core$String* param0, frost$core$Int param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:85
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:86
frost$io$OutputStream* $tmp59 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp60 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s61, param0);
frost$core$String* $tmp62 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp60, &$s63);
frost$core$Int$wrapper* $tmp64;
$tmp64 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp64->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Frost.frost:86:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn66 $tmp65 = ($fn66) ((frost$core$Object*) $tmp64)->$class->vtable[0];
frost$core$String* $tmp67 = $tmp65(((frost$core$Object*) $tmp64));
frost$core$String* $tmp68 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp62, $tmp67);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp68, &$s70);
$fn72 $tmp71 = ($fn72) $tmp59->$class->vtable[19];
frost$core$Error* $tmp73 = $tmp71($tmp59, $tmp69);
if ($tmp73 == NULL) goto block4; else goto block5;
block5:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local0) = $tmp73;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
goto block2;
block2:;
frost$core$Error* $tmp74 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:90
frost$core$System$crash();
return;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$String* param2) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:95
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:96
frost$io$OutputStream* $tmp75 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s77, param0);
frost$core$String* $tmp78 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp76, &$s79);
frost$core$Int$wrapper* $tmp80;
$tmp80 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp80->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Frost.frost:96:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn82 $tmp81 = ($fn82) ((frost$core$Object*) $tmp80)->$class->vtable[0];
frost$core$String* $tmp83 = $tmp81(((frost$core$Object*) $tmp80));
frost$core$String* $tmp84 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp78, $tmp83);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$String* $tmp85 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp84, &$s86);
frost$core$String* $tmp87 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp85, param2);
frost$core$String* $tmp88 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp87, &$s89);
$fn91 $tmp90 = ($fn91) $tmp75->$class->vtable[19];
frost$core$Error* $tmp92 = $tmp90($tmp75, $tmp88);
if ($tmp92 == NULL) goto block4; else goto block5;
block5:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local0) = $tmp92;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
goto block2;
block2:;
frost$core$Error* $tmp93 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:100
frost$core$System$crash();
return;

}
frost$core$UInt64$nullable frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q(frost$core$Char32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:105
frost$core$Int32 $tmp94 = (frost$core$Int32) {48u};
frost$core$Char32 $tmp95 = frost$core$Char32$init$frost$core$Int32($tmp94);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:105:14
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:52
int32_t $tmp96 = param0.value;
int32_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 >= $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block3; else goto block2;
block3:;
frost$core$Int32 $tmp101 = (frost$core$Int32) {57u};
frost$core$Char32 $tmp102 = frost$core$Char32$init$frost$core$Int32($tmp101);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:105:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:47
int32_t $tmp103 = param0.value;
int32_t $tmp104 = $tmp102.value;
bool $tmp105 = $tmp103 <= $tmp104;
frost$core$Bit $tmp106 = (frost$core$Bit) {$tmp105};
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:106
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:106:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:136
int32_t $tmp108 = param0.value;
frost$core$UInt64 $tmp109 = (frost$core$UInt64) {((uint64_t) $tmp108)};
frost$core$UInt8 $tmp110 = (frost$core$UInt8) {48u};
frost$core$Char8 $tmp111 = frost$core$Char8$init$frost$core$UInt8($tmp110);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:106:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:141
uint8_t $tmp112 = $tmp111.value;
frost$core$UInt64 $tmp113 = (frost$core$UInt64) {((uint64_t) $tmp112)};
uint64_t $tmp114 = $tmp109.value;
uint64_t $tmp115 = $tmp113.value;
uint64_t $tmp116 = $tmp114 - $tmp115;
frost$core$UInt64 $tmp117 = (frost$core$UInt64) {$tmp116};
return ((frost$core$UInt64$nullable) { $tmp117, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:108
frost$core$Int32 $tmp118 = (frost$core$Int32) {65u};
frost$core$Char32 $tmp119 = frost$core$Char32$init$frost$core$Int32($tmp118);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:108:14
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:52
int32_t $tmp120 = param0.value;
int32_t $tmp121 = $tmp119.value;
bool $tmp122 = $tmp120 >= $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block10; else goto block9;
block10:;
frost$core$Int32 $tmp125 = (frost$core$Int32) {90u};
frost$core$Char32 $tmp126 = frost$core$Char32$init$frost$core$Int32($tmp125);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:108:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:47
int32_t $tmp127 = param0.value;
int32_t $tmp128 = $tmp126.value;
bool $tmp129 = $tmp127 <= $tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:109
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:109:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:136
int32_t $tmp132 = param0.value;
frost$core$UInt64 $tmp133 = (frost$core$UInt64) {((uint64_t) $tmp132)};
frost$core$UInt8 $tmp134 = (frost$core$UInt8) {65u};
frost$core$Char8 $tmp135 = frost$core$Char8$init$frost$core$UInt8($tmp134);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:109:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:141
uint8_t $tmp136 = $tmp135.value;
frost$core$UInt64 $tmp137 = (frost$core$UInt64) {((uint64_t) $tmp136)};
uint64_t $tmp138 = $tmp133.value;
uint64_t $tmp139 = $tmp137.value;
uint64_t $tmp140 = $tmp138 - $tmp139;
frost$core$UInt64 $tmp141 = (frost$core$UInt64) {$tmp140};
frost$core$UInt64 $tmp142 = (frost$core$UInt64) {10u};
uint64_t $tmp143 = $tmp141.value;
uint64_t $tmp144 = $tmp142.value;
uint64_t $tmp145 = $tmp143 + $tmp144;
frost$core$UInt64 $tmp146 = (frost$core$UInt64) {$tmp145};
return ((frost$core$UInt64$nullable) { $tmp146, true });
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:111
frost$core$Int32 $tmp147 = (frost$core$Int32) {97u};
frost$core$Char32 $tmp148 = frost$core$Char32$init$frost$core$Int32($tmp147);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:111:14
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:52
int32_t $tmp149 = param0.value;
int32_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 >= $tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block17; else goto block16;
block17:;
frost$core$Int32 $tmp154 = (frost$core$Int32) {122u};
frost$core$Char32 $tmp155 = frost$core$Char32$init$frost$core$Int32($tmp154);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:111:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:47
int32_t $tmp156 = param0.value;
int32_t $tmp157 = $tmp155.value;
bool $tmp158 = $tmp156 <= $tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:112
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:112:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:136
int32_t $tmp161 = param0.value;
frost$core$UInt64 $tmp162 = (frost$core$UInt64) {((uint64_t) $tmp161)};
frost$core$UInt8 $tmp163 = (frost$core$UInt8) {97u};
frost$core$Char8 $tmp164 = frost$core$Char8$init$frost$core$UInt8($tmp163);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:112:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:141
uint8_t $tmp165 = $tmp164.value;
frost$core$UInt64 $tmp166 = (frost$core$UInt64) {((uint64_t) $tmp165)};
uint64_t $tmp167 = $tmp162.value;
uint64_t $tmp168 = $tmp166.value;
uint64_t $tmp169 = $tmp167 - $tmp168;
frost$core$UInt64 $tmp170 = (frost$core$UInt64) {$tmp169};
frost$core$UInt64 $tmp171 = (frost$core$UInt64) {10u};
uint64_t $tmp172 = $tmp170.value;
uint64_t $tmp173 = $tmp171.value;
uint64_t $tmp174 = $tmp172 + $tmp173;
frost$core$UInt64 $tmp175 = (frost$core$UInt64) {$tmp174};
return ((frost$core$UInt64$nullable) { $tmp175, true });
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:114
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:122
frost$core$Bit $tmp176 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s177);
bool $tmp178 = $tmp176.value;
if ($tmp178) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:123
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:125
frost$core$UInt64 $tmp179 = (frost$core$UInt64) {0u};
*(&local0) = $tmp179;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:126
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Frost.frost:126:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:1009
int64_t $tmp180 = param1.value;
frost$core$UInt64 $tmp181 = (frost$core$UInt64) {((uint64_t) $tmp180)};
*(&local1) = $tmp181;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:127
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:127:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int $tmp182 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp183 = &(&local3)->value;
*$tmp183 = $tmp182;
frost$core$String$Index $tmp184 = *(&local3);
*(&local2) = $tmp184;
frost$core$String$Index $tmp185 = *(&local2);
*(&local4) = $tmp185;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:128
goto block6;
block6:;
frost$core$String$Index $tmp186 = *(&local4);
frost$core$String$Index$wrapper* $tmp187;
$tmp187 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp187->value = $tmp186;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Frost.frost:128:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int* $tmp188 = &param0->_length;
frost$core$Int $tmp189 = *$tmp188;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp190 = &(&local6)->value;
*$tmp190 = $tmp189;
frost$core$String$Index $tmp191 = *(&local6);
*(&local5) = $tmp191;
frost$core$String$Index $tmp192 = *(&local5);
frost$core$String$Index$wrapper* $tmp193;
$tmp193 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp193->value = $tmp192;
ITable* $tmp194 = ((frost$core$Equatable*) $tmp187)->$class->itable;
while ($tmp194->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp194 = $tmp194->next;
}
$fn196 $tmp195 = $tmp194->methods[1];
frost$core$Bit $tmp197 = $tmp195(((frost$core$Equatable*) $tmp187), ((frost$core$Equatable*) $tmp193));
bool $tmp198 = $tmp197.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp193)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp187)));
if ($tmp198) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:129
frost$core$String$Index $tmp199 = *(&local4);
frost$core$Char32 $tmp200 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp199);
frost$core$UInt64$nullable $tmp201 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q($tmp200);
*(&local7) = $tmp201;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:130
frost$core$UInt64$nullable $tmp202 = *(&local7);
frost$core$Bit $tmp203 = (frost$core$Bit) {!$tmp202.nonnull};
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block11; else goto block13;
block13:;
frost$core$UInt64$nullable $tmp205 = *(&local7);
frost$core$UInt64 $tmp206 = *(&local1);
uint64_t $tmp207 = ((frost$core$UInt64) $tmp205.value).value;
uint64_t $tmp208 = $tmp206.value;
bool $tmp209 = $tmp207 >= $tmp208;
frost$core$Bit $tmp210 = (frost$core$Bit) {$tmp209};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:131
return ((frost$core$UInt64$nullable) { .nonnull = false });
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:133
frost$core$UInt64 $tmp212 = *(&local0);
frost$core$UInt64 $tmp213 = *(&local1);
uint64_t $tmp214 = $tmp212.value;
uint64_t $tmp215 = $tmp213.value;
uint64_t $tmp216 = $tmp214 * $tmp215;
frost$core$UInt64 $tmp217 = (frost$core$UInt64) {$tmp216};
frost$core$UInt64$nullable $tmp218 = *(&local7);
uint64_t $tmp219 = $tmp217.value;
uint64_t $tmp220 = ((frost$core$UInt64) $tmp218.value).value;
uint64_t $tmp221 = $tmp219 + $tmp220;
frost$core$UInt64 $tmp222 = (frost$core$UInt64) {$tmp221};
*(&local0) = $tmp222;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:134
frost$core$String$Index $tmp223 = *(&local4);
frost$core$String$Index $tmp224 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp223);
*(&local4) = $tmp224;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:136
frost$core$UInt64 $tmp225 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp225, true });

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:162
// begin inline call to function frost.core.String.get_length():frost.core.Int from Frost.frost:162:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:485
ITable* $tmp226 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp226->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp226 = $tmp226->next;
}
$fn228 $tmp227 = $tmp226->methods[0];
frost$collections$Iterator* $tmp229 = $tmp227(((frost$collections$Iterable*) param1));
ITable* $tmp230 = $tmp229->$class->itable;
while ($tmp230->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[2];
frost$core$Int $tmp233 = $tmp231($tmp229);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Int $tmp234 = (frost$core$Int) {2u};
int64_t $tmp235 = $tmp233.value;
int64_t $tmp236 = $tmp234.value;
bool $tmp237 = $tmp235 >= $tmp236;
frost$core$Bit $tmp238 = (frost$core$Bit) {$tmp237};
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block2; else goto block3;
block3:;
frost$core$Int $tmp240 = (frost$core$Int) {162u};
frost$core$String* $tmp241 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s242, param1);
frost$core$String* $tmp243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp241, &$s244);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s245, $tmp240, $tmp243);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:163
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:163:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int $tmp246 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp247 = &(&local1)->value;
*$tmp247 = $tmp246;
frost$core$String$Index $tmp248 = *(&local1);
*(&local0) = $tmp248;
frost$core$String$Index $tmp249 = *(&local0);
frost$core$String$Index $tmp250 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp249);
*(&local2) = $tmp250;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:164
frost$core$String$Index $tmp251 = *(&local2);
frost$core$Char32 $tmp252 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp251);
frost$core$Int32 $tmp253 = (frost$core$Int32) {60u};
frost$core$Char32 $tmp254 = frost$core$Char32$init$frost$core$Int32($tmp253);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:165:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp255 = $tmp252.value;
int32_t $tmp256 = $tmp254.value;
bool $tmp257 = $tmp255 == $tmp256;
frost$core$Bit $tmp258 = (frost$core$Bit) {$tmp257};
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block7; else goto block8;
block8:;
frost$core$Int32 $tmp260 = (frost$core$Int32) {94u};
frost$core$Char32 $tmp261 = frost$core$Char32$init$frost$core$Int32($tmp260);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:165:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp262 = $tmp252.value;
int32_t $tmp263 = $tmp261.value;
bool $tmp264 = $tmp262 == $tmp263;
frost$core$Bit $tmp265 = (frost$core$Bit) {$tmp264};
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block7; else goto block10;
block10:;
frost$core$Int32 $tmp267 = (frost$core$Int32) {62u};
frost$core$Char32 $tmp268 = frost$core$Char32$init$frost$core$Int32($tmp267);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:165:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp269 = $tmp252.value;
int32_t $tmp270 = $tmp268.value;
bool $tmp271 = $tmp269 == $tmp270;
frost$core$Bit $tmp272 = (frost$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block7; else goto block12;
block7:;
goto block6;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:169
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:169:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int $tmp274 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp275 = &(&local4)->value;
*$tmp275 = $tmp274;
frost$core$String$Index $tmp276 = *(&local4);
*(&local3) = $tmp276;
frost$core$String$Index $tmp277 = *(&local3);
*(&local2) = $tmp277;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:172
frost$core$String$Index $tmp278 = *(&local2);
frost$core$String$Index $tmp279 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp278);
frost$core$Bit $tmp280 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp281 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp279, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp280);
frost$core$String* $tmp282 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp281);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Frost.frost:172:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp283 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp282);
*(&local6) = $tmp283;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp284 = *(&local6);
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284.nonnull};
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp287 = *(&local6);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp288 = ((frost$core$Int64) $tmp287.value).value;
frost$core$Int $tmp289 = (frost$core$Int) {((int64_t) $tmp288)};
*(&local5) = ((frost$core$Int$nullable) { $tmp289, true });
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1458
*(&local5) = ((frost$core$Int$nullable) { .nonnull = false });
goto block16;
block16:;
frost$core$Int$nullable $tmp290 = *(&local5);
*(&local7) = $tmp290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:173
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:174
frost$core$String$Index $tmp291 = *(&local2);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:174:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int $tmp292 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp293 = &(&local10)->value;
*$tmp293 = $tmp292;
frost$core$String$Index $tmp294 = *(&local10);
*(&local9) = $tmp294;
frost$core$String$Index $tmp295 = *(&local9);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from Frost.frost:174:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:66
frost$core$Int $tmp296 = $tmp291.value;
frost$core$Int $tmp297 = $tmp295.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp298 = $tmp296.value;
int64_t $tmp299 = $tmp297.value;
bool $tmp300 = $tmp298 == $tmp299;
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:175
frost$core$Int32 $tmp303 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp304 = frost$core$Char32$init$frost$core$Int32($tmp303);
*(&local8) = $tmp304;
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:178
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:178:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int $tmp305 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp306 = &(&local12)->value;
*$tmp306 = $tmp305;
frost$core$String$Index $tmp307 = *(&local12);
*(&local11) = $tmp307;
frost$core$String$Index $tmp308 = *(&local11);
frost$core$Char32 $tmp309 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp308);
*(&local8) = $tmp309;
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:180
frost$core$String$Index $tmp310 = *(&local2);
frost$core$Char32 $tmp311 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp310);
frost$core$Int32 $tmp312 = (frost$core$Int32) {60u};
frost$core$Char32 $tmp313 = frost$core$Char32$init$frost$core$Int32($tmp312);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:181:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp314 = $tmp311.value;
int32_t $tmp315 = $tmp313.value;
bool $tmp316 = $tmp314 == $tmp315;
frost$core$Bit $tmp317 = (frost$core$Bit) {$tmp316};
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:181
frost$core$Int$nullable $tmp319 = *(&local7);
frost$core$Char32 $tmp320 = *(&local8);
frost$core$String* $tmp321 = frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int) $tmp319.value), $tmp320);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
return $tmp321;
block31:;
frost$core$Int32 $tmp322 = (frost$core$Int32) {94u};
frost$core$Char32 $tmp323 = frost$core$Char32$init$frost$core$Int32($tmp322);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:182:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp324 = $tmp311.value;
int32_t $tmp325 = $tmp323.value;
bool $tmp326 = $tmp324 == $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:182
frost$core$Int$nullable $tmp329 = *(&local7);
frost$core$Char32 $tmp330 = *(&local8);
frost$core$String* $tmp331 = frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int) $tmp329.value), $tmp330);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
return $tmp331;
block34:;
frost$core$Int32 $tmp332 = (frost$core$Int32) {62u};
frost$core$Char32 $tmp333 = frost$core$Char32$init$frost$core$Int32($tmp332);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:183:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp334 = $tmp311.value;
int32_t $tmp335 = $tmp333.value;
bool $tmp336 = $tmp334 == $tmp335;
frost$core$Bit $tmp337 = (frost$core$Bit) {$tmp336};
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:183
frost$core$Int$nullable $tmp339 = *(&local7);
frost$core$Char32 $tmp340 = *(&local8);
frost$core$String* $tmp341 = frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int) $tmp339.value), $tmp340);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
return $tmp341;
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:184
frost$core$Int $tmp342 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s343, $tmp342);
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:198
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:198:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int $tmp344 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp345 = &(&local1)->value;
*$tmp345 = $tmp344;
frost$core$String$Index $tmp346 = *(&local1);
*(&local0) = $tmp346;
frost$core$String$Index $tmp347 = *(&local0);
*(&local2) = $tmp347;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:199
frost$core$UInt64 $tmp348 = (frost$core$UInt64) {10u};
*(&local3) = $tmp348;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:200
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:200:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp349 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp349, &$s350);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp349)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp349)));
frost$collections$ListView* $tmp351 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local4) = ((frost$collections$ListView*) $tmp349);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp349)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:201
frost$core$String$Index $tmp352 = *(&local2);
frost$core$String$Index$wrapper* $tmp353;
$tmp353 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp353->value = $tmp352;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Frost.frost:201:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int* $tmp354 = &param3->_length;
frost$core$Int $tmp355 = *$tmp354;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp356 = &(&local6)->value;
*$tmp356 = $tmp355;
frost$core$String$Index $tmp357 = *(&local6);
*(&local5) = $tmp357;
frost$core$String$Index $tmp358 = *(&local5);
frost$core$String$Index$wrapper* $tmp359;
$tmp359 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp359->value = $tmp358;
ITable* $tmp360 = ((frost$core$Comparable*) $tmp353)->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp360 = $tmp360->next;
}
$fn362 $tmp361 = $tmp360->methods[1];
frost$core$Bit $tmp363 = $tmp361(((frost$core$Comparable*) $tmp353), ((frost$core$Comparable*) $tmp359));
bool $tmp364 = $tmp363.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp359)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp353)));
if ($tmp364) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:202
frost$core$String$Index $tmp365 = *(&local2);
frost$core$Char32 $tmp366 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp365);
frost$core$Int32 $tmp367 = (frost$core$Int32) {98u};
frost$core$Char32 $tmp368 = frost$core$Char32$init$frost$core$Int32($tmp367);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:203:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp369 = $tmp366.value;
int32_t $tmp370 = $tmp368.value;
bool $tmp371 = $tmp369 == $tmp370;
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block9; else goto block10;
block10:;
frost$core$Int32 $tmp374 = (frost$core$Int32) {66u};
frost$core$Char32 $tmp375 = frost$core$Char32$init$frost$core$Int32($tmp374);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:203:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp376 = $tmp366.value;
int32_t $tmp377 = $tmp375.value;
bool $tmp378 = $tmp376 == $tmp377;
frost$core$Bit $tmp379 = (frost$core$Bit) {$tmp378};
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block9; else goto block12;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:204
frost$core$UInt64 $tmp381 = (frost$core$UInt64) {2u};
*(&local3) = $tmp381;
goto block8;
block12:;
frost$core$Int32 $tmp382 = (frost$core$Int32) {111u};
frost$core$Char32 $tmp383 = frost$core$Char32$init$frost$core$Int32($tmp382);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:206:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp384 = $tmp366.value;
int32_t $tmp385 = $tmp383.value;
bool $tmp386 = $tmp384 == $tmp385;
frost$core$Bit $tmp387 = (frost$core$Bit) {$tmp386};
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block14; else goto block15;
block15:;
frost$core$Int32 $tmp389 = (frost$core$Int32) {79u};
frost$core$Char32 $tmp390 = frost$core$Char32$init$frost$core$Int32($tmp389);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:206:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp391 = $tmp366.value;
int32_t $tmp392 = $tmp390.value;
bool $tmp393 = $tmp391 == $tmp392;
frost$core$Bit $tmp394 = (frost$core$Bit) {$tmp393};
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block14; else goto block17;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:207
frost$core$UInt64 $tmp396 = (frost$core$UInt64) {8u};
*(&local3) = $tmp396;
goto block8;
block17:;
frost$core$Int32 $tmp397 = (frost$core$Int32) {100u};
frost$core$Char32 $tmp398 = frost$core$Char32$init$frost$core$Int32($tmp397);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:209:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp399 = $tmp366.value;
int32_t $tmp400 = $tmp398.value;
bool $tmp401 = $tmp399 == $tmp400;
frost$core$Bit $tmp402 = (frost$core$Bit) {$tmp401};
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block19; else goto block20;
block20:;
frost$core$Int32 $tmp404 = (frost$core$Int32) {68u};
frost$core$Char32 $tmp405 = frost$core$Char32$init$frost$core$Int32($tmp404);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:209:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp406 = $tmp366.value;
int32_t $tmp407 = $tmp405.value;
bool $tmp408 = $tmp406 == $tmp407;
frost$core$Bit $tmp409 = (frost$core$Bit) {$tmp408};
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block19; else goto block22;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:210
frost$core$UInt64 $tmp411 = (frost$core$UInt64) {10u};
*(&local3) = $tmp411;
goto block8;
block22:;
frost$core$Int32 $tmp412 = (frost$core$Int32) {120u};
frost$core$Char32 $tmp413 = frost$core$Char32$init$frost$core$Int32($tmp412);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:212:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp414 = $tmp366.value;
int32_t $tmp415 = $tmp413.value;
bool $tmp416 = $tmp414 == $tmp415;
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:213
frost$core$UInt64 $tmp419 = (frost$core$UInt64) {16u};
*(&local3) = $tmp419;
goto block8;
block25:;
frost$core$Int32 $tmp420 = (frost$core$Int32) {88u};
frost$core$Char32 $tmp421 = frost$core$Char32$init$frost$core$Int32($tmp420);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:215:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp422 = $tmp366.value;
int32_t $tmp423 = $tmp421.value;
bool $tmp424 = $tmp422 == $tmp423;
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:216
frost$core$UInt64 $tmp427 = (frost$core$UInt64) {16u};
*(&local3) = $tmp427;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:217
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:217:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp428 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp428, &$s429);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp428)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp428)));
frost$collections$ListView* $tmp430 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local4) = ((frost$collections$ListView*) $tmp428);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp428)));
goto block8;
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:220
frost$core$Int $tmp431 = (frost$core$Int) {220u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s432, $tmp431, &$s433);
abort(); // unreachable
block8:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:224
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:225
bool $tmp434 = param0.value;
if ($tmp434) goto block34; else goto block33;
block34:;
frost$core$UInt64 $tmp435 = *(&local3);
frost$core$UInt64 $tmp436 = (frost$core$UInt64) {10u};
uint64_t $tmp437 = $tmp435.value;
uint64_t $tmp438 = $tmp436.value;
bool $tmp439 = $tmp437 != $tmp438;
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block31; else goto block33;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:226
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Frost.frost:226:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:568
uint64_t $tmp442 = param1.value;
frost$core$Int64 $tmp443 = (frost$core$Int64) {((int64_t) $tmp442)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Frost.frost:226:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:89
int64_t $tmp444 = $tmp443.value;
int64_t $tmp445 = -$tmp444;
frost$core$Int64 $tmp446 = (frost$core$Int64) {$tmp445};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Frost.frost:226:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:628
int64_t $tmp447 = $tmp446.value;
frost$core$UInt64 $tmp448 = (frost$core$UInt64) {((uint64_t) $tmp447)};
// begin inline call to function frost.core.UInt64.&&(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:226:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:166
uint64_t $tmp449 = $tmp448.value;
uint64_t $tmp450 = param2.value;
uint64_t $tmp451 = $tmp449 & $tmp450;
frost$core$UInt64 $tmp452 = (frost$core$UInt64) {$tmp451};
*(&local7) = $tmp452;
goto block32;
block33:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:229
*(&local7) = param1;
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:231
frost$core$Int $tmp453 = (frost$core$Int) {64u};
*(&local8) = $tmp453;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:232
frost$core$Int $tmp454 = *(&local8);
frost$core$Int64 $tmp455 = frost$core$Int64$init$frost$core$Int($tmp454);
int64_t $tmp456 = $tmp455.value;
frost$core$Char8* $tmp457 = ((frost$core$Char8*) frostAlloc($tmp456 * 1));
*(&local9) = $tmp457;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:233
frost$core$Int $tmp458 = *(&local8);
frost$core$Int $tmp459 = (frost$core$Int) {1u};
int64_t $tmp460 = $tmp458.value;
int64_t $tmp461 = $tmp459.value;
int64_t $tmp462 = $tmp460 - $tmp461;
frost$core$Int $tmp463 = (frost$core$Int) {$tmp462};
*(&local10) = $tmp463;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:234
goto block39;
block39:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:235
frost$core$Char8* $tmp464 = *(&local9);
frost$core$Int $tmp465 = *(&local10);
frost$core$Int64 $tmp466 = frost$core$Int64$init$frost$core$Int($tmp465);
frost$collections$ListView* $tmp467 = *(&local4);
frost$core$UInt64 $tmp468 = *(&local7);
frost$core$UInt64 $tmp469 = *(&local3);
// begin inline call to function frost.core.UInt64.%(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:235:47
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:89
uint64_t $tmp470 = $tmp468.value;
uint64_t $tmp471 = $tmp469.value;
uint64_t $tmp472 = $tmp470 % $tmp471;
frost$core$UInt64 $tmp473 = (frost$core$UInt64) {$tmp472};
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Frost.frost:235:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:544
uint64_t $tmp474 = $tmp473.value;
frost$core$Int $tmp475 = (frost$core$Int) {((int64_t) $tmp474)};
ITable* $tmp476 = $tmp467->$class->itable;
while ($tmp476->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp476 = $tmp476->next;
}
$fn478 $tmp477 = $tmp476->methods[0];
frost$core$Object* $tmp479 = $tmp477($tmp467, $tmp475);
int64_t $tmp480 = $tmp466.value;
$tmp464[$tmp480] = ((frost$core$Char8$wrapper*) $tmp479)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp479);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:236
frost$core$UInt64 $tmp481 = *(&local7);
frost$core$UInt64 $tmp482 = *(&local3);
uint64_t $tmp483 = $tmp481.value;
uint64_t $tmp484 = $tmp482.value;
uint64_t $tmp485 = $tmp483 / $tmp484;
frost$core$UInt64 $tmp486 = (frost$core$UInt64) {$tmp485};
*(&local7) = $tmp486;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:237
frost$core$Int $tmp487 = *(&local10);
frost$core$Int $tmp488 = (frost$core$Int) {1u};
int64_t $tmp489 = $tmp487.value;
int64_t $tmp490 = $tmp488.value;
int64_t $tmp491 = $tmp489 - $tmp490;
frost$core$Int $tmp492 = (frost$core$Int) {$tmp491};
*(&local10) = $tmp492;
frost$core$UInt64 $tmp493 = *(&local7);
frost$core$UInt64 $tmp494 = (frost$core$UInt64) {0u};
uint64_t $tmp495 = $tmp493.value;
uint64_t $tmp496 = $tmp494.value;
bool $tmp497 = $tmp495 > $tmp496;
frost$core$Bit $tmp498 = (frost$core$Bit) {$tmp497};
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block39; else goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:240
bool $tmp500 = param0.value;
if ($tmp500) goto block46; else goto block45;
block46:;
frost$core$UInt64 $tmp501 = *(&local3);
frost$core$UInt64 $tmp502 = (frost$core$UInt64) {10u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Frost.frost:240:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:227
uint64_t $tmp503 = $tmp501.value;
uint64_t $tmp504 = $tmp502.value;
bool $tmp505 = $tmp503 == $tmp504;
frost$core$Bit $tmp506 = (frost$core$Bit) {$tmp505};
bool $tmp507 = $tmp506.value;
if ($tmp507) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:241
frost$core$Char8* $tmp508 = *(&local9);
frost$core$Int $tmp509 = *(&local10);
frost$core$Int64 $tmp510 = frost$core$Int64$init$frost$core$Int($tmp509);
frost$core$UInt8 $tmp511 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp512 = frost$core$Char8$init$frost$core$UInt8($tmp511);
int64_t $tmp513 = $tmp510.value;
$tmp508[$tmp513] = $tmp512;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:242
frost$core$Int $tmp514 = *(&local10);
frost$core$Int $tmp515 = (frost$core$Int) {1u};
int64_t $tmp516 = $tmp514.value;
int64_t $tmp517 = $tmp515.value;
int64_t $tmp518 = $tmp516 - $tmp517;
frost$core$Int $tmp519 = (frost$core$Int) {$tmp518};
*(&local10) = $tmp519;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:244
frost$core$Int $tmp520 = *(&local10);
frost$core$Int $tmp521 = (frost$core$Int) {1u};
int64_t $tmp522 = $tmp520.value;
int64_t $tmp523 = $tmp521.value;
int64_t $tmp524 = $tmp522 + $tmp523;
frost$core$Int $tmp525 = (frost$core$Int) {$tmp524};
*(&local10) = $tmp525;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:245
frost$core$Int $tmp526 = *(&local8);
frost$core$Int $tmp527 = *(&local10);
int64_t $tmp528 = $tmp526.value;
int64_t $tmp529 = $tmp527.value;
int64_t $tmp530 = $tmp528 - $tmp529;
frost$core$Int $tmp531 = (frost$core$Int) {$tmp530};
*(&local11) = $tmp531;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:246
frost$core$Int $tmp532 = (frost$core$Int) {0u};
frost$core$Int $tmp533 = *(&local11);
frost$core$Bit $tmp534 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp535 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp532, $tmp533, $tmp534);
frost$core$Int $tmp536 = $tmp535.min;
*(&local12) = $tmp536;
frost$core$Int $tmp537 = $tmp535.max;
frost$core$Bit $tmp538 = $tmp535.inclusive;
bool $tmp539 = $tmp538.value;
frost$core$Int $tmp540 = (frost$core$Int) {1u};
if ($tmp539) goto block51; else goto block52;
block51:;
int64_t $tmp541 = $tmp536.value;
int64_t $tmp542 = $tmp537.value;
bool $tmp543 = $tmp541 <= $tmp542;
frost$core$Bit $tmp544 = (frost$core$Bit) {$tmp543};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block48; else goto block49;
block52:;
int64_t $tmp546 = $tmp536.value;
int64_t $tmp547 = $tmp537.value;
bool $tmp548 = $tmp546 < $tmp547;
frost$core$Bit $tmp549 = (frost$core$Bit) {$tmp548};
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:247
frost$core$Char8* $tmp551 = *(&local9);
frost$core$Int $tmp552 = *(&local12);
frost$core$Int64 $tmp553 = frost$core$Int64$init$frost$core$Int($tmp552);
frost$core$Char8* $tmp554 = *(&local9);
frost$core$Int $tmp555 = *(&local12);
frost$core$Int $tmp556 = *(&local10);
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557 + $tmp558;
frost$core$Int $tmp560 = (frost$core$Int) {$tmp559};
frost$core$Int64 $tmp561 = frost$core$Int64$init$frost$core$Int($tmp560);
int64_t $tmp562 = $tmp561.value;
frost$core$Char8 $tmp563 = $tmp554[$tmp562];
int64_t $tmp564 = $tmp553.value;
$tmp551[$tmp564] = $tmp563;
frost$core$Int $tmp565 = *(&local12);
int64_t $tmp566 = $tmp537.value;
int64_t $tmp567 = $tmp565.value;
int64_t $tmp568 = $tmp566 - $tmp567;
frost$core$Int $tmp569 = (frost$core$Int) {$tmp568};
if ($tmp539) goto block54; else goto block55;
block54:;
int64_t $tmp570 = $tmp569.value;
int64_t $tmp571 = $tmp540.value;
bool $tmp572 = $tmp570 >= $tmp571;
frost$core$Bit $tmp573 = (frost$core$Bit) {$tmp572};
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block53; else goto block49;
block55:;
int64_t $tmp575 = $tmp569.value;
int64_t $tmp576 = $tmp540.value;
bool $tmp577 = $tmp575 > $tmp576;
frost$core$Bit $tmp578 = (frost$core$Bit) {$tmp577};
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block53; else goto block49;
block53:;
int64_t $tmp580 = $tmp565.value;
int64_t $tmp581 = $tmp540.value;
int64_t $tmp582 = $tmp580 + $tmp581;
frost$core$Int $tmp583 = (frost$core$Int) {$tmp582};
*(&local12) = $tmp583;
goto block48;
block49:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:249
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp584 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp585 = *(&local9);
frost$core$Int $tmp586 = *(&local11);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp584, $tmp585, $tmp586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$collections$ListView* $tmp587 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local4) = ((frost$collections$ListView*) NULL);
return $tmp584;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(frost$collections$List* param0, frost$core$Int param1, frost$core$Int param2) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:271
ITable* $tmp588 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp588->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp588 = $tmp588->next;
}
$fn590 $tmp589 = $tmp588->methods[0];
frost$core$Object* $tmp591 = $tmp589(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp591);
frost$core$Object* $tmp592 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp592);
*(&local0) = $tmp591;
frost$core$Frost$unref$frost$core$Object$Q($tmp591);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:272
ITable* $tmp593 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp593->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp593 = $tmp593->next;
}
$fn595 $tmp594 = $tmp593->methods[0];
frost$core$Object* $tmp596 = $tmp594(((frost$collections$ListView*) param0), param2);
ITable* $tmp597 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp597->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp597 = $tmp597->next;
}
$fn599 $tmp598 = $tmp597->methods[0];
$tmp598(((frost$collections$ListWriter*) param0), param1, $tmp596);
frost$core$Frost$unref$frost$core$Object$Q($tmp596);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:273
frost$core$Object* $tmp600 = *(&local0);
ITable* $tmp601 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp601->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp601 = $tmp601->next;
}
$fn603 $tmp602 = $tmp601->methods[0];
$tmp602(((frost$collections$ListWriter*) param0), param2, $tmp600);
frost$core$Object* $tmp604 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp604);
*(&local0) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$Int param1, frost$core$Int param2, frost$core$MutableMethod* param3) {

frost$core$Int local0;
frost$core$Object* local1 = NULL;
frost$core$Int local2;
frost$core$Int local3;
frost$core$Bit local4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:280
int64_t $tmp605 = param1.value;
int64_t $tmp606 = param2.value;
bool $tmp607 = $tmp605 >= $tmp606;
frost$core$Bit $tmp608 = (frost$core$Bit) {$tmp607};
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:281
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:283
int64_t $tmp610 = param2.value;
int64_t $tmp611 = param1.value;
int64_t $tmp612 = $tmp610 - $tmp611;
frost$core$Int $tmp613 = (frost$core$Int) {$tmp612};
frost$core$Int $tmp614 = (frost$core$Int) {2u};
int64_t $tmp615 = $tmp613.value;
int64_t $tmp616 = $tmp614.value;
int64_t $tmp617 = $tmp615 / $tmp616;
frost$core$Int $tmp618 = (frost$core$Int) {$tmp617};
int64_t $tmp619 = param1.value;
int64_t $tmp620 = $tmp618.value;
int64_t $tmp621 = $tmp619 + $tmp620;
frost$core$Int $tmp622 = (frost$core$Int) {$tmp621};
*(&local0) = $tmp622;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:284
frost$core$Int $tmp623 = *(&local0);
ITable* $tmp624 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp624->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp624 = $tmp624->next;
}
$fn626 $tmp625 = $tmp624->methods[0];
frost$core$Object* $tmp627 = $tmp625(((frost$collections$ListView*) param0), $tmp623);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp627);
frost$core$Object* $tmp628 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp628);
*(&local1) = $tmp627;
frost$core$Frost$unref$frost$core$Object$Q($tmp627);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:285
frost$core$Int $tmp629 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(param0, param2, $tmp629);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:286
*(&local2) = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:287
frost$core$Int $tmp630 = (frost$core$Int) {1u};
int64_t $tmp631 = param2.value;
int64_t $tmp632 = $tmp630.value;
int64_t $tmp633 = $tmp631 - $tmp632;
frost$core$Int $tmp634 = (frost$core$Int) {$tmp633};
frost$core$Bit $tmp635 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$Int$GT $tmp636 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(param1, $tmp634, $tmp635);
frost$core$Int $tmp637 = $tmp636.min;
*(&local3) = $tmp637;
frost$core$Int $tmp638 = $tmp636.max;
frost$core$Bit $tmp639 = $tmp636.inclusive;
bool $tmp640 = $tmp639.value;
frost$core$Int $tmp641 = (frost$core$Int) {1u};
if ($tmp640) goto block6; else goto block7;
block6:;
int64_t $tmp642 = $tmp637.value;
int64_t $tmp643 = $tmp638.value;
bool $tmp644 = $tmp642 <= $tmp643;
frost$core$Bit $tmp645 = (frost$core$Bit) {$tmp644};
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block3; else goto block4;
block7:;
int64_t $tmp647 = $tmp637.value;
int64_t $tmp648 = $tmp638.value;
bool $tmp649 = $tmp647 < $tmp648;
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:288
frost$core$Int $tmp652 = *(&local3);
ITable* $tmp653 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp653->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp653 = $tmp653->next;
}
$fn655 $tmp654 = $tmp653->methods[0];
frost$core$Object* $tmp656 = $tmp654(((frost$collections$ListView*) param0), $tmp652);
frost$core$Object* $tmp657 = *(&local1);
frost$core$Int8** $tmp658 = &param3->pointer;
frost$core$Int8* $tmp659 = *$tmp658;
frost$core$Object** $tmp660 = &param3->target;
frost$core$Object* $tmp661 = *$tmp660;
bool $tmp662 = $tmp661 != ((frost$core$Object*) NULL);
if ($tmp662) goto block10; else goto block11;
block11:;
frost$core$Bit $tmp664 = (($fn663) $tmp659)($tmp656, $tmp657);
*(&local4) = $tmp664;
goto block12;
block10:;
frost$core$Bit $tmp666 = (($fn665) $tmp659)($tmp661, $tmp656, $tmp657);
*(&local4) = $tmp666;
goto block12;
block12:;
frost$core$Bit $tmp667 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Frost.frost:288:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp668 = $tmp667.value;
bool $tmp669 = !$tmp668;
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669};
bool $tmp671 = $tmp670.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp656);
if ($tmp671) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:289
frost$core$Int $tmp672 = *(&local3);
frost$core$Int $tmp673 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(param0, $tmp672, $tmp673);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:290
frost$core$Int $tmp674 = *(&local2);
frost$core$Int $tmp675 = (frost$core$Int) {1u};
int64_t $tmp676 = $tmp674.value;
int64_t $tmp677 = $tmp675.value;
int64_t $tmp678 = $tmp676 + $tmp677;
frost$core$Int $tmp679 = (frost$core$Int) {$tmp678};
*(&local2) = $tmp679;
goto block9;
block9:;
frost$core$Int $tmp680 = *(&local3);
int64_t $tmp681 = $tmp638.value;
int64_t $tmp682 = $tmp680.value;
int64_t $tmp683 = $tmp681 - $tmp682;
frost$core$Int $tmp684 = (frost$core$Int) {$tmp683};
if ($tmp640) goto block15; else goto block16;
block15:;
int64_t $tmp685 = $tmp684.value;
int64_t $tmp686 = $tmp641.value;
bool $tmp687 = $tmp685 >= $tmp686;
frost$core$Bit $tmp688 = (frost$core$Bit) {$tmp687};
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block14; else goto block4;
block16:;
int64_t $tmp690 = $tmp684.value;
int64_t $tmp691 = $tmp641.value;
bool $tmp692 = $tmp690 > $tmp691;
frost$core$Bit $tmp693 = (frost$core$Bit) {$tmp692};
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block14; else goto block4;
block14:;
int64_t $tmp695 = $tmp680.value;
int64_t $tmp696 = $tmp641.value;
int64_t $tmp697 = $tmp695 + $tmp696;
frost$core$Int $tmp698 = (frost$core$Int) {$tmp697};
*(&local3) = $tmp698;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:293
frost$core$Int $tmp699 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(param0, $tmp699, param2);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:294
frost$core$Int $tmp700 = *(&local2);
frost$core$Int $tmp701 = (frost$core$Int) {1u};
int64_t $tmp702 = $tmp700.value;
int64_t $tmp703 = $tmp701.value;
int64_t $tmp704 = $tmp702 - $tmp703;
frost$core$Int $tmp705 = (frost$core$Int) {$tmp704};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, param1, $tmp705, param3);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:295
frost$core$Int $tmp706 = *(&local2);
frost$core$Int $tmp707 = (frost$core$Int) {1u};
int64_t $tmp708 = $tmp706.value;
int64_t $tmp709 = $tmp707.value;
int64_t $tmp710 = $tmp708 + $tmp709;
frost$core$Int $tmp711 = (frost$core$Int) {$tmp710};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp711, param2, param3);
frost$core$Object* $tmp712 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp712);
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

