//
//  bookAnalysis.hpp
//  BookAnalyzer
//
//  Created by Justin Siebenhaar on 9/4/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#ifndef bookAnalysis_hpp
#define bookAnalysis_hpp

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

struct keywordList{
    string before;
    string keywordAt;
    string after;
    int index;
};


//GET TITLE AND AUTHOR FUNCTIONS
vector<string> getTitle(vector<string>& v);
vector<string> getAuthor(vector<string>& v);


//GET KEYWORD FUNCTION
std::vector<keywordList> keywordFunc(vector<string>& v, string keyword);


//HELPER FUNCTIONS
int getIndex(std::vector<string>& v, string Z);

#endif /* bookAnalysis_hpp */
