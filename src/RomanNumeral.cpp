#include "RomanNumeral/RomanNumeral.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <ctype.h>
#include <regex>

using namespace std;


// Custom constructor
RomanNumeral::RomanNumeral(string value) {
	bool rgx_result;
	rgx_result = regex_match(value, regex("^M{0,4}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$"));
	
	bool exception_occurred = false;
	if (rgx_result == true) {
		this -> roman_val = value;
		//cout << "Constructed roman number: " << value << endl;
	} else {
		exception_occurred = true;
		throw(value);
	};
};


/*
	Member functions
*/

/*
	function to convert a roman numeral to an arabic numeral
	I = 1
	V = 5
	X = 10
	L = 50
	C = 100
	D = 500
	M = 1000
*/
int RomanNumeral::to_arabic() {
	// Initialize var
	int arabic;
	arabic = 0;
	//cout << "this -> roman_val.length() = " << this -> roman_val.length() << endl;
	cout << "roman_val.length() = " << roman_val.length() << endl;
	// Iterate through each char
	for (int i = 0; i < roman_val.length(); i++) {
		cout << "roman_val[i] = " << roman_val[i] << endl;
		if (roman_val[i] == 'I') {
			arabic = arabic + 1;
		} else if (roman_val[i] == 'V') {
			arabic = arabic + 5;
		} else if (roman_val[i] == 'X') {
			arabic = arabic + 10;
		} else if (roman_val[i] == 'L') {
			arabic = arabic + 50;
		} else if (roman_val[i] == 'C') {
			arabic = arabic + 100;
		} else if (roman_val[i] == 'D') {
			arabic = arabic + 500;
		} else if (roman_val[i] == 'M') {
			arabic = arabic + 1000;
		} else {
			throw(roman_val[i]);
		}
	};

	return arabic;
};
