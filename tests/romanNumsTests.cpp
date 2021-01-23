#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <RomanNumeral/RomanNumeral.hpp>


TEST_CASE( "Quick check", "[main]" ) {
    RomanNumeral roman_num1("XV");
    RomanNumeral roman_num2("X");
    RomanNumeral roman_num3("IV");
    auto fifteen = roman_num1.to_arabic();
    auto ten = roman_num2.to_arabic();
    auto four = roman_num3.to_arabic();

    REQUIRE( fifteen == 15 );
    REQUIRE( ten == 10 );
    REQUIRE( four == 4 );
}
