//
//  rainAnalysis.cpp
//  Rainfall Analysis
//
//  Created by Justin Siebenhaar on 9/3/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include "rainAnalysis.hpp"
#include <iostream>

using namespace std;

string Months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

void printData(vector<RainMonthData>& rain){
    for(RainMonthData i: rain){
           cout<<i.month<<","<<i.year<<","<<i.precip<<endl;
       }
}

string getTitle(){
    string city;
    
    return city;
};


int dataPoints(vector<RainMonthData>& rain){
    int totalDataPoints = 0;
    for (int i=0; i<rain.size(); i++) {
        totalDataPoints++;
    }
    return totalDataPoints;
}

double overallAvg(vector<RainMonthData>& rain){
    int totalDP = dataPoints(rain);
    double totalRF = 0;
    for(RainMonthData i: rain){
        totalRF += i.precip;
    }
    double total = totalRF / totalDP;
    return total;
}

vector<RainMonthData> months(vector<RainMonthData>& rain, string month){
    vector<RainMonthData> forMonth;
    for(RainMonthData i: rain){
        if(i.month == month){
            forMonth.push_back(i);
        }
    }return forMonth;
}

//void monthAvg(vector<RainMonthData>& rain, string month){
//    double avgForMonth;
//    string Months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
//    for (int i=0; i<12; i++) {
//        string finalMonth;
//        string thisMonth = Months[i];
//        double totalRF = 0;
//        int totalRecords = 0;
//        double avgForMonth = 0;
//        for(RainMonthData z : months(rain, thisMonth)){
//            totalRF += z.precip;
//            totalRecords++;
//        } avgForMonth = totalRF / totalRecords;
//        return cout<<thisMonth<<" "<<avgForMonth<<endl;
//    }
//    return;
//}

void monthAvg(vector<RainMonthData>& rain){
    for (int i=0; i<12; i++) {
    string thisMonth = Months[i];
    double totalRF = 0;
    int totalRecords = 0;
    double avgForMonth = 0;
    for(RainMonthData z : months(rain, thisMonth)){
        totalRF += z.precip;
        totalRecords++;
    } avgForMonth = totalRF / totalRecords;
        cout<<"The average rainfall amount for "<<thisMonth<<" is "<<avgForMonth<<" inches."<<endl;
    }
}
