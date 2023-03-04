//
// Created by Kiwan Hyun on 2023/02/24.
//
#include <string>
using namespace std;

#ifndef HYUN_KIWAN_ASSIGNMENT4_EQUITY_H
#define HYUN_KIWAN_ASSIGNMENT4_EQUITY_H
class Equity{
public:
    Equity() = default; // default constructor
    Equity(double S_0, double mu, double v); // constructor without ticker
    Equity(string Ticker, double S_0, double mu, double v); // constructor with ticker
    ~Equity() = default; // destructor

    string GetTicker(); // getting ticker of equity
    double GetInitialPrice(); // getting S_0 of the equity
    double GetMu(); // getting mean return of the equity
    double GetVol(); // getting volatility of the equity

private:
    string Ticker_;
    double S_0_;
    double mu_;
    double v_;
};
#endif //HYUN_KIWAN_ASSIGNMENT4_EQUITY_H
