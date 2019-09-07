#include "chapter1.hpp"


std::function<bool(int)> is_div_by(int n) {
    return [n](int i) -> bool { return (0 == (i % n)); };
}


std::function<bool(int)> is_not_div_by(int n) {
    return [n](int i) -> bool { return (0 != (i % n)); };
}


std::function<bool(int)> divides(int n) {
    return [n](int i) -> bool { return (0 == (n % i)); };
}


std::function<bool(int)> divides_not(int n) {
    return [n](int i) -> bool { return (0 != (n % i)); };
}


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


unsigned int lcm(const unsigned int a, const unsigned int b) {
    return (a * b) / gcd(a, b);
}


std::vector<unsigned int> get_all_primes_smaller(const unsigned int limit) {
    std::vector<unsigned int> primes{};

    // Corner case
    if (limit <= 2) {
        // Empty - there are no primes smaller 2
        return primes;
    }

    // Common case
    unsigned int n=3;
    primes.push_back(2);

    while (n < limit) {
        if ( std::none_of(primes.begin(), primes.end(), divides(n)) ) {
            // This number must be a new prime
            primes.push_back(n);
        }
        n++;
    }
    return primes;
}


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


std::vector<unsigned int> get_proper_divisors(const unsigned int number) {
    std::vector<unsigned int> divisors{};
    unsigned int limit = number / 2;
    for(unsigned int i=1; i<=limit; ++i) {
        if ((number % i) == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}


std::vector<unsigned int> get_digits(const unsigned int number)
{
    std::vector<unsigned int> digits{};
    int n = number;
    while(n>0)
    {
        auto [quot, rem] = div(n, 10);
        digits.push_back(rem);
        n = quot;
    };
    std::reverse(digits.begin(), digits.end());
    return digits;
}


int abundance(const unsigned int number) {
    auto divisors = get_proper_divisors(number);
    const unsigned int divisor_sum = std::accumulate(divisors.begin(), divisors.end(), 0);
    return (divisor_sum - number);
}


bool is_abundant(const unsigned int number) {
    return (abundance(number) > 0);
}


unsigned int divisor_sum(const unsigned int n) {
    auto proper_divisors = get_proper_divisors(n);
    return (unsigned int)std::accumulate(proper_divisors.begin(), proper_divisors.end(), 0);
}
