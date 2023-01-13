# CMakeList.txt : CMake project for FINM32600_W23_Week1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("FINM32600_W23_Week1")

# Add source to this project's executable.
add_executable (FINM32600_W23_Week1 "FINM32600_W23_Week1.cpp" "FINM32600_W23_Week1.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET FINM32600_W23_Week1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
