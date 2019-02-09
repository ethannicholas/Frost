#include "frost/io/OutputStream.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Error.h"
#include "frost/core/UInt16.h"
#include "frost/io/ByteOrder.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Char8.h"


static frost$core$String $s1;
frost$io$OutputStream$class_type frost$io$OutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$OutputStream$cleanup, NULL, frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$R$frost$core$Error$Q, frost$io$OutputStream$flush$R$frost$core$Error$Q, frost$io$OutputStream$close$R$frost$core$Error$Q} };

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
typedef frost$core$Error* (*$fn187)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn215)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Error* (*$fn218)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn222)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn226)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn231)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn235)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$collections$Iterator* (*$fn243)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn247)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn252)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn258)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$collections$Iterator* (*$fn266)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn270)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn275)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn279)(frost$io$OutputStream*, frost$core$Char8);
typedef frost$core$Error* (*$fn288)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn295)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$String* (*$fn298)(frost$core$Object*);
typedef frost$core$Error* (*$fn301)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn304)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn307)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn314)(frost$core$Object*);
typedef frost$core$Error* (*$fn317)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn322)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 21, -1851160247464291148, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };

frost$core$Error* frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt16 param1) {

frost$core$Error* local0 = NULL;
frost$io$ByteOrder local1;
frost$io$ByteOrder local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:40
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:41
frost$io$ByteOrder* $tmp2 = &param0->byteOrder;
frost$io$ByteOrder $tmp3 = *$tmp2;
frost$io$ByteOrder$wrapper* $tmp4;
$tmp4 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int64 $tmp5 = (frost$core$Int64) {0};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int64):frost.io.ByteOrder from OutputStream.frost:41:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int64* $tmp6 = &(&local2)->$rawValue;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:42
// begin inline call to function frost.core.UInt16.get_asUInt8():frost.core.UInt8 from OutputStream.frost:42:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt16.stub:747
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:43
frost$core$UInt16 $tmp20 = (frost$core$UInt16) {8};
// begin inline call to function frost.core.UInt16.>>(other:frost.core.UInt16):frost.core.UInt32 from OutputStream.frost:43:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt16.stub:351
uint16_t $tmp21 = param1.value;
uint16_t $tmp22 = $tmp20.value;
uint32_t $tmp23 = ((uint32_t) $tmp21) >> ((uint32_t) $tmp22);
frost$core$UInt32 $tmp24 = frost$core$UInt32$init$builtin_uint32($tmp23);
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from OutputStream.frost:43:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt32.stub:619
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:46
frost$core$UInt16 $tmp30 = (frost$core$UInt16) {8};
// begin inline call to function frost.core.UInt16.>>(other:frost.core.UInt16):frost.core.UInt32 from OutputStream.frost:46:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt16.stub:351
uint16_t $tmp31 = param1.value;
uint16_t $tmp32 = $tmp30.value;
uint32_t $tmp33 = ((uint32_t) $tmp31) >> ((uint32_t) $tmp32);
frost$core$UInt32 $tmp34 = frost$core$UInt32$init$builtin_uint32($tmp33);
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from OutputStream.frost:46:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt32.stub:619
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:47
// begin inline call to function frost.core.UInt16.get_asUInt8():frost.core.UInt8 from OutputStream.frost:47:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt16.stub:747
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:49
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp45 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:52
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:63
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:64
frost$io$ByteOrder* $tmp49 = &param0->byteOrder;
frost$io$ByteOrder $tmp50 = *$tmp49;
frost$io$ByteOrder$wrapper* $tmp51;
$tmp51 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp51->value = $tmp50;
frost$core$Int64 $tmp52 = (frost$core$Int64) {0};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int64):frost.io.ByteOrder from OutputStream.frost:64:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int64* $tmp53 = &(&local2)->$rawValue;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:65
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:65:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt32.stub:623
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:66
frost$core$UInt32 $tmp67 = (frost$core$UInt32) {16};
// begin inline call to function frost.core.UInt32.>>(other:frost.core.UInt32):frost.core.UInt32 from OutputStream.frost:66:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt32.stub:228
uint32_t $tmp68 = param1.value;
uint32_t $tmp69 = $tmp67.value;
uint32_t $tmp70 = $tmp68 >> $tmp69;
frost$core$UInt32 $tmp71 = frost$core$UInt32$init$builtin_uint32($tmp70);
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:66:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt32.stub:623
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:69
frost$core$UInt32 $tmp77 = (frost$core$UInt32) {16};
// begin inline call to function frost.core.UInt32.>>(other:frost.core.UInt32):frost.core.UInt32 from OutputStream.frost:69:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt32.stub:228
uint32_t $tmp78 = param1.value;
uint32_t $tmp79 = $tmp77.value;
uint32_t $tmp80 = $tmp78 >> $tmp79;
frost$core$UInt32 $tmp81 = frost$core$UInt32$init$builtin_uint32($tmp80);
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:69:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt32.stub:623
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:70
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:70:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt32.stub:623
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:72
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:75
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:86
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:87
frost$io$ByteOrder* $tmp96 = &param0->byteOrder;
frost$io$ByteOrder $tmp97 = *$tmp96;
frost$io$ByteOrder$wrapper* $tmp98;
$tmp98 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp98->value = $tmp97;
frost$core$Int64 $tmp99 = (frost$core$Int64) {0};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int64):frost.io.ByteOrder from OutputStream.frost:87:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int64* $tmp100 = &(&local2)->$rawValue;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:88
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:88:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:413
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:89
frost$core$UInt64 $tmp114 = (frost$core$UInt64) {32};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from OutputStream.frost:89:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:150
uint64_t $tmp115 = param1.value;
uint64_t $tmp116 = $tmp114.value;
uint64_t $tmp117 = $tmp115 >> $tmp116;
frost$core$UInt64 $tmp118 = frost$core$UInt64$init$builtin_uint64($tmp117);
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:89:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:413
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:92
frost$core$UInt64 $tmp124 = (frost$core$UInt64) {32};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from OutputStream.frost:92:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:150
uint64_t $tmp125 = param1.value;
uint64_t $tmp126 = $tmp124.value;
uint64_t $tmp127 = $tmp125 >> $tmp126;
frost$core$UInt64 $tmp128 = frost$core$UInt64$init$builtin_uint64($tmp127);
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:92:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:413
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:93
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:93:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:413
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:95
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp139 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:98
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

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:109
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from OutputStream.frost:109:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int8.stub:823
int8_t $tmp143 = param1.value;
frost$core$UInt8 $tmp144 = (frost$core$UInt8) {((uint8_t) $tmp143)};
$fn146 $tmp145 = ($fn146) param0->$class->vtable[2];
frost$core$Error* $tmp147 = $tmp145(param0, $tmp144);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
return $tmp147;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:119
// begin inline call to function frost.core.Int16.get_asUInt16():frost.core.UInt16 from OutputStream.frost:119:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int16.stub:751
int16_t $tmp148 = param1.value;
frost$core$UInt16 $tmp149 = (frost$core$UInt16) {((uint16_t) $tmp148)};
$fn151 $tmp150 = ($fn151) param0->$class->vtable[3];
frost$core$Error* $tmp152 = $tmp150(param0, $tmp149);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
return $tmp152;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:129
// begin inline call to function frost.core.Int32.get_asUInt32():frost.core.UInt32 from OutputStream.frost:129:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int32.stub:629
int32_t $tmp153 = param1.value;
frost$core$UInt32 $tmp154 = (frost$core$UInt32) {((uint32_t) $tmp153)};
$fn156 $tmp155 = ($fn156) param0->$class->vtable[4];
frost$core$Error* $tmp157 = $tmp155(param0, $tmp154);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
return $tmp157;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:139
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from OutputStream.frost:139:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp158 = param1.value;
frost$core$UInt64 $tmp159 = (frost$core$UInt64) {((uint64_t) $tmp158)};
$fn161 $tmp160 = ($fn161) param0->$class->vtable[5];
frost$core$Error* $tmp162 = $tmp160(param0, $tmp159);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
return $tmp162;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt8* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:149
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:150
frost$core$Int64 $tmp163 = (frost$core$Int64) {0};
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp165 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp163, param2, $tmp164);
frost$core$Int64 $tmp166 = $tmp165.min;
*(&local1) = $tmp166;
frost$core$Int64 $tmp167 = $tmp165.max;
frost$core$Bit $tmp168 = $tmp165.inclusive;
bool $tmp169 = $tmp168.value;
frost$core$Int64 $tmp170 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp171 = $tmp170.value;
frost$core$UInt64 $tmp172 = (frost$core$UInt64) {((uint64_t) $tmp171)};
if ($tmp169) goto block7; else goto block8;
block7:;
int64_t $tmp173 = $tmp166.value;
int64_t $tmp174 = $tmp167.value;
bool $tmp175 = $tmp173 <= $tmp174;
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175};
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block4; else goto block5;
block8:;
int64_t $tmp178 = $tmp166.value;
int64_t $tmp179 = $tmp167.value;
bool $tmp180 = $tmp178 < $tmp179;
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:151
frost$core$Int64 $tmp183 = *(&local1);
int64_t $tmp184 = $tmp183.value;
frost$core$UInt8 $tmp185 = param1[$tmp184];
$fn187 $tmp186 = ($fn187) param0->$class->vtable[2];
frost$core$Error* $tmp188 = $tmp186(param0, $tmp185);
if ($tmp188 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local0) = $tmp188;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:156
frost$core$Error* $tmp189 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Error* $tmp190 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp189;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Int64 $tmp191 = *(&local1);
int64_t $tmp192 = $tmp167.value;
int64_t $tmp193 = $tmp191.value;
int64_t $tmp194 = $tmp192 - $tmp193;
frost$core$Int64 $tmp195 = (frost$core$Int64) {$tmp194};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp196 = $tmp195.value;
frost$core$UInt64 $tmp197 = (frost$core$UInt64) {((uint64_t) $tmp196)};
if ($tmp169) goto block13; else goto block14;
block13:;
uint64_t $tmp198 = $tmp197.value;
uint64_t $tmp199 = $tmp172.value;
bool $tmp200 = $tmp198 >= $tmp199;
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200};
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block11; else goto block5;
block14:;
uint64_t $tmp203 = $tmp197.value;
uint64_t $tmp204 = $tmp172.value;
bool $tmp205 = $tmp203 > $tmp204;
frost$core$Bit $tmp206 = (frost$core$Bit) {$tmp205};
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block11; else goto block5;
block11:;
int64_t $tmp208 = $tmp191.value;
int64_t $tmp209 = $tmp170.value;
int64_t $tmp210 = $tmp208 + $tmp209;
frost$core$Int64 $tmp211 = (frost$core$Int64) {$tmp210};
*(&local1) = $tmp211;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:153
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp212 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
frost$core$Error* $tmp213 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local0) = ((frost$core$Error*) NULL);
goto block15;
block15:;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int8* param1, frost$core$Int64 param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:168
$fn215 $tmp214 = ($fn215) param0->$class->vtable[10];
frost$core$Error* $tmp216 = $tmp214(param0, ((frost$core$UInt8*) param1), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
return $tmp216;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Char8* param1, frost$core$Int64 param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:179
$fn218 $tmp217 = ($fn218) param0->$class->vtable[10];
frost$core$Error* $tmp219 = $tmp217(param0, ((frost$core$UInt8*) param1), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
return $tmp219;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$UInt8 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:191
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:192
ITable* $tmp220 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp220->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp220 = $tmp220->next;
}
$fn222 $tmp221 = $tmp220->methods[0];
frost$collections$Iterator* $tmp223 = $tmp221(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp224 = $tmp223->$class->itable;
while ($tmp224->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp224 = $tmp224->next;
}
$fn226 $tmp225 = $tmp224->methods[0];
frost$core$Bit $tmp227 = $tmp225($tmp223);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block5; else goto block4;
block4:;
ITable* $tmp229 = $tmp223->$class->itable;
while ($tmp229->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp229 = $tmp229->next;
}
$fn231 $tmp230 = $tmp229->methods[1];
frost$core$Object* $tmp232 = $tmp230($tmp223);
*(&local1) = ((frost$core$UInt8$wrapper*) $tmp232)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:193
frost$core$UInt8 $tmp233 = *(&local1);
$fn235 $tmp234 = ($fn235) param0->$class->vtable[2];
frost$core$Error* $tmp236 = $tmp234(param0, $tmp233);
if ($tmp236 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local0) = $tmp236;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$Frost$unref$frost$core$Object$Q($tmp232);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:198
frost$core$Error* $tmp237 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Error* $tmp238 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp237;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$Frost$unref$frost$core$Object$Q($tmp232);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:195
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
frost$core$Error* $tmp240 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local0) = ((frost$core$Error*) NULL);
goto block8;
block8:;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$Int8 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:211
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:212
ITable* $tmp241 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp241->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp241 = $tmp241->next;
}
$fn243 $tmp242 = $tmp241->methods[0];
frost$collections$Iterator* $tmp244 = $tmp242(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp245 = $tmp244->$class->itable;
while ($tmp245->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
frost$core$Bit $tmp248 = $tmp246($tmp244);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block5; else goto block4;
block4:;
ITable* $tmp250 = $tmp244->$class->itable;
while ($tmp250->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[1];
frost$core$Object* $tmp253 = $tmp251($tmp244);
*(&local1) = ((frost$core$Int8$wrapper*) $tmp253)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:213
frost$core$Int8 $tmp254 = *(&local1);
// begin inline call to method frost.io.OutputStream.write(value:frost.core.Int8):frost.core.Error? from OutputStream.frost:213:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:109
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from OutputStream.frost:109:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int8.stub:823
int8_t $tmp255 = $tmp254.value;
frost$core$UInt8 $tmp256 = (frost$core$UInt8) {((uint8_t) $tmp255)};
$fn258 $tmp257 = ($fn258) param0->$class->vtable[2];
frost$core$Error* $tmp259 = $tmp257(param0, $tmp256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
if ($tmp259 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local0) = $tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q($tmp253);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:218
frost$core$Error* $tmp260 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Error* $tmp261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp260;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q($tmp253);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:215
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
frost$core$Error* $tmp263 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local0) = ((frost$core$Error*) NULL);
goto block10;
block10:;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$Char8 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:231
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:232
ITable* $tmp264 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp264->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[0];
frost$collections$Iterator* $tmp267 = $tmp265(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp268 = $tmp267->$class->itable;
while ($tmp268->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp268 = $tmp268->next;
}
$fn270 $tmp269 = $tmp268->methods[0];
frost$core$Bit $tmp271 = $tmp269($tmp267);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block5; else goto block4;
block4:;
ITable* $tmp273 = $tmp267->$class->itable;
while ($tmp273->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp273 = $tmp273->next;
}
$fn275 $tmp274 = $tmp273->methods[1];
frost$core$Object* $tmp276 = $tmp274($tmp267);
*(&local1) = ((frost$core$Char8$wrapper*) $tmp276)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:233
frost$core$Char8 $tmp277 = *(&local1);
$fn279 $tmp278 = ($fn279) param0->$class->vtable[16];
frost$core$Error* $tmp280 = $tmp278(param0, $tmp277);
if ($tmp280 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local0) = $tmp280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q($tmp276);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:238
frost$core$Error* $tmp281 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Error* $tmp282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp281;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q($tmp276);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp283 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
frost$core$Error* $tmp284 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local0) = ((frost$core$Error*) NULL);
goto block8;
block8:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:248
uint8_t $tmp285 = param1.value;
frost$core$UInt8 $tmp286 = frost$core$UInt8$init$builtin_uint8($tmp285);
$fn288 $tmp287 = ($fn288) param0->$class->vtable[2];
frost$core$Error* $tmp289 = $tmp287(param0, $tmp286);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
return $tmp289;

}
frost$core$Error* frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:257
frost$core$Char8** $tmp290 = &param1->data;
frost$core$Char8* $tmp291 = *$tmp290;
frost$core$Int64* $tmp292 = &param1->_length;
frost$core$Int64 $tmp293 = *$tmp292;
// begin inline call to method frost.io.OutputStream.write(ptr:frost.unsafe.Pointer<frost.core.Char8>, count:frost.core.Int64):frost.core.Error? from OutputStream.frost:257:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:179
$fn295 $tmp294 = ($fn295) param0->$class->vtable[10];
frost$core$Error* $tmp296 = $tmp294(param0, ((frost$core$UInt8*) $tmp291), $tmp293);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
return $tmp296;

}
frost$core$Error* frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:267
$fn298 $tmp297 = ($fn298) param1->$class->vtable[0];
frost$core$String* $tmp299 = $tmp297(param1);
$fn301 $tmp300 = ($fn301) param0->$class->vtable[17];
frost$core$Error* $tmp302 = $tmp300(param0, $tmp299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
return $tmp302;

}
frost$core$Error* frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:276
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:277
$fn304 $tmp303 = ($fn304) param0->$class->vtable[17];
frost$core$Error* $tmp305 = $tmp303(param0, param1);
if ($tmp305 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local0) = $tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:278
$fn307 $tmp306 = ($fn307) param0->$class->vtable[21];
frost$core$Error* $tmp308 = $tmp306(param0);
if ($tmp308 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local0) = $tmp308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:279
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:282
frost$core$Error* $tmp310 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
frost$core$Error* $tmp311 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp310;
block2:;
frost$core$Error* $tmp312 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local0) = ((frost$core$Error*) NULL);
goto block7;
block7:;

}
frost$core$Error* frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:293
$fn314 $tmp313 = ($fn314) param1->$class->vtable[0];
frost$core$String* $tmp315 = $tmp313(param1);
$fn317 $tmp316 = ($fn317) param0->$class->vtable[19];
frost$core$Error* $tmp318 = $tmp316(param0, $tmp315);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
return $tmp318;

}
frost$core$Error* frost$io$OutputStream$printLine$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:300
frost$core$String** $tmp319 = &param0->lineEnding;
frost$core$String* $tmp320 = *$tmp319;
$fn322 $tmp321 = ($fn322) param0->$class->vtable[17];
frost$core$Error* $tmp323 = $tmp321(param0, $tmp320);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
return $tmp323;

}
frost$core$Error* frost$io$OutputStream$flush$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:309
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
frost$core$Error* frost$io$OutputStream$close$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:313
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
void frost$io$OutputStream$init(frost$io$OutputStream* param0) {

frost$io$ByteOrder local0;
frost$io$ByteOrder local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:17
frost$core$Int64 $tmp324 = (frost$core$Int64) {0};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int64):frost.io.ByteOrder from OutputStream.frost:17:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int64* $tmp325 = &(&local1)->$rawValue;
*$tmp325 = $tmp324;
frost$io$ByteOrder $tmp326 = *(&local1);
*(&local0) = $tmp326;
frost$io$ByteOrder $tmp327 = *(&local0);
frost$io$ByteOrder* $tmp328 = &param0->byteOrder;
*$tmp328 = $tmp327;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s329));
frost$core$String** $tmp330 = &param0->lineEnding;
frost$core$String* $tmp331 = *$tmp330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$String** $tmp332 = &param0->lineEnding;
*$tmp332 = &$s333;
return;

}
void frost$io$OutputStream$cleanup(frost$io$OutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp334 = &param0->lineEnding;
frost$core$String* $tmp335 = *$tmp334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
return;

}

