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
    //assert(firstArr.capacity == 6);
    cout<<firstArr.arrStart;
    cout<<firstArr.arrStart[0]<<endl;
    cout<<"the size is: "<<firstArr.size<<endl;
    cout<<"the capacity is: "<<firstArr.capacity<<endl;
    pushBack(firstArr, 45);
    cout<<"the size is: "<<firstArr.size<<endl;
    cout<<"location contains: "<<firstArr.arrStart[1]<<endl;
    popBack(firstArr);
    cout<<"the size is: "<<firstArr.size<<endl;
    cout<<"location contains: "<<firstArr.arrStart[1]<<endl;
    cout<<get(firstArr, 0)<<endl;
    set(firstArr, 1, 33);
    cout<<get(firstArr, 1)<<endl;
    cout<<"the capacity is: "<<firstArr.capacity<<endl;
    pushBack(firstArr, 15);
    cout<<"the capacity is: "<<firstArr.capacity<<endl;
    pushBack(firstArr, 16);

    cout<<"the capacity is: "<<firstArr.capacity<<endl;
    pushBack(firstArr, 17);
    cout<<firstArr.arrStart<<endl;
    cout<<"the capacity is: "<<firstArr.capacity<<endl;
    cout<<firstArr.arrStart[3]<<endl;
    pushBack(firstArr, 18);
    pushBack(firstArr, 19);
    pushBack(firstArr, 20);
    pushBack(firstArr, 21);
    pushBack(firstArr, 22);
    pushBack(firstArr, 23);
//    growVector(firstArr);
    cout<<firstArr.arrStart;
    cout<<"the capacity is: "<<firstArr.capacity<<endl;
    pushBack(firstArr, 21);
    pushBack(firstArr, 22);
    pushBack(firstArr, 23);
    pushBack(firstArr, 21);
    pushBack(firstArr, 22);
    pushBack(firstArr, 23);
    pushBack(firstArr, 22);
    pushBack(firstArr, 23);
    cout<<firstArr.arrStart;
    cout<<"the capacity is: "<<firstArr.capacity<<endl;
    cout<<get(firstArr, 14)<<endl;
    set(firstArr, 14, 81);
    cout<<get(firstArr, 14)<<endl;
    //assert(firstArr.capacity > 15);
    
    
    
    
    return 0;
}
