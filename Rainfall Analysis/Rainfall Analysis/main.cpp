//
//  main.cpp
//  Rainfall Analysis
//
//  Created by Justin Siebenhaar on 9/3/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

string city;

struct RainMonthData { string month; int year; double precip;};

vector<RainMonthData> raindrops;

//FUNCTION DECLARATIONS
void printData(vector<RainMonthData> rain);

////need to use a for loop inside a while loop.
//the
//while(getline(....)){
//    if(some conditions){
//        //do this
//    }
//    else{
//        stuff to populate vector
//    }
//
//}
//getline(filename, line)


int main(int argc, const char * argv[]) {

    
    ifstream rain("macon.txt");
    
    string city;
    string month;
    int year;
    double precip;
    
    string line;
    
//    while (getline(rain, line)) {
//        if (rain>>city) {
//            city = city;
//        }
//    }
    
    getline(rain, line);
    cout<<"the city is: "<<line<<endl;
    
        RainMonthData temp;
        while (rain>>month>>year>>precip) {
            temp.month = month;
            temp.year = year;
            temp.precip = precip;
            raindrops.push_back(temp);
    }

    
    for(RainMonthData i: raindrops){
        cout<<i.precip<<endl;
    }
    cout<<city<<endl;
    printData(raindrops);
//
    rain.close();
    
    return 0;
}


    
    
    
    
void printData(vector<RainMonthData> rain){
    for(RainMonthData i: rain){
           cout<<i.month<<","<<i.year<<","<<i.precip<<endl;
       }
}

string getTitle(){
    string city;
    
    return city;
};
