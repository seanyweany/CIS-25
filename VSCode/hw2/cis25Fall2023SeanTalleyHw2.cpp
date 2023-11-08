/**
* Program Name: cis25Fall2023SeanTalleyHw2
* Discussion:   Homework #2
* Written By:   Sean Talley
* Date:         2023/10/07
*/

// Include/Header File(s)
#include <iostream>
using namespace std;

// Declared Functions
void displayCodingStatementST();
void displayClassInfoHw2ST();
void runMenuHw2ST();
void displayDigitInfoST(int intputInt);

// Application Driver
int main() {
    displayCodingStatementST();
    displayClassInfoHw2ST();

    runMenuHw2ST();

    return 0;
}

/* Functions Initialized */

void displayCodingStatementST() {
    cout << "We write code to manipulate data, which are\n"
		    "provided by the user(s), to produce the\n"
		    "required outcome in the most efficient way!\n"
		    "\n"
		 << endl;
}

void displayClassInfoHw2ST() {
    cout << "CIS 25 - C++ Programming\n"
		    "Laney College\n"
		    "Sean Talley\n"
		    "\n"
		    "Information --\n"
		    "Assignment:               HW #2\n"
		    "Implemented by:           Sean Talley\n"
		    "Required Submission Date: 2023/10/07\n"
		    "Actual Submission Date:   2023/10/07\n"
            << endl;
}

void runMenuHw2ST() {
    int optionST;
    
    do {
        cout << "******************************************\n"
                "* MENU - HW #2                           *\n"
                "* (1) Calling displayDigitInfoST()       *\n"
                "* (2) Quit                               *\n"
                "******************************************\n"
                "Enter an integer for option + ENTER: ";

        cin >> optionST;

        switch (optionST) {
            case 1:
                cout << "\nEnter an integer: ";

                int inputIntST;
                cin >> inputIntST;

                cout << "\nCalling displayDigitInfoST() with an argument of\n  "
                     << inputIntST 
                     << "\n\n  While displayDigitInfoST() is running -\n"
                     << endl;

                displayDigitInfoST(inputIntST);

                break;
            case 2:
                cout << "\nHave Fun!\n" << endl;
                
                break;
            default:
                cout << "\nWrong Option!\n" << endl;             
        }
    } while (optionST != 2);
}

void displayDigitInfoST(int inputIntST) {
    int tmpST = (inputIntST < 0) ? -inputIntST : inputIntST; // Absolute value
    int digitCountAryST[10]{0};

    // Fill digitCountAryST
    do {
        digitCountAryST[tmpST % 10]++;

        tmpST /= 10;
    } while (tmpST);

    // Check if input is 0
    if (inputIntST) {
        cout << "  " << inputIntST << " is " << (inputIntST < 0 ? "negative" : "positive") << " and " << (inputIntST % 2 == 0 ? "even!" : "odd!") << endl;
        cout << "  " << inputIntST << " has ";

        int digitCountST = 0, evenCountST = 0, oddCountST = 0, evenLargestST = 0, evenLargestCountST = 0, oddLargestST = 0, oddLargestCountST = 0;
        int evenCountAryST[5]{0}; // Stores occurrences of even numbers by index (1st index: 2; 2nd index: 4, etc.)
        int oddCountAryST[5]{0}; // Same as above but for odd (0th index: 1; 1st index: 3, etc.)

        // Go through digitCountAryST and store important even/odd values
        for (int i = 0; i < sizeof(digitCountAryST) / sizeof(digitCountAryST[0]); i++) {        
            digitCountST += digitCountAryST[i];
            
            if (i % 2 == 0) {
                evenCountST += digitCountAryST[i];
                evenCountAryST[i / 2] = digitCountAryST[i];              
            } else {
                oddCountST += digitCountAryST[i];
                oddCountAryST[i / 2] = digitCountAryST[i];
            }
        }

        cout << digitCountST << " digit(s).\n" << endl; 

        cout << "  There is/are " << evenCountST << " even digit(s) of\n";

        // Go through evenCountAryST for important even values
        for (int j = 0; j < sizeof(evenCountAryST) / sizeof(evenCountAryST[0]); j++) {
            if (evenCountAryST[j] != 0) {
                cout << "    " << j * 2 << " seen " << evenCountAryST[j] << " time(s)" << endl;

                if (evenCountAryST[j] >= evenLargestCountST) {
                    evenLargestST = j * 2;
                    evenLargestCountST = evenCountAryST[j];
                }
            }
        }

        cout << "\n  There is/are " << oddCountST << " odd digit(s) of\n";

        // Go through oddCountAryST for important odd values
        for (int k = 0; k < sizeof(oddCountAryST) / sizeof(oddCountAryST[0]); k++) {
            if (oddCountAryST[k] != 0) {
                cout << "    " << k * 2 + 1 << " seen " << oddCountAryST[k] << " time(s)" << endl;

                if (oddCountAryST[k] >= oddLargestCountST) {
                    oddLargestST = k * 2 + 1;
                    oddLargestCountST = oddCountAryST[k];
                }
            }
        }

        cout << "\n  The largest even digit with the largest occurrence is\n    " << evenLargestST << " seen " << evenLargestCountST << " time(s)" << "\n" << endl;
        cout << "  The largest odd digit with the largest occurrence is\n    " << oddLargestST << " seen " << oddLargestCountST << " time(s)" << "\n" << endl;
    } else {
        cout << "  0 is given!\n" << endl;
    }
}

/* PROGRAM_OUTPUT
We write code to manipulate data, which are
provided by the user(s), to produce the
required outcome in the most efficient way!


CIS 25 - C++ Programming
Laney College
Sean Talley

Information --
Assignment:               HW #2
Implemented by:           Sean Talley
Required Submission Date: 2023/10/07
Actual Submission Date:   2023/10/07

******************************************
* MENU - HW #2                           *
* (1) Calling displayDigitInfoST()       *
* (2) Quit                               *
******************************************
Enter an integer for option + ENTER: 6

Wrong Option!

******************************************
* MENU - HW #2                           *
* (1) Calling displayDigitInfoST()       *
* (2) Quit                               *
******************************************
Enter an integer for option + ENTER: -1

Wrong Option!

******************************************
* MENU - HW #2                           *
* (1) Calling displayDigitInfoST()       *
* (2) Quit                               *
******************************************
Enter an integer for option + ENTER: 1

Enter an integer: -29

Calling displayDigitInfoST() with an argument of
  -29

  While displayDigitInfoST() is running -

  -29 is negative and odd!
  -29 has 2 digit(s).

  There is/are 1 even digit(s) of
    2 seen 1 time(s)

  There is/are 1 odd digit(s) of
    9 seen 1 time(s)

  The largest even digit with the largest occurrence is
    2 seen 1 time(s)

  The largest odd digit with the largest occurrence is
    9 seen 1 time(s)

******************************************
* MENU - HW #2                           *
* (1) Calling displayDigitInfoST()       *
* (2) Quit                               *
******************************************
Enter an integer for option + ENTER: 1

Enter an integer: -294257

Calling displayDigitInfoST() with an argument of
  -294257

  While displayDigitInfoST() is running -

  -294257 is negative and odd!
  -294257 has 6 digit(s).

  There is/are 3 even digit(s) of
    2 seen 2 time(s)
    4 seen 1 time(s)

  There is/are 3 odd digit(s) of
    5 seen 1 time(s)
    7 seen 1 time(s)
    9 seen 1 time(s)

  The largest even digit with the largest occurrence is
    2 seen 2 time(s)

  The largest odd digit with the largest occurrence is
    9 seen 1 time(s)

******************************************
* MENU - HW #2                           *
* (1) Calling displayDigitInfoST()       *
* (2) Quit                               *
******************************************
Enter an integer for option + ENTER: 1

Enter an integer: 552944428

Calling displayDigitInfoST() with an argument of
  552944428

  While displayDigitInfoST() is running -

  552944428 is positive and even!
  552944428 has 9 digit(s).

  There is/are 6 even digit(s) of
    2 seen 2 time(s)
    4 seen 3 time(s)
    8 seen 1 time(s)

  There is/are 3 odd digit(s) of
    5 seen 2 time(s)
    9 seen 1 time(s)

  The largest even digit with the largest occurrence is
    4 seen 3 time(s)

  The largest odd digit with the largest occurrence is
    5 seen 2 time(s)

******************************************
* MENU - HW #2                           *
* (1) Calling displayDigitInfoST()       *
* (2) Quit                               *
******************************************
Enter an integer for option + ENTER: 1

Enter an integer: 0

Calling displayDigitInfoST() with an argument of
  0

  While displayDigitInfoST() is running -

  0 is given!

******************************************
* MENU - HW #2                           *
* (1) Calling displayDigitInfoST()       *
* (2) Quit                               *
******************************************
Enter an integer for option + ENTER: 2

Have Fun!

*/

/** Logic_Code_output_Issues
 * I don't think there were/are any issues with the output.
 * I was happy to include all of the little indentation
 * details and the syntax is identical to my judgement. :>
 */