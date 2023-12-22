//
//  Advent of Code 2023 Tests: Day 16
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/16/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day16.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay16{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay16;

TEST(Y2023_SolveDay16, FinalSolutionPartA) {
    EXPECT_EQ("7860", solvea());
}

TEST(Y2023_SolveDay16, FinalSolutionPartB) {
    EXPECT_EQ("8331", solveb());
}

TEST(Y2023_Day16Example,Test1) {
    vector<string> input {
        ".|...\\....",
        "|.-.\\.....",
        ".....|-...",
        "........|.",
        "..........",
        ".........\\",
        "..../.\\\\..",
        ".-.-/..|..",
        ".|....-|.\\",
        "..//.|....",
    };
    EXPECT_EQ(46,determineActiveTiles(input));
}

