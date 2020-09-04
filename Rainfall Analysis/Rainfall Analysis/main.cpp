//
//  main.cpp
//  Rainfall Analysis
//
//  Created by Justin Siebenhaar on 9/3/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include "rainAnalysis.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

string city;

vector<RainMonthData> raindrops;

int main(int argc, const char * argv[]) {

string Months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    ifstream rain("macon.txt");
    
    string city;
    string month;
    int year;
    double precip;
    
    string line;
    
    getline(rain, line);
    city = line;
    cout<<"the city is: "<<line<<endl;
    
        RainMonthData temp;
        while (rain>>month>>year>>precip) {
            temp.month = month;
            temp.year = year;
            temp.precip = precip;
            raindrops.push_back(temp);
    }
    rain.close();
//    cout<<dataPoints(raindrops)<<endl;
//
//    for(RainMonthData i: raindrops){
//        cout<<i.precip<<endl;
//    }
//    cout<<city<<endl;
    cout<<"The overall average rainfall amount is "<<overallAvg(raindrops) <<" inches."<<endl;
//    cout<<monthAvg(raindrops, "January")<<endl;
    
//    for (int i = 0; i<12; i++) {
//        for(RainMonthData i : months(raindrops, Months[i])){
//            cout<<Months[i]<<i.precip<<endl;
//        }
//    }


//    for (int i=0; i<12; i++) {
//        string thisMonth = Months[i];
//        double totalRF = 0;
//        int totalRecords = 0;
//        double avgForMonth = 0;
//        for(RainMonthData z : months(raindrops, thisMonth)){
//            totalRF += z.precip;
//            totalRecords++;
//        } avgForMonth = totalRF / totalRecords;
//        cout<<thisMonth<<" "<<avgForMonth<<endl;
//    }

    monthAvg(raindrops);
    
    return 0;
}


    
    
    
    

