//
//  Advent of Code 2023 Solutions: Day 11
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/11/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//
#pragma once
#include <string>
#include <vector>

namespace AocDay11 {
//Function Definitions
typedef union {
    uint64_t all;
    uint32_t xy[2];
} Coord;

constexpr size_t xIdx = 0;
constexpr size_t yIdx = 1;

constexpr uint32_t X(const Coord& position) {
return position.xy[xIdx];
}

constexpr uint32_t Y(const Coord& position) {
return position.xy[yIdx];
}

uint32_t manhattanDistance(const Coord& p1, const Coord& p2);

std::vector<uint64_t> getGalaxyCoordWithExpansion(const std::vector<std::string>& scan, int32_t expansion = 1);
uint64_t sumOfAllDistances(const std::vector<uint64_t>& galaxyCoords);
}
