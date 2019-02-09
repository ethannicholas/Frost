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
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Binary$_Closure2$class_type org$frostlang$frostc$expression$Binary$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Binary$_Closure2$cleanup, org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn33)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn66)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 48, -2123360279309463525, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };

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
frost$core$Bit local3;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:599
org$frostlang$frostc$Type$Kind* $tmp23 = &$tmp22->typeKind;
org$frostlang$frostc$Type$Kind $tmp24 = *$tmp23;
org$frostlang$frostc$Type$Kind$wrapper* $tmp25;
$tmp25 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp25->value = $tmp24;
frost$core$Int64 $tmp26 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:599:31
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
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:599:42
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
// begin inline call to method org.frostlang.frostc.Type.Class():org.frostlang.frostc.Type from Type.frost:599:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:280
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp46 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp47 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp48 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp47);
org$frostlang$frostc$Position $tmp49 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp46, &$s51, $tmp48, $tmp49, $tmp50);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:599:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp52 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp45))->name;
frost$core$String* $tmp53 = *$tmp52;
frost$core$String** $tmp54 = &((org$frostlang$frostc$Symbol*) $tmp46)->name;
frost$core$String* $tmp55 = *$tmp54;
frost$core$Bit $tmp56 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp53, $tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Type$Kind* $tmp58 = &((org$frostlang$frostc$Type*) $tmp45)->typeKind;
org$frostlang$frostc$Type$Kind $tmp59 = *$tmp58;
org$frostlang$frostc$Type$Kind$wrapper* $tmp60;
$tmp60 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp60->value = $tmp59;
org$frostlang$frostc$Type$Kind* $tmp61 = &$tmp46->typeKind;
org$frostlang$frostc$Type$Kind $tmp62 = *$tmp61;
org$frostlang$frostc$Type$Kind$wrapper* $tmp63;
$tmp63 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp63->value = $tmp62;
ITable* $tmp64 = ((frost$core$Equatable*) $tmp60)->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[0];
frost$core$Bit $tmp67 = $tmp65(((frost$core$Equatable*) $tmp60), ((frost$core$Equatable*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp63)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp60)));
*(&local3) = $tmp67;
goto block15;
block14:;
*(&local3) = $tmp56;
goto block15;
block15:;
frost$core$Bit $tmp68 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q($tmp45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local0) = $tmp68;
goto block7;
block6:;
*(&local0) = $tmp34;
goto block7;
block7:;
frost$core$Bit $tmp69 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp30)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp25)));
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Binary.frost:215:64
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:20
bool $tmp70 = $tmp20.value;
bool $tmp71 = $tmp69.value;
bool $tmp72 = $tmp70 == $tmp71;
frost$core$Bit $tmp73 = frost$core$Bit$init$builtin_bit($tmp72);
return $tmp73;

}






