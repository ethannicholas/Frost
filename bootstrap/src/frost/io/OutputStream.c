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

typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn15)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn21)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn27)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn31)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Bit (*$fn45)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn50)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn56)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn62)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn66)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Bit (*$fn80)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn85)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn91)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn97)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn101)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn109)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn113)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn117)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn121)(frost$io$OutputStream*, frost$core$UInt64);
typedef frost$core$Error* (*$fn146)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn173)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Error* (*$fn176)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn180)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn184)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn189)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn193)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$collections$Iterator* (*$fn201)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn205)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn210)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn220)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn224)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn229)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn233)(frost$io$OutputStream*, frost$core$Char8);
typedef frost$core$Error* (*$fn242)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$String* (*$fn250)(frost$core$Object*);
typedef frost$core$Error* (*$fn253)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn256)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn259)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn266)(frost$core$Object*);
typedef frost$core$Error* (*$fn269)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn274)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 21, -1851160247464291148, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };

frost$core$Error* frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt16 param1) {

frost$core$Error* local0 = NULL;
// line 40
*(&local0) = ((frost$core$Error*) NULL);
// line 41
frost$io$ByteOrder* $tmp2 = &param0->byteOrder;
frost$io$ByteOrder $tmp3 = *$tmp2;
frost$io$ByteOrder$wrapper* $tmp4;
$tmp4 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int64 $tmp5 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp6 = frost$io$ByteOrder$init$frost$core$Int64($tmp5);
frost$io$ByteOrder$wrapper* $tmp7;
$tmp7 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp7->value = $tmp6;
ITable* $tmp8 = ((frost$core$Equatable*) $tmp4)->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Bit $tmp11 = $tmp9(((frost$core$Equatable*) $tmp4), ((frost$core$Equatable*) $tmp7));
bool $tmp12 = $tmp11.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp7)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
if ($tmp12) goto block3; else goto block5;
block3:;
// line 42
frost$core$UInt8 $tmp13 = frost$core$UInt16$get_asUInt8$R$frost$core$UInt8(param1);
$fn15 $tmp14 = ($fn15) param0->$class->vtable[2];
frost$core$Error* $tmp16 = $tmp14(param0, $tmp13);
if ($tmp16 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local0) = $tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// line 43
frost$core$UInt16 $tmp17 = (frost$core$UInt16) {8};
frost$core$UInt32 $tmp18 = frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32(param1, $tmp17);
frost$core$UInt8 $tmp19 = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8($tmp18);
$fn21 $tmp20 = ($fn21) param0->$class->vtable[2];
frost$core$Error* $tmp22 = $tmp20(param0, $tmp19);
if ($tmp22 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local0) = $tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
goto block4;
block5:;
// line 1
// line 46
frost$core$UInt16 $tmp23 = (frost$core$UInt16) {8};
frost$core$UInt32 $tmp24 = frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32(param1, $tmp23);
frost$core$UInt8 $tmp25 = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8($tmp24);
$fn27 $tmp26 = ($fn27) param0->$class->vtable[2];
frost$core$Error* $tmp28 = $tmp26(param0, $tmp25);
if ($tmp28 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local0) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// line 47
frost$core$UInt8 $tmp29 = frost$core$UInt16$get_asUInt8$R$frost$core$UInt8(param1);
$fn31 $tmp30 = ($fn31) param0->$class->vtable[2];
frost$core$Error* $tmp32 = $tmp30(param0, $tmp29);
if ($tmp32 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local0) = $tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
goto block4;
block4:;
// line 49
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp33 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 52
frost$core$Error* $tmp34 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Error* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp34;
block2:;
frost$core$Error* $tmp36 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local0) = ((frost$core$Error*) NULL);
goto block14;
block14:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt32 param1) {

frost$core$Error* local0 = NULL;
// line 63
*(&local0) = ((frost$core$Error*) NULL);
// line 64
frost$io$ByteOrder* $tmp37 = &param0->byteOrder;
frost$io$ByteOrder $tmp38 = *$tmp37;
frost$io$ByteOrder$wrapper* $tmp39;
$tmp39 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp39->value = $tmp38;
frost$core$Int64 $tmp40 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp41 = frost$io$ByteOrder$init$frost$core$Int64($tmp40);
frost$io$ByteOrder$wrapper* $tmp42;
$tmp42 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp42->value = $tmp41;
ITable* $tmp43 = ((frost$core$Equatable*) $tmp39)->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[0];
frost$core$Bit $tmp46 = $tmp44(((frost$core$Equatable*) $tmp39), ((frost$core$Equatable*) $tmp42));
bool $tmp47 = $tmp46.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp42)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp39)));
if ($tmp47) goto block3; else goto block5;
block3:;
// line 65
frost$core$UInt16 $tmp48 = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16(param1);
$fn50 $tmp49 = ($fn50) param0->$class->vtable[3];
frost$core$Error* $tmp51 = $tmp49(param0, $tmp48);
if ($tmp51 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local0) = $tmp51;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// line 66
frost$core$UInt32 $tmp52 = (frost$core$UInt32) {16};
frost$core$UInt32 $tmp53 = frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(param1, $tmp52);
frost$core$UInt16 $tmp54 = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16($tmp53);
$fn56 $tmp55 = ($fn56) param0->$class->vtable[3];
frost$core$Error* $tmp57 = $tmp55(param0, $tmp54);
if ($tmp57 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local0) = $tmp57;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
goto block4;
block5:;
// line 1
// line 69
frost$core$UInt32 $tmp58 = (frost$core$UInt32) {16};
frost$core$UInt32 $tmp59 = frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(param1, $tmp58);
frost$core$UInt16 $tmp60 = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16($tmp59);
$fn62 $tmp61 = ($fn62) param0->$class->vtable[3];
frost$core$Error* $tmp63 = $tmp61(param0, $tmp60);
if ($tmp63 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local0) = $tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// line 70
frost$core$UInt16 $tmp64 = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16(param1);
$fn66 $tmp65 = ($fn66) param0->$class->vtable[3];
frost$core$Error* $tmp67 = $tmp65(param0, $tmp64);
if ($tmp67 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local0) = $tmp67;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
goto block4;
block4:;
// line 72
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 75
frost$core$Error* $tmp69 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Error* $tmp70 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp69;
block2:;
frost$core$Error* $tmp71 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local0) = ((frost$core$Error*) NULL);
goto block14;
block14:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt64 param1) {

frost$core$Error* local0 = NULL;
// line 86
*(&local0) = ((frost$core$Error*) NULL);
// line 87
frost$io$ByteOrder* $tmp72 = &param0->byteOrder;
frost$io$ByteOrder $tmp73 = *$tmp72;
frost$io$ByteOrder$wrapper* $tmp74;
$tmp74 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp74->value = $tmp73;
frost$core$Int64 $tmp75 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp76 = frost$io$ByteOrder$init$frost$core$Int64($tmp75);
frost$io$ByteOrder$wrapper* $tmp77;
$tmp77 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp77->value = $tmp76;
ITable* $tmp78 = ((frost$core$Equatable*) $tmp74)->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp78 = $tmp78->next;
}
$fn80 $tmp79 = $tmp78->methods[0];
frost$core$Bit $tmp81 = $tmp79(((frost$core$Equatable*) $tmp74), ((frost$core$Equatable*) $tmp77));
bool $tmp82 = $tmp81.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp77)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp74)));
if ($tmp82) goto block3; else goto block5;
block3:;
// line 88
frost$core$UInt32 $tmp83 = frost$core$UInt64$get_asUInt32$R$frost$core$UInt32(param1);
$fn85 $tmp84 = ($fn85) param0->$class->vtable[4];
frost$core$Error* $tmp86 = $tmp84(param0, $tmp83);
if ($tmp86 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local0) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// line 89
frost$core$UInt64 $tmp87 = (frost$core$UInt64) {32};
frost$core$UInt64 $tmp88 = frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(param1, $tmp87);
frost$core$UInt32 $tmp89 = frost$core$UInt64$get_asUInt32$R$frost$core$UInt32($tmp88);
$fn91 $tmp90 = ($fn91) param0->$class->vtable[4];
frost$core$Error* $tmp92 = $tmp90(param0, $tmp89);
if ($tmp92 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local0) = $tmp92;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
goto block4;
block5:;
// line 1
// line 92
frost$core$UInt64 $tmp93 = (frost$core$UInt64) {32};
frost$core$UInt64 $tmp94 = frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(param1, $tmp93);
frost$core$UInt32 $tmp95 = frost$core$UInt64$get_asUInt32$R$frost$core$UInt32($tmp94);
$fn97 $tmp96 = ($fn97) param0->$class->vtable[4];
frost$core$Error* $tmp98 = $tmp96(param0, $tmp95);
if ($tmp98 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local0) = $tmp98;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// line 93
frost$core$UInt32 $tmp99 = frost$core$UInt64$get_asUInt32$R$frost$core$UInt32(param1);
$fn101 $tmp100 = ($fn101) param0->$class->vtable[4];
frost$core$Error* $tmp102 = $tmp100(param0, $tmp99);
if ($tmp102 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local0) = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
goto block4;
block4:;
// line 95
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp103 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 98
frost$core$Error* $tmp104 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Error* $tmp105 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp104;
block2:;
frost$core$Error* $tmp106 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local0) = ((frost$core$Error*) NULL);
goto block14;
block14:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int8 param1) {

// line 109
frost$core$UInt8 $tmp107 = frost$core$Int8$get_asUInt8$R$frost$core$UInt8(param1);
$fn109 $tmp108 = ($fn109) param0->$class->vtable[2];
frost$core$Error* $tmp110 = $tmp108(param0, $tmp107);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
return $tmp110;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int16 param1) {

// line 119
frost$core$UInt16 $tmp111 = frost$core$Int16$get_asUInt16$R$frost$core$UInt16(param1);
$fn113 $tmp112 = ($fn113) param0->$class->vtable[3];
frost$core$Error* $tmp114 = $tmp112(param0, $tmp111);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
return $tmp114;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int32 param1) {

// line 129
frost$core$UInt32 $tmp115 = frost$core$Int32$get_asUInt32$R$frost$core$UInt32(param1);
$fn117 $tmp116 = ($fn117) param0->$class->vtable[4];
frost$core$Error* $tmp118 = $tmp116(param0, $tmp115);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
return $tmp118;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int64 param1) {

// line 139
frost$core$UInt64 $tmp119 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64(param1);
$fn121 $tmp120 = ($fn121) param0->$class->vtable[5];
frost$core$Error* $tmp122 = $tmp120(param0, $tmp119);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
return $tmp122;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt8* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$Int64 local1;
// line 149
*(&local0) = ((frost$core$Error*) NULL);
// line 150
frost$core$Int64 $tmp123 = (frost$core$Int64) {0};
frost$core$Bit $tmp124 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp125 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp123, param2, $tmp124);
frost$core$Int64 $tmp126 = $tmp125.min;
*(&local1) = $tmp126;
frost$core$Int64 $tmp127 = $tmp125.max;
frost$core$Bit $tmp128 = $tmp125.inclusive;
bool $tmp129 = $tmp128.value;
frost$core$Int64 $tmp130 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp131 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp130);
if ($tmp129) goto block6; else goto block7;
block6:;
int64_t $tmp132 = $tmp126.value;
int64_t $tmp133 = $tmp127.value;
bool $tmp134 = $tmp132 <= $tmp133;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block3; else goto block4;
block7:;
int64_t $tmp137 = $tmp126.value;
int64_t $tmp138 = $tmp127.value;
bool $tmp139 = $tmp137 < $tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block3; else goto block4;
block3:;
// line 151
frost$core$Int64 $tmp142 = *(&local1);
int64_t $tmp143 = $tmp142.value;
frost$core$UInt8 $tmp144 = param1[$tmp143];
$fn146 $tmp145 = ($fn146) param0->$class->vtable[2];
frost$core$Error* $tmp147 = $tmp145(param0, $tmp144);
if ($tmp147 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local0) = $tmp147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
goto block5;
block5:;
frost$core$Int64 $tmp148 = *(&local1);
int64_t $tmp149 = $tmp127.value;
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149 - $tmp150;
frost$core$Int64 $tmp152 = (frost$core$Int64) {$tmp151};
frost$core$UInt64 $tmp153 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp152);
if ($tmp129) goto block11; else goto block12;
block11:;
uint64_t $tmp154 = $tmp153.value;
uint64_t $tmp155 = $tmp131.value;
bool $tmp156 = $tmp154 >= $tmp155;
frost$core$Bit $tmp157 = (frost$core$Bit) {$tmp156};
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block10; else goto block4;
block12:;
uint64_t $tmp159 = $tmp153.value;
uint64_t $tmp160 = $tmp131.value;
bool $tmp161 = $tmp159 > $tmp160;
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block10; else goto block4;
block10:;
int64_t $tmp164 = $tmp148.value;
int64_t $tmp165 = $tmp130.value;
int64_t $tmp166 = $tmp164 + $tmp165;
frost$core$Int64 $tmp167 = (frost$core$Int64) {$tmp166};
*(&local1) = $tmp167;
goto block3;
block4:;
// line 153
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp168 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 156
frost$core$Error* $tmp169 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Error* $tmp170 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp169;
block2:;
frost$core$Error* $tmp171 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local0) = ((frost$core$Error*) NULL);
goto block13;
block13:;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int8* param1, frost$core$Int64 param2) {

// line 168
$fn173 $tmp172 = ($fn173) param0->$class->vtable[10];
frost$core$Error* $tmp174 = $tmp172(param0, ((frost$core$UInt8*) param1), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
return $tmp174;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Char8* param1, frost$core$Int64 param2) {

// line 179
$fn176 $tmp175 = ($fn176) param0->$class->vtable[10];
frost$core$Error* $tmp177 = $tmp175(param0, ((frost$core$UInt8*) param1), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
return $tmp177;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$UInt8 local1;
// line 191
*(&local0) = ((frost$core$Error*) NULL);
// line 192
ITable* $tmp178 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
frost$collections$Iterator* $tmp181 = $tmp179(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp182 = $tmp181->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
frost$core$Bit $tmp185 = $tmp183($tmp181);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block5; else goto block4;
block4:;
ITable* $tmp187 = $tmp181->$class->itable;
while ($tmp187->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp187 = $tmp187->next;
}
$fn189 $tmp188 = $tmp187->methods[1];
frost$core$Object* $tmp190 = $tmp188($tmp181);
*(&local1) = ((frost$core$UInt8$wrapper*) $tmp190)->value;
// line 193
frost$core$UInt8 $tmp191 = *(&local1);
$fn193 $tmp192 = ($fn193) param0->$class->vtable[2];
frost$core$Error* $tmp194 = $tmp192(param0, $tmp191);
if ($tmp194 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local0) = $tmp194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q($tmp190);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q($tmp190);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// line 195
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 198
frost$core$Error* $tmp196 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Error* $tmp197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp196;
block2:;
frost$core$Error* $tmp198 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local0) = ((frost$core$Error*) NULL);
goto block8;
block8:;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$Int8 local1;
// line 211
*(&local0) = ((frost$core$Error*) NULL);
// line 212
ITable* $tmp199 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp199->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp199 = $tmp199->next;
}
$fn201 $tmp200 = $tmp199->methods[0];
frost$collections$Iterator* $tmp202 = $tmp200(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp203 = $tmp202->$class->itable;
while ($tmp203->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp203 = $tmp203->next;
}
$fn205 $tmp204 = $tmp203->methods[0];
frost$core$Bit $tmp206 = $tmp204($tmp202);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block5; else goto block4;
block4:;
ITable* $tmp208 = $tmp202->$class->itable;
while ($tmp208->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp208 = $tmp208->next;
}
$fn210 $tmp209 = $tmp208->methods[1];
frost$core$Object* $tmp211 = $tmp209($tmp202);
*(&local1) = ((frost$core$Int8$wrapper*) $tmp211)->value;
// line 213
frost$core$Int8 $tmp212 = *(&local1);
frost$core$Error* $tmp213 = frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q(param0, $tmp212);
if ($tmp213 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local0) = $tmp213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q($tmp211);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q($tmp211);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// line 215
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp214 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 218
frost$core$Error* $tmp215 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Error* $tmp216 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp215;
block2:;
frost$core$Error* $tmp217 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local0) = ((frost$core$Error*) NULL);
goto block8;
block8:;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$Char8 local1;
// line 231
*(&local0) = ((frost$core$Error*) NULL);
// line 232
ITable* $tmp218 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp218->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp218 = $tmp218->next;
}
$fn220 $tmp219 = $tmp218->methods[0];
frost$collections$Iterator* $tmp221 = $tmp219(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp222 = $tmp221->$class->itable;
while ($tmp222->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp222 = $tmp222->next;
}
$fn224 $tmp223 = $tmp222->methods[0];
frost$core$Bit $tmp225 = $tmp223($tmp221);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block5; else goto block4;
block4:;
ITable* $tmp227 = $tmp221->$class->itable;
while ($tmp227->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp227 = $tmp227->next;
}
$fn229 $tmp228 = $tmp227->methods[1];
frost$core$Object* $tmp230 = $tmp228($tmp221);
*(&local1) = ((frost$core$Char8$wrapper*) $tmp230)->value;
// line 233
frost$core$Char8 $tmp231 = *(&local1);
$fn233 $tmp232 = ($fn233) param0->$class->vtable[16];
frost$core$Error* $tmp234 = $tmp232(param0, $tmp231);
if ($tmp234 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local0) = $tmp234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q($tmp230);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q($tmp230);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// line 235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp235 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 238
frost$core$Error* $tmp236 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$Error* $tmp237 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp236;
block2:;
frost$core$Error* $tmp238 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local0) = ((frost$core$Error*) NULL);
goto block8;
block8:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Char8 param1) {

// line 248
uint8_t $tmp239 = param1.value;
frost$core$UInt8 $tmp240 = frost$core$UInt8$init$builtin_uint8($tmp239);
$fn242 $tmp241 = ($fn242) param0->$class->vtable[2];
frost$core$Error* $tmp243 = $tmp241(param0, $tmp240);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
return $tmp243;

}
frost$core$Error* frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$String* param1) {

// line 257
frost$core$Char8** $tmp244 = &param1->data;
frost$core$Char8* $tmp245 = *$tmp244;
frost$core$Int64* $tmp246 = &param1->_length;
frost$core$Int64 $tmp247 = *$tmp246;
frost$core$Error* $tmp248 = frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q(param0, $tmp245, $tmp247);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
return $tmp248;

}
frost$core$Error* frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Object* param1) {

// line 267
$fn250 $tmp249 = ($fn250) param1->$class->vtable[0];
frost$core$String* $tmp251 = $tmp249(param1);
$fn253 $tmp252 = ($fn253) param0->$class->vtable[17];
frost$core$Error* $tmp254 = $tmp252(param0, $tmp251);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
return $tmp254;

}
frost$core$Error* frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
// line 276
*(&local0) = ((frost$core$Error*) NULL);
// line 277
$fn256 $tmp255 = ($fn256) param0->$class->vtable[17];
frost$core$Error* $tmp257 = $tmp255(param0, param1);
if ($tmp257 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local0) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// line 278
$fn259 $tmp258 = ($fn259) param0->$class->vtable[21];
frost$core$Error* $tmp260 = $tmp258(param0);
if ($tmp260 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local0) = $tmp260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// line 279
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 282
frost$core$Error* $tmp262 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Error* $tmp263 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp262;
block2:;
frost$core$Error* $tmp264 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local0) = ((frost$core$Error*) NULL);
goto block7;
block7:;

}
frost$core$Error* frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Object* param1) {

// line 293
$fn266 $tmp265 = ($fn266) param1->$class->vtable[0];
frost$core$String* $tmp267 = $tmp265(param1);
$fn269 $tmp268 = ($fn269) param0->$class->vtable[19];
frost$core$Error* $tmp270 = $tmp268(param0, $tmp267);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
return $tmp270;

}
frost$core$Error* frost$io$OutputStream$printLine$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// line 300
frost$core$String** $tmp271 = &param0->lineEnding;
frost$core$String* $tmp272 = *$tmp271;
$fn274 $tmp273 = ($fn274) param0->$class->vtable[17];
frost$core$Error* $tmp275 = $tmp273(param0, $tmp272);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
return $tmp275;

}
frost$core$Error* frost$io$OutputStream$flush$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// line 309
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
frost$core$Error* frost$io$OutputStream$close$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// line 313
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
void frost$io$OutputStream$init(frost$io$OutputStream* param0) {

// line 17
frost$core$Int64 $tmp276 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp277 = frost$io$ByteOrder$init$frost$core$Int64($tmp276);
frost$io$ByteOrder* $tmp278 = &param0->byteOrder;
*$tmp278 = $tmp277;
// line 23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s279));
frost$core$String** $tmp280 = &param0->lineEnding;
frost$core$String* $tmp281 = *$tmp280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$String** $tmp282 = &param0->lineEnding;
*$tmp282 = &$s283;
return;

}
void frost$io$OutputStream$cleanup(frost$io$OutputStream* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp284 = &param0->lineEnding;
frost$core$String* $tmp285 = *$tmp284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
return;

}

