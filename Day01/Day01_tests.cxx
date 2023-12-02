//
//  Advent of Code 2023 Tests: Day 1
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/01/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day01.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay01{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay01;

TEST(Y2023_SolveDay1, FinalSolutionPartA) {
    EXPECT_EQ("---", solvea());
}

TEST(Y2023_SolveDay1, FinalSolutionPartB) {
    EXPECT_EQ("---", solveb());
}

TEST(Y2023_Day1Example,Test1) {
    int x = 0;
    EXPECT_EQ(0,x);
}

TEST(Y2023_Day1Example,Test2) {
    int x = 0;
    EXPECT_EQ(0,x);
}

TEST(Y2023_Day1Example,Test3) {
    int x = 0;
    EXPECT_EQ(0,x);
}
