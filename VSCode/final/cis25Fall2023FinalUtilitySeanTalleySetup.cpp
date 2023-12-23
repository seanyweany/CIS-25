/**
 * Program Name: cis25Fall2023FinalUtilitySeanTalleySetup.cpp
 * Discussion:   Implementation File - Fraction Utility
 * Written By:   Sean Talley
 * Date:         2023/12/10 - 2023/12/14
 */

// Include and Header Files
#include <iostream>
#include "cis25Fall2023FinalFractionSeanTalleySetup.h"
#include "cis25Fall2023FinalFractionUtilitySeanTalleySetup.h"
#include "cis25Fall2023FinalUtilitySeanTalleySetup.h"
using namespace std;

// Function Definitions

void displayClassCodingStatementST() {
    cout << "\n  We write code to manipulate data (which are"
        "\n  provided by the user) to produce the"
        "\n  required outcome in the most efficient way!"

        "\n\n  For Code Convention and Style -\n"
        "\n    Again, writing code is not just the code works."
        "\n    It also involves care, patience, coding idioms + forms,"
        "\n    and other reminders. Please see the posted code written"
        "\n    in class and the explanation of coding convention"
        "\n    C/CPP file."
        "\n\n    AND\n"
        "\n    If writing in C, you are only allowed to use printf()"
        "\n    and scanf() from the stdio.h header. You will write"
        "\n    everything else by yourself."
        "\n\n    If writing in C++, you are only allowed to use"
        "\n    cout and cin from the iostream header. You will write"
        "\n    everything else by yourself.\n"
        "\n    ALSO,"
        "\n\n    - Including PROGRAM COMMENT block!"
        "\n\n    - Inserting required Comment lines!"
        "\n\n    - Removing unnecessary blank lines!"
        "\n\n    - If needed, 1 blank line is sufficient!"
        "\n\n    - Keeping lines to be reasonable short; for examples,"
        "\n      around 65 characters!"
        "\n\n    - For functions without arguments, insert �void� in the"
        "\n      function prototypes!"
        "\n\n    - For functions without arguments, remove �void� in the"
        "\n      argument list of the function definitions!"
        "\n\n    - Keeping indentation levels with the same consistently!"
        "\n\n    - Declaring all variables at the top of function!"
        "\n\n    - Declaring one variable per line except for the indices!"
        "\n\n    - Using better name!"
        "\n\n    - Following the naming rules!"
        "\n\n    - Removing all comments that are not required!"
        "\n\n    - Inserting proper spaces around '(', ')', '{',"
        "\n      and operators!"
        "\n\n    - Using proper code idioms, and efficient operators and"
        "\n      styles!"
        "\n\n    - Paying attention to the exact layout of the required"
        "\n      output to earn full credits!"
        "\n\n    - Replacing ST with the initial of your first-name and"
        "\n      last-name!\n"

        "\n\n  For Operational Code -\n"
        "\n\n    - No global variables/values!"
        "\n\n    - No extern setups!"
        "\n\n    - Menu must be a combination of do - while and switch"
        "\n      structures, and it has no arguments!"
        "\n\n    - Use initialization with proper initial value!"
        "\n\n    - If C++, you must use proper uniform initialization."
        "\n\n    - Variables may not need to be initialized!"
        "\n\n    - If it is C++ coding, then"
        "\n        \"string\" class is not allowed in this class. For the"
        "\n        classes that are not written by you, only ostream"
        "\n        (for cout) and istream(for cin) are allowed."
        "\n        You are only allowed to use cout and cin from"
        "\n        the iostream header."
        "\n\n    - Again, uniform initialization!"
        "\n\n    - All pointers must have values; that means initial"
        "\n      address or setting address."
        "\n\n    - After releasing the dynamic block, its pointer"
        "\n      must be reset to NULL(in C) or nullptr (in C++)."
        "\n\n    - Dynamic objects and data->Memory management!"
        "\n\n    - In C, you are allowed to use only malloc() and "
        "\n      free()."
        "\n\n    - In C++, you must use \"new\" and \"delete\" "
        "operators"
        "\n\n    - In C/C++, do not write"
        "\n          someVariable = -1 * somevariable;"
        "\n          someIncrement = someIncrement + 1;"
        "\n          if (someTestingValue != 0)"
        "\n          while (someTestingValue != 0)"
        "\n\n    - In C/C++, do write"
        "\n          someVariable = -somevariable;"
        "\n          someIncrement++;"
        "\n          if (someTestingValue)"
        "\n          while (someTestingValue)"
        "\n\n\n    - Use proper code idioms, and efficient operators"
        "\n      and styles!"
        "\n\n    - Write your own code!"
        "\n\n    - Except for the member data, member functions,"
        "\n      function arguments and local variables within"
        "\n      member functions, and indices of i, j, k, etc., all"
        "\n      other variables must have the initials of your"
        "\n      first-name and last name added to the end of"
        "\n      the variable names."

        "\n\n    - For examples,"
        "\n          int usrInputST;"
        "\n          int digitCountST;"
        "\n          int absValueST;"
        "\n          int tmpST;"

        "\n\n          // Function Prototypes"
        "\n          void doGood(void);"
        "\n          void displayDigit(int);"
        "\n\n          // Function Definitions"
        "\n\n          void doGood() {"
        "\n\n              // Function Body"
        "\n          }"
        "\n\n          void displayDigit(int arg) {"
        "\n \n             // Function Body"
        "\n          }"

        "\n\n    - All stand - alone function names must have the"
        "\n      initials of your first-name and last-name"
        "\n      appended at the end."
        "\n\n    - All filenames must have your complete first-name"
        "\n      and last-name appended as required."

        "\n\n  For OUTPUT and Copy of OUTPUT -\n"
        "\n    After copying the output to the driver, do not"
        "\n    manually modify / change / insert text for the"
        "\n    output of your code!You will get zero(0) for the work!"
        "\n    I willrun your code and know if you manually alter the"
        "\n    pasted output as submitted in your C / C++"
        "\n    (and header) files!"

        "\n\n  For LOGIC_CODE_OUTPUT_Issues block -\n"
        "\n    Do not forget this block!"

        "\n\n  For the final exam, NO ADDITIONAL FUNCTIONS are ALLOWED!"
        "\n\n++++++++++"
    << endl;
}

void displayClassInfoST() {

    cout << "\n  While displayClassInfoST() is running!"
            "\n\n  CIS 25 – Introduction to Programming (Using C++)"
            "\n  Laney College"
            "\n  Sean Talley"
            "\n\n  Information --"
            "\n    Assignment:               Final Exam"
            "\n    Implemented by:           Sean Talley"
            "\n    Required Submission Date: 2023/12/14"
            "\n\n++++++++++"
         << endl;
}

void displayVersionST() {
    int last2DigitST;

    cout << "\n\n  While displayVersionST() is running!\n"
            "\n    Enter your last 2 digits of student ID: ";
    cin >> last2DigitST;

    printf("\n  %d confirms the following -- \n"
           "\n    I will work with VERSION %d!\n"
           "\n++++++++++\n", last2DigitST, last2DigitST % 2);
}

void displayPalindromeInfoST(const Fraction* frPtr) {
    int tmpNumeratorST;
    int tmpDenomST;

    int countUniqueOddST = 0;
    int smallestUniqueOddST = 9;
    int occSmallestUniqueOdd = 9;

    int aryUniqueOdd[5]{0};
    int whereLocated[5]{0};

    cout << "\n  While Calling displayPalindromeInfoST() is running -" << endl;

    if (frPtr) {
        tmpNumeratorST = (*frPtr).getNum() < 0 ? -(*frPtr).getNum() : (*frPtr).getNum();
        tmpDenomST = (*frPtr).getDenom() < 0 ? -(*frPtr).getDenom() : (*frPtr).getDenom();

        if (isPalindromeST(frPtr)) {
            cout << "\n  The Fraction is a Palindrome!" << endl;

            while (tmpNumeratorST) {
                if ((tmpNumeratorST % 10) % 2 != 0) {
                    if (aryUniqueOdd[(tmpNumeratorST % 10) / 2] == 0) {
                        countUniqueOddST++;
                        whereLocated[(tmpNumeratorST % 10) / 2]++;
                    }

                    aryUniqueOdd[(tmpNumeratorST % 10) / 2]++;
                }

                tmpNumeratorST /= 10;
            }

            while (tmpDenomST) {
                if ((tmpDenomST % 10) % 2 != 0) {
                    if (aryUniqueOdd[(tmpDenomST % 10) / 2] == 0) {
                        countUniqueOddST++;

                        if (whereLocated[(tmpDenomST % 10) / 2] == 1) {
                            whereLocated[(tmpDenomST % 10) / 2]++;
                        } else if (!whereLocated[(tmpDenomST % 10) / 2]) {
                            whereLocated[(tmpDenomST % 10) / 2] = 3;
                        }
                    }

                    aryUniqueOdd[(tmpDenomST % 10) / 2]++;
                }

                tmpDenomST /= 10;
            }

            for (int i = 0; i < 5; i++) {
                if (aryUniqueOdd[i] < occSmallestUniqueOdd && aryUniqueOdd[i] > 0 && whereLocated[i] != 2) {
                    smallestUniqueOddST = i * 2 + 1;
                    occSmallestUniqueOdd = aryUniqueOdd[i];
                }
            }

            

            cout << "\n  There is/are " << countUniqueOddST << " unique odd digit(s) found in the Fraction."
                    "\n\n  The smallest unique odd digit that occurs the least"
                    "\n  number of times and only seen either in the numerator or"
                    "\n  denominator but not both is"
                    "\n\n    " << smallestUniqueOddST << " seen " << occSmallestUniqueOdd << " time(s) in the ";

            if (whereLocated[smallestUniqueOddST / 2] == 1) {
                cout << "numerator!" << endl;
            } else if (whereLocated[smallestUniqueOddST / 2] == 3) {
                cout << "denominator!" << endl;
            }

        } else {
            cout << "\n  The Fraction is not a Palindrome!" << endl;;
        }
    } else {
        cout << "\n    No Fraction!" << endl;
    }
}

void initSubMenuST(Fraction*& frRef) {
    int optionST;

    do {
        cout <<
            "\n  ******************************"
            "\n  * initSubMenu - One Fraction *"
            "\n  *  1. Creating               *"
            "\n  *  2. Updating               *"
            "\n  *  3. Returning              *"
            "\n  ******************************"
            "\n  Select an option (integer only): ";
        cin >> optionST;

        switch (optionST) {
        case 1:
            if (frRef) {
                cout << "\n  Please update or return!" << endl;
            } else {
                cout << "\n  Creating 1 NEW Fraction object --"
                    "\n\n  Calling createFractionST()!" << endl;

                createFractionST(frRef);
            }
          
            break;
        case 2:
            if (frRef) {
                cout << "\n  Updating an EXISTING Fraction object -"
                    "\n\n  Calling updateFractionST()!" << endl;

                updateFractionST(frRef);
            } else {
                cout << "\n  Please create or return!" << endl;
            }

            break;
        case 3:
            cout << "\n  Returning to previous menu!" << endl;

            break;
        default:
            cout << "  Wrong Option!" << endl;
        }

    } while (optionST != 3);
}

void runMenuFinalSetupST() {
    int optionST;
    Fraction* frPtrST{ nullptr };

    do {
        cout << "\n***************************************************"
                "\n*               MENU - Final Exam 1O              *"
                "\n*  1. Setting Up Fraction through initSubMenuST() *"
                "\n*  2. Calling displayPalindromeInfoST()           *"
                "\n*  3. Printing Current Fraction                   *"
                "\n*  4. Quit                                        *"
                "\n***************************************************"
                "\nSelect an option (use integer value only): ";

        cin >> optionST;

        switch (optionST) {
        case 1:
            cout << "\nIINITIALIZING Option -"
                "\n\nCalling initSubMenuST() -" << endl;

            initSubMenuST(frPtrST);

            break;
        case 2:
            cout << "\nCalling displayPalindromeInfoST()!" << endl;

            displayPalindromeInfoST(frPtrST);

            break;
        case 3:
            cout << "\nPRINTING Option -" 
                "\n  Using member function in this option!"
                << endl;

            if (frPtrST) {
                frPtrST->print();
            } else {
                cout << "\n  No Fraction built!" << endl;
            }

            break;
        case 4:
            delete frPtrST;
          
            cout << "\nHave a great Holiday Season!" << endl;
            break;
        default:
            cout << "\nWrong Option!" << endl;
        }
    } while (optionST != 4);
}