#pragma once
#include "frost_c.h"
#include "Capture_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Compiler$Capture org$frostlang$frostc$Compiler$Capture;
#include "frost/core/Int64_types.h"
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;

frost$core$String* org$frostlang$frostc$Compiler$Capture$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$Capture* self);
void org$frostlang$frostc$Compiler$Capture$cleanup(org$frostlang$frostc$Compiler$Capture* self);
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int64$org$frostlang$frostc$Variable(org$frostlang$frostc$Compiler$Capture* self, frost$core$Int64 p_rv, org$frostlang$frostc$Variable* p_f0);
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int64$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$Compiler$Capture* self, frost$core$Int64 p_rv, org$frostlang$frostc$FieldDecl* p_f0);
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int64(org$frostlang$frostc$Compiler$Capture* self, frost$core$Int64 p_rv);

