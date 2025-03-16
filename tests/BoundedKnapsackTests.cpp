#include <gtest/gtest.h>
#include "BoundedKnapsack.h"

TEST(BoundedKnapsackTest, BasicCase)
{
    std::vector<int> weights = {1, 2, 3};
    std::vector<int> bonuses = {3, 6, 9};
    std::vector<int> limits = {1, 1, 1};
    int capacity = 7;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 18);
}

TEST(BoundedKnapsackTest, SingleItemFits)
{
    std::vector<int> weights = {5};
    std::vector<int> bonuses = {10};
    std::vector<int> limits = {1};
    int capacity = 11;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 10);
}

TEST(BoundedKnapsackTest, NoItems)
{
    std::vector<int> weights = {};
    std::vector<int> bonuses = {};
    std::vector<int> limits = {};
    int capacity = 10;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 0);
}

TEST(BoundedKnapsackTest, ZeroCapacity)
{
    std::vector<int> weights = {1, 2, 3};
    std::vector<int> bonuses = {3, 6, 9};
    std::vector<int> limits = {1, 1, 1};
    int capacity = 0;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 0);
}

TEST(BoundedKnapsackTest, ExactMatch)
{
    std::vector<int> weights = {2, 3, 5};
    std::vector<int> bonuses = {10, 20, 30};
    std::vector<int> limits = {1, 1, 1};
    int capacity = 5;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 30);
}

TEST(BoundedKnapsackTest, OptimalSelection)
{
    std::vector<int> weights = {3, 4, 5};
    std::vector<int> bonuses = {30, 50, 60};
    std::vector<int> limits = {1, 2, 1};
    int capacity = 8;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 100);
}

TEST(BoundedKnapsackTest, LargeNumbers)
{
    std::vector<int> weights = {10, 20, 30, 40, 50};
    std::vector<int> bonuses = {100, 200, 300, 400, 500};
    std::vector<int> limits = {2, 2, 2, 2, 2};
    int capacity = 100;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 1000);
}

TEST(BoundedKnapsackTest, ManySmallItems)
{
    std::vector<int> weights(100, 1);
    std::vector<int> bonuses(100, 1);
    std::vector<int> limits(100, 1);
    int capacity = 50;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 50);
}

TEST(BoundedKnapsackTest, WeightsEqualBonuses)
{
    std::vector<int> weights = {2, 4, 6};
    std::vector<int> bonuses = {2, 4, 6};
    std::vector<int> limits = {1, 1, 1};
    int capacity = 14;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 12);
}

TEST(BoundedKnapsackTest, OneItemDominates)
{
    std::vector<int> weights = {1, 2, 3};
    std::vector<int> bonuses = {1, 10, 2};
    std::vector<int> limits = {1, 1, 1};
    int capacity = 5;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 12);
}

TEST(BoundedKnapsackTest, PerformanceTest)
{
    int n = 1000;
    std::vector<int> weights(n);
    std::vector<int> bonuses(n);
    std::vector<int> limits(n, 1);
    for (int i = 0; i < n; ++i)
    {
        weights[i] = (i % 10) + 1;
        bonuses[i] = (i % 20) + 5;
    }
    int capacity = 500;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_GE(knapsack.get_max_knapsack_bonus(), 3324);
}

TEST(BoundedKnapsackTest, SmallestCase)
{
    std::vector<int> weights = {1};
    std::vector<int> bonuses = {1};
    std::vector<int> limits = {1};
    int capacity = 1;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 1);
}

TEST(BoundedKnapsackTest, LimitOnSingleItem)
{
    std::vector<int> weights = {2, 3, 4};
    std::vector<int> bonuses = {3, 14, 8};
    std::vector<int> limits = {5, 1, 3};
    int capacity = 10;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 25);
}

TEST(BoundedKnapsackTest, AllItemsSameWeightAndBonus)
{
    std::vector<int> weights = {2, 2, 2};
    std::vector<int> bonuses = {3, 3, 3};
    std::vector<int> limits = {1, 1, 1};
    int capacity = 4;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 6);
}

TEST(BoundedKnapsackTest, LimitExceedsCapacity)
{
    std::vector<int> weights = {2, 3, 4};
    std::vector<int> bonuses = {3, 6, 8};
    std::vector<int> limits = {3, 2, 4};
    int capacity = 5;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 9);
}

TEST(BoundedKnapsackTest, ItemLimitIncreasesBonus)
{
    std::vector<int> weights = {3, 4};
    std::vector<int> bonuses = {10, 15};
    std::vector<int> limits = {2, 1};
    int capacity = 6;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 20);
}

TEST(BoundedKnapsackTest, NoItemsCanBeTakenDueToLimits)
{
    std::vector<int> weights = {5, 7};
    std::vector<int> bonuses = {10, 15};
    std::vector<int> limits = {0, 0};
    int capacity = 10;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 0);
}

TEST(BoundedKnapsackTest, LimitAndCapacityBalance)
{
    std::vector<int> weights = {2, 3, 5};
    std::vector<int> bonuses = {4, 5, 9};
    std::vector<int> limits = {2, 2, 2};
    int capacity = 6;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 10);
}

TEST(BoundedKnapsackTest, SingleItemLimitReachesCapacity)
{
    std::vector<int> weights = {4};
    std::vector<int> bonuses = {6};
    std::vector<int> limits = {3};
    int capacity = 12;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 18);
}

TEST(BoundedKnapsackTest, FullCapacityWithItemLimits)
{
    std::vector<int> weights = {1, 2, 3};
    std::vector<int> bonuses = {2, 4, 6};
    std::vector<int> limits = {2, 1, 1};
    int capacity = 7;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 14);
}

TEST(BoundedKnapsackTest, LargeLimitsButLimitedCapacity)
{
    std::vector<int> weights = {1, 2, 3};
    std::vector<int> bonuses = {5, 10, 15};
    std::vector<int> limits = {100, 100, 100};
    int capacity = 4;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 20);
}

TEST(BoundedKnapsackTest, LimitsImpactOnMultipleItems)
{
    std::vector<int> weights = {1, 2, 3, 4};
    std::vector<int> bonuses = {2, 4, 6, 8};
    std::vector<int> limits = {2, 3, 1, 4};
    int capacity = 10;
    BoundedKnapsack knapsack(capacity, weights, bonuses, limits);
    EXPECT_EQ(knapsack.get_max_knapsack_bonus(), 20);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}