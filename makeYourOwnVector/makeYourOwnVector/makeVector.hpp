//
//  makeVector.hpp
//  makeYourOwnVector
//
//  Created by Justin Siebenhaar on 9/15/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#ifndef makeVector_hpp
#define makeVector_hpp

#include <stdio.h>




class Vector {
public:
    Vector();
    Vector(int initialCapacity);
    void freeVector(Vector vec);
    void pushBack(int value);
    void popBack(Vector& vec);
    int get(int index);
    void set(Vector& vec, int index, int newValue);
    void growVector();
private:
    int* arrStart;
    int capacity;
    int size;
};

//Vector makeVector(int capacity);
//void freeVector(Vector vec);
//void pushBack(Vector& vec, int value);
//void popBack(Vector& vec);
//int get(Vector& vec, int index);
//void set(Vector& vec, int index, int newValue);
//Vector growVector(Vector& vec);

#endif /* makeVector_hpp */
