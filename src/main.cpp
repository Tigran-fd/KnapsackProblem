#include <iostream>
#include "UnboundedKnapsack.h"
#include "ZeroOneKnapsack.h"
#include "BoundedKnapsack.h"
int main()
{
    std::vector<int> weights = {1, 2, 3};
    std::vector<int> bonuses = {3, 6, 9};
    int capacity = 7;

    std::cout
        << "Unbounded Knapsack Bonus: "
        << UnboundedKnapsack(capacity, weights, bonuses).get_max_knapsack_bonus()
        << std::endl;

    std::cout
        << "0-1 Knapsack Bonus: "
        << ZeroOneKnapsack(capacity, weights, bonuses).get_max_knapsack_bonus()
        << std::endl;
    std::vector<int> limits = {2 , 1, 0};
    std::cout
        << "Bounded Knapsack Bonus: "
        << BoundedKnapsack(capacity, weights, bonuses,limits).get_max_knapsack_bonus()
        << std::endl;
}
