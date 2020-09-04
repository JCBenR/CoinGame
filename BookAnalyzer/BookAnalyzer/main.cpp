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

using namespace std;

int getIndex(vector<string> v, string Z);

int main(int argc, const char * argv[]) {
    vector<string> house;
    ifstream houseBook("emptyHouse.txt");
    
    string str;
    string bookContents;
    
    std::string line;
    std::vector<std::string> myLines;
    while (houseBook>>line)
    {
        
       house.push_back(line);
    }
        
    houseBook.close();
    
    cout << house[61] << endl;
    
    
    //GET TITLE AND AUTHOR
    //====================
    //using getIndex to find the index of the term "Title:" (note it needs to be capitalized and have the colon)
    int titlePlace = getIndex(house, "Title:");
    int authorPlace = getIndex(house, "Author:");
    
    for (int i = titlePlace; i<titlePlace + 100; i++) {
        if (house[i] == "Author:") {
            break;
        } else{
            cout << house[i] << " ";}
    }
    cout<<endl;
    for (int i = authorPlace; i<authorPlace + 100; i++) {
        if (house[i] == "Release") {
            break;
        } else{
            cout << house[i] << " ";}
    }
    
    
    //NUMBER OF WORDS
    //===============
    int size = house.size();
    cout << size << endl;
    
    //NUMBER OF CHARACTERS
    //====================
    int totalChar = 0;
    for(string i: house){
        totalChar += i.size();
    }
    cout << totalChar << endl;
    
    //GET SHORTEST WORD
    //=================
    string shortestWord = "yelby";
    for(string w: house){
        if(w.size() < shortestWord.size())
            shortestWord = w;
    }
    
    cout<<shortestWord<<endl;
    
    
    
    //GET LONGEST WORD
    //================
    //this is working but the longest word is a URL, so i don't really like that. I'd like to figure out how to eliminate them.
    string longestWord = "yelby";
      for(string w: house){
          if(w.size() > longestWord.size() && (longestWord.find("http") != std::string::npos))
              longestWord = w;
      }
    
    cout<<longestWord<<endl;
    
    if(longestWord.find("http") != std::string::npos){
        cout << "it's a URL"<<endl;
    }
    return 0;
}

//GET SHORTEST WORD
//=================
//string shortestWord = "yelby";
//for(string w: house){
//    if(w.size() < shortestWord.size())
//        shortestWord = w;
//}



int getIndex(vector<string> v, string Z)
{
    auto it = find(v.begin(),
                   v.end(), Z);
    int thePlace;
    // If element was found
    if (it != v.end()) {
        // calculating the index
        // of Z
        int index = distance(v.begin(),
                             it);
        thePlace = index;
        cout << index << endl;
    }
    else {
        // If the element is not
        // present in the vector
        cout << "-1" << endl;
    } return thePlace;
}
