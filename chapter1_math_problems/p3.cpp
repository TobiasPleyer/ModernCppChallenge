#include "chapter1.hpp"


unsigned int p3_solution(int argc, ...) {
    va_list numbers;
    int seen;
    unsigned int multiple, n;

    va_start(numbers, argc);
    multiple = va_arg(numbers, unsigned int);
    seen = 1;
    while (seen < argc) {
        n = va_arg(numbers, unsigned int);
        multiple = lcm(multiple, n);
        seen++;
    }
    va_end(numbers);
    return multiple;
}


unsigned int p3_solution_v2(const std::vector<unsigned int> numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 1, lcm);
}
