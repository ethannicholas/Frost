#include "org/frostlang/frostc/frostdoc/Markdown/_Closure30.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/frostdoc/Markdown/LinkDefinition.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/RegularExpression.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Equatable.h"
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure30$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure30$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure30$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn62)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn74)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn99)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn109)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn121)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn181)(frost$core$String*);
typedef frost$core$String* (*$fn183)(frost$core$Object*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33\x30", 49, -5097778637230146538, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x5c\x5c\x6e", 7, 204157935605574, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 145, -6696370019536876819, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 145, -6696370019536876819, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 105, 6769452873461677935, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e\x3c\x63\x6f\x64\x65\x3e", 8, 14540282526185430, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x61\x3e", 11, -1098056279549389125, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x6e\x6f\x20\x6d\x61\x74\x63\x68\x3a", 10, 7838749061877918149, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x29", 18, -7339959284735798157, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -103656543413702629, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure30$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure30* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 1030
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure30$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure30* param0) {

// line 1030
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(org$frostlang$frostc$frostdoc$Markdown$_Closure30* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$Bit local8;
frost$core$String* local9 = NULL;
frost$core$String* local10 = NULL;
// line 1031
*(&local0) = ((frost$core$String*) NULL);
// line 1032
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp11)));
frost$core$String* $tmp12 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local1) = ((frost$core$String*) $tmp11);
frost$core$Frost$unref$frost$core$Object$Q($tmp11);
// unreffing REF($6:frost.collections.ListView.T)
// line 1033
frost$core$Int64 $tmp13 = (frost$core$Int64) {2};
ITable* $tmp14 = param1->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
frost$core$Object* $tmp17 = $tmp15(param1, $tmp13);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp17)));
frost$core$String* $tmp18 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local2) = ((frost$core$String*) $tmp17);
frost$core$Frost$unref$frost$core$Object$Q($tmp17);
// unreffing REF($22:frost.collections.ListView.T)
// line 1034
frost$core$String* $tmp19 = *(&local2);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$String* $tmp20 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
*(&local3) = $tmp19;
// line 1035
frost$core$String* $tmp21 = *(&local3);
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit($tmp21 != NULL);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp24 = (frost$core$Int64) {1035};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s25, $tmp24, &$s26);
abort(); // unreachable
block1:;
frost$core$RegularExpression* $tmp27 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp27, &$s28);
frost$core$String* $tmp29 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp21, $tmp27, &$s30);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$String* $tmp31 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local3) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($55:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($53:frost.core.RegularExpression)
// line 1036
org$frostlang$frostc$frostdoc$Markdown** $tmp32 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp33 = *$tmp32;
frost$collections$HashMap** $tmp34 = &$tmp33->linkDefinitions;
frost$collections$HashMap* $tmp35 = *$tmp34;
frost$core$String* $tmp36 = *(&local3);
frost$core$Bit $tmp37 = frost$core$Bit$init$builtin_bit($tmp36 != NULL);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp39 = (frost$core$Int64) {1036};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s40, $tmp39, &$s41);
abort(); // unreachable
block3:;
frost$core$Object* $tmp42 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp35, ((frost$collections$Key*) $tmp36));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) $tmp42)));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp43 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) $tmp42);
frost$core$Frost$unref$frost$core$Object$Q($tmp42);
// unreffing REF($85:frost.collections.HashMap.V?)
// line 1037
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp44 = *(&local4);
frost$core$Bit $tmp45 = frost$core$Bit$init$builtin_bit($tmp44 != NULL);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block5; else goto block7;
block5:;
// line 1038
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp47 = *(&local4);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47 != NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {1038};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s51, $tmp50, &$s52);
abort(); // unreachable
block8:;
frost$core$String** $tmp53 = &$tmp47->url;
frost$core$String* $tmp54 = *$tmp53;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$String* $tmp55 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local5) = $tmp54;
// line 1040
frost$core$String* $tmp56 = *(&local5);
org$frostlang$frostc$frostdoc$Markdown** $tmp57 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp58 = *$tmp57;
org$frostlang$frostc$frostdoc$Protector** $tmp59 = &$tmp58->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp60 = *$tmp59;
$fn62 $tmp61 = ($fn62) $tmp60->$class->vtable[2];
frost$core$String* $tmp63 = $tmp61($tmp60, &$s64);
frost$core$String* $tmp65 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp56, &$s66, $tmp63);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$String* $tmp67 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local5) = $tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing REF($130:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// unreffing REF($129:frost.core.String)
// line 1041
frost$core$String* $tmp68 = *(&local5);
org$frostlang$frostc$frostdoc$Markdown** $tmp69 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp70 = *$tmp69;
org$frostlang$frostc$frostdoc$Protector** $tmp71 = &$tmp70->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp72 = *$tmp71;
$fn74 $tmp73 = ($fn74) $tmp72->$class->vtable[2];
frost$core$String* $tmp75 = $tmp73($tmp72, &$s76);
frost$core$String* $tmp77 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp68, &$s78, $tmp75);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$String* $tmp79 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local5) = $tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing REF($151:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing REF($150:frost.core.String)
// line 1042
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp80 = *(&local4);
frost$core$Bit $tmp81 = frost$core$Bit$init$builtin_bit($tmp80 != NULL);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp83 = (frost$core$Int64) {1042};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s84, $tmp83, &$s85);
abort(); // unreachable
block10:;
frost$core$String** $tmp86 = &$tmp80->title;
frost$core$String* $tmp87 = *$tmp86;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$String* $tmp88 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local6) = $tmp87;
// line 1043
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s89));
frost$core$String* $tmp90 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
*(&local7) = &$s91;
// line 1044
frost$core$String* $tmp92 = *(&local6);
frost$core$Bit $tmp93 = frost$core$Bit$init$builtin_bit(true);
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block14; else goto block15;
block14:;
frost$core$String* $tmp95 = *(&local6);
ITable* $tmp97 = ((frost$core$Equatable*) $tmp95)->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[1];
frost$core$Bit $tmp100 = $tmp98(((frost$core$Equatable*) $tmp95), ((frost$core$Equatable*) &$s96));
*(&local8) = $tmp100;
goto block16;
block15:;
*(&local8) = $tmp93;
goto block16;
block16:;
frost$core$Bit $tmp101 = *(&local8);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block12; else goto block13;
block12:;
// line 1046
frost$core$String* $tmp103 = *(&local6);
org$frostlang$frostc$frostdoc$Markdown** $tmp104 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp105 = *$tmp104;
org$frostlang$frostc$frostdoc$Protector** $tmp106 = &$tmp105->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp107 = *$tmp106;
$fn109 $tmp108 = ($fn109) $tmp107->$class->vtable[2];
frost$core$String* $tmp110 = $tmp108($tmp107, &$s111);
frost$core$String* $tmp112 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp103, &$s113, $tmp110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$String* $tmp114 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local6) = $tmp112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($217:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($216:frost.core.String)
// line 1047
frost$core$String* $tmp115 = *(&local6);
org$frostlang$frostc$frostdoc$Markdown** $tmp116 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp117 = *$tmp116;
org$frostlang$frostc$frostdoc$Protector** $tmp118 = &$tmp117->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp119 = *$tmp118;
$fn121 $tmp120 = ($fn121) $tmp119->$class->vtable[2];
frost$core$String* $tmp122 = $tmp120($tmp119, &$s123);
frost$core$String* $tmp124 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp115, &$s125, $tmp122);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$String* $tmp126 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local6) = $tmp124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing REF($238:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing REF($237:frost.core.String)
// line 1048
frost$core$String* $tmp127 = *(&local6);
frost$core$String* $tmp128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s129, $tmp127);
frost$core$String* $tmp130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp128, &$s131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$String* $tmp132 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local7) = $tmp130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($254:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($253:frost.core.String)
goto block13;
block13:;
// line 1050
frost$core$String* $tmp133 = *(&local5);
frost$core$String* $tmp134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s135, $tmp133);
frost$core$String* $tmp136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp134, &$s137);
frost$core$String* $tmp138 = *(&local7);
frost$core$String* $tmp139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp136, $tmp138);
frost$core$String* $tmp140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp139, &$s141);
frost$core$String* $tmp142 = *(&local2);
frost$core$Bit $tmp143 = frost$core$Bit$init$builtin_bit($tmp142 != NULL);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp145 = (frost$core$Int64) {1050};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s146, $tmp145, &$s147);
abort(); // unreachable
block17:;
frost$core$String* $tmp148 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp140, $tmp142);
frost$core$String* $tmp149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp148, &$s150);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$String* $tmp151 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local0) = $tmp149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing REF($285:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing REF($284:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing REF($274:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
// unreffing REF($273:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing REF($271:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing REF($270:frost.core.String)
frost$core$String* $tmp152 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing titleTag
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp153 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing title
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp154 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing url
*(&local5) = ((frost$core$String*) NULL);
goto block6;
block7:;
// line 1
// line 1053
org$frostlang$frostc$frostdoc$Markdown** $tmp155 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp156 = *$tmp155;
frost$core$MutableMethod** $tmp157 = &$tmp156->linkResolver;
frost$core$MutableMethod* $tmp158 = *$tmp157;
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit($tmp158 != NULL);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block19; else goto block21;
block19:;
// line 1054
org$frostlang$frostc$frostdoc$Markdown** $tmp161 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp162 = *$tmp161;
frost$core$MutableMethod** $tmp163 = &$tmp162->linkResolver;
frost$core$MutableMethod* $tmp164 = *$tmp163;
frost$core$String* $tmp165 = *(&local2);
frost$core$Bit $tmp166 = frost$core$Bit$init$builtin_bit($tmp165 != NULL);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp168 = (frost$core$Int64) {1054};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s169, $tmp168, &$s170);
abort(); // unreachable
block22:;
frost$core$Bit $tmp171 = frost$core$Bit$init$builtin_bit($tmp164 != NULL);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp173 = (frost$core$Int64) {1};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s174, $tmp173, &$s175);
abort(); // unreachable
block24:;
frost$core$Int8** $tmp176 = &$tmp164->pointer;
frost$core$Int8* $tmp177 = *$tmp176;
frost$core$Object** $tmp178 = &$tmp164->target;
frost$core$Object* $tmp179 = *$tmp178;
bool $tmp180 = $tmp179 != ((frost$core$Object*) NULL);
if ($tmp180) goto block26; else goto block27;
block27:;
frost$core$String* $tmp182 = (($fn181) $tmp177)($tmp165);
*(&local9) = $tmp182;
goto block28;
block26:;
frost$core$String* $tmp184 = (($fn183) $tmp177)($tmp179, $tmp165);
*(&local9) = $tmp184;
goto block28;
block28:;
frost$core$String* $tmp185 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$String* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local0) = $tmp185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing REF($373:frost.core.String?)
// line 1055
frost$core$String* $tmp187 = *(&local0);
frost$core$Bit $tmp188 = frost$core$Bit$init$builtin_bit($tmp187 != NULL);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block29; else goto block31;
block29:;
// line 1056
frost$core$String* $tmp190 = *(&local2);
frost$core$Bit $tmp191 = frost$core$Bit$init$builtin_bit($tmp190 != NULL);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp193 = (frost$core$Int64) {1056};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s194, $tmp193, &$s195);
abort(); // unreachable
block32:;
frost$core$String* $tmp196 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp190, &$s197, &$s198);
frost$core$String* $tmp199 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp196, &$s200, &$s201);
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$String* $tmp202 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local10) = $tmp199;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// unreffing REF($400:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing REF($399:frost.core.String)
// line 1057
frost$core$String* $tmp203 = *(&local0);
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit($tmp203 != NULL);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp206 = (frost$core$Int64) {1057};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s207, $tmp206, &$s208);
abort(); // unreachable
block34:;
frost$core$String* $tmp209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s210, $tmp203);
frost$core$String* $tmp211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp209, &$s212);
frost$core$String* $tmp213 = *(&local10);
frost$core$String* $tmp214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp211, $tmp213);
frost$core$String* $tmp215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp214, &$s216);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$String* $tmp217 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local0) = $tmp215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing REF($428:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing REF($427:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing REF($425:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// unreffing REF($424:frost.core.String)
frost$core$String* $tmp218 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing escaped
*(&local10) = ((frost$core$String*) NULL);
goto block30;
block31:;
// line 1
// line 1060
frost$core$String* $tmp219 = *(&local2);
frost$core$Bit $tmp220 = frost$core$Bit$init$builtin_bit($tmp219 != NULL);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp222 = (frost$core$Int64) {1060};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s223, $tmp222, &$s224);
abort(); // unreachable
block36:;
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s226, $tmp219);
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp225, &$s228);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$String* $tmp229 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local0) = $tmp227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// unreffing REF($466:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing REF($465:frost.core.String)
goto block30;
block30:;
goto block20;
block21:;
// line 1
// line 1064
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s230));
frost$core$String* $tmp231 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local0) = &$s230;
goto block20;
block20:;
goto block6;
block6:;
// line 1067
frost$core$String* $tmp232 = *(&local0);
frost$core$Bit $tmp233 = frost$core$Bit$init$builtin_bit($tmp232 != NULL);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp235 = (frost$core$Int64) {1067};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s236, $tmp235, &$s237);
abort(); // unreachable
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp238 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing defn
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$String* $tmp239 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing id
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp240 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing linkText
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// unreffing wholeMatch
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp242 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing replacementText
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$Object*) $tmp232);

}

