//
//  Advent of Code 2023 Solutions: Day 10
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/10/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//
#pragma once
#include <string>
#include <vector>

namespace AocDay10 {
//Function Definitions
std::pair<size_t,size_t> findSCharacter(const std::vector<std::string>& grid);
std::vector<std::vector<int32_t>> initVisited(const std::vector<std::string>& grid);
void updateVisited(const std::vector<std::string>& grid, std::vector<std::vector<int32_t>>& visited);
int32_t countSurroundedTiles(const std::vector<std::string>& grid, std::vector<std::vector<int32_t>>& visited);
}
