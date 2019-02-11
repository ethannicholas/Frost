#include "org/frostlang/frostc/expression/Binary/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Int64.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Binary$_Closure2$class_type org$frostlang$frostc$expression$Binary$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Binary$_Closure2$cleanup, org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn33)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 48, -2123360279309463525, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };

void org$frostlang$frostc$expression$Binary$_Closure2$init$org$frostlang$frostc$Type(org$frostlang$frostc$expression$Binary$_Closure2* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:215
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Type** $tmp2 = &param0->left;
org$frostlang$frostc$Type* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Type** $tmp4 = &param0->left;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$expression$Binary$_Closure2$cleanup(org$frostlang$frostc$expression$Binary$_Closure2* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:215
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp5 = &param0->left;
org$frostlang$frostc$Type* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Bit org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$expression$Binary$_Closure2* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:215
org$frostlang$frostc$Annotations** $tmp7 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp8 = *$tmp7;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:215:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp9 = &$tmp8->flags;
frost$core$Int64 $tmp10 = *$tmp9;
frost$core$Int64 $tmp11 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp12 = $tmp10.value;
int64_t $tmp13 = $tmp11.value;
int64_t $tmp14 = $tmp12 & $tmp13;
frost$core$Int64 $tmp15 = frost$core$Int64$init$builtin_int64($tmp14);
frost$core$Int64 $tmp16 = (frost$core$Int64) {0};
int64_t $tmp17 = $tmp15.value;
int64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 != $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
org$frostlang$frostc$Type** $tmp21 = &param0->left;
org$frostlang$frostc$Type* $tmp22 = *$tmp21;
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from Binary.frost:215:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:370
org$frostlang$frostc$Type$Kind* $tmp23 = &$tmp22->typeKind;
org$frostlang$frostc$Type$Kind $tmp24 = *$tmp23;
org$frostlang$frostc$Type$Kind$wrapper* $tmp25;
$tmp25 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp25->value = $tmp24;
frost$core$Int64 $tmp26 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:370:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp27 = &(&local2)->$rawValue;
*$tmp27 = $tmp26;
org$frostlang$frostc$Type$Kind $tmp28 = *(&local2);
*(&local1) = $tmp28;
org$frostlang$frostc$Type$Kind $tmp29 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp30;
$tmp30 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp30->value = $tmp29;
ITable* $tmp31 = ((frost$core$Equatable*) $tmp25)->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[0];
frost$core$Bit $tmp34 = $tmp32(((frost$core$Equatable*) $tmp25), ((frost$core$Equatable*) $tmp30));
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block5; else goto block6;
block5:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:370:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp36 = &$tmp22->_subtypes;
org$frostlang$frostc$FixedArray* $tmp37 = *$tmp36;
frost$core$Bit $tmp38 = frost$core$Bit$init$builtin_bit($tmp37 != NULL);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s41, $tmp40);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp42 = &$tmp22->_subtypes;
org$frostlang$frostc$FixedArray* $tmp43 = *$tmp42;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Int64 $tmp44 = (frost$core$Int64) {0};
frost$core$Object* $tmp45 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp43, $tmp44);
frost$core$String** $tmp46 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp45))->name;
frost$core$String* $tmp47 = *$tmp46;
frost$core$Bit $tmp48 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp47, &$s49);
frost$core$Frost$unref$frost$core$Object$Q($tmp45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local0) = $tmp48;
goto block7;
block6:;
*(&local0) = $tmp34;
goto block7;
block7:;
frost$core$Bit $tmp50 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp30)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp25)));
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Binary.frost:215:64
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:20
bool $tmp51 = $tmp20.value;
bool $tmp52 = $tmp50.value;
bool $tmp53 = $tmp51 == $tmp52;
frost$core$Bit $tmp54 = frost$core$Bit$init$builtin_bit($tmp53);
return $tmp54;

}






