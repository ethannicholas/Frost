#pragma once

#include "assert.h"
#include <string>

typedef std::string String;

#define ASSERT assert

#define WARN_UNUSED __attribute__((warn_unused_result))
