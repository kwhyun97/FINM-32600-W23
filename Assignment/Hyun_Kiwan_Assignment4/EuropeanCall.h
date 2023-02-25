//
// Created by Kiwan Hyun on 2023/02/24.
//
#include "Option.h"

#ifndef HYUN_KIWAN_ASSIGNMENT4_EUROPEANCALL_H
#define HYUN_KIWAN_ASSIGNMENT4_EUROPEANCALL_H
class EuropeanCall : public Option{
public:
    EuropeanCall(Equity* E, Equity* Risk_Free, double K, double T);

    double Price() override;
    double Delta();
    double Gamma();
};
#endif //HYUN_KIWAN_ASSIGNMENT4_EUROPEANCALL_H
