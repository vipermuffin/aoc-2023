//
//  Advent of Code 2023 Main Runner: Day 11
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/11/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//
#include <stdio.h>
#include <string>
#include <iostream>

namespace AocDay11{
    extern std::string solvea();
    extern std::string solveb();
}
using namespace std;

int main(int argc, char *argv[]) {

    std::cout << "Day11" << "a: " << AocDay11::solvea() << std::endl;
    std::cout << "Day11" << "b: " << AocDay11::solveb() << std::endl;
    return 0;
}