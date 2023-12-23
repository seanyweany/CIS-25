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
		    "Required Submission Date: 2023/12/13\n"
		    "Actual Submission Date:   2023/12/13\n"
         << endl;
}

void runMenuHw4ST() {
    int optionST;
    
    FractionSeanT* currentFraction{ nullptr };
    
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
                cout << "\nINITIALIZING Option -"
                        "\n\nCalling initSubMenuST() -\n"
                     << endl;

                initSubMenuST(currentFraction);

                break;
            case 2:
                cout << "\nUsing isPalindromeST() Option - \n" << endl;

                if (currentFraction == nullptr) {
                    cout << "  Not a proper option as there is no Fraction!" << endl;
                } else {
                    if (isPalindromeST(currentFraction)) {
                        cout << "  The current Fraction is a Palindrome!" << endl;
                    } else {
                        cout << "  The current Fraction is not a Palindrome!" << endl;
                    }
                }

                cout << endl;

                break;
            case 3:
                cout << "\nCalling displayCommonPalindromeDigitST() Option -" << endl;

                if (currentFraction == nullptr) {
                    cout << "\nNot a proper option as there is no Fraction!" << endl;
                } else {
                    if (isPalindromeST(currentFraction)) {
                        displayCommonPalindromeDigitST(currentFraction);
                    } else {
                        cout << "\n  The current Fraction is not a Palindrome!" << endl;
                    }
                }

                cout << endl;

                break;    
            case 4:
                cout << "\nPRINTING Option -" << endl;

                if (currentFraction == nullptr) {
                    cout << "Not a proper option as there is no Fraction!" << endl;
                } else {
                    cout << "\n  Address : " << currentFraction
                         << "\n    num : " << (*currentFraction).getNum()
                         << "\n    denom : " << (*currentFraction).getDenom()
                         << "\n"
                         << endl;
                }    

                break;
            case 5:
                if (currentFraction == nullptr) {
                    cout << "\nHaving Fun ...!\n" << endl;
                } else {
                cout << "\nThe Fraction is at"
                        "\n  Address : " << currentFraction
                     << "\n    num : " << (*currentFraction).getNum()
                     << "\n    denom : " << (*currentFraction).getDenom()
                     << "\n"
                     << endl;

                delete currentFraction;

                cout << "\nThe Fraction is now removed!"
                        "\n\nHaving Fun ...!"
                     << endl;
                }
                break;
            default:
                cout << "\nWRONG OPTION!\n" << endl;             
        }
    } while (optionST != 5);
}

void initSubMenuST(FractionSeanT*& fr) {
    int optionSubST;

    do {
        cout << "  ******************************\n"
                "  * initSubMenu - One Fraction *\n"
                "  *  1. Creating               *\n"
                "  *  2. Updating               *\n"
                "  *  3. Returning              *\n"
                "  ******************************\n"
                "  Select an option (integer only): ";

        cin >> optionSubST;    

        cout << endl; 

        switch (optionSubST) {
            case 1:
                if (fr == nullptr) {
                    cout << "  Creating 1 NEW Fraction object --"
                            "\n\n  Calling createFractionST()!\n"
                         << endl;
    
                    createFractionST(fr);
                } else {
                    cout << "  Please update or return!\n" << endl;
                }
    
                break;
            case 2:
                if (fr == nullptr) {
                    cout << "  Not a proper option as there is no Fraction!\n" << endl;
                } else {
                    cout << "  Updating an EXISTING Fraction object -"
                            "\n\n  Calling updateFractionST()!\n"
                         << endl;

                    updateFractionST(fr);
                }
        
                break;
            case 3:
                cout << "  Returning to previous menu!\n" << endl;
    
                return;
            default:
                cout << "  WRONG OPTION!\n" << endl;            
        }
    } while (optionSubST != 3);

    cout << endl;
}

void createFractionST(FractionSeanT*& fr) {
    int inputNum;
    int inputDenom;
    
    cout << "    Enter num: ";
    cin >> inputNum;

    cout << "    Enter denom: ";
    cin >> inputDenom;

    fr = new FractionSeanT{inputNum, inputDenom};

    cout << "\n    One Fraction of"
            "\n      Address : " << fr
         << "\n        num : " << (*fr).getNum()
         << "\n        denom : " << (*fr).getDenom()
         << "\n    has just been created/built!\n"
         << endl;
}

void updateFractionST(FractionSeanT*& fr) {
    cout << "    Enter num: ";

    int inputNum;
    cin >> inputNum;

    cout << "    Enter denom: ";

    int inputDenom;
    cin >> inputDenom;

    (*fr).setNum(inputNum);
    (*fr).setDenom(inputDenom);

    cout << "\n    The Fraction object at " << fr << " has been updated as"
            "\n        num : " << (*fr).getNum()
         << "\n        denom : " << (*fr).getDenom()
         << "\n"
         << endl;
}