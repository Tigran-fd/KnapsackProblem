cmake_minimum_required(VERSION 3.0)
project(KnapsackProblem)

set(CMAKE_CXX_STANDARD 14)

find_package(GTest REQUIRED)

include_directories(include)

set(SOURCE_FILES
        src/main.cpp
)

set(TEST_FILES
        tests/UnboundedKnapsackTests.cpp
        tests/ZeroOneKnapsackTests.cpp
        tests/BoundedKnapsackTests.cpp
)

add_executable(KnapsackProblem ${SOURCE_FILES})

add_executable(TestsUnbounded tests/UnboundedKnapsackTests.cpp)
add_executable(TestsZeroOne tests/ZeroOneKnapsackTests.cpp)
add_executable(TestsBounded tests/BoundedKnapsackTests.cpp)

target_link_libraries(TestsUnbounded PRIVATE GTest::GTest GTest::Main pthread)
target_link_libraries(TestsZeroOne PRIVATE GTest::GTest GTest::Main pthread)
target_link_libraries(TestsBounded PRIVATE GTest::GTest GTest::Main pthread)

add_test(NAME UnboundedKnapsackTests COMMAND TestsUnbounded)
add_test(NAME ZeroOneKnapsackTests COMMAND TestsZeroOne)
add_test(NAME BoundedKnapsackTests COMMAND TestsBounded)
