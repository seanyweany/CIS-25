/**
 * Program Name: cis25Fraction1205.cpp
 * Discussion:   Implementation File - Fraction Objects
 * Written By:   Someone
 * Date:         2023/12/05
 */

// Include and Header Files
#include <iostream>
#include "cis25Fraction1205.h"
using namespace std;

Fraction::Fraction() : num{ 0 }, denom{ 1 } {}

Fraction::Fraction(int n, int d) : num{n / gcdA(n, d)},
denom{d / gcdA(n, d)} {}

Fraction::Fraction(const Fraction& ref) : num{ ref.num },
denom{ ref.denom } {}

int Fraction::gcdA(int arg1, int arg2) const {
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

void Fraction::setNum(int n) {
    num = n / gcdA(n, denom);
    denom = denom / gcdA(n, denom);
}

void Fraction::setDenom(int d) {
    num = num / gcdA(num, d);
    denom = d / gcdA(num, d);
}

int Fraction::getNum() const {
    //num = 100;

    return num;
}

int Fraction::getDenom() const {
    return denom;
}

Fraction Fraction::add(const Fraction& frRef) const {
    int n;
    int d;

    n = num * frRef.denom + denom * frRef.num;
    d = denom * frRef.denom;

    return Fraction{ n, d };
}

void Fraction::print() const {
    cout << "\n  num: " << num
        << "\n  denom: " << denom << endl;
}

bool Fraction::isNumPalindrome() const {
    int reverse{ 0 };
    int temp{ num };

    while (temp) {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }
    return (reverse == num);
}

ostream& operator<<(ostream& out, const Fraction& ref) {
    //out << "\n  num: " << ref.getNum()
    //    << "\n  denom: " << ref.getDenom() << endl;

    out << "\n  num: " << ref.num
        << "\n  denom: " << ref.denom << endl;

    return out;
}