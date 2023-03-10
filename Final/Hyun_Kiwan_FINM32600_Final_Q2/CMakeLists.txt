cmake_minimum_required(VERSION 3.24)
project(Hyun_Kiwan_FINM32600_Final_Q2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Hyun_Kiwan_FINM32600_Final_Q2 main.cpp Currency.h Currency.cpp CurrencyFactory.h CurrencyFactory.cpp
        Equity.h Equity.cpp EuropeanCall.h EuropeanCall.cpp EuropeanPut.h EuropeanPut.cpp Option.h Option.cpp
        MCPricer.h MCPricer.cpp Normal_Distribution.h Normal_Distribution.cpp)
