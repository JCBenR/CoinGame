//
//  triple.hpp
//  templatesLab
//
//  Created by Justin Siebenhaar on 9/18/20.
//

#ifndef triple_hpp
#define triple_hpp

#include <stdio.h>
#include <vector>

//1.create TRIPLE objects and store variety of types.
//2.access TRIPLE member variables
//3.add method SUM to struct to add all three members together (a+b+c)
//4.create TRIPLE<vector<int>>
//5.what happens when you call the SUM method

template <typename T>
struct Triple{
//    Triple(int initialCapacity){
//        arrStart = new int[initialCapacity];
//        capacity = initialCapacity;
//        size=0;
//    }
    T a,b,c;
    
    T sum() const;
};

template <typename T>
T Triple<T>::sum()const{
    return a+b+c;
};

#endif /* triple_hpp */
