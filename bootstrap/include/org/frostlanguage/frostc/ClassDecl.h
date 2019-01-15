#pragma once
#include "frost_c.h"
#include "ClassDecl_types.h"
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
typedef struct frost$io$File frost$io$File;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$collections$MapView frost$collections$MapView;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$Annotations org$frostlanguage$frostc$Annotations;
#include "org/frostlanguage/frostc/ClassDecl/Kind_types.h"
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct org$frostlanguage$frostc$SymbolTable org$frostlanguage$frostc$SymbolTable;
#include "frost/core/Bit_types.h"

void org$frostlanguage$frostc$ClassDecl$init$frost$io$File$org$frostlanguage$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$ClassDecl$Kind$org$frostlanguage$frostc$Type$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$frost$collections$Array$LTorg$frostlanguage$frostc$ClassDecl$GenericParameter$GT$org$frostlanguage$frostc$SymbolTable(org$frostlanguage$frostc$ClassDecl* self, frost$io$File* p_source, org$frostlanguage$frostc$Position p_position, frost$collections$MapView* p_aliases, frost$core$String* p_doccomment, org$frostlanguage$frostc$Annotations* p_annotations, org$frostlanguage$frostc$ClassDecl$Kind p_kind, org$frostlanguage$frostc$Type* p_type, frost$collections$ListView* p_declaredSupers, frost$collections$Array* p_parameters, org$frostlanguage$frostc$SymbolTable* p_parent);
void org$frostlanguage$frostc$ClassDecl$init$frost$io$File$org$frostlanguage$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$frost$collections$Array$LTorg$frostlanguage$frostc$ClassDecl$GenericParameter$GT$org$frostlanguage$frostc$SymbolTable(org$frostlanguage$frostc$ClassDecl* self, frost$io$File* p_source, org$frostlanguage$frostc$Position p_position, frost$collections$MapView* p_aliases, frost$core$String* p_doccomment, org$frostlanguage$frostc$Annotations* p_annotations, org$frostlanguage$frostc$ClassDecl$Kind p_kind, frost$core$String* p_name, frost$collections$ListView* p_declaredSupers, frost$collections$Array* p_parameters, org$frostlanguage$frostc$SymbolTable* p_parent);
frost$core$String* org$frostlanguage$frostc$ClassDecl$simpleName$R$frost$core$String(org$frostlanguage$frostc$ClassDecl* self);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$ClassDecl$typeWithParameters$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$ClassDecl* self);
frost$core$Bit org$frostlanguage$frostc$ClassDecl$isSpecialization$R$frost$core$Bit(org$frostlanguage$frostc$ClassDecl* self);
frost$core$String* org$frostlanguage$frostc$ClassDecl$convert$R$frost$core$String(org$frostlanguage$frostc$ClassDecl* self);
void org$frostlanguage$frostc$ClassDecl$cleanup(org$frostlanguage$frostc$ClassDecl* self);

