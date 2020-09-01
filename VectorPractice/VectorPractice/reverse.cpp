//
//  reverse.cpp
//  VectorPractice
//
//  Created by Justin Siebenhaar on 8/31/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include "reverse.hpp"
#include <iostream>
#include <vector>
using namespace std;

void reverse(){
    //create variables and vectors
    int inputNum;
    vector <int> numVec;
    vector<int> backwardsVec;
    
    //get numbers from user and push each to vector
    cout<<"please type numbers, pressing enter after each. -1 to quit"<<endl;
    while ((cin >> inputNum) && inputNum != -1)
    numVec.push_back(inputNum);
    //loop through numVec and insert values in reverse order to backwardsVex
    for(int i : numVec){
        backwardsVec.insert(backwardsVec.begin(), i);
    }

    //Print out backwardsVec
    for(int i : backwardsVec){
        cout<<i<<endl;
    }
    
//    //ANOTHER OPTION FOR REVERSING
//    for (int i = numVec.size()-1; i<numVec.size(); i--) {
//        backwardsVec.push_back(numVec[i]);
//    }
//
//    //Print out backwardsVec
//    for(int i : backwardsVec){
//        cout<<i<<endl;
//    }
}
