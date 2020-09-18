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

template<typename T>
class Vector {
    
public:
    //constructors
    Vector();
    Vector(int initialCapacity){
        arrStart = new T[initialCapacity];
        capacity = initialCapacity;
        size=0;
    };
    
    //rule of three
    ~Vector();
    Vector(const Vector& rhs);
    Vector& operator=(const Vector& rhs);
    
    void freeVector(Vector vec);
    void pushBack(T value);
    void popBack();
    T get(int index);
    int getAddress(int index);
    void set(int index, T newValue);
    void growVector();
    int getSize();
    int getCapacity();
    T& operator[](int index);
    T operator[](int index)const;
    
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

template<typename T>
void Vector<T>::pushBack(T value){
    size++;
    if (size > capacity) {
        growVector();
    }
    arrStart[size-1] = value;
}

template<typename T>
void Vector<T>::popBack(){
    size--;
}

template<typename T>
T Vector<T>::get(int index){
    return arrStart[index];
}

template<typename T>
void Vector<T>::set(int index, T newValue){
    arrStart[index] = newValue;
}

template<typename T>
int Vector<T>::getSize(){
    return size;
}
    
template<typename T>
int Vector<T>::getCapacity(){
    return capacity;
}
    
//OPERATORS
    
template<typename T>
T Vector<T>::operator[](int index)const{
    return arrStart[index];
}

template<typename T>
T& Vector<T>::operator[](int index){
   return arrStart[index];
}


//RULE OF THREE

//destructor
template<typename T>
Vector<T>::~Vector(){
    delete [] arrStart;
}

//copy constructor
template<typename T>
Vector<T>::Vector(const Vector& rhs){
    arrStart =  new int[size+1];
    for(int i =0; i<size; i++){
        arrStart[i] = rhs.arrStart[i];
    }
}

//copy assignment operator
template<typename T>
Vector<T>& Vector<T>::operator=(const Vector& rhs){
    if(this == &rhs){ //check if they're the same object.
         return *this;
      }
    delete [] arrStart;
    arrStart = new T[rhs.size+1];
    size = rhs.size;
    capacity = rhs.capacity;
    for(int i = 0; i<rhs.size; i++){
        arrStart[i] = rhs.arrStart[i];
    }
    
    return *this;
}



//template<typename T>
//class Vector {
//
//public:
//
//
//    //constructors
//    Vector();
//    Vector(int initialCapacity){
//        arrStart = new int[initialCapacity];
//        capacity = initialCapacity;
//        size=0;
//    };
//
//    //rule of three
//    ~Vector();
//    Vector(const Vector& rhs);
//    Vector& operator=(const Vector& rhs);
//
//    void freeVector(Vector vec);
//    void pushBack(int value);
//    void popBack();
//    int get(int index);
//    int getAddress(int index);
//    void set(int index, int newValue);
//    void growVector();
//    int getSize();
//    int getCapacity();
//    int& operator[](int index);
//    int operator[](int index)const;
//
//private:
//    T* arrStart;
//    int capacity;
//    int size;
//};

//template<typename T>
//T Vector(int initialCapacity){
//    arrStart = new T[initialCapacity];
//    capacity = initialCapacity;
//    size=0;
//}
//Vector makeVector(int capacity);
//void freeVector(Vector vec);
//void pushBack(Vector& vec, int value);
//void popBack(Vector& vec);
//int get(Vector& vec, int index);
//void set(Vector& vec, int index, int newValue);
//Vector growVector(Vector& vec);

#endif /* makeVector_hpp */
