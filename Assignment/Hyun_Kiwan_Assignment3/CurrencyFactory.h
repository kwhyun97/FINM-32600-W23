//
// Created by Kiwan Hyun on 2023/02/17.
//
#include "Currency.h"

#ifndef HYUN_KIWAN_ASSIGNMENT3_CURRENCYFACTOR_H
#define HYUN_KIWAN_ASSIGNMENT3_CURRENCYFACTOR_H
class CurrencyFactory
{
public:
    CurrencyFactory(); // Version-2
    ~CurrencyFactory(); // destructor
    Currency* GetCurrency(int currencyType);

private:
    Currency* currencies_[7];
    bool first_times_[7] = {true, true, true, true, true, true, true};
    string symbols_[7] = {"USD", "EUR", "GBP", "CAD", "AUD", "JPY", "RMB"};
    string countries_[7] = {"United States", "European Union", "Great Britain",
                            "Canada", "Australia", "Japan", "China"};
    double rates_[7] = {1.0, 0.92, 0.82, 1.34, 1.43, 127.9, 6.7};
};
#endif //HYUN_KIWAN_ASSIGNMENT3_CURRENCYFACTOR_H
