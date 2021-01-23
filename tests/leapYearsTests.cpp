#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <LeapYear/LeapYear.hpp>


TEST_CASE( "Not Centurial Leap Years", "[main]" ) {

    LeapYear b(2004);
    LeapYear c(2008);
    LeapYear d(2012);
    LeapYear e(2016);

    REQUIRE( b.is_leap_year() == true );
    REQUIRE( c.is_leap_year() == true );
    REQUIRE( d.is_leap_year() == true );
    REQUIRE( e.is_leap_year() == true );

}


TEST_CASE( "Centurial Leap Years", "[main]" ) {

    LeapYear a(2000);

    REQUIRE( a.is_leap_year() == true );

}


TEST_CASE( "Not divisible by 4", "[main]" ) {

    LeapYear a(2015);
    LeapYear b(2017);

    REQUIRE( a.is_leap_year() == false );
    REQUIRE( b.is_leap_year() == false );

}


TEST_CASE( "Centurial Years not divisible by 400", "[main]" ) {

    LeapYear a(1500);
    LeapYear b(1900);

    REQUIRE( b.is_leap_year() == false );
    REQUIRE( a.is_leap_year() == false );

}