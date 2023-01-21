//
// Created by Kiwan Hyun on 2023/01/20.
//
#include <string>
using std::string;

#ifndef FINM32600_W23_WEEK3_Currency_H
#define FINM32600_W23_WEEK3_Currency_H
class Currency
{
public:
    Currency(); // default constructor
    Currency(string symbol, string country, double exchange_rate); // overload constructor
    Currency(const Currency&); // copy constructor
    ~Currency(); // destructor

    string GetSymbol(); // getting the symbol of currency
    double GetExchangeRate(); // getting the exchange rate of currency
    double ConvertFromUSD(double amount); // converting to currency from USD

    void SetSymbol(string symbol); // setting the symbol for a currency
    void SetCountry(string country); // setting the country for a currency
    void SetExchangeRate(double exchange_rate); // setting the exchange rate for a currency

private:
    string symbol_; // symbol of currency
    string country_; // country of currency
    double exchange_rate_; // exchange rate of currency from USD
};
#endif //FINM32600_W23_WEEK3_Currency_H