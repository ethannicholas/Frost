#include "org/frostlang/frostc/frostdoc/Markdown/_Closure16.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure16$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure16$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure16$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure16$$anonymous15$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn24)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn40)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn46)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn51)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x36", 49, -5097778637230146734, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6c\x69\x3e", 4, 166990836, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x6c\x69\x3e\x0a", 6, 1697129369393, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure16$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure16* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 736
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure16$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure16* param0) {

// line 736
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure16$$anonymous15$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure16* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$Bit local3;
// line 737
frost$core$Int64 $tmp7 = (frost$core$Int64) {4};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp11)));
frost$core$String* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = ((frost$core$String*) $tmp11);
frost$core$Frost$unref$frost$core$Object$Q($tmp11);
// unreffing REF($4:frost.collections.ListView.T)
// line 738
frost$core$MutableString* $tmp13 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp14 = *(&local0);
frost$core$Bit $tmp15 = frost$core$Bit$init$builtin_bit($tmp14 != NULL);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp17 = (frost$core$Int64) {738};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s18, $tmp17, &$s19);
abort(); // unreachable
block1:;
frost$core$MutableString$init$frost$core$String($tmp13, $tmp14);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$MutableString* $tmp20 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
*(&local1) = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing REF($17:frost.core.MutableString)
// line 739
frost$core$Int64 $tmp21 = (frost$core$Int64) {1};
ITable* $tmp22 = param1->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp22 = $tmp22->next;
}
$fn24 $tmp23 = $tmp22->methods[0];
frost$core$Object* $tmp25 = $tmp23(param1, $tmp21);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp25)));
frost$core$String* $tmp26 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local2) = ((frost$core$String*) $tmp25);
frost$core$Frost$unref$frost$core$Object$Q($tmp25);
// unreffing REF($42:frost.collections.ListView.T)
// line 740
frost$core$String* $tmp27 = *(&local2);
frost$core$Bit $tmp28 = org$frostlang$frostc$frostdoc$Markdown$isEmptyString$frost$core$String$Q$R$frost$core$Bit($tmp27);
frost$core$Bit $tmp29 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp28);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block5; else goto block6;
block5:;
*(&local3) = $tmp29;
goto block7;
block6:;
frost$core$MutableString* $tmp31 = *(&local1);
frost$core$Bit $tmp32 = org$frostlang$frostc$frostdoc$Markdown$hasParagraphBreak$frost$core$MutableString$R$frost$core$Bit($tmp31);
*(&local3) = $tmp32;
goto block7;
block7:;
frost$core$Bit $tmp33 = *(&local3);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block3; else goto block8;
block3:;
// line 741
frost$core$MutableString* $tmp35 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString($tmp35);
// line 742
org$frostlang$frostc$frostdoc$Markdown** $tmp36 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp37 = *$tmp36;
frost$core$MutableString* $tmp38 = *(&local1);
$fn40 $tmp39 = ($fn40) $tmp37->$class->vtable[6];
$tmp39($tmp37, $tmp38);
goto block4;
block8:;
// line 1
// line 746
frost$core$MutableString* $tmp41 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString($tmp41);
// line 747
org$frostlang$frostc$frostdoc$Markdown** $tmp42 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp43 = *$tmp42;
frost$core$MutableString* $tmp44 = *(&local1);
$fn46 $tmp45 = ($fn46) $tmp43->$class->vtable[19];
$tmp45($tmp43, $tmp44);
// line 748
org$frostlang$frostc$frostdoc$Markdown** $tmp47 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp48 = *$tmp47;
frost$core$MutableString* $tmp49 = *(&local1);
$fn51 $tmp50 = ($fn51) $tmp48->$class->vtable[22];
$tmp50($tmp48, $tmp49);
goto block4;
block4:;
// line 750
frost$core$MutableString* $tmp52 = *(&local1);
frost$core$MutableString$trim($tmp52);
// line 751
frost$core$MutableString* $tmp53 = *(&local1);
frost$core$String* $tmp54 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s55, ((frost$core$Object*) $tmp53));
frost$core$String* $tmp56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp54, &$s57);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// unreffing REF($103:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
// unreffing REF($102:frost.core.String)
frost$core$String* $tmp58 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// unreffing leadingLine
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp59 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing item
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp60 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return $tmp56;

}

