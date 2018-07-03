#include <cmath>
#include <iostream>


int p2_solution(const int a, const int b) {
    int c_a, c_b, tmp;
    float div;
    tmp = 0;
    c_a = std::min(a, b);
    c_b = std::max(a, b);
    while ( (c_b % c_a) != 0 ) {
        div = c_b / c_a;
        tmp = c_b;
        c_b = c_a;
        c_a = tmp - c_a * std::floor(div);
    }
    return c_a;
}
/*
int main (int argc, char* argv[]) {
    int a, b;
    std::cout << "Please enter first number: ";
    std::cin >> a;
    std::cout << "Please enter second number: ";
    std::cin >> b;

    int result = p2_solution(a, b);
    std::cout << "The greatest common divisor of "
              << a
              << " and "
              << b
              << " is "
              << result
              << std::endl;
}
*/
