//
//  politicalStructs.hpp
//  political2
//
//  Created by Justin Siebenhaar on 9/1/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#ifndef politicalStructs_hpp
#define politicalStructs_hpp
#include <string>
#include <vector>

using namespace std;

#include <stdio.h>
struct Politician {string name; string party; string federal;};
vector<Politician> democrats(vector<Politician> someThing);
vector<Politician> fedReps(vector<Politician> someThing);
//Politician getPol(string name, string party, string federal);
#endif /* politicalStructs_hpp */
