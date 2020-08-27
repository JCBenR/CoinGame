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
    int itemCost, amtPaid, change, quarters, dimes, nickels, pennies, extra;
    int quartersTotal=2;
    int dimesTotal=2;
    int nicklesTotal=2;
    int penniesTotal=2;
    cout << "how many quarters?" << endl;
    cin >> quartersTotal;
    cout << "how many dimes?" << endl;
    cin >> dimesTotal;
    cout << "how many nickles?" << endl;
    cin >> nicklesTotal;
    cout << "how many pennies?" << endl;
    cin >> penniesTotal;
    
    //get amounts of item and amount paid
    cout << "enter item price in cents: " << endl;
    cin >> itemCost;
    if (itemCost < 1) {
        cout<<"cannot be negative, please start again"<<endl;
        return 1;
    }
    cout << "enter amount paid in cents: " << endl;
    cin >> amtPaid;
    if (amtPaid < 1) {
        cout<<"cannot be negative, please start again"<<endl;
        return 1;
    }
    change = amtPaid - itemCost;
    
    //calculate change
    quarters = change/25;
    change %= 25;
    if(quarters>quartersTotal){
        extra = (quarters - quartersTotal)*25;
        change+=extra;
        quarters=quartersTotal;
    };
    dimes = change/10;
    change %= 10;
    if (dimes>dimesTotal) {
        extra = (dimes - dimesTotal)*10;
        change+=extra;
        dimes=dimesTotal;
    }
    nickels = change/5;
    change %= 5;
    if (nickels>nicklesTotal) {
        extra = (nickels - nicklesTotal)*5;
        change+=extra;
        nickels=nicklesTotal;
    }
    pennies = change/1;
    change %= 1;
    if (pennies>penniesTotal) {
        extra = (pennies - penniesTotal)*1;
        change+=extra;
        pennies=penniesTotal;
    }
    //notice if not enough change
    if (change>0) {
        cout << "not enough change, sorry!"<< endl;
    }else{
        cout << "Change: " << amtPaid - itemCost << endl
        << "    Quarters: "<< quarters << endl
        << "    Dimes: "<< dimes << endl
        << "    Nickles: "<< nickels << endl
        << "    Pennies: "<< pennies << endl;
    };
    return 0;
}
