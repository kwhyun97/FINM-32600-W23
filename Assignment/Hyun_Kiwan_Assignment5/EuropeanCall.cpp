//
// Created by Kiwan Hyun on 2023/02/24.
//
#include <cmath>
#include <numbers>
#include "EuropeanCall.h"
#include "Normal_Distribution.h"
using namespace std;

EuropeanCall::EuropeanCall(Equity* E, Equity* Risk_Free, double K, double T)
    : Option(E, Risk_Free, K, T, "European Call")
{}

double EuropeanCall::Price()
{
    double S_0 = GetUnderlying()->GetInitialPrice();
    double K = GetStrike();
    double r = GetRFR()->GetMu();
    double T = GetTTM();

    return ((S_0 * cdf(d1())) - (K * exp(0 - r * T)) * cdf(d2()));
}

double EuropeanCall::Delta()
{
    return (cdf(d1()));
}

double EuropeanCall::Gamma()
{
    double S_0 = GetUnderlying()->GetInitialPrice();
    double v = GetUnderlying()->GetVol();
    double T = GetTTM();

    return (pdf(d1())/(S_0 * v * sqrt(T)));
}