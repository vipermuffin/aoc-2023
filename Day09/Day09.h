//
//  Advent of Code 2023 Solutions: Day 9
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/10/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//
#pragma once
#include <string>
#include <vector>
#include <sstream>
namespace AocDay09 {
//Function Definitions
    template <class T>
    std::vector<T> parseLineForNumbersOfTypeT(const std::string& line)
    {
       std::vector<T> words{};
       std::stringstream ss{line};
       T word;
       while(ss >> word) {
          words.push_back(word);
       }
       return words;
    }
int64_t findNextValueForSequence(const std::vector<int64_t>&, bool appendFront = false);
}
