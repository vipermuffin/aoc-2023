//
//  Advent of Code 2023 Solutions: Day 13
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/14/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day13.h"
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
namespace AocDay13 {

    static const std::string InputFileName = "Day13.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);

        //27604 && 32138 is too low
		return to_string(calcReflections(input));
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);
        //31876 is too low
        //48451, 51200 is too high
        return to_string(calcNewReflections(input));
		return "---";
    }

    int32_t findHorizontalReflection(const std::vector<std::string>& image) {
        vector<size_t> idxs{};
        
        //Find possible reflections
        for(auto i = 1; i < image.size(); i++) {
            if(image[i-1] == image[i]) {
                idxs.push_back(i);
            }
        }
        
        if(idxs.size() == 0) {
            return 0;
        }
//        if(idxs.size() > 1) {
//            printVector(idxs);
//            for(const auto& s : image) {
//                cout << s << endl;
//            }
//        }
        
        auto rIdxItr = idxs.rbegin();
        while(rIdxItr != idxs.rend()) {
            auto fItr = image.begin()+*rIdxItr;
            auto rItr = std::prev(fItr);
            auto start = fItr;
            
            while(fItr != image.end() && rItr != image.begin() && *rItr == *fItr) {
                std::advance(rItr, -1);
                std::advance(fItr, 1);
            }
            
            if(fItr == image.end()) {
                return static_cast<int32_t>(std::distance(image.begin(), start));
            } else if(rItr == image.begin() && *rItr == *fItr) {
                return static_cast<int32_t>(std::distance(image.begin(), start));
            }
            std::advance(rIdxItr, 1);
        }
        return 0;
    }

    std::vector<std::string> transposeImage(const std::vector<std::string>& image) {
        vector<string> newImage{};
        string newRow(image.size(),'.');
        
        for(auto col = 0; col < image[0].size(); col++) {
            auto itr = image.begin();
            auto sItr = newRow.begin();
            while(itr != image.end()) {
                *sItr = itr->at(col);
                std::advance(sItr, 1);
                std::advance(itr, 1);
            }
            newImage.push_back(newRow);
        }
        
        return newImage;
    }

    int32_t calcReflections(const std::vector<std::string>& input) {
        auto itr = input.begin();
        int32_t acc{0};
        while(itr != input.end()) {
            vector<string> x;
            while(itr != input.end() && *itr != ""){
                x.push_back(*itr);
                std::advance(itr, 1);
            }
            int32_t result = findHorizontalReflection(x);
            auto y = transposeImage(x);
            result *= 100;
            result += findHorizontalReflection(y);
            if(itr != input.end()) {
                std::advance(itr, 1);
            }
            acc += result;
        }
        
        return acc;
    }

int32_t calcNewReflections(const std::vector<std::string>& input) {
    auto itr = input.begin();
    int32_t acc{0};
    while(itr != input.end()) {
        vector<string> x;
        while(itr != input.end() && *itr != ""){
            x.push_back(*itr);
            std::advance(itr, 1);
        }
        
        int32_t result = 0;
        int32_t initResult = findHorizontalReflection(x);
        auto y = transposeImage(x);
        initResult *= 100;
        initResult += findHorizontalReflection(y);
        int32_t newResult{0};
        bool done = false;
        cout << "------------" << endl << initResult << endl;
        for(auto i = 0; !done && i < x.size(); i++) {
            for(auto j = 0; !done && j < x[i].size(); j++) {
                x[i][j] = x[i][j] == '#' ? '.' : '#';
                newResult = findHorizontalReflection(x);
                newResult *= 100;
                y = transposeImage(x);
                newResult += findHorizontalReflection(y);
            
                if(newResult != 0 && newResult != initResult) {
                    if(newResult % 100 == initResult % 100) {
                        cout << '.';
                        newResult -= initResult%100;
                    }
                    if(newResult / 100 == initResult / 100) {
                        cout << 'x';
                        newResult -= (initResult/100)*100;
                    }
                    cout << newResult << endl;
                    result = newResult;
//                    done = true;
                }
                x[i][j] = x[i][j] == '#' ? '.' : '#';
            }
        }
        
        if(itr != input.end()) {
            std::advance(itr, 1);
        }
        acc += result;
    }
    
    return acc;
}
}
