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
    //we create a deck called myDeck, of type Deck.
    Deck myDeck;
    //we pass mydeck into the get deck function
    getDeck(myDeck);
    printDeck(myDeck);

    return 0;
}


