#pragma once
#include "frost_c.h"
#include "Global_types.h"
typedef struct org$frostlang$frostc$Code$Global org$frostlang$frostc$Code$Global;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Code$PrimitiveType org$frostlang$frostc$Code$PrimitiveType;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$Code$Global$init$frost$core$String$org$frostlang$frostc$Code$PrimitiveType$frost$core$String$Q$frost$core$Int(void* rawSelf, frost$core$String* p_name, org$frostlang$frostc$Code$PrimitiveType* p_type, frost$core$String* p_comment, frost$core$Int p_flags);
frost$core$Bit org$frostlang$frostc$Code$Global$get_isExternal$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Code$Global$get_isPrivate$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Code$Global$get_isUnnamedAddr$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Code$Global$get_isLinkOnce$R$frost$core$Bit(void* rawSelf);
frost$core$String* org$frostlang$frostc$Code$Global$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$Code$Global$cleanup(void* rawSelf);

