//
//  Advent of Code 2023 Tests: Day 10
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/10/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day10.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay10{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay10;

TEST(Y2023_SolveDay10, FinalSolutionPartA) {
    EXPECT_EQ("6927", solvea());
}

TEST(Y2023_SolveDay10, FinalSolutionPartB) {
    EXPECT_EQ("---", solveb());
}

TEST(Y2023_Day10Example,Test1) {
    vector<string> x {
        "7-F7-",
        ".FJ|7",
        "SJLL7",
        "|F--J",
        "LJ.LJ",
    };
    auto result = findSCharacter(x);
    EXPECT_EQ(0,result.first);
    EXPECT_EQ(2,result.second);
    
    auto initResult = initVisited(x);
    ASSERT_EQ(5,initResult.size());
    ASSERT_EQ(5,initResult[0].size());
    EXPECT_EQ(-1,initResult[0].front());
    EXPECT_EQ(-1,initResult[0].back());
    EXPECT_EQ(-1,initResult[4].front());
    EXPECT_EQ(-1,initResult[4].back());
    
}

TEST(Y2023_Day10Example,Test2) {
    vector<string> grid {
        "-L|F7",
        "7S-7|",
        "L|7||",
        "-L-J|",
        "L|-JF"
    };
    auto visited = initVisited(grid);
    updateVisited(grid, visited);
    EXPECT_EQ(-1,visited[0][0]);
    EXPECT_EQ(-1,visited[4][4]);
    EXPECT_EQ(0,visited[1][1]);
    EXPECT_EQ(1,visited[1][2]);
    EXPECT_EQ(1,visited[2][1]);
    EXPECT_EQ(2,visited[1][3]);
    EXPECT_EQ(2,visited[3][1]);
    EXPECT_EQ(3,visited[3][2]);
    EXPECT_EQ(3,visited[2][3]);
    EXPECT_EQ(4,visited[3][3]);
}

TEST(Y2023_Day10Example,Test3a) {
    vector<string> grid {
        "...........",
        ".S-------7.",
        ".|F-----7|.",
        ".||.....||.",
        ".||.....||.",
        ".|L-7.F-J|.",
        ".|..|.|..|.",
        ".L--J.L--J.",
        "...........",
    };
    auto visited = initVisited(grid);
    updateVisited(grid, visited);
    EXPECT_EQ(4,countSurroundedTiles(grid, visited));
}

TEST(Y2023_Day10Example,Test3b) {
    vector<string> grid {
        "...........",
        ".S-------7.",
        ".|F-----7|.",
        ".||.....||.",
        ".||.....||.",
        ".||.....||.",
        ".|L-7.F-J|.",
        ".|..|.|..|.",
        ".L--J.L--J.",
        "...........",
    };
    auto visited = initVisited(grid);
    updateVisited(grid, visited);
    EXPECT_EQ(4,countSurroundedTiles(grid, visited));
}

TEST(Y2023_Day10Example,Test3c) {
    vector<string> grid {
        "............",
        ".S--------7.",
        ".|F------7|.",
        ".||......||.",
        ".||......||.",
        ".||......||.",
        ".|L--7.F-J|.",
        ".|...|.|..|.",
        ".L---J.L--J.",
        "............",
    };
    auto visited = initVisited(grid);
    updateVisited(grid, visited);
    EXPECT_EQ(5,countSurroundedTiles(grid, visited));
}

TEST(Y2023_Day10Example,Test3d) {
    vector<string> grid {
        "..........",
        ".S------7.",
        ".|F----7|.",
        ".||OOOO||.",
        ".||OOOO||.",
        ".|L-7F-J|.",
        ".|II||II|.",
        ".L--JL--J.",
        "..........",
    };
    auto visited = initVisited(grid);
    updateVisited(grid, visited);
    EXPECT_EQ(4,countSurroundedTiles(grid, visited));
}

TEST(Y2023_Day10Example,Test4) {
    vector<string> grid {
        ".F----7F7F7F7F-7....",
        ".|F--7||||||||FJ....",
        ".||.FJ||||||||L7....",
        "FJL7L7LJLJ||LJ.L-7..",
        "L--J.L7...LJS7F-7L7.",
        "....F-J..F7FJ|L7L7L7",
        "....L7.F7||L7|.L7L7|",
        ".....|FJLJ|FJ|F7|.LJ",
        "....FJL-7.||.||||...",
        "....L---J.LJ.LJLJ...",
    };
    auto visited = initVisited(grid);
    updateVisited(grid, visited);
    EXPECT_EQ(8,countSurroundedTiles(grid, visited));
}
