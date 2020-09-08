//
//  main.cpp
//  BookAnalyzer
//
//  Created by Justin Siebenhaar on 9/4/20.
//  Copyright © 2020 Justin Siebenhaar. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "bookAnalysis.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    vector<string> house;
    cout<<"enter name of file you'd like to upload (please include file extension)."<<endl;
    string fileName;
    cin>>fileName;
    ifstream houseBook(fileName);
    
    string str;
    string bookContents;
    string keyword = "Hemingway";

    
    std::string line;
    std::vector<std::string> myLines;
    std::vector<keywordList> listOfKeywords;
    
    
    while (houseBook>>line)
    {
        
       house.push_back(line);
    }
        
    houseBook.close();
    
    cout<<"what is the keyword you'd like to search for?"<<endl;
    cin>>keyword;
    
    
    //GET TITLE AND AUTHOR
    //====================
    //using getIndex to find the index of the term "Title:" (note it needs to be capitalized and have the colon)
    vector<string> title = getTitle(house);
    vector<string> author = getAuthor(house);
    
    cout<<"statistics for ";
    if (title[0]==""){
       cout<<"unknown ";
    } else {
        for(string t : title){
           cout<<t<<" ";
       }
    }
    cout<<"by ";
    if (author[0]=="") {
        cout<<"unknown ";
    } else {
        for(string a : author){
            cout<<a<<" ";
        }
    }
    cout<<endl;
    
    
    //NUMBER OF WORDS
    //===============
    int size = house.size();
    cout << "number of words: "<< size << endl;
    
    
    //NUMBER OF CHARACTERS
    //====================
    int totalChar = 0;
    for(string i: house){
        totalChar += i.size();
    }
    cout << "number of characters: "<< totalChar << endl;
    
    
    //GET SHORTEST WORD
    //=================
    string shortestWord = "box";
    for(string w: house){
        if(w.size() < shortestWord.size())
            shortestWord = w;
    }
    
    
    //GET LONGEST WORD
    //================
    //this is working but the longest word is a URL, so i don't really like that.
    //I'd like to figure out how to eliminate them.
    string longestWord = "yelby";
      for(string w: house){
          if(w.size() > longestWord.size())
              longestWord = w;
      }
    
    cout<< "the shortest word is " << "\""<<shortestWord<< "\", and the longest word is \""<<longestWord<<"\"."<<endl;

    
    //GET KEYWORD
    //===========
    //first find all instances of keyword, create a vector to add their index and the words proceeding and ending it as well as the word (string)
    vector<keywordList> key = keywordFunc(house, keyword);
    double bookSize = house.size();
    cout<<"The word \""<<keyword<<"\" appears "<<key.size()<<" times:"<<endl;
    for(keywordList i: key){
        //loop through each string occurance in list, get index
        int z = i.index;
        //calculate percentage relative to total size of book
        int percent = (z / bookSize)*100;
        //display results
        cout<<"at "<<percent<<"%:";
        cout<<" \""<<i.before<<" "<<i.keywordAt<<" "<<i.after<<"\""<<endl;
    }
    return 0;
}
