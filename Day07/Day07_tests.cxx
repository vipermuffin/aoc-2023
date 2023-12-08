//
//  Advent of Code 2023 Tests: Day 7
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/07/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day07.h"
#include "gtest/gtest.h"
#include <algorithm> //std::sort, find, for_each, max_element, etc
#include <iostream>
#include <string>

namespace AocDay07{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay07;

TEST(Y2023_SolveDay7, FinalSolutionPartA) {
    EXPECT_EQ("253910319", solvea());
}

TEST(Y2023_SolveDay7, FinalSolutionPartB) {
    EXPECT_EQ("254083736", solveb());
}

TEST(Y2023_Day7Example,Test1) {
    CamelHand ch("AAAAA",0);
    EXPECT_EQ(FIVE_OF_A_KIND,ch._handType);
    ch._hand = "AA8AA";
    ch.calcType();
    EXPECT_EQ(FOUR_OF_A_KIND,ch._handType);
    ch._hand = "23332";
    ch.calcType();
    EXPECT_EQ(FULL_HOUSE,ch._handType);
    ch._hand = "TTT98";
    ch.calcType();
    EXPECT_EQ(THREE_OF_A_KIND,ch._handType);
    ch._hand = "23432";
    ch.calcType();
    EXPECT_EQ(TWO_PAIR,ch._handType);
    ch._hand = "A23A4";
    ch.calcType();
    EXPECT_EQ(ONE_PAIR,ch._handType);
    ch._hand = "23456";
    ch.calcType();
    EXPECT_EQ(HIGH_CARD,ch._handType);
    
    ch.JisWild = true;
    ch._hand = "AAJAA";
    ch.calcType();
    EXPECT_EQ(FIVE_OF_A_KIND,ch._handType);
    ch._hand = "JJJJJ";
    ch.calcType();
    EXPECT_EQ(FIVE_OF_A_KIND,ch._handType);
    ch._hand = "JQQJQ";
    ch.calcType();
    EXPECT_EQ(FIVE_OF_A_KIND,ch._handType);
    ch._hand = "JQQQQ";
    ch.calcType();
    EXPECT_EQ(FIVE_OF_A_KIND,ch._handType);
    ch._hand = "AJ8JJ";
    ch.calcType();
    EXPECT_EQ(FOUR_OF_A_KIND,ch._handType);
    ch._hand = "233J2";
    ch.calcType();
    EXPECT_EQ(FULL_HOUSE,ch._handType);
    ch._hand = "TJT98";
    ch.calcType();
    EXPECT_EQ(THREE_OF_A_KIND,ch._handType);
    ch._hand = "22433";
    ch.calcType();
    EXPECT_EQ(TWO_PAIR,ch._handType);
    ch._hand = "A23J4";
    ch.calcType();
    EXPECT_EQ(ONE_PAIR,ch._handType);

}

TEST(Y2023_Day7Example,Test2) {
    vector<CamelHand> chs{};
    chs.emplace_back("32T3K",765);
    chs.emplace_back("T55J5",684);
    chs.emplace_back("KK677",28);
    chs.emplace_back("KTJJT",220);
    chs.emplace_back("QQQJA",483);
    std::sort(chs.begin(),chs.end());
    EXPECT_EQ("32T3K",chs[0]._hand);
    EXPECT_EQ("T55J5",chs[3]._hand);
    EXPECT_EQ("KK677",chs[2]._hand);
    EXPECT_EQ("KTJJT",chs[1]._hand);
    EXPECT_EQ("QQQJA",chs[4]._hand);
}

TEST(Y2023_Day7Example,Test3) {
    vector<CamelHand> chs{};
    chs.emplace_back("32T3K",765);
    chs.emplace_back("T55J5",684);
    chs.emplace_back("KK677",28);
    chs.emplace_back("KTJJT",220);
    chs.emplace_back("QQQJA",483);
    
    EXPECT_EQ(6440,getTotalWinnings(chs));
}

TEST(Y2023_Day7Example,Test4) {
    vector<CamelHand> chs{};
    chs.emplace_back("32T3K",765,true);
    chs.emplace_back("T55J5",684,true);
    chs.emplace_back("KK677",28,true);
    chs.emplace_back("KTJJT",220,true);
    chs.emplace_back("QQQJA",483,true);
    
    EXPECT_EQ(5905,getTotalWinnings(chs));
}
