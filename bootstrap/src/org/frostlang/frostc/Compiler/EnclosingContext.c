#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Compiler/InlineReturn.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$EnclosingContext$class_type org$frostlang$frostc$Compiler$EnclosingContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Compiler$EnclosingContext$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$EnclosingContext$cleanup} };

typedef frost$core$String* (*$fn117)(frost$core$Object*);
typedef frost$core$String* (*$fn126)(frost$core$Object*);
typedef frost$core$String* (*$fn133)(frost$core$Object*);
typedef frost$core$String* (*$fn141)(frost$core$Object*);
typedef frost$core$String* (*$fn165)(frost$core$Object*);
typedef frost$core$String* (*$fn178)(frost$core$Object*);
typedef frost$core$String* (*$fn186)(frost$core$Object*);
typedef frost$core$String* (*$fn212)(frost$core$Object*);
typedef frost$core$String* (*$fn230)(frost$core$Object*);
typedef frost$core$String* (*$fn254)(frost$core$Object*);
typedef frost$core$String* (*$fn268)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 46, 1025801744820392180, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x4c\x49\x4e\x45\x5f\x43\x4f\x4e\x54\x45\x58\x54\x28", 15, 6901418708807479792, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, -4488024136446187047, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 7586725163111525995, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 7586725163111525995, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45\x5f\x53\x43\x4f\x50\x45\x28", 15, -9160082597147216730, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x4c\x55\x45\x5f\x53\x43\x4f\x50\x45\x28", 12, 5025722873366972767, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x59\x5f\x53\x43\x4f\x50\x45\x28", 10, -1116473329767910717, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$EnclosingContext$cleanup(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$collections$ListView* local0 = NULL;
frost$core$Int local1;
org$frostlang$frostc$Compiler$InlineReturn* local2 = NULL;
org$frostlang$frostc$IR$Block$ID local3;
frost$core$String* local4 = NULL;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Block$ID local6;
org$frostlang$frostc$Variable* local7 = NULL;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$IR$Block$ID$nullable local9;
org$frostlang$frostc$Variable* local10 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
frost$collections$ListView** $tmp10 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp11 = *$tmp10;
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$collections$ListView* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = $tmp11;
frost$core$Int* $tmp13 = (frost$core$Int*) (param0->$data + 8);
frost$core$Int $tmp14 = *$tmp13;
*(&local1) = $tmp14;
org$frostlang$frostc$Compiler$InlineReturn** $tmp15 = (org$frostlang$frostc$Compiler$InlineReturn**) (param0->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp16 = *$tmp15;
*(&local2) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
org$frostlang$frostc$Compiler$InlineReturn* $tmp17 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local2) = $tmp16;
org$frostlang$frostc$IR$Block$ID* $tmp18 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp19 = *$tmp18;
*(&local3) = $tmp19;
// <no location>
frost$collections$ListView* $tmp20 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// <no location>
org$frostlang$frostc$Compiler$InlineReturn* $tmp21 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
org$frostlang$frostc$Compiler$InlineReturn* $tmp22 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local2) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$collections$ListView* $tmp23 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local0) = ((frost$collections$ListView*) NULL);
goto block1;
block3:;
frost$core$Int $tmp24 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp25 = $tmp3.value;
int64_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 == $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block5; else goto block6;
block5:;
frost$core$String** $tmp30 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp31 = *$tmp30;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$String* $tmp32 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local4) = $tmp31;
org$frostlang$frostc$IR$Block$ID* $tmp33 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
org$frostlang$frostc$IR$Block$ID $tmp34 = *$tmp33;
*(&local5) = $tmp34;
org$frostlang$frostc$IR$Block$ID* $tmp35 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp36 = *$tmp35;
*(&local6) = $tmp36;
// <no location>
frost$core$String* $tmp37 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$String* $tmp38 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block6:;
frost$core$Int $tmp39 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp40 = $tmp3.value;
int64_t $tmp41 = $tmp39.value;
bool $tmp42 = $tmp40 == $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int $tmp45 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp46 = $tmp3.value;
int64_t $tmp47 = $tmp45.value;
bool $tmp48 = $tmp46 == $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Variable** $tmp51 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp52 = *$tmp51;
*(&local7) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
org$frostlang$frostc$Variable* $tmp53 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local7) = $tmp52;
// <no location>
org$frostlang$frostc$Variable* $tmp54 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlang$frostc$Variable* $tmp55 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local7) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block12:;
frost$core$Int $tmp56 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp57 = $tmp3.value;
int64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 == $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block14; else goto block15;
block14:;
org$frostlang$frostc$IR$Value** $tmp62 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp63 = *$tmp62;
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
org$frostlang$frostc$IR$Value* $tmp64 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local8) = $tmp63;
// <no location>
org$frostlang$frostc$IR$Value* $tmp65 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
org$frostlang$frostc$IR$Value* $tmp66 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block15:;
frost$core$Int $tmp67 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp68 = $tmp3.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 == $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block17; else goto block1;
block17:;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp73 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
org$frostlang$frostc$IR$Block$ID$nullable $tmp74 = *$tmp73;
*(&local9) = $tmp74;
org$frostlang$frostc$Variable** $tmp75 = (org$frostlang$frostc$Variable**) (param0->$data + 9);
org$frostlang$frostc$Variable* $tmp76 = *$tmp75;
*(&local10) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
org$frostlang$frostc$Variable* $tmp77 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local10) = $tmp76;
// <no location>
org$frostlang$frostc$Variable* $tmp78 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
org$frostlang$frostc$Variable* $tmp79 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local10) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT$frost$core$Int$org$frostlang$frostc$Compiler$InlineReturn$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, frost$collections$ListView* param2, frost$core$Int param3, org$frostlang$frostc$Compiler$InlineReturn* param4, org$frostlang$frostc$IR$Block$ID param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Int* $tmp80 = &param0->$rawValue;
*$tmp80 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp81 = (frost$collections$ListView**) (param0->$data + 0);
*$tmp81 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Int* $tmp82 = (frost$core$Int*) (param0->$data + 8);
*$tmp82 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Compiler$InlineReturn** $tmp83 = (org$frostlang$frostc$Compiler$InlineReturn**) (param0->$data + 16);
*$tmp83 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
org$frostlang$frostc$IR$Block$ID* $tmp84 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
*$tmp84 = param5;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, frost$core$String* param2, org$frostlang$frostc$IR$Block$ID param3, org$frostlang$frostc$IR$Block$ID param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Int* $tmp85 = &param0->$rawValue;
*$tmp85 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp86 = (frost$core$String**) (param0->$data + 0);
*$tmp86 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
org$frostlang$frostc$IR$Block$ID* $tmp87 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
*$tmp87 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
org$frostlang$frostc$IR$Block$ID* $tmp88 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
*$tmp88 = param4;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Int* $tmp89 = &param0->$rawValue;
*$tmp89 = param1;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$Variable(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, org$frostlang$frostc$Variable* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Int* $tmp90 = &param0->$rawValue;
*$tmp90 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Variable** $tmp91 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*$tmp91 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$IR$Value(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, org$frostlang$frostc$IR$Value* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Int* $tmp92 = &param0->$rawValue;
*$tmp92 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp93 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp93 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, org$frostlang$frostc$IR$Block$ID$nullable param2, org$frostlang$frostc$Variable* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Int* $tmp94 = &param0->$rawValue;
*$tmp94 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
org$frostlang$frostc$IR$Block$ID$nullable* $tmp95 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
*$tmp95 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Variable** $tmp96 = (org$frostlang$frostc$Variable**) (param0->$data + 9);
*$tmp96 = param3;
return;

}
frost$core$String* org$frostlang$frostc$Compiler$EnclosingContext$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$collections$ListView* local0 = NULL;
frost$core$Int local1;
org$frostlang$frostc$Compiler$InlineReturn* local2 = NULL;
org$frostlang$frostc$IR$Block$ID local3;
frost$core$String* local4 = NULL;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Block$ID local6;
frost$core$String* local7 = NULL;
org$frostlang$frostc$Variable* local8 = NULL;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$IR$Block$ID$nullable local10;
org$frostlang$frostc$Variable* local11 = NULL;
frost$core$String* local12 = NULL;
frost$core$String* local13 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Int* $tmp97 = &param0->$rawValue;
frost$core$Int $tmp98 = *$tmp97;
frost$core$Int $tmp99 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp100 = $tmp98.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 == $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block2; else goto block3;
block2:;
frost$collections$ListView** $tmp105 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp106 = *$tmp105;
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$collections$ListView* $tmp107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local0) = $tmp106;
frost$core$Int* $tmp108 = (frost$core$Int*) (param0->$data + 8);
frost$core$Int $tmp109 = *$tmp108;
*(&local1) = $tmp109;
org$frostlang$frostc$Compiler$InlineReturn** $tmp110 = (org$frostlang$frostc$Compiler$InlineReturn**) (param0->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp111 = *$tmp110;
*(&local2) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
org$frostlang$frostc$Compiler$InlineReturn* $tmp112 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local2) = $tmp111;
org$frostlang$frostc$IR$Block$ID* $tmp113 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp114 = *$tmp113;
*(&local3) = $tmp114;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$collections$ListView* $tmp115 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn117 $tmp116 = ($fn117) ((frost$core$Object*) $tmp115)->$class->vtable[0];
frost$core$String* $tmp118 = $tmp116(((frost$core$Object*) $tmp115));
frost$core$String* $tmp119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s120, $tmp118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp119, &$s122);
frost$core$Int $tmp123 = *(&local1);
frost$core$Int$wrapper* $tmp124;
$tmp124 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp124->value = $tmp123;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn126 $tmp125 = ($fn126) ((frost$core$Object*) $tmp124)->$class->vtable[0];
frost$core$String* $tmp127 = $tmp125(((frost$core$Object*) $tmp124));
frost$core$String* $tmp128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp121, $tmp127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$String* $tmp129 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp128, &$s130);
org$frostlang$frostc$Compiler$InlineReturn* $tmp131 = *(&local2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn133 $tmp132 = ($fn133) ((frost$core$Object*) $tmp131)->$class->vtable[0];
frost$core$String* $tmp134 = $tmp132(((frost$core$Object*) $tmp131));
frost$core$String* $tmp135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp129, $tmp134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$String* $tmp136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp135, &$s137);
org$frostlang$frostc$IR$Block$ID $tmp138 = *(&local3);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp139;
$tmp139 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp139->value = $tmp138;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn141 $tmp140 = ($fn141) ((frost$core$Object*) $tmp139)->$class->vtable[0];
frost$core$String* $tmp142 = $tmp140(((frost$core$Object*) $tmp139));
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp136, $tmp142);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$String* $tmp144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp143, &$s145);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
org$frostlang$frostc$Compiler$InlineReturn* $tmp146 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
*(&local2) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$collections$ListView* $tmp147 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local0) = ((frost$collections$ListView*) NULL);
return $tmp144;
block3:;
frost$core$Int $tmp148 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp149 = $tmp98.value;
int64_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 == $tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block9; else goto block10;
block9:;
frost$core$String** $tmp154 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp155 = *$tmp154;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$String* $tmp156 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local4) = $tmp155;
org$frostlang$frostc$IR$Block$ID* $tmp157 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
org$frostlang$frostc$IR$Block$ID $tmp158 = *$tmp157;
*(&local5) = $tmp158;
org$frostlang$frostc$IR$Block$ID* $tmp159 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp160 = *$tmp159;
*(&local6) = $tmp160;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$String* $tmp161 = *(&local4);
// begin inline call to function frost.core.Frost.string(o:frost.core.Object?):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
frost$core$Bit $tmp162 = (frost$core$Bit) {((frost$core$Object*) $tmp161) != NULL};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
$fn165 $tmp164 = ($fn165) ((frost$core$Object*) $tmp161)->$class->vtable[0];
frost$core$String* $tmp166 = $tmp164(((frost$core$Object*) $tmp161));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local7) = $tmp166;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s167));
*(&local7) = &$s168;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s169));
goto block12;
block12:;
frost$core$String* $tmp170 = *(&local7);
frost$core$String* $tmp171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s172, $tmp170);
frost$core$String* $tmp173 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp171, &$s174);
org$frostlang$frostc$IR$Block$ID $tmp175 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp176;
$tmp176 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp176->value = $tmp175;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn178 $tmp177 = ($fn178) ((frost$core$Object*) $tmp176)->$class->vtable[0];
frost$core$String* $tmp179 = $tmp177(((frost$core$Object*) $tmp176));
frost$core$String* $tmp180 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp173, $tmp179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$String* $tmp181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp180, &$s182);
org$frostlang$frostc$IR$Block$ID $tmp183 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp184;
$tmp184 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp184->value = $tmp183;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn186 $tmp185 = ($fn186) ((frost$core$Object*) $tmp184)->$class->vtable[0];
frost$core$String* $tmp187 = $tmp185(((frost$core$Object*) $tmp184));
frost$core$String* $tmp188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp181, $tmp187);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$String* $tmp189 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp188, &$s190);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$String* $tmp191 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp192 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local4) = ((frost$core$String*) NULL);
return $tmp189;
block10:;
frost$core$Int $tmp193 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp194 = $tmp98.value;
int64_t $tmp195 = $tmp193.value;
bool $tmp196 = $tmp194 == $tmp195;
frost$core$Bit $tmp197 = (frost$core$Bit) {$tmp196};
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s199));
return &$s200;
block18:;
frost$core$Int $tmp201 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp202 = $tmp98.value;
int64_t $tmp203 = $tmp201.value;
bool $tmp204 = $tmp202 == $tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Variable** $tmp207 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp208 = *$tmp207;
*(&local8) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
org$frostlang$frostc$Variable* $tmp209 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local8) = $tmp208;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
org$frostlang$frostc$Variable* $tmp210 = *(&local8);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn212 $tmp211 = ($fn212) ((frost$core$Object*) $tmp210)->$class->vtable[0];
frost$core$String* $tmp213 = $tmp211(((frost$core$Object*) $tmp210));
frost$core$String* $tmp214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s215, $tmp213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$String* $tmp216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp214, &$s217);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
org$frostlang$frostc$Variable* $tmp218 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local8) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp216;
block21:;
frost$core$Int $tmp219 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp220 = $tmp98.value;
int64_t $tmp221 = $tmp219.value;
bool $tmp222 = $tmp220 == $tmp221;
frost$core$Bit $tmp223 = (frost$core$Bit) {$tmp222};
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Value** $tmp225 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp226 = *$tmp225;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
org$frostlang$frostc$IR$Value* $tmp227 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local9) = $tmp226;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
org$frostlang$frostc$IR$Value* $tmp228 = *(&local9);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn230 $tmp229 = ($fn230) ((frost$core$Object*) $tmp228)->$class->vtable[0];
frost$core$String* $tmp231 = $tmp229(((frost$core$Object*) $tmp228));
frost$core$String* $tmp232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s233, $tmp231);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$String* $tmp234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp232, &$s235);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
org$frostlang$frostc$IR$Value* $tmp236 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp234;
block25:;
frost$core$Int $tmp237 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp238 = $tmp98.value;
int64_t $tmp239 = $tmp237.value;
bool $tmp240 = $tmp238 == $tmp239;
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block28; else goto block29;
block28:;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp243 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
org$frostlang$frostc$IR$Block$ID$nullable $tmp244 = *$tmp243;
*(&local10) = $tmp244;
org$frostlang$frostc$Variable** $tmp245 = (org$frostlang$frostc$Variable**) (param0->$data + 9);
org$frostlang$frostc$Variable* $tmp246 = *$tmp245;
*(&local11) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
org$frostlang$frostc$Variable* $tmp247 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local11) = $tmp246;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
org$frostlang$frostc$IR$Block$ID$nullable $tmp248 = *(&local10);
frost$core$Object* $tmp249;
if ($tmp248.nonnull) {
    org$frostlang$frostc$IR$Block$ID$wrapper* $tmp250;
    $tmp250 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
    $tmp250->value = ((org$frostlang$frostc$IR$Block$ID) $tmp248.value);
    $tmp249 = ((frost$core$Object*) $tmp250);
}
else {
    $tmp249 = NULL;
}
// begin inline call to function frost.core.Frost.string(o:frost.core.Object?):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
frost$core$Bit $tmp251 = (frost$core$Bit) {$tmp249 != NULL};
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
$fn254 $tmp253 = ($fn254) $tmp249->$class->vtable[0];
frost$core$String* $tmp255 = $tmp253($tmp249);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local12) = $tmp255;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
goto block31;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s256));
*(&local12) = &$s257;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s258));
goto block31;
block31:;
frost$core$String* $tmp259 = *(&local12);
frost$core$String* $tmp260 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s261, $tmp259);
frost$core$String* $tmp262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp260, &$s263);
org$frostlang$frostc$Variable* $tmp264 = *(&local11);
// begin inline call to function frost.core.Frost.string(o:frost.core.Object?):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
frost$core$Bit $tmp265 = (frost$core$Bit) {((frost$core$Object*) $tmp264) != NULL};
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
$fn268 $tmp267 = ($fn268) ((frost$core$Object*) $tmp264)->$class->vtable[0];
frost$core$String* $tmp269 = $tmp267(((frost$core$Object*) $tmp264));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local13) = $tmp269;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
goto block34;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s270));
*(&local13) = &$s271;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s272));
goto block34;
block34:;
frost$core$String* $tmp273 = *(&local13);
frost$core$String* $tmp274 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp262, $tmp273);
frost$core$String* $tmp275 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp274, &$s276);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$String* $tmp277 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$String* $tmp278 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp249);
org$frostlang$frostc$Variable* $tmp279 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local11) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp275;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Int $tmp280 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s281, $tmp280);
abort(); // unreachable
block1:;
goto block37;
block37:;

}

