//
//  main.cpp
//  VendingMachine1
//  Converts amount entered with amount purchased to give correct change
//  Created by Justin Siebenhaar on 8/25/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int itemCost, amtPaid, change, quarters, dimes, nickels, pennies;
    cout << "enter item price in cents: " << endl;
    cin >> itemCost;
    cout << "enter amount paid in cents: " << endl;
    cin >> amtPaid;
    change = amtPaid - itemCost;
    quarters = change/25;
    change = change%25;
    dimes = change/10;
    change = change%10;
    nickels = change/5;
    change = change%5;
    pennies = change/1;
    change = change%1;
    
    cout << "Change: " << amtPaid - itemCost << endl
    <<"   Quarters: "<< quarters << endl
    << "    Dimes: "<< dimes << endl
    << "    Nickles: "<< nickels << endl
    << "    Pennies: "<< pennies << endl;
    return 0;
}
