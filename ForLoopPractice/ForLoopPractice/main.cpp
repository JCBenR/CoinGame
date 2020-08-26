//
//  main.cpp
//  ForLoopPractice
//
//  Created by Justin Siebenhaar on 8/26/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
using namespace std
;
int main(int argc, const char * argv[]) {

    cout<<"for loop"<<endl;
    cout<<"========"<<endl;
    for (int i=1; i<11; i++) {
        cout<<i<<endl;
    }

   cout<<"while loop"<<endl;
   cout<<"========"<<endl;
    int x = 1;
    while (x<11) {
        cout<<x<<endl;
        x++;
    }
    
//    the for loop is more suited to this type of work
    
//COUNTING UP FROM TWO NUMBERS
    
    int a,b;
    cout<<"enter two numbers (press ENTER after each): "<<endl;
    cin>>a>>b;
    if (a>b) {
        cout<<"first number must be smaller than the second number."<<endl;
    } else {
        for (int i=a; i<=b; i++) {
            cout<<i<<endl;
        }
    }
    
    
//ODD NUMBER PRINTING
    
    cout<<"for loop solution"<<endl;
    cout<<"================"<<endl;
    for (int i=1; i<20; i+=2) {
        cout<<i<<endl;
    }


    cout<<"if loop solution"<<endl;
    cout<<"================"<<endl;
    for (int i=1; i<20; i++) {
        if (i%2 == 0) {
            continue;
        }else {
            cout<<i<<endl;
        }
    }
    
    //the simple for loop is a much cleaner solution and easier to understand.
    
    
//ADD NUMBERS PROBLEM
    
    cout<<"add numbers solution"<<endl;
    cout<<"================"<<endl;
    int num, total=0;
    cout<<"please enter numbers to add together. ether negative number to finish."<<endl;
    cin>>num;
    while (num >= 0) {
        total += num;
        cin>>num;
    }
    cout<<"your total is: "<<total<<endl;
    
    
//MULTIPLICATION TABLE
    
    cout<<"multiplication table"<<endl;
    cout<<"================"<<endl;
    for (int i=1; i<6; i++) {
        for (int x=1; x<6; x++) {
            cout<<x*i<<"  ";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}
