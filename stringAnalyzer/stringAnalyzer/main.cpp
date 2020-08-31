//
//  main.cpp
//  stringAnalyzer
//
//  Created by Justin Siebenhaar on 8/27/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
#include <string>
#include "LetterHelpers.hpp"
#include "wordHelpers.hpp"

using namespace std;



void count(){
    string workingString = getString();
    
    //OUTPUT STRING STATS
    cout<<"number of words: "<<NumWords(workingString)<<endl;
    cout<<"number of sentances: "<<NumSentances(workingString)<<endl;
    cout<<"number of vowels: "<<NumVowels(workingString)<<endl;
    cout<<"number of consononts: "<<consonants(workingString)<<endl;
    cout<<"Reading level (average word length): "<<readingLevel(workingString)<<endl;
    cout<<"Vowels per word: "<<AverageVowelsPerWord(workingString)<<endl;
    count();
}

int main(int argc, const char * argv[]) {
    //get user string input and store it
    
    count();
    
    return 0;
}
