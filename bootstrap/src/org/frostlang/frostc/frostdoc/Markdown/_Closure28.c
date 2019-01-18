#include "org/frostlang/frostc/frostdoc/Markdown/_Closure28.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Bit.h"
#include "frost/io/Console.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Error.h"
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
typedef frost$core$String* (*$fn94)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn112)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn144)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn161)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x38", 49, -5097778637230146631, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 105, 6769452873461677935, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3a\x20\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x72\x65\x73\x6f\x6c\x76\x65\x20\x6c\x69\x6e\x6b\x20\x27", 31, 6850877155588619032, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x65\x72\x72\x6f\x72\x29", 7, 150747842869236, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x5d", 18, -5787080662771743994, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };

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
frost$core$MutableString* local5 = NULL;
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
frost$io$OutputStream* $tmp60 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp61 = *(&local1);
frost$core$Bit $tmp62 = frost$core$Bit$init$builtin_bit($tmp61 != NULL);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp64 = (frost$core$Int64) {990};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s65, $tmp64, &$s66);
abort(); // unreachable
block13:;
frost$core$String* $tmp67 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s68, $tmp61);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp67, &$s70);
$fn72 $tmp71 = ($fn72) $tmp60->$class->vtable[19];
frost$core$Error* $tmp73 = $tmp71($tmp60, $tmp69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing REF($124:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing REF($111:frost.io.OutputStream)
// line 991
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s74));
frost$core$String* $tmp75 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local4) = &$s74;
goto block12;
block12:;
// line 993
frost$core$String* $tmp76 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$String* $tmp77 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local1) = $tmp76;
frost$core$String* $tmp78 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing newURL
*(&local4) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 996
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s79));
frost$core$String* $tmp80 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local1) = &$s79;
goto block2;
block2:;
// line 998
frost$core$String* $tmp81 = *(&local1);
frost$core$Bit $tmp82 = frost$core$Bit$init$builtin_bit($tmp81 != NULL);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp84 = (frost$core$Int64) {998};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s85, $tmp84, &$s86);
abort(); // unreachable
block15:;
frost$core$RegularExpression* $tmp87 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp87, &$s88);
org$frostlang$frostc$frostdoc$Markdown** $tmp89 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp90 = *$tmp89;
org$frostlang$frostc$frostdoc$Protector** $tmp91 = &$tmp90->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp92 = *$tmp91;
$fn94 $tmp93 = ($fn94) $tmp92->$class->vtable[2];
frost$core$String* $tmp95 = $tmp93($tmp92, &$s96);
frost$core$String* $tmp97 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp81, $tmp87, $tmp95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$String* $tmp98 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local1) = $tmp97;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing REF($188:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// unreffing REF($187:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// unreffing REF($180:frost.core.RegularExpression)
// line 999
frost$core$String* $tmp99 = *(&local1);
frost$core$Bit $tmp100 = frost$core$Bit$init$builtin_bit($tmp99 != NULL);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp102 = (frost$core$Int64) {999};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s103, $tmp102, &$s104);
abort(); // unreachable
block17:;
frost$core$RegularExpression* $tmp105 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp105, &$s106);
org$frostlang$frostc$frostdoc$Markdown** $tmp107 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp108 = *$tmp107;
org$frostlang$frostc$frostdoc$Protector** $tmp109 = &$tmp108->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp110 = *$tmp109;
$fn112 $tmp111 = ($fn112) $tmp110->$class->vtable[2];
frost$core$String* $tmp113 = $tmp111($tmp110, &$s114);
frost$core$String* $tmp115 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp99, $tmp105, $tmp113);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$String* $tmp116 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local1) = $tmp115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing REF($223:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing REF($222:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// unreffing REF($215:frost.core.RegularExpression)
// line 1000
frost$core$MutableString* $tmp117 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp117);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$MutableString* $tmp118 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local5) = $tmp117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing REF($241:frost.core.MutableString)
// line 1001
frost$core$MutableString* $tmp119 = *(&local5);
frost$core$String* $tmp120 = *(&local1);
frost$core$Bit $tmp121 = frost$core$Bit$init$builtin_bit($tmp120 != NULL);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp123 = (frost$core$Int64) {1001};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s124, $tmp123, &$s125);
abort(); // unreachable
block19:;
frost$core$String* $tmp126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s127, $tmp120);
frost$core$String* $tmp128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp126, &$s129);
frost$core$MutableString$append$frost$core$String($tmp119, $tmp128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($265:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing REF($264:frost.core.String)
// line 1002
frost$core$String* $tmp130 = *(&local2);
frost$core$Bit $tmp131 = frost$core$Bit$init$builtin_bit($tmp130 != NULL);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block21; else goto block22;
block21:;
// line 1004
frost$core$String* $tmp133 = *(&local2);
frost$core$Bit $tmp134 = frost$core$Bit$init$builtin_bit($tmp133 != NULL);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp136 = (frost$core$Int64) {1004};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s137, $tmp136, &$s138);
abort(); // unreachable
block23:;
org$frostlang$frostc$frostdoc$Markdown** $tmp139 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp140 = *$tmp139;
org$frostlang$frostc$frostdoc$Protector** $tmp141 = &$tmp140->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp142 = *$tmp141;
$fn144 $tmp143 = ($fn144) $tmp142->$class->vtable[2];
frost$core$String* $tmp145 = $tmp143($tmp142, &$s146);
frost$core$String* $tmp147 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp133, &$s148, $tmp145);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$String* $tmp149 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local2) = $tmp147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing REF($295:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing REF($294:frost.core.String)
// line 1005
frost$core$String* $tmp150 = *(&local2);
frost$core$Bit $tmp151 = frost$core$Bit$init$builtin_bit($tmp150 != NULL);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp153 = (frost$core$Int64) {1005};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s154, $tmp153, &$s155);
abort(); // unreachable
block25:;
org$frostlang$frostc$frostdoc$Markdown** $tmp156 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp157 = *$tmp156;
org$frostlang$frostc$frostdoc$Protector** $tmp158 = &$tmp157->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp159 = *$tmp158;
$fn161 $tmp160 = ($fn161) $tmp159->$class->vtable[2];
frost$core$String* $tmp162 = $tmp160($tmp159, &$s163);
frost$core$String* $tmp164 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp150, &$s165, $tmp162);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$String* $tmp166 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local2) = $tmp164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
// unreffing REF($325:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing REF($324:frost.core.String)
// line 1006
frost$core$String* $tmp167 = *(&local2);
frost$core$Bit $tmp168 = frost$core$Bit$init$builtin_bit($tmp167 != NULL);
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp170 = (frost$core$Int64) {1006};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s171, $tmp170, &$s172);
abort(); // unreachable
block27:;
frost$core$String* $tmp173 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp167, &$s174, &$s175);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$String* $tmp176 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local2) = $tmp173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// unreffing REF($349:frost.core.String)
// line 1007
frost$core$MutableString* $tmp177 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp177, &$s178);
// line 1008
frost$core$MutableString* $tmp179 = *(&local5);
frost$core$String* $tmp180 = *(&local2);
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit($tmp180 != NULL);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp183 = (frost$core$Int64) {1008};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s184, $tmp183, &$s185);
abort(); // unreachable
block29:;
frost$core$MutableString$append$frost$core$String($tmp179, $tmp180);
// line 1009
frost$core$MutableString* $tmp186 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp186, &$s187);
goto block22;
block22:;
// line 1011
frost$core$MutableString* $tmp188 = *(&local5);
frost$core$String* $tmp189 = *(&local0);
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit($tmp189 != NULL);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp192 = (frost$core$Int64) {1011};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s193, $tmp192, &$s194);
abort(); // unreachable
block31:;
frost$core$String* $tmp195 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s196, $tmp189);
frost$core$String* $tmp197 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp195, &$s198);
frost$core$MutableString$append$frost$core$String($tmp188, $tmp197);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
// unreffing REF($391:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// unreffing REF($390:frost.core.String)
// line 1012
frost$core$MutableString* $tmp199 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp199, &$s200);
// line 1013
frost$core$MutableString* $tmp201 = *(&local5);
frost$core$String* $tmp202 = frost$core$MutableString$convert$R$frost$core$String($tmp201);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// unreffing REF($404:frost.core.String)
frost$core$MutableString* $tmp203 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// unreffing result
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp204 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing title
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing url
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp206 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing linkText
*(&local0) = ((frost$core$String*) NULL);
return $tmp202;

}

