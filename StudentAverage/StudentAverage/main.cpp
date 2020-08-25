//
//  main.cpp
//  StudentAverage
//  calculates the average grade of students
//  Created by Justin Siebenhaar on 8/25/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c, d, e;
    cout << "enter the students scores (press enter after each one): " << endl;
    cin >> a >> b >> c >> d >> e;
    float avg = (a+b+c+d+e)/5.0;
    cout << "Average: " << avg << endl;
    return 0;
}
