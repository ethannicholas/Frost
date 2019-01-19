#include "org/frostlang/frostc/frostdoc/Markdown/_Closure28.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/Error.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Bit.h"
#include "frost/io/Console.h"
#include "frost/io/OutputStream.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure28$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure28$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure28$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn51)(frost$core$String*);
typedef frost$core$String* (*$fn53)(frost$core$Object*, frost$core$String*);
typedef frost$core$Error* (*$fn72)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn99)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn117)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn149)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn166)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x38", 49, -5097778637230146631, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 105, 6769452873461677935, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3a\x20\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x72\x65\x73\x6f\x6c\x76\x65\x20\x6c\x69\x6e\x6b\x20\x27", 31, 6850877155588619032, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x65\x72\x72\x6f\x72\x29", 7, 150747842869236, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x5d", 18, -5787080662771743994, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 982
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure28$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0) {

// line 982
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$Error* local5 = NULL;
frost$core$MutableString* local6 = NULL;
// line 983
frost$core$Int64 $tmp7 = (frost$core$Int64) {2};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp11)));
frost$core$String* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = ((frost$core$String*) $tmp11);
frost$core$Frost$unref$frost$core$Object$Q($tmp11);
// unreffing REF($4:frost.collections.ListView.T)
// line 984
frost$core$Int64 $tmp13 = (frost$core$Int64) {3};
ITable* $tmp14 = param1->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
frost$core$Object* $tmp17 = $tmp15(param1, $tmp13);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp17)));
frost$core$String* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local1) = ((frost$core$String*) $tmp17);
frost$core$Frost$unref$frost$core$Object$Q($tmp17);
// unreffing REF($20:frost.collections.ListView.T)
// line 985
frost$core$Int64 $tmp19 = (frost$core$Int64) {6};
ITable* $tmp20 = param1->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Object* $tmp23 = $tmp21(param1, $tmp19);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp23)));
frost$core$String* $tmp24 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local2) = ((frost$core$String*) $tmp23);
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
// unreffing REF($36:frost.collections.ListView.T)
// line 987
org$frostlang$frostc$frostdoc$Markdown** $tmp25 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp26 = *$tmp25;
frost$core$MutableMethod** $tmp27 = &$tmp26->linkResolver;
frost$core$MutableMethod* $tmp28 = *$tmp27;
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit($tmp28 != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block1; else goto block3;
block1:;
// line 988
org$frostlang$frostc$frostdoc$Markdown** $tmp31 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp32 = *$tmp31;
frost$core$MutableMethod** $tmp33 = &$tmp32->linkResolver;
frost$core$MutableMethod* $tmp34 = *$tmp33;
frost$core$String* $tmp35 = *(&local1);
frost$core$Bit $tmp36 = frost$core$Bit$init$builtin_bit($tmp35 != NULL);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp38 = (frost$core$Int64) {988};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s39, $tmp38, &$s40);
abort(); // unreachable
block4:;
frost$core$Bit $tmp41 = frost$core$Bit$init$builtin_bit($tmp34 != NULL);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {1};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s44, $tmp43, &$s45);
abort(); // unreachable
block6:;
frost$core$Int8** $tmp46 = &$tmp34->pointer;
frost$core$Int8* $tmp47 = *$tmp46;
frost$core$Object** $tmp48 = &$tmp34->target;
frost$core$Object* $tmp49 = *$tmp48;
bool $tmp50 = $tmp49 != ((frost$core$Object*) NULL);
if ($tmp50) goto block8; else goto block9;
block9:;
frost$core$String* $tmp52 = (($fn51) $tmp47)($tmp35);
*(&local3) = $tmp52;
goto block10;
block8:;
frost$core$String* $tmp54 = (($fn53) $tmp47)($tmp49, $tmp35);
*(&local3) = $tmp54;
goto block10;
block10:;
frost$core$String* $tmp55 = *(&local3);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$String* $tmp56 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local4) = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing REF($93:frost.core.String?)
// line 989
frost$core$String* $tmp57 = *(&local4);
frost$core$Bit $tmp58 = frost$core$Bit$init$builtin_bit($tmp57 == NULL);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block11; else goto block12;
block11:;
// line 990
*(&local5) = ((frost$core$Error*) NULL);
// line 991
frost$io$OutputStream* $tmp60 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp61 = *(&local1);
frost$core$Bit $tmp62 = frost$core$Bit$init$builtin_bit($tmp61 != NULL);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp64 = (frost$core$Int64) {991};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s65, $tmp64, &$s66);
abort(); // unreachable
block15:;
frost$core$String* $tmp67 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s68, $tmp61);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp67, &$s70);
$fn72 $tmp71 = ($fn72) $tmp60->$class->vtable[19];
frost$core$Error* $tmp73 = $tmp71($tmp60, $tmp69);
// try error check
if ($tmp73 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local5) = $tmp73;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing REF($126:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($124:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($123:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing REF($113:frost.io.OutputStream)
goto block13;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing REF($126:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($124:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($123:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing REF($113:frost.io.OutputStream)
goto block14;
block13:;
// line 994
frost$core$Bit $tmp74 = frost$core$Bit$init$builtin_bit(false);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {994};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s77, $tmp76);
abort(); // unreachable
block19:;
goto block14;
block14:;
frost$core$Error* $tmp78 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing error
*(&local5) = ((frost$core$Error*) NULL);
// line 996
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s79));
frost$core$String* $tmp80 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local4) = &$s79;
goto block12;
block12:;
// line 998
frost$core$String* $tmp81 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$String* $tmp82 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local1) = $tmp81;
frost$core$String* $tmp83 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing newURL
*(&local4) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 1001
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s84));
frost$core$String* $tmp85 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local1) = &$s84;
goto block2;
block2:;
// line 1003
frost$core$String* $tmp86 = *(&local1);
frost$core$Bit $tmp87 = frost$core$Bit$init$builtin_bit($tmp86 != NULL);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp89 = (frost$core$Int64) {1003};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s90, $tmp89, &$s91);
abort(); // unreachable
block21:;
frost$core$RegularExpression* $tmp92 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp92, &$s93);
org$frostlang$frostc$frostdoc$Markdown** $tmp94 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp95 = *$tmp94;
org$frostlang$frostc$frostdoc$Protector** $tmp96 = &$tmp95->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp97 = *$tmp96;
$fn99 $tmp98 = ($fn99) $tmp97->$class->vtable[2];
frost$core$String* $tmp100 = $tmp98($tmp97, &$s101);
frost$core$String* $tmp102 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp86, $tmp92, $tmp100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$String* $tmp103 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local1) = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($223:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing REF($222:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing REF($215:frost.core.RegularExpression)
// line 1004
frost$core$String* $tmp104 = *(&local1);
frost$core$Bit $tmp105 = frost$core$Bit$init$builtin_bit($tmp104 != NULL);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp107 = (frost$core$Int64) {1004};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s108, $tmp107, &$s109);
abort(); // unreachable
block23:;
frost$core$RegularExpression* $tmp110 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp110, &$s111);
org$frostlang$frostc$frostdoc$Markdown** $tmp112 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp113 = *$tmp112;
org$frostlang$frostc$frostdoc$Protector** $tmp114 = &$tmp113->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp115 = *$tmp114;
$fn117 $tmp116 = ($fn117) $tmp115->$class->vtable[2];
frost$core$String* $tmp118 = $tmp116($tmp115, &$s119);
frost$core$String* $tmp120 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp104, $tmp110, $tmp118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$String* $tmp121 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local1) = $tmp120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($258:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing REF($257:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($250:frost.core.RegularExpression)
// line 1005
frost$core$MutableString* $tmp122 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp122);
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$MutableString* $tmp123 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local6) = $tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing REF($276:frost.core.MutableString)
// line 1006
frost$core$MutableString* $tmp124 = *(&local6);
frost$core$String* $tmp125 = *(&local1);
frost$core$Bit $tmp126 = frost$core$Bit$init$builtin_bit($tmp125 != NULL);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp128 = (frost$core$Int64) {1006};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s129, $tmp128, &$s130);
abort(); // unreachable
block25:;
frost$core$String* $tmp131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s132, $tmp125);
frost$core$String* $tmp133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp131, &$s134);
frost$core$MutableString$append$frost$core$String($tmp124, $tmp133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// unreffing REF($300:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($299:frost.core.String)
// line 1007
frost$core$String* $tmp135 = *(&local2);
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit($tmp135 != NULL);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block27; else goto block28;
block27:;
// line 1009
frost$core$String* $tmp138 = *(&local2);
frost$core$Bit $tmp139 = frost$core$Bit$init$builtin_bit($tmp138 != NULL);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp141 = (frost$core$Int64) {1009};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s142, $tmp141, &$s143);
abort(); // unreachable
block29:;
org$frostlang$frostc$frostdoc$Markdown** $tmp144 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp145 = *$tmp144;
org$frostlang$frostc$frostdoc$Protector** $tmp146 = &$tmp145->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp147 = *$tmp146;
$fn149 $tmp148 = ($fn149) $tmp147->$class->vtable[2];
frost$core$String* $tmp150 = $tmp148($tmp147, &$s151);
frost$core$String* $tmp152 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp138, &$s153, $tmp150);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$String* $tmp154 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local2) = $tmp152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing REF($330:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing REF($329:frost.core.String)
// line 1010
frost$core$String* $tmp155 = *(&local2);
frost$core$Bit $tmp156 = frost$core$Bit$init$builtin_bit($tmp155 != NULL);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp158 = (frost$core$Int64) {1010};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s159, $tmp158, &$s160);
abort(); // unreachable
block31:;
org$frostlang$frostc$frostdoc$Markdown** $tmp161 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp162 = *$tmp161;
org$frostlang$frostc$frostdoc$Protector** $tmp163 = &$tmp162->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp164 = *$tmp163;
$fn166 $tmp165 = ($fn166) $tmp164->$class->vtable[2];
frost$core$String* $tmp167 = $tmp165($tmp164, &$s168);
frost$core$String* $tmp169 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp155, &$s170, $tmp167);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$String* $tmp171 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local2) = $tmp169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
// unreffing REF($360:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing REF($359:frost.core.String)
// line 1011
frost$core$String* $tmp172 = *(&local2);
frost$core$Bit $tmp173 = frost$core$Bit$init$builtin_bit($tmp172 != NULL);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp175 = (frost$core$Int64) {1011};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s176, $tmp175, &$s177);
abort(); // unreachable
block33:;
frost$core$String* $tmp178 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp172, &$s179, &$s180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$String* $tmp181 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local2) = $tmp178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
// unreffing REF($384:frost.core.String)
// line 1012
frost$core$MutableString* $tmp182 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp182, &$s183);
// line 1013
frost$core$MutableString* $tmp184 = *(&local6);
frost$core$String* $tmp185 = *(&local2);
frost$core$Bit $tmp186 = frost$core$Bit$init$builtin_bit($tmp185 != NULL);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp188 = (frost$core$Int64) {1013};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s189, $tmp188, &$s190);
abort(); // unreachable
block35:;
frost$core$MutableString$append$frost$core$String($tmp184, $tmp185);
// line 1014
frost$core$MutableString* $tmp191 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp191, &$s192);
goto block28;
block28:;
// line 1016
frost$core$MutableString* $tmp193 = *(&local6);
frost$core$String* $tmp194 = *(&local0);
frost$core$Bit $tmp195 = frost$core$Bit$init$builtin_bit($tmp194 != NULL);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp197 = (frost$core$Int64) {1016};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s198, $tmp197, &$s199);
abort(); // unreachable
block37:;
frost$core$String* $tmp200 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s201, $tmp194);
frost$core$String* $tmp202 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp200, &$s203);
frost$core$MutableString$append$frost$core$String($tmp193, $tmp202);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// unreffing REF($426:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
// unreffing REF($425:frost.core.String)
// line 1017
frost$core$MutableString* $tmp204 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp204, &$s205);
// line 1018
frost$core$MutableString* $tmp206 = *(&local6);
frost$core$String* $tmp207 = frost$core$MutableString$convert$R$frost$core$String($tmp206);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// unreffing REF($439:frost.core.String)
frost$core$MutableString* $tmp208 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// unreffing result
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp209 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// unreffing title
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp210 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing url
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp211 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing linkText
*(&local0) = ((frost$core$String*) NULL);
return $tmp207;

}

