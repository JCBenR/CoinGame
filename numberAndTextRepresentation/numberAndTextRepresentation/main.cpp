//
//  main.cpp
//  numberAndTextRepresentation
//
//  Created by Justin Siebenhaar on 9/9/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <stdlib.h>
#include <cmath>

using namespace std;

int stringToInt(string inputString, int base);
int convertAsciiDecimal(char c);
string convertAscii(string input);
void decToBinary(int n);

int main(int argc, const char * argv[]) {

    string input;
    int base;
    
//    cout<<"please enter the string you'd like to convert: "<<endl;
//    cin>>input;
//    cout<<"please enter the base 2 or 16"<<endl;
//    cin>>base;
//
//    cout<<stringToInt(input, base)<<endl;
    
    cout<<"enter string: "<<endl;
    string caesar;

    getline(cin, caesar);

    cout<<convertAscii(caesar)<<endl;
        
    decToBinary(156);
    
    
    return 0;
}

int stringToIntDecimal(string inputString, int base){
    vector<int> workingNumber;
    string reversed;

    for (int i = 0; i < inputString.size(); i++) {
            char letter = inputString[inputString.size() - i - 1];
            reversed = reversed + letter; // build var reversed char by char
    }
    int sum = 0;
    if (reversed[reversed.size()-1] == '-') {
        reversed.pop_back();
        for(char c : reversed){
            workingNumber.push_back(c-'0');
        }
        for (int i = 0; i<workingNumber.size(); i++) {
            sum += workingNumber[i] * pow(base, i);
        }
        sum = sum * -1;
    } else {
        for(char c : reversed){
            workingNumber.push_back(c-'0');
        }
        int sum = 0;
        for (int i = 0; i<workingNumber.size(); i++) {
            sum += workingNumber[i] * pow(base, i);
        }
    }
    return sum;
}



int stringToIntHexOrBinary(string inputString, int base){
    vector<int> workingNumber;
    string reversed;

    for (int i = 0; i < inputString.size(); i++) {
            char letter = inputString[inputString.size() - i - 1];
            reversed = reversed + letter; // build var reversed char by char
    }
    for(char c : reversed){
        if (c == 'A' || c == 'a') {
            workingNumber.push_back(10);
        } else if(c == 'B' || c == 'b'){
            workingNumber.push_back(11);
        } else if(c == 'C' || c == 'c'){
            workingNumber.push_back(12);
        } else if(c == 'D' || c == 'd'){
            workingNumber.push_back(13);
        } else if(c == 'E' || c == 'e'){
            workingNumber.push_back(14);
        } else if(c == 'F' || c == 'f'){
            workingNumber.push_back(15);
        } else {
        workingNumber.push_back(c-'0');
        }
    }
    int sum = 0;
    
//    for negative numbers
    for (int i = 0; i<workingNumber.size()-1; i++) {
        sum += workingNumber[i] * pow(base, i);

    }
    for (int i = workingNumber.size()-1; i<workingNumber.size(); i++) {
        sum -= workingNumber[i] * pow(base, i);
    }
    return sum;
}

int stringToInt(string inputString, int base){
    int convertedInt = 0;
    if(base == 10){
        convertedInt = stringToIntDecimal(inputString, base);
    } else if (base == 2 || base == 16){
        convertedInt = stringToIntHexOrBinary(inputString, base);
    }
    return convertedInt;
}


void decToBinary(int n)
{
    // array to store binary number
    vector<int> binaryNum;
  
    // counter for binary array
    int i = 0;
    while (n > 0) {
  
        // storing remainder in binary array
        binaryNum.push_back(n % 2);
        n = n / 2;
        i++;
    }
    
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
  


int convertAsciiDecimal(char c){
    return (int)c;
}

string convertAscii(string input){
    string converted;
    for(char c : input){
        convertAsciiDecimal(c);
        converted.push_back(c);
    }
    string newConverted;
    for(int c : converted){
        if((c >= 65 && c < 91) || (c>=97 && c < 123)){
            newConverted.push_back((char)c+3);
        } else {
            newConverted.push_back((char)c);
        }
    }
    return newConverted;
}
