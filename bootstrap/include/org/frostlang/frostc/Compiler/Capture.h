#pragma once
#include "frost_c.h"
#include "Capture_types.h"
typedef struct org$frostlang$frostc$Compiler$Capture org$frostlang$frostc$Compiler$Capture;
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Compiler$Capture$cleanup(void* rawSelf);
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int$org$frostlang$frostc$Variable(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$Variable* p_f0);
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int$org$frostlang$frostc$FieldDecl(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$FieldDecl* p_f0);
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int(void* rawSelf, frost$core$Int p_rv);
frost$core$String* org$frostlang$frostc$Compiler$Capture$get_asString$R$frost$core$String(void* rawSelf);

