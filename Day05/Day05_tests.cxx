//
//  Advent of Code 2023 Tests: Day 5
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/05/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day05.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

namespace AocDay05{
    extern std::string solvea();
    extern std::string solveb();
}

using namespace std;
using namespace AocDay05;

TEST(Y2023_SolveDay5, FinalSolutionPartA) {
    EXPECT_EQ("3374647", solvea());
}

TEST(Y2023_SolveDay5, FinalSolutionPartB) {
    EXPECT_EQ("6082852", solveb());
}

TEST(Y2023_Day5Example,Test1) {
    struct OffsetPoint op{"50 98 2"};
    EXPECT_EQ(50,op.destStart);
    EXPECT_EQ(98,op.sourceStart);
    EXPECT_EQ(2,op.range);
    EXPECT_EQ(50,op.getDestinationForSource(98));
    EXPECT_EQ(51,op.getDestinationForSource(99));
    EXPECT_EQ(98,op.getSourceForDestination(50));
    EXPECT_EQ(99,op.getSourceForDestination(51));
    EXPECT_TRUE(op.destinationInRange(50));
    EXPECT_TRUE(op.destinationInRange(51));
    EXPECT_FALSE(op.destinationInRange(49));
    EXPECT_FALSE(op.destinationInRange(52));
    EXPECT_TRUE(op.sourceInRange(98));
    EXPECT_TRUE(op.sourceInRange(99));
    EXPECT_FALSE(op.sourceInRange(97));
    EXPECT_FALSE(op.sourceInRange(100));
}

TEST(Y2023_Day5Example,Test2) {
    vector<string> input {
        "seeds: 79 14 55 13",
        "",
        "seed-to-soil map:",
        "50 98 2",
        "52 50 48",
        "",
        "soil-to-fertilizer map:",
        "0 15 37",
        "37 52 2",
        "39 0 15",
        "",
        "fertilizer-to-water map:",
        "49 53 8",
        "0 11 42",
        "42 0 7",
        "57 7 4",
        "",
        "water-to-light map:",
        "88 18 7",
        "18 25 70",
        "",
        "light-to-temperature map:",
        "45 77 23",
        "81 45 19",
        "68 64 13",
        "",
        "temperature-to-humidity map:",
        "0 69 1",
        "1 0 69",
        "",
        "humidity-to-location map:",
        "60 56 37",
        "56 93 4"
    };
    auto result = parseConnections(input);
    EXPECT_EQ(7,result.size());
    ASSERT_EQ(1,result.count("seed-to-soil map:"));
    EXPECT_EQ(2,result.at("seed-to-soil map:").size());
    ASSERT_EQ(1,result.count("soil-to-fertilizer map:"));
    EXPECT_EQ(3,result.at("soil-to-fertilizer map:").size());
    ASSERT_EQ(1,result.count("fertilizer-to-water map:"));
    EXPECT_EQ(4,result.at("fertilizer-to-water map:").size());
    ASSERT_EQ(1,result.count("water-to-light map:"));
    EXPECT_EQ(2,result.at("water-to-light map:").size());
    ASSERT_EQ(1,result.count("light-to-temperature map:"));
    EXPECT_EQ(3,result.at("light-to-temperature map:").size());
    ASSERT_EQ(1,result.count("temperature-to-humidity map:"));
    EXPECT_EQ(2,result.at("temperature-to-humidity map:").size());
    ASSERT_EQ(1,result.count("humidity-to-location map:"));
    EXPECT_EQ(2,result.at("humidity-to-location map:").size());
}

TEST(Y2023_Day5Example,Test3) {
    vector<string> input {
        "seeds: 79 14 55 13",
        "",
        "seed-to-soil map:",
        "50 98 2",
        "52 50 48",
        "",
        "soil-to-fertilizer map:",
        "0 15 37",
        "37 52 2",
        "39 0 15",
        "",
        "fertilizer-to-water map:",
        "49 53 8",
        "0 11 42",
        "42 0 7",
        "57 7 4",
        "",
        "water-to-light map:",
        "88 18 7",
        "18 25 70",
        "",
        "light-to-temperature map:",
        "45 77 23",
        "81 45 19",
        "68 64 13",
        "",
        "temperature-to-humidity map:",
        "0 69 1",
        "1 0 69",
        "",
        "humidity-to-location map:",
        "60 56 37",
        "56 93 4"
    };
    auto result = parseConnections(input);
    SeedPlaybook sp{79};
    updateSeed2Location(result, sp);
    EXPECT_EQ(81,sp.soilId);
    EXPECT_EQ(81,sp.fertlizierId);
    EXPECT_EQ(81,sp.waterId);
    EXPECT_EQ(74,sp.lightId);
    EXPECT_EQ(78,sp.temperatureId);
    EXPECT_EQ(78,sp.humidityId);
    EXPECT_EQ(82,sp.locationId);
}

TEST(Y2023_Day5Example,Test4) {
    vector<string> input {
        "seeds: 79 14 55 13",
        "",
        "seed-to-soil map:",
        "50 98 2",
        "52 50 48",
        "",
        "soil-to-fertilizer map:",
        "0 15 37",
        "37 52 2",
        "39 0 15",
        "",
        "fertilizer-to-water map:",
        "49 53 8",
        "0 11 42",
        "42 0 7",
        "57 7 4",
        "",
        "water-to-light map:",
        "88 18 7",
        "18 25 70",
        "",
        "light-to-temperature map:",
        "45 77 23",
        "81 45 19",
        "68 64 13",
        "",
        "temperature-to-humidity map:",
        "0 69 1",
        "1 0 69",
        "",
        "humidity-to-location map:",
        "60 56 37",
        "56 93 4"
    };
    auto db = parseConnections(input);
    vector<int64_t> sp{79, 14, 55, 13};
    auto result = findClosestSeed(db, sp);
    EXPECT_EQ(46,result);

}
