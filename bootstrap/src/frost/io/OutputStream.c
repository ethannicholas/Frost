#include "frost/io/OutputStream.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Error.h"
#include "frost/core/UInt16.h"
#include "frost/io/ByteOrder.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/Int64.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Char8.h"


static frost$core$String $s1;
frost$io$OutputStream$class_type frost$io$OutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$OutputStream$cleanup, NULL, frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$R$frost$core$Error$Q, frost$io$OutputStream$flush$R$frost$core$Error$Q, frost$io$OutputStream$close$R$frost$core$Error$Q} };

typedef frost$core$Bit (*$fn12)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn18)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn28)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn38)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn43)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Bit (*$fn59)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn65)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn75)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn85)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn90)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Bit (*$fn106)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn112)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn122)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn132)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn137)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn146)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn151)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn156)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn161)(frost$io$OutputStream*, frost$core$UInt64);
typedef frost$core$Error* (*$fn186)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn212)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn215)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn219)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn223)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn228)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn232)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$collections$Iterator* (*$fn240)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn244)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn249)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn255)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$collections$Iterator* (*$fn263)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn267)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn272)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn276)(frost$io$OutputStream*, frost$core$Char8);
typedef frost$core$Error* (*$fn285)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn292)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$String* (*$fn295)(frost$core$Object*);
typedef frost$core$Error* (*$fn298)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn301)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn304)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn311)(frost$core$Object*);
typedef frost$core$Error* (*$fn314)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn319)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 21, 7670378173706479600, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

frost$core$Error* frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt16 param1) {

frost$core$Error* local0 = NULL;
frost$io$ByteOrder local1;
frost$io$ByteOrder local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:40
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:41
frost$io$ByteOrder* $tmp2 = &param0->byteOrder;
frost$io$ByteOrder $tmp3 = *$tmp2;
frost$io$ByteOrder$wrapper* $tmp4;
$tmp4 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int $tmp5 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:41:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp6 = &(&local2)->$rawValue;
*$tmp6 = $tmp5;
frost$io$ByteOrder $tmp7 = *(&local2);
*(&local1) = $tmp7;
frost$io$ByteOrder $tmp8 = *(&local1);
frost$io$ByteOrder$wrapper* $tmp9;
$tmp9 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp9->value = $tmp8;
ITable* $tmp10 = ((frost$core$Equatable*) $tmp4)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$core$Bit $tmp13 = $tmp11(((frost$core$Equatable*) $tmp4), ((frost$core$Equatable*) $tmp9));
bool $tmp14 = $tmp13.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp9)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
if ($tmp14) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:42
// begin inline call to function frost.core.UInt16.get_asUInt8():frost.core.UInt8 from OutputStream.frost:42:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt16.frost:1106
uint16_t $tmp15 = param1.value;
frost$core$UInt8 $tmp16 = (frost$core$UInt8) {((uint8_t) $tmp15)};
$fn18 $tmp17 = ($fn18) param0->$class->vtable[2];
frost$core$Error* $tmp19 = $tmp17(param0, $tmp16);
if ($tmp19 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local0) = $tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:43
frost$core$UInt16 $tmp20 = (frost$core$UInt16) {8u};
// begin inline call to function frost.core.UInt16.>>(other:frost.core.UInt16):frost.core.UInt32 from OutputStream.frost:43:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt16.frost:517
uint16_t $tmp21 = param1.value;
uint16_t $tmp22 = $tmp20.value;
uint32_t $tmp23 = ((uint32_t) $tmp21) >> ((uint32_t) $tmp22);
frost$core$UInt32 $tmp24 = (frost$core$UInt32) {$tmp23};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from OutputStream.frost:43:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:966
uint32_t $tmp25 = $tmp24.value;
frost$core$UInt8 $tmp26 = (frost$core$UInt8) {((uint8_t) $tmp25)};
$fn28 $tmp27 = ($fn28) param0->$class->vtable[2];
frost$core$Error* $tmp29 = $tmp27(param0, $tmp26);
if ($tmp29 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local0) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:46
frost$core$UInt16 $tmp30 = (frost$core$UInt16) {8u};
// begin inline call to function frost.core.UInt16.>>(other:frost.core.UInt16):frost.core.UInt32 from OutputStream.frost:46:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt16.frost:517
uint16_t $tmp31 = param1.value;
uint16_t $tmp32 = $tmp30.value;
uint32_t $tmp33 = ((uint32_t) $tmp31) >> ((uint32_t) $tmp32);
frost$core$UInt32 $tmp34 = (frost$core$UInt32) {$tmp33};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from OutputStream.frost:46:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:966
uint32_t $tmp35 = $tmp34.value;
frost$core$UInt8 $tmp36 = (frost$core$UInt8) {((uint8_t) $tmp35)};
$fn38 $tmp37 = ($fn38) param0->$class->vtable[2];
frost$core$Error* $tmp39 = $tmp37(param0, $tmp36);
if ($tmp39 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local0) = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
goto block1;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:47
// begin inline call to function frost.core.UInt16.get_asUInt8():frost.core.UInt8 from OutputStream.frost:47:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt16.frost:1106
uint16_t $tmp40 = param1.value;
frost$core$UInt8 $tmp41 = (frost$core$UInt8) {((uint8_t) $tmp40)};
$fn43 $tmp42 = ($fn43) param0->$class->vtable[2];
frost$core$Error* $tmp44 = $tmp42(param0, $tmp41);
if ($tmp44 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local0) = $tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:49
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp45 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:52
frost$core$Error* $tmp46 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Error* $tmp47 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp46;
block2:;
frost$core$Error* $tmp48 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local0) = ((frost$core$Error*) NULL);
goto block21;
block21:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt32 param1) {

frost$core$Error* local0 = NULL;
frost$io$ByteOrder local1;
frost$io$ByteOrder local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:63
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:64
frost$io$ByteOrder* $tmp49 = &param0->byteOrder;
frost$io$ByteOrder $tmp50 = *$tmp49;
frost$io$ByteOrder$wrapper* $tmp51;
$tmp51 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp51->value = $tmp50;
frost$core$Int $tmp52 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:64:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp53 = &(&local2)->$rawValue;
*$tmp53 = $tmp52;
frost$io$ByteOrder $tmp54 = *(&local2);
*(&local1) = $tmp54;
frost$io$ByteOrder $tmp55 = *(&local1);
frost$io$ByteOrder$wrapper* $tmp56;
$tmp56 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp56->value = $tmp55;
ITable* $tmp57 = ((frost$core$Equatable*) $tmp51)->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
frost$core$Bit $tmp60 = $tmp58(((frost$core$Equatable*) $tmp51), ((frost$core$Equatable*) $tmp56));
bool $tmp61 = $tmp60.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp56)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp51)));
if ($tmp61) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:65
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:65:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:972
uint32_t $tmp62 = param1.value;
frost$core$UInt16 $tmp63 = (frost$core$UInt16) {((uint16_t) $tmp62)};
$fn65 $tmp64 = ($fn65) param0->$class->vtable[3];
frost$core$Error* $tmp66 = $tmp64(param0, $tmp63);
if ($tmp66 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local0) = $tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:66
frost$core$UInt32 $tmp67 = (frost$core$UInt32) {16u};
// begin inline call to function frost.core.UInt32.>>(other:frost.core.UInt32):frost.core.UInt32 from OutputStream.frost:66:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:382
uint32_t $tmp68 = param1.value;
uint32_t $tmp69 = $tmp67.value;
uint32_t $tmp70 = $tmp68 >> $tmp69;
frost$core$UInt32 $tmp71 = (frost$core$UInt32) {$tmp70};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:66:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:972
uint32_t $tmp72 = $tmp71.value;
frost$core$UInt16 $tmp73 = (frost$core$UInt16) {((uint16_t) $tmp72)};
$fn75 $tmp74 = ($fn75) param0->$class->vtable[3];
frost$core$Error* $tmp76 = $tmp74(param0, $tmp73);
if ($tmp76 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local0) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:69
frost$core$UInt32 $tmp77 = (frost$core$UInt32) {16u};
// begin inline call to function frost.core.UInt32.>>(other:frost.core.UInt32):frost.core.UInt32 from OutputStream.frost:69:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:382
uint32_t $tmp78 = param1.value;
uint32_t $tmp79 = $tmp77.value;
uint32_t $tmp80 = $tmp78 >> $tmp79;
frost$core$UInt32 $tmp81 = (frost$core$UInt32) {$tmp80};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:69:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:972
uint32_t $tmp82 = $tmp81.value;
frost$core$UInt16 $tmp83 = (frost$core$UInt16) {((uint16_t) $tmp82)};
$fn85 $tmp84 = ($fn85) param0->$class->vtable[3];
frost$core$Error* $tmp86 = $tmp84(param0, $tmp83);
if ($tmp86 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local0) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
goto block1;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:70
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:70:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:972
uint32_t $tmp87 = param1.value;
frost$core$UInt16 $tmp88 = (frost$core$UInt16) {((uint16_t) $tmp87)};
$fn90 $tmp89 = ($fn90) param0->$class->vtable[3];
frost$core$Error* $tmp91 = $tmp89(param0, $tmp88);
if ($tmp91 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local0) = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:72
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:75
frost$core$Error* $tmp93 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Error* $tmp94 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp93;
block2:;
frost$core$Error* $tmp95 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local0) = ((frost$core$Error*) NULL);
goto block21;
block21:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt64 param1) {

frost$core$Error* local0 = NULL;
frost$io$ByteOrder local1;
frost$io$ByteOrder local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:86
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:87
frost$io$ByteOrder* $tmp96 = &param0->byteOrder;
frost$io$ByteOrder $tmp97 = *$tmp96;
frost$io$ByteOrder$wrapper* $tmp98;
$tmp98 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp98->value = $tmp97;
frost$core$Int $tmp99 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:87:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp100 = &(&local2)->$rawValue;
*$tmp100 = $tmp99;
frost$io$ByteOrder $tmp101 = *(&local2);
*(&local1) = $tmp101;
frost$io$ByteOrder $tmp102 = *(&local1);
frost$io$ByteOrder$wrapper* $tmp103;
$tmp103 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp103->value = $tmp102;
ITable* $tmp104 = ((frost$core$Equatable*) $tmp98)->$class->itable;
while ($tmp104->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp104 = $tmp104->next;
}
$fn106 $tmp105 = $tmp104->methods[0];
frost$core$Bit $tmp107 = $tmp105(((frost$core$Equatable*) $tmp98), ((frost$core$Equatable*) $tmp103));
bool $tmp108 = $tmp107.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp103)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp98)));
if ($tmp108) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:88
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:88:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:592
uint64_t $tmp109 = param1.value;
frost$core$UInt32 $tmp110 = (frost$core$UInt32) {((uint32_t) $tmp109)};
$fn112 $tmp111 = ($fn112) param0->$class->vtable[4];
frost$core$Error* $tmp113 = $tmp111(param0, $tmp110);
if ($tmp113 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local0) = $tmp113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:89
frost$core$UInt64 $tmp114 = (frost$core$UInt64) {32u};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from OutputStream.frost:89:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:202
uint64_t $tmp115 = param1.value;
uint64_t $tmp116 = $tmp114.value;
uint64_t $tmp117 = $tmp115 >> $tmp116;
frost$core$UInt64 $tmp118 = (frost$core$UInt64) {$tmp117};
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:89:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:592
uint64_t $tmp119 = $tmp118.value;
frost$core$UInt32 $tmp120 = (frost$core$UInt32) {((uint32_t) $tmp119)};
$fn122 $tmp121 = ($fn122) param0->$class->vtable[4];
frost$core$Error* $tmp123 = $tmp121(param0, $tmp120);
if ($tmp123 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local0) = $tmp123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:92
frost$core$UInt64 $tmp124 = (frost$core$UInt64) {32u};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from OutputStream.frost:92:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:202
uint64_t $tmp125 = param1.value;
uint64_t $tmp126 = $tmp124.value;
uint64_t $tmp127 = $tmp125 >> $tmp126;
frost$core$UInt64 $tmp128 = (frost$core$UInt64) {$tmp127};
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:92:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:592
uint64_t $tmp129 = $tmp128.value;
frost$core$UInt32 $tmp130 = (frost$core$UInt32) {((uint32_t) $tmp129)};
$fn132 $tmp131 = ($fn132) param0->$class->vtable[4];
frost$core$Error* $tmp133 = $tmp131(param0, $tmp130);
if ($tmp133 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local0) = $tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
goto block1;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:93
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:93:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:592
uint64_t $tmp134 = param1.value;
frost$core$UInt32 $tmp135 = (frost$core$UInt32) {((uint32_t) $tmp134)};
$fn137 $tmp136 = ($fn137) param0->$class->vtable[4];
frost$core$Error* $tmp138 = $tmp136(param0, $tmp135);
if ($tmp138 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local0) = $tmp138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:95
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp139 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:98
frost$core$Error* $tmp140 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Error* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp140;
block2:;
frost$core$Error* $tmp142 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local0) = ((frost$core$Error*) NULL);
goto block21;
block21:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:109
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from OutputStream.frost:109:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int8.frost:1208
int8_t $tmp143 = param1.value;
frost$core$UInt8 $tmp144 = (frost$core$UInt8) {((uint8_t) $tmp143)};
$fn146 $tmp145 = ($fn146) param0->$class->vtable[2];
frost$core$Error* $tmp147 = $tmp145(param0, $tmp144);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
return $tmp147;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:119
// begin inline call to function frost.core.Int16.get_asUInt16():frost.core.UInt16 from OutputStream.frost:119:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1130
int16_t $tmp148 = param1.value;
frost$core$UInt16 $tmp149 = (frost$core$UInt16) {((uint16_t) $tmp148)};
$fn151 $tmp150 = ($fn151) param0->$class->vtable[3];
frost$core$Error* $tmp152 = $tmp150(param0, $tmp149);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
return $tmp152;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:129
// begin inline call to function frost.core.Int32.get_asUInt32():frost.core.UInt32 from OutputStream.frost:129:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:1002
int32_t $tmp153 = param1.value;
frost$core$UInt32 $tmp154 = (frost$core$UInt32) {((uint32_t) $tmp153)};
$fn156 $tmp155 = ($fn156) param0->$class->vtable[4];
frost$core$Error* $tmp157 = $tmp155(param0, $tmp154);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
return $tmp157;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:139
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from OutputStream.frost:139:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:628
int64_t $tmp158 = param1.value;
frost$core$UInt64 $tmp159 = (frost$core$UInt64) {((uint64_t) $tmp158)};
$fn161 $tmp160 = ($fn161) param0->$class->vtable[5];
frost$core$Error* $tmp162 = $tmp160(param0, $tmp159);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
return $tmp162;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt8* param1, frost$core$Int param2) {

frost$core$Error* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:149
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:150
frost$core$Int $tmp163 = (frost$core$Int) {0u};
frost$core$Bit $tmp164 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp165 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp163, param2, $tmp164);
frost$core$Int $tmp166 = $tmp165.min;
*(&local1) = $tmp166;
frost$core$Int $tmp167 = $tmp165.max;
frost$core$Bit $tmp168 = $tmp165.inclusive;
bool $tmp169 = $tmp168.value;
frost$core$Int $tmp170 = (frost$core$Int) {1u};
if ($tmp169) goto block6; else goto block7;
block6:;
int64_t $tmp171 = $tmp166.value;
int64_t $tmp172 = $tmp167.value;
bool $tmp173 = $tmp171 <= $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block3; else goto block4;
block7:;
int64_t $tmp176 = $tmp166.value;
int64_t $tmp177 = $tmp167.value;
bool $tmp178 = $tmp176 < $tmp177;
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:151
frost$core$Int $tmp181 = *(&local1);
frost$core$Int64 $tmp182 = frost$core$Int64$init$frost$core$Int($tmp181);
int64_t $tmp183 = $tmp182.value;
frost$core$UInt8 $tmp184 = param1[$tmp183];
$fn186 $tmp185 = ($fn186) param0->$class->vtable[2];
frost$core$Error* $tmp187 = $tmp185(param0, $tmp184);
if ($tmp187 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local0) = $tmp187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:156
frost$core$Error* $tmp188 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Error* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp188;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Int $tmp190 = *(&local1);
int64_t $tmp191 = $tmp167.value;
int64_t $tmp192 = $tmp190.value;
int64_t $tmp193 = $tmp191 - $tmp192;
frost$core$Int $tmp194 = (frost$core$Int) {$tmp193};
if ($tmp169) goto block11; else goto block12;
block11:;
int64_t $tmp195 = $tmp194.value;
int64_t $tmp196 = $tmp170.value;
bool $tmp197 = $tmp195 >= $tmp196;
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block10; else goto block4;
block12:;
int64_t $tmp200 = $tmp194.value;
int64_t $tmp201 = $tmp170.value;
bool $tmp202 = $tmp200 > $tmp201;
frost$core$Bit $tmp203 = (frost$core$Bit) {$tmp202};
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block10; else goto block4;
block10:;
int64_t $tmp205 = $tmp190.value;
int64_t $tmp206 = $tmp170.value;
int64_t $tmp207 = $tmp205 + $tmp206;
frost$core$Int $tmp208 = (frost$core$Int) {$tmp207};
*(&local1) = $tmp208;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:153
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp209 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
frost$core$Error* $tmp210 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local0) = ((frost$core$Error*) NULL);
goto block13;
block13:;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int8* param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:168
$fn212 $tmp211 = ($fn212) param0->$class->vtable[10];
frost$core$Error* $tmp213 = $tmp211(param0, ((frost$core$UInt8*) param1), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
return $tmp213;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Char8* param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:179
$fn215 $tmp214 = ($fn215) param0->$class->vtable[10];
frost$core$Error* $tmp216 = $tmp214(param0, ((frost$core$UInt8*) param1), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
return $tmp216;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int param2) {

frost$core$Error* local0 = NULL;
frost$core$UInt8 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:191
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:192
ITable* $tmp217 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp217->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp217 = $tmp217->next;
}
$fn219 $tmp218 = $tmp217->methods[0];
frost$collections$Iterator* $tmp220 = $tmp218(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp221 = $tmp220->$class->itable;
while ($tmp221->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp221 = $tmp221->next;
}
$fn223 $tmp222 = $tmp221->methods[0];
frost$core$Bit $tmp224 = $tmp222($tmp220);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block5; else goto block4;
block4:;
ITable* $tmp226 = $tmp220->$class->itable;
while ($tmp226->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp226 = $tmp226->next;
}
$fn228 $tmp227 = $tmp226->methods[1];
frost$core$Object* $tmp229 = $tmp227($tmp220);
*(&local1) = ((frost$core$UInt8$wrapper*) $tmp229)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:193
frost$core$UInt8 $tmp230 = *(&local1);
$fn232 $tmp231 = ($fn232) param0->$class->vtable[2];
frost$core$Error* $tmp233 = $tmp231(param0, $tmp230);
if ($tmp233 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local0) = $tmp233;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q($tmp229);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:198
frost$core$Error* $tmp234 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Error* $tmp235 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp234;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q($tmp229);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:195
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
frost$core$Error* $tmp237 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local0) = ((frost$core$Error*) NULL);
goto block8;
block8:;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int param2) {

frost$core$Error* local0 = NULL;
frost$core$Int8 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:211
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:212
ITable* $tmp238 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp238->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp238 = $tmp238->next;
}
$fn240 $tmp239 = $tmp238->methods[0];
frost$collections$Iterator* $tmp241 = $tmp239(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp242 = $tmp241->$class->itable;
while ($tmp242->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
frost$core$Bit $tmp245 = $tmp243($tmp241);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block5; else goto block4;
block4:;
ITable* $tmp247 = $tmp241->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[1];
frost$core$Object* $tmp250 = $tmp248($tmp241);
*(&local1) = ((frost$core$Int8$wrapper*) $tmp250)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:213
frost$core$Int8 $tmp251 = *(&local1);
// begin inline call to method frost.io.OutputStream.write(value:frost.core.Int8):frost.core.Error? from OutputStream.frost:213:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:109
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from OutputStream.frost:109:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int8.frost:1208
int8_t $tmp252 = $tmp251.value;
frost$core$UInt8 $tmp253 = (frost$core$UInt8) {((uint8_t) $tmp252)};
$fn255 $tmp254 = ($fn255) param0->$class->vtable[2];
frost$core$Error* $tmp256 = $tmp254(param0, $tmp253);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
if ($tmp256 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local0) = $tmp256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q($tmp250);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:218
frost$core$Error* $tmp257 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Error* $tmp258 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp257;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q($tmp250);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:215
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp259 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
frost$core$Error* $tmp260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local0) = ((frost$core$Error*) NULL);
goto block10;
block10:;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int param2) {

frost$core$Error* local0 = NULL;
frost$core$Char8 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:231
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:232
ITable* $tmp261 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp261->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp261 = $tmp261->next;
}
$fn263 $tmp262 = $tmp261->methods[0];
frost$collections$Iterator* $tmp264 = $tmp262(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp265 = $tmp264->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[0];
frost$core$Bit $tmp268 = $tmp266($tmp264);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block5; else goto block4;
block4:;
ITable* $tmp270 = $tmp264->$class->itable;
while ($tmp270->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[1];
frost$core$Object* $tmp273 = $tmp271($tmp264);
*(&local1) = ((frost$core$Char8$wrapper*) $tmp273)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:233
frost$core$Char8 $tmp274 = *(&local1);
$fn276 $tmp275 = ($fn276) param0->$class->vtable[16];
frost$core$Error* $tmp277 = $tmp275(param0, $tmp274);
if ($tmp277 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local0) = $tmp277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$Frost$unref$frost$core$Object$Q($tmp273);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:238
frost$core$Error* $tmp278 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Error* $tmp279 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp278;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$Frost$unref$frost$core$Object$Q($tmp273);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp280 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
frost$core$Error* $tmp281 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local0) = ((frost$core$Error*) NULL);
goto block8;
block8:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:248
uint8_t $tmp282 = param1.value;
frost$core$UInt8 $tmp283 = (frost$core$UInt8) {$tmp282};
$fn285 $tmp284 = ($fn285) param0->$class->vtable[2];
frost$core$Error* $tmp286 = $tmp284(param0, $tmp283);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
return $tmp286;

}
frost$core$Error* frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:257
frost$core$Char8** $tmp287 = &param1->data;
frost$core$Char8* $tmp288 = *$tmp287;
frost$core$Int* $tmp289 = &param1->_length;
frost$core$Int $tmp290 = *$tmp289;
// begin inline call to method frost.io.OutputStream.write(ptr:frost.unsafe.Pointer<frost.core.Char8>, count:frost.core.Int):frost.core.Error? from OutputStream.frost:257:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:179
$fn292 $tmp291 = ($fn292) param0->$class->vtable[10];
frost$core$Error* $tmp293 = $tmp291(param0, ((frost$core$UInt8*) $tmp288), $tmp290);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
return $tmp293;

}
frost$core$Error* frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:267
$fn295 $tmp294 = ($fn295) param1->$class->vtable[0];
frost$core$String* $tmp296 = $tmp294(param1);
$fn298 $tmp297 = ($fn298) param0->$class->vtable[17];
frost$core$Error* $tmp299 = $tmp297(param0, $tmp296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
return $tmp299;

}
frost$core$Error* frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:276
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:277
$fn301 $tmp300 = ($fn301) param0->$class->vtable[17];
frost$core$Error* $tmp302 = $tmp300(param0, param1);
if ($tmp302 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local0) = $tmp302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:278
$fn304 $tmp303 = ($fn304) param0->$class->vtable[21];
frost$core$Error* $tmp305 = $tmp303(param0);
if ($tmp305 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local0) = $tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:279
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp306 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:282
frost$core$Error* $tmp307 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Error* $tmp308 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp307;
block2:;
frost$core$Error* $tmp309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local0) = ((frost$core$Error*) NULL);
goto block7;
block7:;

}
frost$core$Error* frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:293
$fn311 $tmp310 = ($fn311) param1->$class->vtable[0];
frost$core$String* $tmp312 = $tmp310(param1);
$fn314 $tmp313 = ($fn314) param0->$class->vtable[19];
frost$core$Error* $tmp315 = $tmp313(param0, $tmp312);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
return $tmp315;

}
frost$core$Error* frost$io$OutputStream$printLine$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:300
frost$core$String** $tmp316 = &param0->lineEnding;
frost$core$String* $tmp317 = *$tmp316;
$fn319 $tmp318 = ($fn319) param0->$class->vtable[17];
frost$core$Error* $tmp320 = $tmp318(param0, $tmp317);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
return $tmp320;

}
frost$core$Error* frost$io$OutputStream$flush$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:309
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
frost$core$Error* frost$io$OutputStream$close$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:313
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
void frost$io$OutputStream$init(frost$io$OutputStream* param0) {

frost$io$ByteOrder local0;
frost$io$ByteOrder local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:17
frost$core$Int $tmp321 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:17:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp322 = &(&local1)->$rawValue;
*$tmp322 = $tmp321;
frost$io$ByteOrder $tmp323 = *(&local1);
*(&local0) = $tmp323;
frost$io$ByteOrder $tmp324 = *(&local0);
frost$io$ByteOrder* $tmp325 = &param0->byteOrder;
*$tmp325 = $tmp324;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s326));
frost$core$String** $tmp327 = &param0->lineEnding;
frost$core$String* $tmp328 = *$tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$String** $tmp329 = &param0->lineEnding;
*$tmp329 = &$s330;
return;

}
void frost$io$OutputStream$cleanup(frost$io$OutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/OutputStream.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp331 = &param0->lineEnding;
frost$core$String* $tmp332 = *$tmp331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
return;

}

