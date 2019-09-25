#include "org/frostlang/frostc/frostdoc/Markdown/_Closure12.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown/CodeReplacer.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure12$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure12$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure12$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure12$$anonymous11$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$String* (*$fn2)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$collections$ListView*);
typedef frost$core$String* (*$fn3)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$collections$ListView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x32", 49, -4907393902156155214, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure12$init$org$frostlang$frostc$frostdoc$Markdown$CodeReplacer(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure12* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure12*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer** _3;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:501
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$dummy2;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$dummy2;
*_7 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure12$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$_Closure12* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure12*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer** _3;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:501
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$dummy2;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure12$$anonymous11$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure12* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure12*) rawSelf;

org$frostlang$frostc$frostdoc$Markdown$CodeReplacer** _1;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* _2;
$fn2 _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$Object* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:501
_1 = &param0->$dummy2;
_2 = *_1;
_3 = ($fn3) _2->$class->vtable[2];
_4 = _3(_2, param1);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_7);
return _4;

}

