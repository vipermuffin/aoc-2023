//
//  Advent of Code 2023 Tests: Day 20
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/21/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day20.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay20{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay20;

TEST(Y2023_SolveDay20, FinalSolutionPartA) {
    EXPECT_EQ("861743850", solvea());
}

TEST(Y2023_SolveDay20, FinalSolutionPartB) {
//    EXPECT_EQ("---", solveb());
}

TEST(Y2023_Day20Example,Test1) {
    bitset<MOD_BITS> x{0};
    FlipFlop ff{1};
    ff.addOutputConnection(2);
    ff.addOutputConnection(3);
    auto result = ff.receivePulse(0, x);
    ASSERT_EQ(2,result.size());
    EXPECT_EQ(2,result[0]);
    EXPECT_EQ(3,result[1]);
    EXPECT_EQ(2,x.to_ulong());
}

TEST(Y2023_Day20Example,Test2) {
    bitset<MOD_BITS> x{0};
    Conjunction cm{1};
    cm.addOutputConnection(2);
    cm.addOutputConnection(4);
    auto result = cm.receivePulse(0, x);
    EXPECT_TRUE(x[1]);
    ASSERT_EQ(2,result.size());
    EXPECT_EQ(2,result[0]);
    EXPECT_EQ(4,result[1]);
    x[3] = true;
    result = cm.receivePulse(3, x);
    EXPECT_TRUE(x[1]);
    x[0] = true;
    result = cm.receivePulse(0, x);
    EXPECT_FALSE(x[1]);
}

TEST(Y2023_Day20Example,Test3) {
    vector<string> input {
        "broadcaster -> a, b, c",
        "%a -> b",
        "%b -> c",
        "%c -> inv",
        "&inv -> a"
    };
    bitset<MOD_BITS> x{0};
    auto modules = buildModuleConnections(input);
    
    ASSERT_EQ(32,pressButton(x, modules, 1));
}

TEST(Y2023_Day20Example,Test4) {
    vector<string> input {
        "broadcaster -> a",
        "%a -> inv, con",
        "&inv -> b",
        "%b -> con",
        "&con -> output"
    };
    bitset<MOD_BITS> x{0};
    auto modules = buildModuleConnections(input);
    
    ASSERT_EQ(11687500,pressButton(x, modules, 1000));
}

TEST(Y2023_Day20Example,Test5) {
    vector<string> input {
        "broadcaster -> a",
        "%a -> inv, con",
        "&inv -> b",
        "%b -> con",
        "&con -> output"
    };
    bitset<MOD_BITS> x{0};
    string keyNode{"output"};
    size_t keyPos{0};
    auto modules = buildModuleConnections(input,&keyNode,&keyPos);
    
    ASSERT_EQ(0,pressButton(x, modules, 1000,&keyPos));
}
