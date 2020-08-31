//
//  main.cpp
//  FunctionPractice
//
//  Created by Justin Siebenhaar on 8/28/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

//GET NUMBERS
double favNum1(string num){
    cout<<"what's the "<<num<<" side of the shape?"<<endl;
    int x;
    cin>>x;
    return x;
};

//GET THE HYPOTENUSE OF A TRIANGLE
double hypo(){
    double a, b;
    cout<< "Let's find the hypotenuse of a triangle"<<endl;
    cout<< "type the lengths of two right angle sides (press enter after each): "<<endl;
    cin>>a>>b;
    double aSqr = pow(a,2);
    double bSqr = pow(b,2);
    double cSqr = sqrt(aSqr+bSqr);
    return cSqr;
}

//HYPO WITHOUT USE OF COUT IN FUNCTION
double hypo2(double x, double y){
    double aSqr = pow(x,2);
    double bSqr = pow(y,2);
    double cSqr = sqrt(aSqr+bSqr);
    return cSqr;
}



//VELOCITY CALCULATION
double XVelocity(double x, double y){
    double vel = x*cos(y);
//    double y = speed*sin(angle);
//    cout<<"X velocity: "<<x<<endl;
//    cout<<"Y velocity: "<<y<<endl;
    return vel;
}

double YVelocity(double x, double y){
    double vel = x*sin(y);
    return vel;
}

//TEST IF INTERGER IS EVEN
bool isEven(int x){
    if(x%2 == 0){
        return true;
    } else return false;
}

void isPrime(int x){
    bool prime = true;
    
    if (x < 2) prime = false;
    else {
        for (int i = 2; i <= x / 2; ++i) {
            if (x % i == 0) {
                prime = false;
                break;
            }
        }
    }
    if (prime) cout << x << " is a prime number";
    else cout << x << " is not a prime number";
}

int main(int argc, const char * argv[]) {
    
//    double answer = hypo();
//    cout<<answer<<endl;
   
    
//    double speed, angle;
//    cout<<"enter your speed: "<<endl;
//    cin>>speed;
//    cout<<"enter your angle: "<<endl;
//    cin>>angle;
//    double xVel = XVelocity(speed, angle);
//    double yVel = YVelocity(speed, angle);
//    //output velocity answers
//    cout<<xVel<<endl;
//    cout<<yVel<<endl;
    
    
//    int x = favNum1("first");
//    int y = favNum1("second");
//    double hypo2char = hypo2(x, y);
//    cout<<hypo2char<<endl;
    
    bool testEven = isEven(15);
    cout<<testEven<<endl;
    isPrime(30);
    return 0;
}
