//
//  main.cpp
//  makeYourOwnVector
//
//  Created by Justin Siebenhaar on 9/15/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
#include <assert.h>

#include "makeVector.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    
    Vector firstArr = makeVector(6);
    pushBack(firstArr, 10);
    //TEST THAT CAPACITY IS 6, AS SET ABOVE AND THAT SIZE IS 1
    assert(firstArr.capacity == 6 && firstArr.size == 1);
    
    //SHOW WHAT ADDRESS IS OF ARRAY START
    cout<<firstArr.arrStart<<endl;
    //ADD 7 MORE ITEMS TO THE ARRAY, WHICH SHOULD TRIGGER IT TO INCREASE AND GROW TO 12
    for(int i = 0; i < 7; i++){
        pushBack(firstArr, 45);
    }
    cout<<"the capacity is: "<<firstArr.capacity<<endl;
    assert(firstArr.capacity == 12 && firstArr.size == 8);
    
    //REMOVE ONE AND TEST THAT SIZE IS NOW 7;
    popBack(firstArr);
    assert(firstArr.capacity == 12 && firstArr.size == 7);
    cout<<"the size is: "<<firstArr.size<<endl;
    
    //TEST THAT FIRST INDEX IS 45, THEN CHANGE FIRST INDEX TO 33 AND TEST
    cout<<"ARRAY index 1 is: "<<get(firstArr, 1)<<endl;
    assert(firstArr.arrStart[1]==45);
    set(firstArr, 1, 33);
    cout<<"ARRAY index 1 is: "<<get(firstArr, 1)<<endl;
    assert(firstArr.arrStart[1]==33);

    //ADD TEN MORE ITEMS TO ARRAY AND VERIFY THAT CAPACITY IS NOW 24, SIZE 17, AND ADDRESS IS DIFFERENT
    for(int i = 0; i < 10; i++){
        pushBack(firstArr, 11);
    }
    cout<<"the size is: "<<firstArr.size<<" AND the capacity is: "<<firstArr.capacity<<endl;
    assert(firstArr.capacity == 24 && firstArr.size == 17);
    cout<<"the size is: "<<firstArr.size<<" AND the capacity is: "<<firstArr.capacity<<endl;
    cout<<firstArr.arrStart<<endl;
    
    return 0;
}
