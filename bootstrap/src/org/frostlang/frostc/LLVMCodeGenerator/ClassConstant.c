#include "org/frostlang/frostc/LLVMCodeGenerator/ClassConstant.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"

__attribute__((weak)) void org$frostlang$frostc$LLVMCodeGenerator$ClassConstant$cleanup$shim(org$frostlang$frostc$LLVMCodeGenerator$ClassConstant* p0) {
    org$frostlang$frostc$LLVMCodeGenerator$ClassConstant$cleanup(p0);

}

static frost$core$String $s1;
org$frostlang$frostc$LLVMCodeGenerator$ClassConstant$class_type org$frostlang$frostc$LLVMCodeGenerator$ClassConstant$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$LLVMCodeGenerator$ClassConstant$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x43\x6c\x61\x73\x73\x43\x6f\x6e\x73\x74\x61\x6e\x74", 52, -8829608679770606333, NULL };

void org$frostlang$frostc$LLVMCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator$ClassConstant* param0, frost$core$String* param1, frost$core$String* param2) {

// line 15
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->name;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->name;
*$tmp4 = param1;
// line 16
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp5 = &param0->type;
frost$core$String* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$String** $tmp7 = &param0->type;
*$tmp7 = param2;
return;

}
void org$frostlang$frostc$LLVMCodeGenerator$ClassConstant$cleanup(org$frostlang$frostc$LLVMCodeGenerator$ClassConstant* param0) {

// line 10
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp8 = &param0->name;
frost$core$String* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$String** $tmp10 = &param0->type;
frost$core$String* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
return;

}

