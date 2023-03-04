//
// Created by Kiwan Hyun on 2023/02/24.
//
#include "Option.h"

#ifndef HYUN_KIWAN_ASSIGNMENT4_EUROPEANPUT_H
#define HYUN_KIWAN_ASSIGNMENT4_EUROPEANPUT_H
class EuropeanPut : public Option{
public:
    EuropeanPut(Equity* E, Equity* Risk_Free, double K, double T);

    double Price() const override;
    double GetPayoff(double ST) const override;
    double Delta();
    double Gamma();
};
#endif //HYUN_KIWAN_ASSIGNMENT4_EUROPEANPUT_H
