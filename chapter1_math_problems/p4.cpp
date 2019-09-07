#include "chapter1.hpp"


unsigned int p4_solution(const unsigned int limit) {
    // This is not the most efficient implementation, because we calculate all
    // primes smaller than the limit, even though we just want the biggest of
    // them. Yet this is a neat implementation easy to read and understand.
    auto primes = get_all_primes_smaller(limit);
    // The last element of the vector must be the biggest prime number smaller
    // than limit
    return primes.back();
}
