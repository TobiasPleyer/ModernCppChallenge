#include "chapter1.hpp"


void p6_solution(const unsigned int limit) {
    auto ints = ranges::view::iota(1, (int)limit);
    auto abundant_numbers = ints | ranges::view::transform([](int i){return std::make_pair(i, abundance(i));})
                                 | ranges::view::filter([](std::pair<unsigned int,int> p){return (p.second > 0);});
    for(auto p: abundant_numbers) {
        print_pair<unsigned int,int>(p);
    }
}
