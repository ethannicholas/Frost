#include "org/frostlang/frostc/frostdoc/Markdown/_Closure12.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown/CodeReplacer.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure12$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure12$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure12$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure12$$anonymous11$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$String* (*$fn10)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$collections$ListView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x32", 49, -4907393902156155214, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure12$init$org$frostlang$frostc$frostdoc$Markdown$CodeReplacer(org$frostlang$frostc$frostdoc$Markdown$_Closure12* param0, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:501
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer** $tmp2 = &param0->$dummy2;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer** $tmp4 = &param0->$dummy2;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure12$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure12* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:501
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer** $tmp5 = &param0->$dummy2;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure12$$anonymous11$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure12* param0, frost$collections$ListView* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:501
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer** $tmp7 = &param0->$dummy2;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp8 = *$tmp7;
$fn10 $tmp9 = ($fn10) $tmp8->$class->vtable[2];
frost$core$String* $tmp11 = $tmp9($tmp8, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
return $tmp11;

}

