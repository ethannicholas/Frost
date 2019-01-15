#pragma once
#include "frost_c.h"
#include "Annotations_types.h"
typedef struct org$frostlanguage$frostc$Annotations org$frostlanguage$frostc$Annotations;
#include "frost/core/Int64_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frostc$Annotations$init(org$frostlanguage$frostc$Annotations* self);
void org$frostlanguage$frostc$Annotations$init$frost$core$Int64(org$frostlanguage$frostc$Annotations* self, frost$core$Int64 p_flags);
void org$frostlanguage$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlanguage$frostc$Annotations$Expression$GT$Q(org$frostlanguage$frostc$Annotations* self, frost$core$Int64 p_flags, frost$collections$ListView* p_expressions);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isPrivate$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isProtected$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isPackage$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isOverride$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isExternal$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isImplicit$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isFinal$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isAbstract$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isInline$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isWeak$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$Bit org$frostlanguage$frostc$Annotations$get_isDefault$R$frost$core$Bit(org$frostlanguage$frostc$Annotations* self);
frost$core$String* org$frostlanguage$frostc$Annotations$convert$R$frost$core$String(org$frostlanguage$frostc$Annotations* self);
void org$frostlanguage$frostc$Annotations$cleanup(org$frostlanguage$frostc$Annotations* self);

