//
//  Advent of Code 2023 Tests: Day 6
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/05/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day06.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay06{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay06;

TEST(Y2023_SolveDay6, FinalSolutionPartA) {
    EXPECT_EQ("6209190", solvea());
}

TEST(Y2023_SolveDay6, FinalSolutionPartB) {
    EXPECT_EQ("28545089", solveb());
}

TEST(Y2023_Day6Example,Test1) {
    auto x = calcNumWins(7, 9);
    EXPECT_EQ(4,x);
    x = calcNumWins(7, 9);
    EXPECT_EQ(4,x);
    x = calcNumWins(15, 40);
    EXPECT_EQ(8,x);
    x = calcNumWins(30, 200);
    EXPECT_EQ(9,x);
}

TEST(Y2023_Day6Example,Test2) {
    int x = 0;
    EXPECT_EQ(0,x);
}

TEST(Y2023_Day6Example,Test3) {
    int x = 0;
    EXPECT_EQ(0,x);
}
