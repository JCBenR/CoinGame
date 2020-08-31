//
//  sum.cpp
//  VectorPractice
//
//  Created by Justin Siebenhaar on 8/31/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include "sum.hpp"
#include <iostream>
#include <vector>

using namespace std;

void sum(){
    //declare variables and vectors
    vector<int> inputNums;
    int input;
    int total = 0;
    //collect user input and store in vector
    cout<<"please enter numbers to get total (press ENTER after each; -1 to quit): "<<endl;
    while((cin>>input) && input != -1){
    inputNums.push_back(input);}
    //loop through vector, add up sum of numbers, assign
    for(int i : inputNums){
        total += i;
    }
    //perform math and output
    double avg = double (total) /inputNums.size();
    cout<<"the average of these numbers is: " <<avg<<endl;
    
}

