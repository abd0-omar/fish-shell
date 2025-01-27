// The fish parser.
#ifndef FISH_PARSER_H
#define FISH_PARSER_H

#include <stddef.h>

#include <csignal>
#include <cstdint>
#include <deque>
#include <list>
#include <memory>
#include <utility>
#include <vector>

#include "proc.h"

struct Parser;
using parser_t = Parser;
struct ParserRef;

#if INCLUDE_RUST_HEADERS
#include "parser.rs.h"
#else
struct EvalRes;
#endif

using eval_res_t = EvalRes;

#endif
