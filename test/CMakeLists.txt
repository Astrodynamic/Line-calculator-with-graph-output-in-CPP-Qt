cmake_minimum_required(VERSION 3.11)
project(TEST VERSION 1.0 LANGUAGES CXX)

#=============================================================== Setup CMake
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

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
  ${PROJECT_SOURCE_DIR}/../model/calculation
)

enable_testing()

add_executable(
  ${PROJECT_NAME}
  ../model/calculation/calculation.cc
  ../model/calculation/calculation.h
  tests.cc
)

target_link_libraries(${PROJECT_NAME}
  Qt6::Core
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
