//
//  Advent of Code 2023 Solutions: Day 19
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/27/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day19.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
#include <array>
#include <climits>   //INT_MIN, INT_MAX, etc.
//#include <chrono>
//#include <iostream>
//#include <fstream> //ifstream
//#include <functional> //std::function
//#include <iomanip> //setfill setw hex
//#include <map>
//#include <math.h> //sqrt
#include <numeric> //std::accumulate
//#include <queue>
//#include <regex>
//#include <set>
//#include <sstream>
#include <thread>
//#include <tuple>
//#include <unordered_map>
//#include <unordered_set>


using namespace std;
namespace AocDay19 {
#include "GenOutput.c"

    static const std::string InputFileName = "Day19.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);

		return to_string(runWorkflows());
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);

		return to_string(runWorkflows2());
    }

}
