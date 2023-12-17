//
//  Advent of Code 2023 Solutions: Day 15
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/16/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day15.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
#include <climits>   //INT_MIN, INT_MAX, etc.
#include <unordered_map>

using namespace std;
namespace AocDay15 {

    static const std::string InputFileName = "Day15.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);

		return to_string(computeHashes(input[0]));
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);

		return to_string(performSequence(input[0]));
    }

    int64_t computeHashes(const std::string& input) {
        auto vals = parseCsvLineForWords(input);
        int64_t acc{0};
        for(const auto& s : vals) {
            acc += performHash(s);
        }
        return acc;
    }
    int64_t performHash(const std::string& val) {
        int64_t acc{0};
        for(const auto c : val) {
            int64_t x = static_cast<int64_t>(c);
            acc += x;
            acc *= 17;
            acc &= 0xFF;
        }
        return acc;
    }

    int64_t performSequence(const std::string& input) {
        auto vals = parseCsvLineForWords(input);
        vector<vector<string>> boxes{};
        boxes.resize(256);
        unordered_map<string, int64_t> focalPowers;
        
        for(const auto& s : vals) {
            auto opPos = s.find("=");
            int64_t val{0};
            bool isEqual{false};
            if(opPos==string::npos) {
                //No '=' sign so assuming -
                opPos = s.size()-1;
            } else {
                //= is there
                string valStr{s.begin()+opPos+1,s.end()};
                val = stoi(valStr);
                isEqual = true;
            }
            string label{s.begin(),s.begin()+opPos};
            auto hashVal = performHash(label);
            auto itr = std::find(boxes[hashVal].begin(),boxes[hashVal].end(),label);
            if(isEqual) {
                focalPowers[label] = val;
                if(itr == boxes[hashVal].end()) {
                    boxes[hashVal].push_back(label);
                }
            } else {
                if(itr != boxes[hashVal].end()) {
                    boxes[hashVal].erase(itr);
                }
            }
        }
        
        int64_t acc{0};
        for(auto i = 0; i < boxes.size(); i++) {
            for(auto j = 0; j < boxes[i].size(); j++) {
                acc += (i+1)*(j+1)*focalPowers[boxes[i][j]];
            }
        }
        return acc;
    }
}
