cmake_minimum_required(VERSION 3.24)
project(Q1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Q1 main.cpp Currency.cpp Currency.h CurrencyFactory.cpp CurrencyFactory.h)
