//
// Created by Kiwan Hyun on 2023/02/24.
//
#include <string>
using namespace std;

#include "Equity.h"

Equity::Equity(string Ticker, double S_0, double mu, double v)
    : Ticker_(Ticker),
    S_0_(S_0),
    mu_(mu),
    v_(v)
{}

Equity::Equity(double S_0, double mu, double v)
    : Ticker_(""),
    S_0_(S_0),
    mu_(mu),
    v_(v)
{}

string Equity::GetTicker()
{
    return Ticker_;
}

double Equity::GetInitialPrice()
{
    return S_0_;
}

double Equity::GetMu()
{
    return mu_;
}

double Equity::GetVol()
{
    return v_;
}