//
//  fraction.hpp
//  ClassFraction
//
//  Created by Justin Siebenhaar on 9/16/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#ifndef fraction_hpp
#define fraction_hpp

#include <stdio.h>
#include <string>
#include <cmath>
#include <cstdlib>
#include <assert.h>

class Fraction {
public:
    Fraction();
    Fraction(long n, long d);
    
    Fraction plus(Fraction rhs);
    
//    Fraction operator+(Fraction& lhs, Fraction& rhs);
    Fraction minus(Fraction rhs);
    Fraction times(Fraction rhs);
    Fraction dividedBy(Fraction rhs);
    Fraction& operator+=(const Fraction& rhs);
    Fraction& operator-=(const Fraction& rhs);
    Fraction& operator*=(const Fraction& rhs);
    Fraction& operator/=(Fraction rhs);
    Fraction& operator+(const Fraction& rhs);
    Fraction& operator-(const Fraction& rhs);
    Fraction& operator*(const Fraction& rhs);
    Fraction& operator/(Fraction rhs);
    bool operator==(Fraction& rhs);
    bool operator!=(Fraction& rhs);
    bool operator<(Fraction& rhs);
    bool operator>(Fraction& rhs);
    bool operator<=(Fraction& rhs);
    bool operator>=(Fraction& rhs);
    Fraction& operator-();
    Fraction reciprocal();
    std::string toString();
    double toDouble();
    double getNumerator();
    double getDenominator();
    
private:
    long numerator;
    long denominator;
    void reduce();
    long GCD();
    void swap(long n, long d);
    void swapNeg(long n, long d);
    
};


void swap(double& n, double& d);

#endif /* fraction_hpp */
