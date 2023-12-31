//
//  Advent of Code 2023 Tests: Day 19
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/27/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day19.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay19{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay19;

TEST(Y2023_SolveDay19, FinalSolutionPartA) {
    EXPECT_EQ("376008", solvea());
}

TEST(Y2023_SolveDay19, FinalSolutionPartB) {
    EXPECT_EQ("---", solveb());
}

TEST(Y2023_Day19Example,Test1) {
    int x = 0;
    EXPECT_EQ(0,x);
}

TEST(Y2023_Day19Example,Test2) {
    int x = 0;
    EXPECT_EQ(0,x);
}

TEST(Y2023_Day19Example,Test3) {
    int x = 0;
    EXPECT_EQ(0,x);
}
