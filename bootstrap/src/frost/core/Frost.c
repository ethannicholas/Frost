#include "frost/core/Frost.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Maybe.h"
#include "frost/core/Int64.h"
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
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/collections/ListView.h"
#include "frost/core/String/UTF8List.h"
#include "frost/core/Comparable.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
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
typedef frost$core$Int64 (*$fn232)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn355)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn469)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn582)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn587)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn591)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef void (*$fn595)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Object* (*$fn618)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn649)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn657)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn659)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

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
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 3330193207084279677, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, -1839289420917840067, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 3626147090372997348, NULL };

void frost$core$Frost$init(frost$core$Frost* param0) {

return;

}
frost$core$Maybe* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$Object* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:21
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp2 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp3 = (frost$core$Int64) {0u};
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp2, $tmp3, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return $tmp2;

}
frost$core$Maybe* frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:27
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp4 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp5 = (frost$core$Int64) {1u};
FROST_ASSERT(24 == sizeof(frost$core$Error));
frost$core$Error* $tmp6 = (frost$core$Error*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Error$class);
frost$core$Error$init$frost$core$String($tmp6, param0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp4, $tmp5, $tmp6);
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
frost$core$Int64 $tmp10 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s11, $tmp10);
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
frost$core$Int64 $tmp34 = (frost$core$Int64) {58u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s35, $tmp34);
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
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:85
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:86
frost$io$OutputStream* $tmp59 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp60 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s61, param0);
frost$core$String* $tmp62 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp60, &$s63);
frost$core$Int64$wrapper* $tmp64;
$tmp64 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
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
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$String* param2) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:95
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:96
frost$io$OutputStream* $tmp75 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s77, param0);
frost$core$String* $tmp78 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp76, &$s79);
frost$core$Int64$wrapper* $tmp80;
$tmp80 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:131
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:131
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:131
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
frost$core$UInt64$nullable frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int64 param1) {

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
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Frost.frost:126:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp180 = param1.value;
frost$core$UInt64 $tmp181 = (frost$core$UInt64) {((uint64_t) $tmp180)};
*(&local1) = $tmp181;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:127
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:127:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp182 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp183 = &(&local3)->value;
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
frost$core$Int64* $tmp188 = &param0->_length;
frost$core$Int64 $tmp189 = *$tmp188;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp190 = &(&local6)->value;
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
frost$core$Int64$nullable local5;
frost$core$Char32 local6;
frost$core$String$Index local7;
frost$core$String$Index local8;
frost$core$String$Index local9;
frost$core$String$Index local10;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:162
// begin inline call to function frost.core.String.get_length():frost.core.Int64 from Frost.frost:162:25
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
frost$core$Int64 $tmp233 = $tmp231($tmp229);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Int64 $tmp234 = (frost$core$Int64) {2u};
int64_t $tmp235 = $tmp233.value;
int64_t $tmp236 = $tmp234.value;
bool $tmp237 = $tmp235 >= $tmp236;
frost$core$Bit $tmp238 = (frost$core$Bit) {$tmp237};
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp240 = (frost$core$Int64) {162u};
frost$core$String* $tmp241 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s242, param1);
frost$core$String* $tmp243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp241, &$s244);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s245, $tmp240, $tmp243);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:163
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:163:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp246 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp247 = &(&local1)->value;
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
frost$core$Int64 $tmp274 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp275 = &(&local4)->value;
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
frost$core$Int64$nullable $tmp283 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp282);
*(&local5) = $tmp283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:173
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:174
frost$core$String$Index $tmp284 = *(&local2);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:174:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp285 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp286 = &(&local8)->value;
*$tmp286 = $tmp285;
frost$core$String$Index $tmp287 = *(&local8);
*(&local7) = $tmp287;
frost$core$String$Index $tmp288 = *(&local7);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from Frost.frost:174:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:66
frost$core$Int64 $tmp289 = $tmp284.value;
frost$core$Int64 $tmp290 = $tmp288.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp291 = $tmp289.value;
int64_t $tmp292 = $tmp290.value;
bool $tmp293 = $tmp291 == $tmp292;
frost$core$Bit $tmp294 = (frost$core$Bit) {$tmp293};
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:175
frost$core$Int32 $tmp296 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp297 = frost$core$Char32$init$frost$core$Int32($tmp296);
*(&local6) = $tmp297;
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:178
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:178:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp298 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp299 = &(&local10)->value;
*$tmp299 = $tmp298;
frost$core$String$Index $tmp300 = *(&local10);
*(&local9) = $tmp300;
frost$core$String$Index $tmp301 = *(&local9);
frost$core$Char32 $tmp302 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp301);
*(&local6) = $tmp302;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:180
frost$core$String$Index $tmp303 = *(&local2);
frost$core$Char32 $tmp304 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp303);
frost$core$Int32 $tmp305 = (frost$core$Int32) {60u};
frost$core$Char32 $tmp306 = frost$core$Char32$init$frost$core$Int32($tmp305);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:181:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp307 = $tmp304.value;
int32_t $tmp308 = $tmp306.value;
bool $tmp309 = $tmp307 == $tmp308;
frost$core$Bit $tmp310 = (frost$core$Bit) {$tmp309};
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:181
frost$core$Int64$nullable $tmp312 = *(&local5);
frost$core$Char32 $tmp313 = *(&local6);
frost$core$String* $tmp314 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp312.value), $tmp313);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
return $tmp314;
block27:;
frost$core$Int32 $tmp315 = (frost$core$Int32) {94u};
frost$core$Char32 $tmp316 = frost$core$Char32$init$frost$core$Int32($tmp315);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:182:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp317 = $tmp304.value;
int32_t $tmp318 = $tmp316.value;
bool $tmp319 = $tmp317 == $tmp318;
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319};
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:182
frost$core$Int64$nullable $tmp322 = *(&local5);
frost$core$Char32 $tmp323 = *(&local6);
frost$core$String* $tmp324 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp322.value), $tmp323);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
return $tmp324;
block30:;
frost$core$Int32 $tmp325 = (frost$core$Int32) {62u};
frost$core$Char32 $tmp326 = frost$core$Char32$init$frost$core$Int32($tmp325);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:183:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp327 = $tmp304.value;
int32_t $tmp328 = $tmp326.value;
bool $tmp329 = $tmp327 == $tmp328;
frost$core$Bit $tmp330 = (frost$core$Bit) {$tmp329};
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:183
frost$core$Int64$nullable $tmp332 = *(&local5);
frost$core$Char32 $tmp333 = *(&local6);
frost$core$String* $tmp334 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp332.value), $tmp333);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
return $tmp334;
block33:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:184
frost$core$Int64 $tmp335 = (frost$core$Int64) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s336, $tmp335);
abort(); // unreachable
block25:;
goto block35;
block35:;

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
frost$core$Int64 local8;
frost$core$Char8* local9;
frost$core$Int64 local10;
frost$core$Int64 local11;
frost$core$Int64 local12;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:198
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:198:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp337 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp338 = &(&local1)->value;
*$tmp338 = $tmp337;
frost$core$String$Index $tmp339 = *(&local1);
*(&local0) = $tmp339;
frost$core$String$Index $tmp340 = *(&local0);
*(&local2) = $tmp340;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:199
frost$core$UInt64 $tmp341 = (frost$core$UInt64) {10u};
*(&local3) = $tmp341;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:200
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:200:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp342 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp342, &$s343);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp342)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp342)));
frost$collections$ListView* $tmp344 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local4) = ((frost$collections$ListView*) $tmp342);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp342)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:201
frost$core$String$Index $tmp345 = *(&local2);
frost$core$String$Index$wrapper* $tmp346;
$tmp346 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp346->value = $tmp345;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Frost.frost:201:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp347 = &param3->_length;
frost$core$Int64 $tmp348 = *$tmp347;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp349 = &(&local6)->value;
*$tmp349 = $tmp348;
frost$core$String$Index $tmp350 = *(&local6);
*(&local5) = $tmp350;
frost$core$String$Index $tmp351 = *(&local5);
frost$core$String$Index$wrapper* $tmp352;
$tmp352 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp352->value = $tmp351;
ITable* $tmp353 = ((frost$core$Comparable*) $tmp346)->$class->itable;
while ($tmp353->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp353 = $tmp353->next;
}
$fn355 $tmp354 = $tmp353->methods[1];
frost$core$Bit $tmp356 = $tmp354(((frost$core$Comparable*) $tmp346), ((frost$core$Comparable*) $tmp352));
bool $tmp357 = $tmp356.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp352)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp346)));
if ($tmp357) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:202
frost$core$String$Index $tmp358 = *(&local2);
frost$core$Char32 $tmp359 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp358);
frost$core$Int32 $tmp360 = (frost$core$Int32) {98u};
frost$core$Char32 $tmp361 = frost$core$Char32$init$frost$core$Int32($tmp360);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:203:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp362 = $tmp359.value;
int32_t $tmp363 = $tmp361.value;
bool $tmp364 = $tmp362 == $tmp363;
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364};
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block9; else goto block10;
block10:;
frost$core$Int32 $tmp367 = (frost$core$Int32) {66u};
frost$core$Char32 $tmp368 = frost$core$Char32$init$frost$core$Int32($tmp367);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:203:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp369 = $tmp359.value;
int32_t $tmp370 = $tmp368.value;
bool $tmp371 = $tmp369 == $tmp370;
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block9; else goto block12;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:204
frost$core$UInt64 $tmp374 = (frost$core$UInt64) {2u};
*(&local3) = $tmp374;
goto block8;
block12:;
frost$core$Int32 $tmp375 = (frost$core$Int32) {111u};
frost$core$Char32 $tmp376 = frost$core$Char32$init$frost$core$Int32($tmp375);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:206:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp377 = $tmp359.value;
int32_t $tmp378 = $tmp376.value;
bool $tmp379 = $tmp377 == $tmp378;
frost$core$Bit $tmp380 = (frost$core$Bit) {$tmp379};
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block14; else goto block15;
block15:;
frost$core$Int32 $tmp382 = (frost$core$Int32) {79u};
frost$core$Char32 $tmp383 = frost$core$Char32$init$frost$core$Int32($tmp382);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:206:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp384 = $tmp359.value;
int32_t $tmp385 = $tmp383.value;
bool $tmp386 = $tmp384 == $tmp385;
frost$core$Bit $tmp387 = (frost$core$Bit) {$tmp386};
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block14; else goto block17;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:207
frost$core$UInt64 $tmp389 = (frost$core$UInt64) {8u};
*(&local3) = $tmp389;
goto block8;
block17:;
frost$core$Int32 $tmp390 = (frost$core$Int32) {100u};
frost$core$Char32 $tmp391 = frost$core$Char32$init$frost$core$Int32($tmp390);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:209:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp392 = $tmp359.value;
int32_t $tmp393 = $tmp391.value;
bool $tmp394 = $tmp392 == $tmp393;
frost$core$Bit $tmp395 = (frost$core$Bit) {$tmp394};
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block19; else goto block20;
block20:;
frost$core$Int32 $tmp397 = (frost$core$Int32) {68u};
frost$core$Char32 $tmp398 = frost$core$Char32$init$frost$core$Int32($tmp397);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:209:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp399 = $tmp359.value;
int32_t $tmp400 = $tmp398.value;
bool $tmp401 = $tmp399 == $tmp400;
frost$core$Bit $tmp402 = (frost$core$Bit) {$tmp401};
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block19; else goto block22;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:210
frost$core$UInt64 $tmp404 = (frost$core$UInt64) {10u};
*(&local3) = $tmp404;
goto block8;
block22:;
frost$core$Int32 $tmp405 = (frost$core$Int32) {120u};
frost$core$Char32 $tmp406 = frost$core$Char32$init$frost$core$Int32($tmp405);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:212:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp407 = $tmp359.value;
int32_t $tmp408 = $tmp406.value;
bool $tmp409 = $tmp407 == $tmp408;
frost$core$Bit $tmp410 = (frost$core$Bit) {$tmp409};
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:213
frost$core$UInt64 $tmp412 = (frost$core$UInt64) {16u};
*(&local3) = $tmp412;
goto block8;
block25:;
frost$core$Int32 $tmp413 = (frost$core$Int32) {88u};
frost$core$Char32 $tmp414 = frost$core$Char32$init$frost$core$Int32($tmp413);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:215:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp415 = $tmp359.value;
int32_t $tmp416 = $tmp414.value;
bool $tmp417 = $tmp415 == $tmp416;
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417};
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:216
frost$core$UInt64 $tmp420 = (frost$core$UInt64) {16u};
*(&local3) = $tmp420;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:217
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:217:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp421 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp421, &$s422);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp421)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp421)));
frost$collections$ListView* $tmp423 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
*(&local4) = ((frost$collections$ListView*) $tmp421);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp421)));
goto block8;
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:220
frost$core$Int64 $tmp424 = (frost$core$Int64) {220u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s425, $tmp424, &$s426);
abort(); // unreachable
block8:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:224
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:225
bool $tmp427 = param0.value;
if ($tmp427) goto block34; else goto block33;
block34:;
frost$core$UInt64 $tmp428 = *(&local3);
frost$core$UInt64 $tmp429 = (frost$core$UInt64) {10u};
uint64_t $tmp430 = $tmp428.value;
uint64_t $tmp431 = $tmp429.value;
bool $tmp432 = $tmp430 != $tmp431;
frost$core$Bit $tmp433 = (frost$core$Bit) {$tmp432};
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block31; else goto block33;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:226
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Frost.frost:226:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:500
uint64_t $tmp435 = param1.value;
frost$core$Int64 $tmp436 = (frost$core$Int64) {((int64_t) $tmp435)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Frost.frost:226:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:84
int64_t $tmp437 = $tmp436.value;
int64_t $tmp438 = -$tmp437;
frost$core$Int64 $tmp439 = (frost$core$Int64) {$tmp438};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Frost.frost:226:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp440 = $tmp439.value;
frost$core$UInt64 $tmp441 = (frost$core$UInt64) {((uint64_t) $tmp440)};
// begin inline call to function frost.core.UInt64.&&(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:226:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:160
uint64_t $tmp442 = $tmp441.value;
uint64_t $tmp443 = param2.value;
uint64_t $tmp444 = $tmp442 & $tmp443;
frost$core$UInt64 $tmp445 = (frost$core$UInt64) {$tmp444};
*(&local7) = $tmp445;
goto block32;
block33:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:229
*(&local7) = param1;
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:231
frost$core$Int64 $tmp446 = (frost$core$Int64) {64u};
*(&local8) = $tmp446;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:232
frost$core$Int64 $tmp447 = *(&local8);
int64_t $tmp448 = $tmp447.value;
frost$core$Char8* $tmp449 = ((frost$core$Char8*) frostAlloc($tmp448 * 1));
*(&local9) = $tmp449;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:233
frost$core$Int64 $tmp450 = *(&local8);
frost$core$Int64 $tmp451 = (frost$core$Int64) {1u};
int64_t $tmp452 = $tmp450.value;
int64_t $tmp453 = $tmp451.value;
int64_t $tmp454 = $tmp452 - $tmp453;
frost$core$Int64 $tmp455 = (frost$core$Int64) {$tmp454};
*(&local10) = $tmp455;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:234
goto block39;
block39:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:235
frost$core$Char8* $tmp456 = *(&local9);
frost$core$Int64 $tmp457 = *(&local10);
frost$collections$ListView* $tmp458 = *(&local4);
frost$core$UInt64 $tmp459 = *(&local7);
frost$core$UInt64 $tmp460 = *(&local3);
// begin inline call to function frost.core.UInt64.%(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:235:47
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:83
uint64_t $tmp461 = $tmp459.value;
uint64_t $tmp462 = $tmp460.value;
uint64_t $tmp463 = $tmp461 % $tmp462;
frost$core$UInt64 $tmp464 = (frost$core$UInt64) {$tmp463};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Frost.frost:235:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:500
uint64_t $tmp465 = $tmp464.value;
frost$core$Int64 $tmp466 = (frost$core$Int64) {((int64_t) $tmp465)};
ITable* $tmp467 = $tmp458->$class->itable;
while ($tmp467->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp467 = $tmp467->next;
}
$fn469 $tmp468 = $tmp467->methods[0];
frost$core$Object* $tmp470 = $tmp468($tmp458, $tmp466);
int64_t $tmp471 = $tmp457.value;
$tmp456[$tmp471] = ((frost$core$Char8$wrapper*) $tmp470)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp470);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:236
frost$core$UInt64 $tmp472 = *(&local7);
frost$core$UInt64 $tmp473 = *(&local3);
uint64_t $tmp474 = $tmp472.value;
uint64_t $tmp475 = $tmp473.value;
uint64_t $tmp476 = $tmp474 / $tmp475;
frost$core$UInt64 $tmp477 = (frost$core$UInt64) {$tmp476};
*(&local7) = $tmp477;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:237
frost$core$Int64 $tmp478 = *(&local10);
frost$core$Int64 $tmp479 = (frost$core$Int64) {1u};
int64_t $tmp480 = $tmp478.value;
int64_t $tmp481 = $tmp479.value;
int64_t $tmp482 = $tmp480 - $tmp481;
frost$core$Int64 $tmp483 = (frost$core$Int64) {$tmp482};
*(&local10) = $tmp483;
frost$core$UInt64 $tmp484 = *(&local7);
frost$core$UInt64 $tmp485 = (frost$core$UInt64) {0u};
uint64_t $tmp486 = $tmp484.value;
uint64_t $tmp487 = $tmp485.value;
bool $tmp488 = $tmp486 > $tmp487;
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488};
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block39; else goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:240
bool $tmp491 = param0.value;
if ($tmp491) goto block46; else goto block45;
block46:;
frost$core$UInt64 $tmp492 = *(&local3);
frost$core$UInt64 $tmp493 = (frost$core$UInt64) {10u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Frost.frost:240:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:221
uint64_t $tmp494 = $tmp492.value;
uint64_t $tmp495 = $tmp493.value;
bool $tmp496 = $tmp494 == $tmp495;
frost$core$Bit $tmp497 = (frost$core$Bit) {$tmp496};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:241
frost$core$Char8* $tmp499 = *(&local9);
frost$core$Int64 $tmp500 = *(&local10);
frost$core$UInt8 $tmp501 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp502 = frost$core$Char8$init$frost$core$UInt8($tmp501);
int64_t $tmp503 = $tmp500.value;
$tmp499[$tmp503] = $tmp502;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:242
frost$core$Int64 $tmp504 = *(&local10);
frost$core$Int64 $tmp505 = (frost$core$Int64) {1u};
int64_t $tmp506 = $tmp504.value;
int64_t $tmp507 = $tmp505.value;
int64_t $tmp508 = $tmp506 - $tmp507;
frost$core$Int64 $tmp509 = (frost$core$Int64) {$tmp508};
*(&local10) = $tmp509;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:244
frost$core$Int64 $tmp510 = *(&local10);
frost$core$Int64 $tmp511 = (frost$core$Int64) {1u};
int64_t $tmp512 = $tmp510.value;
int64_t $tmp513 = $tmp511.value;
int64_t $tmp514 = $tmp512 + $tmp513;
frost$core$Int64 $tmp515 = (frost$core$Int64) {$tmp514};
*(&local10) = $tmp515;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:245
frost$core$Int64 $tmp516 = *(&local8);
frost$core$Int64 $tmp517 = *(&local10);
int64_t $tmp518 = $tmp516.value;
int64_t $tmp519 = $tmp517.value;
int64_t $tmp520 = $tmp518 - $tmp519;
frost$core$Int64 $tmp521 = (frost$core$Int64) {$tmp520};
*(&local11) = $tmp521;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:246
frost$core$Int64 $tmp522 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp523 = *(&local11);
frost$core$Bit $tmp524 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp525 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp522, $tmp523, $tmp524);
frost$core$Int64 $tmp526 = $tmp525.min;
*(&local12) = $tmp526;
frost$core$Int64 $tmp527 = $tmp525.max;
frost$core$Bit $tmp528 = $tmp525.inclusive;
bool $tmp529 = $tmp528.value;
frost$core$Int64 $tmp530 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp531 = $tmp530.value;
frost$core$UInt64 $tmp532 = (frost$core$UInt64) {((uint64_t) $tmp531)};
if ($tmp529) goto block52; else goto block53;
block52:;
int64_t $tmp533 = $tmp526.value;
int64_t $tmp534 = $tmp527.value;
bool $tmp535 = $tmp533 <= $tmp534;
frost$core$Bit $tmp536 = (frost$core$Bit) {$tmp535};
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block49; else goto block50;
block53:;
int64_t $tmp538 = $tmp526.value;
int64_t $tmp539 = $tmp527.value;
bool $tmp540 = $tmp538 < $tmp539;
frost$core$Bit $tmp541 = (frost$core$Bit) {$tmp540};
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:247
frost$core$Char8* $tmp543 = *(&local9);
frost$core$Int64 $tmp544 = *(&local12);
frost$core$Char8* $tmp545 = *(&local9);
frost$core$Int64 $tmp546 = *(&local12);
frost$core$Int64 $tmp547 = *(&local10);
int64_t $tmp548 = $tmp546.value;
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548 + $tmp549;
frost$core$Int64 $tmp551 = (frost$core$Int64) {$tmp550};
int64_t $tmp552 = $tmp551.value;
frost$core$Char8 $tmp553 = $tmp545[$tmp552];
int64_t $tmp554 = $tmp544.value;
$tmp543[$tmp554] = $tmp553;
frost$core$Int64 $tmp555 = *(&local12);
int64_t $tmp556 = $tmp527.value;
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556 - $tmp557;
frost$core$Int64 $tmp559 = (frost$core$Int64) {$tmp558};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp560 = $tmp559.value;
frost$core$UInt64 $tmp561 = (frost$core$UInt64) {((uint64_t) $tmp560)};
if ($tmp529) goto block56; else goto block57;
block56:;
uint64_t $tmp562 = $tmp561.value;
uint64_t $tmp563 = $tmp532.value;
bool $tmp564 = $tmp562 >= $tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block54; else goto block50;
block57:;
uint64_t $tmp567 = $tmp561.value;
uint64_t $tmp568 = $tmp532.value;
bool $tmp569 = $tmp567 > $tmp568;
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block54; else goto block50;
block54:;
int64_t $tmp572 = $tmp555.value;
int64_t $tmp573 = $tmp530.value;
int64_t $tmp574 = $tmp572 + $tmp573;
frost$core$Int64 $tmp575 = (frost$core$Int64) {$tmp574};
*(&local12) = $tmp575;
goto block49;
block50:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:249
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp576 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp577 = *(&local9);
frost$core$Int64 $tmp578 = *(&local11);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp576, $tmp577, $tmp578);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$collections$ListView* $tmp579 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local4) = ((frost$collections$ListView*) NULL);
return $tmp576;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:271
ITable* $tmp580 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp580->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp580 = $tmp580->next;
}
$fn582 $tmp581 = $tmp580->methods[0];
frost$core$Object* $tmp583 = $tmp581(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp583);
frost$core$Object* $tmp584 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp584);
*(&local0) = $tmp583;
frost$core$Frost$unref$frost$core$Object$Q($tmp583);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:272
ITable* $tmp585 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp585->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp585 = $tmp585->next;
}
$fn587 $tmp586 = $tmp585->methods[0];
frost$core$Object* $tmp588 = $tmp586(((frost$collections$ListView*) param0), param2);
ITable* $tmp589 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp589->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp589 = $tmp589->next;
}
$fn591 $tmp590 = $tmp589->methods[0];
$tmp590(((frost$collections$ListWriter*) param0), param1, $tmp588);
frost$core$Frost$unref$frost$core$Object$Q($tmp588);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:273
frost$core$Object* $tmp592 = *(&local0);
ITable* $tmp593 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp593->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp593 = $tmp593->next;
}
$fn595 $tmp594 = $tmp593->methods[0];
$tmp594(((frost$collections$ListWriter*) param0), param2, $tmp592);
frost$core$Object* $tmp596 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp596);
*(&local0) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2, frost$core$MutableMethod* param3) {

frost$core$Int64 local0;
frost$core$Object* local1 = NULL;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Bit local4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:280
int64_t $tmp597 = param1.value;
int64_t $tmp598 = param2.value;
bool $tmp599 = $tmp597 >= $tmp598;
frost$core$Bit $tmp600 = (frost$core$Bit) {$tmp599};
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:281
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:283
int64_t $tmp602 = param2.value;
int64_t $tmp603 = param1.value;
int64_t $tmp604 = $tmp602 - $tmp603;
frost$core$Int64 $tmp605 = (frost$core$Int64) {$tmp604};
frost$core$Int64 $tmp606 = (frost$core$Int64) {2u};
int64_t $tmp607 = $tmp605.value;
int64_t $tmp608 = $tmp606.value;
int64_t $tmp609 = $tmp607 / $tmp608;
frost$core$Int64 $tmp610 = (frost$core$Int64) {$tmp609};
int64_t $tmp611 = param1.value;
int64_t $tmp612 = $tmp610.value;
int64_t $tmp613 = $tmp611 + $tmp612;
frost$core$Int64 $tmp614 = (frost$core$Int64) {$tmp613};
*(&local0) = $tmp614;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:284
frost$core$Int64 $tmp615 = *(&local0);
ITable* $tmp616 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp616->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp616 = $tmp616->next;
}
$fn618 $tmp617 = $tmp616->methods[0];
frost$core$Object* $tmp619 = $tmp617(((frost$collections$ListView*) param0), $tmp615);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp619);
frost$core$Object* $tmp620 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp620);
*(&local1) = $tmp619;
frost$core$Frost$unref$frost$core$Object$Q($tmp619);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:285
frost$core$Int64 $tmp621 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, param2, $tmp621);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:286
*(&local2) = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:287
frost$core$Int64 $tmp622 = (frost$core$Int64) {1u};
int64_t $tmp623 = param2.value;
int64_t $tmp624 = $tmp622.value;
int64_t $tmp625 = $tmp623 - $tmp624;
frost$core$Int64 $tmp626 = (frost$core$Int64) {$tmp625};
frost$core$Bit $tmp627 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$Int64$GT $tmp628 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp626, $tmp627);
frost$core$Int64 $tmp629 = $tmp628.min;
*(&local3) = $tmp629;
frost$core$Int64 $tmp630 = $tmp628.max;
frost$core$Bit $tmp631 = $tmp628.inclusive;
bool $tmp632 = $tmp631.value;
frost$core$Int64 $tmp633 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp634 = $tmp633.value;
frost$core$UInt64 $tmp635 = (frost$core$UInt64) {((uint64_t) $tmp634)};
if ($tmp632) goto block7; else goto block8;
block7:;
int64_t $tmp636 = $tmp629.value;
int64_t $tmp637 = $tmp630.value;
bool $tmp638 = $tmp636 <= $tmp637;
frost$core$Bit $tmp639 = (frost$core$Bit) {$tmp638};
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block4; else goto block5;
block8:;
int64_t $tmp641 = $tmp629.value;
int64_t $tmp642 = $tmp630.value;
bool $tmp643 = $tmp641 < $tmp642;
frost$core$Bit $tmp644 = (frost$core$Bit) {$tmp643};
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:288
frost$core$Int64 $tmp646 = *(&local3);
ITable* $tmp647 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp647->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp647 = $tmp647->next;
}
$fn649 $tmp648 = $tmp647->methods[0];
frost$core$Object* $tmp650 = $tmp648(((frost$collections$ListView*) param0), $tmp646);
frost$core$Object* $tmp651 = *(&local1);
frost$core$Int8** $tmp652 = &param3->pointer;
frost$core$Int8* $tmp653 = *$tmp652;
frost$core$Object** $tmp654 = &param3->target;
frost$core$Object* $tmp655 = *$tmp654;
bool $tmp656 = $tmp655 != ((frost$core$Object*) NULL);
if ($tmp656) goto block11; else goto block12;
block12:;
frost$core$Bit $tmp658 = (($fn657) $tmp653)($tmp650, $tmp651);
*(&local4) = $tmp658;
goto block13;
block11:;
frost$core$Bit $tmp660 = (($fn659) $tmp653)($tmp655, $tmp650, $tmp651);
*(&local4) = $tmp660;
goto block13;
block13:;
frost$core$Bit $tmp661 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Frost.frost:288:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp662 = $tmp661.value;
bool $tmp663 = !$tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp650);
if ($tmp665) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:289
frost$core$Int64 $tmp666 = *(&local3);
frost$core$Int64 $tmp667 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp666, $tmp667);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:290
frost$core$Int64 $tmp668 = *(&local2);
frost$core$Int64 $tmp669 = (frost$core$Int64) {1u};
int64_t $tmp670 = $tmp668.value;
int64_t $tmp671 = $tmp669.value;
int64_t $tmp672 = $tmp670 + $tmp671;
frost$core$Int64 $tmp673 = (frost$core$Int64) {$tmp672};
*(&local2) = $tmp673;
goto block10;
block10:;
frost$core$Int64 $tmp674 = *(&local3);
int64_t $tmp675 = $tmp630.value;
int64_t $tmp676 = $tmp674.value;
int64_t $tmp677 = $tmp675 - $tmp676;
frost$core$Int64 $tmp678 = (frost$core$Int64) {$tmp677};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp679 = $tmp678.value;
frost$core$UInt64 $tmp680 = (frost$core$UInt64) {((uint64_t) $tmp679)};
if ($tmp632) goto block17; else goto block18;
block17:;
uint64_t $tmp681 = $tmp680.value;
uint64_t $tmp682 = $tmp635.value;
bool $tmp683 = $tmp681 >= $tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block15; else goto block5;
block18:;
uint64_t $tmp686 = $tmp680.value;
uint64_t $tmp687 = $tmp635.value;
bool $tmp688 = $tmp686 > $tmp687;
frost$core$Bit $tmp689 = (frost$core$Bit) {$tmp688};
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block15; else goto block5;
block15:;
int64_t $tmp691 = $tmp674.value;
int64_t $tmp692 = $tmp633.value;
int64_t $tmp693 = $tmp691 + $tmp692;
frost$core$Int64 $tmp694 = (frost$core$Int64) {$tmp693};
*(&local3) = $tmp694;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:293
frost$core$Int64 $tmp695 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp695, param2);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:294
frost$core$Int64 $tmp696 = *(&local2);
frost$core$Int64 $tmp697 = (frost$core$Int64) {1u};
int64_t $tmp698 = $tmp696.value;
int64_t $tmp699 = $tmp697.value;
int64_t $tmp700 = $tmp698 - $tmp699;
frost$core$Int64 $tmp701 = (frost$core$Int64) {$tmp700};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, param1, $tmp701, param3);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:295
frost$core$Int64 $tmp702 = *(&local2);
frost$core$Int64 $tmp703 = (frost$core$Int64) {1u};
int64_t $tmp704 = $tmp702.value;
int64_t $tmp705 = $tmp703.value;
int64_t $tmp706 = $tmp704 + $tmp705;
frost$core$Int64 $tmp707 = (frost$core$Int64) {$tmp706};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp707, param2, param3);
frost$core$Object* $tmp708 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp708);
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Frost.frost:10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

