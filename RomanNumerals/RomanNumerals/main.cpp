//
//  main.cpp
//  RomanNumerals
//
//  Created by Justin Siebenhaar on 8/26/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int num;
    //get user number
    cout<<"please enter a number to convert"<<endl;
    cin>>num;
    string roma;
    //determine roman numeral symbol
    for (int i = num; i>0;) {
        if (i>=1000) {
            roma += "M";
            i -= 1000;
        } else if (i>=900){
            roma += "CM";
            i -= 900;
        } else if (i>=500){
            roma += "D";
            i -= 500;
        } else if (i>=400){
            roma += "CD";
            i -= 400;
        } else if (i>=100){
            roma += "C";
            i -= 100;
        } else if (i>=90){
            roma += "XC";
            i -= 90;
        } else if (i>=50){
            roma += "L";
            i -= 50;
        } else if (i>=40){
            roma += "XL";
            i -= 40;
        } else if (i>=10){
            roma += "X";
            i -= 10;
        } else if (i>=9){
            roma += "IX";
            i -= 9;
        } else if (i>=5){
            roma += "V";
            i -= 5;
        } else if (i>=4){
            roma += "IV";
            i -= 4;
        } else if (i>=1){
            roma += "I";
            i -= 1;
        }
    }
    cout<<roma<<endl;
    return 0;
}
