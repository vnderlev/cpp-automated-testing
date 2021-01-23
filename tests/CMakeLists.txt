# Testing library
FetchContent_Declare(
  catch
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v2.9.1)
FetchContent_MakeAvailable(catch)

# Tests need to be added as executables first
add_executable(romanNumsTests romanNumsTests.cpp)
target_compile_features(romanNumsTests PRIVATE cxx_std_17)
target_link_libraries(romanNumsTests PRIVATE RomanNumeral Catch2::Catch2)
add_test(NAME run_romanNumTests COMMAND romanNumsTests) # Command can be a target
