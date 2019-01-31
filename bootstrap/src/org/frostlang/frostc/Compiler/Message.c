#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/Position.h"
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
org$frostlang$frostc$Compiler$Message$class_type org$frostlang$frostc$Compiler$Message$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &org$frostlang$frostc$Compiler$Message$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$Message$cleanup$shim, org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x4d\x65\x73\x73\x61\x67\x65", 37, -2811805425445164874, NULL };

void org$frostlang$frostc$Compiler$Message$cleanup(org$frostlang$frostc$Compiler$Message* param0) {

frost$io$File* local0 = NULL;
org$frostlang$frostc$Position local1;
frost$core$String* local2 = NULL;
frost$io$File* local3 = NULL;
org$frostlang$frostc$Position local4;
frost$core$String* local5 = NULL;
// line 66
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
frost$io$File** $tmp7 = (frost$io$File**) (param0->$data + 0);
frost$io$File* $tmp8 = *$tmp7;
*(&local0) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$io$File* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
org$frostlang$frostc$Position* $tmp10 = (org$frostlang$frostc$Position*) (param0->$data + 8);
org$frostlang$frostc$Position $tmp11 = *$tmp10;
*(&local1) = $tmp11;
frost$core$String** $tmp12 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp13 = *$tmp12;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$String* $tmp14 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local2) = $tmp13;
// line 1
frost$io$File* $tmp15 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// line 1
frost$core$String* $tmp16 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$String* $tmp17 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local2) = ((frost$core$String*) NULL);
frost$io$File* $tmp18 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local0) = ((frost$io$File*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {1};
frost$core$Bit $tmp20 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block4; else goto block1;
block4:;
frost$io$File** $tmp22 = (frost$io$File**) (param0->$data + 0);
frost$io$File* $tmp23 = *$tmp22;
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$io$File* $tmp24 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local3) = $tmp23;
org$frostlang$frostc$Position* $tmp25 = (org$frostlang$frostc$Position*) (param0->$data + 8);
org$frostlang$frostc$Position $tmp26 = *$tmp25;
*(&local4) = $tmp26;
frost$core$String** $tmp27 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp28 = *$tmp27;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$String* $tmp29 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local5) = $tmp28;
// line 1
frost$io$File* $tmp30 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// line 1
frost$core$String* $tmp31 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$String* $tmp32 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp33 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local3) = ((frost$io$File*) NULL);
goto block1;
block1:;
// line 66
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
void org$frostlang$frostc$Compiler$Message$init$frost$core$Int64$frost$io$File$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Compiler$Message* param0, frost$core$Int64 param1, frost$io$File* param2, org$frostlang$frostc$Position param3, frost$core$String* param4) {

// line 66
frost$core$Int64* $tmp34 = &param0->$rawValue;
*$tmp34 = param1;
// line 66
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$io$File** $tmp35 = (frost$io$File**) (param0->$data + 0);
*$tmp35 = param2;
// line 66
org$frostlang$frostc$Position* $tmp36 = (org$frostlang$frostc$Position*) (param0->$data + 8);
*$tmp36 = param3;
// line 66
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp37 = (frost$core$String**) (param0->$data + 24);
*$tmp37 = param4;
return;

}
frost$core$Bit org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit(org$frostlang$frostc$Compiler$Message* param0, org$frostlang$frostc$Compiler$Message* param1) {

// line 66
frost$core$Int64* $tmp38 = &param0->$rawValue;
frost$core$Int64 $tmp39 = *$tmp38;
frost$core$Int64* $tmp40 = &param1->$rawValue;
frost$core$Int64 $tmp41 = *$tmp40;
int64_t $tmp42 = $tmp39.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 != $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block1; else goto block2;
block1:;
// line 66
frost$core$Bit $tmp47 = frost$core$Bit$init$builtin_bit(false);
return $tmp47;
block2:;
// line 66
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit(true);
return $tmp48;

}

