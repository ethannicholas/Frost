#include "org/frostlanguage/frostc/FieldDecl/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit org$frostlanguage$frostc$FieldDecl$Kind$$EQ$org$frostlanguage$frostc$FieldDecl$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlanguage$frostc$FieldDecl$Kind$$EQ$org$frostlanguage$frostc$FieldDecl$Kind$R$frost$core$Bit(((org$frostlanguage$frostc$FieldDecl$Kind$wrapper*) p0)->value, ((org$frostlanguage$frostc$FieldDecl$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlanguage$frostc$FieldDecl$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlanguage$frostc$FieldDecl$Kind$cleanup(((org$frostlanguage$frostc$FieldDecl$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlanguage$frostc$FieldDecl$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlanguage$frostc$FieldDecl$Kind$$EQ$org$frostlanguage$frostc$FieldDecl$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlanguage$frostc$FieldDecl$Kind$class_type org$frostlanguage$frostc$FieldDecl$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlanguage$frostc$FieldDecl$Kind$_frost$core$Equatable, { frost$core$Object$convert$R$frost$core$String, frost$core$Value$cleanup$shim, org$frostlanguage$frostc$FieldDecl$Kind$cleanup$shim, org$frostlanguage$frostc$FieldDecl$Kind$$EQ$org$frostlanguage$frostc$FieldDecl$Kind$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlanguage$frostc$FieldDecl$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlanguage$frostc$FieldDecl$Kind$$EQ$org$frostlanguage$frostc$FieldDecl$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlanguage$frostc$FieldDecl$Kind$wrapperclass_type org$frostlanguage$frostc$FieldDecl$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlanguage$frostc$FieldDecl$Kind$wrapper_frost$core$Equatable, { frost$core$Object$convert$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64", 39, -493052518495353110, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64", 39, -493052518495353110, NULL };

void org$frostlanguage$frostc$FieldDecl$Kind$cleanup(org$frostlanguage$frostc$FieldDecl$Kind param0) {

// line 5
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
frost$core$Bit $tmp8 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp10 = (frost$core$Int64) {2};
frost$core$Bit $tmp11 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp10);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block6; else goto block7;
block6:;
goto block1;
block7:;
frost$core$Int64 $tmp13 = (frost$core$Int64) {3};
frost$core$Bit $tmp14 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block8; else goto block1;
block8:;
goto block1;
block1:;
return;

}
org$frostlanguage$frostc$FieldDecl$Kind org$frostlanguage$frostc$FieldDecl$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlanguage$frostc$FieldDecl$Kind local0;
// line 5
frost$core$Int64* $tmp16 = &(&local0)->$rawValue;
*$tmp16 = param0;
org$frostlanguage$frostc$FieldDecl$Kind $tmp17 = *(&local0);
return $tmp17;

}
frost$core$Bit org$frostlanguage$frostc$FieldDecl$Kind$$EQ$org$frostlanguage$frostc$FieldDecl$Kind$R$frost$core$Bit(org$frostlanguage$frostc$FieldDecl$Kind param0, org$frostlanguage$frostc$FieldDecl$Kind param1) {

// line 5
frost$core$Int64 $tmp18 = param0.$rawValue;
frost$core$Int64 $tmp19 = param1.$rawValue;
int64_t $tmp20 = $tmp18.value;
int64_t $tmp21 = $tmp19.value;
bool $tmp22 = $tmp20 != $tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {$tmp22};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block1; else goto block2;
block1:;
// line 5
frost$core$Bit $tmp25 = frost$core$Bit$init$builtin_bit(false);
return $tmp25;
block2:;
// line 5
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit(true);
return $tmp26;

}






