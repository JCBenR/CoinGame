//
//  main.cpp
//  helloworldjds
//
//  Created by Justin Siebenhaar on 8/24/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    //print out some numbers
    cout << 2+2 << endl;
    //get numbers from user and add them.
    int a, b;
    cout << "first number\n";
    cin >> a;
    cout << "second number\n";
    cin >> b;
    cout << "your total is " << a+b << endl;
    return 0;
}
