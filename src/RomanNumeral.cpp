#include "RomanNumeral/RomanNumeral.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <ctype.h>
#include <regex>
#include <unordered_map>

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

//function to convert a roman numeral to an arabic numeral
int RomanNumeral::to_arabic() {
	// arabic will store the converted number
	int arabic;
	arabic = 0;

	// unordered map for roman algarisms
	unordered_map<char, int> roman_refs;

	roman_refs['I'] = 1;
	roman_refs['V'] = 5;
	roman_refs['X'] = 10;
	roman_refs['L'] = 50;
	roman_refs['C'] = 100;
	roman_refs['D'] = 500;
	roman_refs['M'] = 1000;

	// Iterate through each char
	for (int i = 0; i < roman_val.length(); i++) {
		
		// Fetch arabic value of current and next roman algarisms
		int currentNumber;
		currentNumber = roman_refs[roman_val[i]];
		int nextNumber;
		nextNumber = i+1 < roman_val.length() ? roman_refs[roman_val[i+1]] : 0;

		// Decide between addition or subtraction rule
		if (currentNumber >= nextNumber) {
			arabic += currentNumber;
		} else {
			arabic -= currentNumber;
		};

	}

	return arabic;
};
