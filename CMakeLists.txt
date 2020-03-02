cmake_minimum_required(VERSION 3.5)

project(example)

# Library

add_library(hello_lib SHARED
    ${PROJECT_SOURCE_DIR}/src/Hello.cpp
)

target_include_directories(hello_lib
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

# Debug-macro

add_subdirectory(external/dbg)
add_subdirectory(external/Catch2)

# Hana

find_package(Boost REQUIRED)
if ( ${Boost_FOUND} )
  include_directories( ${Boost_INCLUDE_DIRS} )
endif()

# Executable

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME}
    ${PROJECT_SOURCE_DIR}/src/main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE hello_lib
    PRIVATE dbg_macro
    Catch2
)
