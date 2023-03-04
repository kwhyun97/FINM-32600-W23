//
// Created by Kiwan Hyun on 2023/03/03.
//
#include <iostream>
#include "EuropeanPut.h"
#include "EuropeanCall.h"
#include "MCPricer.h"
#include "Equity.h"

using namespace std;

int main(){
    const Equity* E = new Equity(100.0, 0.01, 0.3);
    const Equity* RFR = new Equity(0.0, 0.01, 0.0);
    const EuropeanCall* c = new EuropeanCall(E, RFR, 100.0, 2.0);
    const EuropeanPut* p = new EuropeanPut(E, RFR, 100.0, 2.0);
    MCPricer pricer;
    unsigned long M[]{10000, 100000, 1000000};

    cout << "-----------------------------------------------" << endl;
    cout << c->GetType() << " and " << p->GetType() << " Option" << endl;
    cout << "Strike: " << c->GetStrike() << endl;
    cout << "Time to Maturity: " << c->GetTTM() << endl;
    cout << "===============================================" << endl;
    cout << "Underlying: " << endl;
    cout << "Initial Price (t = 0): " << E->GetInitialPrice() << endl;
    cout << "Volatility: " << E->GetVol() << endl;
    cout << "===============================================" << endl;
    cout << "Interest Rate: " << RFR->GetMu() << endl;
    cout << "===============================================" << endl;
    cout << "Monte Carlo Pricing Method:" << endl;

    for(int i = 0; i < size(M); i++)
    {
        cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
        cout << "Using " << M[i] << " Monte Carlo Paths" << endl;
        cout << c->GetType() << " Price: " << pricer.Price(*c, *E, *RFR, M[i]) << endl;
        cout << p->GetType() << " Price: " << pricer.Price(*p, *E, *RFR, M[i]) << endl;
    }

    cout << "===============================================" << endl;
    cout << "-----------------------------------------------" << endl;
    return 0;
}