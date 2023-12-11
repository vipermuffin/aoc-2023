//
//  Advent of Code 2023 Tests: Day 8
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/08/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day08.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay08{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay08;

TEST(Y2023_SolveDay8, FinalSolutionPartA) {
    EXPECT_EQ("19951", solvea());
}

TEST(Y2023_SolveDay8, FinalSolutionPartB) {
    EXPECT_EQ("---", solveb());
}

TEST(Y2023_Day8Example,Test1) {
    vector<string> input {
        "RL",
        "",
        "AAA = (BBB, CCC)",
        "BBB = (DDD, EEE)",
        "CCC = (ZZZ, GGG)",
        "DDD = (DDD, DDD)",
        "EEE = (EEE, EEE)",
        "GGG = (GGG, GGG)",
        "ZZZ = (ZZZ, ZZZ)"
    };
    auto t = GenerateTree(input);
    EXPECT_EQ("BBB",t["AAA"].first);
    EXPECT_EQ("CCC",t["AAA"].second);
    EXPECT_EQ("ZZZ",t["CCC"].first);
    EXPECT_EQ("GGG",t["CCC"].second);
}

TEST(Y2023_Day8Example,Test2) {
    vector<string> input {
        "RL",
        "",
        "AAA = (BBB, CCC)",
        "BBB = (DDD, EEE)",
        "CCC = (ZZZ, GGG)",
        "DDD = (DDD, DDD)",
        "EEE = (EEE, EEE)",
        "GGG = (GGG, GGG)",
        "ZZZ = (ZZZ, ZZZ)"
    };
    auto t = GenerateTree(input);
    auto result = FindStepsToTarget(t, input[0]);
    EXPECT_EQ(2,result);
}

TEST(Y2023_Day8Example,Test3) {
    vector<string> input {
        "LLR",
        "",
        "AAA = (BBB, BBB)",
        "BBB = (AAA, ZZZ)",
        "ZZZ = (ZZZ, ZZZ)",
    };
    auto t = GenerateTree(input);
    auto result = FindStepsToTarget(t, input[0]);
    EXPECT_EQ(6,result);
}

TEST(Y2023_Day8Example,Test4) {
    vector<string> input {
        "LR",
        "",
        "11A = (11B, XXX)",
        "11B = (XXX, 11Z)",
        "11Z = (11B, XXX)",
        "22A = (22B, XXX)",
        "22B = (22C, 22C)",
        "22C = (22Z, 22Z)",
        "22Z = (22B, 22B)",
        "XXX = (XXX, XXX)",
    };
    auto t = GenerateTree(input);
    auto result = FindStepsToTarget(t, input[0],true);
    EXPECT_EQ(6,result);
}
