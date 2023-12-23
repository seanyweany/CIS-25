/**
 * Program Name: cis25Fall2023FinalUtilityYourNameSetup.cpp
 * Discussion:   Implementation File - Fraction Utility
 * Written By:   Someone
 * Date:         2023/12/10
 */

// Include and Header Files
#include <iostream>
#include "cis25Fall2023FinalFractionYourNameSetup.h"
#include "cis25Fall2023FinalFractionUtilityYourNameSetup.h"
#include "cis25Fall2023FinalUtilityYourNameSetup.h"
using namespace std;

// Function Definitions

void displayClassCodingStatementFL() {

    cout << "\n  While displayClassCodingStatementFL() is running!"
        << endl;
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
        "\n\n    - For functions without arguments, insert “void” in the"
        "\n      function prototypes!"
        "\n\n    - For functions without arguments, remove “void” in the"
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
        "\n\n    - Replacing FL with the initial of your first-name and"
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
        "\n          int usrInputFL;"
        "\n          int digitCountFL;"
        "\n          int absValueFL;"
        "\n          int tmpFL;"

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

        "\n\n  For the final exam, ADDTIONAL FUNCTIONS must be provided"
        "\n  only in the"
        "\n\n      cis25Fall2023FinalUtilityYourName.h and its"
        "\n      cis25Fall2023FinalUtilityYourName.c file!"
        "\n  ------------------------------"
    << endl;
}

void displayClassInfoFL() {

    cout << "\n  While displayClassInfoFL() is running!"
        "\n\n    TODO during final exam \n" << endl;
}

void displayVersionFL() {
    int last2DigitFL;

    cout << "\n\n  While displayVersionFL() is running!\n"
        "\n    Enter your last 2 digits of student ID: ";
    cin >> last2DigitFL;

    printf("\n  %d confirms the following -- \n"
        "\n    I will work with VERSION %d!\n", last2DigitFL,
        last2DigitFL % 2);
}

void displayPalindromeInfoFL(const Fraction& frRef) {
    cout << "\n  While displayPalindromeInfoFL() is running!"
        "\n    TODO during final exam!" << endl;
}

void initSubMenuFL(Fraction*& frRef) {
    int optionFL;

    do {
        cout <<
            "\n  ******************************"
            "\n  * initSubMenu - One Fraction *"
            "\n  *  1. Creating               *"
            "\n  *  2. Updating               *"
            "\n  *  3. Returning              *"
            "\n  ******************************"
            "\n  Select an option(integer only): ";
        cin >> optionFL;

        switch (optionFL) {
        case 1:
            if (frRef) {
                cout << "\n  Please update or return!" << endl;
            } else {
                cout << "\n  Creating 1 NEW Fraction object --"
                    "\n\n  Calling createFractionFL()!" << endl;

                createFractionFL(frRef);
            }
          
            break;
        case 2:
            if (frRef) {
                cout << "\n  Updating an EXISTING Fraction object -"
                    "\n\n  Calling updateFractionFL()!" << endl;

                updateFractionFL(frRef);
            } else {
                cout << "\n  Please create or return!" << endl;
            }

            break;
        case 3:
            cout << "\n  Returning to previous menu!" << endl;

            break;
        default:
            cout << "  WRONG OPTION!" << endl;
        }

    } while (optionFL != 3);
}

void runMenuFinalSetupFL() {
    int optionFL;
    Fraction* frPtrFL{ nullptr };

    do {
        cout <<
            "\n*****"
            "\n*  Main Menu Setup"
            "\n*    You must"
            "\n*      - Update to get proper and required display."
            "\n*      - Add code to perform the required tasks."
            "\n*      - Work with reasonable data and terms."

            "\n\n After updating the code and ready for taking the"
            "\n final exam,"
            "\n     - Run your updated code; and"
            "\n     - Capture the output on its entirety; and"
            "\n     - Paste the output to the PROGRAM OUTPUT; and"
            "\n     - Email DRIVER FILE ONLY with the SUBJECT LINE of"
            "\n\n           cis25Fall2023FinalExamYourNameSetup.c   \n"

            "\n***************************************************"
            "\n*                 MENU - Final Exam               *"
            "\n*  1. Setting Up Fraction through initSubMenuFL() *"
            "\n*  2. Calling displayPalindromeInfoFL()           *"
            "\n*  3. Printing Current Fraction                   *"
            "\n*  4. Quit                                        *"
            "\n***************************************************"
            "\nSelect an option(use integer value only): ";
        cin >> optionFL;

        switch (optionFL) {
        case 1:
            cout << "\nIINITIALIZING Option -"
                "\n\nCalling initSubMenuFL() -" << endl;

            initSubMenuFL(frPtrFL);

            break;
        case 2:
            cout << "\nCalling displayPalindromeInfoFL()"
                " Option -\n" << endl;

            displayPalindromeInfoFL(*frPtrFL);

            break;
        case 3:
            cout << "\nPRINTING Option -" 
                "\n  Using member function in this option!"
                << endl;

            if (frPtrFL) {
                frPtrFL->print();
            } else {
                cout << "\nThere is NO Fraction object!" << endl;
            }

            break;
        case 4:
            if (frPtrFL) {
                cout << "\nThe Fraction is at";
                frPtrFL->print();
                
                delete frPtrFL;
                frPtrFL = nullptr;

                cout << "\nThe Fraction is now removed!" << endl;
            }
          
            cout << "\nHaving Fun ...!" << endl;

            cout << "\n\nRemember to run and email a copy as detailed"
                "\nabove (and below) for BONUS!\n"
                
                "\n\n After updating the code and ready for taking the"
                "\n final exam,"
                "\n     - Run your updated code; and"
                "\n     - Capture the output on its entirety; and"
                "\n     - Paste the output to the PROGRAM OUTPUT; and"
                "\n     - Email DRIVER FILE ONLY with the SUBJECT LINE of"
                "\n\n           cis25Fall2023FinalExamYourNameSetup.c   \n"
                "\n";

            break;
        default:
            cout << "\nWRONG OPTION!" << endl;
        }
    } while (optionFL != 4);
}