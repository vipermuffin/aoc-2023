//
//  Advent of Code 2023 Solutions: Day 5
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/05/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//
#pragma once
#include <string>
#include <vector>
#include <unordered_map>

namespace AocDay05 {
//Function Definitions
struct OffsetPoint {
    OffsetPoint() = default;
    OffsetPoint(const std::string&);
    OffsetPoint(int64_t dest, int64_t src, int64_t rng);
    ~OffsetPoint() = default;
    bool destinationInRange(const int64_t&) const;
    bool sourceInRange(const int64_t&) const;
    int64_t getDestinationForSource(const int64_t&) const;
    int64_t getSourceForDestination(const int64_t &val) const;
    int64_t destStart;
    int64_t sourceStart;
    int64_t range;
};

struct AlmanacMap {
    AlmanacMap(const int64_t num) {
        seedId = num;
        soilId = num;
        fertlizierId = num;
        waterId = num;
        lightId = num;
        temperatureId = num;
        humidityId = num;
        locationId = num;
    }
    int64_t seedId;
    int64_t soilId;
    int64_t fertlizierId;
    int64_t waterId;
    int64_t lightId;
    int64_t temperatureId;
    int64_t humidityId;
    int64_t locationId;
};

using DiffPoints = std::vector<struct OffsetPoint>;
using SeedPlaybook = struct AlmanacMap;
std::unordered_map<std::string, DiffPoints> parseConnections(const std::vector<std::string>&);
void updateSeed2Location(const std::unordered_map<std::string, DiffPoints>&,SeedPlaybook&);
int64_t findClosestSeed(const std::unordered_map<std::string, DiffPoints>& database, const std::vector<int64_t>& seeds);
}
