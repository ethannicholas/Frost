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
#include "frost/core/Comparable.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/collections/List.h"
#include "frost/collections/ListWriter.h"
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
frost$core$Frost$class_type frost$core$Frost$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Frost$cleanup} };

typedef frost$collections$Iterator* (*$fn33)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn37)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn42)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn63)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn79)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn152)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn262)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn341)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn449)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn454)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn458)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef void (*$fn462)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Object* (*$fn485)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn515)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn523)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn525)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

void frost$core$Frost$init(frost$core$Frost* param0) {

return;

}
frost$core$Maybe* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$Object* param0) {

// line 21
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp2 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp3 = (frost$core$Int64) {0};
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp2, $tmp3, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return $tmp2;

}
frost$core$Maybe* frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$String* param0) {

// line 27
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp4 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp5 = (frost$core$Int64) {1};
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
// line 44
frost$core$Object* $tmp7 = frost$core$Weak$get$R$frost$core$Weak$T(param0);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp7);
frost$core$Object* $tmp8 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp8);
*(&local0) = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q($tmp7);
// line 45
frost$core$Object* $tmp9 = *(&local0);
frost$core$Object* $tmp10 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(param1, $tmp9);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) $tmp10)));
frost$collections$Array* $tmp11 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
*(&local1) = ((frost$collections$Array*) $tmp10);
frost$core$Frost$unref$frost$core$Object$Q($tmp10);
// line 46
frost$collections$Array* $tmp12 = *(&local1);
frost$core$Bit $tmp13 = frost$core$Bit$init$builtin_bit($tmp12 == NULL);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block1; else goto block2;
block1:;
// line 47
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp15 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp15);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$collections$Array* $tmp16 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local1) = $tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// line 48
frost$core$Object* $tmp17 = *(&local0);
frost$collections$Array* $tmp18 = *(&local1);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(param1, $tmp17, ((frost$core$Object*) $tmp18));
// line 49
frost$core$Object* $tmp19 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp19);
goto block2;
block2:;
// line 51
frost$collections$Array* $tmp20 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp20, ((frost$core$Object*) param0));
frost$collections$Array* $tmp21 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Object* $tmp22 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp22);
*(&local0) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$weakReferentDestroyed$frost$core$Object$frost$collections$IdentityMap$LTfrost$core$Object$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Object* param0, frost$collections$IdentityMap* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Weak* local1 = NULL;
// line 56
frost$core$Frost$ref$frost$core$Object$Q(param0);
// line 57
frost$core$Object* $tmp23 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(param1, param0);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) $tmp23)));
frost$collections$Array* $tmp24 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local0) = ((frost$collections$Array*) $tmp23);
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
// line 58
frost$collections$Array* $tmp25 = *(&local0);
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25 != NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {58};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s29, $tmp28);
abort(); // unreachable
block1:;
// line 59
frost$collections$Array* $tmp30 = *(&local0);
ITable* $tmp31 = ((frost$collections$Iterable*) $tmp30)->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[0];
frost$collections$Iterator* $tmp34 = $tmp32(((frost$collections$Iterable*) $tmp30));
goto block3;
block3:;
ITable* $tmp35 = $tmp34->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[0];
frost$core$Bit $tmp38 = $tmp36($tmp34);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block5; else goto block4;
block4:;
*(&local1) = ((frost$core$Weak*) NULL);
ITable* $tmp40 = $tmp34->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp40 = $tmp40->next;
}
$fn42 $tmp41 = $tmp40->methods[1];
frost$core$Object* $tmp43 = $tmp41($tmp34);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Weak*) $tmp43)));
frost$core$Weak* $tmp44 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local1) = ((frost$core$Weak*) $tmp43);
// line 60
frost$core$Weak* $tmp45 = *(&local1);
frost$core$Bit $tmp46 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp47 = &$tmp45->_valid;
*$tmp47 = $tmp46;
// line 61
frost$core$Weak* $tmp48 = *(&local1);
frost$core$Object** $tmp49 = &$tmp48->value;
*$tmp49 = ((frost$core$Object*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp43);
frost$core$Weak* $tmp50 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local1) = ((frost$core$Weak*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// line 63
frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(param1, param0);
frost$collections$Array* $tmp51 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
frost$collections$IdentityMap* frost$core$Frost$createWeakReferenceMap$R$frost$collections$IdentityMap$LTfrost$core$Object$Cfrost$collections$Array$LTfrost$core$Object$GT$GT() {

// line 68
FROST_ASSERT(56 == sizeof(frost$collections$IdentityMap));
frost$collections$IdentityMap* $tmp52 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp52);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
return $tmp52;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$Error* local0 = NULL;
// line 85
*(&local0) = ((frost$core$Error*) NULL);
// line 86
frost$io$OutputStream* $tmp53 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s55, param0);
frost$core$String* $tmp56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp54, &$s57);
frost$core$Int64$wrapper* $tmp58;
$tmp58 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp58->value = param1;
frost$core$String* $tmp59 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp56, ((frost$core$Object*) $tmp58));
frost$core$String* $tmp60 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp59, &$s61);
$fn63 $tmp62 = ($fn63) $tmp53->$class->vtable[19];
frost$core$Error* $tmp64 = $tmp62($tmp53, $tmp60);
if ($tmp64 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local0) = $tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
goto block2;
block1:;
goto block2;
block2:;
frost$core$Error* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local0) = ((frost$core$Error*) NULL);
// line 90
frost$core$System$crash();
return;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$String* param2) {

frost$core$Error* local0 = NULL;
// line 95
*(&local0) = ((frost$core$Error*) NULL);
// line 96
frost$io$OutputStream* $tmp66 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp67 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s68, param0);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp67, &$s70);
frost$core$Int64$wrapper* $tmp71;
$tmp71 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp71->value = param1;
frost$core$String* $tmp72 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp69, ((frost$core$Object*) $tmp71));
frost$core$String* $tmp73 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp72, &$s74);
frost$core$String* $tmp75 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp73, param2);
frost$core$String* $tmp76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp75, &$s77);
$fn79 $tmp78 = ($fn79) $tmp66->$class->vtable[19];
frost$core$Error* $tmp80 = $tmp78($tmp66, $tmp76);
if ($tmp80 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local0) = $tmp80;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
goto block2;
block1:;
goto block2;
block2:;
frost$core$Error* $tmp81 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local0) = ((frost$core$Error*) NULL);
// line 100
frost$core$System$crash();
return;

}
frost$core$UInt64$nullable frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q(frost$core$Char32 param0) {

// line 105
frost$core$Int32 $tmp82 = (frost$core$Int32) {48};
frost$core$Char32 $tmp83 = frost$core$Char32$init$frost$core$Int32($tmp82);
frost$core$Bit $tmp84 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp83);
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block3; else goto block2;
block3:;
frost$core$Int32 $tmp86 = (frost$core$Int32) {57};
frost$core$Char32 $tmp87 = frost$core$Char32$init$frost$core$Int32($tmp86);
frost$core$Bit $tmp88 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp87);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block1; else goto block2;
block1:;
// line 106
frost$core$UInt64 $tmp90 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp91 = (frost$core$UInt8) {48};
frost$core$Char8 $tmp92 = frost$core$Char8$init$frost$core$UInt8($tmp91);
frost$core$UInt64 $tmp93 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp92);
uint64_t $tmp94 = $tmp90.value;
uint64_t $tmp95 = $tmp93.value;
uint64_t $tmp96 = $tmp94 - $tmp95;
frost$core$UInt64 $tmp97 = (frost$core$UInt64) {$tmp96};
return ((frost$core$UInt64$nullable) { $tmp97, true });
block2:;
// line 108
frost$core$Int32 $tmp98 = (frost$core$Int32) {65};
frost$core$Char32 $tmp99 = frost$core$Char32$init$frost$core$Int32($tmp98);
frost$core$Bit $tmp100 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp99);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block6; else goto block5;
block6:;
frost$core$Int32 $tmp102 = (frost$core$Int32) {90};
frost$core$Char32 $tmp103 = frost$core$Char32$init$frost$core$Int32($tmp102);
frost$core$Bit $tmp104 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block4; else goto block5;
block4:;
// line 109
frost$core$UInt64 $tmp106 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp107 = (frost$core$UInt8) {65};
frost$core$Char8 $tmp108 = frost$core$Char8$init$frost$core$UInt8($tmp107);
frost$core$UInt64 $tmp109 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp108);
uint64_t $tmp110 = $tmp106.value;
uint64_t $tmp111 = $tmp109.value;
uint64_t $tmp112 = $tmp110 - $tmp111;
frost$core$UInt64 $tmp113 = (frost$core$UInt64) {$tmp112};
frost$core$UInt64 $tmp114 = (frost$core$UInt64) {10};
uint64_t $tmp115 = $tmp113.value;
uint64_t $tmp116 = $tmp114.value;
uint64_t $tmp117 = $tmp115 + $tmp116;
frost$core$UInt64 $tmp118 = (frost$core$UInt64) {$tmp117};
return ((frost$core$UInt64$nullable) { $tmp118, true });
block5:;
// line 111
frost$core$Int32 $tmp119 = (frost$core$Int32) {97};
frost$core$Char32 $tmp120 = frost$core$Char32$init$frost$core$Int32($tmp119);
frost$core$Bit $tmp121 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp120);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block9; else goto block8;
block9:;
frost$core$Int32 $tmp123 = (frost$core$Int32) {122};
frost$core$Char32 $tmp124 = frost$core$Char32$init$frost$core$Int32($tmp123);
frost$core$Bit $tmp125 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp124);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block7; else goto block8;
block7:;
// line 112
frost$core$UInt64 $tmp127 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp128 = (frost$core$UInt8) {97};
frost$core$Char8 $tmp129 = frost$core$Char8$init$frost$core$UInt8($tmp128);
frost$core$UInt64 $tmp130 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp129);
uint64_t $tmp131 = $tmp127.value;
uint64_t $tmp132 = $tmp130.value;
uint64_t $tmp133 = $tmp131 - $tmp132;
frost$core$UInt64 $tmp134 = (frost$core$UInt64) {$tmp133};
frost$core$UInt64 $tmp135 = (frost$core$UInt64) {10};
uint64_t $tmp136 = $tmp134.value;
uint64_t $tmp137 = $tmp135.value;
uint64_t $tmp138 = $tmp136 + $tmp137;
frost$core$UInt64 $tmp139 = (frost$core$UInt64) {$tmp138};
return ((frost$core$UInt64$nullable) { $tmp139, true });
block8:;
// line 114
return ((frost$core$UInt64$nullable) { .nonnull = false });

}
frost$core$UInt64$nullable frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64 local0;
frost$core$UInt64 local1;
frost$core$String$Index local2;
frost$core$UInt64$nullable local3;
// line 122
frost$core$Bit $tmp140 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s141);
bool $tmp142 = $tmp140.value;
if ($tmp142) goto block1; else goto block2;
block1:;
// line 123
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 125
frost$core$UInt64 $tmp143 = (frost$core$UInt64) {0};
*(&local0) = $tmp143;
// line 126
frost$core$UInt64 $tmp144 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64(param1);
*(&local1) = $tmp144;
// line 127
frost$core$String$Index $tmp145 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp145;
// line 128
goto block3;
block3:;
frost$core$String$Index $tmp146 = *(&local2);
frost$core$String$Index$wrapper* $tmp147;
$tmp147 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp147->value = $tmp146;
frost$core$String$Index $tmp148 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp149;
$tmp149 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp149->value = $tmp148;
ITable* $tmp150 = ((frost$core$Equatable*) $tmp147)->$class->itable;
while ($tmp150->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp150 = $tmp150->next;
}
$fn152 $tmp151 = $tmp150->methods[1];
frost$core$Bit $tmp153 = $tmp151(((frost$core$Equatable*) $tmp147), ((frost$core$Equatable*) $tmp149));
bool $tmp154 = $tmp153.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp149)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp147)));
if ($tmp154) goto block4; else goto block5;
block4:;
// line 129
frost$core$String$Index $tmp155 = *(&local2);
frost$core$Char32 $tmp156 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp155);
frost$core$UInt64$nullable $tmp157 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q($tmp156);
*(&local3) = $tmp157;
// line 130
frost$core$UInt64$nullable $tmp158 = *(&local3);
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit(!$tmp158.nonnull);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block6; else goto block8;
block8:;
frost$core$UInt64$nullable $tmp161 = *(&local3);
frost$core$UInt64 $tmp162 = *(&local1);
uint64_t $tmp163 = ((frost$core$UInt64) $tmp161.value).value;
uint64_t $tmp164 = $tmp162.value;
bool $tmp165 = $tmp163 >= $tmp164;
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block6; else goto block7;
block6:;
// line 131
return ((frost$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 133
frost$core$UInt64 $tmp168 = *(&local0);
frost$core$UInt64 $tmp169 = *(&local1);
uint64_t $tmp170 = $tmp168.value;
uint64_t $tmp171 = $tmp169.value;
uint64_t $tmp172 = $tmp170 * $tmp171;
frost$core$UInt64 $tmp173 = (frost$core$UInt64) {$tmp172};
frost$core$UInt64$nullable $tmp174 = *(&local3);
uint64_t $tmp175 = $tmp173.value;
uint64_t $tmp176 = ((frost$core$UInt64) $tmp174.value).value;
uint64_t $tmp177 = $tmp175 + $tmp176;
frost$core$UInt64 $tmp178 = (frost$core$UInt64) {$tmp177};
*(&local0) = $tmp178;
// line 134
frost$core$String$Index $tmp179 = *(&local2);
frost$core$String$Index $tmp180 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp179);
*(&local2) = $tmp180;
goto block3;
block5:;
// line 136
frost$core$UInt64 $tmp181 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp181, true });

}
frost$core$String* frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$Int64$nullable local1;
frost$core$Char32 local2;
// line 162
frost$core$Int64 $tmp182 = frost$core$String$get_length$R$frost$core$Int64(param1);
frost$core$Int64 $tmp183 = (frost$core$Int64) {2};
int64_t $tmp184 = $tmp182.value;
int64_t $tmp185 = $tmp183.value;
bool $tmp186 = $tmp184 >= $tmp185;
frost$core$Bit $tmp187 = (frost$core$Bit) {$tmp186};
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp189 = (frost$core$Int64) {162};
frost$core$String* $tmp190 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s191, param1);
frost$core$String* $tmp192 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp190, &$s193);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s194, $tmp189, $tmp192);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
abort(); // unreachable
block1:;
// line 163
frost$core$String$Index $tmp195 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index $tmp196 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp195);
*(&local0) = $tmp196;
// line 164
frost$core$String$Index $tmp197 = *(&local0);
frost$core$Char32 $tmp198 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp197);
frost$core$Int32 $tmp199 = (frost$core$Int32) {60};
frost$core$Char32 $tmp200 = frost$core$Char32$init$frost$core$Int32($tmp199);
frost$core$Bit $tmp201 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp198, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp203 = (frost$core$Int32) {94};
frost$core$Char32 $tmp204 = frost$core$Char32$init$frost$core$Int32($tmp203);
frost$core$Bit $tmp205 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp198, $tmp204);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block4; else goto block6;
block6:;
frost$core$Int32 $tmp207 = (frost$core$Int32) {62};
frost$core$Char32 $tmp208 = frost$core$Char32$init$frost$core$Int32($tmp207);
frost$core$Bit $tmp209 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp198, $tmp208);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block4; else goto block7;
block4:;
goto block3;
block7:;
// line 169
frost$core$String$Index $tmp211 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local0) = $tmp211;
goto block3;
block3:;
// line 172
frost$core$String$Index $tmp212 = *(&local0);
frost$core$String$Index $tmp213 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp212);
frost$core$Bit $tmp214 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp215 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp213, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp214);
frost$core$String* $tmp216 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp215);
frost$core$Int64$nullable $tmp217 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp216);
*(&local1) = $tmp217;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// line 173
// line 174
frost$core$String$Index $tmp218 = *(&local0);
frost$core$String$Index $tmp219 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Bit $tmp220 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp218, $tmp219);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block8; else goto block10;
block8:;
// line 175
frost$core$Int32 $tmp222 = (frost$core$Int32) {32};
frost$core$Char32 $tmp223 = frost$core$Char32$init$frost$core$Int32($tmp222);
*(&local2) = $tmp223;
goto block9;
block10:;
// line 1
// line 178
frost$core$String$Index $tmp224 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Char32 $tmp225 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp224);
*(&local2) = $tmp225;
goto block9;
block9:;
// line 180
frost$core$String$Index $tmp226 = *(&local0);
frost$core$Char32 $tmp227 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp226);
frost$core$Int32 $tmp228 = (frost$core$Int32) {60};
frost$core$Char32 $tmp229 = frost$core$Char32$init$frost$core$Int32($tmp228);
frost$core$Bit $tmp230 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp227, $tmp229);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block12; else goto block13;
block12:;
// line 181
frost$core$Int64$nullable $tmp232 = *(&local1);
frost$core$Char32 $tmp233 = *(&local2);
frost$core$String* $tmp234 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp232.value), $tmp233);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
return $tmp234;
block13:;
frost$core$Int32 $tmp235 = (frost$core$Int32) {94};
frost$core$Char32 $tmp236 = frost$core$Char32$init$frost$core$Int32($tmp235);
frost$core$Bit $tmp237 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp227, $tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block14; else goto block15;
block14:;
// line 182
frost$core$Int64$nullable $tmp239 = *(&local1);
frost$core$Char32 $tmp240 = *(&local2);
frost$core$String* $tmp241 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp239.value), $tmp240);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
return $tmp241;
block15:;
frost$core$Int32 $tmp242 = (frost$core$Int32) {62};
frost$core$Char32 $tmp243 = frost$core$Char32$init$frost$core$Int32($tmp242);
frost$core$Bit $tmp244 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp227, $tmp243);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block16; else goto block17;
block16:;
// line 183
frost$core$Int64$nullable $tmp246 = *(&local1);
frost$core$Char32 $tmp247 = *(&local2);
frost$core$String* $tmp248 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp246.value), $tmp247);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
return $tmp248;
block17:;
// line 184
frost$core$Int64 $tmp249 = (frost$core$Int64) {184};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s250, $tmp249);
abort(); // unreachable
block11:;
goto block18;
block18:;

}
frost$core$String* frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(frost$core$Bit param0, frost$core$UInt64 param1, frost$core$UInt64 param2, frost$core$String* param3) {

frost$core$String$Index local0;
frost$core$UInt64 local1;
frost$collections$ListView* local2 = NULL;
frost$core$UInt64 local3;
frost$core$Int64 local4;
frost$core$Char8* local5;
frost$core$Int64 local6;
frost$core$Int64 local7;
frost$core$Int64 local8;
// line 198
frost$core$String$Index $tmp251 = frost$core$String$get_start$R$frost$core$String$Index(param3);
*(&local0) = $tmp251;
// line 199
frost$core$UInt64 $tmp252 = (frost$core$UInt64) {10};
*(&local1) = $tmp252;
// line 200
frost$collections$ListView* $tmp253 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s254);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$collections$ListView* $tmp255 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local2) = $tmp253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// line 201
frost$core$String$Index $tmp256 = *(&local0);
frost$core$String$Index$wrapper* $tmp257;
$tmp257 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp257->value = $tmp256;
frost$core$String$Index $tmp258 = frost$core$String$get_end$R$frost$core$String$Index(param3);
frost$core$String$Index$wrapper* $tmp259;
$tmp259 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp259->value = $tmp258;
ITable* $tmp260 = ((frost$core$Comparable*) $tmp257)->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[1];
frost$core$Bit $tmp263 = $tmp261(((frost$core$Comparable*) $tmp257), ((frost$core$Comparable*) $tmp259));
bool $tmp264 = $tmp263.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp259)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp257)));
if ($tmp264) goto block1; else goto block2;
block1:;
// line 202
frost$core$String$Index $tmp265 = *(&local0);
frost$core$Char32 $tmp266 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp265);
frost$core$Int32 $tmp267 = (frost$core$Int32) {98};
frost$core$Char32 $tmp268 = frost$core$Char32$init$frost$core$Int32($tmp267);
frost$core$Bit $tmp269 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp266, $tmp268);
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp271 = (frost$core$Int32) {66};
frost$core$Char32 $tmp272 = frost$core$Char32$init$frost$core$Int32($tmp271);
frost$core$Bit $tmp273 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp266, $tmp272);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block4; else goto block6;
block4:;
// line 204
frost$core$UInt64 $tmp275 = (frost$core$UInt64) {2};
*(&local1) = $tmp275;
goto block3;
block6:;
frost$core$Int32 $tmp276 = (frost$core$Int32) {111};
frost$core$Char32 $tmp277 = frost$core$Char32$init$frost$core$Int32($tmp276);
frost$core$Bit $tmp278 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp266, $tmp277);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block7; else goto block8;
block8:;
frost$core$Int32 $tmp280 = (frost$core$Int32) {79};
frost$core$Char32 $tmp281 = frost$core$Char32$init$frost$core$Int32($tmp280);
frost$core$Bit $tmp282 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp266, $tmp281);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block7; else goto block9;
block7:;
// line 207
frost$core$UInt64 $tmp284 = (frost$core$UInt64) {8};
*(&local1) = $tmp284;
goto block3;
block9:;
frost$core$Int32 $tmp285 = (frost$core$Int32) {100};
frost$core$Char32 $tmp286 = frost$core$Char32$init$frost$core$Int32($tmp285);
frost$core$Bit $tmp287 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp266, $tmp286);
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block10; else goto block11;
block11:;
frost$core$Int32 $tmp289 = (frost$core$Int32) {68};
frost$core$Char32 $tmp290 = frost$core$Char32$init$frost$core$Int32($tmp289);
frost$core$Bit $tmp291 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp266, $tmp290);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block10; else goto block12;
block10:;
// line 210
frost$core$UInt64 $tmp293 = (frost$core$UInt64) {10};
*(&local1) = $tmp293;
goto block3;
block12:;
frost$core$Int32 $tmp294 = (frost$core$Int32) {120};
frost$core$Char32 $tmp295 = frost$core$Char32$init$frost$core$Int32($tmp294);
frost$core$Bit $tmp296 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp266, $tmp295);
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block13; else goto block14;
block13:;
// line 213
frost$core$UInt64 $tmp298 = (frost$core$UInt64) {16};
*(&local1) = $tmp298;
goto block3;
block14:;
frost$core$Int32 $tmp299 = (frost$core$Int32) {88};
frost$core$Char32 $tmp300 = frost$core$Char32$init$frost$core$Int32($tmp299);
frost$core$Bit $tmp301 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp266, $tmp300);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block15; else goto block16;
block15:;
// line 216
frost$core$UInt64 $tmp303 = (frost$core$UInt64) {16};
*(&local1) = $tmp303;
// line 217
frost$collections$ListView* $tmp304 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s305);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$collections$ListView* $tmp306 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local2) = $tmp304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
goto block3;
block16:;
// line 220
frost$core$Int64 $tmp307 = (frost$core$Int64) {220};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s308, $tmp307, &$s309);
abort(); // unreachable
block3:;
goto block2;
block2:;
// line 224
// line 225
bool $tmp310 = param0.value;
if ($tmp310) goto block20; else goto block19;
block20:;
frost$core$UInt64 $tmp311 = *(&local1);
frost$core$UInt64 $tmp312 = (frost$core$UInt64) {10};
uint64_t $tmp313 = $tmp311.value;
uint64_t $tmp314 = $tmp312.value;
bool $tmp315 = $tmp313 != $tmp314;
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block17; else goto block19;
block17:;
// line 226
frost$core$Int64 $tmp318 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(param1);
frost$core$Int64 $tmp319 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp318);
frost$core$UInt64 $tmp320 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp319);
frost$core$UInt64 $tmp321 = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64($tmp320, param2);
*(&local3) = $tmp321;
goto block18;
block19:;
// line 1
// line 229
*(&local3) = param1;
goto block18;
block18:;
// line 231
frost$core$Int64 $tmp322 = (frost$core$Int64) {64};
*(&local4) = $tmp322;
// line 232
frost$core$Int64 $tmp323 = *(&local4);
int64_t $tmp324 = $tmp323.value;
frost$core$Char8* $tmp325 = ((frost$core$Char8*) frostAlloc($tmp324 * 1));
*(&local5) = $tmp325;
// line 233
frost$core$Int64 $tmp326 = *(&local4);
frost$core$Int64 $tmp327 = (frost$core$Int64) {1};
int64_t $tmp328 = $tmp326.value;
int64_t $tmp329 = $tmp327.value;
int64_t $tmp330 = $tmp328 - $tmp329;
frost$core$Int64 $tmp331 = (frost$core$Int64) {$tmp330};
*(&local6) = $tmp331;
// line 234
goto block21;
block21:;
// line 235
frost$core$Char8* $tmp332 = *(&local5);
frost$core$Int64 $tmp333 = *(&local6);
frost$collections$ListView* $tmp334 = *(&local2);
frost$core$UInt64 $tmp335 = *(&local3);
frost$core$UInt64 $tmp336 = *(&local1);
frost$core$UInt64 $tmp337 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp335, $tmp336);
frost$core$Int64 $tmp338 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp337);
ITable* $tmp339 = $tmp334->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[0];
frost$core$Object* $tmp342 = $tmp340($tmp334, $tmp338);
int64_t $tmp343 = $tmp333.value;
$tmp332[$tmp343] = ((frost$core$Char8$wrapper*) $tmp342)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp342);
// line 236
frost$core$UInt64 $tmp344 = *(&local3);
frost$core$UInt64 $tmp345 = *(&local1);
uint64_t $tmp346 = $tmp344.value;
uint64_t $tmp347 = $tmp345.value;
uint64_t $tmp348 = $tmp346 / $tmp347;
frost$core$UInt64 $tmp349 = (frost$core$UInt64) {$tmp348};
*(&local3) = $tmp349;
// line 237
frost$core$Int64 $tmp350 = *(&local6);
frost$core$Int64 $tmp351 = (frost$core$Int64) {1};
int64_t $tmp352 = $tmp350.value;
int64_t $tmp353 = $tmp351.value;
int64_t $tmp354 = $tmp352 - $tmp353;
frost$core$Int64 $tmp355 = (frost$core$Int64) {$tmp354};
*(&local6) = $tmp355;
goto block22;
block22:;
frost$core$UInt64 $tmp356 = *(&local3);
frost$core$UInt64 $tmp357 = (frost$core$UInt64) {0};
uint64_t $tmp358 = $tmp356.value;
uint64_t $tmp359 = $tmp357.value;
bool $tmp360 = $tmp358 > $tmp359;
frost$core$Bit $tmp361 = (frost$core$Bit) {$tmp360};
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block21; else goto block23;
block23:;
// line 240
bool $tmp363 = param0.value;
if ($tmp363) goto block26; else goto block25;
block26:;
frost$core$UInt64 $tmp364 = *(&local1);
frost$core$UInt64 $tmp365 = (frost$core$UInt64) {10};
frost$core$Bit $tmp366 = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit($tmp364, $tmp365);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block24; else goto block25;
block24:;
// line 241
frost$core$Char8* $tmp368 = *(&local5);
frost$core$Int64 $tmp369 = *(&local6);
frost$core$UInt8 $tmp370 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp371 = frost$core$Char8$init$frost$core$UInt8($tmp370);
int64_t $tmp372 = $tmp369.value;
$tmp368[$tmp372] = $tmp371;
// line 242
frost$core$Int64 $tmp373 = *(&local6);
frost$core$Int64 $tmp374 = (frost$core$Int64) {1};
int64_t $tmp375 = $tmp373.value;
int64_t $tmp376 = $tmp374.value;
int64_t $tmp377 = $tmp375 - $tmp376;
frost$core$Int64 $tmp378 = (frost$core$Int64) {$tmp377};
*(&local6) = $tmp378;
goto block25;
block25:;
// line 244
frost$core$Int64 $tmp379 = *(&local6);
frost$core$Int64 $tmp380 = (frost$core$Int64) {1};
int64_t $tmp381 = $tmp379.value;
int64_t $tmp382 = $tmp380.value;
int64_t $tmp383 = $tmp381 + $tmp382;
frost$core$Int64 $tmp384 = (frost$core$Int64) {$tmp383};
*(&local6) = $tmp384;
// line 245
frost$core$Int64 $tmp385 = *(&local4);
frost$core$Int64 $tmp386 = *(&local6);
int64_t $tmp387 = $tmp385.value;
int64_t $tmp388 = $tmp386.value;
int64_t $tmp389 = $tmp387 - $tmp388;
frost$core$Int64 $tmp390 = (frost$core$Int64) {$tmp389};
*(&local7) = $tmp390;
// line 246
frost$core$Int64 $tmp391 = (frost$core$Int64) {0};
frost$core$Int64 $tmp392 = *(&local7);
frost$core$Bit $tmp393 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp394 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp391, $tmp392, $tmp393);
frost$core$Int64 $tmp395 = $tmp394.min;
*(&local8) = $tmp395;
frost$core$Int64 $tmp396 = $tmp394.max;
frost$core$Bit $tmp397 = $tmp394.inclusive;
bool $tmp398 = $tmp397.value;
frost$core$Int64 $tmp399 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp400 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp399);
if ($tmp398) goto block30; else goto block31;
block30:;
int64_t $tmp401 = $tmp395.value;
int64_t $tmp402 = $tmp396.value;
bool $tmp403 = $tmp401 <= $tmp402;
frost$core$Bit $tmp404 = (frost$core$Bit) {$tmp403};
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block27; else goto block28;
block31:;
int64_t $tmp406 = $tmp395.value;
int64_t $tmp407 = $tmp396.value;
bool $tmp408 = $tmp406 < $tmp407;
frost$core$Bit $tmp409 = (frost$core$Bit) {$tmp408};
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block27; else goto block28;
block27:;
// line 247
frost$core$Char8* $tmp411 = *(&local5);
frost$core$Int64 $tmp412 = *(&local8);
frost$core$Char8* $tmp413 = *(&local5);
frost$core$Int64 $tmp414 = *(&local8);
frost$core$Int64 $tmp415 = *(&local6);
int64_t $tmp416 = $tmp414.value;
int64_t $tmp417 = $tmp415.value;
int64_t $tmp418 = $tmp416 + $tmp417;
frost$core$Int64 $tmp419 = (frost$core$Int64) {$tmp418};
int64_t $tmp420 = $tmp419.value;
frost$core$Char8 $tmp421 = $tmp413[$tmp420];
int64_t $tmp422 = $tmp412.value;
$tmp411[$tmp422] = $tmp421;
goto block29;
block29:;
frost$core$Int64 $tmp423 = *(&local8);
int64_t $tmp424 = $tmp396.value;
int64_t $tmp425 = $tmp423.value;
int64_t $tmp426 = $tmp424 - $tmp425;
frost$core$Int64 $tmp427 = (frost$core$Int64) {$tmp426};
frost$core$UInt64 $tmp428 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp427);
if ($tmp398) goto block33; else goto block34;
block33:;
uint64_t $tmp429 = $tmp428.value;
uint64_t $tmp430 = $tmp400.value;
bool $tmp431 = $tmp429 >= $tmp430;
frost$core$Bit $tmp432 = (frost$core$Bit) {$tmp431};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block32; else goto block28;
block34:;
uint64_t $tmp434 = $tmp428.value;
uint64_t $tmp435 = $tmp400.value;
bool $tmp436 = $tmp434 > $tmp435;
frost$core$Bit $tmp437 = (frost$core$Bit) {$tmp436};
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block32; else goto block28;
block32:;
int64_t $tmp439 = $tmp423.value;
int64_t $tmp440 = $tmp399.value;
int64_t $tmp441 = $tmp439 + $tmp440;
frost$core$Int64 $tmp442 = (frost$core$Int64) {$tmp441};
*(&local8) = $tmp442;
goto block27;
block28:;
// line 249
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp443 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp444 = *(&local5);
frost$core$Int64 $tmp445 = *(&local7);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp443, $tmp444, $tmp445);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$collections$ListView* $tmp446 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local2) = ((frost$collections$ListView*) NULL);
return $tmp443;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

frost$core$Object* local0 = NULL;
// line 271
ITable* $tmp447 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp447->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp447 = $tmp447->next;
}
$fn449 $tmp448 = $tmp447->methods[0];
frost$core$Object* $tmp450 = $tmp448(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp450);
frost$core$Object* $tmp451 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp451);
*(&local0) = $tmp450;
frost$core$Frost$unref$frost$core$Object$Q($tmp450);
// line 272
ITable* $tmp452 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp452->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp452 = $tmp452->next;
}
$fn454 $tmp453 = $tmp452->methods[0];
frost$core$Object* $tmp455 = $tmp453(((frost$collections$ListView*) param0), param2);
ITable* $tmp456 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp456->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp456 = $tmp456->next;
}
$fn458 $tmp457 = $tmp456->methods[0];
$tmp457(((frost$collections$ListWriter*) param0), param1, $tmp455);
frost$core$Frost$unref$frost$core$Object$Q($tmp455);
// line 273
frost$core$Object* $tmp459 = *(&local0);
ITable* $tmp460 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp460->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp460 = $tmp460->next;
}
$fn462 $tmp461 = $tmp460->methods[0];
$tmp461(((frost$collections$ListWriter*) param0), param2, $tmp459);
frost$core$Object* $tmp463 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp463);
*(&local0) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2, frost$core$MutableMethod* param3) {

frost$core$Int64 local0;
frost$core$Object* local1 = NULL;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Bit local4;
// line 280
int64_t $tmp464 = param1.value;
int64_t $tmp465 = param2.value;
bool $tmp466 = $tmp464 >= $tmp465;
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp466};
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block1; else goto block2;
block1:;
// line 281
return;
block2:;
// line 283
int64_t $tmp469 = param2.value;
int64_t $tmp470 = param1.value;
int64_t $tmp471 = $tmp469 - $tmp470;
frost$core$Int64 $tmp472 = (frost$core$Int64) {$tmp471};
frost$core$Int64 $tmp473 = (frost$core$Int64) {2};
int64_t $tmp474 = $tmp472.value;
int64_t $tmp475 = $tmp473.value;
int64_t $tmp476 = $tmp474 / $tmp475;
frost$core$Int64 $tmp477 = (frost$core$Int64) {$tmp476};
int64_t $tmp478 = param1.value;
int64_t $tmp479 = $tmp477.value;
int64_t $tmp480 = $tmp478 + $tmp479;
frost$core$Int64 $tmp481 = (frost$core$Int64) {$tmp480};
*(&local0) = $tmp481;
// line 284
frost$core$Int64 $tmp482 = *(&local0);
ITable* $tmp483 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp483->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp483 = $tmp483->next;
}
$fn485 $tmp484 = $tmp483->methods[0];
frost$core$Object* $tmp486 = $tmp484(((frost$collections$ListView*) param0), $tmp482);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp486);
frost$core$Object* $tmp487 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp487);
*(&local1) = $tmp486;
frost$core$Frost$unref$frost$core$Object$Q($tmp486);
// line 285
frost$core$Int64 $tmp488 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, param2, $tmp488);
// line 286
*(&local2) = param1;
// line 287
frost$core$Int64 $tmp489 = (frost$core$Int64) {1};
int64_t $tmp490 = param2.value;
int64_t $tmp491 = $tmp489.value;
int64_t $tmp492 = $tmp490 - $tmp491;
frost$core$Int64 $tmp493 = (frost$core$Int64) {$tmp492};
frost$core$Bit $tmp494 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp495 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp493, $tmp494);
frost$core$Int64 $tmp496 = $tmp495.min;
*(&local3) = $tmp496;
frost$core$Int64 $tmp497 = $tmp495.max;
frost$core$Bit $tmp498 = $tmp495.inclusive;
bool $tmp499 = $tmp498.value;
frost$core$Int64 $tmp500 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp501 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp500);
if ($tmp499) goto block6; else goto block7;
block6:;
int64_t $tmp502 = $tmp496.value;
int64_t $tmp503 = $tmp497.value;
bool $tmp504 = $tmp502 <= $tmp503;
frost$core$Bit $tmp505 = (frost$core$Bit) {$tmp504};
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block3; else goto block4;
block7:;
int64_t $tmp507 = $tmp496.value;
int64_t $tmp508 = $tmp497.value;
bool $tmp509 = $tmp507 < $tmp508;
frost$core$Bit $tmp510 = (frost$core$Bit) {$tmp509};
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block3; else goto block4;
block3:;
// line 288
frost$core$Int64 $tmp512 = *(&local3);
ITable* $tmp513 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp513->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp513 = $tmp513->next;
}
$fn515 $tmp514 = $tmp513->methods[0];
frost$core$Object* $tmp516 = $tmp514(((frost$collections$ListView*) param0), $tmp512);
frost$core$Object* $tmp517 = *(&local1);
frost$core$Int8** $tmp518 = &param3->pointer;
frost$core$Int8* $tmp519 = *$tmp518;
frost$core$Object** $tmp520 = &param3->target;
frost$core$Object* $tmp521 = *$tmp520;
bool $tmp522 = $tmp521 != ((frost$core$Object*) NULL);
if ($tmp522) goto block10; else goto block11;
block11:;
frost$core$Bit $tmp524 = (($fn523) $tmp519)($tmp516, $tmp517);
*(&local4) = $tmp524;
goto block12;
block10:;
frost$core$Bit $tmp526 = (($fn525) $tmp519)($tmp521, $tmp516, $tmp517);
*(&local4) = $tmp526;
goto block12;
block12:;
frost$core$Bit $tmp527 = *(&local4);
frost$core$Bit $tmp528 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp527);
bool $tmp529 = $tmp528.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp516);
if ($tmp529) goto block8; else goto block9;
block8:;
// line 289
frost$core$Int64 $tmp530 = *(&local3);
frost$core$Int64 $tmp531 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp530, $tmp531);
// line 290
frost$core$Int64 $tmp532 = *(&local2);
frost$core$Int64 $tmp533 = (frost$core$Int64) {1};
int64_t $tmp534 = $tmp532.value;
int64_t $tmp535 = $tmp533.value;
int64_t $tmp536 = $tmp534 + $tmp535;
frost$core$Int64 $tmp537 = (frost$core$Int64) {$tmp536};
*(&local2) = $tmp537;
goto block9;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp538 = *(&local3);
int64_t $tmp539 = $tmp497.value;
int64_t $tmp540 = $tmp538.value;
int64_t $tmp541 = $tmp539 - $tmp540;
frost$core$Int64 $tmp542 = (frost$core$Int64) {$tmp541};
frost$core$UInt64 $tmp543 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp542);
if ($tmp499) goto block14; else goto block15;
block14:;
uint64_t $tmp544 = $tmp543.value;
uint64_t $tmp545 = $tmp501.value;
bool $tmp546 = $tmp544 >= $tmp545;
frost$core$Bit $tmp547 = (frost$core$Bit) {$tmp546};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block13; else goto block4;
block15:;
uint64_t $tmp549 = $tmp543.value;
uint64_t $tmp550 = $tmp501.value;
bool $tmp551 = $tmp549 > $tmp550;
frost$core$Bit $tmp552 = (frost$core$Bit) {$tmp551};
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block13; else goto block4;
block13:;
int64_t $tmp554 = $tmp538.value;
int64_t $tmp555 = $tmp500.value;
int64_t $tmp556 = $tmp554 + $tmp555;
frost$core$Int64 $tmp557 = (frost$core$Int64) {$tmp556};
*(&local3) = $tmp557;
goto block3;
block4:;
// line 293
frost$core$Int64 $tmp558 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp558, param2);
// line 294
frost$core$Int64 $tmp559 = *(&local2);
frost$core$Int64 $tmp560 = (frost$core$Int64) {1};
int64_t $tmp561 = $tmp559.value;
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561 - $tmp562;
frost$core$Int64 $tmp564 = (frost$core$Int64) {$tmp563};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, param1, $tmp564, param3);
// line 295
frost$core$Int64 $tmp565 = *(&local2);
frost$core$Int64 $tmp566 = (frost$core$Int64) {1};
int64_t $tmp567 = $tmp565.value;
int64_t $tmp568 = $tmp566.value;
int64_t $tmp569 = $tmp567 + $tmp568;
frost$core$Int64 $tmp570 = (frost$core$Int64) {$tmp569};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp570, param2, param3);
frost$core$Object* $tmp571 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp571);
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

