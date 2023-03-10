//
// Created by Kiwan Hyun on 2023/02/24.
//
#include <cmath>
#include <numbers>
#include "EuropeanPut.h"
#include "Normal_Distribution.h"
using namespace std;

EuropeanPut::EuropeanPut(const Equity* E, const Equity* Risk_Free, double K, double T)
    : Option(E, Risk_Free, K, T, "European Put")
{}

double EuropeanPut::Price() const
{
    double S_0 = GetUnderlying()->GetInitialPrice();
    double K = GetStrike();
    double r = GetRFR()->GetMu();
    double T = GetTTM();

    return ((K * exp(0 - r * T)) * cdf(-d2()) - (S_0 * cdf(-d1())));
}

double EuropeanPut::GetPayoff(double ST) const
{
    double K = GetStrike();

    if(ST < K)
    {
        return K - ST;
    }
    else
    {
        return 0.0;
    }
}

double EuropeanPut::Delta()
{
    return (cdf(d1()) - 1);
}

double EuropeanPut::Gamma()
{
    double S_0 = GetUnderlying()->GetInitialPrice();
    double v = GetUnderlying()->GetVol();
    double T = GetTTM();

    return (pdf(d1())/(S_0 * v * sqrt(T)));
}