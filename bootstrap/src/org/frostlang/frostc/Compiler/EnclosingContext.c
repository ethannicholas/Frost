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
typedef frost$core$String* (*$fn170)(frost$core$Object*);
typedef frost$core$String* (*$fn183)(frost$core$Object*);
typedef frost$core$String* (*$fn191)(frost$core$Object*);
typedef frost$core$String* (*$fn217)(frost$core$Object*);
typedef frost$core$String* (*$fn235)(frost$core$Object*);
typedef frost$core$String* (*$fn264)(frost$core$Object*);
typedef frost$core$String* (*$fn283)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 46, 1025801744820392180, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x4c\x49\x4e\x45\x5f\x43\x4f\x4e\x54\x45\x58\x54\x28", 15, 6901418708807479792, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, -4488024136446187047, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 7586725163111525995, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 7586725163111525995, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45\x5f\x53\x43\x4f\x50\x45\x28", 15, -9160082597147216730, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x4c\x55\x45\x5f\x53\x43\x4f\x50\x45\x28", 12, 5025722873366972767, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x59\x5f\x53\x43\x4f\x50\x45\x28", 10, -1116473329767910717, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

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
org$frostlang$frostc$Variable** $tmp75 = (org$frostlang$frostc$Variable**) (param0->$data + 16);
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
org$frostlang$frostc$Variable** $tmp96 = (org$frostlang$frostc$Variable**) (param0->$data + 16);
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
frost$core$Bit $tmp164 = (frost$core$Bit) {((frost$core$Object*) $tmp161) != NULL};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block15; else goto block16;
block16:;
frost$core$Int $tmp166 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s167, $tmp166, &$s168);
abort(); // unreachable
block15:;
$fn170 $tmp169 = ($fn170) ((frost$core$Object*) $tmp161)->$class->vtable[0];
frost$core$String* $tmp171 = $tmp169(((frost$core$Object*) $tmp161));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local7) = $tmp171;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s172));
*(&local7) = &$s173;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s174));
goto block12;
block12:;
frost$core$String* $tmp175 = *(&local7);
frost$core$String* $tmp176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s177, $tmp175);
frost$core$String* $tmp178 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp176, &$s179);
org$frostlang$frostc$IR$Block$ID $tmp180 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp181;
$tmp181 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp181->value = $tmp180;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn183 $tmp182 = ($fn183) ((frost$core$Object*) $tmp181)->$class->vtable[0];
frost$core$String* $tmp184 = $tmp182(((frost$core$Object*) $tmp181));
frost$core$String* $tmp185 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp178, $tmp184);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$String* $tmp186 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp185, &$s187);
org$frostlang$frostc$IR$Block$ID $tmp188 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp189;
$tmp189 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp189->value = $tmp188;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn191 $tmp190 = ($fn191) ((frost$core$Object*) $tmp189)->$class->vtable[0];
frost$core$String* $tmp192 = $tmp190(((frost$core$Object*) $tmp189));
frost$core$String* $tmp193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp186, $tmp192);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
frost$core$String* $tmp194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp193, &$s195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$String* $tmp196 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp197 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local4) = ((frost$core$String*) NULL);
return $tmp194;
block10:;
frost$core$Int $tmp198 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp199 = $tmp98.value;
int64_t $tmp200 = $tmp198.value;
bool $tmp201 = $tmp199 == $tmp200;
frost$core$Bit $tmp202 = (frost$core$Bit) {$tmp201};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s204));
return &$s205;
block20:;
frost$core$Int $tmp206 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp207 = $tmp98.value;
int64_t $tmp208 = $tmp206.value;
bool $tmp209 = $tmp207 == $tmp208;
frost$core$Bit $tmp210 = (frost$core$Bit) {$tmp209};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Variable** $tmp212 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp213 = *$tmp212;
*(&local8) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
org$frostlang$frostc$Variable* $tmp214 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
*(&local8) = $tmp213;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
org$frostlang$frostc$Variable* $tmp215 = *(&local8);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn217 $tmp216 = ($fn217) ((frost$core$Object*) $tmp215)->$class->vtable[0];
frost$core$String* $tmp218 = $tmp216(((frost$core$Object*) $tmp215));
frost$core$String* $tmp219 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s220, $tmp218);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$String* $tmp221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp219, &$s222);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
org$frostlang$frostc$Variable* $tmp223 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local8) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp221;
block23:;
frost$core$Int $tmp224 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp225 = $tmp98.value;
int64_t $tmp226 = $tmp224.value;
bool $tmp227 = $tmp225 == $tmp226;
frost$core$Bit $tmp228 = (frost$core$Bit) {$tmp227};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block26; else goto block27;
block26:;
org$frostlang$frostc$IR$Value** $tmp230 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp231 = *$tmp230;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
org$frostlang$frostc$IR$Value* $tmp232 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local9) = $tmp231;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
org$frostlang$frostc$IR$Value* $tmp233 = *(&local9);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn235 $tmp234 = ($fn235) ((frost$core$Object*) $tmp233)->$class->vtable[0];
frost$core$String* $tmp236 = $tmp234(((frost$core$Object*) $tmp233));
frost$core$String* $tmp237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s238, $tmp236);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$String* $tmp239 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp237, &$s240);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
org$frostlang$frostc$IR$Value* $tmp241 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp239;
block27:;
frost$core$Int $tmp242 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp243 = $tmp98.value;
int64_t $tmp244 = $tmp242.value;
bool $tmp245 = $tmp243 == $tmp244;
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block30; else goto block31;
block30:;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp248 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
org$frostlang$frostc$IR$Block$ID$nullable $tmp249 = *$tmp248;
*(&local10) = $tmp249;
org$frostlang$frostc$Variable** $tmp250 = (org$frostlang$frostc$Variable**) (param0->$data + 16);
org$frostlang$frostc$Variable* $tmp251 = *$tmp250;
*(&local11) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
org$frostlang$frostc$Variable* $tmp252 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local11) = $tmp251;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
org$frostlang$frostc$IR$Block$ID$nullable $tmp253 = *(&local10);
frost$core$Object* $tmp254;
if ($tmp253.nonnull) {
    org$frostlang$frostc$IR$Block$ID$wrapper* $tmp255;
    $tmp255 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
    $tmp255->value = ((org$frostlang$frostc$IR$Block$ID) $tmp253.value);
    $tmp254 = ((frost$core$Object*) $tmp255);
}
else {
    $tmp254 = NULL;
}
// begin inline call to function frost.core.Frost.string(o:frost.core.Object?):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
frost$core$Bit $tmp256 = (frost$core$Bit) {$tmp254 != NULL};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
frost$core$Bit $tmp258 = (frost$core$Bit) {$tmp254 != NULL};
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block36; else goto block37;
block37:;
frost$core$Int $tmp260 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s261, $tmp260, &$s262);
abort(); // unreachable
block36:;
$fn264 $tmp263 = ($fn264) $tmp254->$class->vtable[0];
frost$core$String* $tmp265 = $tmp263($tmp254);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local12) = $tmp265;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
goto block33;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s266));
*(&local12) = &$s267;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s268));
goto block33;
block33:;
frost$core$String* $tmp269 = *(&local12);
frost$core$String* $tmp270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s271, $tmp269);
frost$core$String* $tmp272 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp270, &$s273);
org$frostlang$frostc$Variable* $tmp274 = *(&local11);
// begin inline call to function frost.core.Frost.string(o:frost.core.Object?):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
frost$core$Bit $tmp275 = (frost$core$Bit) {((frost$core$Object*) $tmp274) != NULL};
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
frost$core$Bit $tmp277 = (frost$core$Bit) {((frost$core$Object*) $tmp274) != NULL};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block41; else goto block42;
block42:;
frost$core$Int $tmp279 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s280, $tmp279, &$s281);
abort(); // unreachable
block41:;
$fn283 $tmp282 = ($fn283) ((frost$core$Object*) $tmp274)->$class->vtable[0];
frost$core$String* $tmp284 = $tmp282(((frost$core$Object*) $tmp274));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local13) = $tmp284;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
goto block38;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s285));
*(&local13) = &$s286;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s287));
goto block38;
block38:;
frost$core$String* $tmp288 = *(&local13);
frost$core$String* $tmp289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp272, $tmp288);
frost$core$String* $tmp290 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp289, &$s291);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$String* $tmp292 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$core$String* $tmp293 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
org$frostlang$frostc$Variable* $tmp294 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local11) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp290;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
frost$core$Int $tmp295 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s296, $tmp295);
abort(); // unreachable
block1:;
goto block43;
block43:;

}

