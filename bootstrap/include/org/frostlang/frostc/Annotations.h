#pragma once
#include "frost_c.h"
#include "Annotations_types.h"
typedef struct org$frostlang$frostc$Annotations org$frostlang$frostc$Annotations;
#include "frost/core/Int_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Annotations$init(void* rawSelf);
void org$frostlang$frostc$Annotations$init$frost$core$Int(void* rawSelf, frost$core$Int p_flags);
void org$frostlang$frostc$Annotations$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(void* rawSelf, frost$core$Int p_flags, frost$collections$ListView* p_expressions);
org$frostlang$frostc$Annotations* org$frostlang$frostc$Annotations$$ADD$frost$core$Int$R$org$frostlang$frostc$Annotations(void* rawSelf, frost$core$Int p_flags);
frost$core$Bit org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$frostc$Annotations$get_isNoReturn$R$frost$core$Bit(void* rawSelf);
frost$core$String* org$frostlang$frostc$Annotations$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$Annotations$cleanup(void* rawSelf);

