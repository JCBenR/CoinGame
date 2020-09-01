//
//  politicalStructs.cpp
//  political2
//
//  Created by Justin Siebenhaar on 9/1/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//


#include "politicalStructs.hpp"

//democrats in vector

vector<Politician> democrats(vector<Politician> someThing){
    //create placeholder vector to return just democrats from main vector
    vector<Politician> dems;
    //loop through vector, find only those who are dems, push to temp vector
    for (int i = 0; i<someThing.size(); i++) {
        if (someThing[i].party == "democrat") {
            dems.push_back(someThing[i]);
        }
        //return temp vector
    } return dems;
}

vector<Politician> fedReps(vector<Politician> someThing){
    //create placehold vector
    vector<Politician> fedRed;
    //loop through and find all federal republicans
    for (Politician i: someThing) {
        if(i.party == "republican" && i.federal == "federal"){
            fedRed.push_back(i);
        }
        //return list
    } return fedRed;
    
//Politician getPol(string name, string party, string federal){
//        struct Politician newPol{name, party, string};
//        return newPol;
//    };
}
