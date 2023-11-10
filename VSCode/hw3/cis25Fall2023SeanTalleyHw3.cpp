/**
* Program Name: cis25Fall2023SeanTalleyHw3
* Discussion:   Homework #3
* Written By:   Sean Talley
* Date:         2023/10/10 - 2023/11/09
*/

// Include and Header Files
#include <iostream>
using namespace std;

// Function Definitions
void displayCodingStatementST(void);
void displayClassInfoHw3ST(void);

void runMenuHw3ST(void);
void displayDigitInfoWithArrayST(void);

// Application Driver
int main() {
    displayCodingStatementST();
    displayClassInfoHw3ST();

    runMenuHw3ST();

    return 0;
}

/* Functions Initialized */
void displayCodingStatementST() {
    cout << "We write code to manipulate data, which are\n"
		    "provided by the user(s), to produce the\n"
		    "required outcome in the most efficient way!\n"
		 << endl;
}

void displayClassInfoHw3ST() {
    cout << "CIS 25 - C++ Programming\n"
		    "Laney College\n"
		    "Sean Talley\n"
		    "\n"
		    "Information --\n"
		    "Assignment:               HW #3\n"
		    "Implemented by:           Sean Talley\n"
		    "Required Submission Date: 2023/11/09\n"
		    "Actual Submission Date:   2023/11/09\n"
            << endl;
}

void runMenuHw3ST() {
    int optionST;
    
    do {
        cout << "***************************************************\n"
                "* MENU - HW #3                                    *\n"
                "* (1) Calling displayDigitInfoWithArrayST()       *\n"
                "* (2) Quit                                        *\n"
                "***************************************************\n"
                "Enter an integer for option + ENTER: ";

        cin >> optionST;

        switch (optionST) {
            case 1:
                cout << "\nCalling displayDigitInfoWithArrayST() -\n\n"
                     << "  While displayDigitInfoWithArrayST() is running -\n"
                     << endl;

                displayDigitInfoWithArrayST();

                break;
            case 2:
                cout << "\nHave Fun!\n" << endl;
                
                break;
            default:
                cout << "\nWrong Option!\n" << endl;             
        }
    } while (optionST != 2);
}

void displayDigitInfoWithArrayST() {
    int numIntST;

    cout << "    How many integer(s)? ";
    cin >> numIntST;

    cout << endl;

    int* aryInputIntST = new int[numIntST];

    // initialize array pointer
    for (int i = 0; i < numIntST; i++) {
        cout << "    Enter integer #" << i + 1 << ": ";

        int idxIntST;

        cin >> idxIntST;

        *(aryInputIntST + i) = idxIntST;
    }

    int countNOST = 0; // negative & odd
    int countNEST = 0; // negative & even
    int countPOST = 0; // positive & odd
    int countPEST = 0; // positive & even

    int occDigitST[10]{0}; // occurence of digits 0-9

    int countFreqDigitST = 0; // most frequent occuring digit
    int* freqDigitPtrST = new int[numIntST]; // the input numbers which contain the frequent digit

    // go through array of inputted numbers and store counts
    for (int j = 0; j < numIntST; j++) {
        // count up sign and parity
        if (*(aryInputIntST + j) > 0) {
            if (*(aryInputIntST + j) % 2 == 0) {
                countPEST++;
            } else {
                countPOST++;
            }
        } else {
            if (*(aryInputIntST + j) % 2 == 0) {
                countNEST++;
            } else {
                countNOST++;
            }
        }

        int currentIntST = *(aryInputIntST + j) > 0 ? *(aryInputIntST + j) : -*(aryInputIntST + j);

        // parse through each digit in each number and store occurences
        while (currentIntST) {
            occDigitST[currentIntST % 10]++;
            currentIntST /= 10;            
        }
    }

    cout << "\n    There is/are\n"
         << "      " << countNOST << " negative and odd integer(s)\n"
         << "      " << countNEST << " negative and even integer(s)\n"
         << "      " << countPOST << " positive and odd integer(s)\n"
         << "      " << countPEST << " positive and even integer(s)\n"
         << endl;

    cout << "    The digit(s) is/are found as follows," << endl;

    for (int k = 0; k < 10; k++) {
        // don't print digits that aren't occurring
        if (occDigitST[k]) {
            cout << "      " << k << " seen " << occDigitST[k] << " time(s)" << endl; 
        }

        // find the most frequently occuring digit
        if (occDigitST[k] >= countFreqDigitST) {
            countFreqDigitST = occDigitST[k];
        }
    }

    int ptrIdxST = 0; // iterator for freqDigitPtrST

    // store numbers containing most frequent digit to pointer
    for (int l = 0; l < 10; l++) {
        if (occDigitST[l] == countFreqDigitST) {
            *(freqDigitPtrST + ptrIdxST++) = l;
        }
    }

    cout << "\n    The most seen digit(s) is/are" << endl;

    for (int m = 0; m < ptrIdxST; m++) {
        cout << "      " << *(freqDigitPtrST + m) << " seen " << countFreqDigitST << " time(s), and\n"
        << "        " << *(freqDigitPtrST + m) << " is found in"
        << endl;

        for (int n = 0; n < numIntST; n++) {
            int tmpST = *(aryInputIntST + n) > 0 ? *(aryInputIntST + n) : -*(aryInputIntST + n);
        
            // print numbers that contain most frequent digit
            while (tmpST) {
                if (tmpST % 10 == *(freqDigitPtrST + m)) {
                    cout << "          " << *(aryInputIntST + n) << endl;
                    break; // learned in APCS (Java)
                }

                tmpST /= 10;
            }
        }

        cout << endl;
    }

    delete []aryInputIntST;
    delete []freqDigitPtrST;
}

/* PROGRAM_OUTPUT
We write code to manipulate data, which are
provided by the user(s), to produce the
required outcome in the most efficient way!

CIS 25 - C++ Programming
Laney College
Sean Talley

Information --
Assignment:               HW #3
Implemented by:           Sean Talley
Required Submission Date: 2023/11/09
Actual Submission Date:   2023/11/09

***************************************************
* MENU - HW #3                                    *
* (1) Calling displayDigitInfoWithArrayST()       *
* (2) Quit                                        *
***************************************************
Enter an integer for option + ENTER: 6

Wrong Option!

***************************************************
* MENU - HW #3                                    *
* (1) Calling displayDigitInfoWithArrayST()       *
* (2) Quit                                        *
***************************************************
Enter an integer for option + ENTER: 1

Calling displayDigitInfoWithArrayST() -

  While displayDigitInfoWithArrayST() is running -

    How many integer(s)? 5

    Enter integer #1: -29
    Enter integer #2: 129142571
    Enter integer #3: 52
    Enter integer #4: -25904
    Enter integer #5: -245766

    There is/are
      1 negative and odd integer(s)
      2 negative and even integer(s)
      1 positive and odd integer(s)
      1 positive and even integer(s)

    The digit(s) is/are found as follows,
      0 seen 1 time(s)
      1 seen 3 time(s)
      2 seen 6 time(s)
      4 seen 3 time(s)
      5 seen 4 time(s)
      6 seen 2 time(s)
      7 seen 2 time(s)
      9 seen 3 time(s)

    The most seen digit(s) is/are
      2 seen 6 time(s), and
        2 is found in
          -29
          129142571
          52
          -25904
          -245766

***************************************************
* MENU - HW #3                                    *
* (1) Calling displayDigitInfoWithArrayST()       *
* (2) Quit                                        *
***************************************************
Enter an integer for option + ENTER: 1

Calling displayDigitInfoWithArrayST() -

  While displayDigitInfoWithArrayST() is running -

    How many integer(s)? 5

    Enter integer #1: 129142571
    Enter integer #2: -2914258
    Enter integer #3: -29258
    Enter integer #4: 22581
    Enter integer #5: -1134311

    There is/are
      1 negative and odd integer(s)
      2 negative and even integer(s)
      2 positive and odd integer(s)
      0 positive and even integer(s)

    The digit(s) is/are found as follows,
      1 seen 9 time(s)
      2 seen 8 time(s)
      3 seen 2 time(s)
      4 seen 3 time(s)
      5 seen 4 time(s)
      7 seen 1 time(s)
      8 seen 3 time(s)
      9 seen 3 time(s)

    The most seen digit(s) is/are
      1 seen 9 time(s), and
        1 is found in
          129142571
          -2914258
          22581
          -1134311

***************************************************
* MENU - HW #3                                    *
* (1) Calling displayDigitInfoWithArrayST()       *
* (2) Quit                                        *
***************************************************
Enter an integer for option + ENTER: 1

Calling displayDigitInfoWithArrayST() -

  While displayDigitInfoWithArrayST() is running -

    How many integer(s)? 4

    Enter integer #1: 1221
    Enter integer #2: -1221
    Enter integer #3: -2222
    Enter integer #4: 1111

    There is/are
      1 negative and odd integer(s)
      1 negative and even integer(s)
      2 positive and odd integer(s)
      0 positive and even integer(s)

    The digit(s) is/are found as follows,
      1 seen 8 time(s)
      2 seen 8 time(s)

    The most seen digit(s) is/are
      1 seen 8 time(s), and
        1 is found in
          1221
          -1221
          1111

      2 seen 8 time(s), and
        2 is found in
          1221
          -1221
          -2222

***************************************************
* MENU - HW #3                                    *
* (1) Calling displayDigitInfoWithArrayST()       *
* (2) Quit                                        *
***************************************************
Enter an integer for option + ENTER: 2

Have Fun!

*/

/** Logic_Code_output_Issues
 * I didn't detect any issues with the output. It looks fine
 * from what I can see and it *should* be 1:1 to the example.
 */