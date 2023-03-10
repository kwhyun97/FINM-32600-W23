//
// Created by Kiwan Hyun on 2023/03/03.
//
#include <cmath>
#include <cstdlib>
#include "MCPricer.h"

using namespace std;

double MCPricer::BoxMuller()
{
    double x = static_cast<double>(rand()) / RAND_MAX;

    while(x==0)
    {
        x = static_cast<double>(rand()) / RAND_MAX;
    }

    double y = static_cast<double>(rand()) / RAND_MAX;

    double z = sqrt(-2.0 * log(x)) * cos(2 * PI_ * y);
    return z;
}

double MCPricer::Price(const Option& option, const Equity& underlying, const Equity& RFR, unsigned long paths)
{
    double T = option.GetTTM();
    double S0 = underlying.GetInitialPrice();
    double sigma = underlying.GetVol();
    double r = RFR.GetMu();
    double payoff = 0.0;

    srand(static_cast<unsigned int> (time(0)));

    for(unsigned int i = 0; i < paths; ++i)
    {
        double z_i = BoxMuller();
        double ST_i = S0*exp((r - sigma*sigma/2.0) * T + sigma * z_i * sqrt(T));
        payoff = payoff + option.GetPayoff(ST_i);
    }

    double price = exp(-r*T) * payoff / paths;

    return price;
}