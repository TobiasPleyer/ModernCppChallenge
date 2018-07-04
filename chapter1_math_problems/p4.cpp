#include "chapter1.hpp"


auto divides(int n) {
    return [n](int i) -> bool { return (0 == (n % i)); };
}


auto divides_not(int n) {
    return [n](int i) -> bool { return (0 != (n % i)); };
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


unsigned int p4_solution(const unsigned int limit) {
    // This is not the most efficient implementation, because we calculate all
    // primes smaller than the limit, even though we just want the biggest of
    // them. Yet this is a neat implementation easy to read and understand.
    auto primes = get_all_primes_smaller(limit);
    // The last element of the vector must be the biggest prime number smaller
    // than limit
    return primes.back();
}
