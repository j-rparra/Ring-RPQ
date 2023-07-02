
#ifndef CONFIG_BWT
#define CONFIG_BWT

#include <set>
#include <map>
#include <tuple>
#include <vector>

#include <sdsl/suffix_arrays.hpp>
#include <sdsl/vectors.hpp>
#include <sdsl/bit_vectors.hpp>
#include <sdsl/wavelet_trees.hpp>
#include <sdsl/wt_algorithm.hpp>
#include <sdsl/init_array.hpp>

using namespace sdsl;
using namespace std;
 
uint64_t TIME_OUT = 0;     // timeout for queries in seconds, 0 for no timeout
bool OUTPUT_PAIRS = true; // if true, -o also saves the pairs obtained


typedef std::tuple<uint32_t, uint32_t, uint32_t> spo_triple;
//typedef sdsl::wm_int<bit_vector, rank_support_v<>, select_support_mcl<>, select_support_mcl<>> bwt_type;
typedef sdsl::wm_int<bit_vector> bwt_type;

typedef sdsl::bit_vector C_type;
typedef sdsl::rank_support_v<> C_rank_type;
typedef sdsl::select_support_mcl<> C_select_type;
typedef sdsl::select_support_mcl<0> C_select0_type;

#endif
