//
//  main.cpp
//  Poker
//
//  Created by Justin Siebenhaar on 9/1/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
#include <vector>
#include "cards.hpp"

using namespace std;



int main(int argc, const char * argv[]) {
    //TEST DECKS
    Deck flush = {
        {{10, "ten", "Spades"}, {3, "three", "Spades"}, {4, "four", "Spades"}, {5, "five", "Spades"}, {6, "six", "Spades"}}
    };
    
    
    //we create a deck called myDeck, of type Deck.
    Deck myDeck;
    //we pass mydeck into the get deck function
    getDeck(myDeck);
    shuffle(myDeck);
    
    Deck newHand = hand(myDeck);
    printDeck(flush);
    bool flushTest = isFlush(flush);
    std::cout<<flushTest<<std::endl;
    isStraight(flush);
    
    

    return 0;
}


