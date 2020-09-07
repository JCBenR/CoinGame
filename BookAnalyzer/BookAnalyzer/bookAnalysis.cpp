//
//  bookAnalysis.cpp
//  BookAnalyzer
//
//  Created by Justin Siebenhaar on 9/4/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <string>
#include <stdio.h>
#include <ctype.h>
#include "bookAnalysis.hpp"

using namespace std;




int getIndex(vector<string>& v, string Z)
{
    auto it = find(v.begin(),
                   v.end(), Z);
    int thePlace;
    // If element was found
    if (it != v.end()) {
        // calculating the index
        // of Z
        int index = distance(v.begin(),
                             it);
        thePlace = index;
    }
    else {
        // If the element is not
        // present in the vector
//        cout << "-1" << endl;
    } return thePlace;
}


vector<string> getTitle(vector<string>& v){
    int titlePlace = getIndex(v, "Title:");
    vector<string> titleString;
    for (int i = titlePlace; i<titlePlace + 100; i++) {
        if (v[i] == "Author:") {
            break;
        } else{
            titleString.push_back(v[i]);
        }
    } titleString.erase(titleString.begin());
    return titleString;
}

vector<string> getAuthor(vector<string>& v){
    int authorPlace = getIndex(v, "Author:");
    vector<string> authorString;
    for (int i = authorPlace; i<authorPlace + 100; i++) {
        if (v[i] == "Release:" || v[i] == "Release") {
            break;
        } else{
            authorString.push_back(v[i]);
        }
    }authorString.erase(authorString.begin());
    return authorString;
}

string lower(string keyword){
    string str = keyword;
    str[0] = tolower(str[0]);
    return str;
}


//GET KEYWORD FUNCTION
std::vector<keywordList> keywordFunc(vector<string>& v, string keyword){
    //declare temp keyword list
    std::vector<keywordList> tempKeywords;
    keywordList specificKeyword;
    for(int i = 0; i<v.size(); i++){
        //convert keyword and index to lowercases (case for all if statements). return index of keyword for calculation.
        //check to see if keyword is at beginning of document, if so, don't return index before it.
        if((lower(v[i]) == lower(keyword)) && i == 0){
            specificKeyword.keywordAt = v[i];
            specificKeyword.after = v[i+1];
            specificKeyword.index = i;
            tempKeywords.push_back(specificKeyword);
        }
        //check to see if keyword is at end of document, if so, don't return index after it.
        if((lower(v[i]) == lower(keyword)) && i == v.size()-1){
            specificKeyword.before = v[i-1];
            specificKeyword.keywordAt = v[i];
            specificKeyword.index = i;
            tempKeywords.push_back(specificKeyword);
        }
        //otherwise, assume it is in middle and return word before and after.
        if((i != 0 || i < v.size()-1) && ((lower(v[i]) == lower(keyword)) || (lower(v[i]) == lower(keyword)+"."))){
            specificKeyword.before = v[i-1];
            specificKeyword.keywordAt = v[i];
            specificKeyword.after = v[i+1];
            specificKeyword.index = i;
            tempKeywords.push_back(specificKeyword);
        }
    }return tempKeywords;
}
