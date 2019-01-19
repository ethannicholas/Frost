#include "org/frostlang/frostc/Pair.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$Pair$class_type org$frostlang$frostc$Pair$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Pair$get_asString$R$frost$core$String, org$frostlang$frostc$Pair$cleanup} };

typedef frost$core$String* (*$fn15)(frost$core$Object*);
typedef frost$core$String* (*$fn28)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 25, -2845835638817453452, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B(org$frostlang$frostc$Pair* param0, frost$core$Object* param1, frost$core$Object* param2) {

// line 9
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp2 = &param0->first;
frost$core$Object* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q($tmp3);
frost$core$Object** $tmp4 = &param0->first;
*$tmp4 = param1;
// line 10
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp5 = &param0->second;
frost$core$Object* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q($tmp6);
frost$core$Object** $tmp7 = &param0->second;
*$tmp7 = param2;
return;

}
frost$core$String* org$frostlang$frostc$Pair$get_asString$R$frost$core$String(org$frostlang$frostc$Pair* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// line 15
*(&local0) = ((frost$core$String*) NULL);
// line 16
frost$core$Object** $tmp8 = &param0->first;
frost$core$Object* $tmp9 = *$tmp8;
frost$core$Bit $tmp10 = frost$core$Bit$init$builtin_bit(true);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block3;
block1:;
// line 17
frost$core$Object** $tmp12 = &param0->first;
frost$core$Object* $tmp13 = *$tmp12;
$fn15 $tmp14 = ($fn15) $tmp13->$class->vtable[0];
frost$core$String* $tmp16 = $tmp14($tmp13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$String* $tmp17 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local0) = $tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// unreffing REF($15:frost.core.String)
goto block2;
block3:;
// line 1
// line 20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s18));
frost$core$String* $tmp19 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local0) = &$s20;
goto block2;
block2:;
// line 22
*(&local1) = ((frost$core$String*) NULL);
// line 23
frost$core$Object** $tmp21 = &param0->second;
frost$core$Object* $tmp22 = *$tmp21;
frost$core$Bit $tmp23 = frost$core$Bit$init$builtin_bit(true);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block4; else goto block6;
block4:;
// line 24
frost$core$Object** $tmp25 = &param0->second;
frost$core$Object* $tmp26 = *$tmp25;
$fn28 $tmp27 = ($fn28) $tmp26->$class->vtable[0];
frost$core$String* $tmp29 = $tmp27($tmp26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$String* $tmp30 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local1) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($50:frost.core.String)
goto block5;
block6:;
// line 1
// line 27
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s31));
frost$core$String* $tmp32 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local1) = &$s33;
goto block5;
block5:;
// line 29
frost$core$String* $tmp34 = *(&local0);
frost$core$String* $tmp35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s36, $tmp34);
frost$core$String* $tmp37 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp35, &$s38);
frost$core$String* $tmp39 = *(&local1);
frost$core$String* $tmp40 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp37, $tmp39);
frost$core$String* $tmp41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp40, &$s42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing REF($76:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// unreffing REF($75:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// unreffing REF($73:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($72:frost.core.String)
frost$core$String* $tmp43 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing secondString
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp44 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// unreffing firstString
*(&local0) = ((frost$core$String*) NULL);
return $tmp41;

}
void org$frostlang$frostc$Pair$cleanup(org$frostlang$frostc$Pair* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp45 = &param0->first;
frost$core$Object* $tmp46 = *$tmp45;
frost$core$Frost$unref$frost$core$Object$Q($tmp46);
frost$core$Object** $tmp47 = &param0->second;
frost$core$Object* $tmp48 = *$tmp47;
frost$core$Frost$unref$frost$core$Object$Q($tmp48);
return;

}






