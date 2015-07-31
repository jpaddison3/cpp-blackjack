#pragma once
#include <iostream>

using namespace std;

class Card {
public:
    int rank;
    char suit;
    string string_repr(); 
};
