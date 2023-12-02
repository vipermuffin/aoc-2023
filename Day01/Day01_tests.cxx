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
    EXPECT_EQ("55130", solvea());
}

TEST(Y2023_SolveDay1, FinalSolutionPartB) {
    EXPECT_EQ("54985", solveb());
}

TEST(Y2023_Day1Example,Test1) {
    EXPECT_EQ(12, getCalibrationValue("1abc2"));
    EXPECT_EQ(38, getCalibrationValue("pqr3stu8vwx"));
    EXPECT_EQ(15, getCalibrationValue("a1b2c3d4e5f"));
    EXPECT_EQ(77, getCalibrationValue("treb7uchet"));
}

TEST(Y2023_Day1Example,Test2) {
    EXPECT_EQ(29, getCalibrationValue("two1nine", true));
    EXPECT_EQ(83, getCalibrationValue("eightwothree", true));
    EXPECT_EQ(13, getCalibrationValue("abcone2threexyz", true));
    EXPECT_EQ(24, getCalibrationValue("xtwone3four", true));
    EXPECT_EQ(42, getCalibrationValue("4nineeightseven2", true));
    EXPECT_EQ(14, getCalibrationValue("zoneight234", true));
    EXPECT_EQ(76, getCalibrationValue("7pqrstsixteen", true));
}
