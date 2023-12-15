//
//  Advent of Code 2023 Tests: Day 13
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/14/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day13.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay13{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay13;

TEST(Y2023_SolveDay13, FinalSolutionPartA) {
    EXPECT_EQ("34772", solvea());
}

TEST(Y2023_SolveDay13, FinalSolutionPartB) {
    EXPECT_EQ("---", solveb());
}

TEST(Y2023_Day13Example,Test1) {
    vector<string> input {
        "#.##..##.",
        "..#.##.#.",
        "##......#",
        "##......#",
        "..#.##.#.",
        "..##..##.",
        "#.#.##.#.",
    };
    auto newInput = transposeImage(input);
    EXPECT_EQ(0,findHorizontalReflection(input));
    EXPECT_EQ(5,findHorizontalReflection(newInput));
}

TEST(Y2023_Day13Example,Test2) {
    vector<string> input {
        "#...##..#",
        "#....#..#",
        "..##..###",
        "#####.##.",
        "#####.##.",
        "..##..###",
        "#....#..#",
    };
    auto newInput = transposeImage(input);
    EXPECT_EQ(4,findHorizontalReflection(input));
    EXPECT_EQ(0,findHorizontalReflection(newInput));
}

TEST(Y2023_Day13Example,Test3) {
    vector<string> input {
        "#.##..##.",
        "..#.##.#.",
        "##......#",
        "##......#",
        "..#.##.#.",
        "..##..##.",
        "#.#.##.#.",
        "",
        "#...##..#",
        "#....#..#",
        "..##..###",
        "#####.##.",
        "#####.##.",
        "..##..###",
        "#....#..#",
    };
    EXPECT_EQ(405,calcReflections(input));
}
