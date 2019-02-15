#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit$shim(org$frostlang$frostc$Compiler$Message* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit(p0, ((org$frostlang$frostc$Compiler$Message*) p1));

    return result;
}
__attribute__((weak)) void org$frostlang$frostc$Compiler$Message$cleanup$shim(org$frostlang$frostc$Compiler$Message* p0) {
    org$frostlang$frostc$Compiler$Message$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Compiler$Message$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Compiler$Message$class_type org$frostlang$frostc$Compiler$Message$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &org$frostlang$frostc$Compiler$Message$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$Message$cleanup$shim, org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x4d\x65\x73\x73\x61\x67\x65", 37, 1320719138988270736, NULL };

void org$frostlang$frostc$Compiler$Message$cleanup(org$frostlang$frostc$Compiler$Message* param0) {

frost$core$String* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$Int64 local5;
frost$core$Int64 local6;
frost$core$String* local7 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:70
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:70:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
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
frost$core$Int64* $tmp13 = (frost$core$Int64*) (param0->$data + 8);
frost$core$Int64 $tmp14 = *$tmp13;
*(&local1) = $tmp14;
frost$core$Int64* $tmp15 = (frost$core$Int64*) (param0->$data + 16);
frost$core$Int64 $tmp16 = *$tmp15;
*(&local2) = $tmp16;
frost$core$String** $tmp17 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp18 = *$tmp17;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$String* $tmp19 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local3) = $tmp18;
// <no location>
frost$core$String* $tmp20 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// <no location>
frost$core$String* $tmp21 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$String* $tmp22 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp23 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp24 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:70:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp25 = $tmp3.value;
int64_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 == $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block5; else goto block1;
block5:;
frost$core$String** $tmp30 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp31 = *$tmp30;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$String* $tmp32 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local4) = $tmp31;
frost$core$Int64* $tmp33 = (frost$core$Int64*) (param0->$data + 8);
frost$core$Int64 $tmp34 = *$tmp33;
*(&local5) = $tmp34;
frost$core$Int64* $tmp35 = (frost$core$Int64*) (param0->$data + 16);
frost$core$Int64 $tmp36 = *$tmp35;
*(&local6) = $tmp36;
frost$core$String** $tmp37 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp38 = *$tmp37;
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$String* $tmp39 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local7) = $tmp38;
// <no location>
frost$core$String* $tmp40 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// <no location>
frost$core$String* $tmp41 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$String* $tmp42 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp43 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:70
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
void org$frostlang$frostc$Compiler$Message$init$frost$core$Int64$frost$core$String$frost$core$Int64$frost$core$Int64$frost$core$String(org$frostlang$frostc$Compiler$Message* param0, frost$core$Int64 param1, frost$core$String* param2, frost$core$Int64 param3, frost$core$Int64 param4, frost$core$String* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:70
frost$core$Int64* $tmp44 = &param0->$rawValue;
*$tmp44 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:70
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp45 = (frost$core$String**) (param0->$data + 0);
*$tmp45 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:70
frost$core$Int64* $tmp46 = (frost$core$Int64*) (param0->$data + 8);
*$tmp46 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:70
frost$core$Int64* $tmp47 = (frost$core$Int64*) (param0->$data + 16);
*$tmp47 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:70
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
frost$core$String** $tmp48 = (frost$core$String**) (param0->$data + 24);
*$tmp48 = param5;
return;

}
frost$core$Bit org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit(org$frostlang$frostc$Compiler$Message* param0, org$frostlang$frostc$Compiler$Message* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:70
frost$core$Int64* $tmp49 = &param0->$rawValue;
frost$core$Int64 $tmp50 = *$tmp49;
frost$core$Int64* $tmp51 = &param1->$rawValue;
frost$core$Int64 $tmp52 = *$tmp51;
int64_t $tmp53 = $tmp50.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 != $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:70
frost$core$Bit $tmp58 = (frost$core$Bit) {false};
return $tmp58;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:70
frost$core$Bit $tmp59 = (frost$core$Bit) {true};
return $tmp59;

}

