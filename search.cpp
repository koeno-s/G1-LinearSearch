
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

int linearSearch(const vector<string>& list, const string& key){
    string title = "";
    string lowercaseKey = key;

    for (char &c : lowercaseKey){
            c = tolower(c);
        }

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


