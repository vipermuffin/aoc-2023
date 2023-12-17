//
//  Advent of Code 2023 Solutions: Day 16
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/16/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//
#pragma once
#include <string>
#include <vector>
#include <unordered_map>

namespace AocDay16 {
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
typedef enum {
    NORTH=1,
    EAST=2,
    SOUTH=4,
    WEST=8
}DIRECTION_E;
struct BEAM_S {
    BEAM_S() {
        currentPos.all = 0;
        currentPos.xy[xIdx] = UINT32_MAX;
        currentDir = EAST;
        active = true;
    }
    BEAM_S(const Coord c, DIRECTION_E d) {
        currentPos.all = c.all;
        currentDir = d;
        visited[c.all] = d;
        active = true;
    }
    BEAM_S(uint32_t x, uint32_t y, DIRECTION_E d) {
        Coord c{};
        c.xy[xIdx] = x;
        c.xy[yIdx] = y;
        currentPos.all = c.all;
        currentDir = d;
        visited[c.all] = d;
        active = true;
    }
    BEAM_S(const struct BEAM_S& b) {
        currentPos.all = b.currentPos.all;
        currentDir = b.currentDir;
        visited = b.visited;
        active = b.active;
    }
    ~BEAM_S() = default;
    std::unordered_map<uint64_t, int> visited;
    Coord currentPos;
    DIRECTION_E currentDir;
    bool active;
};

using Beam = struct BEAM_S;

int32_t determineActiveTiles(const std::vector<std::string>&);
uint64_t stepBeam(const std::vector<std::string>& grid, Beam& b, std::vector<Beam>& beams, std::vector<std::vector<int>>&);
void printMap(const std::vector<std::string>& grid, const std::vector<Beam>& beams, const std::vector<std::vector<int>>& visited);
}
