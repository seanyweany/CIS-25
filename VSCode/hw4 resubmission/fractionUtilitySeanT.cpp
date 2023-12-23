/**
 * Program Name: fractionUtilitySeanT.cpp
 * Discussion: File #4 -
 *               Implementation File
 *                 Fraction Utility
 * Written By: Sean Talley
 * Date: 2023/11/19 - 2023/12/13
 */

// Include/Header File(s)
#include <iostream>
#include "fractionSeanT.h"
#include "fractionUtilitySeanT.h"

using namespace std;

// Function Definitions Here
bool isPalindromeST(const FractionSeanT* frRef) {
   return ((*frRef).isNumPalindrome() && (*frRef).isDenomPalindrome());
}

void displayCommonPalindromeDigitST(const FractionSeanT* frRef) {
    int countCommonST = 0;
    int largestCommonST = 0;

    int tmpNumeratorST = (*frRef).getNum() < 0 ? -(*frRef).getNum() : (*frRef).getNum();
    int tmpDenomST = (*frRef).getDenom() < 0 ? -(*frRef).getDenom() : (*frRef).getDenom();

    int aryNumOccST[10]{0};

    int aryCommonDigitsST[10]{0};

    while (tmpNumeratorST) {
        aryNumOccST[tmpNumeratorST % 10]++;
        tmpNumeratorST /= 10;
    }

    while (tmpDenomST) {
        if (aryNumOccST[tmpDenomST % 10] > 0 && aryCommonDigitsST[tmpDenomST % 10] == 0) {
            countCommonST++;
            aryCommonDigitsST[tmpDenomST % 10]++;

            if (tmpDenomST % 10 > largestCommonST) {
                largestCommonST = tmpDenomST % 10;
            }
        }

        tmpDenomST /= 10;
    }
    
    if (largestCommonST) {
        cout << "\n  There is/are " << countCommonST << " common digit(s) of" << endl;
    
        for (int i = 0; i < 10; i++) {
            if (aryCommonDigitsST[i] > 0) {
                cout << "    " << i << endl;
            }
        }
    
        cout << "\n  The largest common Palindrome digit: " << largestCommonST << endl;
    } else {
        cout << "\n  There is/are no common digit(s)." << endl;
    }
}