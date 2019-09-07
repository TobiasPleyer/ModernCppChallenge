#include "chapter1.hpp"
#include <cmath>
#include <numeric>


void p9_solution(const unsigned int limit) {
    std::cout << "Prime factors of " << limit << ":" << std::endl;
    auto ds = get_proper_divisors(limit);
    for(auto const& d: ds) {
        std::cout << d << " ";
    }
    std::cout << std::endl;
}
