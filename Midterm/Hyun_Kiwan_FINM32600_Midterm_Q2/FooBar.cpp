//
// Created by Kiwan Hyun on 2023/02/03.
//

#include "FooBar.h"
#include <string>
using namespace std;

string FooBar(int n)
{
    int mod_15 = n % 15;
    int mod_3 = mod_15 % 5;
    int mod_5 = mod_15 % 3;

    if(mod_15 == 0)
    {
        return "FooBar";
    }
    else if(mod_3 == 0)
    {
        return "Foo";
    }
    else if(mod_5 == 0)
    {
        return "Bar";
    }
    else
    {
        return "";
    }
}