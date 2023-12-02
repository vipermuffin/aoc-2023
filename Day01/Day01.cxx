//
//  Advent of Code 2023 Solutions: Day 1
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/01/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day01.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
#include <climits>   //INT_MIN, INT_MAX, etc.
#include <numeric> //std::accumulate
#include <unordered_map>



using namespace std;
namespace AocDay01 {

    static const std::string InputFileName = "Day01.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);
        vector<int8_t> vals{};
        for(const auto& line : input) {
            auto itr = line.begin();
            //Get first digit
            while (!((*itr >= '0') && (*itr <= '9'))) {
                itr++;
            }
            int8_t x = *itr - '0';
            x *= 10;
            
            //get second digit
            auto rItr = line.rbegin();
            while(!((*rItr >= '0') && (*rItr <= '9'))) {
                rItr++;
            }
            int8_t y = *rItr -'0';
            vals.push_back(x+y);
        }
		return to_string(std::accumulate(vals.begin(), vals.end(), 0));
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);
        vector<int8_t> vals{};
        for(const auto& line : input) {
            vals.push_back(getCalibrationValue(line,true));
        }
        return to_string(std::accumulate(vals.begin(), vals.end(), 0));
    }

    int8_t getCalibrationValue(const std::string& line, const bool useWords) {
        unordered_map<string, int8_t> decode {
            {"0",0},
            {"1",1},
            {"2",2},
            {"3",3},
            {"4",4},
            {"5",5},
            {"6",6},
            {"7",7},
            {"8",8},
            {"9",9}
        };
        if(useWords) {
            decode["zero"] = 0;
            decode["one"] = 1;
            decode["two"] = 2;
            decode["three"] = 3;
            decode["four"] = 4;
            decode["five"] = 5;
            decode["six"] = 6;
            decode["seven"] = 7;
            decode["eight"] = 8;
            decode["nine"] = 9;
        }
        
        size_t minPos = line.size();
        size_t maxPos = 0;
        string minS{}, maxS{};
        for(const auto kvp : decode) {
            auto s = kvp.first;
            auto pos = line.find(s);
            while(pos != string::npos) {
                if(pos >= maxPos) {
                    maxPos = pos;
                    maxS = s;
                }
                if(pos <= minPos) {
                    minPos = pos;
                    minS = s;
                }
                pos = line.find(s, pos + 1);
            }
        }
        
        return (decode[minS] * 10) + decode[maxS];
    }
}
