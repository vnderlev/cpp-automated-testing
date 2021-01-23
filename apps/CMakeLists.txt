add_executable(romanNums romanNums.cpp)
target_compile_features(romanNums PRIVATE cxx_std_17)
target_link_libraries(romanNums PRIVATE RomanNumeral fmt::fmt)
