#include <iostream>
#include "EuropeanCall.h"
#include "EuropeanPut.h"

using namespace std;

int main() {
    Equity* E_1 = new Equity(100, 0.0, 0.3);
    Equity* RFR_1 = new Equity(0.0, 0.05, 0.0);
    Equity* E_2 = new Equity(120, 0.0, 0.4);
    Equity* RFR_2 = new Equity(0.0, 0.1, 0.0);

    EuropeanCall C_1 = EuropeanCall(E_1, RFR_1, 100, 1);
    EuropeanPut P_2 = EuropeanPut(E_2, RFR_2, 120, 2);

    cout << "-----------------------------------------------" << endl;
    cout << C_1.GetType() << " Option" << endl;
    cout << "Strike: " << C_1.GetStrike() << endl;
    cout << "Time to Maturity: " << C_1.GetTTM() << endl;
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "Underlying: " << endl;
    cout << "Initial Price (t = 0): " << E_1->GetInitialPrice() << endl;
    cout << "Volatility: " << E_1->GetVol() << endl;
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "Interest Rate: " << RFR_1->GetMu() << endl;
    cout << "===============================================" << endl;
    cout << "Black-Scholes Model:" << endl;
    cout << "Price: " << C_1.Price() << endl;
    cout << "Delta: " << C_1.Delta() << endl;
    cout << "Gamma: " << C_1.Gamma() << endl;
    cout << "===============================================" << endl;
    cout << "-----------------------------------------------" << endl;

    cout << "-----------------------------------------------" << endl;
    cout << P_2.GetType() << " Option" << endl;
    cout << "Strike: " << P_2.GetStrike() << endl;
    cout << "Time to Maturity: " << P_2.GetTTM() << endl;
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "Underlying: " << endl;
    cout << "Initial Price (t = 0): " << E_2->GetInitialPrice() << endl;
    cout << "Volatility: " << E_2->GetVol() << endl;
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "Interest Rate: " << RFR_2->GetMu() << endl;
    cout << "===============================================" << endl;
    cout << "Black-Scholes Model:" << endl;
    cout << "Price: " << P_2.Price() << endl;
    cout << "Delta: " << P_2.Delta() << endl;
    cout << "Gamma: " << P_2.Gamma() << endl;
    cout << "===============================================" << endl;
    cout << "-----------------------------------------------" << endl;
}
