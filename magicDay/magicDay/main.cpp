//
//  main.cpp
//  magicDay
//
//  Created by Justin Siebenhaar on 8/27/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    //get date in numeraric format
    string enteredDate;
    cout<<"Enter a date in numeric format (ie: 01/02/2020)"<<endl;
    cin>>enteredDate;
    //get month out of string
    int monthFromInput = stoi(enteredDate.substr(0,2));
    int dayFromInput = stoi(enteredDate.substr(3,2));
    int yearFromInput = stoi(enteredDate.substr(6,4));
    int magicYear = stoi(enteredDate.substr(8,2));
    //error check input
    if (monthFromInput > 12) {
        cout<<"not a valid month"<<endl;
        return 1;
    } else if (dayFromInput > 31){
        cout<<"not a valid day"<<endl;
        return 1;
    } else if (monthFromInput * dayFromInput == magicYear){
        cout<<enteredDate<<" IS a magic day!!!"<<endl;
    } else {
        cout<<enteredDate<<" Is NOT a magic day"<<endl;
    }
    
    
    return 0;
}
