//preprocessor
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;


bool isomorphic(string str1 , string str2){
    if(str1.size() != str2.size()) {
        return false;
    }
    unordered_map<char, char> mapping; // Map to store character mappings
    unordered_map<char, bool> mapped;   // Map to keep track of mapped characters

    for(int i = 0; i < str1.size(); i++) {
        char c1 = str1[i];
        char c2 = str2[i];

        if(mapping.find(c1) == mapping.end()) {
            if(mapped[c2]) { // If c2 is already mapped, return false
                return false;
            }
            mapping[c1] = c2; // Map c1 to c2
            mapped[c2] = true; // Mark c2 as mapped
        } else {
            if(mapping[c1] != c2) { // If c1 is already mapped, check if it's mapped to c2
                return false;
            }
        }
    }
    return true;
}

int main(){
    string str1 ="egg";
    string str2 = "add";
    if(isomorphic(str1, str2)){
        cout << "Strings are isomorphic." << endl;
    } else {
        cout << "Strings are not isomorphic." << endl;
    }
    return 0;
}
/*
  1.create two string str1 and str2
  2.create isomorphic function that return bool  value 

  isomorphic function 
     1. check both the string must have the same length if not then return  
*/