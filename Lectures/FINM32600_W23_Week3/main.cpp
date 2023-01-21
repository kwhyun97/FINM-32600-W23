#include <iostream>
#include "Currency.h"

using namespace std;

int main() {
    Currency usd("USD", "United States of America", 1);
    Currency eur("EUR", "European Union", 0.92);
    Currency gbp("GBP", "United Kingdom", 0.82);
    Currency cad("CAD", "Canada", 1.34);
    Currency aud("AUD", "Australia", 1.43);
    Currency jpy("JPY", "Japan", 127.9);
    Currency rmb("RMB", "China", 6.7);
    return 0;
}
