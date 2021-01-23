set(ROMAN_NUMERAL_DIR "${CppAutomatedTesting_SOURCE_DIR}/include/RomanNumeral/RomanNumeral.hpp")
add_library(RomanNumeral RomanNumeral.cpp ${ROMAN_NUMERAL_DIR})
target_include_directories(RomanNumeral PUBLIC ../include)
target_link_libraries(RomanNumeral PRIVATE Boost::boost)
target_compile_features(RomanNumeral PUBLIC cxx_std_11)

set(LEAP_YEAR_DIR "${CppAutomatedTesting_SOURCE_DIR}/include/LeapYear/LeapYear.hpp")
add_library(LeapYear LeapYear.cpp ${LEAP_YEAR_DIR})
target_include_directories(LeapYear PUBLIC ../include)
target_link_libraries(LeapYear PRIVATE Boost::boost)
target_compile_features(LeapYear PUBLIC cxx_std_11)

source_group(
  TREE "${PROJECT_SOURCE_DIR}/include"
  PREFIX "Header Files"
  FILES ${ROMAN_NUMERAL_DIR}
  FILES ${LEAP_YEAR_DIR})
