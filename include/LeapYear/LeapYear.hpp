#pragma once

#include <iostream>
#include <string>
using namespace std;


// Global class (defined outside all methods)
class LeapYear {
    public:
        // Member variables
        int year;
        
        // Member functions
        bool is_leap_year();

        // Custom initializer
        LeapYear(int);
};