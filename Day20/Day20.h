//
//  Advent of Code 2023 Solutions: Day 20
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/21/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//
#pragma once
#include <bitset>
#include <string>
#include <vector>
#include <unordered_map>

namespace AocDay20 {
//Function Definitions
constexpr size_t MOD_BITS = 64;

class IModule {
public:
    IModule() = default;
    virtual ~IModule(){}
    virtual std::vector<size_t> receivePulse(const size_t valPos, std::bitset<MOD_BITS>&){}
    void addConnection(const size_t pos) {
        _connectedPos.push_back(pos);
    }
    bool getValPos() const {
        return _pos;
    }
    bool getVal(const std::bitset<MOD_BITS>& bits) const{
        return bits[_pos];
    }
    
protected:
    size_t _pos;
    std::vector<size_t> _connectedPos;
};

class FlipFlop : public IModule {
public:
    FlipFlop(const size_t initPos);
    virtual ~FlipFlop() {}
    virtual std::vector<size_t> receivePulse(const size_t valPos, std::bitset<MOD_BITS>&);
    
};

class Conjunction : public IModule {
public:
    Conjunction(const size_t initPos) {
        _pos = initPos;
    }
    virtual ~Conjunction() {}
    virtual std::vector<size_t> receivePulse(const size_t valPos, std::bitset<MOD_BITS>&);
private:
    std::unordered_map<size_t, bool>memory;
};

class Broadcaster : public IModule {
public:
    Broadcaster(const size_t initPos = 0) {
        _pos = initPos;
    }
    virtual ~Broadcaster() {}
    virtual std::vector<size_t> receivePulse(const size_t valPos, std::bitset<MOD_BITS>&) {
        return _connectedPos;
    }
};
std::vector<std::unique_ptr<IModule>> buildModuleConnections(const std::vector<std::string>& input);

}
