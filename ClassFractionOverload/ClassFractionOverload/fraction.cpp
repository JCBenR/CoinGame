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

//PLUS EQUALS
Fraction& Fraction::operator+=(const Fraction& rhs){
    numerator = (numerator * rhs.denominator) + (denominator * rhs.numerator);
    denominator = denominator * rhs.denominator;
    reduce();
    return *this;
}

//PLUS

Fraction Fraction::plus(Fraction rhs){
    Fraction addTempFraction;
    addTempFraction.denominator = denominator * rhs.denominator;
    addTempFraction.numerator = (numerator * rhs.denominator) + (denominator * rhs.numerator);
    addTempFraction.reduce();
    return addTempFraction;
}

//operator version
Fraction& Fraction::operator+(const Fraction& rhs){
    Fraction addTempFraction;
    addTempFraction.denominator = denominator * rhs.denominator;
    addTempFraction.numerator = (numerator * rhs.denominator) + (denominator * rhs.numerator);
    addTempFraction.reduce();
    return addTempFraction;
}

//MINUS

Fraction Fraction::minus(Fraction rhs){
    Fraction subTempFraction;
    subTempFraction.numerator = (numerator * rhs.denominator) - (rhs.numerator * denominator);
    subTempFraction.denominator = denominator * rhs.denominator;
    subTempFraction.reduce();
    return subTempFraction;
}

//operator version
Fraction& Fraction::operator-(const Fraction& rhs){
    Fraction subTempFraction;
    subTempFraction.numerator = (numerator * rhs.denominator) - (rhs.numerator * denominator);
    subTempFraction.denominator = denominator * rhs.denominator;
    subTempFraction.reduce();
    return subTempFraction;
}

Fraction& Fraction::operator-=(const Fraction& rhs){
    numerator = (numerator * rhs.denominator) - (denominator * rhs.numerator);
    denominator = denominator * rhs.denominator;
    reduce();
    return *this;
}

Fraction& Fraction::operator-(){
    numerator *= -1;
    return *this;
};

//MULTIPLICATION

Fraction Fraction::times(Fraction rhs){
    Fraction multiTempFraction;
    multiTempFraction.numerator = rhs.numerator * numerator;
    multiTempFraction.denominator = rhs.denominator * denominator;
    multiTempFraction.reduce();
    return multiTempFraction;
}

//operator version
Fraction& Fraction::operator*(const Fraction& rhs){
    Fraction multiTempFraction;
    multiTempFraction.numerator = rhs.numerator * numerator;
    multiTempFraction.denominator = rhs.denominator * denominator;
    multiTempFraction.reduce();
    return multiTempFraction;
}

Fraction& Fraction::operator*=(const Fraction& rhs){
    numerator = rhs.numerator * numerator;
    denominator = rhs.denominator * denominator;
    reduce();
    return *this;
}

//DIVISION

Fraction Fraction::dividedBy(Fraction rhs){
    Fraction dividTempFraction;
    return dividTempFraction = times(rhs.reciprocal());
}

//operator version
Fraction& Fraction::operator/(Fraction rhs){
    Fraction dividTempFraction;
    return dividTempFraction = times(rhs.reciprocal());
//    return dividedBy(rhs);
}

Fraction& Fraction::operator/=(Fraction rhs){
    Fraction tempFrac = rhs.reciprocal();
    numerator *= tempFrac.numerator;
    denominator *= tempFrac.denominator;
    reduce();
    return *this;
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

bool Fraction::operator==(Fraction& rhs){
    if ((numerator == rhs.numerator) && (denominator == rhs.denominator)) {
        return true;
    } return false;
}


bool Fraction::operator!=(Fraction& rhs){
//    if (!(this->numerator==rhs.numerator)) {
//        return true;
//    } return false;
    if ((numerator != rhs.numerator) || (denominator != rhs.denominator)) {
        return true;
    } return false;
}

bool Fraction::operator<(Fraction& rhs){
    if (toDouble() < rhs.toDouble()) {
        return true;
    } return false;
}

bool Fraction::operator>(Fraction& rhs){
    if (toDouble() > rhs.toDouble()) {
        return true;
    } return false;
}

bool Fraction::operator<=(Fraction& rhs){
    this->reduce();
    rhs.reduce();
    if (toDouble() <= rhs.toDouble()) {
        return true;
    } return false;
}

bool Fraction::operator>=(Fraction& rhs){
    this->reduce();
    rhs.reduce();
    if (toDouble() >= rhs.toDouble()) {
        return true;
    } return false;
}
