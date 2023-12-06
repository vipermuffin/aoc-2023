//
//  Advent of Code 2023 Solutions: Day 4
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/04/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day04.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
#include <climits>   //INT_MIN, INT_MAX, etc.
#include <numeric> //std::accumulate
#include <unordered_set>


using namespace std;
namespace AocDay04 {

    static const std::string InputFileName = "Day04.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);
        int64_t total{0};
        for(const auto& card : input) {
            total += scoreCard(card);
        }

		return to_string(total);
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);

		return to_string(countCards(input));
    }

    int32_t scoreCard(const std::string& card, bool performShift) {
        // Get winning numbers
        auto startOff = card.find(":")+2;
        auto endOff = card.find("|")-1;
        
        string winningNumsStr{card.begin()+startOff,card.begin()+endOff};
        auto winningNums = parseLineForWords(winningNumsStr);
        unordered_set<string> winners{winningNums.begin(),winningNums.end()};
        
        //Get played
        startOff = endOff+3;
        string played{card.begin()+startOff,card.end()};
        auto playedNums = parseLineForWords(played);
        
        int32_t winCnt{0};
        for(const auto& val : playedNums) {
            if(winners.count(val) > 0) {
                winCnt++;
            }
        }
        if(performShift) {
            return winCnt > 0 ? 1 << (winCnt-1):0;
        }
        return winCnt;
    }

    int32_t countCards(const std::vector<std::string>& cards){
        vector<int32_t> cardCnt(cards.size(),1);
        for(auto i = 0; i < cards.size();i++) {
            auto copyCnt = scoreCard(cards[i],false);
            for(auto j = 0; j < copyCnt; j++) {
                cardCnt[i+j+1] += cardCnt[i];
            }
        }
        
        return std::accumulate(cardCnt.begin(),cardCnt.end(),0);
    }
}
