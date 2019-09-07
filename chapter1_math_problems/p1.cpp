#include "chapter1.hpp"


int p1_solution(const int limit) {
    auto ints = ranges::view::iota(0, limit+1);
    auto pred1 = is_div_by(3);
    auto pred2 = is_div_by(5);
    auto pipeline = ints | ranges::view::filter([pred1, pred2](int i) -> bool { return (pred1(i) || pred2(i)); });
    return ranges::accumulate(pipeline, 0);
}
