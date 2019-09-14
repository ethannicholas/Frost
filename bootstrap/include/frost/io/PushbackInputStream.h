#pragma once
#include "frost_c.h"
#include "PushbackInputStream_types.h"
typedef struct frost$io$PushbackInputStream frost$io$PushbackInputStream;
typedef struct frost$io$InputStream frost$io$InputStream;
#include "frost/core/UInt8_types.h"
#include "frost/core/Int8_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Char8_types.h"
typedef struct frost$core$String frost$core$String;

void frost$io$PushbackInputStream$init$frost$io$InputStream(void* rawSelf, frost$io$InputStream* p_source);
frost$core$UInt8$nullable frost$io$PushbackInputStream$read$R$frost$core$UInt8$Q(void* rawSelf);
void frost$io$PushbackInputStream$pushback$frost$core$UInt8(void* rawSelf, frost$core$UInt8 p_v);
void frost$io$PushbackInputStream$pushback$frost$core$Int8(void* rawSelf, frost$core$Int8 p_v);
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$UInt8$GT(void* rawSelf, frost$collections$ListView* p_v);
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Int8$GT(void* rawSelf, frost$collections$ListView* p_v);
void frost$io$PushbackInputStream$pushback$frost$core$Char8(void* rawSelf, frost$core$Char8 p_c);
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Char8$GT(void* rawSelf, frost$collections$ListView* p_c);
void frost$io$PushbackInputStream$pushback$frost$core$String(void* rawSelf, frost$core$String* p_s);
void frost$io$PushbackInputStream$cleanup(void* rawSelf);

