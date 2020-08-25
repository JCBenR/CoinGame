//
//  main.cpp
//  roadTripCalculator
//
//  program calcualtes the total cost of gas for a roadtrip
//  Created by Justin Siebenhaar on 8/25/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // declare variables
    float distance = 0;
    float mpg = 0;
    float dpg = 0;
    
    cout << "what was the total distance you drove?" << endl;
    cin >> distance;
    cout << "what's the MPG of your car?" << endl;
    cin >> mpg;
    cout << "what's the cost of gas per gallon?" << endl;
    cin >> dpg;
    float gallonsUsed = distance/mpg;
    float cost = gallonsUsed * dpg;
    cout << "the total cost of fuel was: $" << cost << endl;
    return 0;
}
