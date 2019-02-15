#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Int64.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$ChoiceCase$class_type org$frostlang$frostc$ChoiceCase$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$ChoiceCase$get_asString$R$frost$core$String, org$frostlang$frostc$ChoiceCase$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65", 31, -1681702743889979521, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$ChoiceCase* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, frost$core$String* param4, frost$core$Int64 param5, frost$collections$ListView* param6) {

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:15
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp2 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp2, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Weak** $tmp3 = &param0->initMethod;
frost$core$Weak* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$Weak** $tmp5 = &param0->initMethod;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:17
frost$core$Int64 $tmp6 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int64):org.frostlang.frostc.Compiler.Resolution from ChoiceCase.frost:17:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int64* $tmp7 = &(&local1)->$rawValue;
*$tmp7 = $tmp6;
org$frostlang$frostc$Compiler$Resolution $tmp8 = *(&local1);
*(&local0) = $tmp8;
org$frostlang$frostc$Compiler$Resolution $tmp9 = *(&local0);
org$frostlang$frostc$Compiler$Resolution* $tmp10 = &param0->resolved;
*$tmp10 = $tmp9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:21
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp11 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp11, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$Weak** $tmp12 = &param0->owner;
frost$core$Weak* $tmp13 = *$tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Weak** $tmp14 = &param0->owner;
*$tmp14 = $tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp15 = &param0->doccomment;
frost$core$String* $tmp16 = *$tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$String** $tmp17 = &param0->doccomment;
*$tmp17 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:23
frost$core$Int64* $tmp18 = &param0->rawValue;
*$tmp18 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:24
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp19 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp19, ((frost$collections$CollectionView*) param6));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$collections$Array** $tmp20 = &param0->fields;
frost$collections$Array* $tmp21 = *$tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$collections$Array** $tmp22 = &param0->fields;
*$tmp22 = $tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:25
frost$core$Int64 $tmp23 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from ChoiceCase.frost:25:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp24 = &(&local3)->$rawValue;
*$tmp24 = $tmp23;
org$frostlang$frostc$Symbol$Kind $tmp25 = *(&local3);
*(&local2) = $tmp25;
org$frostlang$frostc$Symbol$Kind $tmp26 = *(&local2);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp26, param2, param3);
return;

}
frost$core$String* org$frostlang$frostc$ChoiceCase$get_asString$R$frost$core$String(org$frostlang$frostc$ChoiceCase* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:30
frost$core$Weak** $tmp27 = &param0->owner;
frost$core$Weak* $tmp28 = *$tmp27;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ChoiceCase.frost:30:19
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp29 = &$tmp28->_valid;
frost$core$Bit $tmp30 = *$tmp29;
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp32 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s33, $tmp32);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp34 = &$tmp28->value;
frost$core$Object* $tmp35 = *$tmp34;
frost$core$Frost$ref$frost$core$Object$Q($tmp35);
frost$core$String** $tmp36 = &((org$frostlang$frostc$ClassDecl*) $tmp35)->name;
frost$core$String* $tmp37 = *$tmp36;
// begin inline call to function frost.core.String.get_asString():frost.core.String from ChoiceCase.frost:30:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$String* $tmp38 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp37, &$s39);
frost$core$String** $tmp40 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp41 = *$tmp40;
frost$core$String* $tmp42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp38, $tmp41);
frost$core$String* $tmp43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp42, &$s44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q($tmp35);
return $tmp43;

}
void org$frostlang$frostc$ChoiceCase$cleanup(org$frostlang$frostc$ChoiceCase* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
frost$core$Weak** $tmp45 = &param0->owner;
frost$core$Weak* $tmp46 = *$tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$String** $tmp47 = &param0->doccomment;
frost$core$String* $tmp48 = *$tmp47;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$collections$Array** $tmp49 = &param0->fields;
frost$collections$Array* $tmp50 = *$tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Weak** $tmp51 = &param0->initMethod;
frost$core$Weak* $tmp52 = *$tmp51;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
return;

}






