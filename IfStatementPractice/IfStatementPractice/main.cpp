//
//  main.cpp
//  IfStatementPractice
//
//  Created by Justin Siebenhaar on 8/26/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    //get users age
    int age;
    cout<<"please enter your age"<<endl;
    cin>>age;
    if(age>80) {
        cout<<"you're part of the greatest generation"<<endl;
    }
    if (age>60 && age<=80) {
        cout<<"you're a baby boomer"<<endl;
    }
    if (age>40 && age<=60) {
        cout<<"you're a gen x"<<endl;
    }
    if (age>20 && age<=40) {
        cout<<"you're a millenial"<<endl;
    }
    if (age<=20){
        cout<<"you're an iKid"<<endl;
    }
    
    
    //getToSleep section
    
    char weekdayResponse, holidayResponse, childrenResponse;
    bool isWeekday = false, isHoliday = false, haveChildren = false;
    cout<<"is today a weekday? Answer Y or N"<<endl;
    cin>>weekdayResponse;
    cout<<"is today a holiday? Answer Y or N"<<endl;
    cin>>holidayResponse;
    cout<<"do you have kids? Answer Y or N"<<endl;
    cin>>childrenResponse;
    if (weekdayResponse == 'y'|| weekdayResponse =='Y') {
        isWeekday=true;
    }
    if (weekdayResponse =='y'|| weekdayResponse =='Y') {
        isHoliday=true;
    }
    if (childrenResponse=='y'||childrenResponse=='Y') {
        haveChildren=true;
    }
    if ((!isWeekday || isHoliday) && !haveChildren) {
        cout<<"Lukcy you! you get to sleep in"<<endl;
    } else {
        cout<<"sorry, you're not going to be sleeping in."<<endl;
    }
    return 0;
}
