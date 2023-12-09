//
//  Advent of Code 2023 Solutions: Day 8
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/08/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//
#pragma once
#include <string>
#include <vector>
#include <unordered_map>

namespace AocDay08 {
//Function Definitions
using Tree = std::unordered_map<std::string,std::pair<std::string,std::string>>;
Tree GenerateTree(const std::vector<std::string>&);
int32_t FindStepsToTarget(const Tree& tree, const std::string& directions, const std::string& target);
}
