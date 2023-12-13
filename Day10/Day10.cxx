//
//  Advent of Code 2023 Solutions: Day 10
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/10/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day10.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
#include <climits>   //INT_MIN, INT_MAX, etc.
#include <unordered_map>

using namespace std;
namespace AocDay10 {

    static const std::string InputFileName = "Day10.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);
        auto visited = initVisited(input);
        updateVisited(input, visited);
        int32_t max = 0;
        for(const auto& v : visited) {
            for( const auto& cnt : v) {
                if(max < cnt) {
                    max = cnt;
                }
            }
        }

		return to_string(max);
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);

		return "---";
    }

    std::pair<size_t,size_t> findSCharacter(const std::vector<std::string>& grid) {
        for(size_t y = 0; y < grid.size();y++) {
            for(size_t x = 0; x < grid[y].size(); x++) {
                if(grid[y][x] == 'S') {
                    return make_pair(x, y);
                }
            }
        }
        return make_pair(0, 0);
    }

    std::vector<std::vector<int32_t>> initVisited(const std::vector<std::string>& grid) {
        std::vector<std::vector<int32_t>> visited{};
        visited.reserve(grid.size());
        std::vector<int32_t> initVec(grid.front().size(),-1);
        for(auto i = 0; i < grid.size(); i++) {
            visited.push_back(initVec);
        }
        return visited;
    }

    void updateVisited(const std::vector<std::string>& grid, std::vector<std::vector<int32_t>>& visited) {
        auto start = findSCharacter(grid);
        vector<std::pair<size_t,size_t>> currentPos{start};
        vector<char> directions {'N','E','S','W'};
        vector<std::pair<int32_t,int32_t>> directionOffset{{0,-1},{1,0},{0,1},{-1,0}};
        unordered_map<char, unordered_map<char,string>> connectingPipes{
            {'S',{{'N',"|7F"},{'E',"-J7"},{'S',"|LJ"},{'W',"-LF"}}},
            {'|',{{'N',"|7F"},{'E',""},{'S',"|LJ"},{'W',""}}},
            {'-',{{'N',""},{'E',"-J7"},{'S',""},{'W',"-LF"}}},
            {'L',{{'N',"|7F"},{'E',"-J7"},{'S',""},{'W',""}}},
            {'J',{{'N',"|7F"},{'E',""},{'S',""},{'W',"-LF"}}},
            {'7',{{'N',""},{'E',""},{'S',"|LJ"},{'W',"-LF"}}},
            {'F',{{'N',""},{'E',"-J7"},{'S',"|LJ"},{'W',""}}},
            {'.',{{'N',""},{'E',""},{'S',""},{'W',""}}}
        };
        int32_t stepCount = 0;
        while(currentPos.size() > 0) {
            vector<std::pair<size_t,size_t>> nextPos{};
            for(const auto& p : currentPos) {
                visited[p.second][p.first] = stepCount;
                for(auto i = 0; i < directions.size(); i++) {
                    auto newX = p.first + directionOffset[i].first;
                    auto newY = p.second + directionOffset[i].second;
                    if((newY >= 0 && newY < grid.size() && newX >= 0 && newX < grid[newY].size())) {
                        if(visited[newY][newX] == -1) {
                            //Not visited yet
                            auto connects = connectingPipes[grid[p.second][p.first]][directions[i]].find(grid[newY][newX]);
                            if(connects != string::npos) {
                                nextPos.emplace_back(newX,newY);
                            }
                        }
                    }
                }
            }
            std::swap(nextPos,currentPos);
            stepCount++;
        }
    }

    int32_t countSurroundedTiles(const std::vector<std::string>& grid, std::vector<std::vector<int32_t>>& visited) {
        for(int32_t i = 0; i < visited.size();i++) {
            int32_t count = 1;
            for(int32_t j = 0; j < visited[i].size();j++) {
                if(visited[i][j] < 0) {
                    visited[i][j] -= (count & 0x1);
                } else {
                    if(grid[i][j] != '-') {
                        count++;
                    }
                }
            }
        }
        
        for(int32_t i = 0; i < visited[0].size();i++) {
            int32_t count = 1;
            for(int32_t j = 0; j < visited.size();j++) {
                if(visited[j][i] < 0) {
                    visited[j][i] -= (count & 0x1);
                } else {
                    if(grid[j][i] != '|') {
                        count++;
                    }
                }
            }
        }
        int32_t surroundCount = 0;
        for(int32_t i = 0; i < visited.size();i++) {
            int32_t count = 1;
            for(int32_t j = 0; j < visited[i].size();j++) {
                if(visited[i][j] == -1 || visited[i][j] == -2) {
                    surroundCount++;
                }
            }
        }
        return surroundCount;
    }


}
