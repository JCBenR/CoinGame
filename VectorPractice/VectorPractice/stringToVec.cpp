//
//  stringToVec.cpp
//  VectorPractice
//
//  Created by Justin Siebenhaar on 8/31/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include "stringToVec.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void stringToVec(){
    
    //declare variables and vectors
    string someString;
    vector<char> stringToChars;
    cout<<"please type a string and press ENTER"<<endl;
    //get full line. using cout will terminate at the first SPACE. need getline().
    getline(cin,someString);
    //loop through string and enter each character into vector
    for(char i : someString){
        stringToChars.push_back(i);
    }
    //output each char from vector
    for(char i : stringToChars){
        cout<<i<<endl;
    }
}
