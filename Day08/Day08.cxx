//
//  Advent of Code 2023 Solutions: Day 8
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/08/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day08.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
//#include <array>
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
namespace AocDay08 {

    static const std::string InputFileName = "Day08.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);
        auto t = GenerateTree(input);

		return to_string(FindStepsToTarget(t, input[0]));
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);
        auto t = GenerateTree(input);

        return to_string(FindStepsToTarget(t, input[0], true));
    }

    Tree GenerateTree(const std::vector<std::string>& input) {
        Tree t{};
        for(auto i = 2;i < input.size();i++) {
            string parent{input[i].begin()+0,input[i].begin()+3};
            string child1{input[i].begin()+7,input[i].begin()+10};
            string child2{input[i].begin()+12,input[i].begin()+15};
            t[parent] = std::make_pair(child1,child2);
        }
        
        return t;
    }

    int32_t FindStepsToTarget(const Tree& tree, const std::string& directions, bool ghostPath) {
        auto itr = directions.begin();
        bool found = false;
        int32_t steps = 0;
        vector<string> current{};
        if(ghostPath) {
            for(const auto& n : tree) {
                if(n.first.back() == 'A') {
                    current.push_back(n.first);
                }
            }
        } else {
            current.push_back("AAA");
        }
        string target{"ZZZ"};
        while(!found) {
            vector<string> next;
            for(auto i = 0; i < current.size();i++) {
                if(tree.count(current[i]) > 0) {
                    if(*itr == 'L') {
                         next.push_back(tree.at(current[i]).first);
                    } else {
                        next.push_back(tree.at(current[i]).second);
                    }
                }
            }
            std::advance(itr, 1);
            if(itr == directions.end()) {
                itr = directions.begin();
            }
            steps++;
            if(steps == INT32_MAX) {
                cerr << "Overflow detected" << endl;
            }
            if(ghostPath) {
                size_t count{0};
                for(auto i = 0; i < next.size();i++) {
                    if(next[i].back() == 'Z') {
                        count++;
                    }
                }
                found = count == next.size();
            } else {
                if(next.front() == target) {
                    found = true;
                }
            }
            std::swap(current,next);
        }
        
        return steps;
    }
}
