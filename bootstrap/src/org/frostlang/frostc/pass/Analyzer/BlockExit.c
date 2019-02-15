#include "org/frostlang/frostc/pass/Analyzer/BlockExit.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Block/ID.h"

__attribute__((weak)) frost$core$Int64 org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int64(((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit(((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p0)->value, ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$pass$Analyzer$BlockExit$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$pass$Analyzer$BlockExit$cleanup(((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$pass$Analyzer$BlockExit$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$pass$Analyzer$BlockExit$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$BlockExit$_frost$collections$Key, { org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$BlockExit$class_type org$frostlang$frostc$pass$Analyzer$BlockExit$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$BlockExit$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit$shim, org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int64$shim, org$frostlang$frostc$pass$Analyzer$BlockExit$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper_frost$collections$Key, { org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass_type org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74", 44, -749128004734210960, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74", 44, -749128004734210960, NULL };

org$frostlang$frostc$pass$Analyzer$BlockExit org$frostlang$frostc$pass$Analyzer$BlockExit$init$org$frostlang$frostc$IR$Block$ID$frost$core$Int64(org$frostlang$frostc$IR$Block$ID param0, frost$core$Int64 param1) {

org$frostlang$frostc$pass$Analyzer$BlockExit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:80
org$frostlang$frostc$IR$Block$ID* $tmp3 = &(&local0)->id;
*$tmp3 = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
frost$core$Int64* $tmp4 = &(&local0)->exit;
*$tmp4 = param1;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Bit org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit(org$frostlang$frostc$pass$Analyzer$BlockExit param0, org$frostlang$frostc$pass$Analyzer$BlockExit param1) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:86
org$frostlang$frostc$IR$Block$ID $tmp6 = param0.id;
org$frostlang$frostc$IR$Block$ID $tmp7 = param1.id;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int64 $tmp8 = $tmp6.value;
frost$core$Int64 $tmp9 = $tmp7.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 == $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block3; else goto block4;
block3:;
frost$core$Int64 $tmp15 = param0.exit;
frost$core$Int64 $tmp16 = param1.exit;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:86:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp17 = $tmp15.value;
int64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 == $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
*(&local0) = $tmp20;
goto block5;
block4:;
*(&local0) = $tmp13;
goto block5;
block5:;
frost$core$Bit $tmp21 = *(&local0);
return $tmp21;

}
frost$core$Int64 org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int64(org$frostlang$frostc$pass$Analyzer$BlockExit param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:91
org$frostlang$frostc$IR$Block$ID $tmp22 = param0.id;
frost$core$Int64 $tmp23 = $tmp22.value;
frost$core$Int64 $tmp24 = param0.exit;
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from Analyzer.frost:91:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:143
int64_t $tmp25 = $tmp23.value;
int64_t $tmp26 = $tmp24.value;
int64_t $tmp27 = $tmp25 ^ $tmp26;
frost$core$Int64 $tmp28 = (frost$core$Int64) {$tmp27};
return $tmp28;

}
void org$frostlang$frostc$pass$Analyzer$BlockExit$cleanup(org$frostlang$frostc$pass$Analyzer$BlockExit param0) {

return;

}

