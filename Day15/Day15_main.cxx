//
//  Advent of Code 2023 Main Runner: Day 15
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/16/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//
#include <stdio.h>
#include <string>
#include <iostream>

namespace AocDay15{
    extern std::string solvea();
    extern std::string solveb();
}
using namespace std;

int main(int argc, char *argv[]) {

    std::cout << "Day15" << "a: " << AocDay15::solvea() << std::endl;
    std::cout << "Day15" << "b: " << AocDay15::solveb() << std::endl;
    return 0;
}
