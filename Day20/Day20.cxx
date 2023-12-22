//
//  Advent of Code 2023 Solutions: Day 20
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/21/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day20.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
#include <bitset>
#include <climits>   //INT_MIN, INT_MAX, etc.
//#include <chrono>
//#include <iostream>
//#include <fstream> //ifstream
//#include <functional> //std::function
//#include <iomanip> //setfill setw hex
//#include <map>
//#include <math.h> //sqrt
//#include <numeric> //std::accumulate
//#include <queue>
//#include <regex>
//#include <set>
//#include <sstream>
//#include <thread>
//#include <tuple>
//#include <unordered_map>
//#include <unordered_set>


using namespace std;
namespace AocDay20 {

    static const std::string InputFileName = "Day20.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);

		return "---";
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);

		return "---";
    }

FlipFlop::FlipFlop(const size_t initPos) {
    _pos = initPos;
    cout << "New FlipFlop with position " << _pos << endl;
}

std::vector<size_t> FlipFlop::receivePulse(const size_t valPos, std::bitset<MOD_BITS> &bits) {
    std::vector<size_t> retVec{};
    if(!bits[valPos]) {
        bits.flip(_pos);
        retVec = _connectedPos;
    }
    return retVec;
}

std::vector<size_t> Conjunction::receivePulse(const size_t valPos, std::bitset<MOD_BITS> &bits) {
    memory[valPos] = bits[valPos];
    bool setVal = false;
    for(const auto& kvp : memory) {
        if(!kvp.second) {
            setVal = true;
        }
    }
    bits[_pos] = setVal;
    return _connectedPos;
}

std::vector<std::unique_ptr<IModule>> buildModuleConnections(const std::vector<std::string>& input) {
    std::vector<std::unique_ptr<IModule>> retVec{};
    unordered_map<string, size_t> moduleMapping{{"broadcaster",0}};
    unordered_map<string, vector<string>> pendingConnections{};
    
    retVec.push_back(unique_ptr<Broadcaster>(new Broadcaster()));
    for(const auto& line : input) {
        auto words = parseLineForWords(line);
        string name{};
        
        if(words[0][0] == '%') {
            //Flip Flop
            name = string(words[0].begin()+1, words[0].end());
            
            moduleMapping[name] = retVec.size();
            retVec.push_back(unique_ptr<FlipFlop>(new FlipFlop(moduleMapping[name])));
        } else if (words[0][0] == '&') {
            //Conjunction
            name = string(words[0].begin()+1, words[0].end());
            moduleMapping[name] = retVec.size();
            retVec.push_back(unique_ptr<Conjunction>(new Conjunction(moduleMapping[name])));
        } else {
            //broadcaster 
            name = words[0];
        }
        
        for(auto i = 2; i < words.size(); i++) {
            auto commaPos = words[i].find(",");
            if(commaPos != string::npos) {
                words[i].erase(words[i].begin()+commaPos);
            }
            pendingConnections[name].push_back(words[i]);
        }
    }
    
    for(const auto& kvp : pendingConnections) {
        for(const auto& output : kvp.second) {
            retVec[moduleMapping.at(kvp.first)]->addConnection(moduleMapping.at(output));
        }
    }
    
    return retVec;
}

void pressButton(std::bitset<MOD_BITS>& bits, ModuleCollection& modules) {
    vector<std::pair<size_t,size_t>> updateMods{{0,0}};
    auto initVal = bits.to_ullong();
    bool firstPass = true;
    do{
        vector<std::pair<size_t,size_t>> nextMods{};
        for(const auto pos : updateMods) {
            firstPass = pos.first == 0;
            auto result = modules[pos.second]->receivePulse(pos.first, bits);
            for(const auto nextPos : result) {
                nextMods.emplace_back(pos.second,nextPos);
            }
        }
        std::swap(nextMods,updateMods);
        cout << bits.to_string() << endl;
    } while(firstPass || bits.to_ullong() != initVal);
}
}
