//
//  Advent of Code 2023 Tests: Day 11
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/11/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day11.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay11{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay11;

TEST(Y2023_SolveDay11, FinalSolutionPartA) {
    EXPECT_EQ("9274989", solvea());
}

TEST(Y2023_SolveDay11, FinalSolutionPartB) {
    EXPECT_EQ("357134560737", solveb());
}

TEST(Y2023_Day11Example,Test1) {
    vector<string> input {
        "...#......",
        ".......#..",
        "#.........",
        "..........",
        "......#...",
        ".#........",
        ".........#",
        "..........",
        ".......#..",
        "#...#.....",
    };
    auto result = getGalaxyCoordWithExpansion(input);
    ASSERT_EQ(9,result.size());
    Coord tmp{0};
    tmp.all = result[0];
    EXPECT_EQ(4,X(tmp));
    EXPECT_EQ(0,Y(tmp));
    tmp.all = result[1];
    EXPECT_EQ(9,X(tmp));
    EXPECT_EQ(1,Y(tmp));
    tmp.all = result[2];
    EXPECT_EQ(0,X(tmp));
    EXPECT_EQ(2,Y(tmp));
    tmp.all = result[3];
    EXPECT_EQ(8,X(tmp));
    EXPECT_EQ(5,Y(tmp));
    tmp.all = result[4];
    EXPECT_EQ(1,X(tmp));
    EXPECT_EQ(6,Y(tmp));
}

TEST(Y2023_Day11Example,Test2) {
    vector<string> input {
        "...#......",
        ".......#..",
        "#.........",
        "..........",
        "......#...",
        ".#........",
        ".........#",
        "..........",
        ".......#..",
        "#...#.....",
    };
    auto g = getGalaxyCoordWithExpansion(input);
    EXPECT_EQ(374,sumOfAllDistances(g));
}

TEST(Y2023_Day11Example,Test3) {
    vector<string> input {
        "...#......",
        ".......#..",
        "#.........",
        "..........",
        "......#...",
        ".#........",
        ".........#",
        "..........",
        ".......#..",
        "#...#.....",
    };
    auto g = getGalaxyCoordWithExpansion(input,10-1);
    EXPECT_EQ(1030,sumOfAllDistances(g));
}

TEST(Y2023_Day11Example,Test4) {
    vector<string> input {
        "...#......",
        ".......#..",
        "#.........",
        "..........",
        "......#...",
        ".#........",
        ".........#",
        "..........",
        ".......#..",
        "#...#.....",
    };
    auto g = getGalaxyCoordWithExpansion(input,100-1);
    EXPECT_EQ(8410,sumOfAllDistances(g));
}
