/**
* Program Name: fractionSeanT.cpp
* Discussion: File #2 -
*               Implementation File
* Written By: Sean Talley
* Date: 2023/11/19
*/

// Include/Header File(s)
#include <iostream>
#include "fractionSeanT.h"

using namespace std;

/* Function Definitions */

// Constructors
FractionSeanT::FractionSeanT() : num{ 0 }, denom{ 1 } {
    cout << "Calling FractionSeanT()" << endl;
}

FractionSeanT::FractionSeanT(int n) : num { n }, denom{ 1 } {
    cout << "Calling FractionSeanT(int n)" << endl;
}

FractionSeanT::FractionSeanT(int n, int d) : num{ n / gcdA(n, d) }, denom{ d / gcdA(n, d) } {
    //cout << "Calling FractionSeanT(int n, int d)" << endl;
}

FractionSeanT::FractionSeanT(const FractionSeanT& ref) : num{ ref.num }, denom{ ref.denom } {
    cout << "Calling FractionSeanT(const FractionSeanT&)" << endl;
}

// Destructor
FractionSeanT::~FractionSeanT() {
    cout << "Calling ~FractionSeanT()" << endl;
}

// Getters/Setters
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

// Boolean functions
bool FractionSeanT::isNumPalindrome() const {
    /*
    int tmpST = num < 0 ? -num : num;
    int digit;
    int rev = 0;
    
    // Taken from www.programiz.com [https://www.programiz.com/cpp-programming/examples/palindrome-number]
    do
    {
        digit = tmpST % 10;
        rev = (rev * 10) + digit;
        tmpST = tmpST / 10;
    } while (tmpST != 0);
    
    if (num == rev) {
        return true;
    } else {
        return false;
    }
    */

    int reverse = 0;
    int temp = num;

    while (temp) {
        reverse = (reverse * 10) + (temp % 10);
        temp /= 10;
    }

    return (reverse == num);
}

bool FractionSeanT::isDenomPalindrome() const {
    /*
    int tmpST = denom < 0 ? -denom : denom;
    int digit;
    int rev = 0;
    
    // Taken from www.programiz.com [https://www.programiz.com/cpp-programming/examples/palindrome-number]
    do
    {
        digit = tmpST % 10;
        rev = (rev * 10) + digit;
        tmpST = tmpST / 10;
    } while (tmpST != 0);
    
    if (denom == rev) {
        return true;
    } else {
        return false;
    }
    */

    int reverse = 0;
    int temp = denom;

    while (temp) {
        reverse = (reverse * 10) + (temp % 10);
        temp /= 10;
    }

    return (reverse == denom);
}

/*
FractionSeanT FractionSeanT::add(FractionSeanT fr1, FractionSeanT fr2) {
    int n;
    int d;

    n = fr1.getNum() * fr2.getDenom() + fr1.getDenom() * fr2.getNum();
    d = fr1.getDenom() * fr2.getDenom();
}
*/

/*
FractionSeanT FractionSeanT::add(FractionSeanT& frRef) const {
    int n;
    int d;

    n = num * frRef.denom + denom * frRef.num;
    d = denom * frRef.denom;

    return FractionSeanT{ n, d };
}
*/

// Helper
/*
int FractionSeanT::gcdBF(int arg1, int arg2) {
    int gcd = 1;

    arg1 = (arg1 < 0) ? -arg1 : arg1;
    arg2 = (arg2 < 0) ? -arg2 : arg2;

    for (int i = 2; i <= arg1 && i <= arg2; i++)
        if (arg1 % i == 0 && arg2 % i == 0)
            gcd = i;

    return gcd;
}
*/

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