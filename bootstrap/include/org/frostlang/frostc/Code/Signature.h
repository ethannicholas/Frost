#pragma once
#include "frost_c.h"
#include "Signature_types.h"
typedef struct org$frostlang$frostc$Code$Signature org$frostlang$frostc$Code$Signature;
typedef struct org$frostlang$frostc$Code$PrimitiveType org$frostlang$frostc$Code$PrimitiveType;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$Code$Signature$init$org$frostlang$frostc$Code$PrimitiveType$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Code$PrimitiveType$GT$frost$core$Bit(void* rawSelf, org$frostlang$frostc$Code$PrimitiveType* p_returnType, frost$core$String* p_name, org$frostlang$frostc$FixedArray* p_parameters, frost$core$Bit p_isExternal);
frost$core$String* org$frostlang$frostc$Code$Signature$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$Code$Signature$cleanup(void* rawSelf);

