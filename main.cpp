/*
  CS1B – G1: Linear Search
  Partner A: Sean Hanabusa (ID) — role: driver
  Partner B: Kayden Tarvaran (ID) — role: function
  Date: 2025‑09‑02
  Purpose: Case‑insensitive substring linear search over book titles.
  Build:   g++ -std=c++20 main.cpp search.cpp -o search
*/
#include "search.h"
#include <iostream>
#include <iomanip>
#inclue <cctype>
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
  
  //Output menu 
}
