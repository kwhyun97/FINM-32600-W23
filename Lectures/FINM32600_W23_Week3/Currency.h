//
// Created by Kiwan Hyun on 2023/01/20.
//

#pragma once

using namespace std;

class Currency
{
public:
    Currency(); // default constructor
    Currency(string symbol, double exchange_rate); // overload constructor
    ~Currency(); // destructor

    string GetSymbol(); // getting the symbol of currency
    double GetExchangeRate(); // getting the exchange rate of currency

    void SetExchangeRate(double exchange_rate); // setting the exchange rate for a currency

private:
    string symbol_; // symbol of currency
    double exchange_rate_; // exchange rate of currency
};