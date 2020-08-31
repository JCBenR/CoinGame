//
//  wordHelpers.cpp
//  stringAnalyzer
//
//  Created by Justin Siebenhaar on 8/31/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include "./wordHelpers.hpp"
#include <string>
#include <iostream>
#include "./LetterHelpers.hpp"

using namespace std;


int NumSentances(string aString){
    int total=0;
    for (int i=0; i<aString.size(); i++) {
        if(IsTerminator(aString[i])){
           total++;
        };
    }
    return total;
}


int NumVowels(string aString){
    int total=0;
    for (int i=0; i<aString.size(); i++) {
        if(IsVowel(aString[i])){
           total++;
        };
    }
    return total;
}


string getString(){
    string userString;
    cout<<"please type a few sentances and press ENTER when finished"<<endl;
    getline(cin, userString);
    return userString;
}


int consonants(string aString){
    int total=0;
    for (int i=0; i<aString.size(); i++) {
        if(IsConsonant(aString[i])){
           total++;
        };
    }
    return total;
}

int NumWords(string aString){
    int total=1;
    for (int i=0; i<aString.size(); i++) {
        if(isspace(aString[i])){
           total++;
        };
    }
    return total;
}

double AverageVowelsPerWord(string aString){
//    double words = NumWords(aString);
//    double vowels = NumVowels(aString);
//    double total = vowels/words;
    double total = (double) NumVowels(aString)/NumWords(aString);
    return total;
}

double readingLevel(string aString){
    double level = ((double) NumVowels(aString)+consonants(aString))/NumWords(aString);
    return level;
}
