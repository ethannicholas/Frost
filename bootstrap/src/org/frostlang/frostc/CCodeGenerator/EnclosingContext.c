#include "org/frostlang/frostc/CCodeGenerator/EnclosingContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Map.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$CCodeGenerator$EnclosingContext$class_type org$frostlang$frostc$CCodeGenerator$EnclosingContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$EnclosingContext$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 52, 5701039601301631166, NULL };

void org$frostlang$frostc$CCodeGenerator$EnclosingContext$cleanup(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$collections$Map* local4 = NULL;
frost$core$String* local5 = NULL;
// line 12
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
frost$core$String** $tmp7 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp8 = *$tmp7;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$String* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
frost$core$String** $tmp10 = (frost$core$String**) (param0->$data + 8);
frost$core$String* $tmp11 = *$tmp10;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$String* $tmp12 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local1) = $tmp11;
frost$core$String** $tmp13 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp14 = *$tmp13;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$String* $tmp15 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local2) = $tmp14;
// line 1
frost$core$String* $tmp16 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// line 1
frost$core$String* $tmp17 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// line 1
frost$core$String* $tmp18 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$String* $tmp19 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// unreffing _f2
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp20 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing _f1
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp21 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing _f0
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {1};
frost$core$Bit $tmp23 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block4; else goto block1;
block4:;
frost$core$String** $tmp25 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp26 = *$tmp25;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$String* $tmp27 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local3) = $tmp26;
frost$collections$Map** $tmp28 = (frost$collections$Map**) (param0->$data + 8);
frost$collections$Map* $tmp29 = *$tmp28;
*(&local4) = ((frost$collections$Map*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$collections$Map* $tmp30 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local4) = $tmp29;
frost$core$String** $tmp31 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp32 = *$tmp31;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$String* $tmp33 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local5) = $tmp32;
// line 1
frost$core$String* $tmp34 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// line 1
frost$collections$Map* $tmp35 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// line 1
frost$core$String* $tmp36 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$String* $tmp37 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// unreffing _f2
*(&local5) = ((frost$core$String*) NULL);
frost$collections$Map* $tmp38 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// unreffing _f1
*(&local4) = ((frost$collections$Map*) NULL);
frost$core$String* $tmp39 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// unreffing _f0
*(&local3) = ((frost$core$String*) NULL);
goto block1;
block1:;
// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$CCodeGenerator$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$frost$core$String$frost$core$String(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0, frost$core$Int64 param1, frost$core$String* param2, frost$core$String* param3, frost$core$String* param4) {

// line 12
frost$core$Int64* $tmp40 = &param0->$rawValue;
*$tmp40 = param1;
// line 12
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp41 = (frost$core$String**) (param0->$data + 0);
*$tmp41 = param2;
// line 12
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp42 = (frost$core$String**) (param0->$data + 8);
*$tmp42 = param3;
// line 12
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp43 = (frost$core$String**) (param0->$data + 16);
*$tmp43 = param4;
return;

}
void org$frostlang$frostc$CCodeGenerator$EnclosingContext$init$frost$core$Int64$frost$core$String$frost$collections$Map$LTfrost$core$String$Corg$frostlang$frostc$Pair$LTfrost$core$Int64$Cfrost$core$String$GT$GT$frost$core$String(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0, frost$core$Int64 param1, frost$core$String* param2, frost$collections$Map* param3, frost$core$String* param4) {

// line 12
frost$core$Int64* $tmp44 = &param0->$rawValue;
*$tmp44 = param1;
// line 12
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp45 = (frost$core$String**) (param0->$data + 0);
*$tmp45 = param2;
// line 12
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$collections$Map** $tmp46 = (frost$collections$Map**) (param0->$data + 8);
*$tmp46 = param3;
// line 12
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp47 = (frost$core$String**) (param0->$data + 16);
*$tmp47 = param4;
return;

}

