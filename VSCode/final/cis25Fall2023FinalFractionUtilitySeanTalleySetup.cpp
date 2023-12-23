/**
 * Program Name: cis25Fall2023FinalFractionUtilitySeanTalleySetup.cpp
 * Discussion:   Implementation File - Fraction Utility
 * Written By:   Sean Talley
 * Date:         2023/12/13 - 2023/12/14
 */

// Include and Header Files
#include <iostream>
#include "cis25Fall2023FinalFractionSeanTalleySetup.h"
#include "cis25Fall2023FinalFractionUtilitySeanTalleySetup.h"
using namespace std;

// Function Definitions

bool isPalindromeST(const Fraction* frPtr) {
    return ((*frPtr).isNumPalindrome() && (*frPtr).isDenomPalindrome());
}

void displayCommonPalindromeDigitST(const Fraction* frPtr) {

    int countCommonST = 0;
    int largestCommonST = 0;

    int tmpNumeratorST = (*frPtr).getNum() < 0 ? -(*frPtr).getNum() : (*frPtr).getNum();
    int tmpDenomST = (*frPtr).getDenom() < 0 ? -(*frPtr).getDenom() : (*frPtr).getDenom();

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

void createFractionST(Fraction*& frPtrRef) {
    int nST;
    int dST;

    cout << "\n    Enter num: ";
    cin >> nST;

    cout << "\n    Enter denom: ";
    cin >> dST;

    frPtrRef = new Fraction{ nST, dST };

    cout << "\n    One Fraction of"
        "\n      Address : " << frPtrRef
        << "\n        num : " << frPtrRef->getNum()
        << "\n        denom : " << frPtrRef->getDenom()
        << "\n    has just been created/built!" << endl;
}

void updateFractionST(Fraction*& frPtrRef) {
    int nST;
    int dST;

    cout << "\n    Enter num: ";
    cin >> nST;

    cout << "\n    Enter denom: ";
    cin >> dST;

    frPtrRef->update(nST, dST);

    cout << "\n    The Fraction object at" << frPtrRef
        << " has been updated as "
        << "\n      num : " << frPtrRef->getNum()
        << "\n      denom : " << frPtrRef->getDenom() << endl;
}