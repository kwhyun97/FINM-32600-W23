#include <iostream>

using namespace std;

void usd_rate(const double *rates, double* rate, int n)
{
    *rate = rates[n];
}

int main() 
{
    // Introduction to the exchange
    cout << "Valued Customer, Welcome to the Exchange!" << endl;

    enum CurrencyType {USD = 0, EUR, GBP, CAD, AUD, JPY, RMB, EXIT};
    int baseCurrency;
    int foreignCurrency;
    double rate_1;
    double rate_2;
    const double ex_rate[]{ 1, 0.92, 0.82, 1.34, 1.43, 127.9, 6.7 };
    double amount;
    string currencies[] {"USD", "EUR", "GBP", "CAD", "AUD", "JPY", "RMB" };

    while (1)
    {
        cout << "Please choose your Base Currency (0 - USD; 1 - EUR; 2 - GBP; 3 - CAD; 4 - AUD; 5 - JPY; 6 - RMB; 7 - EXIT the Exchange): ";
        cin >> static_cast<int>(baseCurrency);

        switch (baseCurrency)
        {
        case EXIT:
            cout << "Thank you for your visit at the Exchange!" << endl;
            return 0;
        
        default:
            usd_rate(ex_rate, &rate_1, baseCurrency);
            break;
        }

        cout << "Which currency would you like to exchange to? (0 - USD; 1 - EUR; 2 - GBP; 3 - CAD; 4 - AUD; 5 - JPY; 6 - RMB; 7 - EXIT the Exchange): ";
        cin >> static_cast<int>(foreignCurrency);

        switch (foreignCurrency)
        {
        case EXIT:
            cout << "Thank you for your visit at the Exchange!" << endl;
            return 0;

        default:
            usd_rate(ex_rate, &rate_2, foreignCurrency);
            break;
        }

        while (1)
        {
            cout << "Enter amount: ";
            cin >> static_cast<double>(amount);

            if (amount <= 0)
            {
                cout << "Amount must be positive. Please Try Again." << endl;
                continue;
            }
            else
            {
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
        cout << "Base Currency - " << amount << " " << currencies[baseCurrency] << endl;
        cout << "Exchange Currency - " << amount * rate_2 / rate_1 << " " << currencies[foreignCurrency] << endl;
        cout << "Exchange Rate: 1 " << currencies[baseCurrency] << " = " << rate_2 / rate_1 << " " << currencies[foreignCurrency] << endl;
        cout << "================================================" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "" << endl;
    }

    return 0;
}
