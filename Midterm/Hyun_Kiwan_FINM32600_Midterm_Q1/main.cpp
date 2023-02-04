#include <iostream>
#include "CurrencyFactory.h"
#include "Currency.h"

using namespace std;
// THIS IS VERSION-2 FOR Q1 (b)
int main() {
    enum CurrencyType {AUD = 0, CAD, USD};
    CurrencyFactory factory;

    Currency* aud = factory.GetCurrency(AUD);

    cout << aud->GetSymbol() << endl;
    cout << " " << aud->GetCountry() << endl;
    cout << " " << aud->GetExchangeRate() << endl;

    Currency* cad = factory.GetCurrency(CAD);

    cout << cad->GetSymbol() << endl;
    cout << " " << cad->GetCountry() << endl;
    cout << " " << cad->GetExchangeRate() << endl;

    Currency* usd = factory.GetCurrency(USD);

    cout << usd->GetSymbol() << endl;
    cout << " " << usd->GetCountry() << endl;
    cout << " " << usd->GetExchangeRate() << endl;

    cout << aud->GetSymbol() << endl;
    cout << " " << aud->GetCountry() << endl;
    cout << " " << aud->GetExchangeRate() << endl;

    return 0;
}
