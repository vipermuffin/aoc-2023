//
//  Advent of Code 2023 Solutions: Day 9
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/10/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day09.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
//#include <array>
#include <climits>   //INT_MIN, INT_MAX, etc.
//#include <chrono>
//#include <iostream>
//#include <fstream> //ifstream
//#include <functional> //std::function
//#include <iomanip> //setfill setw hex
//#include <map>
//#include <math.h> //sqrt
#include <numeric> //std::accumulate
//#include <queue>
//#include <regex>
//#include <set>
//#include <sstream>
//#include <thread>
//#include <tuple>
//#include <unordered_map>
//#include <unordered_set>


using namespace std;
namespace AocDay09 {

    static const std::string InputFileName = "Day09.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);
        int64_t acc{0};
        for(const auto& line : input) {
            auto vals = parseLineForNumbersOfTypeT<int64_t>(line);
            acc += findNextValueForSequence(vals);
        }
		return to_string(acc);
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);
        int64_t acc{0};
        for(const auto& line : input) {
            auto vals = parseLineForNumbersOfTypeT<int64_t>(line);
            acc += findNextValueForSequence(vals, true);
        }
        return to_string(acc);
    }

    int64_t findNextValueForSequence(const std::vector<int64_t>& vals, bool appendFront) {
        std::vector<int64_t> nextVals{};
        nextVals.reserve(vals.size());
        auto itr = vals.begin();
        auto prevVal = *itr;
        std::advance(itr,1);
        while(itr != vals.end()) {
            nextVals.push_back(*itr - prevVal);
            prevVal = *itr;
            std::advance(itr,1);
        }
        auto appendVal = appendFront ? vals.front() : vals.back();
        if(std::accumulate(nextVals.begin(), nextVals.end(), static_cast<int64_t>(0)) == 0) {
            return appendVal;
        } else {
            if(appendFront) {
                return appendVal - findNextValueForSequence(nextVals, appendFront);
            } else {
                return appendVal + findNextValueForSequence(nextVals, appendFront);
            }
            
        }
    }
}
