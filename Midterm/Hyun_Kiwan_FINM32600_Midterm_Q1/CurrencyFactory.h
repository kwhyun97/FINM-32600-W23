//
// Created by Kiwan Hyun on 2023/02/03.
//
#include "Currency.h"

#ifndef Q1_CURRENCYFACTORY_H
#define Q1_CURRENCYFACTORY_H
class CurrencyFactory
{
public:
    CurrencyFactory(); // Version-2
    ~CurrencyFactory(); // destructor
    Currency* GetCurrency(int currencyType);
// THIS IS VERSION-2 FOR Q1 (b)
private:
    Currency* currencies_[3];
    bool first_times_[3] = {true, true, true};
    string symbols_[3] = {"AUD", "CAD", "USD"};
    string countries_[3] = {"Austrailia", "Canada", "USA"};
    double rates_[3] = {1.3, 1.1, 1.0};
};
#endif //Q1_CURRENCYFACTORY_H