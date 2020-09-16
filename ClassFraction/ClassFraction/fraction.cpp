//
//  fraction.cpp
//  ClassFraction
//
//  Created by Justin Siebenhaar on 9/16/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include "fraction.hpp"

Fraction::Fraction(){
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(long n, long d){
    numerator = n;
    denominator = d;
    if((numerator < 0 && denominator < 0)||(denominator < 0)){
        numerator *= -1;
        denominator *= -1;
    }
    reduce();
}

Fraction Fraction::plus(Fraction rhs){
    Fraction addTempFraction;
    addTempFraction.denominator = denominator * rhs.denominator;
    addTempFraction.numerator = (numerator * rhs.denominator) + (denominator * rhs.numerator);
    addTempFraction.reduce();
    return addTempFraction;
}

Fraction Fraction::minus(Fraction rhs){
    Fraction subTempFraction;
    subTempFraction.denominator = denominator * rhs.denominator;
    subTempFraction.numerator = (numerator * rhs.denominator) - (denominator * rhs.denominator);
    subTempFraction.reduce();
    return subTempFraction;
}

Fraction Fraction::times(Fraction rhs){
    Fraction multiTempFraction;
    multiTempFraction.numerator = rhs.numerator * numerator;
    multiTempFraction.denominator = rhs.denominator * denominator;
    multiTempFraction.reduce();
    return multiTempFraction;
}

Fraction Fraction::dividedBy(Fraction rhs){
    Fraction dividTempFraction;
    return dividTempFraction = times(rhs.reciprocal());
}

Fraction Fraction::reciprocal(){
    Fraction reciprical;
    reciprical.numerator = denominator;
    reciprical.denominator = numerator;
    if((reciprical.numerator < 0 && reciprical.denominator < 0)||(reciprical.denominator < 0)){
        reciprical.numerator *= -1;
        reciprical.denominator *= -1;
    }
    return reciprical;
}

void Fraction::reduce(){
    if (numerator == 0) {
        denominator = 1;
    } else {
        long divisor = GCD();
        numerator /= divisor;
        denominator /= divisor;
    }
}

long Fraction::GCD(){
    long gcd = abs(numerator);
    long remainder = abs(denominator);
    while(remainder != 0) {
      long temp = remainder;
      remainder = gcd % remainder;
      gcd = temp;
    }
    return gcd;
}

void swap(long& n, long& d){
    long pSwap = n;
    n = d;
    d = pSwap;
}

double Fraction::getNumerator(){
    return numerator;
}

double Fraction::getDenominator(){
    return denominator;
}

double Fraction::toDouble(){
    double temp = (double(numerator)) / (double(denominator));
    return temp;
}

std::string Fraction::toString(){
    std::string stringFraction = "";
    stringFraction += std::to_string(numerator) + "/" + std::to_string(denominator);
    return stringFraction;
}
