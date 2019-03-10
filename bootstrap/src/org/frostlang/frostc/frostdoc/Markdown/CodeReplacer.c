#include "org/frostlang/frostc/frostdoc/Markdown/CodeReplacer.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Matcher.h"
#include "frost/core/Int64.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class_type org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$cleanup, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$firstLine$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$isLanguageIdentifier$frost$core$String$R$frost$core$Bit, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$languageBlock$frost$core$String$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$genericCodeBlock$frost$core$String$R$frost$core$String} };

typedef frost$core$Object* (*$fn8)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn19)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn24)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn30)(frost$core$Object*);
typedef frost$core$String* (*$fn46)(frost$core$Object*);
typedef frost$core$String* (*$fn59)(frost$core$Object*);
typedef frost$core$String* (*$fn64)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$Bit (*$fn69)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$String* (*$fn75)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn80)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$Int64 (*$fn101)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn130)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x43\x6f\x64\x65\x52\x65\x70\x6c\x61\x63\x65\x72", 51, 5860124046831281376, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 7194222049286770233, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x73\x2b\x5c\x7a", 5, -1489214508352743697, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, -3364643104432915395, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, -3364643104432915395, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, -3364643104432915395, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x20\x63\x6c\x61\x73\x73\x3d\x22", 14, 3540744169072508299, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x3e\x0a", 3, -3076321281910339311, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 9, -7742285263970022103, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x3e", 13, 4282403471734233551, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 16, 991304072172126489, NULL };

void org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:446
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->markdown;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->markdown;
*$tmp4 = param1;
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:450
frost$core$Int64 $tmp5 = (frost$core$Int64) {1u};
ITable* $tmp6 = param1->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[0];
frost$core$Object* $tmp9 = $tmp7(param1, $tmp5);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp9)));
frost$core$String* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
*(&local0) = ((frost$core$String*) $tmp9);
frost$core$Frost$unref$frost$core$Object$Q($tmp9);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:451
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp11 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp12 = *(&local0);
frost$core$MutableString$init$frost$core$String($tmp11, $tmp12);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$MutableString* $tmp13 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
*(&local1) = $tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:452
frost$core$MutableString* $tmp14 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString($tmp14);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:453
org$frostlang$frostc$frostdoc$Markdown** $tmp15 = &param0->markdown;
org$frostlang$frostc$frostdoc$Markdown* $tmp16 = *$tmp15;
frost$core$MutableString* $tmp17 = *(&local1);
$fn19 $tmp18 = ($fn19) $tmp16->$class->vtable[18];
$tmp18($tmp16, $tmp17);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:454
org$frostlang$frostc$frostdoc$Markdown** $tmp20 = &param0->markdown;
org$frostlang$frostc$frostdoc$Markdown* $tmp21 = *$tmp20;
frost$core$MutableString* $tmp22 = *(&local1);
$fn24 $tmp23 = ($fn24) $tmp21->$class->vtable[14];
$tmp23($tmp21, $tmp22);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:455
frost$core$MutableString* $tmp25 = *(&local1);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp26 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp26, &$s27);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:455:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp28 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn30 $tmp29 = ($fn30) ((frost$core$Object*) $tmp25)->$class->vtable[0];
frost$core$String* $tmp31 = $tmp29(((frost$core$Object*) $tmp25));
frost$core$Matcher* $tmp32 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp26, $tmp31);
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Matcher* $tmp33 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local2) = $tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear($tmp25);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp34 = *(&local2);
frost$core$Bit $tmp35 = frost$core$Matcher$find$R$frost$core$Bit($tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp37 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp37, $tmp25, &$s38, $tmp28);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp39 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp39, $tmp25);
frost$core$Matcher* $tmp40 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:456
frost$core$MutableString* $tmp41 = *(&local1);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp42 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp42, &$s43);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:456:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp44 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn46 $tmp45 = ($fn46) ((frost$core$Object*) $tmp41)->$class->vtable[0];
frost$core$String* $tmp47 = $tmp45(((frost$core$Object*) $tmp41));
frost$core$Matcher* $tmp48 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp42, $tmp47);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$Matcher* $tmp49 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local3) = $tmp48;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear($tmp41);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp50 = *(&local3);
frost$core$Bit $tmp51 = frost$core$Matcher$find$R$frost$core$Bit($tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp53 = *(&local3);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp53, $tmp41, &$s54, $tmp44);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp55 = *(&local3);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp55, $tmp41);
frost$core$Matcher* $tmp56 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:457
frost$core$MutableString* $tmp57 = *(&local1);
$fn59 $tmp58 = ($fn59) ((frost$core$Object*) $tmp57)->$class->vtable[0];
frost$core$String* $tmp60 = $tmp58(((frost$core$Object*) $tmp57));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$String* $tmp61 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local4) = $tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:458
*(&local5) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:459
frost$core$String* $tmp62 = *(&local4);
$fn64 $tmp63 = ($fn64) param0->$class->vtable[3];
frost$core$String* $tmp65 = $tmp63(param0, $tmp62);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$String* $tmp66 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local6) = $tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:460
frost$core$String* $tmp67 = *(&local6);
$fn69 $tmp68 = ($fn69) param0->$class->vtable[4];
frost$core$Bit $tmp70 = $tmp68(param0, $tmp67);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:461
frost$core$String* $tmp72 = *(&local6);
frost$core$String* $tmp73 = *(&local4);
$fn75 $tmp74 = ($fn75) param0->$class->vtable[5];
frost$core$String* $tmp76 = $tmp74(param0, $tmp72, $tmp73);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$String* $tmp77 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local5) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:464
frost$core$String* $tmp78 = *(&local4);
$fn80 $tmp79 = ($fn80) param0->$class->vtable[6];
frost$core$String* $tmp81 = $tmp79(param0, $tmp78);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$String* $tmp82 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local5) = $tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:466
frost$core$String* $tmp83 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$String* $tmp84 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp85 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp86 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp87 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp88 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local0) = ((frost$core$String*) NULL);
return $tmp83;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$firstLine$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:470
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from Markdown.frost:470:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1378
frost$core$Int64 $tmp89 = (frost$core$Int64) {9223372036854775807u};
frost$collections$Array* $tmp90 = frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param1, &$s91, $tmp89);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Int64 $tmp92 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Markdown.frost:470:36
frost$core$Int64 $tmp93 = (frost$core$Int64) {0u};
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93.value;
bool $tmp96 = $tmp94 >= $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block5; else goto block4;
block5:;
ITable* $tmp99 = ((frost$collections$CollectionView*) $tmp90)->$class->itable;
while ($tmp99->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp99 = $tmp99->next;
}
$fn101 $tmp100 = $tmp99->methods[0];
frost$core$Int64 $tmp102 = $tmp100(((frost$collections$CollectionView*) $tmp90));
int64_t $tmp103 = $tmp92.value;
int64_t $tmp104 = $tmp102.value;
bool $tmp105 = $tmp103 < $tmp104;
frost$core$Bit $tmp106 = (frost$core$Bit) {$tmp105};
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp108 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s109, $tmp108, &$s110);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp111 = &$tmp90->data;
frost$core$Object** $tmp112 = *$tmp111;
int64_t $tmp113 = $tmp92.value;
frost$core$Object* $tmp114 = $tmp112[$tmp113];
frost$core$Frost$ref$frost$core$Object$Q($tmp114);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp114)));
frost$core$Frost$unref$frost$core$Object$Q($tmp114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
return ((frost$core$String*) $tmp114);

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$isLanguageIdentifier$frost$core$String$R$frost$core$Bit(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:474
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s115));
frost$core$String* $tmp116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local0) = &$s117;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:475
frost$core$Bit $tmp118 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param1, &$s119);
bool $tmp120 = $tmp118.value;
if ($tmp120) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:476
frost$core$String* $tmp121 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param1, &$s122, &$s123);
frost$core$String* $tmp124 = frost$core$String$get_trimmed$R$frost$core$String($tmp121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$String* $tmp125 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local0) = $tmp124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:478
frost$core$String* $tmp126 = *(&local0);
ITable* $tmp128 = ((frost$core$Equatable*) $tmp126)->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp128 = $tmp128->next;
}
$fn130 $tmp129 = $tmp128->methods[1];
frost$core$Bit $tmp131 = $tmp129(((frost$core$Equatable*) $tmp126), ((frost$core$Equatable*) &$s127));
frost$core$String* $tmp132 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local0) = ((frost$core$String*) NULL);
return $tmp131;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$languageBlock$frost$core$String$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:482
frost$core$String* $tmp133 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param1, &$s134, &$s135);
frost$core$String* $tmp136 = frost$core$String$get_trimmed$R$frost$core$String($tmp133);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$String* $tmp137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local0) = $tmp136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:483
frost$core$String* $tmp138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s139);
frost$core$String* $tmp140 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param2, $tmp138, &$s141);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$String* $tmp142 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local1) = $tmp140;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:484
frost$core$String* $tmp143 = *(&local0);
frost$core$String* $tmp144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s145, $tmp143);
frost$core$String* $tmp146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp144, &$s147);
frost$core$String* $tmp148 = *(&local1);
frost$core$String* $tmp149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp146, $tmp148);
frost$core$String* $tmp150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp149, &$s151);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$String* $tmp152 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp153 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local0) = ((frost$core$String*) NULL);
return $tmp150;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$genericCodeBlock$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:488
frost$core$String* $tmp154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s155, param1);
frost$core$String* $tmp156 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp154, &$s157);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
return $tmp156;

}
void org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$cleanup(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:440
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp158 = &param0->markdown;
org$frostlang$frostc$frostdoc$Markdown* $tmp159 = *$tmp158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
return;

}

