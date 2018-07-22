#include "chapter1.hpp"


std::vector<unsigned int> get_proper_divisors(const unsigned int number) {
    std::vector<unsigned int> divisors{};
    unsigned int limit = number / 2;
    for(unsigned int i=1; i<=limit; ++i) {
        if ((number % i) == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}


int abundance(const unsigned int number) {
    auto divisors = get_proper_divisors(number);
    const unsigned int divisor_sum = std::accumulate(divisors.begin(), divisors.end(), 0);
    return (divisor_sum - number);
}


bool is_abundant(const unsigned int number) {
    return (abundance(number) > 0);
}


void p6_solution(const unsigned int limit) {
    auto ints = ranges::view::iota(1, (int)limit);
    auto abundant_numbers = ints | ranges::view::transform([](int i){return std::make_pair(i, abundance(i));})
                                 | ranges::view::filter([](std::pair<unsigned int,int> p){return (p.second > 0);});
    for(auto p: abundant_numbers) {
        print_pair<unsigned int,int>(p);
    }
}
