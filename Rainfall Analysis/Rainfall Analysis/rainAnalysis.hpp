//
//  rainAnalysis.hpp
//  Rainfall Analysis
//
//  Created by Justin Siebenhaar on 9/3/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#ifndef rainAnalysis_hpp
#define rainAnalysis_hpp

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

struct RainMonthData { string month; int year; double precip;};

//FUNCTION DECLARATIONS
void printData(RainMonthData& rain);
int dataPoints(vector<RainMonthData>& rain);
double overallAvg(vector<RainMonthData>& rain);
//double monthAvg(vector<RainMonthData>& rain, string month);
vector<RainMonthData> months(vector<RainMonthData>& rain, string month);
void monthAvg(vector<RainMonthData>& rain);
#endif /* rainAnalysis_hpp */
