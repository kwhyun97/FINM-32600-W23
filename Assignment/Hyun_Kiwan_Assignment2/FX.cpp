//
// Created by Kiwan Hyun on 2023/01/27.
//

#include "FX.h"

double FX(Currency base, Currency foreign, double amount)
{
    return foreign.ConvertFromUSD(base.ConvertToUSD(amount));
}