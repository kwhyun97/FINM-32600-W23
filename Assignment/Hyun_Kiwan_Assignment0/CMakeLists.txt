# CMakeList.txt : CMake project for Hyun_Kiwan_Assignment0, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Hyun_Kiwan_Assignment0")

# Add source to this project's executable.
add_executable (Hyun_Kiwan_Assignment0 "main.cpp"  "Add.cpp" "Add.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Hyun_Kiwan_Assignment0 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
