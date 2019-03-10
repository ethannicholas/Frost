#include "org/frostlang/frostc/Compiler/Settings.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/io/File.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/collections/ImmutableArray.h"

__attribute__((weak)) void org$frostlang$frostc$Compiler$Settings$cleanup$shim(org$frostlang$frostc$Compiler$Settings* p0) {
    org$frostlang$frostc$Compiler$Settings$cleanup(p0);

}

static frost$core$String $s1;
org$frostlang$frostc$Compiler$Settings$class_type org$frostlang$frostc$Compiler$Settings$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$Settings$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x53\x65\x74\x74\x69\x6e\x67\x73", 38, 7720244119815717860, NULL };

void org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit(org$frostlang$frostc$Compiler$Settings* param0, frost$io$File* param1, frost$collections$ListView* param2, frost$core$Int param3, frost$core$Int param4, frost$core$Bit param5) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:315
frost$core$Int $tmp2 = (frost$core$Int) {8u};
frost$core$Int* $tmp3 = &param0->intSize;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:319
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp4 = &param0->frostHome;
frost$io$File* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$io$File** $tmp6 = &param0->frostHome;
*$tmp6 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:320
FROST_ASSERT(40 == sizeof(frost$collections$ImmutableArray));
frost$collections$ImmutableArray* $tmp7 = (frost$collections$ImmutableArray*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$ImmutableArray$class);
frost$collections$ImmutableArray$init$frost$collections$ListView$LTfrost$collections$ImmutableArray$T$GT($tmp7, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$collections$ImmutableArray** $tmp8 = &param0->importDirs;
frost$collections$ImmutableArray* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$collections$ImmutableArray** $tmp10 = &param0->importDirs;
*$tmp10 = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:321
frost$core$Int* $tmp11 = &param0->optimizationLevel;
*$tmp11 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:322
frost$core$Int* $tmp12 = &param0->safetyLevel;
*$tmp12 = param4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:323
frost$core$Bit* $tmp13 = &param0->debug;
*$tmp13 = param5;
return;

}
void org$frostlang$frostc$Compiler$Settings$cleanup(org$frostlang$frostc$Compiler$Settings* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:304
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$io$File** $tmp14 = &param0->frostHome;
frost$io$File* $tmp15 = *$tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$collections$ImmutableArray** $tmp16 = &param0->importDirs;
frost$collections$ImmutableArray* $tmp17 = *$tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
return;

}

