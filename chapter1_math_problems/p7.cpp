#include "chapter1.hpp"


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
    for(auto const& p: amicable_numbers) {
        print_pair<>(p);
    }
}
