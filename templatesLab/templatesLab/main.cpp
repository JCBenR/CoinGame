//
//  main.cpp
//  templatesLab
//
//  Created by Justin Siebenhaar on 9/18/20.
//

#include <iostream>
#include <vector>
#include <string>
#include <assert.h>
#include "triple.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Triple<int> test1;
    test1.a = 1;
    test1.b = 2;
    test1.c = 3;
    
    Triple<std::string> test2;
    test2.a = "hello ";
    test2.b = "welcome ";
    test2.c = "home ";
    
    std::cout<<test1.sum()<<std::endl;
    assert(test1.sum() == 6);
    std::cout<<test2.sum()<<std::endl;
    
    Triple<vector<int>> tripleVec = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i: tripleVec.a){
        cout<<i<<endl;
    }
    
    Triple<vector<string>> tripleVecString = {{"hi","there","you"},{"you're","welcome","home"},{"summer","is","over"}};
 
    for(string i: tripleVecString.a){
        cout<<i<<endl;
    }
    
    //cout<<tripleVec.sum()<<endl;
    //this doesn't work because you can't call sum on a vector.
    return 0;
}
