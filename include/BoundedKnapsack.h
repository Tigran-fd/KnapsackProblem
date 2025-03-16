#ifndef BOUNDEDKNAPSACK_H
#define BOUNDEDKNAPSACK_H
#include <vector>
#include <algorithm>

class BoundedKnapsack
{
    int capacity;
    std::vector<int> weights;
    std::vector<int> bonuses;
    std::vector<int> limits;
    std::vector<std::vector<int>> memo;

    int solve(int index, int w)
    {
        if (index == 0 || w == 0)
            return 0;

        if (memo[index][w] != 0)
            return memo[index][w];

        memo[index][w] = solve(index - 1, w);

        for (int k = 1; k <= limits[index - 1]; ++k)
        {
            if (w >= k * weights[index - 1])
            {
                memo[index][w] = std::max(memo[index][w], solve(index - 1, w - k * weights[index - 1]) + k * bonuses[index - 1]);
            }
            else
            {
                break;
            }
        }

        return memo[index][w];
    }

public:
    BoundedKnapsack(int capacity, const std::vector<int>& weights, const std::vector<int>& bonuses, const std::vector<int>& limits):
        capacity(capacity),
        weights(weights),
        bonuses(bonuses),
        limits(limits),
        memo(weights.size() + 1, std::vector<int>(capacity + 1, 0))
    {
        solve(weights.size(), capacity);
    }

    int get_max_knapsack_bonus() const
    {
        return memo[weights.size()][capacity];
    }
};
#endif //BOUNDEDKNAPSACK_H