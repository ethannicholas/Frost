#pragma once
#include "frost_c.h"
#include "Annotations_types.h"
typedef struct org$frostlang$frostc$Annotations org$frostlang$frostc$Annotations;
#include "frost/core/Int64_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Annotations$init(org$frostlang$frostc$Annotations* self);
void org$frostlang$frostc$Annotations$init$frost$core$Int64(org$frostlang$frostc$Annotations* self, frost$core$Int64 p_flags);
void org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(org$frostlang$frostc$Annotations* self, frost$core$Int64 p_flags, frost$collections$ListView* p_expressions);
frost$core$Bit org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$Bit org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit(org$frostlang$frostc$Annotations* self);
frost$core$String* org$frostlang$frostc$Annotations$get_asString$R$frost$core$String(org$frostlang$frostc$Annotations* self);
void org$frostlang$frostc$Annotations$cleanup(org$frostlang$frostc$Annotations* self);

