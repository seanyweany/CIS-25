/**
 * Program Name: cis25Fall20231003.cpp
 * Discussion:   Arrays and Functions
 * Written By:   Someone
 * Date:         2023/10.03
 */

// Include and Header Files
#include <iostream>
using namespace std;

// Function Prototypes

void test20230912(void);
void test0914(void);
void testNegativeZeroPositive(void);
void testEvenOdd(void);

void displayEvenOdd(int arg); // #1 : Advertizing the 
                              //      the existence of the
                              //      function.

                              // #2 : Helping how to call
void displayDigitCount(void);
void displayDigitCount2(void);
void runMenuHw2Version1(void);
void testHw2(void);
void displayDigit0Count(void);
void runMenuHw2Version2(void);
void displayDayOfWeek(int);
void displayDayOfWeekWithSwitch(int);
void runMenuHw2Version3(void);
void testAry(void);
void testAry2(void);

void processAry(void);

void updateAry(int ary[], int size);

void testPointer(void);

// Application Driver
int main() {
    int iAry1[5];

    processAry();

    return 0;
}

// Function Definition

void testPointer() {
    int* iPointer{ nullptr }; // iPointer is a variable that
                              // will hold an address of an int
}

void updateAry(int ary[], const int size) {

    // TODO's
    for (int i = 0; i < size; i++) {
        cout << "\nEnter a value for element #" << i << " ";
        cin >> ary[i];
    }

    for (int i = 0; i < size; i++) {
        ary[i] *= ary[i];
    }
}

void processAry() {
    int iAry1[5];
    //int localVar;

    // 1. Update elements with new values
    updateAry(iAry1, 5);

    //updateAry(&localVar, 10); // BAD
    
    // 2. Sort the array

}

void testAry2() {
    int digitCountAry[10]{ 0 };
    
    int usrInput;
    int digit0Count{ 0 };
    int tmp;

    cout << "Enter an int to be used for digit 0: ";
    cin >> usrInput;

    tmp = (usrInput < 0) ? -usrInput : usrInput;

    do {
        for (int i = 0; i < 10; i++) {
            if (i == tmp % 10) {
                digitCountAry[i]++;
            }
        }

        tmp /= 10;
    } while (tmp);
}

void testAry() {
    int digitCountAry[10]{0};
    int evenCount[5]{ 1 }; // partial initialization
                           // put 1 to element of index 0
                           // fill all the rest with 0
    int oddCount[5]{ 0, -1 }; // put 0 to [0]
                              // put -1 to [1]
                              // fill the rest with 0

    int usrInput;
    int digit0Count{ 0 };
    int tmp;

    // A constant variable is a variable that must have
    // a value as soon as it is declared AND one cannot
    // change this value.

    // An array variable is a constant variable

    //evenCount = oddCount;

    cout << "\ndigitCountAry : " << digitCountAry 
        << "\nevenCount : " << evenCount
        << "\noddCount : " << oddCount << endl;

    cout << "\n A value from the evenCount array : "
        << evenCount[0] << endl;

    cout << "\n A value from the digitCountAry array : "
        << digitCountAry[0] << endl;

    //digitCountAry[0] = 0;

    //evenCount[15];

    cout << "Enter an int to be used for digit 0: ";
    cin >> usrInput;

    tmp = (usrInput < 0) ? -usrInput : usrInput;

    //digitCountAry[0] = 0;
    do {
        for (int i = 0; i < 10; i++) {
            if (i == tmp % 10) {
                digitCountAry[i]++;
            }
        }

        tmp /= 10;
    } while (tmp);




    for (int i = 0; i < 10; i++) {
        digitCountAry[0] = 0;
        do {
            if (tmp % 10 == 0) {
                //digit0Count++;
                digitCountAry[0]++;
            }

            tmp /= 10;
        } while (tmp);
    }

    digitCountAry[0] = 0;
    do {
        if (usrInput % 10 == 0) {
            //digit0Count++;
            digitCountAry[0]++;
        }

        usrInput /= 10;
    } while (usrInput);

    cout << "\nThere is/are " << digitCountAry[0]
        << " digit(s) of 0!" << endl;

    cout << "Enter an int to be used for digit 1: ";
    cin >> usrInput;

    digitCountAry[1] = 0;
    do {
        if (usrInput % 10 == 1) {
            //digit0Count++;
            digitCountAry[1]++;
        }

        usrInput /= 10;
    } while (usrInput);

    //cout << "\nThere is/are " << digit0Count 
    //<< " digit(s) of 0!" << endl;

    cout << "\nThere is/are " << digitCountAry[1] 
        << " digit(s) of 1!" << endl;
}

void runMenuHw2Version3() {
    int option;

    do {
        cout << "\n Menu"
            "\n1. Calling displayDigit0Count()"
            "\n2. Quit"
            "\nEnter the option: ";
        cin >> option;

        switch (option) {
        case 1:
            cout << "\nCalling displayDigit0Count()" << endl;
            displayDigit0Count();

            break;
        case 2:
            cout << "\nHave fun!" << endl;

            break;
        default:
            cout << "\nWrong Option!" << endl;
        }
    } while (option != 2);
}

void displayDayOfWeekWithSwitch(int arg) {
    switch (arg) {
    case 1:
        cout << "\nSunday!" << endl;

        break;
    case 2:
        cout << "\nMonday!" << endl;

        break;
    case 3:
        cout << "\Tuesday!" << endl;

        break;
    case 4:
        cout << "\nWednesday!" << endl;

        break;
    default:
        cout << "\nHave fun!" << endl;
    } 
}

void displayDayOfWeek(int arg) {
    if (arg == 1) {
        cout << "\nSunday!" << endl;
    } else if (arg == 2) {
        cout << "\nMonday!" << endl;
    } else if (arg == 3) {
        cout << "\Tuesday!" << endl;
    } else if (arg == 4) {
        cout << "\nWednesday!" << endl;
    } else {
        cout << "\nHave fun!" << endl;
    }
}

void runMenuHw2Version2() {
    int option;

    do {
        cout << "\n Menu"
            "\n1. Calling displayDigit0Count()"
            "\n2. Quit"
            "\nEnter the option: ";
        cin >> option;

        if (option == 1) {
            cout << "\nCalling displayDigit0Count()" << endl;

            displayDigit0Count();
        } else if (option == 2) {
            cout << "\nHave fun!" << endl;
        } else {
            cout << "\nWrong Option!" << endl;
        }

    } while (option != 2);
}

void displayDigit0Count() {
    int usrInput;
    int digit0Count{ 0 };

    cout << "Enter an int: ";
    cin >> usrInput;

    do {
        if (usrInput % 10 == 0) {
            digit0Count++;
        }
        
        usrInput /= 10;
    } while (usrInput);

    cout << "\nThere is/are " << digit0Count << " digit(s) of 0!" << endl;
}

void testHw2() {
    int usrInput;
    int digitCount{ 0 };

    cout << "Enter an int: ";
    cin >> usrInput;

    do {
        digitCount++;

        usrInput /= 10;
    } while (usrInput);

    cout << "\nThere is/are " << digitCount << " digit(s)!" << endl;
}

void runMenuHw2Version1() {
    int option;

    do {
        cout << "\n Menu"
            "\n1. Calling testHw2()"
            "\n2. Quit"
            "\nEnter the option: ";
        cin >> option;

        if (option == 1) {
            cout << "\nCalling testHw2()" << endl;

            testHw2();
        } else if (option == 2) {
            cout << "\nHave fun!" << endl;
        } else {
            cout << "\nWrong Option!" << endl;
        }

    } while (option != 2);
}

void displayDigitCount2() {
    int usrInput;
    int digitCount{ 0 };

    cout << "Enter an int: ";
    cin >> usrInput;

    do {
        digitCount++;

        usrInput /= 10;
    } while (usrInput);
    //} while (usrInput != 0);


    //if (usrInput == 0) {
    //    digitCount++;
    //}

    //if (usrInput < 0) {
    //    usrInput = -usrInput;
    //}

    //while (usrInput != 0) {
    //    digitCount++;
    //
    //    usrInput = usrInput / 10;
    //}

    /*
    while (usrInput > 0) {
        digitCount++;

        usrInput = usrInput / 10;
    }
    */

    cout << digitCount << endl;
}

void displayDigitCount() {
    int usrInput;
    int digitCount{ 0 };

    cout << "Enter an int: ";
    cin >> usrInput;

    if (usrInput == 0) {
        digitCount++;
    }

    if (usrInput < 0) {
        usrInput = -usrInput;
    }

    while (usrInput > 0) {
        digitCount++;

        usrInput = usrInput / 10;
    }

    cout << digitCount << endl;
}

void displayEvenOdd(int arg) {
    //cout << 
    (arg % 2) ? (cout << arg << " is odd!" << endl)
        : (cout << arg << " is even!" << endl);

    //(arg % 2) ? (cout << arg << " is odd!" << endl)
    //    : 5;
}

void testEvenOdd() {
    int usrInput;

    cout << "\nEnter an int: ";
    cin >> usrInput;

    if (usrInput % 2 == 0) {
        cout << usrInput << " is even!" << endl;
    }

    if (usrInput % 2 != 0) {
        cout << usrInput << " is odd!" << endl;
    }

    if (usrInput % 2 == 0) {
        cout << usrInput << " is even!" << endl;
    } else {
        cout << usrInput << " is odd!" << endl;
    }

    if (usrInput % 2) {
        cout << usrInput << " is odd!" << endl;
    } else {
        cout << usrInput << " is even!" << endl;
    }

    (usrInput % 2) ? (cout << usrInput << " is odd!" << endl)
        : (cout << usrInput << " is even!" << endl);
}

void testNegativeZeroPositive() {
    int usrInput;

    cout << "\nEnter an int: ";
    cin >> usrInput;

    if (usrInput == 0) {
        cout << "\n0 is even!" << endl;
    } else {
        cout << "\nusrInput : " << " is "
            << (usrInput < 0 ? "negative" : "positive")
            << " and " << (usrInput % 2 == 0 ? "even" : "odd")
            << "!" << endl;
    }
}

void test0914() {

    cout << "Information --\n"
            "  Assignment:               HW #1 Exercise #1\n"
            "  Implemented by:           Your Name\n"
        << endl;
}

void test20230912() {
    int usrInput; // statement : declaring a variable
              // declaration 
    int absValue; // camel case naming style

    double house_price; // snake case naming style

    //cout << usrInput << endl;

    // error C4700: uninitialized local variable 'usrInput' used

    std::cout << "\nThe number of bytes used to store an int: "
        << sizeof(3650000) << std::endl;

    std::cout << "\nThe number of bytes used to store an int: "
        << sizeof(-365) << std::endl;

    cout << "\nThe number of bytes used to store an int: "
        << sizeof(0) << endl;
    cout << "\nThe number of bytes used to store an int: "
        << sizeof(int) << endl;


    usrInput = 365; // assigning or storing a value to usrInput
                    // ';' is called the statement terminator
    //=;

    //56 = usrInput;

    usrInput;

    56;

    cout << usrInput;

    cout << 365 << endl;

    cout << usrInput << endl;

    //usrInput = 5000000000;

    cout << usrInput << endl;

    cout << &usrInput << endl;

    usrInput = -18;

    //test();

    cout << usrInput << endl;

    cout << &usrInput << endl;

    cout << "\nEnter an int: ";
    cin >> usrInput; // >> extraction operator

    if (usrInput < 0) {
        absValue = -1 * usrInput;
    } else {
        absValue = usrInput;
    }

    absValue = usrInput;



    if (usrInput < 0) {
        absValue = -1 * usrInput;
    }

    absValue = (usrInput < 0) ? -usrInput : usrInput;

    (usrInput < 0) ? -usrInput : usrInput;

    5 + 6;

    5;

    //+;

    cout << "Test a \nnew line!" << endl;

    cout << "Test a second \nnew line!" << endl;

    if (-13478 < 0) {
        cout << "\nNegative!" << endl;
    }
}

/* Program Output
// OUTPUT- Sample Run #1
Information --
  Assignment:               HW #1 Exercise #1
  Implemented by:           Your Name

// OUTPUT- Sample Run #2
Information --
  Assignment:               HW #1 Exercise #1
  Implemented by:           Your Name

*/

/* Logic_Code_Output Issues
When I ran the code, the output is OK. When I copied and pasted
the output to the *.cpp code, something happened
*/