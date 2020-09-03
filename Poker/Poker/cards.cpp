//
//  cards.cpp
//  Poker
//
//  Created by Justin Siebenhaar on 9/1/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//
#include <iostream>
#include <vector>
#include "cards.hpp"

using namespace std;

int RankNum[]={2,3,4,5,6,7,8,9,10,11,12,13,14};
std::string Rank[]= { "ACE", "TWO", "THREE", "FOUR", "FIVE",
    "SIX", "SEVEN", "EIGHT", "NINE", "TEN", "JACK", "QUEEN", "KING"};
std::string Suit[]= { "SPADES", "HEARTS", "CLUBS", "DIAMONS"};

//TEST DECKS
Deck flush = {
    {{10, "ten", "Spades"}, {3, "three", "Spades"}, {4, "four", "Spades"}, {5, "five", "Spades"}, {6, "six", "Spades"}}
};



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

//void printHand(Deck& deck){
//    cout<<"HAND"<<endl;
//    for (Card c : deck.cards) {
//           cout<<c.rankNum<<" of "<<c.suit<<endl;
//       }
//}

void shuffle(Deck& deck){
    srand(time(0));
    for (int i = 0; i<deck.cards.size(); i++) {
        int a = rand()%52;
        Card tempCard = deck.cards[i];
        deck.cards[i] = deck.cards[a];
        deck.cards[a] = tempCard;
    }
//    for(Card i: deck.cards){
//        int a = rand()%52;
//    }
}

Deck hand(Deck deck){
    Deck handDeck;
    for (int i = 0; i<5; i++) {
        handDeck.cards.push_back(deck.cards[i]);
    } return handDeck;
}

bool isFlush(Deck deck){
    string mainCard = deck.cards[0].suit;
    for(Card card: deck.cards){
        if (card.suit != mainCard) {
            return false;
        }
    } return true;
}

Card findMin(Deck hand){
    Card min = hand.cards[0];
    for(Card card : hand.cards){
        if(card.rankNum < min.rankNum){
            min = card;
        }
    } return min;
}

bool isStraight(Deck deck){
    Card minCard = findMin(deck);
    int key = minCard.rankNum + 1;
    if (std::count(deck.cards.begin(), deck.cards.end(), key)) {
        key + 1;
    }
    } return true;
    
//    sort(deck.cards[0].rankNum, deck.cards[4].rankNum);
//    for(Card card: deck.cards){
//        std::cout<<card.rankNum<<" "<<card.suit<<std::endl;
//    }
}

switch (Deck deck)
{
    case 1:
}

/*
 
 
 ++isFlush
 //see if all the cards are the same suit
 ++isStraight
 //see if all the cards are in numerical order. i'm thinkin you take the lowest card in a sorted hand and see if the next card is +1, the one after that +2, and so on until the last card that is +4. so if the first card was a 4, a straight would mean the next card needs to be 4+1 (5), and then a 6,7 and 8 (4+4). if not, it's not a straight
 ++isStraightFlush
 //first check if isFlush, then if it isStraight. both must be true.
 ++isRoyalFlush
 //first check if low number of sorted deck is 10, then if it isFlush, then isStraight. all must be true
 ++isFullHouse
 //needs to have 3 of one rank and 2 of another. so a 3 aces and 2 fives (AAA55) would be a full house. first, check if first value has a match. if so, does it have a third match? if yes, do last two cards match each other? if first card only has one match, do last three cards match each other? this one seems kind of tricky.
 */
