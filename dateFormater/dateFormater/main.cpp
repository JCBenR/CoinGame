//
//  main.cpp
//  dateFormater
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
    //error check input
    if (monthFromInput > 12) {
        cout<<"not a valid month"<<endl;
        return 1;
    } else if (dayFromInput > 31){
        cout<<"not a valid day"<<endl;
        return 1;
    }
    //convert monthFromInput to Word
    string month;
    if (monthFromInput == 1) {
        month = "January";
    } else if (monthFromInput == 2){
        month = "February";
    } else if (monthFromInput == 3){
        month = "March";
    } else if (monthFromInput == 4){
        month = "April";
    } else if (monthFromInput == 5){
        month = "May";
    } else if (monthFromInput == 6){
        month = "June";
    } else if (monthFromInput == 7){
        month = "July";
    } else if (monthFromInput == 8){
        month = "August";
    } else if (monthFromInput == 9){
        month = "September";
    } else if (monthFromInput == 10){
        month = "October";
    } else if (monthFromInput == 11){
        month = "November";
    } else if (monthFromInput == 12){
        month = "December";
    }
    
    cout<<month<<" "<<dayFromInput<<", "<<yearFromInput<<endl;
    
    return 0;
}
