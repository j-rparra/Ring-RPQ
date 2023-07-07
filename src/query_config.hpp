#ifndef QUERY_CONFIG
#define QUERY_CONFIG

#include <chrono>  
using namespace std::chrono;

high_resolution_clock::time_point query_start;
duration<double> time_span;

// type for array D (see the paper)
typedef uint16_t word_t;

// timeout for queries, in seconds

#define VAR_TO_VAR 0
#define VAR_TO_CONST 1
#define CONST_TO_VAR 2

#endif

