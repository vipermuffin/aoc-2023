//
//  Advent of Code 2023 Solutions: Day 2
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/01/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day02.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
#include <climits>   //INT_MIN, INT_MAX, etc.



using namespace std;
namespace AocDay02 {

    static const std::string InputFileName = "Day02.txt";
    std::string solvea() {
        unordered_map<string, int>totals {
            {"red",12},
            {"green",13},
            {"blue", 14}
        };
        int idSum = 0;
        auto input = parseFileForLines(InputFileName);
        for(const auto& game : input) {
            auto rounds = parseGame(game);
            if(validateGame(totals, rounds)) {
                auto gameWords = parseLineForWords(game);
                idSum += stoi(gameWords[1]);
            }
        }

		return to_string(idSum);
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);
        long sumOfPowers{0};
        for(const auto& game : input) {
            sumOfPowers += calculateGameMinPower(game);
        }

		return to_string(sumOfPowers);
    }

    std::vector<std::string> parseGame(const std::string& game) {
        std::vector<std::string> rounds{};
        auto curPos = game.find(":")+1;
        while(curPos != string::npos) {
            auto semiPos = game.find(";",curPos+1);
            while(semiPos != string::npos) {
                rounds.emplace_back(game.begin()+curPos+1,game.begin()+semiPos);
                curPos = semiPos+1;
                semiPos = game.find(";",curPos+1);
            }
            rounds.emplace_back(game.begin()+curPos+1,game.end());
            curPos = string::npos;
        }
        
        return rounds;
    }

    std::unordered_map<std::string,int> parseRound(const std::string& round) {
        unordered_map<string, int> cubesPlayed{};
        vector<string> cubes{};
        size_t curPos = 0;
        while(curPos != string::npos) {
            auto commaPos = round.find(",",curPos);
            while(commaPos != string::npos) {
                cubes.emplace_back(round.begin()+curPos,round.begin()+commaPos);
                curPos = commaPos+1;
                commaPos = round.find(",",curPos);
            }
            cubes.emplace_back(round.begin()+curPos,round.end());
            curPos = string::npos;
        }
        
        for(const auto& line : cubes) {
            auto parsed = parseLineForWords(line);
            auto num = stoi(parsed[0]);
            cubesPlayed[parsed[1]] = num;
        }
        
        return cubesPlayed;
    }

    bool validateGame(const std::unordered_map<std::string,int>& totals, const std::vector<std::string>& rounds) {
        for(const auto& round : rounds) {
            auto cubesPlayed = parseRound(round);
            for(const auto& played : cubesPlayed) {
                if(totals.count(played.first) > 0) {
                    if(played.second > totals.at(played.first)) {
                        return false;
                    }
                }
            }
        }
        
        return true;
    }

    int calculateGameMinPower(const std::string& game) {
        auto rounds = parseGame(game);
        unordered_map<string, int>minViableCubes{};
        for(const auto& round : rounds) {
            auto cubesPlayed = parseRound(round);
            for(const auto& played : cubesPlayed) {
                if(minViableCubes[played.first] < played.second) {
                    minViableCubes[played.first] = played.second;
                }
            }
        }
        
        return minViableCubes["red"] * minViableCubes["blue"] * minViableCubes["green"];
    }

}
