#include <iostream>
#include <range/v3/all.hpp>


static auto is_div_by(int n) {
    return [n](int i) -> bool { return 0 == (i % n); };
}

int p1_solution(int limit) {
    auto ints = ranges::view::iota(0, limit+1);
    auto pred1 = is_div_by(3);
    auto pred2 = is_div_by(5);
    auto pipeline = ints | ranges::view::filter([pred1, pred2](int i) -> bool { return (pred1(i) || pred2(i)); });
    return ranges::accumulate(pipeline, 0);
}
/*
int main (int argc, char* argv[]) {
    int limit;
    std::cout << "Please enter the limit: "
              << std::endl;
    std::cin >> limit;

    int result = p1_solution(limit);
    std::cout << "Sum of all numbers divisible by 3 and 5 smaller than "
              << limit
              << ": "
              << result
              << std::endl;
}
*/
