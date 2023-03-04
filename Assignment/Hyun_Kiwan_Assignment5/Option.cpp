//
// Created by Kiwan Hyun on 2023/02/24.
//

#include "Option.h"
#include <string>
#include <cmath>
#include <numbers>
using namespace std;

// Constructor
Option::Option(Equity* E, Equity* Risk_Free, double K, double T, string Type)
    : E_(E),
    Risk_Free_(Risk_Free),
    K_(K),
    T_(T),
    Type_(Type)
{}

Equity* Option::GetUnderlying()
{
    return E_;
}

Equity* Option::GetRFR()
{
    return Risk_Free_;
}

double Option::GetStrike()
{
    return K_;
}

double Option::GetTTM()
{
    return T_;
}

string Option::GetType()
{
    return Type_;
}

double Option::d1()
{
    double S_0 = E_->GetInitialPrice();
    double r = Risk_Free_->GetMu();
    double v = E_->GetVol();
    return (log(S_0 * exp(r * T_) / K_)/(v * sqrt(T_)) + ((v * sqrt(T_)) / 2));
}

double Option::d2()
{
    double S_0 = E_->GetInitialPrice();
    double r = Risk_Free_->GetMu();
    double v = E_->GetVol();
    return (log(S_0 * exp(r * T_) / K_)/(v * sqrt(T_)) - ((v * sqrt(T_)) / 2));
}