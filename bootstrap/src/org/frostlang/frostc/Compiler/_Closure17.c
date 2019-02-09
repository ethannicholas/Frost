#include "org/frostlang/frostc/Compiler/_Closure17.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Position.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$_Closure17$class_type org$frostlang$frostc$Compiler$_Closure17$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$_Closure17$cleanup, org$frostlang$frostc$Compiler$_Closure17$$anonymous16$frost$core$Int64$frost$core$String} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x37", 40, 745567289659194785, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x69\x65\x6c\x64\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x65\x64\x20\x77\x69\x74\x68\x20\x27", 34, 8962271070026622968, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };

void org$frostlang$frostc$Compiler$_Closure17$init$org$frostlang$frostc$FieldDecl$org$frostlang$frostc$Compiler(org$frostlang$frostc$Compiler$_Closure17* param0, org$frostlang$frostc$FieldDecl* param1, org$frostlang$frostc$Compiler* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5908
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$FieldDecl** $tmp2 = &param0->f;
org$frostlang$frostc$FieldDecl* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$FieldDecl** $tmp4 = &param0->f;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5908
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Compiler** $tmp5 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$Compiler** $tmp7 = &param0->$self;
*$tmp7 = param2;
return;

}
void org$frostlang$frostc$Compiler$_Closure17$cleanup(org$frostlang$frostc$Compiler$_Closure17* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5908
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$FieldDecl** $tmp8 = &param0->f;
org$frostlang$frostc$FieldDecl* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$frostc$Compiler** $tmp10 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
return;

}
void org$frostlang$frostc$Compiler$_Closure17$$anonymous16$frost$core$Int64$frost$core$String(org$frostlang$frostc$Compiler$_Closure17* param0, frost$core$Int64 param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5909
org$frostlang$frostc$FieldDecl** $tmp12 = &param0->f;
org$frostlang$frostc$FieldDecl* $tmp13 = *$tmp12;
org$frostlang$frostc$Annotations** $tmp14 = &$tmp13->annotations;
org$frostlang$frostc$Annotations* $tmp15 = *$tmp14;
frost$core$Int64* $tmp16 = &$tmp15->flags;
frost$core$Int64 $tmp17 = *$tmp16;
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Compiler.frost:5909:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp18 = $tmp17.value;
int64_t $tmp19 = param1.value;
int64_t $tmp20 = $tmp18 & $tmp19;
frost$core$Int64 $tmp21 = frost$core$Int64$init$builtin_int64($tmp20);
frost$core$Int64 $tmp22 = (frost$core$Int64) {0};
int64_t $tmp23 = $tmp21.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 != $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5910
org$frostlang$frostc$Compiler** $tmp28 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp29 = *$tmp28;
org$frostlang$frostc$FieldDecl** $tmp30 = &param0->f;
org$frostlang$frostc$FieldDecl* $tmp31 = *$tmp30;
org$frostlang$frostc$Position* $tmp32 = &((org$frostlang$frostc$Symbol*) $tmp31)->position;
org$frostlang$frostc$Position $tmp33 = *$tmp32;
frost$core$String* $tmp34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s35, param2);
frost$core$String* $tmp36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp34, &$s37);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp29, $tmp33, $tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
goto block2;
block2:;
return;

}

