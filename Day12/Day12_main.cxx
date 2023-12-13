//
//  Advent of Code 2023 Main Runner: Day 12
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/12/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//
#include <stdio.h>
#include <string>
#include <iostream>

namespace AocDay12{
    extern std::string solvea();
    extern std::string solveb();
}
using namespace std;

int main(int argc, char *argv[]) {

    std::cout << "Day12" << "a: " << AocDay12::solvea() << std::endl;
    std::cout << "Day12" << "b: " << AocDay12::solveb() << std::endl;
    return 0;
}
