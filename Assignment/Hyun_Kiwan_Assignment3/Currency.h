//
// Created by Kiwan Hyun on 2023/02/17.
//
#include <string>
using namespace std;
#ifndef HYUN_KIWAN_ASSIGNMENT3_CURRENCY_H
#define HYUN_KIWAN_ASSIGNMENT3_CURRENCY_H
class Currency
{
public:
    // Hyun_Kiwan_FINM32600_Midterm_Q1(a) Member functions 1.
    // Constructors + destructor
    Currency(); // default constructor
    Currency(string symbol, string country, double exchange_rate); // overload constructor
    ~Currency(); // destructor

    // Hyun_Kiwan_FINM32600_Midterm_Q1(a) Member functions 2.
    // Copy constructor and an assignment operator
    Currency(const Currency&); // copy constructor
    Currency& operator=(const Currency& other); // Assignment operator

    // Hyun_Kiwan_FINM32600_Midterm_Q1(a) Member functions 3.
    // Get and Set member functions to read and modify each attribute
    string GetSymbol(); // getting the symbol of currency
    string GetCountry();
    double GetExchangeRate(); // getting the exchange rate of currency
    void SetSymbol(string symbol); // setting the symbol for a currency
    void SetCountry(string country); // setting the country for a currency
    void SetExchangeRate(double exchange_rate); // setting the exchange rate for a currency

private:
    // Hyun_Kiwan_FINM32600_Midterm_Q1(a) Attributes
    string symbol_; // symbol of currency
    string country_; // country of currency
    double exchange_rate_; // exchange rate of currency relative to the USD
};
#endif //HYUN_KIWAN_ASSIGNMENT3_CURRENCY_H
