//
// Created by Kiwan Hyun on 2023/02/24.
//
#include "Option.h"

#ifndef HYUN_KIWAN_ASSIGNMENT4_EUROPEANCALL_H
#define HYUN_KIWAN_ASSIGNMENT4_EUROPEANCALL_H
class EuropeanCall : public Option{
public:
    EuropeanCall(const Equity* E, const Equity* Risk_Free, double K, double T);

    double Price() const override;
    double GetPayoff(double ST) const override;
    double Delta();
    double Gamma();
};
#endif //HYUN_KIWAN_ASSIGNMENT4_EUROPEANCALL_H
