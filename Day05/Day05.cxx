//
//  Advent of Code 2023 Solutions: Day 5
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/05/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day05.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
#include <climits>   //INT_MIN, INT_MAX, etc.
#include <sstream>


using namespace std;
namespace AocDay05 {

    //parseLineForLongNum was not working on GHA Linux node.  Temporary fix until incorporated into tools.
    template <class T>
    std::vector<T> parseLineForNumbersOfTypeT(const std::string& line)
    {
       vector<T> words{};
       stringstream ss{line};
       T word;
       while(ss >> word) {
          words.push_back(word);
       }
       return words;
    }

    static const std::string InputFileName = "Day05.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);
        auto database = parseConnections(input);
        vector<int64_t> seedIds = parseLineForNumbersOfTypeT<int64_t>(string(input[0].begin()+6,input[0].end()));
        
        std::vector<SeedPlaybook> seeds{};
        seeds.reserve(seedIds.size());
        int64_t minLocation = INT64_MAX;
        
        for(const auto& num : seedIds) {
            SeedPlaybook sp{num};
            updateSeed2Location(database, sp);
            seeds.push_back(sp);
            if(minLocation > sp.locationId) {
                minLocation = sp.locationId;
            }
        }

		return to_string(minLocation);
    }

    std::string solveb() {
        //Min for part one without ranges 386490336
        auto input = parseFileForLines(InputFileName);
        auto database = parseConnections(input);
        vector<int64_t> seedIds = parseLineForNumbersOfTypeT<int64_t>(string(input[0].begin()+6,input[0].end()));
        auto closestLoc = findClosestSeed(database, seedIds);
		return to_string(closestLoc);
    }

    OffsetPoint::OffsetPoint(const std::string& config) {
        auto vals = parseLineForLongNumbers(config);
        destStart = vals[0];
        sourceStart = vals[1];
        range = vals[2];
    }

    OffsetPoint::OffsetPoint(int64_t dest, int64_t src, int64_t rng) {
        destStart = dest;
        sourceStart = src;
        range = rng;
    }

    bool OffsetPoint::destinationInRange(const int64_t &val) const {
        return ((val >= destStart) && (val < (destStart+range)));
    }

    bool OffsetPoint::sourceInRange(const int64_t &val) const {
        return ((val >= sourceStart) && (val < (sourceStart+range)));
    }

    int64_t OffsetPoint::getDestinationForSource(const int64_t &val) const {
        auto offset = val - sourceStart;
        return destStart + offset;
    }

    int64_t OffsetPoint::getSourceForDestination(const int64_t &val) const {
        auto offset = val - destStart;
        return sourceStart + offset;
    }

    std::unordered_map<std::string, DiffPoints> parseConnections(const std::vector<std::string>& input) {
        unordered_map<string, DiffPoints> connectionTable{};
        auto itr = input.begin();
        std::advance(itr, 2);
        while(itr != input.end()) {
            auto mappingType = *itr;
            std::advance(itr, 1);
            while(itr->size() > 0) {
                struct OffsetPoint op{*itr};
                connectionTable[mappingType].push_back(op);
                std::advance(itr, 1);
            }
            if(itr != input.end()) {
                std::advance(itr, 1);
            }
        }
        
        return connectionTable;
    }

    void updateSeed2Location(const std::unordered_map<std::string, DiffPoints>& database, SeedPlaybook& seedPb) {
        vector<std::pair<string, std::pair<int64_t&,int64_t&>>> seedRef {
            {"seed-to-soil map:",{seedPb.seedId,seedPb.soilId}},
            {"soil-to-fertilizer map:",{seedPb.soilId,seedPb.fertlizierId}},
            {"fertilizer-to-water map:",{seedPb.fertlizierId,seedPb.waterId}},
            {"water-to-light map:",{seedPb.waterId,seedPb.lightId}},
            {"light-to-temperature map:",{seedPb.lightId,seedPb.temperatureId}},
            {"temperature-to-humidity map:",{seedPb.temperatureId,seedPb.humidityId}},
            {"humidity-to-location map:",{seedPb.humidityId,seedPb.locationId}}
        };
        
        auto itr = seedRef.begin();
        while(itr != seedRef.end()) {
            auto diffItr = database.at(itr->first).begin();
            itr->second.second = itr->second.first;
            while(diffItr != database.at(itr->first).end()) {
                if(diffItr->sourceInRange(itr->second.first)) {
                    itr->second.second = diffItr->getDestinationForSource(itr->second.first);
                }
                std::advance(diffItr, 1);
            }
            std::advance(itr, 1);
        }
    }

    int64_t findClosestSeed(const std::unordered_map<std::string, DiffPoints>& database, const std::vector<int64_t>& seeds) {
        vector<std::pair<int64_t,int64_t>> ranges{};
        for(auto i = 0; i < seeds.size(); i+=2) {
            ranges.emplace_back(seeds[i],seeds[i+1]);
        }
        int64_t closestLoc{0};
        SeedPlaybook seedPb{0};
        vector<std::pair<string, std::pair<int64_t&,int64_t&>>> seedRef {
            {"seed-to-soil map:",{seedPb.seedId,seedPb.soilId}},
            {"soil-to-fertilizer map:",{seedPb.soilId,seedPb.fertlizierId}},
            {"fertilizer-to-water map:",{seedPb.fertlizierId,seedPb.waterId}},
            {"water-to-light map:",{seedPb.waterId,seedPb.lightId}},
            {"light-to-temperature map:",{seedPb.lightId,seedPb.temperatureId}},
            {"temperature-to-humidity map:",{seedPb.temperatureId,seedPb.humidityId}},
            {"humidity-to-location map:",{seedPb.humidityId,seedPb.locationId}}
        };
        bool found = false;
        while(!found) {
            seedPb.locationId = closestLoc++;
            //Find Closest Location Range
            auto itr = seedRef.rbegin();
            while(itr != seedRef.rend()) {
                auto diffItr = database.at(itr->first).begin();
                itr->second.first = itr->second.second;
                while(diffItr != database.at(itr->first).end()) {
                    if(diffItr->destinationInRange(itr->second.second)) {
                        itr->second.first = diffItr->getSourceForDestination(itr->second.first);
                    }
                    std::advance(diffItr, 1);
                }
                std::advance(itr, 1);
            }
            
            //Is a seed we have?
            for(const auto& p : ranges) {
                if(seedPb.seedId >= p.first && seedPb.seedId < (p.first+p.second)) {
                    found = true;
                }
            }
        }

        
        return seedPb.locationId;
    }
}
