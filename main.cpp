#include <iostream>
#include "chapter1.hpp"


int main(int argc, char* argv[]) {
    int inp1, inp2, result;
    std::cout << "Chapter 1"
              << std::endl;
    inp1 = 112;
    result = p1_solution(inp1);
    std::cout << "  Problem 1"
              << std::endl
              << "    Input: "
              << inp1
              << std::endl
              << "    Result: "
              << result
              << std::endl;
    inp1 = 90;
    inp2 = 75;
    result = p2_solution(inp1, inp2);
    std::cout << "  Problem 1"
              << std::endl
              << "    Input: "
              << inp1 << ", " << inp2
              << std::endl
              << "    Result: "
              << result
              << std::endl;
}
