//
//  main.cpp
//  commandLineArgs
//
//  Created by Justin Siebenhaar on 9/4/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    cout << "You have entered " << argc
           << " arguments:" << "\n";
    
      for (int i = 0; i < argc; ++i)
          cout << argv[i] << "\n";
    return 0;
}
