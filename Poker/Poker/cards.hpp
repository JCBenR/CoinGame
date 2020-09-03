//
//  cards.hpp
//  Poker
//
//  Created by Justin Siebenhaar on 9/1/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#ifndef cards_hpp
#define cards_hpp

#include <stdio.h>
#include <iostream>
#include <vector>


//each card has a rank, suit, and these two values for max nums
struct Card {
    int rankNum;
    std::string rank;
    std::string suit;
    int num_suits = 4;
    int num_ranks = 13;
};

//each deck is made up of a vector of cards, each item being the type of Card. it also has a max size of 52.
struct Deck {
    std::vector<Card> cards;
    int maxSize = 52;
};

//declaring our functions using references.
void getDeck(Deck&);
void printDeck(Deck&);
void shuffle(Deck& deck);
Deck hand(Deck deck);
void printHand(Deck& deck);
bool isFlush(Deck deck);
void isStraight(Deck deck);
Card findMin(Deck hand);
#endif /* cards_hpp */
