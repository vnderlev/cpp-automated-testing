set(HEADER_LIST "${CppAutomatedTesting_SOURCE_DIR}/include/RomanNumeral/RomanNumeral.hpp")
add_library(RomanNumeral RomanNumeral.cpp ${HEADER_LIST})
target_include_directories(RomanNumeral PUBLIC ../include)
target_link_libraries(RomanNumeral PRIVATE Boost::boost)
target_compile_features(RomanNumeral PUBLIC cxx_std_11)

source_group(
  TREE "${PROJECT_SOURCE_DIR}/include"
  PREFIX "Header Files"
  FILES ${HEADER_LIST})
