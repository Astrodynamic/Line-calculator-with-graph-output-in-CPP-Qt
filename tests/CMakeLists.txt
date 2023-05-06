cmake_minimum_required(VERSION 3.5)
project(SCalc_v2 VERSION 0.1 LANGUAGES CXX)

#=============================================================== Setup CMake
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS --coverage)
set(CMAKE_EXE_LINKER_FLAGS --coverage)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

find_package(Qt6 REQUIRED COMPONENTS Core)

include_directories(
  ${PROJECT_SOURCE_DIR}/../include
)

enable_testing()

add_executable(
  SmartCalc_v2_test
  SCalc_test.cpp
  ../source/calculation.cpp
  ../include/calculation.hpp
)

target_link_libraries(SmartCalc_v2_test
  Qt6::Core
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(SmartCalc_v2_test)
