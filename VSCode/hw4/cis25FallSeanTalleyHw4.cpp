/**
 * Program Name: cis25FallSeanTalleyHw4
 * Discussion:   Homework #4
 * Written By:   Sean Talley
 * Date:         2023/11/19
 */

// Include/Header files
#include <iostream>

using namespace std;

// Function Definitions
void displayCodingStatementST(void);
void displayClassInfoHw4ST(void);

void runMenuHw4ST(void);
void initSubMenuST(void);
//

// Application Driver
int main() {
    displayCodingStatementST();
    displayClassInfoHw4ST();

    runMenuHw4ST();

    return 0;
}

/* Functions Initialized */
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
    
    do {
        cout << "**************************************************\n"
                "* MENU - HW #4                                   *\n"
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
                     << "\n\nCalling initSubMenuST() -\n\n"
                     << endl;

                initSubMenuST();

                break;
            case 2:


                break;    
            case 5:
                cout << "\nHave Fun!\n" << endl;
                
                break;
            default:
                cout << "\nWRONG OPTION!\n" << endl;             
        }
    } while (optionST != 5);
}

void initSubMenuST() {
    int optionSubST;
    bool fract = false;

    cout << "******************************\n"
         << "* initSubMenu – One Fraction *\n"
         << "* 1. Creating                *\n"
         << "* 2. Updating                *\n"
         << "* 3. Returning               *\n"
         << "******************************\n"
         << "Select an option (use integer value only): "
         << endl;

    switch (optionSubST) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            return;
        default:
            cout << "WRONG OPTION!" << endl;            
    }
}