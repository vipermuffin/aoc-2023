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
        bitset<MOD_BITS> x{0};
        auto modules = buildModuleConnections(input);
        
		return to_string(pressButton(x, modules,1000));
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);
        bitset<MOD_BITS> x{0};
        string keyNode{"rx"};
        size_t keyPos{0};
        auto modules = buildModuleConnections(input, &keyNode, &keyPos);
        
        return to_string(pressButton(x, modules,1000000000000, &keyPos));
    }

FlipFlop::FlipFlop(const size_t initPos) {
    _pos = initPos;
//    cout << "New FlipFlop with position " << _pos << endl;
}

std::vector<size_t> FlipFlop::receivePulse(const size_t valPos, std::bitset<MOD_BITS> &bits) {
    std::vector<size_t> retVec{};
//    cout << "FlipFlop " << _pos << " receiving pulse of " << (bits[valPos] ? "HIGH..." : "LOW...") ;
    if(!bits[valPos]) {
        bits.flip(_pos);
//        cout << "sending " << _connectedPos.size() << (bits[_pos] ? " HIGH" : " LOW") << " pulses" << endl;
        return _connectedPos;
    }
    return retVec;
}

std::vector<size_t> Conjunction::receivePulse(const size_t valPos, std::bitset<MOD_BITS> &bits) {
//    cout << "Conjuction " << _pos << " receiving pulse of " << (bits[valPos] ? "HIGH..." : "LOW...");
    memory[valPos] = bits[valPos];
    bits[_pos] = this->getVal(bits);
//    cout << "sending " << _connectedPos.size() << (bits[_pos] ? " HIGH" : " LOW") << " pulses" << endl;
    return _connectedPos;
}

bool Conjunction::getVal(const std::bitset<MOD_BITS> &bits) const {
    bool setVal = memory.size() == 0;
    for(const auto& kvp : memory) {
        if(!kvp.second) {
            setVal = true;
        }
    }
    return setVal;
}

void Conjunction::addInputConnection(const size_t pos) {
    memory[pos] = false;
}

std::vector<std::unique_ptr<IModule>> buildModuleConnections(const std::vector<std::string>& input, const std::string* keyNode, size_t* keyValPos) {
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
            if(moduleMapping.count(output) == 0) {
                //some output module.  Treat as broadcast with a position
                moduleMapping[output] = retVec.size();
                if(keyNode != nullptr && output == *keyNode) {
                    cout << "Key Node found for position " << moduleMapping[output] << endl;
                    if(keyValPos != nullptr) {
                        *keyValPos = moduleMapping[output];
                    }
                }
                retVec.push_back(unique_ptr<Broadcaster>(new Broadcaster(moduleMapping[output])));
            }
            retVec[moduleMapping.at(kvp.first)]->addOutputConnection(moduleMapping.at(output));
            retVec[moduleMapping.at(output)]->addInputConnection(moduleMapping.at(kvp.first));
        }
    }
    
    return retVec;
}

uint64_t pressButton(std::bitset<MOD_BITS>& bits, ModuleCollection& modules, int64_t numPresses, size_t* keyValPos) {
    
    auto initVal = bits.to_ullong();
    bool firstPass = true;
    uint64_t highPulseCnt{0};
    uint64_t lowPulseCnt{0};
    for(auto i = 1; i < modules.size(); i++) {
        bits[i] = modules[i]->getVal(bits);
    }
    for(auto i = 0; i < numPresses; i++) {
//        cout << "------------------Press " << i << "-------------------" << endl;
        vector<std::pair<size_t,size_t>> updateMods{{0,0}};
        do{
            vector<std::pair<size_t,size_t>> nextMods{};
            for(const auto pos : updateMods) {
                firstPass = pos.first == 0;
                if(keyValPos != nullptr && *keyValPos == pos.second) {
                    if(bits[pos.first] == false) {
                        return i;
                    }
                }
                auto result = modules[pos.second]->receivePulse(pos.first, bits);
                if(bits[pos.first]) {
                    highPulseCnt++;
                } else {
                    lowPulseCnt++;
                }
                for(const auto nextPos : result) {
                    nextMods.emplace_back(pos.second,nextPos);
                }
            }
            std::swap(nextMods,updateMods);
//            cout << bits.to_string() << endl;
        } while(updateMods.size() != 0);
        
    }
    
//    cout << "Sent " << highPulseCnt << " high pulses and " << lowPulseCnt << " low pulses" << endl;
    return lowPulseCnt*highPulseCnt;
}
}
