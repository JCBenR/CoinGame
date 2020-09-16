//
//  main.cpp
//  pointer practice
//
//  Created by Justin Siebenhaar on 9/12/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>

using namespace std;
int* f();
double* copyArray(double * dblPtr, int sizeOfArray);
double* copyArr (double* dOrig, int size);
int main(int argc, const char * argv[]) {
    
//    int* y = f();
//    cout<<"y is "<<y<<' '<<"reference to y is "<<&y<<endl;
//    int d = 45;
//    int& z = d;
//    int a = 99;
//    int* b = &a;
//    cout<<"refrence to d: "<<&d<<endl;
//    cout<<"d value "<<d<<endl;
//    cout<<"z is "<<z<<endl;
//    cout<<"reference z is "<<&z<<endl;
//    cout<<"reference b is "<<b<<endl;
//    cout<<"dereference b is "<<*b<<endl;
//    cout<<0x103c98020<<endl;
    double test1[5] ={452,634,865,123,483};
    double* dOrig = new double[5];
    //cout<<copyArray(test1, 5)<<endl;
    double * test2 = copyArr(test1, 5);
    cout<<test2[1];
    
    
    return 0;
}

int* f(){
    int x = 5;
    cout<<"reference to x is "<<&x<<endl;
    return &x;
}

double* copyArray(double * dblPtr, int sizeOfArray){
    double* newCopy = new double[sizeOfArray];
    for(int i=0; i<sizeOfArray; i++){
        newCopy[i] = dblPtr[i];
    }
    return newCopy;
}

double* copyArr (double* dOrig, int size){
  double* dArr = new double[size];
  for (int i = 0; i<size; i++) {
    dArr[i] = dOrig[i];
  }
  return dArr;
}
