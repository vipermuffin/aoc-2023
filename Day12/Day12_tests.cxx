//
//  Advent of Code 2023 Tests: Day 12
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/12/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day12.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>
#include "AoCUtils.h"
namespace AocDay12{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay12;

TEST(Y2023_SolveDay12, FinalSolutionPartA) {
    EXPECT_EQ("6852", solvea());
}

TEST(Y2023_SolveDay12, FinalSolutionPartB) {
    EXPECT_EQ("---", solveb());
}

TEST(Y2023_Day12Example,Test1a) {
    string input{"#.#.###"};
    vector<int> x{1,1,3};
    
    EXPECT_TRUE(verifyConfig(input, x));
    input = ".#...#....###.";
    EXPECT_TRUE(verifyConfig(input, x));
    input = ".#.###.#.######";
    x = {1,3,1,6};
    EXPECT_TRUE(verifyConfig(input, x));
    input = "####.#...#...";
    x = {4,1,1};
    EXPECT_TRUE(verifyConfig(input, x));
    input = "#....######..#####.";
    x = {1,6,5};
    EXPECT_TRUE(verifyConfig(input, x));
    input = ".###.##....#";
    x = {3,2,1};
    EXPECT_TRUE(verifyConfig(input, x));
}
TEST(Y2023_Day12Example,Test1b) {
    string input{"##.#.###"};
    vector<int> x{1,1,3};
    
    EXPECT_FALSE(verifyConfig(input, x));
    input = "#.##.###";
    EXPECT_FALSE(verifyConfig(input, x));
    input = "#.#.##";
    EXPECT_FALSE(verifyConfig(input, x));
}

TEST(Y2023_Day12Example,Test2) {
    string input{"???.### 1,1,3"};
    EXPECT_EQ(1,determineConfigs(input));
    input = ".??..??...?##. 1,1,3";
    EXPECT_EQ(4,determineConfigs(input));
    input = "?#?#?#?#?#?#?#? 1,3,1,6";
    EXPECT_EQ(1,determineConfigs(input));
    input = ".????.#...#... 4,1,1";
    EXPECT_EQ(1,determineConfigs(input));
    input = "????.######..#####. 1,6,5";
    EXPECT_EQ(4,determineConfigs(input));
    input = "?###???????? 3,2,1";
    EXPECT_EQ(10,determineConfigs(input));
}

TEST(Y2023_Day12Example,Test3) {
    vector<bool> x{true,true,true,false,false,false};
    printVector(x);
    std::sort(x.begin(),x.end());
    printVector(x);
    EXPECT_FALSE(x.front());
}
