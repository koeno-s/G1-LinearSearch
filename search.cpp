
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
#include <iomanip>

//Linear search function
int linearSearch(const vector<string>& list, const string& key){

    //Defining temp variables
    int input = -1;
    vector<int> choice;
    choice.reserve(20);
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

            choice.push_back(i);
            
        }
    }

    cout << endl << "Input ChoiceCode of the book you are looking for" << endl;
    cout << "------------------------------------------------" << endl;
    cout << left << setw(80) << "Name" << "ChoiceCode" << endl;
    for (auto g : choice){
        cout << setw(80) << list[g]<< g << endl;
    }
    cout << setw(80) << "Book Not Found" << "-1" << endl;

    cin >> input;

    return input;

}


