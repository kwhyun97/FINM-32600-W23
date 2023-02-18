//
// Created by Kiwan Hyun on 2023/02/17.
//

#include "Currency.h"
#include <iostream>
#include <string>
using namespace std;

double Currency::GetExchangeRate()
{
    cout << "Currency::GetExchangeRate() called" << endl;
    return exchange_rate_;
}

string Currency::GetSymbol()
{
    cout << "Currency::GetSymbol() called" << endl;
    return symbol_;
}

string Currency::GetCountry()
{
    cout << "Currency::GetCountry() called" << endl;
    return country_;
}

void Currency::SetSymbol(string symbol)
{
    cout << "Currency::SetSymbol(" << symbol << ") called" << endl;
    symbol_ = symbol;
}

void Currency::SetCountry(string country)
{
    cout << "Currency::SetCountry(" << country << ") called" << endl;
    country_ = country;
}

void Currency::SetExchangeRate(double exchange_rate)
{
    cout << "Currency::SetExchangeRate(" << exchange_rate << ") called" << endl;
    exchange_rate_ = exchange_rate;
}

Currency::Currency()
        : symbol_(""),
          country_(""),
          exchange_rate_(0.0)
{
    cout << "Default Currency Constructed" << endl;
}

Currency::Currency(string symbol, string country, double exchange_rate)
        : symbol_(symbol),
          country_(country),
          exchange_rate_(exchange_rate)
{
    cout << "Currency for " << country << " constructed" << endl;
}

Currency::Currency(const Currency& other)
        : symbol_(other.symbol_),
          country_(other.country_),
          exchange_rate_(other.exchange_rate_)
{
    cout << "Currency Copied" << endl;
}

Currency::~Currency()
{
    cout << "Currency Destructed" << endl;
}

// Assignment operator
Currency& Currency::operator=(const Currency& other) {
    if (this != &other) {
        symbol_ = other.symbol_;
        country_ = other.country_;
        exchange_rate_ = other.exchange_rate_;
    }

    return *this;
}