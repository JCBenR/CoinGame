//
//  main.cpp
//  political2
//
//  Created by Justin Siebenhaar on 9/1/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

#include "politicalStructs.hpp"

using namespace std;

//Politician john{"john smith", "democrat", "federal"};
//Politician mary{"mary jones", "republican", "local"};
//Politician frank{"frank nelson", "democrat", "local"};
//Politician sam{"sam seaborn", "democrat", "federal"};
//Politician jerry{"jerry nicks", "republican", "federal"};
//
//vector <Politician> officials2 = {john, mary, frank, sam, jerry};

vector<Politician> officials = {{"john smith", "democrat", "federal"},
    {"mary jones", "republican", "local"},
    {"frank nelson", "democrat", "local"},
    {"sam seaborn", "democrat", "federal"},
    {"jerry nicks", "republican", "federal"},
    {"jason bourne", "republican", "federal"},
    {"bernie sandpaper", "independent", "federal"},
    {"joe mcgoo", "green", "local"}
};

int main(int argc, const char * argv[]) {
    cout<<"DEMOCRATS"<<endl;
    cout<<"=========\n"<<endl;
    
    //create vector of politicians to fill with politicians who are democrats
    vector<Politician> dems = democrats(officials);
    //loop through vector dems and return name of each politician who is democrat.
    for(Politician i: dems)
        cout << i.name <<endl;
   
    cout<<"\nFEDERAL REPUBLICANS"<<endl;
    cout<<"===================\n"<<endl;
    vector<Politician> fedRepublicans = fedReps(officials);
    for (Politician i: fedRepublicans) {
        cout << i.name << endl;
    }
    
    //TESTS
    
    
    return 0;
}
