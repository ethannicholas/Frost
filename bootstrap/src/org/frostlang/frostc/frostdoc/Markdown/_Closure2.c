#include "org/frostlang/frostc/frostdoc/Markdown/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/frostdoc/Markdown/LinkDefinition.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure2$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure2$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure2$$anonymous1$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn17)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn24)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Int64 (*$fn27)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn38)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 48, -6077627060095498515, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure2$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure2* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 177
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure2$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure2* param0) {

// line 177
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure2$$anonymous1$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure2* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
// line 178
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
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
// line 179
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp13 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$Int64 $tmp14 = (frost$core$Int64) {2};
ITable* $tmp15 = param1->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp15 = $tmp15->next;
}
$fn17 $tmp16 = $tmp15->methods[0];
frost$core$Object* $tmp18 = $tmp16(param1, $tmp14);
frost$core$MutableString$init$frost$core$String($tmp13, ((frost$core$String*) $tmp18));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$MutableString* $tmp19 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local1) = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q($tmp18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// line 180
org$frostlang$frostc$frostdoc$Markdown** $tmp20 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp21 = *$tmp20;
frost$core$MutableString* $tmp22 = *(&local1);
$fn24 $tmp23 = ($fn24) $tmp21->$class->vtable[28];
$tmp23($tmp21, $tmp22);
// line 181
*(&local2) = ((frost$core$String*) NULL);
// line 182
ITable* $tmp25 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
frost$core$Int64 $tmp28 = $tmp26(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp29 = (frost$core$Int64) {3};
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 > $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block3;
block1:;
// line 183
frost$core$Int64 $tmp35 = (frost$core$Int64) {3};
ITable* $tmp36 = param1->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[0];
frost$core$Object* $tmp39 = $tmp37(param1, $tmp35);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp39)));
frost$core$String* $tmp40 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local2) = ((frost$core$String*) $tmp39);
frost$core$Frost$unref$frost$core$Object$Q($tmp39);
// line 184
frost$core$String* $tmp41 = *(&local2);
frost$core$Bit $tmp42 = frost$core$Bit$init$builtin_bit($tmp41 == NULL);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block4; else goto block5;
block4:;
// line 185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s44));
frost$core$String* $tmp45 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local2) = &$s44;
goto block5;
block5:;
// line 187
frost$core$String* $tmp46 = *(&local2);
frost$core$String* $tmp47 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp46, &$s48, &$s49);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$String* $tmp50 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local2) = $tmp47;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
goto block2;
block3:;
// line 1
// line 190
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s51));
frost$core$String* $tmp52 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local2) = &$s51;
goto block2;
block2:;
// line 193
org$frostlang$frostc$frostdoc$Markdown** $tmp53 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp54 = *$tmp53;
frost$collections$HashMap** $tmp55 = &$tmp54->linkDefinitions;
frost$collections$HashMap* $tmp56 = *$tmp55;
frost$core$String* $tmp57 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$LinkDefinition));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp58 = (org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$LinkDefinition$class);
frost$core$MutableString* $tmp59 = *(&local1);
frost$core$String* $tmp60 = frost$core$MutableString$finish$R$frost$core$String($tmp59);
frost$core$String* $tmp61 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition$init$frost$core$String$frost$core$String($tmp58, $tmp60, $tmp61);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp56, ((frost$collections$Key*) $tmp57), ((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// line 194
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s62));
frost$core$String* $tmp63 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp64 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local0) = ((frost$core$String*) NULL);
return &$s66;

}






