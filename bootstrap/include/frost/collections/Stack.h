#pragma once
#include "frost_c.h"
#include "Stack_types.h"
typedef struct frost$collections$Stack frost$collections$Stack;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

void frost$collections$Stack$push$frost$collections$Stack$T(frost$collections$Stack* self, frost$core$Object* p_v);
frost$core$Object* frost$collections$Stack$pop$R$frost$collections$Stack$T(frost$collections$Stack* self);
void frost$collections$Stack$insert$frost$core$Int$frost$collections$Stack$T(frost$collections$Stack* self, frost$core$Int p_depth, frost$core$Object* p_value);
frost$core$Object* frost$collections$Stack$removeIndex$frost$core$Int$R$frost$collections$Stack$T(frost$collections$Stack* self, frost$core$Int p_depth);
frost$core$Object* frost$collections$Stack$$IDX$frost$core$Int$R$frost$collections$Stack$T(frost$collections$Stack* self, frost$core$Int p_depth);
void frost$collections$Stack$clear(frost$collections$Stack* self);
frost$collections$Iterator* frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT(frost$collections$Stack* self);
frost$core$Int frost$collections$Stack$get_count$R$frost$core$Int(frost$collections$Stack* self);
frost$core$String* frost$collections$Stack$get_asString$R$frost$core$String(frost$collections$Stack* self);
void frost$collections$Stack$init(frost$collections$Stack* self);
void frost$collections$Stack$cleanup(frost$collections$Stack* self);

