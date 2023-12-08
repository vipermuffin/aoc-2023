//
//  Advent of Code 2023 Solutions: Day 6
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/05/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day06.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
#include <climits>   //INT_MIN, INT_MAX, etc.
#include <math.h> //sqrt



using namespace std;
namespace AocDay06 {

    static const std::string InputFileName = "Day06.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);
        int64_t x = 1;
        x *= calcNumWins(40, 215);
        x *= calcNumWins(92, 1064);
        x *= calcNumWins(97, 1505);
        x *= calcNumWins(90, 1100);
		return to_string(x);
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);
		return to_string(calcNumWins(40929790, 215106415051100));
    }

int64_t calcNumWins(int64_t time, int64_t dist, int32_t accel) {
    
    int64_t holdTime = 1;
    int64_t wins{0};
    int64_t tLow = static_cast<int64_t>((static_cast<double>(time)-sqrt(static_cast<double>(time*time)-static_cast<double>(4*dist)))/2.0);
    int64_t tHigh = static_cast<int64_t>((static_cast<double>(time)+sqrt(static_cast<double>(time*time)-static_cast<double>(4*dist)))/2.0);
    
    auto d = (time - tLow)*tLow;
    while(d <= dist) {
        tLow++;
        d = (time - tLow)*tLow;
    }
    d = (time - tHigh)*tHigh;
    while(d > dist) {
        tHigh++;
        d = (time - tHigh)*tHigh;
    }
    return tHigh-tLow;
}
}
