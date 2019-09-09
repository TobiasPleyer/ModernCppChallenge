#include "chapter1.hpp"
#include <bitset>


unsigned int encode_gray(unsigned int const value)
{
    return value ^ (value >> 1);
}


unsigned int decode_gray(unsigned int value)
{
    for (unsigned int bit = 1U << 32; bit > 1; bit >>= 1)
    {
        if (value & bit)
        {
            value ^= bit >> 1;
        }
    }
    return value;
}

std::string to_binary(unsigned int value, int const digits)
{
    return std::bitset<32>(value).to_string().substr(32-digits,digits);
}


void p10_solution() {
    std::cout << "Number\tBinary\tGray\tDecoded"
              << std::endl
              << "------\t------\t----\t-------"
              << std::endl;
    for (unsigned int i=0; i<32; ++i)
    {
        auto encoded = encode_gray(i);
        auto decoded = decode_gray(encoded);
        std::cout << i << "\t"
                  << to_binary(i, 5) << "\t"
                  << to_binary(encoded, 5) << "\t"
                  << decoded << "\t"
                  << std::endl;
    }
}
