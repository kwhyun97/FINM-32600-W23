cmake_minimum_required(VERSION 3.24)
project(Q2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Q2 main.cpp IsPrime.cpp IsPrime.h FindNearestPrime.cpp FindNearestPrime.h FooBar.cpp FooBar.h PrintNearestPrime.cpp PrintNearestPrime.h PrintFooBar.cpp PrintFooBar.h)
