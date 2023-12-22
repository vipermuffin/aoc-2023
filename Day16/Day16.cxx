//
//  Advent of Code 2023 Solutions: Day 16
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/16/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day16.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
#include <climits>   //INT_MIN, INT_MAX, etc.

using namespace std;
namespace AocDay16 {

    static const std::string InputFileName = "Day16.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);
        
		return to_string(determineActiveTiles(input));
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);

        return to_string(findMaxActiveTiles(input));
    }

    int32_t determineActiveTiles(const std::vector<string>& grid, uint32_t x, uint32_t y, const DIRECTION_E initDir) {
        vector<Beam> beams{};
        if(initDir == EAST) {
            x--;
        } else if(initDir == SOUTH) {
            y--;
        }
        beams.emplace_back(x,y,initDir);
        vector<vector<int>> visited;
        for(const auto& line : grid) {
            visited.emplace_back();
            for(const auto& c : line) {
                visited.back().push_back(0);
            }
        }
        bool done = false;
        while(!done) {
            done = true;
            vector<Beam> newBeams{};
            newBeams.reserve(beams.size());
            for(auto i = 0; i < beams.size(); i++) {
                
                if(beams[i].active) {
                    done = false;
                    stepBeam(grid, beams[i], newBeams, visited);
                    newBeams.push_back(beams[i]);
                }
            }
            std::swap(beams,newBeams);
        }
        int32_t acc{0};
        for(const auto& line : visited) {
            for(const auto& num : line) {
                if(num != 0) {
                    acc++;
                }
            }
        }
        return acc;
    }

    uint64_t stepBeam(const std::vector<std::string>& grid, Beam& b, std::vector<Beam>& beams, std::vector<std::vector<int>>& visited) {
        uint32_t x = X(b.currentPos);
        uint32_t y = Y(b.currentPos);
        unordered_map<int, std::pair<int32_t,int32_t>> movement{
            {EAST,{0,1}},{WEST,{0,-1}},{NORTH,{-1,0}},{SOUTH,{1,0}}
        };
        auto adj = movement[b.currentDir];
        x += adj.second;
        y += adj.first;
        if((y < grid.size()) && (x < grid[y].size())) {
            //Still in the tiles
            if((visited[y][x] & b.currentDir) == 0) {
                visited[y][x] |= b.currentDir;
                b.currentPos.xy[xIdx] = x;
                b.currentPos.xy[yIdx] = y;
                switch(grid[y][x]) {
                    case '.':
                        //Nothing to do
                        break;
                    case '/':
                        if(b.currentDir == EAST) {
                            b.currentDir = NORTH;
                        } else if(b.currentDir == WEST) {
                            b.currentDir = SOUTH;
                        } else if(b.currentDir == NORTH) {
                            b.currentDir = EAST;
                        } else if(b.currentDir == SOUTH) {
                            b.currentDir = WEST;
                        }
                        break;
                    case '\\':
                        if(b.currentDir == WEST) {
                            b.currentDir = NORTH;
                        } else if(b.currentDir == EAST) {
                            b.currentDir = SOUTH;
                        } else if(b.currentDir == SOUTH) {
                            b.currentDir = EAST;
                        } else if(b.currentDir == NORTH) {
                            b.currentDir = WEST;
                        }
                        break;
                    case '-':
                        if(b.currentDir == SOUTH || b.currentDir == NORTH) {
                            b.currentDir = EAST;
                            beams.emplace_back(x,y,WEST);
                        }
                        break;
                    case '|':
                        if(b.currentDir == EAST || b.currentDir == WEST) {
                            b.currentDir = NORTH;
                            beams.emplace_back(x,y,SOUTH);
                        }
                        break;
                }
                
            } else {
                b.active = false;
            }
        } else {
            //Went out of range
            b.active = false;
        }
        return b.currentPos.all;
    }

    void printMap(const std::vector<std::string>& grid, const std::vector<Beam>& beams, const std::vector<std::vector<int>>& visited) {
        auto annotatedGrid{grid};
        
        for(auto y = 0; y < grid.size(); y++) {
            for(auto x = 0; x < grid[y].size(); x++) {
                if(grid[y][x] == '.') {
                    if(visited[y][x] == EAST) {
                        annotatedGrid[y][x] = '>';
                    } else if(visited[y][x] == WEST) {
                        annotatedGrid[y][x] = '<';
                    } else if(visited[y][x] == NORTH) {
                        annotatedGrid[y][x] = '^';
                    }else if(visited[y][x] == SOUTH) {
                        annotatedGrid[y][x] = 'V';
                    } else if(visited[y][x] == 0) {
                        //Do nothing
                    } else {
                        annotatedGrid[y][x] = '*';
                    }
                }
            }
        }
        for(const auto& s : annotatedGrid) {
            cout << s << endl;
        }
        cout << endl;
    }

    int32_t findMaxActiveTiles(const std::vector<std::string>& grid) {
        int32_t max = INT32_MIN;
        uint32_t x = 0;
        for(uint32_t y = 0; y < grid.size();y++) {
            auto result = determineActiveTiles(grid, x, y, EAST);
            if(result > max) {
                max = result;
            }
        }
        x = static_cast<uint32_t>(grid[0].size());
        for(uint32_t y = 0; y < grid.size();y++) {
            auto result = determineActiveTiles(grid, x, y, WEST);
            if(result > max) {
                max = result;
            }
        }
        uint32_t y = 0;
        for( x = 0; x < grid[y].size();x++) {
            auto result = determineActiveTiles(grid, x, y, SOUTH);
            if(result > max) {
                max = result;
            }
        }
        y = static_cast<uint32_t>(grid.size());
        for(uint32_t x = 0; x < grid[y].size();x++) {
            auto result = determineActiveTiles(grid, x, y, NORTH);
            if(result > max) {
                max = result;
            }
        }
        return max;
    }
}
