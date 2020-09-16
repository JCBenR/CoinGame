//
//  makeVector.cpp
//  makeYourOwnVector
//
//  Created by Justin Siebenhaar on 9/15/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include "makeVector.hpp"
//declare that this will make a struct of Vector and take in the capacity we want it to be to start with.
Vector makeVector(int capacity){
    //pointer to beginning to array, making a new array of the capacity we declare.
    int* vec = new int[capacity];
    //create a Vector temp variable. it now has arrStart, capacity and size.
    Vector tempVec;
    //link the arrStart with the vec we just created above with the specific capacity
    tempVec.arrStart = vec;
    //capacity is set to declared capacity, should match what is in vec
    tempVec.capacity = capacity;
    //size always starts at 0
    tempVec.size = 0;
    //return the tempVec with the declared capacity.
    return tempVec;
}

Vector growVector(Vector& vec){
    //allocate memory for new vector that is twice old vector
    int* newCapacity = new int[vec.capacity * 2];
//    Vector newVector = makeVector(vec.capacity*2);
    //copy values from old vector to new spots in new vector
    for(int i = 0; i<vec.capacity; i++){
        newCapacity[i] = vec.arrStart[i];
    }
    //delete array in old vector
    vec.capacity *=2;
    vec.arrStart = newCapacity;
//this is causing an issue.
    //freeVector(vec);
    return vec;
}

void freeVector(Vector vec){
    //delete or deallocate the items in arrStart
    delete [] vec.arrStart;
    //put a nullptr there for saftey
    vec.arrStart = nullptr;
}

void pushBack(Vector& vec, int value){
    //check to see if the size is less than capacity so we know we have room and a spot to actually put this. if so, proceed.
    if(vec.size <= vec.capacity){
        //determine what the highest used spot is in the array, which is where we'll put the int.
        int newSpot = vec.size;
        //put the int at the next available spot of the vector
        vec.arrStart[newSpot] = value;
        //increase the size so we'll know how many elements are there.
        vec.size++;
    } else {
        growVector(vec);
        //determine what the highest used spot is in the array, which is where we'll put the int.
        int newSpot = vec.size;
        //put the int at the next available spot of the vector
        vec.arrStart[newSpot] = value;
        //increase the size so we'll know how many elements are there.
        vec.size++;
    }
    
}

void popBack(Vector& vec){
    //find the last element, which is the one we want to pop off. should be the last element based on size.
    int end = vec.size;
    //delete the value there. couldn't get this to work.
//    delete vec.arrStart[end];
    //decrease the size of the array. this will just incriment again if another is added.
    vec.size--;
}

int get(Vector& vec, int index){
    return vec.arrStart[index];
}

void set(Vector& vec, int index, int newValue){
    vec.arrStart[index] = newValue;
}

