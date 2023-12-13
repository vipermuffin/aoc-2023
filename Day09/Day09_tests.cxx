//
//  Advent of Code 2023 Tests: Day 9
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/10/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day09.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay09{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay09;

TEST(Y2023_SolveDay9, FinalSolutionPartA) {
    EXPECT_EQ("1930746032", solvea());
}

TEST(Y2023_SolveDay9, FinalSolutionPartB) {
    EXPECT_EQ("1154", solveb());
}

TEST(Y2023_Day9Example,Test1) {
    vector<int64_t> x {0,3,6,9,12,15};
    EXPECT_EQ(18,findNextValueForSequence(x));
}

TEST(Y2023_Day9Example,Test2) {
    string input{"1 3 6 10 15 21"};
    auto x = parseLineForNumbersOfTypeT<int64_t>(input);
    EXPECT_EQ(28,findNextValueForSequence(x));
    
    input = "10 13 16 21 30 45";
    x = parseLineForNumbersOfTypeT<int64_t>(input);
    EXPECT_EQ(68,findNextValueForSequence(x));
}

TEST(Y2023_Day9Example,Test3) {
    vector<int64_t> x {0,3,6,9,12,15};
    EXPECT_EQ(-3,findNextValueForSequence(x, true));
    
    string input{"1 3 6 10 15 21"};
    x = parseLineForNumbersOfTypeT<int64_t>(input);
    EXPECT_EQ(0,findNextValueForSequence(x, true));
    
    input = "10 13 16 21 30 45";
    x = parseLineForNumbersOfTypeT<int64_t>(input);
    EXPECT_EQ(5,findNextValueForSequence(x, true));
}
