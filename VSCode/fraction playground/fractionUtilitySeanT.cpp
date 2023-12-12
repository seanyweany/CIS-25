/**
* Program Name: fractionUtilitySeanT.cpp
* Discussion: File #4 -
*               Implementation File
*                 Fraction Utility
* Written By: Sean Talley
* Date: 2023/11/19
*/

// Include/Header File(s)
#include <iostream>
#include "fractionSeanT.h"
#include "fractionUtilitySeanT.h"

using namespace std;

// Function Definitions Here
bool isPalindromeST(const FractionSeanT& frRef) {
    bool numCheck = checkPalindrome(frRef.getNum());
    bool denomCheck = checkPalindrome(frRef.getDenom());

    //return (frRef.isNumPalindrome() || frRef.isDenomPalindrome());

    return (numCheck || denomCheck);
}

bool checkPalindrome(int n) {
    int reverse = 0;
    int temp = n;

    while (temp) {
        reverse = (reverse * 10) + (temp % 10);
        temp /= 10;
    }

    return (reverse == n);
}

void displayCommonPalindromeDigit(int arg) {
    int digit;
    int digitCount{ 0 };

    digit = arg % 10;

    /* ... */
}