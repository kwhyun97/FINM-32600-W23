//
// Created by Kiwan Hyun on 2023/03/03.
//
#include "Option.h"
#include "Equity.h"
#include <cmath>

#ifndef HYUN_KIWAN_ASSIGNMENT5_MCPRICER_H
#define HYUN_KIWAN_ASSIGNMENT5_MCPRICER_H
class MCPricer{
public:
    MCPricer() = default;
    ~MCPricer() = default;

    double Price(const Option& option, const Equity& underlying, const Equity& RFR, unsigned long paths);

private:
    double BoxMuller();
    double PI_ = std::atan(1.0) * 4;
};
#endif //HYUN_KIWAN_ASSIGNMENT5_MCPRICER_H
