//
//  main.cpp
//  stringAnalyzer
//
//  Created by Justin Siebenhaar on 8/27/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

string getString(){
    string userString;
    cout<<"please type a few sentances and press ENTER when finished"<<endl;
    getline(cin, userString);
    return userString;
}

//REQUIRED FUNCTIONS
bool IsTerminator(char c){
    if (c == '.'||c == '?'||c == '!') {
        return true;
    } else return false;
}

int NumSentances(string aString){
    int total=0;
    for (int i=0; i<aString.size(); i++) {
        if(IsTerminator(aString[i])){
           total++;
        };
    }
    return total;
}

bool IsPunctuation(char c){
    if (c == '.'||c == '?'||c == '!'||c == ',') {
        return true;
    } else return false;
}

bool IsVowel(char c){
    if (c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u'||c == 'y'||c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U'||c == 'Y'){
        return true;
    } else return false;
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

bool IsConsonant(char c){
    /*not sure if we can use 'isspace()' here*/
    if (!IsVowel(c) && !IsTerminator(c) && !IsPunctuation(c) && !isspace(c)) {
        return true;
    } else return false;
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
