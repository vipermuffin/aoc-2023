//
//  Advent of Code 2023 Tests: Day 2
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/01/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day02.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay02{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay02;

TEST(Y2023_SolveDay2, FinalSolutionPartA) {
    EXPECT_EQ("2679", solvea());
}

TEST(Y2023_SolveDay2, FinalSolutionPartB) {
    EXPECT_EQ("77607", solveb());
}

TEST(Y2023_Day2Example,Test1) {
    string x = "Game 1: 3 blue, 4 red; 1 red, 2 green, 6 blue; 2 green";
    auto result = parseGame(x);
    ASSERT_EQ(3,result.size());
    EXPECT_EQ("3 blue, 4 red",result[0]);
    EXPECT_EQ("1 red, 2 green, 6 blue",result[1]);
    EXPECT_EQ("2 green",result[2]);
    
    auto result2 = parseRound(result[0]);
    ASSERT_EQ(2,result2.size());
    EXPECT_EQ(3,result2["blue"]);
    EXPECT_EQ(4,result2["red"]);
}

TEST(Y2023_Day2Example,Test2) {
    string x = "Game 1: 3 blue, 4 red; 1 red, 2 green, 6 blue; 2 green";
    auto rounds = parseGame(x);
    unordered_map<string, int>totals {
        {"red",12},
        {"green",13},
        {"blue", 14}
    };
    
    EXPECT_TRUE(validateGame(totals, rounds));
}

TEST(Y2023_Day2Example,Test3) {
    string x = "Game 3: 8 green, 6 blue, 20 red; 5 blue, 4 red, 13 green; 5 green, 1 red";
    auto rounds = parseGame(x);
    unordered_map<string, int>totals {
        {"red",12},
        {"green",13},
        {"blue", 14}
    };
    
    EXPECT_FALSE(validateGame(totals, rounds));
}

TEST(Y2023_Day2Example,Test4) {
    string x = "Game 1: 3 blue, 4 red; 1 red, 2 green, 6 blue; 2 green";
    auto rounds = parseGame(x);
    unordered_map<string, int>totals {
        {"red",12},
        {"green",13},
        {"blue", 14}
    };
    
    EXPECT_EQ(48,calculateGameMinPower(x));
}
