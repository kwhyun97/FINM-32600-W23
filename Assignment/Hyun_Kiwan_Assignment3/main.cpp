/*
 * This assignment had the following changes from Assignment 3:
 *
 * Change #2: Use of Class CurrencyFactory that creates currency types at construction
 * and able to refer Class Currency Objects
 *
 * Change #3: Store the Currency objects in an array (from the CurrencyFactory Object) and reuse them
 *
 * Change #4: Use of free store objects
 *
 * Change #5: Delete the currency objects in the destructor to avoid memory leak
 *
 * Change #6: Using a Map
 *
 * Change #7: Using exceptions
 *
 * Change #11: Using default implementations for Currency class's copy constructor, assignment operator, and destructor
 */

#include <iostream>
#include "CurrencyFactory.h"

using namespace std;

int main() {
    CurrencyFactory factory;
    // Introduction to the exchange
    cout << "Valued Customer, Welcome to the Exchange!" << endl;
    while(1)
    {
        cout << "Please choose your Base Currency " << endl;
        cout << "Options: " << endl;
        cout << "USD" << endl;
        cout << "EUR" << endl;
        cout << "GBP" << endl;
        cout << "CAD" << endl;
        cout << "AUD" << endl;
        cout << "JPY" << endl;
        cout << "RMB" << endl;
        cout << "EXIT - EXIT the Exchange" << endl;
        cout << "Please enter your option:";
        string baseCurrencyType;
        cin >> baseCurrencyType;

        Currency* baseCurrency;

        if(baseCurrencyType == "EXIT")
        {
            cout << "Thank you for your visit at the Exchange!" << endl;
            return 0;
        }

        try{
            baseCurrency = factory.GetCurrency(baseCurrencyType);
        }
        catch(std::runtime_error& e){
            cout << e.what() << endl;
            cout << "Please Try again" << endl;
            continue;
        }

        cout << "Please choose your Foreign Currency " << endl;
        cout << "Options: " << endl;
        cout << "USD" << endl;
        cout << "EUR" << endl;
        cout << "GBP" << endl;
        cout << "CAD" << endl;
        cout << "AUD" << endl;
        cout << "JPY" << endl;
        cout << "RMB" << endl;
        cout << "EXIT - EXIT the Exchange" << endl;
        cout << "Please enter your option:";
        string foreignCurrencyType;
        cin >> foreignCurrencyType;

        Currency* foreignCurrency;

        if(foreignCurrencyType == "EXIT")
        {
            cout << "Thank you for your visit at the Exchange!" << endl;
            return 0;
        }

        try{
            foreignCurrency = factory.GetCurrency(foreignCurrencyType);
        }
        catch(std::runtime_error& e){
            cout << e.what() << endl;
            cout << "Please Try again" << endl;
            continue;
        }

        double base_amount;

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
                break;
            }
        }

        double spotExchangeRate;

        spotExchangeRate = baseCurrency->ConvertToUSD(1);
        spotExchangeRate = foreignCurrency->ConvertFromUSD(spotExchangeRate);

        double exchanged;
        exchanged = baseCurrency->ConvertToUSD(base_amount);
        exchanged = foreignCurrency->ConvertFromUSD(exchanged);

        cout << "" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Success! Your Exchange Order has been forwarded." << endl;
        cout << "" << endl;
        cout << "================================================" << endl;
        cout << "Transaction Receipt: " << endl;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "Base Currency - " << baseCurrencyType << endl;
        cout << "Exchange Currency - " << foreignCurrencyType << endl;
        cout << "Exchange Rate: 1 " << baseCurrency->GetSymbol() << " = ";
        cout << spotExchangeRate << " " << foreignCurrency->GetSymbol() << endl;
        cout << "Exchange Amount: " << base_amount << " " << baseCurrency->GetSymbol();
        cout << " --> " << exchanged << " " << foreignCurrency->GetSymbol() << endl;
        cout << "================================================" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "" << endl;

        cout << "Would you like to do another transcation?" << endl;
        cout << "EXIT - 1" << endl;
        cout << "CONTINUE - 2" << endl;
        cout << "Please enter your option: ";
        int continue_exit;
        cin >> continue_exit;
        switch(continue_exit)
        {
            case(1):
                cout << "Thank you for your visit at the Exchange!" << endl;
                return 0;
            case(2):
                continue;
        }
    }
}
