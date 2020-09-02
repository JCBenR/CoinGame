//
//  cards.cpp
//  Poker
//
//  Created by Justin Siebenhaar on 9/1/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//
#include <iostream>
#include "cards.hpp"
using namespace std;

int RankNum[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
std::string Rank[]= { "ACE", "TWO", "THREE", "FOUR", "FIVE",
    "SIX", "SEVEN", "EIGHT", "NINE", "TEN", "JACK", "QUEEN", "KING"};
std::string Suit[]= { "SPADES", "HEARTS", "CLUBS", "DIAMONS"};

/* getDeck takes the deck we've creted. creates a Card called 'card'. loops through each suit. on each loop, dives into loop for each rank. for each iteration, a 'card' is created with blank suit & rank. each loop fills those values. so card.suit becomes whatever is inteh Suit array (global) at the index of i. same for rank and j. after that, each card is pushed to the cards vector on the deck. remember the deck is not just a deck of cards. it is a vector of cards AND max size, and potentially other things.

I tried using sizeof(Suit)/sizeof(Rank) on the the second part of those loops and it had some funky behavior where it would first print all the cards for a suit correctly, but then print dozens of lines of just the "of hearts" part. hundreds of lines worth.
 */

void getDeck(Deck& deck){
    Card card;
    for (int i = 0; i < card.num_suits; i++) {
        for(int j = 0; j< card.num_ranks; j++){
            card.suit = Suit[i];
            card.rankNum = RankNum[j];
            deck.cards.push_back(card);
        }
    }
}

/*
 for this we take in a Deck (by reference) and each deck has cards [deck.cards]. the for loop is saying for each Card in deck.cards, call it 'c'. then print out c.rank and c.suit for each.
 
 to get the written value for rank, use the Rank array. here, we've changed it to rankNum, which is part of each card and references the RankNum array. this pulls the numerical value of the card. Not sure which will be used for the next exercise, but have both options and can easily be switched by changing 'c.rankNum' to 'c.rank'.
 */
void printDeck(Deck& deck){
    for (Card c : deck.cards) {
        cout<<c.rankNum<<" of "<<c.suit<<endl;
    }
}

