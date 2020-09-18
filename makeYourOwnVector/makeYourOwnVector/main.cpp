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
    
    
    
    Vector <int> firstArr(6);
    firstArr.pushBack(10);
    cout<<firstArr.get(0)<<endl;
    cout<<firstArr.getCapacity()<<endl;
    //cout<<firstArr.get(0)<<endl;
    //TEST THAT CAPACITY IS 6, AS SET ABOVE AND THAT SIZE IS 1
    assert(firstArr.getCapacity() == 6 && firstArr.getSize() == 1);
    
    Vector<double> doubleArr(6);
    doubleArr.pushBack(10.88);
    cout<<doubleArr.get(0)<<endl;
    
    Vector<string> stringArr(2);
    stringArr.pushBack("good day");
    cout<<stringArr.get(0)<<endl;
    stringArr.pushBack("more stuff");
    stringArr.pushBack("the last stuff");
    cout<<stringArr.get(2)<<endl;
    
    Vector<char> charArr(2);
    charArr.pushBack('a');
    charArr.pushBack('b');
    charArr.pushBack('c');
    cout<<charArr.get(2)<<endl;
    
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

    //TEST RULE OF THREE

    Vector <int> secondArr(8);
    secondArr.pushBack(99);
    firstArr = secondArr;
    assert(firstArr[0]==99);
    cout<<firstArr[0]<<endl;
    Vector<int> fourthArr(3);
    fourthArr.pushBack(2);
    {
        Vector <int> thirdArr(8);
        thirdArr.pushBack(44);
        cout<<thirdArr.get(0)<<endl;
        
    }
    
    Vector<string> string1(2);
    Vector<string> string2(2);
    Vector<string> string3(2);
    string1.pushBack("hello");
    string2.pushBack("bye");
    string3.pushBack("hello");
    Vector<int> equals1(4);
    Vector<int> equals2(4);
    Vector<int> notEquals1(4);
    
    equals1.pushBack(1);
    equals1.pushBack(2);
    equals1.pushBack(3);
    equals1.pushBack(4);
    
    equals2.pushBack(1);
    equals2.pushBack(2);
    equals2.pushBack(3);
    equals2.pushBack(4);
    
    notEquals1.pushBack(3);
    notEquals1.pushBack(5);
    notEquals1.pushBack(7);
    notEquals1.pushBack(9);
    
    assert(equals1==equals2);
    assert(equals1!=notEquals1);
    assert(equals1>=equals2);
    assert(equals1<=notEquals1);
    assert(notEquals1>=equals2);
    
    //STRING TESTS
    Vector<string> stringEquals1(3);
    Vector<string> stringEquals2(3);
    Vector<string> stringNotEquals1(3);
    
    stringEquals1.pushBack("hello");
    stringEquals1.pushBack("world");
    stringEquals1.pushBack("msd");
    stringEquals1.pushBack("2020");
    
    stringEquals2.pushBack("hello");
    stringEquals2.pushBack("world");
    stringEquals2.pushBack("msd");
    stringEquals2.pushBack("2020");
    
    stringNotEquals1.pushBack("summer");
    stringNotEquals1.pushBack("is");
    stringNotEquals1.pushBack("almost");
    stringNotEquals1.pushBack("over");
    
    assert(stringEquals1==stringEquals2);
    assert(stringEquals2>=stringEquals1);
    assert(stringEquals2!=stringNotEquals1);
    assert(stringEquals2>stringNotEquals1);
    assert(stringNotEquals1>stringEquals2);
    
    return 0;
}
