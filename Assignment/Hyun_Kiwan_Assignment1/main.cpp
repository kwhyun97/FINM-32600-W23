#include <iostream>

using namespace std;

int main() {
    cout << "Enter amount in USD: " ;
    double amount;
    cin >> amount;

    double rate = 1.0;

    enum CurrencyType {USD = 0, EUR, GBP, CAD, AUD};
    int foreignCurrency;
    cout << "Please Choose the desired Foreign Currency (USD = 0; EUR = 1; GBP = 2; CAD = 3; AUD = 4): ";
    cin >> foreignCurrency;

    switch(foreignCurrency)
    {
        case EUR:
            rate = 0.88;
            break;

        case GBP:
            rate = 0.73;
            break;

        case CAD:
            rate = 1.25;
            break;

        case AUD:
            rate = 1.39;
            break;

        default:
            break;
    }

    cout << amount * rate << endl;
    return 0;
}
