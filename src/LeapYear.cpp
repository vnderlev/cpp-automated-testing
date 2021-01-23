#include "LeapYear/LeapYear.hpp"
#include <iostream>

using namespace std;


// Custom constructor
LeapYear::LeapYear(int year) {
	this -> year = year;
};


/*
	Member functions
*/

//function to convert a roman numeral to an arabic numeral
bool LeapYear::is_leap_year() {

	bool is_leap_year;
	is_leap_year = false;

	if (year % 4 == 0) {
		if (year % 100 == 0 && year % 400 == 0) {
			// Is a LeapYear!!!
			is_leap_year = true;
		} else if (year % 100 != 0) {
			// Is a LeapYear!!!
			is_leap_year = true;
		} else {
			// Not a LeapYear
			is_leap_year = false;
		}
	} else {
		// Not a LeapYear
		is_leap_year = false;
	}

	return is_leap_year;
};
