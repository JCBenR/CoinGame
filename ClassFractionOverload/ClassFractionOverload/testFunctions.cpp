//
//  testFunctions.cpp
//  ClassFraction
//
//  Created by Justin Siebenhaar on 9/16/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <stdio.h>


/*
 * Author: Daniel Kopta and <add your names here>
 * July 2017

 * Testing program for your Fraction class.
 * These tests are not very thorough, and you will need to add your own.
*/

// Include the student's Fraction class
#include "fraction.hpp"

// Standard includes
#include <iostream>
#include <string>
// Also include math so we can use the pow and abs functions (see below)
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

bool CompareDoubles(double d1, double d);


/* Helper function for writing tests that compare strings.
 * Compares expected to result, and prints an error if they don't match.
 */
void Test(std::string message, std::string expected, std::string result)
{
  cout << "Test: " << message << endl;
  if(expected != result)
    cout << "\tFAILED, expected: \"" << expected << "\", got: \"" << result << "\"" << endl;
  else
    cout << "\tPASSED" << endl;
}

/* Helper function for writing tests that compare doubles (overloaded version of the above)
 * Compares expected to result, and prints an error if they don't match.
 */
void Test(std::string message, double expected, double result)
{
  cout << "Test: " << message << endl;
  if(!CompareDoubles(expected, result))
    cout << "\tFAILED, expected: " << expected << ", got: " << result << endl;
  else
    cout << "\tPASSED" << endl;
}


/*
 * Helper function
 * Returns whether or not two doubles are "equivalent",
 * within a certain error bound.
 *
 * As we know, floating point numbers are incapable of
 * precisely representing certain values, so to compare
 * equality, we must tolerate some absolute difference.
 */
bool CompareDoubles(double d1, double d2)
{
  return std::abs(d1 - d2) < 1e-6;
}

/*
 * Basic constructor and toString tests
 */
void TestConstructors()
{
  std::string result = "";
  Fraction f1;
  result = f1.toString();
  Test("Default constructor", "0/1", result);
  
  Fraction f2(1, 2);
  result = f2.toString();
  Test("Basic constructor", "1/2", result);

  //TODO: Add your own additional tests here

}


/*
 * Negative fraction tests
 */
void TestNegative()
{
  std::string result = "";
  Fraction f1(-1, 2);
  result = f1.toString();
  Test("Negative numerator", "-1/2", result);

  Fraction f2(1, -2);
  result = f2.toString();
  Test("Negative denominator", "-1/2", result);

  Fraction f3(-1, -2);
  result = f3.toString();
  Test("Negative numerator and denominator", "1/2", result);

  Fraction f4(4, -16);
  result = f4.toString();
  Test("Negative denominator and reduce", "-1/4", result);


  //TODO: Add your own additional tests here
}


/*
 * Reduced fraction tests
 */
void TestReduced()
{
  std::string result = "";
  Fraction f1(2, 4);
  result = f1.toString();
  Test("Reduce fraction (2/4)", "1/2", result);

  //TODO: Add your own additional tests here
}


/*
 * Reciprocal tests
 */
void TestReciprocal()
{
  std::string result = "";
  Fraction f1(1, 3);
  f1 = f1.reciprocal();
  result = f1.toString();
  Test("Reciprocal of simple", "3/1", result);

  Fraction f2(-1, 2);
  f2 = f2.reciprocal();
  result = f2.toString();
  Test("Reciprocal of negative", "-2/1", result);

  Fraction f3(6, 2);
  f3 = f3.reciprocal();
  result = f3.toString();
  Test("Reciprocal of non-reduced", "1/3", result);

  //TODO: Add your own additional tests here
}

/*
 * Fraction addition tests
 */
void TestPlus()
{
  std::string result = "";
  Fraction f1(4, 6);
  Fraction f2(3, 4);
  
  // Should result in 17/12
  Fraction f3 = f1.plus(f2);
  result = f3.toString();
  Test("Addition of non-reduced", "17/12", result);

  //TODO: Add your own additional tests here
}

void TestToDouble()
{
  Fraction f1(1, 2);
  double result = f1.toDouble();
  Test("toDouble (1/2)", 0.5, result);

  Fraction f2(1, 3);
  result = f2.toDouble();
  Test("toDouble (1/3)", 1.0/3.0, result);
}

/*
 * Approximates pi using a summation of fractions.
 */
double ComputePi()
{
  Fraction sum;

  // We will only compute the first 4 terms
  // Note that even with long (64-bit) numbers,
  // the intermediate numbers required for fraction addition
  // become too large to represent if we go above k=4.
  for(long k = 0; k < 4; k++)
  {
    Fraction multiplier(1, pow(16, k));
    Fraction firstTerm(4, 8*k + 1);
    Fraction secondTerm(2, 8*k + 4);
    Fraction thirdTerm(1, 8*k + 5);
    Fraction fourthTerm(1, 8*k + 6);

    Fraction temp = firstTerm.minus(secondTerm);
    temp = temp.minus(thirdTerm);
    temp = temp.minus(fourthTerm);
 
    Fraction product = multiplier.times(temp);

    sum = sum.plus(product);
  }
  
  return sum.toDouble();
}


int main()
{
  // Break up the tests into categories for better readability.
  TestConstructors();
  TestNegative();
  TestReduced();
  TestReciprocal();
  TestToDouble();
  TestPlus();

  Test("Approximating pi", 3.141592, ComputePi());
 
  // TODO: Add your own additional tests
    
    Fraction test(1,2);
    Fraction test2(1,3);
    Fraction test3 = test+test2;
    Fraction test31 = test+=test2;
    cout<<test3.getNumerator()<<endl;
    cout<<test3.getDenominator()<<endl;
    cout<<"test 31"<<endl;
    cout<<test31.getNumerator()<<endl;
    cout<<test31.getDenominator()<<endl;
    
    
    cout<<"MINUS"<<endl;
    Fraction test4 = test-test2;
    Fraction test41 = test-=test2;
    cout<<test4.getNumerator()<<endl;
    cout<<test4.getDenominator()<<endl;
    cout<<test41.getNumerator()<<endl;
    cout<<test41.getDenominator()<<endl;
    
    cout<<"MULTIPLICATION"<<endl;
    Fraction test51 = test.times(test2);
    cout<<test51.getNumerator()<<endl;
    cout<<test51.getDenominator()<<endl;
    Fraction test5 = test*test2;
    cout<<test5.getNumerator()<<endl;
    cout<<test5.getDenominator()<<endl;
    Fraction test52 = test*=test2;
    cout<<test52.getNumerator()<<endl;
    cout<<test52.getDenominator()<<endl;
    
    cout<<"DIVISION"<<endl;
    Fraction test61 = test.dividedBy(test2);
    cout<<test61.getNumerator()<<endl;
    cout<<test61.getDenominator()<<endl;
    Fraction test6 = test / test2;
    cout<<test6.getNumerator()<<endl;
    cout<<test6.getDenominator()<<endl;
    Fraction test62 = test/=test2;
    cout<<test62.getNumerator()<<endl;
    cout<<test62.getDenominator()<<endl;
    
    //TESTING ==, !=, >, <, >=, <=
    cout<<"test 5: "<<test5.getNumerator()<<" / "<<test5.getDenominator()<<endl;
    cout<<"test 6: "<<test6.getNumerator()<<" / "<<test6.getDenominator()<<endl;
    assert(test5==test51);
    bool a = test5==test51;
    bool b = test6==test51;
    cout<<"one that should be equal is: "<<a<<endl;
    cout<<"one that should be false is: "<<b<<endl;
    bool c = test5!=test51;
    bool d = test6!=test51;
    assert(test6!=test51);
    cout<<"one that should be equal (false) is: "<<c<<endl;
    cout<<"one that should not be false (true) is: "<<d<<endl;
    bool e = test5<test6;
    bool f = test6<test5;
    assert(test5<test6);
    cout<<"one that should be less than is: "<<e<<endl;
    cout<<"one that should not be less than is: "<<f<<endl;
    bool g = test5>test6;
    bool h = test6>test5;
    assert(test6>test5);
    cout<<"test 5: "<<test5.getNumerator()<<" / "<<test5.getDenominator()<<endl;
    cout<<"test 6: "<<test6.getNumerator()<<" / "<<test6.getDenominator()<<endl;
    cout<<"one that should not be greater than is: "<<g<<endl;
    cout<<"one that should be greater than is: "<<h<<endl;
    bool i = test5>=test6;
    bool j = test5<=test6;
    cout<<"one that should not be greater than is: "<<i<<endl;
    cout<<"one that should be greater than is: "<<j<<endl;
    assert(test5<=test6);
    
    Fraction test7(1,4);
    Fraction test71(0,0);
    assert(test7>test71);
    -test7;
    assert(test7<test71);
    cout<<"test 7: "<<test7.getNumerator()<<" / "<<test7.getDenominator()<<endl;
}
