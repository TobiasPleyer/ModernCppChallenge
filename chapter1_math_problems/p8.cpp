#include "chapter1.hpp"
#include <cmath>
#include <numeric>


void p8_solution(const unsigned int limit) {
    std::vector<unsigned int> armstrong_numbers{};
    for(unsigned int n=100; n <= limit; ++n) {
        auto&& digits = get_digits(n);
        unsigned int l = digits.size();
        auto s = static_cast<unsigned int>(std::accumulate(digits.begin(), digits.end(), 0, [&l](unsigned int acc, unsigned int e)
        {
            return acc + static_cast<unsigned int>(std::pow(static_cast<float>(e), static_cast<float>(l)));
        }));
        if (s == n)
        {
            armstrong_numbers.push_back(n);
        }
    }
    std::cout << "Armstrong numbers <" << limit << ":" << std::endl;
    for(auto const& n: armstrong_numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}
