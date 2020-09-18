//
//  templateVector.hpp
//  dummy
//
//  Created by Justin Siebenhaar on 9/18/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#ifndef templateVector_hpp
#define templateVector_hpp

#include <stdio.h>


template<typename T>
class Vector {
    
public:
    //constructors
    Vector();
    Vector<T>(int initialCapacity){
        arrStart = new T[initialCapacity];
        capacity = initialCapacity;
        size=0;
    };
    
    //rule of three
    ~Vector();
    Vector(const Vector& rhs);
    Vector& operator=(const Vector& rhs);
    
    void freeVector(Vector vec);
    
    
    void pushBack(T value){
        if (size > capacity) {
            growVector();
        }
        arrStart[size] = value;
        size++;
    };
    void popBack();
    int get(int index);
    int getAddress(int index);
    void set(int index, int newValue);
    void growVector();
    int getSize();
    int getCapacity();
    int& operator[](int index);
    int operator[](int index)const;
    
private:
    T* arrStart;
    int capacity;
    int size;
};

template<typename T>
void Vector<T>::growVector(){
    if (capacity == 0) {
        capacity++;
    }
    T * newVector = new T[capacity*2];
    for(int i=0; i<capacity; i++){
        newVector[i] = arrStart[i];
    }
    capacity *=2;
    arrStart = newVector;
}

//template<typename T>
//void Vector<T>::pushBack(T value){
//    if (size > capacity) {
//        growVector();
//    }
//    arrStart[size] = value;
//    size++;
//}
#endif /* templateVector_hpp */
