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
		    "\n"
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
                cout << "\n\nCalling displayDigitInfoWithArrayST() -\n\n"
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

    int* aryIntST = new int[numIntST]; // taken from stackoverflow

    // initialize pointer array
    for (int i = 0; i < numIntST; i++) {
        cout << "    Enter integer #" << i + 1 << ": ";

        int idxInt;

        cin >> idxInt;

        *(aryIntST + i) = idxInt;
    }

    int countNO = 0; // negative & odd
    int countNE = 0; // negative & even
    int countPO = 0; // positive & odd
    int countPE = 0; // positive & even

    int occDigit[10]{0}; // occurence of digits 0-9

    int largestDigit = 0;
    int countLargestDigit = 0;
    int intContLargestDigit = 0;
    int* largestDigitPtr = new int[numIntST];

    // go through array of inputted numbers and store values
    for (int j = 0; j < numIntST; j++) {
        // Count up sign and parity
        if (*(aryIntST + j) > 0) {
            if (*(aryIntST + j) % 2 == 0) {
                countPE++;
            } else {
                countPO++;
            }
        } else {
            if (*(aryIntST + j) % 2 == 0) {
                countNE++;
            } else {
                countNO++;
            }
        }

        // parse through each digit in each number and store values
        int currentInt = *(aryIntST + j);
        while (currentInt) {
            occDigit[currentInt % 10]++;
            currentInt /= 10;            
            
            /*
            if (currentInt % 10 >= largestDigit)
            {
                largestDigit = currentInt % 10;
                countLargestDigit = occDigit[currentInt % 10];
                intContLargestDigit = *(aryIntST + j);
            }
            */
        }
    }

    cout << "\n    There is/are\n"
         << "      " << countNO << " negative and odd integer(s)\n"
         << "      " << countNE << " negative and even integer(s)\n"
         << "      " << countPO << " positive and odd integer(s)\n"
         << "      " << countPE << " positive and even integer(s)\n"
         << endl;

    cout << "    The digit(s) is/are found as follows," << endl;

    for (int k = 0; k < 10; k++) {
        cout << "      " << k << " seen " << occDigit[k] << " time(s)" << endl; 

        // find most frequent digit(s)
        if (occDigit[k] > countLargestDigit) {
            countLargestDigit = occDigit[k];
            largestDigit = k;
        }
    }

    cout << "\n    The most seen digit(s) is/are\n"
         << "      " << largestDigit << " seen " << countLargestDigit << " time(s), and\n"
         << "        " << largestDigit << " is found in\n"
         << endl;

    for (int l = 0; l < numIntST; l++) {
        int tmpST = *(aryIntST + l);
        
        while (tmpST) {
            if (tmpST % 10 == largestDigit) {
                cout << "          " << *(aryIntST + l) << endl;
                break; // learned in APCS (Java)
            }

            tmpST /= 10;
        }
    }    

    /*
      negative and odd integer(s)
      negative and even
      positive and odd
      positive and even

    The digit(s) is/are found as follows,
      0-9 seen x time(s)

    The most seen digit(s) is/are
      y seen x time(s), and
        y is found in
          #s
    */
}

/* PROGRAM_OUTPUT

*/

/** Logic_Code_output_Issues
 * Blah blah blah.
 */