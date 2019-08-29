#include "frost/io/IndentedOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Error.h"
#include "frost/core/UInt8.h"
#include "frost/core/Int64.h"
#include "frost/core/MutableString.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"


static frost$core$String $s1;
frost$io$IndentedOutputStream$class_type frost$io$IndentedOutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$OutputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$IndentedOutputStream$cleanup, frost$io$IndentedOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q, frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$R$frost$core$Error$Q, frost$io$OutputStream$flush$R$frost$core$Error$Q, frost$io$OutputStream$close$R$frost$core$Error$Q, frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q} };

typedef frost$core$Error* (*$fn33)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn75)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn101)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn134)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn234)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 29, 7285494389777280767, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 93, -6936278265055109166, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };

void frost$io$IndentedOutputStream$init$frost$io$OutputStream(frost$io$IndentedOutputStream* param0, frost$io$OutputStream* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:22
frost$core$Int $tmp2 = (frost$core$Int) {0u};
frost$core$Int* $tmp3 = &param0->level;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:27
frost$core$Int $tmp4 = (frost$core$Int) {4u};
frost$core$Int* $tmp5 = &param0->indentSize;
*$tmp5 = $tmp4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6));
frost$core$String** $tmp7 = &param0->indent;
frost$core$String* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$String** $tmp9 = &param0->indent;
*$tmp9 = &$s10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:33
frost$core$Bit $tmp11 = (frost$core$Bit) {true};
frost$core$Bit* $tmp12 = &param0->atLineStart;
*$tmp12 = $tmp11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$OutputStream** $tmp13 = &param0->out;
frost$io$OutputStream* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$io$OutputStream** $tmp15 = &param0->out;
*$tmp15 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:45
frost$io$OutputStream$init(((frost$io$OutputStream*) param0));
return;

}
frost$core$Error* frost$io$IndentedOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q(frost$io$IndentedOutputStream* param0, frost$core$UInt8 param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:50
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:51
frost$core$UInt8 $tmp16 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from IndentedOutputStream.frost:51:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:643
uint8_t $tmp17 = param1.value;
uint8_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 == $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:52
frost$core$Bit $tmp22 = (frost$core$Bit) {true};
frost$core$Bit* $tmp23 = &param0->atLineStart;
*$tmp23 = $tmp22;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:55
frost$core$Error* $tmp24 = frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(param0);
if ($tmp24 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24 != NULL};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block9; else goto block10;
block10:;
frost$core$Int $tmp27 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, $tmp27, &$s29);
abort(); // unreachable
block9:;
*(&local0) = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:57
frost$io$OutputStream** $tmp30 = &param0->out;
frost$io$OutputStream* $tmp31 = *$tmp30;
$fn33 $tmp32 = ($fn33) $tmp31->$class->vtable[2];
frost$core$Error* $tmp34 = $tmp32($tmp31, param1);
if ($tmp34 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34 != NULL};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block13; else goto block14;
block14:;
frost$core$Int $tmp37 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s38, $tmp37, &$s39);
abort(); // unreachable
block13:;
*(&local0) = $tmp34;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:58
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp40 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:61
frost$core$Error* $tmp41 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Error* $tmp42 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp41;
block2:;
frost$core$Error* $tmp43 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local0) = ((frost$core$Error*) NULL);
goto block15;
block15:;

}
frost$core$Error* frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$IndentedOutputStream* param0, frost$core$UInt8* param1, frost$core$Int param2) {

frost$core$Error* local0 = NULL;
frost$core$Int local1;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:67
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:68
frost$core$Int $tmp44 = (frost$core$Int) {0u};
*(&local1) = $tmp44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:69
frost$core$Int $tmp45 = *(&local1);
*(&local2) = $tmp45;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:70
goto block3;
block3:;
frost$core$Int $tmp46 = *(&local2);
int64_t $tmp47 = $tmp46.value;
int64_t $tmp48 = param2.value;
bool $tmp49 = $tmp47 < $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:71
frost$core$Int $tmp52 = *(&local2);
frost$core$Int64 $tmp53 = frost$core$Int64$init$frost$core$Int($tmp52);
int64_t $tmp54 = $tmp53.value;
frost$core$UInt8 $tmp55 = param1[$tmp54];
frost$core$UInt8 $tmp56 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from IndentedOutputStream.frost:71:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:643
uint8_t $tmp57 = $tmp55.value;
uint8_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 == $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:72
frost$io$OutputStream** $tmp62 = &param0->out;
frost$io$OutputStream* $tmp63 = *$tmp62;
frost$core$Int $tmp64 = *(&local1);
frost$core$Int64 $tmp65 = frost$core$Int64$init$frost$core$Int($tmp64);
int64_t $tmp66 = $tmp65.value;
frost$core$UInt8* $tmp67 = param1 + $tmp66;
frost$core$Int $tmp68 = *(&local2);
frost$core$Int $tmp69 = *(&local1);
int64_t $tmp70 = $tmp68.value;
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70 - $tmp71;
frost$core$Int $tmp73 = (frost$core$Int) {$tmp72};
$fn75 $tmp74 = ($fn75) $tmp63->$class->vtable[10];
frost$core$Error* $tmp76 = $tmp74($tmp63, $tmp67, $tmp73);
if ($tmp76 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Bit $tmp77 = (frost$core$Bit) {$tmp76 != NULL};
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block12; else goto block13;
block13:;
frost$core$Int $tmp79 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s80, $tmp79, &$s81);
abort(); // unreachable
block12:;
*(&local0) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:73
frost$core$Int $tmp82 = *(&local2);
*(&local1) = $tmp82;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:74
frost$core$Bit $tmp83 = (frost$core$Bit) {true};
frost$core$Bit* $tmp84 = &param0->atLineStart;
*$tmp84 = $tmp83;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:76
frost$core$Bit* $tmp85 = &param0->atLineStart;
frost$core$Bit $tmp86 = *$tmp85;
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:77
frost$io$OutputStream** $tmp88 = &param0->out;
frost$io$OutputStream* $tmp89 = *$tmp88;
frost$core$Int $tmp90 = *(&local1);
frost$core$Int64 $tmp91 = frost$core$Int64$init$frost$core$Int($tmp90);
int64_t $tmp92 = $tmp91.value;
frost$core$UInt8* $tmp93 = param1 + $tmp92;
frost$core$Int $tmp94 = *(&local2);
frost$core$Int $tmp95 = *(&local1);
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96 - $tmp97;
frost$core$Int $tmp99 = (frost$core$Int) {$tmp98};
$fn101 $tmp100 = ($fn101) $tmp89->$class->vtable[10];
frost$core$Error* $tmp102 = $tmp100($tmp89, $tmp93, $tmp99);
if ($tmp102 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102 != NULL};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block18; else goto block19;
block19:;
frost$core$Int $tmp105 = (frost$core$Int) {77u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s106, $tmp105, &$s107);
abort(); // unreachable
block18:;
*(&local0) = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
goto block1;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:78
frost$core$Int $tmp108 = *(&local2);
*(&local1) = $tmp108;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:79
frost$core$Error* $tmp109 = frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(param0);
if ($tmp109 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109 != NULL};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block22; else goto block23;
block23:;
frost$core$Int $tmp112 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s113, $tmp112, &$s114);
abort(); // unreachable
block22:;
*(&local0) = $tmp109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
goto block15;
block15:;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:81
frost$core$Int $tmp115 = *(&local2);
frost$core$Int $tmp116 = (frost$core$Int) {1u};
int64_t $tmp117 = $tmp115.value;
int64_t $tmp118 = $tmp116.value;
int64_t $tmp119 = $tmp117 + $tmp118;
frost$core$Int $tmp120 = (frost$core$Int) {$tmp119};
*(&local2) = $tmp120;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:83
frost$io$OutputStream** $tmp121 = &param0->out;
frost$io$OutputStream* $tmp122 = *$tmp121;
frost$core$Int $tmp123 = *(&local1);
frost$core$Int64 $tmp124 = frost$core$Int64$init$frost$core$Int($tmp123);
int64_t $tmp125 = $tmp124.value;
frost$core$UInt8* $tmp126 = param1 + $tmp125;
frost$core$Int $tmp127 = *(&local2);
frost$core$Int $tmp128 = *(&local1);
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129 - $tmp130;
frost$core$Int $tmp132 = (frost$core$Int) {$tmp131};
$fn134 $tmp133 = ($fn134) $tmp122->$class->vtable[10];
frost$core$Error* $tmp135 = $tmp133($tmp122, $tmp126, $tmp132);
if ($tmp135 == NULL) goto block24; else goto block25;
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135 != NULL};
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block26; else goto block27;
block27:;
frost$core$Int $tmp138 = (frost$core$Int) {83u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s139, $tmp138, &$s140);
abort(); // unreachable
block26:;
*(&local0) = $tmp135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
goto block1;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:84
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:87
frost$core$Error* $tmp142 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Error* $tmp143 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp142;
block2:;
frost$core$Error* $tmp144 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local0) = ((frost$core$Error*) NULL);
goto block28;
block28:;

}
frost$core$Error* frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(frost$io$IndentedOutputStream* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:93
frost$core$Bit* $tmp145 = &param0->atLineStart;
frost$core$Bit $tmp146 = *$tmp145;
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:94
frost$core$Bit $tmp148 = (frost$core$Bit) {false};
frost$core$Bit* $tmp149 = &param0->atLineStart;
*$tmp149 = $tmp148;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:95
frost$core$String** $tmp150 = &param0->indent;
frost$core$String* $tmp151 = *$tmp150;
frost$core$Int* $tmp152 = &$tmp151->_length;
frost$core$Int $tmp153 = *$tmp152;
frost$core$Int* $tmp154 = &param0->indentSize;
frost$core$Int $tmp155 = *$tmp154;
frost$core$Int* $tmp156 = &param0->level;
frost$core$Int $tmp157 = *$tmp156;
int64_t $tmp158 = $tmp155.value;
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158 * $tmp159;
frost$core$Int $tmp161 = (frost$core$Int) {$tmp160};
int64_t $tmp162 = $tmp153.value;
int64_t $tmp163 = $tmp161.value;
bool $tmp164 = $tmp162 != $tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:96
frost$core$Int* $tmp167 = &param0->indentSize;
frost$core$Int $tmp168 = *$tmp167;
frost$core$Int* $tmp169 = &param0->level;
frost$core$Int $tmp170 = *$tmp169;
int64_t $tmp171 = $tmp168.value;
int64_t $tmp172 = $tmp170.value;
int64_t $tmp173 = $tmp171 * $tmp172;
frost$core$Int $tmp174 = (frost$core$Int) {$tmp173};
// begin inline call to function frost.core.String.*(count:frost.core.Int):frost.core.String from IndentedOutputStream.frost:96:31
frost$core$Int $tmp175 = (frost$core$Int) {0u};
int64_t $tmp176 = $tmp174.value;
int64_t $tmp177 = $tmp175.value;
bool $tmp178 = $tmp176 >= $tmp177;
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block6; else goto block7;
block7:;
frost$core$Int $tmp181 = (frost$core$Int) {567u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s182, $tmp181, &$s183);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:568
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp184 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp184);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$MutableString* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local0) = $tmp184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:569
frost$core$Int $tmp186 = (frost$core$Int) {0u};
frost$core$Bit $tmp187 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp188 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp186, $tmp174, $tmp187);
frost$core$Int $tmp189 = $tmp188.min;
*(&local1) = $tmp189;
frost$core$Int $tmp190 = $tmp188.max;
frost$core$Bit $tmp191 = $tmp188.inclusive;
bool $tmp192 = $tmp191.value;
frost$core$Int $tmp193 = (frost$core$Int) {1u};
if ($tmp192) goto block11; else goto block12;
block11:;
int64_t $tmp194 = $tmp189.value;
int64_t $tmp195 = $tmp190.value;
bool $tmp196 = $tmp194 <= $tmp195;
frost$core$Bit $tmp197 = (frost$core$Bit) {$tmp196};
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block8; else goto block9;
block12:;
int64_t $tmp199 = $tmp189.value;
int64_t $tmp200 = $tmp190.value;
bool $tmp201 = $tmp199 < $tmp200;
frost$core$Bit $tmp202 = (frost$core$Bit) {$tmp201};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:570
frost$core$MutableString* $tmp204 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp204, &$s205);
frost$core$Int $tmp206 = *(&local1);
int64_t $tmp207 = $tmp190.value;
int64_t $tmp208 = $tmp206.value;
int64_t $tmp209 = $tmp207 - $tmp208;
frost$core$Int $tmp210 = (frost$core$Int) {$tmp209};
if ($tmp192) goto block14; else goto block15;
block14:;
int64_t $tmp211 = $tmp210.value;
int64_t $tmp212 = $tmp193.value;
bool $tmp213 = $tmp211 >= $tmp212;
frost$core$Bit $tmp214 = (frost$core$Bit) {$tmp213};
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block13; else goto block9;
block15:;
int64_t $tmp216 = $tmp210.value;
int64_t $tmp217 = $tmp193.value;
bool $tmp218 = $tmp216 > $tmp217;
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block13; else goto block9;
block13:;
int64_t $tmp221 = $tmp206.value;
int64_t $tmp222 = $tmp193.value;
int64_t $tmp223 = $tmp221 + $tmp222;
frost$core$Int $tmp224 = (frost$core$Int) {$tmp223};
*(&local1) = $tmp224;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:572
frost$core$MutableString* $tmp225 = *(&local0);
frost$core$String* $tmp226 = frost$core$MutableString$finish$R$frost$core$String($tmp225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$MutableString* $tmp227 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$String** $tmp228 = &param0->indent;
frost$core$String* $tmp229 = *$tmp228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$String** $tmp230 = &param0->indent;
*$tmp230 = $tmp226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:98
frost$core$String** $tmp231 = &param0->indent;
frost$core$String* $tmp232 = *$tmp231;
$fn234 $tmp233 = ($fn234) ((frost$io$OutputStream*) param0)->$class->vtable[17];
frost$core$Error* $tmp235 = $tmp233(((frost$io$OutputStream*) param0), $tmp232);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
return $tmp235;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
void frost$io$IndentedOutputStream$cleanup(frost$io$IndentedOutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:17
frost$io$OutputStream$cleanup(((frost$io$OutputStream*) param0));
frost$core$String** $tmp236 = &param0->indent;
frost$core$String* $tmp237 = *$tmp236;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$io$OutputStream** $tmp238 = &param0->out;
frost$io$OutputStream* $tmp239 = *$tmp238;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
return;

}

