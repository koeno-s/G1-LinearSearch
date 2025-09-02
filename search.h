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
//Function prototype
int linearSearch(const vector<string>& list, const string& key);
