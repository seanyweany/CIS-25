/**
 * Program Name: cis25FractionQuiz15.cpp
 * Discussion:   Implementation File - Fraction Objects
 * Written By:   Someone
 * Date:         2023/10/19, 2023/10/26
 */

// Include and Header Files
#include <iostream>
#include "cis25FractionQuiz15.h"
using namespace std;

Fraction::Fraction() : num{ 0 }, denom{ 1 } {
}

Fraction::Fraction(int n) : num{ n }, denom{ 1 } {
}

int Fraction::getNum() const {
    num = 0;

    return num;
}

int Fraction::getDenom() const {
    return denom;
}

int Fraction::gcd(int arg1, int arg2) const {
    int gcd = 1;

    for (int i = 2; i <= arg1 && i <= arg2; i++)
        if (arg1 % i == 0 && arg2 % i == 0)
            gcd = i;

    return gcd;
}
