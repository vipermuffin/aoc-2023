//
//  Advent of Code 2023 Solutions: Day 7
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/07/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//
#pragma once
#include <string>
#include <vector>

namespace AocDay07 {
//Function Definitions
enum CamelHands_E {
    HIGH_CARD,
    ONE_PAIR,
    TWO_PAIR,
    THREE_OF_A_KIND,
    FULL_HOUSE,
    FOUR_OF_A_KIND,
    FIVE_OF_A_KIND
};

using CamelHand_t = enum CamelHands_E;

struct CamelHand {
    CamelHand() = default;
    CamelHand(const std::string&, bool JWild = false);
    CamelHand(const std::string&, const int32_t, bool JWild = false);
    ~CamelHand() = default;
    bool operator<(const CamelHand& rhs) const;
    void calcType();
    int64_t getBidForRank(const int32_t) const;
    std::string _hand;
    int32_t _bid;
    CamelHand_t _handType;
    bool JisWild;
};

int64_t getTotalWinnings(std::vector<CamelHand>&);
}
