//
// Created by Kiwan Hyun on 2023/02/17.
//

#include "CurrencyFactory.h"
#include "Currency.h"
#include <string>
using namespace std;

Currency* CurrencyFactory::GetCurrency(string currencyType)
{
    auto iter = currencies_.find(currencyType);
    if (iter == currencies_.end()){
        // currency is not on file, throw error
        throw std::runtime_error("currency not found");
    }
    return iter->second;
}

CurrencyFactory::CurrencyFactory()
{
    currencies_["USD"] = new Currency("USD", "United States of America", 1);
    currencies_["EUR"] = new Currency("EUR", "European Union", 0.92);
    currencies_["GAP"] = new Currency("GBP", "United Kingdom", 0.82);
    currencies_["CAD"] = new Currency("CAD", "Canada", 1.34);
    currencies_["AUD"] = new Currency("AUD", "Australia", 1.43);
    currencies_["JPY"] = new Currency("JPY", "Japan", 127.9);
    currencies_["RMB"] = new Currency("RMB", "China", 6.7);
}

CurrencyFactory::~CurrencyFactory()
{
    for (auto iter=currencies_.begin(); iter != currencies_.end(); iter++)
    {
        delete iter->second;
    }
}