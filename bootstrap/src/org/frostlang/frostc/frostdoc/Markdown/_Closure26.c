#include "org/frostlang/frostc/frostdoc/Markdown/_Closure26.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/frostdoc/Markdown/LinkDefinition.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure26$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure26$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure26$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn53)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn67)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn87)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn98)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn112)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x36", 49, -5097778637230146633, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x6c\x74\x3d\x22", 6, 1408049687549, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x20\x74\x69\x74\x6c\x65\x3d\x22", 9, 1465411637805988408, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22", 10, -7235316333681816127, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x3e", 2, 15010, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure26$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure26* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:898
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure26$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure26* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:898
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure26* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:899
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:900
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp11)));
frost$core$String* $tmp12 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local1) = ((frost$core$String*) $tmp11);
frost$core$Frost$unref$frost$core$Object$Q($tmp11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:901
frost$core$Int64 $tmp13 = (frost$core$Int64) {2};
ITable* $tmp14 = param1->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
frost$core$Object* $tmp17 = $tmp15(param1, $tmp13);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp17)));
frost$core$String* $tmp18 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local2) = ((frost$core$String*) $tmp17);
frost$core$Frost$unref$frost$core$Object$Q($tmp17);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:902
frost$core$Int64 $tmp19 = (frost$core$Int64) {3};
ITable* $tmp20 = param1->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Object* $tmp23 = $tmp21(param1, $tmp19);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp23)));
frost$core$String* $tmp24 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local3) = ((frost$core$String*) $tmp23);
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:903
frost$core$String* $tmp25 = *(&local3);
frost$core$Bit $tmp26 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp25, &$s27);
bool $tmp28 = $tmp26.value;
if ($tmp28) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:904
frost$core$String* $tmp29 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$String* $tmp30 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local3) = $tmp29;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:908
org$frostlang$frostc$frostdoc$Markdown** $tmp31 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp32 = *$tmp31;
frost$collections$HashMap** $tmp33 = &$tmp32->linkDefinitions;
frost$collections$HashMap* $tmp34 = *$tmp33;
frost$core$String* $tmp35 = *(&local3);
frost$core$Object* $tmp36 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp34, ((frost$collections$Key*) $tmp35));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) $tmp36)));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp37 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) $tmp36);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:909
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp38 = *(&local4);
frost$core$Bit $tmp39 = frost$core$Bit$init$builtin_bit($tmp38 != NULL);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:910
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp41 = *(&local4);
frost$core$String** $tmp42 = &$tmp41->url;
frost$core$String* $tmp43 = *$tmp42;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$String* $tmp44 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local5) = $tmp43;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:911
frost$core$String* $tmp45 = *(&local5);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp46 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp46, &$s47);
org$frostlang$frostc$frostdoc$Markdown** $tmp48 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp49 = *$tmp48;
org$frostlang$frostc$frostdoc$Protector** $tmp50 = &$tmp49->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp51 = *$tmp50;
$fn53 $tmp52 = ($fn53) $tmp51->$class->vtable[2];
frost$core$String* $tmp54 = $tmp52($tmp51, &$s55);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:911:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:257
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit(true);
frost$core$String* $tmp57 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String($tmp45, $tmp46, $tmp54, $tmp56);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$String* $tmp58 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local5) = $tmp57;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:912
frost$core$String* $tmp59 = *(&local5);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp60 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp60, &$s61);
org$frostlang$frostc$frostdoc$Markdown** $tmp62 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp63 = *$tmp62;
org$frostlang$frostc$frostdoc$Protector** $tmp64 = &$tmp63->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp65 = *$tmp64;
$fn67 $tmp66 = ($fn67) $tmp65->$class->vtable[2];
frost$core$String* $tmp68 = $tmp66($tmp65, &$s69);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:912:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:257
frost$core$Bit $tmp70 = frost$core$Bit$init$builtin_bit(true);
frost$core$String* $tmp71 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String($tmp59, $tmp60, $tmp68, $tmp70);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$String* $tmp72 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local5) = $tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:913
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp73 = *(&local4);
frost$core$String** $tmp74 = &$tmp73->title;
frost$core$String* $tmp75 = *$tmp74;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$String* $tmp76 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local6) = $tmp75;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:914
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s77));
frost$core$String* $tmp78 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local7) = &$s79;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:915
frost$core$String* $tmp80 = *(&local6);
frost$core$Bit $tmp81 = frost$core$Bit$init$builtin_bit(true);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block10; else goto block9;
block10:;
frost$core$String* $tmp83 = *(&local6);
ITable* $tmp85 = ((frost$core$Equatable*) $tmp83)->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[1];
frost$core$Bit $tmp88 = $tmp86(((frost$core$Equatable*) $tmp83), ((frost$core$Equatable*) &$s84));
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:916
frost$core$String* $tmp90 = *(&local6);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp91 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp91, &$s92);
org$frostlang$frostc$frostdoc$Markdown** $tmp93 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp94 = *$tmp93;
org$frostlang$frostc$frostdoc$Protector** $tmp95 = &$tmp94->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp96 = *$tmp95;
$fn98 $tmp97 = ($fn98) $tmp96->$class->vtable[2];
frost$core$String* $tmp99 = $tmp97($tmp96, &$s100);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:916:43
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:257
frost$core$Bit $tmp101 = frost$core$Bit$init$builtin_bit(true);
frost$core$String* $tmp102 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String($tmp90, $tmp91, $tmp99, $tmp101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$String* $tmp103 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local6) = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:917
frost$core$String* $tmp104 = *(&local6);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp105 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp105, &$s106);
org$frostlang$frostc$frostdoc$Markdown** $tmp107 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp108 = *$tmp107;
org$frostlang$frostc$frostdoc$Protector** $tmp109 = &$tmp108->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp110 = *$tmp109;
$fn112 $tmp111 = ($fn112) $tmp110->$class->vtable[2];
frost$core$String* $tmp113 = $tmp111($tmp110, &$s114);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:917:43
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:257
frost$core$Bit $tmp115 = frost$core$Bit$init$builtin_bit(true);
frost$core$String* $tmp116 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String($tmp104, $tmp105, $tmp113, $tmp115);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$String* $tmp117 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local6) = $tmp116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:918
frost$core$String* $tmp118 = *(&local2);
frost$core$String* $tmp119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s120, $tmp118);
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp119, &$s122);
frost$core$String* $tmp123 = *(&local6);
frost$core$String* $tmp124 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp121, $tmp123);
frost$core$String* $tmp125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp124, &$s126);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$String* $tmp127 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local7) = $tmp125;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:920
frost$core$String* $tmp128 = *(&local5);
frost$core$String* $tmp129 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s130, $tmp128);
frost$core$String* $tmp131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp129, &$s132);
frost$core$String* $tmp133 = *(&local7);
frost$core$String* $tmp134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp131, $tmp133);
frost$core$String* $tmp135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp134, &$s136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$String* $tmp137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local0) = $tmp135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$String* $tmp138 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp139 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp140 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local5) = ((frost$core$String*) NULL);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:923
frost$core$String* $tmp141 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$String* $tmp142 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local0) = $tmp141;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:925
frost$core$String* $tmp143 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp144 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$String* $tmp145 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp146 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp147 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp148 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local0) = ((frost$core$String*) NULL);
return $tmp143;

}

