//
// Created by Kiwan Hyun on 2023/02/03.
//

#include "IsPrime.h"

bool IsPrime(int n)
{
    int i = 2;
    int temp;

    while(i < n - 1)
    {
        temp = n / i;

        if(n == temp*i)
        {
            return false;
        }
        else
        {
            i++;
        }
    }

    return true;
}
