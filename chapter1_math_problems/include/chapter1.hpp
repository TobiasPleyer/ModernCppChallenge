#ifndef CHAPTER1_HPP
#define CHAPTER1_HPP
#include <algorithm>
#include <cmath>
#include <cstdarg>
#include <iostream>
#include <numeric>
#include <utility>
#include <vector>
#include <range/v3/all.hpp>


// Typedefs
typedef std::vector<std::pair<unsigned int, unsigned int>> sexy_prime_list;

// Common functions for reuse
auto is_div_by(int n);
auto is_not_div_by(int n);
unsigned int gcd(const unsigned int, const unsigned int);
unsigned int lcm(const unsigned int, const unsigned int);
std::vector<unsigned int> get_all_primes_smaller(const unsigned int limit);
sexy_prime_list get_all_sexy_primes_smaller(const unsigned int limit);
std::vector<unsigned int> get_proper_divisors(const unsigned int number);
int abundance(const unsigned int number);
bool is_abundant(const unsigned int number);

// Solution functions
int p1_solution(const int);
unsigned int p2_solution(const unsigned int, const unsigned int);
unsigned int p3_solution(int, ...);
unsigned int p3_solution_v2(const std::vector<unsigned int>);
unsigned int p4_solution(const unsigned int limit);
void p5_solution(const unsigned int limit);
void p6_solution(const unsigned int limit);

#endif
