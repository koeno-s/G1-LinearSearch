
/*********************************************************************
* CS1B – G1: Linear Search
*  Partner A: Sean Hanabusa (ID) — role: driver
*  Partner B: Kayden Tarvaran (ID) — role: function
*  Date: 2025‑09‑02
*  Purpose: Case‑insensitive substring linear search over book titles.
*  Build:   g++ -std=c++20 main.cpp search.cpp -o search
***********************************************************************/

using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

//Linear search function
int linearSearch(const vector<string>& list, const string& key){

    //Defining temp variables
    string title = "";
    string lowercaseKey = key;

    //Creating a lowercase version of the key
    for (char &c : lowercaseKey){
            c = tolower(c);
        }

    //Loop to compare key to current value and determine if it is found or not
    for (int i = 0; i < list.size(); i++){
        title = list[i];

        for (char &c : title){
            c = tolower(c);
        }
        if (title.find(lowercaseKey) != string::npos){

            return i;
        }
    }
    return -1;

}


