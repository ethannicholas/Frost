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
frost$io$OutputStream$class_type frost$io$OutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$OutputStream$cleanup, NULL, frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$R$frost$core$Error$Q, frost$io$OutputStream$flush$R$frost$core$Error$Q, frost$io$OutputStream$close$R$frost$core$Error$Q} };

typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn15)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn21)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn27)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn31)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Bit (*$fn49)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn54)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn60)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn66)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn70)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Bit (*$fn88)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn93)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn99)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn105)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn109)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn121)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn125)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn129)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn133)(frost$io$OutputStream*, frost$core$UInt64);
typedef frost$core$Error* (*$fn158)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn189)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Error* (*$fn192)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn196)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn200)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn205)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn209)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$collections$Iterator* (*$fn221)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn225)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn230)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn244)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn248)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn253)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn257)(frost$io$OutputStream*, frost$core$Char8);
typedef frost$core$Error* (*$fn270)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$String* (*$fn278)(frost$core$Object*);
typedef frost$core$Error* (*$fn281)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn284)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn287)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn299)(frost$core$Object*);
typedef frost$core$Error* (*$fn302)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn307)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 21, -1851160247464291148, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, 3795483251459013238, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x77\x72\x69\x74\x65\x28\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, 6642742070463155643, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, 3795483251459013238, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x77\x72\x69\x74\x65\x28\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, 6908787570103491681, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, 3795483251459013238, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x77\x72\x69\x74\x65\x28\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, -8892169962397313822, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, 3795483251459013238, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x77\x72\x69\x74\x65\x28\x70\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x2c\x20\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 145, -7037456759649784317, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, 3795483251459013238, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x77\x72\x69\x74\x65\x28\x61\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x2c\x20\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 146, -2394682805248316631, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, 3795483251459013238, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x77\x72\x69\x74\x65\x28\x61\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x3e\x2c\x20\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 145, -8883332778927148304, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, 3795483251459013238, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x77\x72\x69\x74\x65\x28\x61\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3e\x2c\x20\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 146, -1926192842975345773, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, 3795483251459013238, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x72\x69\x6e\x74\x4c\x69\x6e\x65\x28\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, 2519087330580548935, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };

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
// unreffing REF($9:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
// unreffing REF($5:frost.core.Equatable<frost.io.ByteOrder>)
if ($tmp12) goto block3; else goto block5;
block3:;
// line 42
frost$core$UInt8 $tmp13 = frost$core$UInt16$get_asUInt8$R$frost$core$UInt8(param1);
$fn15 $tmp14 = ($fn15) param0->$class->vtable[2];
frost$core$Error* $tmp16 = $tmp14(param0, $tmp13);
// try error check
if ($tmp16 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local0) = $tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// unreffing REF($23:frost.core.Error?)
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// unreffing REF($23:frost.core.Error?)
// line 43
frost$core$UInt16 $tmp17 = (frost$core$UInt16) {8};
frost$core$UInt32 $tmp18 = frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32(param1, $tmp17);
frost$core$UInt8 $tmp19 = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8($tmp18);
$fn21 $tmp20 = ($fn21) param0->$class->vtable[2];
frost$core$Error* $tmp22 = $tmp20(param0, $tmp19);
// try error check
if ($tmp22 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local0) = $tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($42:frost.core.Error?)
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($42:frost.core.Error?)
goto block4;
block5:;
// line 1
// line 46
frost$core$UInt16 $tmp23 = (frost$core$UInt16) {8};
frost$core$UInt32 $tmp24 = frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32(param1, $tmp23);
frost$core$UInt8 $tmp25 = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8($tmp24);
$fn27 $tmp26 = ($fn27) param0->$class->vtable[2];
frost$core$Error* $tmp28 = $tmp26(param0, $tmp25);
// try error check
if ($tmp28 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local0) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($63:frost.core.Error?)
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($63:frost.core.Error?)
// line 47
frost$core$UInt8 $tmp29 = frost$core$UInt16$get_asUInt8$R$frost$core$UInt8(param1);
$fn31 $tmp30 = ($fn31) param0->$class->vtable[2];
frost$core$Error* $tmp32 = $tmp30(param0, $tmp29);
// try error check
if ($tmp32 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local0) = $tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing REF($80:frost.core.Error?)
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing REF($80:frost.core.Error?)
goto block4;
block4:;
goto block2;
block1:;
// line 51
frost$core$Error* $tmp33 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Error* $tmp34 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp33;
block2:;
frost$core$Error* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp36 = frost$core$Bit$init$builtin_bit(false);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp38 = (frost$core$Int64) {39};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s39, $tmp38, &$s40);
abort(); // unreachable
block14:;
abort(); // unreachable

}
frost$core$Error* frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt32 param1) {

frost$core$Error* local0 = NULL;
// line 62
*(&local0) = ((frost$core$Error*) NULL);
// line 63
frost$io$ByteOrder* $tmp41 = &param0->byteOrder;
frost$io$ByteOrder $tmp42 = *$tmp41;
frost$io$ByteOrder$wrapper* $tmp43;
$tmp43 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp43->value = $tmp42;
frost$core$Int64 $tmp44 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp45 = frost$io$ByteOrder$init$frost$core$Int64($tmp44);
frost$io$ByteOrder$wrapper* $tmp46;
$tmp46 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp46->value = $tmp45;
ITable* $tmp47 = ((frost$core$Equatable*) $tmp43)->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[0];
frost$core$Bit $tmp50 = $tmp48(((frost$core$Equatable*) $tmp43), ((frost$core$Equatable*) $tmp46));
bool $tmp51 = $tmp50.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp46)));
// unreffing REF($9:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp43)));
// unreffing REF($5:frost.core.Equatable<frost.io.ByteOrder>)
if ($tmp51) goto block3; else goto block5;
block3:;
// line 64
frost$core$UInt16 $tmp52 = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16(param1);
$fn54 $tmp53 = ($fn54) param0->$class->vtable[3];
frost$core$Error* $tmp55 = $tmp53(param0, $tmp52);
// try error check
if ($tmp55 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local0) = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing REF($23:frost.core.Error?)
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing REF($23:frost.core.Error?)
// line 65
frost$core$UInt32 $tmp56 = (frost$core$UInt32) {16};
frost$core$UInt32 $tmp57 = frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(param1, $tmp56);
frost$core$UInt16 $tmp58 = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16($tmp57);
$fn60 $tmp59 = ($fn60) param0->$class->vtable[3];
frost$core$Error* $tmp61 = $tmp59(param0, $tmp58);
// try error check
if ($tmp61 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local0) = $tmp61;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing REF($42:frost.core.Error?)
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing REF($42:frost.core.Error?)
goto block4;
block5:;
// line 1
// line 68
frost$core$UInt32 $tmp62 = (frost$core$UInt32) {16};
frost$core$UInt32 $tmp63 = frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(param1, $tmp62);
frost$core$UInt16 $tmp64 = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16($tmp63);
$fn66 $tmp65 = ($fn66) param0->$class->vtable[3];
frost$core$Error* $tmp67 = $tmp65(param0, $tmp64);
// try error check
if ($tmp67 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local0) = $tmp67;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($63:frost.core.Error?)
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($63:frost.core.Error?)
// line 69
frost$core$UInt16 $tmp68 = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16(param1);
$fn70 $tmp69 = ($fn70) param0->$class->vtable[3];
frost$core$Error* $tmp71 = $tmp69(param0, $tmp68);
// try error check
if ($tmp71 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local0) = $tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($80:frost.core.Error?)
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($80:frost.core.Error?)
goto block4;
block4:;
goto block2;
block1:;
// line 73
frost$core$Error* $tmp72 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Error* $tmp73 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp72;
block2:;
frost$core$Error* $tmp74 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp75 = frost$core$Bit$init$builtin_bit(false);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp77 = (frost$core$Int64) {61};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block14:;
abort(); // unreachable

}
frost$core$Error* frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt64 param1) {

frost$core$Error* local0 = NULL;
// line 84
*(&local0) = ((frost$core$Error*) NULL);
// line 85
frost$io$ByteOrder* $tmp80 = &param0->byteOrder;
frost$io$ByteOrder $tmp81 = *$tmp80;
frost$io$ByteOrder$wrapper* $tmp82;
$tmp82 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp82->value = $tmp81;
frost$core$Int64 $tmp83 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp84 = frost$io$ByteOrder$init$frost$core$Int64($tmp83);
frost$io$ByteOrder$wrapper* $tmp85;
$tmp85 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp85->value = $tmp84;
ITable* $tmp86 = ((frost$core$Equatable*) $tmp82)->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[0];
frost$core$Bit $tmp89 = $tmp87(((frost$core$Equatable*) $tmp82), ((frost$core$Equatable*) $tmp85));
bool $tmp90 = $tmp89.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp85)));
// unreffing REF($9:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp82)));
// unreffing REF($5:frost.core.Equatable<frost.io.ByteOrder>)
if ($tmp90) goto block3; else goto block5;
block3:;
// line 86
frost$core$UInt32 $tmp91 = frost$core$UInt64$get_asUInt32$R$frost$core$UInt32(param1);
$fn93 $tmp92 = ($fn93) param0->$class->vtable[4];
frost$core$Error* $tmp94 = $tmp92(param0, $tmp91);
// try error check
if ($tmp94 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local0) = $tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($23:frost.core.Error?)
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($23:frost.core.Error?)
// line 87
frost$core$UInt64 $tmp95 = (frost$core$UInt64) {32};
frost$core$UInt64 $tmp96 = frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(param1, $tmp95);
frost$core$UInt32 $tmp97 = frost$core$UInt64$get_asUInt32$R$frost$core$UInt32($tmp96);
$fn99 $tmp98 = ($fn99) param0->$class->vtable[4];
frost$core$Error* $tmp100 = $tmp98(param0, $tmp97);
// try error check
if ($tmp100 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local0) = $tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing REF($42:frost.core.Error?)
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing REF($42:frost.core.Error?)
goto block4;
block5:;
// line 1
// line 90
frost$core$UInt64 $tmp101 = (frost$core$UInt64) {32};
frost$core$UInt64 $tmp102 = frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(param1, $tmp101);
frost$core$UInt32 $tmp103 = frost$core$UInt64$get_asUInt32$R$frost$core$UInt32($tmp102);
$fn105 $tmp104 = ($fn105) param0->$class->vtable[4];
frost$core$Error* $tmp106 = $tmp104(param0, $tmp103);
// try error check
if ($tmp106 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local0) = $tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing REF($63:frost.core.Error?)
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing REF($63:frost.core.Error?)
// line 91
frost$core$UInt32 $tmp107 = frost$core$UInt64$get_asUInt32$R$frost$core$UInt32(param1);
$fn109 $tmp108 = ($fn109) param0->$class->vtable[4];
frost$core$Error* $tmp110 = $tmp108(param0, $tmp107);
// try error check
if ($tmp110 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local0) = $tmp110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($80:frost.core.Error?)
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($80:frost.core.Error?)
goto block4;
block4:;
goto block2;
block1:;
// line 95
frost$core$Error* $tmp111 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Error* $tmp112 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp111;
block2:;
frost$core$Error* $tmp113 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp114 = frost$core$Bit$init$builtin_bit(false);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {83};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s117, $tmp116, &$s118);
abort(); // unreachable
block14:;
abort(); // unreachable

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int8 param1) {

// line 106
frost$core$UInt8 $tmp119 = frost$core$Int8$get_asUInt8$R$frost$core$UInt8(param1);
$fn121 $tmp120 = ($fn121) param0->$class->vtable[2];
frost$core$Error* $tmp122 = $tmp120(param0, $tmp119);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing REF($3:frost.core.Error?)
return $tmp122;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int16 param1) {

// line 116
frost$core$UInt16 $tmp123 = frost$core$Int16$get_asUInt16$R$frost$core$UInt16(param1);
$fn125 $tmp124 = ($fn125) param0->$class->vtable[3];
frost$core$Error* $tmp126 = $tmp124(param0, $tmp123);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing REF($3:frost.core.Error?)
return $tmp126;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int32 param1) {

// line 126
frost$core$UInt32 $tmp127 = frost$core$Int32$get_asUInt32$R$frost$core$UInt32(param1);
$fn129 $tmp128 = ($fn129) param0->$class->vtable[4];
frost$core$Error* $tmp130 = $tmp128(param0, $tmp127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($3:frost.core.Error?)
return $tmp130;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int64 param1) {

// line 136
frost$core$UInt64 $tmp131 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64(param1);
$fn133 $tmp132 = ($fn133) param0->$class->vtable[5];
frost$core$Error* $tmp134 = $tmp132(param0, $tmp131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing REF($3:frost.core.Error?)
return $tmp134;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt8* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$Int64 local1;
// line 146
*(&local0) = ((frost$core$Error*) NULL);
// line 147
frost$core$Int64 $tmp135 = (frost$core$Int64) {0};
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp137 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp135, param2, $tmp136);
frost$core$Int64 $tmp138 = $tmp137.min;
*(&local1) = $tmp138;
frost$core$Int64 $tmp139 = $tmp137.max;
frost$core$Bit $tmp140 = $tmp137.inclusive;
bool $tmp141 = $tmp140.value;
frost$core$Int64 $tmp142 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp143 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp142);
if ($tmp141) goto block6; else goto block7;
block6:;
int64_t $tmp144 = $tmp138.value;
int64_t $tmp145 = $tmp139.value;
bool $tmp146 = $tmp144 <= $tmp145;
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block3; else goto block4;
block7:;
int64_t $tmp149 = $tmp138.value;
int64_t $tmp150 = $tmp139.value;
bool $tmp151 = $tmp149 < $tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block3; else goto block4;
block3:;
// line 148
frost$core$Int64 $tmp154 = *(&local1);
int64_t $tmp155 = $tmp154.value;
frost$core$UInt8 $tmp156 = param1[$tmp155];
$fn158 $tmp157 = ($fn158) param0->$class->vtable[2];
frost$core$Error* $tmp159 = $tmp157(param0, $tmp156);
// try error check
if ($tmp159 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local0) = $tmp159;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
// unreffing REF($31:frost.core.Error?)
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
// unreffing REF($31:frost.core.Error?)
goto block5;
block5:;
frost$core$Int64 $tmp160 = *(&local1);
int64_t $tmp161 = $tmp139.value;
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161 - $tmp162;
frost$core$Int64 $tmp164 = (frost$core$Int64) {$tmp163};
frost$core$UInt64 $tmp165 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp164);
if ($tmp141) goto block11; else goto block12;
block11:;
uint64_t $tmp166 = $tmp165.value;
uint64_t $tmp167 = $tmp143.value;
bool $tmp168 = $tmp166 >= $tmp167;
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block10; else goto block4;
block12:;
uint64_t $tmp171 = $tmp165.value;
uint64_t $tmp172 = $tmp143.value;
bool $tmp173 = $tmp171 > $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block10; else goto block4;
block10:;
int64_t $tmp176 = $tmp160.value;
int64_t $tmp177 = $tmp142.value;
int64_t $tmp178 = $tmp176 + $tmp177;
frost$core$Int64 $tmp179 = (frost$core$Int64) {$tmp178};
*(&local1) = $tmp179;
goto block3;
block4:;
goto block2;
block1:;
// line 152
frost$core$Error* $tmp180 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Error* $tmp181 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp180;
block2:;
frost$core$Error* $tmp182 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp183 = frost$core$Bit$init$builtin_bit(false);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp185 = (frost$core$Int64) {145};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s186, $tmp185, &$s187);
abort(); // unreachable
block13:;
abort(); // unreachable

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int8* param1, frost$core$Int64 param2) {

// line 164
$fn189 $tmp188 = ($fn189) param0->$class->vtable[10];
frost$core$Error* $tmp190 = $tmp188(param0, ((frost$core$UInt8*) param1), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
// unreffing REF($3:frost.core.Error?)
return $tmp190;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Char8* param1, frost$core$Int64 param2) {

// line 175
$fn192 $tmp191 = ($fn192) param0->$class->vtable[10];
frost$core$Error* $tmp193 = $tmp191(param0, ((frost$core$UInt8*) param1), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing REF($3:frost.core.Error?)
return $tmp193;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$UInt8 local1;
// line 187
*(&local0) = ((frost$core$Error*) NULL);
// line 188
ITable* $tmp194 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp194->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp194 = $tmp194->next;
}
$fn196 $tmp195 = $tmp194->methods[0];
frost$collections$Iterator* $tmp197 = $tmp195(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp198 = $tmp197->$class->itable;
while ($tmp198->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp198 = $tmp198->next;
}
$fn200 $tmp199 = $tmp198->methods[0];
frost$core$Bit $tmp201 = $tmp199($tmp197);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block5; else goto block4;
block4:;
ITable* $tmp203 = $tmp197->$class->itable;
while ($tmp203->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp203 = $tmp203->next;
}
$fn205 $tmp204 = $tmp203->methods[1];
frost$core$Object* $tmp206 = $tmp204($tmp197);
*(&local1) = ((frost$core$UInt8$wrapper*) $tmp206)->value;
// line 189
frost$core$UInt8 $tmp207 = *(&local1);
$fn209 $tmp208 = ($fn209) param0->$class->vtable[2];
frost$core$Error* $tmp210 = $tmp208(param0, $tmp207);
// try error check
if ($tmp210 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local0) = $tmp210;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing REF($22:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q($tmp206);
// unreffing REF($16:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
// unreffing REF($6:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing REF($22:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q($tmp206);
// unreffing REF($16:frost.collections.Iterator.T)
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
// unreffing REF($6:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block2;
block1:;
// line 193
frost$core$Error* $tmp211 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Error* $tmp212 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp211;
block2:;
frost$core$Error* $tmp213 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp214 = frost$core$Bit$init$builtin_bit(false);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp216 = (frost$core$Int64) {186};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s217, $tmp216, &$s218);
abort(); // unreachable
block8:;
abort(); // unreachable

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$Int8 local1;
// line 206
*(&local0) = ((frost$core$Error*) NULL);
// line 207
ITable* $tmp219 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp219->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp219 = $tmp219->next;
}
$fn221 $tmp220 = $tmp219->methods[0];
frost$collections$Iterator* $tmp222 = $tmp220(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp223 = $tmp222->$class->itable;
while ($tmp223->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp223 = $tmp223->next;
}
$fn225 $tmp224 = $tmp223->methods[0];
frost$core$Bit $tmp226 = $tmp224($tmp222);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block5; else goto block4;
block4:;
ITable* $tmp228 = $tmp222->$class->itable;
while ($tmp228->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp228 = $tmp228->next;
}
$fn230 $tmp229 = $tmp228->methods[1];
frost$core$Object* $tmp231 = $tmp229($tmp222);
*(&local1) = ((frost$core$Int8$wrapper*) $tmp231)->value;
// line 208
frost$core$Int8 $tmp232 = *(&local1);
frost$core$Error* $tmp233 = frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q(param0, $tmp232);
// try error check
if ($tmp233 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local0) = $tmp233;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// unreffing REF($21:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q($tmp231);
// unreffing REF($16:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($6:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// unreffing REF($21:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q($tmp231);
// unreffing REF($16:frost.collections.Iterator.T)
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($6:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block2;
block1:;
// line 212
frost$core$Error* $tmp234 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Error* $tmp235 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp234;
block2:;
frost$core$Error* $tmp236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp237 = frost$core$Bit$init$builtin_bit(false);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp239 = (frost$core$Int64) {205};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s240, $tmp239, &$s241);
abort(); // unreachable
block8:;
abort(); // unreachable

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$Char8 local1;
// line 225
*(&local0) = ((frost$core$Error*) NULL);
// line 226
ITable* $tmp242 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp242->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
frost$collections$Iterator* $tmp245 = $tmp243(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp246 = $tmp245->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
frost$core$Bit $tmp249 = $tmp247($tmp245);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block5; else goto block4;
block4:;
ITable* $tmp251 = $tmp245->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[1];
frost$core$Object* $tmp254 = $tmp252($tmp245);
*(&local1) = ((frost$core$Char8$wrapper*) $tmp254)->value;
// line 227
frost$core$Char8 $tmp255 = *(&local1);
$fn257 $tmp256 = ($fn257) param0->$class->vtable[16];
frost$core$Error* $tmp258 = $tmp256(param0, $tmp255);
// try error check
if ($tmp258 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local0) = $tmp258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($22:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
// unreffing REF($16:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing REF($6:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($22:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
// unreffing REF($16:frost.collections.Iterator.T)
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing REF($6:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block2;
block1:;
// line 231
frost$core$Error* $tmp259 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Error* $tmp260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp259;
block2:;
frost$core$Error* $tmp261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp262 = frost$core$Bit$init$builtin_bit(false);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp264 = (frost$core$Int64) {224};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s265, $tmp264, &$s266);
abort(); // unreachable
block8:;
abort(); // unreachable

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Char8 param1) {

// line 241
uint8_t $tmp267 = param1.value;
frost$core$UInt8 $tmp268 = frost$core$UInt8$init$builtin_uint8($tmp267);
$fn270 $tmp269 = ($fn270) param0->$class->vtable[2];
frost$core$Error* $tmp271 = $tmp269(param0, $tmp268);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
// unreffing REF($4:frost.core.Error?)
return $tmp271;

}
frost$core$Error* frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$String* param1) {

// line 250
frost$core$Char8** $tmp272 = &param1->data;
frost$core$Char8* $tmp273 = *$tmp272;
frost$core$Int64* $tmp274 = &param1->_length;
frost$core$Int64 $tmp275 = *$tmp274;
frost$core$Error* $tmp276 = frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q(param0, $tmp273, $tmp275);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// unreffing REF($5:frost.core.Error?)
return $tmp276;

}
frost$core$Error* frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Object* param1) {

// line 260
$fn278 $tmp277 = ($fn278) param1->$class->vtable[0];
frost$core$String* $tmp279 = $tmp277(param1);
$fn281 $tmp280 = ($fn281) param0->$class->vtable[17];
frost$core$Error* $tmp282 = $tmp280(param0, $tmp279);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing REF($4:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
// unreffing REF($2:frost.core.String)
return $tmp282;

}
frost$core$Error* frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
// line 269
*(&local0) = ((frost$core$Error*) NULL);
// line 270
$fn284 $tmp283 = ($fn284) param0->$class->vtable[17];
frost$core$Error* $tmp285 = $tmp283(param0, param1);
// try error check
if ($tmp285 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local0) = $tmp285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing REF($4:frost.core.Error?)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing REF($4:frost.core.Error?)
// line 271
$fn287 $tmp286 = ($fn287) param0->$class->vtable[21];
frost$core$Error* $tmp288 = $tmp286(param0);
// try error check
if ($tmp288 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local0) = $tmp288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing REF($20:frost.core.Error?)
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing REF($20:frost.core.Error?)
// line 272
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp289 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 275
frost$core$Error* $tmp290 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$Error* $tmp291 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp290;
block2:;
frost$core$Error* $tmp292 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp293 = frost$core$Bit$init$builtin_bit(false);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp295 = (frost$core$Int64) {268};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s296, $tmp295, &$s297);
abort(); // unreachable
block7:;
abort(); // unreachable

}
frost$core$Error* frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Object* param1) {

// line 286
$fn299 $tmp298 = ($fn299) param1->$class->vtable[0];
frost$core$String* $tmp300 = $tmp298(param1);
$fn302 $tmp301 = ($fn302) param0->$class->vtable[19];
frost$core$Error* $tmp303 = $tmp301(param0, $tmp300);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// unreffing REF($4:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
// unreffing REF($2:frost.core.String)
return $tmp303;

}
frost$core$Error* frost$io$OutputStream$printLine$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// line 293
frost$core$String** $tmp304 = &param0->lineEnding;
frost$core$String* $tmp305 = *$tmp304;
$fn307 $tmp306 = ($fn307) param0->$class->vtable[17];
frost$core$Error* $tmp308 = $tmp306(param0, $tmp305);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing REF($4:frost.core.Error?)
return $tmp308;

}
frost$core$Error* frost$io$OutputStream$flush$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// line 302
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
frost$core$Error* frost$io$OutputStream$close$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// line 306
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
void frost$io$OutputStream$init(frost$io$OutputStream* param0) {

// line 17
frost$core$Int64 $tmp309 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp310 = frost$io$ByteOrder$init$frost$core$Int64($tmp309);
frost$io$ByteOrder* $tmp311 = &param0->byteOrder;
*$tmp311 = $tmp310;
// line 23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s312));
frost$core$String** $tmp313 = &param0->lineEnding;
frost$core$String* $tmp314 = *$tmp313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
frost$core$String** $tmp315 = &param0->lineEnding;
*$tmp315 = &$s316;
return;

}
void frost$io$OutputStream$cleanup(frost$io$OutputStream* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp317 = &param0->lineEnding;
frost$core$String* $tmp318 = *$tmp317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
return;

}

