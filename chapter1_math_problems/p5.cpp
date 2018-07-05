#include "chapter1.hpp"


sexy_prime_list get_all_sexy_primes_smaller(const unsigned int limit) {
    sexy_prime_list sexy_primes{};
    auto primes = get_all_primes_smaller(limit);
    auto current = primes.begin();
    auto last = primes.end()--;
    for(; current != last; ++current) {
        for (auto next = current; *next <= (*current+6); ++next) {
            if ((*current + 6) == *next) {
                sexy_primes.push_back(std::make_pair(*current, *next));
            }
        }
    }
    return sexy_primes;
}


void p5_solution(const unsigned int limit) {
    auto sexy_primes = get_all_sexy_primes_smaller(limit);

    auto print = [](const std::pair<unsigned int, unsigned int>& p) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    };

    std::for_each(sexy_primes.begin(), sexy_primes.end(), print);
}
