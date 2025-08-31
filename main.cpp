/*********************************************************************
* CS1B – G1: Linear Search
*  Partner A: Sean Hanabusa (ID) — role: driver
*  Partner B: Kayden Tarvaran (ID) — role: function
*  Date: 2025‑09‑02
*  Purpose: Case‑insensitive substring linear search over book titles.
*  Build:   g++ -std=c++20 main.cpp search.cpp -o search
***********************************************************************/
#include "search.h"
#include <iostream>
#include <iomanip>
#include <cctype>
#include <vector>
using namespace std;
int main()
{
  //Data Dictionary 
  char choice; 
  string searchItem;
  vector<string> books = {
        "Star Wars",
        "The Empire Strikes Back (Star Wars)",
        "Splinter of the Mind's Eye (Star Wars)",
        "Return of the Jedi (Star Wars)",
        "Heir to the Empire (Star Wars: The Thrawn Trilogy, Vol. 1)",
        "Dark Force Rising (Star Wars: The Thrawn Trilogy, Vol. 2)",
        "The Last Command (Star Wars: The Thrawn Trilogy)",
        "Specter of the Past (Star Wars: The Hand of Thrawn #1)",
        "Vision of the Future (Star Wars: The Hand of Thrawn, Book 2)",
        "Battlestar Galactica",
        "New Battlestar Galactica Volume 1 (Battlestar Galactica (Dynamite)) (v. 1)",
        "New Battlestar Galactica Volume II Hardcover (Battlestar Galactica (Dynamite))",
        "The Hobbit",
        "The Lord of the Rings: 50th Anniversary, One Vol. Edition",
        "The Two Towers",
        "The Return of the King",
        "The Fellowship of the Ring",
        "C++ Programming: From Problem Analysis to Program Design 7th Edition",
        "Digital Computer Electronics",
        "Assembly Language for x86 Processors (7th Edition)"
  };
  int itemIndex; 
  //Output menu 
  int row = 25; // Lenght of output row
  do
  {
    cout << string(row, '*') << endl;
    cout << "*" << string(6, ' ') << "Linear Search" << string(5, ' ') << "*" << endl;
    cout << string(row, '*') << endl;
    cout << "* <S>earch" << string(14, ' ') << "*" << endl;;
    cout << "* <Q>uit" << string(16, ' ') << "*" << endl;;
    cout << string(row, '*') << endl;
    cout << "Choice: " << endl;
    cin >> choice;
    choice = toupper(choice);
    if (choice == 'S')
    {
      cout << "Search: " << endl;
      cin >> searchItem;
      itemIndex = linearSearch(books, searchItem);
      if(itemIndex == -1)
      {
        cout << searchItem << " was not found!" << endl;
      }
      else 
      {
        cout << "FOUND: " << books[itemIndex] << "   " << "index=" << itemIndex << endl;
      }
    }
  } while (choice != 'Q');
}
