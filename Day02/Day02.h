//
//  Advent of Code 2023 Solutions: Day 2
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/01/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//
#pragma once
#include <string>
#include <vector>
#include <unordered_map>

namespace AocDay02 {
//Function Definitions
std::vector<std::string> parseGame(const std::string& game);
std::unordered_map<std::string,int> parseRound(const std::string& round);
bool validateGame(const std::unordered_map<std::string,int>& totals, const std::vector<std::string>& rounds);

int calculateGameMinPower(const std::string& game);

}
