
/************************************************
* Programmer: Kayden Tarvaran, Sean Hanabusa
* Assignment: G1
* Professor: Dr. Barnett
* Purpose: Linear Search list of movies
*************************************************/

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


