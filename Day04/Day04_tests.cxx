//
//  Advent of Code 2023 Tests: Day 4
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/04/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day04.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay04{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay04;

TEST(Y2023_SolveDay4, FinalSolutionPartA) {
    EXPECT_EQ("24175", solvea());
}

TEST(Y2023_SolveDay4, FinalSolutionPartB) {
    EXPECT_EQ("18846301", solveb());
}

TEST(Y2023_Day4Example,Test1) {
    int x = 0;
    EXPECT_EQ(8,scoreCard("Card 1: 41 48 83 86 17 | 83 86  6 31 17  9 48 53"));
    EXPECT_EQ(2,scoreCard("Card 2: 13 32 20 16 61 | 61 30 68 82 17 32 24 19"));
    EXPECT_EQ(2,scoreCard("Card 3:  1 21 53 59 44 | 69 82 63 72 16 21 14  1"));
    EXPECT_EQ(1,scoreCard("Card 4: 41 92 73 84 69 | 59 84 76 51 58  5 54 83"));
    EXPECT_EQ(0,scoreCard("Card 5: 87 83 26 28 32 | 88 30 70 12 93 22 82 36"));
    EXPECT_EQ(0,scoreCard("Card 6: 31 18 13 56 72 | 74 77 10 23 35 67 36 11"));
}

TEST(Y2023_Day4Example,Test1b) {
    int x = 0;
    EXPECT_EQ(4,scoreCard("Card 1: 41 48 83 86 17 | 83 86  6 31 17  9 48 53",false));
    EXPECT_EQ(2,scoreCard("Card 2: 13 32 20 16 61 | 61 30 68 82 17 32 24 19",false));
    EXPECT_EQ(2,scoreCard("Card 3:  1 21 53 59 44 | 69 82 63 72 16 21 14  1",false));
    EXPECT_EQ(1,scoreCard("Card 4: 41 92 73 84 69 | 59 84 76 51 58  5 54 83",false));
    EXPECT_EQ(0,scoreCard("Card 5: 87 83 26 28 32 | 88 30 70 12 93 22 82 36",false));
    EXPECT_EQ(0,scoreCard("Card 6: 31 18 13 56 72 | 74 77 10 23 35 67 36 11",false));
}

TEST(Y2023_Day4Example,Test2) {
    vector<string> x {
        "Card 1: 41 48 83 86 17 | 83 86  6 31 17  9 48 53",
        "Card 2: 13 32 20 16 61 | 61 30 68 82 17 32 24 19",
        "Card 3:  1 21 53 59 44 | 69 82 63 72 16 21 14  1",
        "Card 4: 41 92 73 84 69 | 59 84 76 51 58  5 54 83",
        "Card 5: 87 83 26 28 32 | 88 30 70 12 93 22 82 36",
        "Card 6: 31 18 13 56 72 | 74 77 10 23 35 67 36 11"
    };
    EXPECT_EQ(30,countCards(x));
    
}

