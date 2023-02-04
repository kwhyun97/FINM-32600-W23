//
// Created by Kiwan Hyun on 2023/02/03.
//
#include "IsPrime.h"
#include "FindNearestPrime.h"

int FindNearestPrime(int n)
{
    bool flag = IsPrime(n);

    while(!flag)
    {
        n--;
        flag = IsPrime(n);
    }

    return n;
}
