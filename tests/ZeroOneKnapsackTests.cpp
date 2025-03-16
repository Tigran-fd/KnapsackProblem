#include <gtest/gtest.h>
#include "ZeroOneKnapsack.h"

TEST(ZeroOneKnapsackTest, BasicCase)
{
    std::vector<int> weights = {1, 2, 3};
    std::vector<int> bonuses = {3, 6, 9};
    int capacity = 7;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 18);
}

TEST(ZeroOneKnapsackTest, SingleItemFits)
{
    std::vector<int> weights = {5};
    std::vector<int> bonuses = {10};
    int capacity = 11;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 10);
}

TEST(ZeroOneKnapsackTest, NoItems)
{
    std::vector<int> weights = {};
    std::vector<int> bonuses = {};
    int capacity = 10;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 0);
}

TEST(ZeroOneKnapsackTest, ZeroCapacity)
{
    std::vector<int> weights = {1, 2, 3};
    std::vector<int> bonuses = {3, 6, 9};
    int capacity = 0;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 0);
}

TEST(ZeroOneKnapsackTest, ExactMatch)
{
    std::vector<int> weights = {2, 3, 5};
    std::vector<int> bonuses = {10, 20, 30};
    int capacity = 5;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 30);
}

TEST(ZeroOneKnapsackTest, OptimalSelection)
{
    std::vector<int> weights = {3, 4, 5};
    std::vector<int> bonuses = {30, 40, 50};
    int capacity = 8;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 80);
}

TEST(ZeroOneKnapsackTest, LargeNumbers)
{
    std::vector<int> weights = {10, 20, 30, 40, 50};
    std::vector<int> bonuses = {100, 200, 300, 400, 500};
    int capacity = 100;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 1000);
}

TEST(ZeroOneKnapsackTest, ManySmallItems)
{
    std::vector<int> weights(100, 1);
    std::vector<int> bonuses(100, 1);
    int capacity = 50;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 50);
}

TEST(ZeroOneKnapsackTest, WeightsEqualBonuses)
{
    std::vector<int> weights = {2, 4, 6};
    std::vector<int> bonuses = {2, 4, 6};
    int capacity = 20;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 12);
}

TEST(ZeroOneKnapsackTest, OneItemDominates)
{
    std::vector<int> weights = {1, 2, 3};
    std::vector<int> bonuses = {1, 10, 2};
    int capacity = 5;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 12);
}

TEST(ZeroOneKnapsackTest, PerformanceTest) {
    int n = 1000;
    std::vector<int> weights(n);
    std::vector<int> bonuses(n);
    for (int i = 0; i < n; ++i)
    {
        weights[i] = (i % 10) + 1;
        bonuses[i] = (i % 20) + 5;
    }
    int capacity = 500;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 3324);
}

TEST(ZeroOneKnapsackTest, IdenticalItems)
{
    std::vector<int> weights = {3, 3, 3};
    std::vector<int> bonuses = {5, 5, 5};
    int capacity = 6;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 10);
}

TEST(ZeroOneKnapsackTest, SingleItemFills)
{
    std::vector<int> weights = {5, 10, 15};
    std::vector<int> bonuses = {15, 20, 30};
    int capacity = 10;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 20);
}

TEST(ZeroOneKnapsackTest, BestValueSelection)
{
    std::vector<int> weights = {2, 3, 5};
    std::vector<int> bonuses = {10, 15, 20};
    int capacity = 5;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 25);
}

TEST(ZeroOneKnapsackTest, SmallestCase)
{
    std::vector<int> weights = {1};
    std::vector<int> bonuses = {1};
    int capacity = 1;
    ZeroOneKnapsack knapsack(capacity, weights, bonuses);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 1);
}
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}