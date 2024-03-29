cmake_minimum_required(VERSION 3.15)

project(Calculator VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS form)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS
  Widgets
  PrintSupport
)

find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS
  Widgets
  PrintSupport
)

include_directories(
  ${PROJECT_SOURCE_DIR}/controller/calculator
  ${PROJECT_SOURCE_DIR}/controller/graph
  ${PROJECT_SOURCE_DIR}/qcustomplot
  ${PROJECT_SOURCE_DIR}/model/calculation
  ${PROJECT_SOURCE_DIR}/model/credit
  ${PROJECT_SOURCE_DIR}/model/debit
)

set(HEADERS
  ${PROJECT_SOURCE_DIR}/controller/calculator/calculator.h
  ${PROJECT_SOURCE_DIR}/model/calculation/calculation.h
  ${PROJECT_SOURCE_DIR}/qcustomplot/qcustomplot.h
  ${PROJECT_SOURCE_DIR}/controller/graph/graph.h
  ${PROJECT_SOURCE_DIR}/model/credit/credit.h
  ${PROJECT_SOURCE_DIR}/model/debit/debit.h
)

set(SOURCES
  ${PROJECT_SOURCE_DIR}/controller/calculator/calculator.cc
  ${PROJECT_SOURCE_DIR}/model/calculation/calculation.cc
  ${PROJECT_SOURCE_DIR}/qcustomplot/qcustomplot.cc
  ${PROJECT_SOURCE_DIR}/controller/graph/graph.cc
  ${PROJECT_SOURCE_DIR}/model/credit/credit.cc
  ${PROJECT_SOURCE_DIR}/model/debit/debit.cc
)

set(FORMS
  ${PROJECT_SOURCE_DIR}/form/calculator.ui
  ${PROJECT_SOURCE_DIR}/form/graph.ui
  ${PROJECT_SOURCE_DIR}/form/credit.ui
  ${PROJECT_SOURCE_DIR}/form/debit.ui
)

set(PROJECT_SOURCES
  ${SOURCES}
  ${HEADERS}
  ${FORMS}
  ${PROJECT_SOURCE_DIR}/main.cc
)

if (APPLE)
  set(MACOSX_BUNDLE_ICON_FILE appicon.png)
  set(app_icon_macos "${CMAKE_CURRENT_SOURCE_DIR}/data/icon/appicon.png")
  set_source_files_properties(${app_icon_macos} PROPERTIES MACOSX_PACKAGE_LOCATION "Resources")
endif()

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
  qt_add_executable(${PROJECT_NAME}
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
    ${app_icon_macos}
  )

# Define target properties for Android with Qt 6 as:
# set_property(TARGET PhotoLab_1_0 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
# ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
  if(ANDROID)
    add_library(${PROJECT_NAME} SHARED
      ${PROJECT_SOURCES}
    )

  # Define properties for Android with Qt 5 after find_package() calls as:
  # set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
  else()
    add_executable(${PROJECT_NAME}
      ${PROJECT_SOURCES}
    )
  endif()
endif()

target_compile_options(
  ${PROJECT_NAME}
  PRIVATE
  -Wall
  -Werror
  -Wextra
  -Wpedantic
  -fsanitize=address
)

target_link_libraries(
  ${PROJECT_NAME}
  PRIVATE
  Qt${QT_VERSION_MAJOR}::Widgets
  Qt${QT_VERSION_MAJOR}::PrintSupport
  -fsanitize=address
)

set_target_properties(${PROJECT_NAME} PROPERTIES
  MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
  MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
  MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
  MACOSX_BUNDLE TRUE
  WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
  qt_finalize_executable(${PROJECT_NAME})
endif()

# Add cppcheck
find_program(CPPCHECK cppcheck)

if(CPPCHECK)
  message(STATUS "cppcheck found: ${CPPCHECK}")
  list(
    APPEND CPPCHECK_ARGS
    "--enable=all"
    "--inconclusive"
    "--quiet"
    "--language=c++"
    "--std=c++17"
    "--suppress=missingIncludeSystem"
    "--suppress=unusedFunction"
    "--suppress=missingInclude"
    "--suppress=unusedStructMember"
    "--suppress=variableScope"
    "--suppress=*:${PROJECT_SOURCE_DIR}/qcustomplot/*"
  )
  add_custom_target(
    cppcheck
    COMMAND ${CPPCHECK} ${CPPCHECK_ARGS} ${HEADERS} ${SOURCES}
  )
else()
  message(STATUS "cppcheck not found")
endif()

# Add clang-format
find_program(CLANG_FORMAT clang-format)

if(CLANG_FORMAT)
  message(STATUS "clang-format found: ${CLANG_FORMAT}")
  list(
    APPEND CLANG_ARGS
    "-i"
    "-style=Google"
    "--verbose"
  )
  add_custom_target(
    clang-format
    COMMAND ${CLANG_FORMAT} ${CLANG_ARGS} ${HEADERS} ${SOURCES}
  )
else()
  message(STATUS "clang-format not found")
endif()