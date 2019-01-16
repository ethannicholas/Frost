#include "org/frostlang/frostc/CCodeGenerator/AutoContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
#include "org/frostlang/frostc/CCodeGenerator/EnclosingContext.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$CCodeGenerator$AutoContext$class_type org$frostlang$frostc$CCodeGenerator$AutoContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$AutoContext$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x41\x75\x74\x6f\x43\x6f\x6e\x74\x65\x78\x74", 47, -1804979884243687315, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };

void org$frostlang$frostc$CCodeGenerator$AutoContext$init$org$frostlang$frostc$CCodeGenerator$org$frostlang$frostc$CCodeGenerator$EnclosingContext(org$frostlang$frostc$CCodeGenerator$AutoContext* param0, org$frostlang$frostc$CCodeGenerator* param1, org$frostlang$frostc$CCodeGenerator$EnclosingContext* param2) {

// line 25
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$CCodeGenerator** $tmp2 = &param0->cg;
org$frostlang$frostc$CCodeGenerator* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$CCodeGenerator** $tmp4 = &param0->cg;
*$tmp4 = param1;
// line 26
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$CCodeGenerator$EnclosingContext** $tmp5 = &param0->context;
org$frostlang$frostc$CCodeGenerator$EnclosingContext* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$CCodeGenerator$EnclosingContext** $tmp7 = &param0->context;
*$tmp7 = param2;
// line 27
frost$collections$Stack** $tmp8 = &param1->enclosingContexts;
frost$collections$Stack* $tmp9 = *$tmp8;
frost$collections$Stack$push$frost$collections$Stack$T($tmp9, ((frost$core$Object*) param2));
return;

}
void org$frostlang$frostc$CCodeGenerator$AutoContext$cleanup(org$frostlang$frostc$CCodeGenerator$AutoContext* param0) {

// line 32
org$frostlang$frostc$CCodeGenerator** $tmp10 = &param0->cg;
org$frostlang$frostc$CCodeGenerator* $tmp11 = *$tmp10;
frost$collections$Stack** $tmp12 = &$tmp11->enclosingContexts;
frost$collections$Stack* $tmp13 = *$tmp12;
frost$core$Int64 $tmp14 = (frost$core$Int64) {0};
frost$core$Object* $tmp15 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp13, $tmp14);
org$frostlang$frostc$CCodeGenerator$EnclosingContext** $tmp16 = &param0->context;
org$frostlang$frostc$CCodeGenerator$EnclosingContext* $tmp17 = *$tmp16;
bool $tmp18 = ((org$frostlang$frostc$CCodeGenerator$EnclosingContext*) $tmp15) == $tmp17;
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit($tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {32};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s22, $tmp21);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q($tmp15);
// unreffing REF($7:frost.collections.Stack.T)
// line 33
org$frostlang$frostc$CCodeGenerator** $tmp23 = &param0->cg;
org$frostlang$frostc$CCodeGenerator* $tmp24 = *$tmp23;
frost$collections$Stack** $tmp25 = &$tmp24->enclosingContexts;
frost$collections$Stack* $tmp26 = *$tmp25;
frost$core$Object* $tmp27 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp26);
frost$core$Frost$unref$frost$core$Object$Q($tmp27);
// unreffing REF($27:frost.collections.Stack.T)
// line 31
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$CCodeGenerator** $tmp28 = &param0->cg;
org$frostlang$frostc$CCodeGenerator* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlang$frostc$CCodeGenerator$EnclosingContext** $tmp30 = &param0->context;
org$frostlang$frostc$CCodeGenerator$EnclosingContext* $tmp31 = *$tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
return;

}

