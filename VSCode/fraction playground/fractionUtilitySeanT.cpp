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
bool isPalindromeST(const FractionSeanT* frRef) {
    /*
    bool numCheck = checkPalindrome(frRef.getNum());
    bool denomCheck = checkPalindrome(frRef.getDenom());

    //return (frRef.isNumPalindrome() || frRef.isDenomPalindrome());

    return (numCheck || denomCheck);
    */

   return ((*frRef).isNumPalindrome() && (*frRef).isDenomPalindrome());
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

void displayCommonPalindromeDigitST(const FractionSeanT* frRef) {
    int countCommon = 0;
    int largestCommon = 0;

    int tmpNumeratorST = (*frRef).getNum() < 0 ? -(*frRef).getNum() : (*frRef).getNum();
    int tmpDenomST = (*frRef).getDenom() < 0 ? -(*frRef).getDenom() : (*frRef).getDenom();

    int aryNumOccST[10]{0};

    int aryCommonDigits[10]{0};

    while (tmpNumeratorST) {
        aryNumOccST[tmpNumeratorST % 10]++;
        tmpNumeratorST /= 10;
    }

    while (tmpDenomST) {
        if (aryNumOccST[tmpDenomST % 10] > 0 && aryCommonDigits[tmpDenomST % 10] == 0) {
            countCommon++;
            aryCommonDigits[tmpDenomST % 10]++;

            if (tmpDenomST % 10 > largestCommon) {
                largestCommon = tmpDenomST % 10;
            }
        }

        tmpDenomST /= 10;
    }
    
    cout << "\n  There is/are " << countCommon << " common digit(s) of" << endl;

    for (int i = 0; i < 10; i++) {
        if (aryCommonDigits[i] > 0) {
            cout << "    " << i << endl;
        }
    }

    cout << "\nThe largest common Palindrome digit: " << largestCommon << endl;
}