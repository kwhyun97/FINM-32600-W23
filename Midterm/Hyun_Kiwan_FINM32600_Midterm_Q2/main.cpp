#include <iostream>
#include "PrintNearestPrime.h"
#include "PrintFooBar.h"

using namespace std;

int main() {
    int n = 11;
    PrintNearestPrime(n);
    PrintFooBar(n);

    n = 23;
    PrintNearestPrime(n);
    PrintFooBar(n);

    n = 28;
    PrintNearestPrime(n);
    PrintFooBar(n);

    return 0;
}
