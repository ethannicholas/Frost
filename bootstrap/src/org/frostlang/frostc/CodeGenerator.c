#include "org/frostlang/frostc/CodeGenerator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$CodeGenerator$_org$frostlang$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class, NULL, { NULL, NULL, NULL, NULL, NULL, NULL} };

static frost$core$String $s1;
org$frostlang$frostc$CodeGenerator$class_type org$frostlang$frostc$CodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$CodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, NULL, NULL, NULL, NULL} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 34, -3330412286206399442, NULL };







