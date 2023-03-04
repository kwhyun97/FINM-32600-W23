//
// Created by Kiwan Hyun on 2023/02/24.
//
#include "Equity.h"
#include <string>
using namespace std;

#ifndef HYUN_KIWAN_ASSIGNMENT4_OPTION_H
#define HYUN_KIWAN_ASSIGNMENT4_OPTION_H
class Option{
public:
    Option() = default; // default constructor
    Option(Equity* E, Equity* Risk_Free, double K, double T, string Type); //Option Class Constructor
    ~Option() = default; // default destructor

    virtual double Price() const = 0; //Virtual Option Pricer Function
    virtual double GetPayoff(double ST) const = 0; // Calculating the payoff given expiration price

    Equity* GetUnderlying() const; // Getting the underlying asset of the Option
    Equity* GetRFR() const; // Getting the risk-free equity object
    double GetStrike() const; // Getting Strike Price of the Option
    double GetTTM() const; // Getting Time to maturity of the Option
    string GetType() const; // Getting Type of the Option

protected:
    double d1() const; //d1 in the Black-Scholes Option Pricing Formula
    double d2() const; //d2 in the Black-Scholes Option Pricing Formula

private:
    Equity* E_; // underlying asset of the option
    Equity* Risk_Free_; // Risk free rate
    double K_; // Strike Price of the option (K)
    double T_; // Maturity of the option (T)
    string Type_; // Type of option
};

#endif //HYUN_KIWAN_ASSIGNMENT4_OPTION_H
