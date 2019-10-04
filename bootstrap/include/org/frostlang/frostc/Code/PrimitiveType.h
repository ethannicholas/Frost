#pragma once
#include "frost_c.h"
#include "PrimitiveType_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$Code$PrimitiveType org$frostlang$frostc$Code$PrimitiveType;
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct frost$core$String frost$core$String;

frost$core$Bit org$frostlang$frostc$Code$PrimitiveType$get_isInt$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Code$PrimitiveType$get_isFloat$R$frost$core$Bit(void* rawSelf);
frost$core$Int org$frostlang$frostc$Code$PrimitiveType$alignUp$frost$core$Int$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$core$Int p_offset, frost$core$Int p_align);
frost$core$Int org$frostlang$frostc$Code$PrimitiveType$elementOffset$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$core$Int p_idx);
frost$core$Int org$frostlang$frostc$Code$PrimitiveType$get_size$R$frost$core$Int(void* rawSelf);
frost$core$Int org$frostlang$frostc$Code$PrimitiveType$$anonymous1$org$frostlang$frostc$Code$PrimitiveType$R$frost$core$Int(org$frostlang$frostc$Code$PrimitiveType* p_t);
frost$core$Int org$frostlang$frostc$Code$PrimitiveType$get_alignment$R$frost$core$Int(void* rawSelf);
void org$frostlang$frostc$Code$PrimitiveType$cleanup(void* rawSelf);
void org$frostlang$frostc$Code$PrimitiveType$init$frost$core$Int(void* rawSelf, frost$core$Int p_rv);
void org$frostlang$frostc$Code$PrimitiveType$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, frost$core$Int p_rv, frost$core$Int p_f0, org$frostlang$frostc$Code$PrimitiveType* p_f1);
void org$frostlang$frostc$Code$PrimitiveType$init$frost$core$Int$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Code$PrimitiveType$GT(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$FixedArray* p_f0);
frost$core$String* org$frostlang$frostc$Code$PrimitiveType$get_asString$R$frost$core$String(void* rawSelf);

