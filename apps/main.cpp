#include <RomanNumeral/RomanNumeral.hpp>
#include <LeapYear/LeapYear.hpp>

#include <fmt/format.h>

#include <iostream>
#include <string>


int main() {
    try {
        RomanNumeral ten("X");
        RomanNumeral four("IV");
        int arabic_ten = ten.to_arabic();
        int arabic_four = four.to_arabic();
        cout << endl << "X in arabic: " << arabic_ten << endl << endl;
        cout << "IV in arabic: " << arabic_four << endl << endl;
    } catch(string input) {
        cout << fmt::format("Invalid roman numeral: `{}`", input) << endl;
    };

    return 0;
}
