#include <iostream>
#include "chapter1.hpp"


int main(int argc, char* argv[]) {
    {
        int inp1, result;
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
    }
    {
        unsigned int inp1, inp2, result;
        inp1 = 90;
        inp2 = 75;
        result = p2_solution(inp1, inp2);
        std::cout << "  Problem 2"
                  << std::endl
                  << "    Input: "
                  << inp1 << ", " << inp2
                  << std::endl
                  << "    Result: "
                  << result
                  << std::endl;
    }
    {
        unsigned int inp1, inp2, inp3, inp4, result;
        inp1 = 5;
        inp2 = 15;
        inp3 = 7;
        inp4 = 22;
        result = p3_solution(4, inp1, inp2, inp3, inp4);
        std::cout << "  Problem 3"
                  << std::endl
                  << "    Input: "
                  << inp1 << ", " << inp2 << ", " << inp3 << ", " << inp4
                  << std::endl
                  << "    Result: "
                  << result
                  << std::endl;
    }
    {
        unsigned int result;
        std::vector<unsigned int> inp1{5, 15, 7, 22};
        result = p3_solution_v2(inp1);
        std::cout << "  Problem 3"
                  << std::endl
                  << "    Input: "
                  << "{5, 15, 7, 22}"
                  << std::endl
                  << "    Result: "
                  << result
                  << std::endl;
    }
    {
        int inp1, result;
        inp1 = 1062;
        std::cout << "Chapter 1"
                  << std::endl;
        result = p4_solution(inp1);
        std::cout << "  Problem 4"
                  << std::endl
                  << "    Input: "
                  << inp1
                  << std::endl
                  << "    Result: "
                  << result
                  << std::endl;
    }
    {
        int inp1;
        inp1 = 1500;
        std::cout << "Chapter 1"
                  << std::endl;
        std::cout << "  Problem 5"
                  << std::endl
                  << "    Input: "
                  << inp1
                  << std::endl
                  << "    Result: ";
        p5_solution(inp1);
        std::cout << std::endl;
    }
    {
        int inp1;
        inp1 = 150;
        std::cout << "Chapter 1"
                  << std::endl;
        std::cout << "  Problem 6"
                  << std::endl
                  << "    Input: "
                  << inp1
                  << std::endl
                  << "    Result: ";
        p6_solution(inp1);
        std::cout << std::endl;
    }
}
