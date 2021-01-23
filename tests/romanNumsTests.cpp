#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <RomanNumeral/RomanNumeral.hpp>


TEST_CASE( "Single Digits", "[main]" ) {

    RomanNumeral a("I");
    RomanNumeral b("V");
    RomanNumeral c("X");
    RomanNumeral d("L");
    RomanNumeral e("C");
    RomanNumeral f("D");
    RomanNumeral g("M");

    REQUIRE( a.to_arabic() == 1 );
    REQUIRE( b.to_arabic() == 5 );
    REQUIRE( c.to_arabic() == 10 );
    REQUIRE( d.to_arabic() == 50 );
    REQUIRE( e.to_arabic() == 100 );
    REQUIRE( f.to_arabic() == 500 );
    REQUIRE( g.to_arabic() == 1000 );

}

TEST_CASE( "Sum Rule", "[main]" ) {

    RomanNumeral a("II");
    RomanNumeral b("VI");
    RomanNumeral c("XII");
    RomanNumeral d("LX");
    RomanNumeral e("CL");
    RomanNumeral f("DL");
    RomanNumeral g("MXXVIII");

    REQUIRE( a.to_arabic() == 2 );
    REQUIRE( b.to_arabic() == 6 );
    REQUIRE( c.to_arabic() == 12 );
    REQUIRE( d.to_arabic() == 60 );
    REQUIRE( e.to_arabic() == 150 );
    REQUIRE( f.to_arabic() == 550 );
    REQUIRE( g.to_arabic() == 1028 );
    
}

TEST_CASE( "Subtraction Rule", "[main]" ) {

    RomanNumeral a("IV");
    RomanNumeral b("IX");
    RomanNumeral c("XIV");
    RomanNumeral d("XLIX");
    RomanNumeral e("XCIX");
    RomanNumeral f("XLV");
    RomanNumeral g("MMCMXCIX");

    REQUIRE( a.to_arabic() == 4 );
    REQUIRE( b.to_arabic() == 9 );
    REQUIRE( c.to_arabic() == 14 );
    REQUIRE( d.to_arabic() == 49 );
    REQUIRE( e.to_arabic() == 99 );
    REQUIRE( f.to_arabic() == 45 );
    REQUIRE( g.to_arabic() == 2999 );
    
}
