#include "org/frostlang/frostc/Compiler/Capture.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$Capture$class_type org$frostlang$frostc$Compiler$Capture$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$Capture$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x43\x61\x70\x74\x75\x72\x65", 37, -2811816082998018659, NULL };

void org$frostlang$frostc$Compiler$Capture$cleanup(org$frostlang$frostc$Compiler$Capture* param0) {

org$frostlang$frostc$Variable* local0 = NULL;
org$frostlang$frostc$FieldDecl* local1 = NULL;
// line 302
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Variable** $tmp7 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp8 = *$tmp7;
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
org$frostlang$frostc$Variable* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
// line 1
org$frostlang$frostc$Variable* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$Variable* $tmp11 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp12 = (frost$core$Int64) {1};
frost$core$Bit $tmp13 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp12);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block5;
block4:;
org$frostlang$frostc$FieldDecl** $tmp15 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp16 = *$tmp15;
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
org$frostlang$frostc$FieldDecl* $tmp17 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local1) = $tmp16;
// line 1
org$frostlang$frostc$FieldDecl* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
org$frostlang$frostc$FieldDecl* $tmp19 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {2};
frost$core$Bit $tmp21 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block6; else goto block1;
block6:;
goto block1;
block1:;
// line 302
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int64$org$frostlang$frostc$Variable(org$frostlang$frostc$Compiler$Capture* param0, frost$core$Int64 param1, org$frostlang$frostc$Variable* param2) {

// line 302
frost$core$Int64* $tmp23 = &param0->$rawValue;
*$tmp23 = param1;
// line 302
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Variable** $tmp24 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*$tmp24 = param2;
return;

}
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int64$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$Compiler$Capture* param0, frost$core$Int64 param1, org$frostlang$frostc$FieldDecl* param2) {

// line 302
frost$core$Int64* $tmp25 = &param0->$rawValue;
*$tmp25 = param1;
// line 302
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FieldDecl** $tmp26 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 0);
*$tmp26 = param2;
return;

}
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int64(org$frostlang$frostc$Compiler$Capture* param0, frost$core$Int64 param1) {

// line 302
frost$core$Int64* $tmp27 = &param0->$rawValue;
*$tmp27 = param1;
return;

}

