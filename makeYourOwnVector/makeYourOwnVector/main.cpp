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
    
    
    
    Vector firstArr(6);
    firstArr.pushBack(10);
    cout<<firstArr.get(0)<<endl;
    cout<<firstArr.getCapacity()<<endl;
    //cout<<firstArr.get(0)<<endl;
    //TEST THAT CAPACITY IS 6, AS SET ABOVE AND THAT SIZE IS 1
    assert(firstArr.getCapacity() == 6 && firstArr.getSize() == 1);
    
    //SHOW WHAT ADDRESS IS OF ARRAY START
    //cout<<firstArr.arrStart<<endl;
    //ADD 7 MORE ITEMS TO THE ARRAY, WHICH SHOULD TRIGGER IT TO INCREASE AND GROW TO 12
    for(int i = 0; i < 7; i++){
        firstArr.pushBack(45);
    }
    cout<<"the capacity is: "<<firstArr.getCapacity()<<endl;
    assert(firstArr.getCapacity() == 12 && firstArr.getSize() == 8);
    
    //REMOVE ONE AND TEST THAT SIZE IS NOW 7;
    firstArr.popBack();
    assert(firstArr.getCapacity() == 12 && firstArr.getSize() == 7);
    cout<<"the size is: "<<firstArr.getSize()<<endl;
    
    //TEST THAT FIRST INDEX IS 45, THEN CHANGE FIRST INDEX TO 33 AND TEST
    cout<<"ARRAY index 1 is: "<<firstArr.get(1)<<endl;
    assert(firstArr.get(1)==45);
    firstArr.set(1, 33);
    cout<<"ARRAY index 1 is: "<<firstArr.get(1)<<endl;
    assert(firstArr.get(1)==33);

    //ADD TEN MORE ITEMS TO ARRAY AND VERIFY THAT CAPACITY IS NOW 24, SIZE 17, AND ADDRESS IS DIFFERENT
    for(int i = 0; i < 10; i++){
        firstArr.pushBack(11);
    }
    cout<<"the size is: "<<firstArr.getSize()<<" AND the capacity is: "<<firstArr.getCapacity()<<endl;
    assert(firstArr.getCapacity() == 24 && firstArr.getSize() == 17);
    cout<<"the size is: "<<firstArr.getSize()<<" AND the capacity is: "<<firstArr.getCapacity()<<endl;
    cout<<firstArr.get(0)<<endl;
    //freeVector(firstArr);
    cout<<firstArr.get(0)<<endl;
    
    //TEST THAT INDEX CAN BE CHANGED
    cout<<firstArr[1]<<endl;
    firstArr[1] = 45;
    cout<<firstArr[1]<<endl;
    return 0;
}
