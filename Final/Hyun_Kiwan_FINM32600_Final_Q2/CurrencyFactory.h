//
// Created by Kiwan Hyun on 2023/02/17.
//
#include "Currency.h"
#include <map>
#include <stdexcept>

using std::map;

#ifndef HYUN_KIWAN_ASSIGNMENT3_CURRENCYFACTOR_H
#define HYUN_KIWAN_ASSIGNMENT3_CURRENCYFACTOR_H
class CurrencyFactory
{
public:
    CurrencyFactory(); // Version-2
    ~CurrencyFactory(); // destructor
    Currency* GetCurrency(string currencyType);

private:
    map<string,Currency*> currencies_;
};
#endif //HYUN_KIWAN_ASSIGNMENT3_CURRENCYFACTOR_H
