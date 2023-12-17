//
//  Advent of Code 2023 Tests: Day 15
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/16/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day15.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay15{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay15;

TEST(Y2023_SolveDay15, FinalSolutionPartA) {
    EXPECT_EQ("510388", solvea());
}

TEST(Y2023_SolveDay15, FinalSolutionPartB) {
    EXPECT_EQ("291774", solveb());
}

TEST(Y2023_Day15Example,Test1) {
    string x{"HASH"};
    EXPECT_EQ(52,performHash(x));
    x = "rn=1";
    EXPECT_EQ(30,performHash(x));
    x = "cm-";
    EXPECT_EQ(253,performHash(x));
}

TEST(Y2023_Day15Example,Test2) {
    string x{"rn=1,cm-,qp=3,cm=2,qp-,pc=4,ot=9,ab=5,pc-,pc=6,ot=7"};
    EXPECT_EQ(1320,computeHashes(x));
}

TEST(Y2023_Day15Example,Test3) {
    string x{"rn=1,cm-,qp=3,cm=2,qp-,pc=4,ot=9,ab=5,pc-,pc=6,ot=7"};
    EXPECT_EQ(145,performSequence(x));
}
