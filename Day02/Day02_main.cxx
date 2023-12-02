//
//  Advent of Code 2023 Main Runner: Day 2
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/01/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//
#include <stdio.h>
#include <string>
#include <iostream>

namespace AocDay02{
    extern std::string solvea();
    extern std::string solveb();
}
using namespace std;

int main(int argc, char *argv[]) {

    std::cout << "Day02" << "a: " << AocDay02::solvea() << std::endl;
    std::cout << "Day02" << "b: " << AocDay02::solveb() << std::endl;
    return 0;
}
