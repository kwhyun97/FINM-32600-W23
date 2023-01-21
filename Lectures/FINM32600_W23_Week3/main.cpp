#include <iostream>
#include "Currency.h"

using namespace std;

double Currency::GetExchangeRate()
{
    return exchange_rate_;
}

string Currency::GetSymbol()
{
    return symbol_;
}

void Currency::SetExchangeRate(double exchange_rate)
{
    exchange_rate_ = exchange_rate;
}

Currency::Currency()
    : symbol_(""),
    exchange_rate_(0.0)
{
}

Currency::Currency(string symbol, double exchange_rate)
    : symbol_(symbol),
    exchange_rate_(exchange_rate)
{
}

Currency::~Currency()
{
}

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
