//
//  LetterHelpers.cpp
//  stringAnalyzer
//
//  Created by Justin Siebenhaar on 8/31/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include "LetterHelpers.hpp"
#include <string>

using namespace std;


bool IsTerminator(char c){
    if (c == '.'||c == '?'||c == '!') {
        return true;
    } else return false;
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

bool IsConsonant(char c){
    /*not sure if we can use 'isspace()' here*/
    if (!IsVowel(c) && !IsTerminator(c) && !IsPunctuation(c) && !isspace(c)) {
        return true;
    } else return false;
}
