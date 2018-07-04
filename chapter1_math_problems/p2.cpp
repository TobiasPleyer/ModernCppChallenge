#include "chapter1.hpp"


unsigned int gcd(const unsigned int a, const unsigned int b) {
    unsigned int c_a, c_b, tmp;
    tmp = 0;
    c_b = std::max(a, b);
    c_a = std::min(a, b);
    while ( c_a != 0 ) {
        tmp = c_b % c_a;
        c_b = c_a;
        c_a = tmp;
    }
    return c_b;
}


unsigned int p2_solution(const unsigned int a, const unsigned int b) {
    return gcd(a, b);
}
