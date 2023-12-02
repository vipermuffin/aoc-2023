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
        vector<string> decode {
            "0","zero",
            "1","one",
            "2","two",
            "3","three",
            "4","four",
            "5","five",
            "6","six",
            "7","seven",
            "8","eight",
            "9","nine"
        };
        
        size_t minPos = line.size();
        size_t maxPos = 0;
        int8_t lsd, msd;
        string minS{}, maxS{};
        for(size_t i = 0; i < decode.size(); i = i + (useWords ? 1 : 2)) {
            auto s = decode[i];
            auto pos = line.find(s);
            while(pos != string::npos) {
                if(pos >= maxPos) {
                    maxPos = pos;
                    lsd = static_cast<int8_t>(i >> 1);
                }
                if(pos <= minPos) {
                    minPos = pos;
                    msd = static_cast<int8_t>(i >> 1)*10;
                }
                pos = line.find(s, pos + 1);
            }
        }
        
        return msd+lsd;
    }
}
