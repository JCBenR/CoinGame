//
//  main.cpp
//  NumberRepresentations
//
//  Created by Justin Siebenhaar on 9/9/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdint>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

bool approxEquals(double a, double b, double c);
void loadFile();

int main(int argc, const char * argv[]) {
    
    int x = 5;
    double y = 32.43;
    char d = 'I';
    string v = "hello";
    float w = 43.294;
    
    cout<<sizeof(x)<<endl;
    cout<<sizeof(y)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(v)<<endl;
    cout<<sizeof(w)<<endl;
    
    int16_t t = 54;
    uint8_t a = 32;
    uint16_t b = 12;
    
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(t)<<endl;
    
    uint8_t r = 255;
    uint8_t rm = 0;
    uint16_t g = 65535;
    uint16_t gm = 0;
    uint64_t s = 18446744073709551615;
    uint64_t sm = 0;
    cout<<sizeof(r)<<endl;
    cout<<hex<<s<<endl;
    
    
    float testFloatPrecision = .1 + .2;
    
    cout<<testFloatPrecision<<endl;
    if (testFloatPrecision == 0.3) {
        cout<<"it matches"<<endl;
    } else {
        cout<<"it doesn't match"<<endl;
    }
    
    cout<<setprecision(18)<<testFloatPrecision<<endl;
    cout<<approxEquals(.1, .2, .4)<<endl;
    
    loadFile();
    
    return 0;
}


bool approxEquals(double a, double b, double c){
    double testAdd = a + b;
    double remain = testAdd - c;
    cout<<remain<<" "<<c<<endl;
    if (remain <= .005 && remain >= -0.1) {
        return true;
    } else{
        return false;
    }
}

void loadFile(){
    string filename;
    cout<<"what's the file name"<<endl;
    cin>>filename;
    ifstream inputDoc("UTF.txt");
    char z;
    while(inputDoc >> z){
        cout<<z<<endl;
    }
}
