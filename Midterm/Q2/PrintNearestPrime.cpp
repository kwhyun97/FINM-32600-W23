//
// Created by Kiwan Hyun on 2023/02/03.
//
#include <iostream>
#include "PrintNearestPrime.h"

using namespace std;

void PrintNearestPrime(int n)
{
    cout << "Q2 (a) related ";
    cout << "[1 to " << n << "'s nearest prime]:" << endl;

    int p = FindNearestPrime(n);
    int i = 0;

    while(i < p)
    {
        cout << i + 1 << endl;

        i++;
    }
}