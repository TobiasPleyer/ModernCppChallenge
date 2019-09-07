#include "chapter1.hpp"


void p5_solution(const unsigned int limit) {
    auto sexy_primes = get_all_sexy_primes_smaller(limit);

    auto print = [](const std::pair<unsigned int, unsigned int>& p) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    };

    std::for_each(sexy_primes.begin(), sexy_primes.end(), print);
}
