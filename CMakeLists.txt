cmake_minimum_required(VERSION 3.0)
project(reactor_algebra)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -O3 -flto")

set(SOURCE_FILES
    ../reactor-math/lib/src/reactor/math/Arithmetic.cpp
    lib/src/reactor/algebra/Vector2d.cpp
    lib/src/reactor/algebra/Transform2d.cpp)

include_directories(
    lib/include
    ../reactor-api-math/api/include
    ../reactor-api-algebra/api/include
    ../reactor-api-type/api/include)

add_executable(reactor_algebra ${SOURCE_FILES})