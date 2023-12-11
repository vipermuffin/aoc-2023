//
//  Advent of Code 2023 Solutions: Day 11
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/11/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day11.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
#include <climits>   //INT_MIN, INT_MAX, etc.


using namespace std;
namespace AocDay11 {

    static const std::string InputFileName = "Day11.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);
        auto g = getGalaxyCoordWithExpansion(input);

		return to_string(sumOfAllDistances(g));
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);
        auto g = getGalaxyCoordWithExpansion(input,1000000-1);
        //357134917863 too high
        return to_string(sumOfAllDistances(g));
    }

    std::vector<uint64_t> getGalaxyCoordWithExpansion(const std::vector<std::string>& scan, int32_t expansion) {
        Coord tmp{0};
        vector<uint64_t> galaxyCoords{};
        vector<bool> colEmpty(scan.front().size(),true);
        //Parse each row
        uint32_t expandAdj = 0;
        for(auto row = 0; row < scan.size(); row++) {
            bool emptyRow = true;
            for(auto col = 0; col < scan[row].size(); col++) {
                if(scan[row][col] == '#') {
                    tmp.xy[xIdx] = col;
                    tmp.xy[yIdx] = row + expandAdj;
                    galaxyCoords.push_back(tmp.all);
                    colEmpty[col] = false;
                    emptyRow = false;
                }
            }
            if(emptyRow) {
                expandAdj += expansion;
            }
        }
        
        //Adjust based on empty columns
        expandAdj = 0;
        vector<uint32_t> colAdjust(colEmpty.size(),0);
        for(auto i = 0; i < colAdjust.size(); i++) {
            if(colEmpty[i]) {
                expandAdj += expansion;
            }
            colAdjust[i] = expandAdj;
        }
        
        //Adjust coordinates
        for(auto& g : galaxyCoords) {
            tmp.all = g;
            tmp.xy[xIdx] = X(tmp) + colAdjust[X(tmp)];
            g = tmp.all;
        }
        return galaxyCoords;
    }

    uint32_t manhattanDistance(const Coord& p1, const Coord& p2) {
        uint32_t dx = (X(p1) > X(p2)) ? X(p1) - X(p2) : X(p2) - X(p1);
        uint32_t dy = (Y(p1) > Y(p2)) ? Y(p1) - Y(p2) : Y(p2) - Y(p1);
        return dx+dy;
    }

    uint64_t sumOfAllDistances(const std::vector<uint64_t>& galaxyCoords) {
        uint64_t acc{0};
        for(auto i = 0; i < galaxyCoords.size(); i++) {
            for(auto j = i; j < galaxyCoords.size(); j++) {
                Coord p1,p2;
                p1.all = galaxyCoords[i];
                p2.all = galaxyCoords[j];
                acc += manhattanDistance(p1, p2);
            }
        }
        return acc;
    }
}
