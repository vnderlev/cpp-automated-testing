#pragma once

#include <iostream>
#include <string>
using namespace std;


// Global class (defined outside all methods)
class RomanNumeral {
    public:
        // Member variables
        string roman_val;
        
        // Member functions
        int to_arabic();

        // Custom initializer
        RomanNumeral(string);
};