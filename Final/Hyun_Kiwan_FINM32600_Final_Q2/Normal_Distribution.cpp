//
// Created by Kiwan Hyun on 2023/02/24.
//
#include <cmath>
#include <numbers>
using namespace std;
#include "Normal_Distribution.h"

double cdf(double x) {
    return (0.5 * (1 + erf(x / sqrt(2))));
}

double pdf(double x){
    return (exp(-0.5*pow(x, 2)) / sqrt(2 * atan(1.0) * 4));
}