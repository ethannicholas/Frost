#pragma once
#include "frost_c.h"
#include "Capture_types.h"
typedef struct org$frostlanguage$frostc$Compiler$Capture org$frostlanguage$frostc$Compiler$Capture;
#include "frost/core/Int64_types.h"
typedef struct org$frostlanguage$frostc$Variable org$frostlanguage$frostc$Variable;
typedef struct org$frostlanguage$frostc$FieldDecl org$frostlanguage$frostc$FieldDecl;

void org$frostlanguage$frostc$Compiler$Capture$cleanup(org$frostlanguage$frostc$Compiler$Capture* self);
void org$frostlanguage$frostc$Compiler$Capture$init$frost$core$Int64$org$frostlanguage$frostc$Variable(org$frostlanguage$frostc$Compiler$Capture* self, frost$core$Int64 p_rv, org$frostlanguage$frostc$Variable* p_f0);
void org$frostlanguage$frostc$Compiler$Capture$init$frost$core$Int64$org$frostlanguage$frostc$FieldDecl(org$frostlanguage$frostc$Compiler$Capture* self, frost$core$Int64 p_rv, org$frostlanguage$frostc$FieldDecl* p_f0);
void org$frostlanguage$frostc$Compiler$Capture$init$frost$core$Int64(org$frostlanguage$frostc$Compiler$Capture* self, frost$core$Int64 p_rv);

