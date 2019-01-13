#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/io/File.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/collections/ImmutableArray.h"

__attribute__((weak)) void org$pandalanguage$pandac$Compiler$Settings$cleanup$shim(org$pandalanguage$pandac$Compiler$Settings* p0) {
    org$pandalanguage$pandac$Compiler$Settings$cleanup(p0);

}

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$Settings$class_type org$pandalanguage$pandac$Compiler$Settings$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$Settings$cleanup$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x53\x65\x74\x74\x69\x6e\x67\x73", 42, 3094301528977944540, NULL };

void org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$Compiler$Settings* param0, panda$io$File* param1, panda$collections$ListView* param2, panda$core$Int64 param3, panda$core$Int64 param4, panda$core$Bit param5) {

// line 265
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp2 = &param0->pandaHome;
panda$io$File* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$io$File** $tmp4 = &param0->pandaHome;
*$tmp4 = param1;
// line 266
panda$collections$ImmutableArray* $tmp5 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp5, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$collections$ImmutableArray** $tmp6 = &param0->importDirs;
panda$collections$ImmutableArray* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$collections$ImmutableArray** $tmp8 = &param0->importDirs;
*$tmp8 = $tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// unreffing REF($10:panda.collections.ImmutableArray<panda.io.File>)
// line 267
panda$core$Int64* $tmp9 = &param0->optimizationLevel;
*$tmp9 = param3;
// line 268
panda$core$Int64* $tmp10 = &param0->safetyLevel;
*$tmp10 = param4;
// line 269
panda$core$Bit* $tmp11 = &param0->debug;
*$tmp11 = param5;
return;

}
void org$pandalanguage$pandac$Compiler$Settings$cleanup(org$pandalanguage$pandac$Compiler$Settings* param0) {

// line 252
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$io$File** $tmp12 = &param0->pandaHome;
panda$io$File* $tmp13 = *$tmp12;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$collections$ImmutableArray** $tmp14 = &param0->importDirs;
panda$collections$ImmutableArray* $tmp15 = *$tmp14;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
return;

}

