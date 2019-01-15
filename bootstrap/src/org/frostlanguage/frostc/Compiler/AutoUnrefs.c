#include "org/frostlanguage/frostc/Compiler/AutoUnrefs.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/Compiler/EnclosingContext.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlanguage$frostc$Compiler$AutoUnrefs$class_type org$frostlanguage$frostc$Compiler$AutoUnrefs$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$Compiler$AutoUnrefs$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x55\x6e\x72\x65\x66\x73", 44, -6936029734209100217, NULL };

void org$frostlanguage$frostc$Compiler$AutoUnrefs$init$org$frostlanguage$frostc$Compiler(org$frostlanguage$frostc$Compiler$AutoUnrefs* param0, org$frostlanguage$frostc$Compiler* param1) {

// line 191
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlanguage$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlanguage$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 192
frost$collections$Stack** $tmp5 = &param1->enclosingContexts;
frost$collections$Stack* $tmp6 = *$tmp5;
frost$core$Int64 $tmp7 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp6);
frost$core$Int64* $tmp8 = &param0->depth;
*$tmp8 = $tmp7;
return;

}
void org$frostlanguage$frostc$Compiler$AutoUnrefs$cleanup(org$frostlanguage$frostc$Compiler$AutoUnrefs* param0) {

org$frostlanguage$frostc$Compiler$EnclosingContext* local0 = NULL;
org$frostlanguage$frostc$IR$Value* local1 = NULL;
// line 197
goto block1;
block1:;
org$frostlanguage$frostc$Compiler** $tmp9 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp10 = *$tmp9;
frost$collections$Stack** $tmp11 = &$tmp10->enclosingContexts;
frost$collections$Stack* $tmp12 = *$tmp11;
frost$core$Int64 $tmp13 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp12);
frost$core$Int64* $tmp14 = &param0->depth;
frost$core$Int64 $tmp15 = *$tmp14;
int64_t $tmp16 = $tmp13.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 > $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block2; else goto block3;
block2:;
// line 198
org$frostlanguage$frostc$Compiler** $tmp21 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp22 = *$tmp21;
frost$collections$Stack** $tmp23 = &$tmp22->enclosingContexts;
frost$collections$Stack* $tmp24 = *$tmp23;
frost$core$Int64 $tmp25 = (frost$core$Int64) {0};
frost$core$Object* $tmp26 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp24, $tmp25);
*(&local0) = ((org$frostlanguage$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Compiler$EnclosingContext*) $tmp26)));
org$frostlanguage$frostc$Compiler$EnclosingContext* $tmp27 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local0) = ((org$frostlanguage$frostc$Compiler$EnclosingContext*) $tmp26);
frost$core$Frost$unref$frost$core$Object$Q($tmp26);
// unreffing REF($23:frost.collections.Stack.T)
// line 199
org$frostlanguage$frostc$Compiler$EnclosingContext* $tmp28 = *(&local0);
frost$core$Int64* $tmp29 = &$tmp28->$rawValue;
frost$core$Int64 $tmp30 = *$tmp29;
frost$core$Int64 $tmp31 = (frost$core$Int64) {3};
frost$core$Bit $tmp32 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp30, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block5; else goto block6;
block5:;
org$frostlanguage$frostc$IR$Value** $tmp34 = (org$frostlanguage$frostc$IR$Value**) ($tmp28->$data + 0);
org$frostlanguage$frostc$IR$Value* $tmp35 = *$tmp34;
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
org$frostlanguage$frostc$IR$Value* $tmp36 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local1) = $tmp35;
// line 201
org$frostlanguage$frostc$Compiler** $tmp37 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp38 = *$tmp37;
org$frostlanguage$frostc$Compiler$EnclosingContext* $tmp39 = *(&local0);
org$frostlanguage$frostc$Compiler$leaveScope$org$frostlanguage$frostc$Compiler$EnclosingContext($tmp38, $tmp39);
// line 202
org$frostlanguage$frostc$Compiler** $tmp40 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp41 = *$tmp40;
frost$collections$Stack** $tmp42 = &$tmp41->enclosingContexts;
frost$collections$Stack* $tmp43 = *$tmp42;
frost$core$Object* $tmp44 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp43);
frost$core$Frost$unref$frost$core$Object$Q($tmp44);
// unreffing REF($63:frost.collections.Stack.T)
org$frostlanguage$frostc$IR$Value* $tmp45 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// unreffing v
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
goto block4;
block6:;
// line 205
org$frostlanguage$frostc$Compiler$EnclosingContext* $tmp46 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing scope
*(&local0) = ((org$frostlanguage$frostc$Compiler$EnclosingContext*) NULL);
goto block3;
block4:;
org$frostlanguage$frostc$Compiler$EnclosingContext* $tmp47 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing scope
*(&local0) = ((org$frostlanguage$frostc$Compiler$EnclosingContext*) NULL);
goto block1;
block3:;
// line 196
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlanguage$frostc$Compiler** $tmp48 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp49 = *$tmp48;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
return;

}

