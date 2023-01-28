//
// Created by Kiwan Hyun on 2023/01/27.
//
#include "Currency.h"
#ifndef FINM32600_W23_WEEK4_CURRENCYFACTORY_H
#define FINM32600_W23_WEEK4_CURRENCYFACTORY_H
class CurrencyFactory
{
public:
    CurrencyFactory() = default; // Telling the compiler to create a default constructor
    Currency GetCurrency(int currencyType);
};
#endif //FINM32600_W23_WEEK4_CURRENCYFACTORY_H
