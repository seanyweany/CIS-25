/**
 * Program Name: fractionSeanT.cpp
 * Discussion: File #2 -
 *               Implementation File
 * Written By: Sean Talley
 * Date: 2023/11/19 - 2023/12/13
 */

// Include/Header File(s)
#include <iostream>
#include "fractionSeanT.h"

using namespace std;

// Constructors and destructor
FractionSeanT::FractionSeanT() : num{ 0 }, denom{ 1 } {}
FractionSeanT::FractionSeanT(int n) : num { n }, denom{ 1 } {}
FractionSeanT::FractionSeanT(int n, int d) : num{ n / gcdA(n, d) }, denom{ d / gcdA(n, d) } {}
FractionSeanT::FractionSeanT(const FractionSeanT& ref) : num{ ref.num }, denom{ ref.denom } {}

FractionSeanT::~FractionSeanT() {
    cout << "Calling ~FractionSeanT()" << endl;
}

// get()/set()
int FractionSeanT::getNum() const {
    return num;
}

void FractionSeanT::setNum(int n) {
    num = n / gcdA(n, denom);
    denom = denom / gcdA(n, denom);
}

int FractionSeanT::getDenom() const {
    return denom;
}

void FractionSeanT::setDenom(int d) {
    num = num / gcdA(num, d);
    denom = d / gcdA(num, d);
}

// Others
bool FractionSeanT::isNumPalindrome() const {
    int reverse = 0;
    int temp = num;

    while (temp) {
        reverse = (reverse * 10) + (temp % 10);
        temp /= 10;
    }

    return (reverse == num);
}

bool FractionSeanT::isDenomPalindrome() const {
    int reverse = 0;
    int temp = denom;

    while (temp) {
        reverse = (reverse * 10) + (temp % 10);
        temp /= 10;
    }

    return (reverse == denom);
}

int FractionSeanT::gcdA(int arg1, int arg2) const {
    int gcd{ 1 };
    int factor{ (arg2 < 0) ? -1 : 1 };

    if (arg1 < 0) {
        arg1 = -arg1;
    }
    if (arg2 < 0) {
        arg2 = -arg2;
    }

    for (int i = 2; i <= arg1 && i <= arg2; i++)
        if (arg1 % i == 0 && arg2 % i == 0)
            gcd = i;

    return factor * gcd;
}