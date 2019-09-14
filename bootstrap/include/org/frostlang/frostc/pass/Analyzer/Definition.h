#pragma once
#include "frost_c.h"
#include "Definition_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$pass$Analyzer$Definition org$frostlang$frostc$pass$Analyzer$Definition;
#include "frost/core/Bit_types.h"
#include "frost/core/Int_types.h"
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;

frost$core$String* org$frostlang$frostc$pass$Analyzer$Definition$get_asString$R$frost$core$String(void* rawSelf);
frost$core$Bit org$frostlang$frostc$pass$Analyzer$Definition$matches$org$frostlang$frostc$pass$Analyzer$Definition$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$pass$Analyzer$Definition* p_other);
void org$frostlang$frostc$pass$Analyzer$Definition$cleanup(void* rawSelf);
void org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$IR$Statement$ID p_f0);
void org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$org$frostlang$frostc$pass$Analyzer$Definition$org$frostlang$frostc$FieldDecl(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$pass$Analyzer$Definition* p_f0, org$frostlang$frostc$FieldDecl* p_f1);
void org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$frost$core$Int(void* rawSelf, frost$core$Int p_rv, frost$core$Int p_f0);
void org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int(void* rawSelf, frost$core$Int p_rv);

