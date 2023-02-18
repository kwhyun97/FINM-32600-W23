//
// Created by Kiwan Hyun on 2023/02/17.
//

#include "Currency.h"
#include <iostream>
#include <string>
using namespace std;

double Currency::GetExchangeRate()
{
    //cout << "Currency::GetExchangeRate() called" << endl;
    return exchange_rate_;
}

string Currency::GetSymbol()
{
    //cout << "Currency::GetSymbol() called" << endl;
    return symbol_;
}

string Currency::GetCountry()
{
    //cout << "Currency::GetCountry() called" << endl;
    return country_;
}

void Currency::SetSymbol(string symbol)
{
    //cout << "Currency::SetSymbol(" << symbol << ") called" << endl;
    symbol_ = symbol;
}

void Currency::SetCountry(string country)
{
    //cout << "Currency::SetCountry(" << country << ") called" << endl;
    country_ = country;
}

void Currency::SetExchangeRate(double exchange_rate)
{
    //cout << "Currency::SetExchangeRate(" << exchange_rate << ") called" << endl;
    exchange_rate_ = exchange_rate;
}

double Currency::ConvertToUSD(double amount)
{
    return amount * 1/exchange_rate_;
}

double Currency::ConvertFromUSD(double amount)
{
    return amount * exchange_rate_;
}

Currency::Currency(string symbol, string country, double exchange_rate)
        : symbol_(symbol),
          country_(country),
          exchange_rate_(exchange_rate)
{
}
