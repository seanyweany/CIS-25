/**
 * Program Name: hw4UtilitySeanT.cpp
 * Discussion: File #6 -
 *               Implementation File
 *                 Utility
 * Written By: Sean Talley
 * Date: 2023/12/07 - 2023/12/07
 */

// Include/Header File(s)
#include <iostream>
#include "fractionSeanT.h"
#include "fractionUtilitySeanT.h"
#include "hw4UtilitySeanT.h"

using namespace std;

// Function Definitions Here
void displayCodingStatementST() {
    cout << "We write code to manipulate data, which are\n"
		    "provided by the user(s), to produce the\n"
		    "required outcome in the most efficient way!\n"
		 << endl;
}

void displayClassInfoHw4ST() {
    cout << "CIS 25 - C++ Programming\n"
		    "Laney College\n"
		    "Sean Talley\n"
		    "\n"
		    "Information --\n"
		    "Assignment:               HW #4\n"
		    "Implemented by:           Sean Talley\n"
		    "Required Submission Date: 2023/11/19\n"
		    "Actual Submission Date:   2023/11/19\n"
         << endl;
}

void runMenuHw4ST() {
    int optionST;
    
    FractionSeanT *currentFraction{ nullptr };
    
    do {
        cout << "**************************************************\n"
                "*                 MENU - HW #4                   *\n"
                "* 1. Setting Up Fraction through initSubMenuST() *\n"
                "* 2. Calling isPalindromeST()                    *\n"
                "* 3. Calling displayCommonPalindromeDigitST()    *\n"
                "* 4. Printing Current Fraction                   *\n"
                "* 5. Quit                                        *\n"
                "**************************************************\n"
                "Select an option (use integer value only): ";

        cin >> optionST;

        switch (optionST) {
            case 1:
                cout << "\n\nINITIALIZING Option -"
                        "\n\nCalling initSubMenuST() -\n\n"
                     << endl;

                initSubMenuST(currentFraction);

                break;
            case 2:
                cout << "Using isPalindromeST() Options - " << endl;

                if (currentFraction == nullptr) {
                    cout << "\nNot a proper option as there is no Fraction!" << endl;
                } else {
                    if (isPalindromeST()) {
                        cout << "\n  The current Fraction is a Palindrome!" << endl;
                    } else {
                        cout << "\n  The current Fraction is not a Palindrome!" << endl;
                    }
                }

                break;
            case 3:
                cout << "Calling displayCommonPalindromeDigitST() Option -" << endl;

                if (currentFraction == nullptr) {
                    cout << "\nNot a proper option as there is no Fraction!" << endl;
                } else {
                    if (isPalindromeST()) {
                        displayCommonPalindromeDigitST();
                    } else {
                        cout << "\n  The current Fraction is not a Palindrome!" << endl;
                    }
                }

                break;    
            case 4:
                cout << "PRINTING Option -" << endl;

                if (currentFraction == nullptr) {
                    cout << "\nNot a proper option as there is no Fraction!" << endl;
                } else {
                    cout << "\n  Address : " << currentFraction
                         << "\n    num : " << (*currentFraction).getNum()
                         << "\n    denom : " << (*currentFraction).getDenom()
                         << endl;
                }    
            case 5:
                cout << "\n\nThe Fraction at"
                        "\n  Address : " << currentFraction
                     << "\n    num : " << (*currentFraction).getNum()
                     << "\n    denom : " << (*currentFraction).getDenom()
                     << "\n\nis now removed!"
                        "\n\nHaving Fun ...!\n"
                     << endl;
                
                break;
            default:
                cout << "\nWRONG OPTION!\n" << endl;             
        }
    } while (optionST != 5);

    delete currentFraction;
}

void initSubMenuST(FractionSeanT*& f) {
    int optionSubST;

    cout << "******************************\n"
            "* initSubMenu – One Fraction *\n"
            "*  1. Creating               *\n"
            "*  2. Updating               *\n"
            "*  3. Returning              *\n"
            "******************************\n"
            "Select an option (use integer value only): "
         << endl;

    cin >> optionSubST;    

    cout << endl; 

    do {
        switch (optionSubST) {
            case 1:
                if (f == nullptr) {
                    cout << "\nCreating 1 NEW Fraction object --"
                            "\n\nCallling createFractionST()!\n\n"
                         << endl;
    
                    *f = createFractionST();
                } else {
                    cout << "\nPlease update or return!\n" << endl;
                }
    
                break;
            case 2:
                if (f == nullptr) {
                    cout << "\nNot a proper option as there is no Fraction!" << endl;
                } else {
                    cout << "\nUpdating an EXISTING Fraction object -"
                            "\n\nCalling updateFractionST()!\n"
                         << endl;
                }

                *f = updateFractionST(f);
        
                break;
            case 3:
                cout << "\nReturning to previous menu!" << endl;
    
                return;
            default:
                cout << "WRONG OPTION!" << endl;            
        }
    } while (optionSubST != 3);

    cout << endl;
}

FractionSeanT createFractionST() {
    cout << "  Enter num: ";

    int inputNum;
    cin >> inputNum;

    cout << "\n  Enter denom: ";

    int inputDenom;
    cin >> inputDenom;

    FractionSeanT f{inputNum, inputDenom};

    cout << "\n  One Fraction of"
            "\n    Address : " << &f
         << "\n      num : " << f.getNum()
         << "\n      denom : " << f.getDenom()
         << "\n  has just been created/built!"
         << endl;

    return f;
}

FractionSeanT& updateFractionST(FractionSeanT*& f) {
    cout << "  Enter num: ";

    int inputNum;
    cin >> inputNum;

    cout << "\n  Enter denom: ";

    int inputDenom;
    cin >> inputDenom;

    (*f).setNum(inputNum);
    (*f).setDenom(inputDenom);

    cout << "\n  The Fraction object at " << &f << " has been updated as"
            "\n      num : " << (*f).getNum()
         << "\n      denom : " << (*f).getDenom()
         << endl;

    return *f;
}