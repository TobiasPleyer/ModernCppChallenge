#include "chapter1.hpp"


unsigned int divisor_sum(const unsigned int n) {
    auto proper_divisors = get_proper_divisors(n);
    return (unsigned int)std::accumulate(proper_divisors.begin(), proper_divisors.end(), 0);
}


void p7_solution(const unsigned int limit) {
    std::vector<std::pair<unsigned int,unsigned int>> amicable_numbers{};
    for(unsigned int n=1; n <= limit; ++n) {
        unsigned int m = divisor_sum(n);
        if (m == n) {
            continue;
        }
        unsigned int sum_m = divisor_sum(m);
        if (n == sum_m) {
            auto pair = std::make_pair(n,m);
            auto mirror_pair = std::make_pair(m,n);
            if (std::find(amicable_numbers.begin(), amicable_numbers.end(), mirror_pair) == amicable_numbers.end()) {
                amicable_numbers.push_back(pair);
            }
        }
    }
    for(auto p: amicable_numbers) {
        print_pair<unsigned int,unsigned int>(p);
    }
}
