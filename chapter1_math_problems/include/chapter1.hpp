#ifndef CHAPTER1_HPP
#define CHAPTER1_HPP
#include <algorithm>
#include <cmath>
#include <cstdarg>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <numeric>
#include <utility>
#include <vector>
#include <range/v3/all.hpp>


// Typedefs
using sexy_prime_list = std::vector<std::pair<unsigned int, unsigned int>>;

// Common functions for reuse
std::function<bool(int)> is_div_by(int n);
std::function<bool(int)> is_not_div_by(int n);
unsigned int gcd(const unsigned int, const unsigned int);
unsigned int lcm(const unsigned int, const unsigned int);
std::vector<unsigned int> get_all_primes_smaller(const unsigned int limit);
sexy_prime_list get_all_sexy_primes_smaller(const unsigned int limit);
std::vector<unsigned int> get_proper_divisors(const unsigned int number);
std::vector<unsigned int> get_digits(const unsigned int number);
int abundance(const unsigned int number);
bool is_abundant(const unsigned int number);
unsigned int divisor_sum(const unsigned int n);


template<typename Fst, typename Snd>
void print_pair(std::pair<Fst,Snd> pair) {
    std::cout << "("
              << pair.first
              << ", "
              << pair.second
              << ") ";
}

// Solution functions
int p1_solution(const int);
unsigned int p2_solution(const unsigned int, const unsigned int);
unsigned int p3_solution(int, ...);
unsigned int p3_solution_v2(const std::vector<unsigned int>);
unsigned int p4_solution(const unsigned int limit);
void p5_solution(const unsigned int limit);
void p6_solution(const unsigned int limit);
void p7_solution(const unsigned int limit);
void p8_solution(const unsigned int limit);
void p9_solution(const unsigned int limit);

#endif
