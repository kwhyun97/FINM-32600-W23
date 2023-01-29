#include <iostream>
#include "Currency.h"
#include "FX.h"

using namespace std;

int main()
{
    // Introduction to the exchange
    cout << "Valued Customer, Welcome to the Exchange!" << endl;

    enum CurrencyType {USD = 0, EUR, GBP, CAD, AUD, JPY, RMB, EXIT};
    enum ContinueExit {OUT = 0, ANOTHER};
    double spotExchangeRate;
    double base_amount;
    double foreign_amount;
    Currency baseCurrency;
    Currency foreignCurrency;
    const Currency Currencies[]{Currency("USD", "United States of America", 1),
                                Currency("EUR", "European Union", 0.92),
                                Currency("GBP", "United Kingdom", 0.82),
                                Currency("CAD", "Canada", 1.34),
                                Currency("AUD", "Australia", 1.43),
                                Currency("JPY", "Japan", 127.9),
                                Currency("RMB", "China", 6.7)};

    while(1)
    {
        cout << "Please choose your Base Currency " << endl;
        cout << "Options: " << endl;
        cout << "0 - USD" << endl;
        cout << "1 - EUR" << endl;
        cout << "2 - GBP" << endl;
        cout << "3 - CAD" << endl;
        cout << "4 - AUD" << endl;
        cout << "5 - JPY" << endl;
        cout << "6 - RMB" << endl;
        cout << "7 - EXIT the Exchange" << endl;
        cout << "Please enter your option:";
        int baseCurrencyType;
        cin >> baseCurrencyType;
        switch(static_cast<CurrencyType>(baseCurrencyType))
        {
            case USD:
            {
                baseCurrency = Currencies[USD];
                break;
            }
            case EUR:
            {
                baseCurrency = Currencies[EUR];
                break;
            }
            case GBP:
            {
                baseCurrency = Currencies[GBP];
                break;
            }
            case CAD:
            {
                baseCurrency = Currencies[CAD];
                break;
            }
            case AUD:
            {
                baseCurrency = Currencies[AUD];
                break;
            }
            case JPY:
            {
                baseCurrency = Currencies[JPY];
                break;
            }
            case RMB:
            {
                baseCurrency = Currencies[RMB];
                break;
            }
            default:
            {
                cout << "Thank you for your visit at the Exchange!" << endl;
                return 0;
            }
        }

        cout << "Please choose your Exchange Currency " << endl;
        cout << "Options: " << endl;
        cout << "0 - USD" << endl;
        cout << "1 - EUR" << endl;
        cout << "2 - GBP" << endl;
        cout << "3 - CAD" << endl;
        cout << "4 - AUD" << endl;
        cout << "5 - JPY" << endl;
        cout << "6 - RMB" << endl;
        cout << "7 - EXIT the Exchange" << endl;
        cout << "Please enter your option:";
        int foreignCurrencyType;
        cin >> foreignCurrencyType;

        switch(static_cast<CurrencyType>(foreignCurrencyType))
        {
            case USD:
            {
                foreignCurrency = Currencies[USD];
                break;
            }

            case EUR:
            {
                foreignCurrency = Currencies[EUR];
                break;
            }

            case GBP:
            {
                foreignCurrency = Currencies[GBP];
                break;
            }

            case CAD:
            {
                foreignCurrency = Currencies[CAD];
                break;
            }

            case AUD:
            {
                foreignCurrency = Currencies[AUD];
                break;
            }

            case JPY:
            {
                foreignCurrency = Currencies[JPY];
                break;
            }

            case RMB:
            {
                foreignCurrency = Currencies[RMB];
                break;
            }

            default:
            {
                cout << "Thank you for your visit at the Exchange!" << endl;
                return 0;
            }
        }

        while (1)
        {
            cout << "Enter amount: ";
            cin >> base_amount;

            if (base_amount <= 0)
            {
                cout << "Amount must be positive. Please Try Again." << endl;
                continue;
            }
            else
            {
                foreign_amount = FX(baseCurrency, foreignCurrency, base_amount);
                spotExchangeRate = FX(baseCurrency, foreignCurrency, 1);
                break;
            }
        }

        cout << "" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Success! Your Exchange Order has been forwarded." << endl;
        cout << "" << endl;
        cout << "================================================" << endl;
        cout << "Transaction Receipt: " << endl;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "Base Currency - " << baseCurrency.GetSymbol() << endl;
        cout << "Exchange Currency - " << foreignCurrency.GetSymbol() << endl;
        cout << "Exchange Rate: 1 " << baseCurrency.GetSymbol() << " = ";
        cout << spotExchangeRate << " " << foreignCurrency.GetSymbol() << endl;
        cout << "Exchange Amount: " << base_amount << " " << baseCurrency.GetSymbol();
        cout << " --> " << foreign_amount << " " << foreignCurrency.GetSymbol() << endl;
        cout << "================================================" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "" << endl;

        cout << "Would you like to do another transcation?" << endl;
        cout << "EXIT - 0" << endl;
        cout << "CONTINUE - 1" << endl;
        cout << "Please enter your option: ";
        int continue_exit;
        cin >> continue_exit;
        switch(static_cast<ContinueExit>(continue_exit))
        {
            case(OUT):
                cout << "Thank you for your visit at the Exchange!" << endl;
                return 0;
            case(ANOTHER):
                continue;
        }
    }
}
