//
// Created by Kiwan Hyun on 2023/02/17.
//

#include "CurrencyFactory.h"
#include "Currency.h"
#include <string>
using namespace std;

Currency* CurrencyFactory::GetCurrency(int currencyType)
{
    if(first_times_[currencyType])
    {
        currencies_[currencyType] = new Currency(symbols_[currencyType],
                                                 countries_[currencyType],
                                                 rates_[currencyType]);

        first_times_[currencyType] = false;
    }

    return currencies_[currencyType];
}

CurrencyFactory::CurrencyFactory()
{
}

CurrencyFactory::~CurrencyFactory()
{
    for (int i = 0; i < 3; i++)
    {
        delete currencies_[i];
    }
}