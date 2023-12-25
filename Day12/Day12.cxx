//
//  Advent of Code 2023 Solutions: Day 12
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/12/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day12.h"
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
namespace AocDay12 {

    static const std::string InputFileName = "Day12.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);
        int32_t acc{0};
        for(const auto& line : input) {
            acc += determineConfigs(line);
        }

		return to_string(acc);
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);
        int64_t acc{0};
        for(const auto& line : input) {
            auto newLine = buildNewReport(line);
            acc += determineConfigs(newLine);
        }

        return to_string(acc);
    }

    bool verifyConfig(const std::string& lhs, const std::vector<int>& rhs) {
        auto itr = lhs.begin();
        auto rhsItr = rhs.begin();
        do {
            while(itr != lhs.end() && *itr != '#')
            {
                std::advance(itr, 1);
            }
            auto cnt = 0;
            while(itr != lhs.end() && *itr != '.') {
                cnt++;
                std::advance(itr, 1);
            }
            if(rhsItr == rhs.end()) {
                return itr == lhs.end() && cnt == 0;
            } else if(*rhsItr != cnt) {
                return false;
            }
            std::advance(rhsItr, 1);
        } while(itr != lhs.end());
        
        return rhsItr == rhs.end();
    }

    int32_t determineConfigs(const std::string& input) {
        auto split = parseLineForWords(input);
        auto vals = parseCsvLineForNum(split[1]);
        vector<size_t> qs{};
        vector<bool> bsp{};
        qs.reserve(split[0].size());
        bsp.reserve(split[0].size());
        auto totalSprings = std::accumulate(vals.begin(), vals.end(), 0);
        auto knownSprings{0};
        for(auto i = 0; i < split[0].size();i++) {
            if(split[0][i] == '?') {
                qs.push_back(i);
                bsp.push_back(false);
            }else if(split[0][i] == '#') {
                knownSprings++;
            }
        }
        auto bspItr = bsp.rbegin();
        while(knownSprings < totalSprings) {
            *bspItr = true;
            knownSprings++;
            std::advance(bspItr, 1);
        }
        
        int32_t cnt = 0;
        do {
            string newConfig{split[0]};
            for(auto i = 0; i < qs.size(); i++){
                newConfig[qs[i]] = bsp[i] ? '#' : '.';
            }
            if(verifyConfig(newConfig, vals)) {
                cnt++;
            }
        }while(std::next_permutation(bsp.begin(), bsp.end()));
        return cnt;
    }

    std::string buildNewReport(const std::string& input) {
        auto split = parseLineForWords(input);
        string newString = split[0];
        for(auto i = 1; i < 5;i++) {
            newString += '?';
            newString += split[0];
        }
        newString += ' ';
        newString += split[1];
        for(auto i = 1; i < 5;i++) {
            newString += ',';
            newString += split[1];
        }
        return newString;
    }
}
