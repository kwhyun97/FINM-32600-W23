//
// Created by Kiwan Hyun on 2023/02/03.
//

#include "PrintFooBar.h"
#include <iostream>
#include <string>
#include "FooBar.h"

using namespace std;

void PrintFooBar(int n)
{
    cout << "Hyun_Kiwan_FINM32600_Midterm_Q2 (b) related ";
    cout << "[FooBar Print for n = " << n << "]:" << endl;

    int i = 1;
    string foobar;

    while(i < n + 1)
    {
        foobar = FooBar(i);

        cout << i << " " << foobar << endl;

        i++;
    }
}