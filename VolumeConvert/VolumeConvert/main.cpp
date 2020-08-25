//
//  main.cpp
//  VolumeConvert
//  Program converts from ounces to different units of volume: cups, pints, gallons, liters, and cubic inches
//  Created by Justin Siebenhaar on 8/25/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // conversion ratios
    float ounces = 0;
    float cups = 0.12;
    float pints = 0.062;
    float gallons = 0.0078;
    float liters = 0.03;
    float cubicInches = 1.8;
    cout << "Enter volume in ounces: " << endl;
    cin >> ounces;
    cout << "totals" << endl
    << "ounces: " << ounces << endl
    << "cups: " << ounces * cups << endl
    << "pints: " << ounces * pints<< endl
    << "gallons: " << ounces * gallons<< endl
    << "liters: " << ounces * liters<< endl
    << "cubicInches: " << ounces * cubicInches<< endl;
    
    return 0;
}
