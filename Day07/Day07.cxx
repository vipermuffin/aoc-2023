//
//  Advent of Code 2023 Solutions: Day 7
//
//  https://adventofcode.com/2023
//
//  Created by vipermuffin on 12/07/2023.
//  Copyright © 2023 vipermuffin. All rights reserved.
//

#include "Day07.h"
#include "AoCUtils.h"
//Common Libraries
#include <algorithm> //std::sort, find, for_each, max_element, etc
#include <climits>   //INT_MIN, INT_MAX, etc.
#include <sstream>
#include <unordered_map>



using namespace std;
namespace AocDay07 {

    static const std::string InputFileName = "Day07.txt";
    std::string solvea() {
        auto input = parseFileForLines(InputFileName);
        vector<CamelHand> hands{};
        hands.reserve(input.size());
        for(const auto& line : input) {
            hands.emplace_back(line);
        }
        
		return to_string(getTotalWinnings(hands));
    }

    std::string solveb() {
        auto input = parseFileForLines(InputFileName);
        vector<CamelHand> hands{};
        hands.reserve(input.size());
        for(const auto& line : input) {
            hands.emplace_back(line,true);
        }

        return to_string(getTotalWinnings(hands));
    }

    CamelHand::CamelHand(const std::string& handStr, bool JWild) {
        stringstream ss{handStr};
        string hand;
        int32_t bid;
        ss >> hand;
        ss >> bid;
        _hand = hand;
        _bid = bid;
        JisWild = JWild;
        calcType();
    }

    CamelHand::CamelHand(const std::string& handStr, const int32_t bidVal, bool JWild) {
        _hand = handStr;
        _bid = bidVal;
        JisWild = JWild;
        calcType();
    }

    void CamelHand::calcType() {
        string handCpy{_hand};
        std::sort(handCpy.begin(),handCpy.end());
        int8_t uniqCnt{1}, maxCnt{0}, curCnt{1};
        int8_t wildCnt{0};
        auto tail = handCpy.begin();
        auto head = std::next(handCpy.begin());
        if(JisWild && *tail == 'J') {
            wildCnt++;
            uniqCnt--;
        }
        while(head != handCpy.end()) {
            if(*head != *tail) {
                //adjacent cards different
                if(JisWild && *head == 'J') {
                    wildCnt++;
                }else {
                    uniqCnt++;
                }
                curCnt = 1;
            } else {
                if(JisWild && *head == 'J') {
                    wildCnt++;
                } else {
                    curCnt++;
                }
            }
            if(maxCnt < curCnt) {
                maxCnt = curCnt;
            }
            tail = head;
            std::advance(head, 1);
        }
        maxCnt += wildCnt;
        
        if(uniqCnt == 1 || uniqCnt == 0) {
            _handType = FIVE_OF_A_KIND;
        } else if (maxCnt == 4) {
            _handType = FOUR_OF_A_KIND;
        } else if (maxCnt == 3) {
            if(uniqCnt == 2) {
                _handType = FULL_HOUSE;
            } else {
                _handType = THREE_OF_A_KIND;
            }
        } else if (maxCnt == 2) {
            if(uniqCnt == 3) {
                _handType = TWO_PAIR;
            } else {
                _handType = ONE_PAIR;
            }
        } else {
            _handType = HIGH_CARD;
        }
    }

    int64_t CamelHand::getBidForRank(const int32_t rank) const {
        return _bid * rank;
    }

    bool CamelHand::operator<(const CamelHand &rhs) const {
        if(_handType == rhs._handType) {
            //Second ordering
            unordered_map<char, int32_t> scoreChart{
                {'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},
                {'9',9},{'T',10},{'J',11},{'Q',12},{'K',13},{'A',14}
            };
            if(JisWild) {
                scoreChart['J'] -= 10;
            }
            if(_hand == rhs._hand) {
                return false;
            }
            auto itr = _hand.begin();
            auto rhsItr = rhs._hand.begin();
            while(itr != _hand.end() && rhsItr != rhs._hand.end()) {
                if(*itr == *rhsItr) {
                    std::advance(itr, 1);
                    std::advance(rhsItr, 1);
                } else {
                    return scoreChart[*itr] < scoreChart[*rhsItr];
                }
            }
        }
        
        return _handType < rhs._handType;
    }

    int64_t getTotalWinnings(std::vector<CamelHand>& camelHands) {
        std::sort(camelHands.begin(),camelHands.end());
        int64_t acc = 0;
        int32_t rank = 0;
        for(const auto& ch : camelHands) {
            acc += ch.getBidForRank(++rank);
        }
        
        return acc;
    }
}
