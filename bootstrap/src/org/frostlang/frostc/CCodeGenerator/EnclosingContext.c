#include "org/frostlang/frostc/CCodeGenerator/EnclosingContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Map.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$CCodeGenerator$EnclosingContext$class_type org$frostlang$frostc$CCodeGenerator$EnclosingContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$EnclosingContext$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 52, -8601812873085532932, NULL };

void org$frostlang$frostc$CCodeGenerator$EnclosingContext$cleanup(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$collections$Map* local4 = NULL;
frost$core$String* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
frost$core$String** $tmp10 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp11 = *$tmp10;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$String* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = $tmp11;
frost$core$String** $tmp13 = (frost$core$String**) (param0->$data + 8);
frost$core$String* $tmp14 = *$tmp13;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$String* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = $tmp14;
frost$core$String** $tmp16 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp17 = *$tmp16;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$String* $tmp18 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local2) = $tmp17;
// <no location>
frost$core$String* $tmp19 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// <no location>
frost$core$String* $tmp20 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// <no location>
frost$core$String* $tmp21 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$String* $tmp22 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp23 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp24 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp25 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp26 = $tmp3.value;
int64_t $tmp27 = $tmp25.value;
bool $tmp28 = $tmp26 == $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block5; else goto block1;
block5:;
frost$core$String** $tmp31 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp32 = *$tmp31;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$String* $tmp33 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local3) = $tmp32;
frost$collections$Map** $tmp34 = (frost$collections$Map**) (param0->$data + 8);
frost$collections$Map* $tmp35 = *$tmp34;
*(&local4) = ((frost$collections$Map*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$collections$Map* $tmp36 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local4) = $tmp35;
frost$core$String** $tmp37 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp38 = *$tmp37;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$String* $tmp39 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local5) = $tmp38;
// <no location>
frost$core$String* $tmp40 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// <no location>
frost$collections$Map* $tmp41 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// <no location>
frost$core$String* $tmp42 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$String* $tmp43 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local5) = ((frost$core$String*) NULL);
frost$collections$Map* $tmp44 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local4) = ((frost$collections$Map*) NULL);
frost$core$String* $tmp45 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local3) = ((frost$core$String*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$CCodeGenerator$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$frost$core$String$frost$core$String(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0, frost$core$Int64 param1, frost$core$String* param2, frost$core$String* param3, frost$core$String* param4) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Int64* $tmp46 = &param0->$rawValue;
*$tmp46 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp47 = (frost$core$String**) (param0->$data + 0);
*$tmp47 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp48 = (frost$core$String**) (param0->$data + 8);
*$tmp48 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp49 = (frost$core$String**) (param0->$data + 16);
*$tmp49 = param4;
return;

}
void org$frostlang$frostc$CCodeGenerator$EnclosingContext$init$frost$core$Int64$frost$core$String$frost$collections$Map$LTfrost$core$String$Corg$frostlang$frostc$Pair$LTfrost$core$Int64$Cfrost$core$String$GT$GT$frost$core$String(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0, frost$core$Int64 param1, frost$core$String* param2, frost$collections$Map* param3, frost$core$String* param4) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Int64* $tmp50 = &param0->$rawValue;
*$tmp50 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp51 = (frost$core$String**) (param0->$data + 0);
*$tmp51 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$collections$Map** $tmp52 = (frost$collections$Map**) (param0->$data + 8);
*$tmp52 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp53 = (frost$core$String**) (param0->$data + 16);
*$tmp53 = param4;
return;

}

