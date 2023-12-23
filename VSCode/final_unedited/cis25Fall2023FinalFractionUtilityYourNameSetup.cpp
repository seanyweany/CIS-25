/**
 * Program Name: cis25Fall2023FinalFractionUtilityYourNameSetup.cpp
 * Discussion:   Implementation File - Fraction Utility
 * Written By:   Someone
 * Date:         2023/12/13
 */

// Include and Header Files
#include <iostream>
#include "cis25Fall2023FinalFractionYourNameSetup.h"
#include "cis25Fall2023FinalFractionUtilityYourNameSetup.h"
using namespace std;

// Function Definitions

bool isPalindromeFL(const Fraction* frPtr) {

    cout << "\n  Update this isPalindromeFL()!" << endl;

    return false;
}

void displayCommonPalindromeDigitFL(const Fraction* frPtr) {

    cout << "\n  Update this displayCommonPalindromeDigitFL()!"
        << endl;
}

void createFractionFL(Fraction*& frPtrRef) {
    int nFL;
    int dFL;

    cout << "\n    Enter num: ";
    cin >> nFL;

    cout << "\n    Enter denom: ";
    cin >> dFL;

    frPtrRef = new Fraction{ nFL, dFL };

    cout << "\n    One Fraction of"
        "\n      Address : " << frPtrRef
        << "\n        num : " << frPtrRef->getNum()
        << "\n        denom : " << frPtrRef->getDenom()
        << "\n    has just been created/built!" << endl;
}

void updateFractionFL(Fraction*& frPtrRef) {
    int nFL;
    int dFL;

    cout << "\n    Enter num: ";
    cin >> nFL;

    cout << "\n    Enter denom: ";
    cin >> dFL;

    frPtrRef->update(nFL, dFL);

    cout << "\n    The Fraction object at" << frPtrRef
        << " has been updated as "
        << "\n      num : " << frPtrRef->getNum()
        << "\n      denom : " << frPtrRef->getDenom() << endl;
}