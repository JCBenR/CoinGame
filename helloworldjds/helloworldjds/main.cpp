//
//  main.cpp
//  helloworldjds
//
//  Created by Justin Siebenhaar on 8/24/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>

using namespace std;
//has more uses
void mood(string feels){
    if(feels == "good" || feels == "great"){
        cout << ";)" << endl;
        cout << "maybe we can make you feel EVEN better with some addition!!" << endl;
    } else{
        cout << ":(" << endl;
        cout << "That's too bad. Maybe we can make you feel better with some addition!! \n" << endl;
    }
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    //print out some numbers
    cout << 2+2 << endl;
    //get numbers from user and add them.
    string feels;
    cout << "how are you feeling today?" << endl;
    cin >> feels;
    mood(feels);
    
    int a, b;
    cout << "what's your first number?\n";
    cin >> a;
    cout << "and your second number?\n";
    cin >> b;
    cout << "your total is: " << a+b << endl;
    return 0;
}
