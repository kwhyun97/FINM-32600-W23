# CMakeList.txt : CMake project for Hyun_Kiwan_Assignment5, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Hyun_Kiwan_Assignment5")

# Add source to this project's executable.
add_executable (Hyun_Kiwan_Assignment5 MCPricer.cpp MCPricer.h Equity.cpp Equity.h EuropeanCall.cpp EuropeanCall.h
        EuropeanPut.cpp EuropeanPut.h Option.cpp Option.h main.cpp)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Hyun_Kiwan_Assignment5 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
