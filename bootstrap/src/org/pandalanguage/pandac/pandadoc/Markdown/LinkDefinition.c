#include "org/pandalanguage/pandac/pandadoc/Markdown/LinkDefinition.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$class_type org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 57, -5424329575063409142, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* param0, panda$core$String* param1, panda$core$String* param2) {

// line 89
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp2 = &param0->url;
panda$core$String* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$String** $tmp4 = &param0->url;
*$tmp4 = param1;
// line 90
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp5 = &param0->title;
panda$core$String* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$String** $tmp7 = &param0->title;
*$tmp7 = param2;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* param0) {

// line 84
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$String** $tmp8 = &param0->url;
panda$core$String* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$String** $tmp10 = &param0->title;
panda$core$String* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
return;

}

