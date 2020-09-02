//
//  main.cpp
//  swap
//
//  Created by Justin Siebenhaar on 9/2/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
#include <cassert>

using namespace std;

void swap(int& a, int& b);

int main(int argc, const char * argv[]) {
    
    
    
    int x = 1;
    int y = 2;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    swap(x,y);
    
    assert(x == y);
    
    return 0;
}


void swap(int& a, int& b){
    int c = a;
    a = b;
    b = c;
    cout<<"x: "<<a<<endl;
    cout<<"y: "<<b<<endl;
}
