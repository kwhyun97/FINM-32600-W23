//
// Created by Kiwan Hyun on 2023/01/20.
//
#include "Currency.h"

#include <string>
using std::string;

double Currency::GetExchangeRate()
{
    return exchange_rate_;
}

string Currency::GetSymbol()
{
    return symbol_;
}

double Currency::ConvertFromUSD(double amount)
{
    return amount * exchange_rate_;
}

void Currency::SetSymbol(string symbol)
{
    symbol_ = symbol;
}

void Currency::SetCountry(string country)
{
    country_ = country;
}

void Currency::SetExchangeRate(double exchange_rate)
{
    exchange_rate_ = exchange_rate;
}

Currency::Currency()
        : symbol_(""),
          country_(""),
          exchange_rate_(0.0)
{
}

Currency::Currency(string symbol, string country, double exchange_rate)
        : symbol_(symbol),
          country_(country),
          exchange_rate_(exchange_rate)
{
}

Currency::Currency(const Currency& other)
        : symbol_(other.symbol_),
          country_(other.country_),
          exchange_rate_(other.exchange_rate_)
{
}

Currency::~Currency()
{
}